#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821274D8"))) PPC_WEAK_FUNC(sub_821274D8);
PPC_FUNC_IMPL(__imp__sub_821274D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821274E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x82127504
	if (!ctx.cr6.eq) goto loc_82127504;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8212750c
	goto loc_8212750C;
loc_82127504:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8212750C:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820aff40
	ctx.lr = 0x82127528;
	sub_820AFF40(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mulli r10,r31,11920
	ctx.r10.s64 = ctx.r31.s64 * 11920;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,28
	ctx.r4.s64 = 28;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r11,r11,-11424
	ctx.r11.s64 = ctx.r11.s64 + -11424;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82127558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x82127584
	if (ctx.cr6.eq) goto loc_82127584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mulli r11,r31,19200
	ctx.r11.s64 = ctx.r31.s64 * 19200;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// addis r10,r30,35
	ctx.r10.s64 = ctx.r30.s64 + 2293760;
	// addi r10,r10,-28496
	ctx.r10.s64 = ctx.r10.s64 + -28496;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,15332(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15332);
	// stfs f0,13376(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 13376, temp.u32);
	// bl 0x822a0698
	ctx.lr = 0x82127584;
	sub_822A0698(ctx, base);
loc_82127584:
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,228(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 228);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8212759C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821275A4"))) PPC_WEAK_FUNC(sub_821275A4);
PPC_FUNC_IMPL(__imp__sub_821275A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821275A8"))) PPC_WEAK_FUNC(sub_821275A8);
PPC_FUNC_IMPL(__imp__sub_821275A8) {
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
	// lbz r11,624(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 624);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x821277cc
	if (!ctx.cr6.eq) goto loc_821277CC;
	// lwz r11,19632(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 19632);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82127788
	if (ctx.cr6.gt) goto loc_82127788;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// addi r12,r12,30200
	ctx.r12.s64 = ctx.r12.s64 + 30200;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82127624;
	case 1:
		goto loc_8212765C;
	case 2:
		goto loc_82127694;
	case 3:
		goto loc_821276C0;
	case 4:
		goto loc_821276EC;
	case 5:
		goto loc_82127788;
	case 6:
		goto loc_82127788;
	case 7:
		goto loc_82127724;
	case 8:
		goto loc_82127788;
	case 9:
		goto loc_82127788;
	case 10:
		goto loc_82127750;
	default:
		__builtin_unreachable();
	}
	// lwz r16,30244(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 30244);
	// lwz r16,30300(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 30300);
	// lwz r16,30356(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 30356);
	// lwz r16,30400(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 30400);
	// lwz r16,30444(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 30444);
	// lwz r16,30600(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 30600);
	// lwz r16,30600(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 30600);
	// lwz r16,30500(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 30500);
	// lwz r16,30600(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 30600);
	// lwz r16,30600(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 30600);
	// lwz r16,30544(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + 30544);
loc_82127624:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82127648
	if (ctx.cr6.eq) goto loc_82127648;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r8,228(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x82127784
	goto loc_82127784;
loc_82127648:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,38
	ctx.r4.s64 = 38;
	// lwz r6,228(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 228);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// b 0x82127784
	goto loc_82127784;
loc_8212765C:
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82127680
	if (ctx.cr6.eq) goto loc_82127680;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,41
	ctx.r4.s64 = 41;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x82127784
	goto loc_82127784;
loc_82127680:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r8,228(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x82127784
	goto loc_82127784;
loc_82127694:
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821276ac
	if (ctx.cr6.eq) goto loc_821276AC;
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x82127778
	goto loc_82127778;
loc_821276AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,42
	ctx.r4.s64 = 42;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x82127784
	goto loc_82127784;
loc_821276C0:
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821276e4
	if (ctx.cr6.eq) goto loc_821276E4;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,49
	ctx.r4.s64 = 49;
	// lwz r7,228(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 228);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// b 0x82127784
	goto loc_82127784;
loc_821276E4:
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x82127778
	goto loc_82127778;
loc_821276EC:
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82127710
	if (ctx.cr6.eq) goto loc_82127710;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x82127784
	goto loc_82127784;
loc_82127710:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r8,228(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x82127784
	goto loc_82127784;
loc_82127724:
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8212773c
	if (ctx.cr6.eq) goto loc_8212773C;
	// li r4,47
	ctx.r4.s64 = 47;
	// b 0x82127778
	goto loc_82127778;
loc_8212773C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x82127784
	goto loc_82127784;
loc_82127750:
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82127774
	if (ctx.cr6.eq) goto loc_82127774;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,51
	ctx.r4.s64 = 51;
	// lwz r7,228(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 228);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// b 0x82127784
	goto loc_82127784;
loc_82127774:
	// li r4,50
	ctx.r4.s64 = 50;
loc_82127778:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,228(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 228);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82127784:
	// bctrl 
	ctx.lr = 0x82127788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82127788:
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821277a4
	if (ctx.cr6.eq) goto loc_821277A4;
	// addi r11,r11,31204
	ctx.r11.s64 = ctx.r11.s64 + 31204;
	// lfs f1,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821277a8
	goto loc_821277A8;
loc_821277A4:
	// lfs f1,31204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31204);
	ctx.f1.f64 = double(temp.f32);
loc_821277A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821277CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821277CC:
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

__attribute__((alias("__imp__sub_821277E4"))) PPC_WEAK_FUNC(sub_821277E4);
PPC_FUNC_IMPL(__imp__sub_821277E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821277E8"))) PPC_WEAK_FUNC(sub_821277E8);
PPC_FUNC_IMPL(__imp__sub_821277E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mulli r10,r4,11920
	ctx.r10.s64 = ctx.r4.s64 * 11920;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,30
	ctx.r4.s64 = 30;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r11,r11,-11424
	ctx.r11.s64 = ctx.r11.s64 + -11424;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82127818"))) PPC_WEAK_FUNC(sub_82127818);
PPC_FUNC_IMPL(__imp__sub_82127818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mulli r10,r4,11920
	ctx.r10.s64 = ctx.r4.s64 * 11920;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r4,29
	ctx.r4.s64 = 29;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r11,r11,-11424
	ctx.r11.s64 = ctx.r11.s64 + -11424;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82127844"))) PPC_WEAK_FUNC(sub_82127844);
PPC_FUNC_IMPL(__imp__sub_82127844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127848"))) PPC_WEAK_FUNC(sub_82127848);
PPC_FUNC_IMPL(__imp__sub_82127848) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mulli r10,r5,11920
	ctx.r10.s64 = ctx.r5.s64 * 11920;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,37
	ctx.r4.s64 = 37;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r11,r11,-11424
	ctx.r11.s64 = ctx.r11.s64 + -11424;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82127888;
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

__attribute__((alias("__imp__sub_82127898"))) PPC_WEAK_FUNC(sub_82127898);
PPC_FUNC_IMPL(__imp__sub_82127898) {
	PPC_FUNC_PROLOGUE();
	// b 0x82121e70
	sub_82121E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212789C"))) PPC_WEAK_FUNC(sub_8212789C);
PPC_FUNC_IMPL(__imp__sub_8212789C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821278A0"))) PPC_WEAK_FUNC(sub_821278A0);
PPC_FUNC_IMPL(__imp__sub_821278A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,182(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 182);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,2384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x821278c0
	if (ctx.cr6.eq) goto loc_821278C0;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821278C0:
	// lis r10,-29635
	ctx.r10.s64 = -1942159360;
	// lis r9,-27114
	ctx.r9.s64 = -1776943104;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,27832
	ctx.r4.u64 = ctx.r10.u64 | 27832;
	// ori r8,r9,4592
	ctx.r8.u64 = ctx.r9.u64 | 4592;
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
}

__attribute__((alias("__imp__sub_821278E8"))) PPC_WEAK_FUNC(sub_821278E8);
PPC_FUNC_IMPL(__imp__sub_821278E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821278EC"))) PPC_WEAK_FUNC(sub_821278EC);
PPC_FUNC_IMPL(__imp__sub_821278EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821278F0"))) PPC_WEAK_FUNC(sub_821278F0);
PPC_FUNC_IMPL(__imp__sub_821278F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82127904
	if (!ctx.cr6.gt) goto loc_82127904;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82127904:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212790C"))) PPC_WEAK_FUNC(sub_8212790C);
PPC_FUNC_IMPL(__imp__sub_8212790C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127910"))) PPC_WEAK_FUNC(sub_82127910);
PPC_FUNC_IMPL(__imp__sub_82127910) {
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
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mulli r9,r4,19200
	ctx.r9.s64 = ctx.r4.s64 * 19200;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r7,r11,-13016
	ctx.r7.s64 = ctx.r11.s64 + -13016;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// lwz r8,460(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 460);
	// extsb r30,r6
	ctx.r30.s64 = ctx.r6.s8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82127958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,30296(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30296);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8212798c
	if (ctx.cr6.gt) goto loc_8212798C;
	// bso cr6,0x8212798c
	if (ctx.cr6.so) goto loc_8212798C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821279ac
	goto loc_821279AC;
loc_8212798C:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,2406(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2406);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
loc_821279AC:
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

__attribute__((alias("__imp__sub_821279C4"))) PPC_WEAK_FUNC(sub_821279C4);
PPC_FUNC_IMPL(__imp__sub_821279C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821279C8"))) PPC_WEAK_FUNC(sub_821279C8);
PPC_FUNC_IMPL(__imp__sub_821279C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821279D0"))) PPC_WEAK_FUNC(sub_821279D0);
PPC_FUNC_IMPL(__imp__sub_821279D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821279D8"))) PPC_WEAK_FUNC(sub_821279D8);
PPC_FUNC_IMPL(__imp__sub_821279D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mulli r10,r4,19200
	ctx.r10.s64 = ctx.r4.s64 * 19200;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r9,r11,-13016
	ctx.r9.s64 = ctx.r11.s64 + -13016;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,2396(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2396);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82127a34
	if (ctx.cr6.eq) goto loc_82127A34;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82127a24
	if (ctx.cr6.eq) goto loc_82127A24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82127A24:
	// addi r6,r4,714
	ctx.r6.s64 = ctx.r4.s64 + 714;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r5,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82127A34:
	// lfs f1,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127A3C"))) PPC_WEAK_FUNC(sub_82127A3C);
PPC_FUNC_IMPL(__imp__sub_82127A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127A40"))) PPC_WEAK_FUNC(sub_82127A40);
PPC_FUNC_IMPL(__imp__sub_82127A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,716
	ctx.r11.s64 = ctx.r4.s64 + 716;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127A50"))) PPC_WEAK_FUNC(sub_82127A50);
PPC_FUNC_IMPL(__imp__sub_82127A50) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,2880(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2880);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127A5C"))) PPC_WEAK_FUNC(sub_82127A5C);
PPC_FUNC_IMPL(__imp__sub_82127A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127A60"))) PPC_WEAK_FUNC(sub_82127A60);
PPC_FUNC_IMPL(__imp__sub_82127A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mulli r10,r4,19200
	ctx.r10.s64 = ctx.r4.s64 * 19200;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r9,r11,-13016
	ctx.r9.s64 = ctx.r11.s64 + -13016;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f1,2416(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127A94"))) PPC_WEAK_FUNC(sub_82127A94);
PPC_FUNC_IMPL(__imp__sub_82127A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127A98"))) PPC_WEAK_FUNC(sub_82127A98);
PPC_FUNC_IMPL(__imp__sub_82127A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f13,2772(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2772);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 2162688;
	// fsubs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b76f8
	ctx.lr = 0x82127AC8;
	sub_820B76F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,30884(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30884);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// ble cr6,0x82127b20
	if (!ctx.cr6.gt) goto loc_82127B20;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f11,f31
	ctx.f11.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfiwx f11,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f12,-15132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15132);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// fsubs f8,f31,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fabs f13,f8
	ctx.f13.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82127b20
	if (ctx.cr6.gt) goto loc_82127B20;
	// bso cr6,0x82127b20
	if (ctx.cr6.so) goto loc_82127B20;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82127B20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f31,f1
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// blt cr6,0x82127b34
	if (ctx.cr6.lt) goto loc_82127B34;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
loc_82127B34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127B48"))) PPC_WEAK_FUNC(sub_82127B48);
PPC_FUNC_IMPL(__imp__sub_82127B48) {
	PPC_FUNC_PROLOGUE();
	// stb r4,3480(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3480, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82127B50"))) PPC_WEAK_FUNC(sub_82127B50);
PPC_FUNC_IMPL(__imp__sub_82127B50) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82127B70:
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,2672
	ctx.r3.s64 = ctx.r11.s64 + 2672;
	// bl 0x82126ac0
	ctx.lr = 0x82127B80;
	sub_82126AC0(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82127b70
	if (ctx.cr6.lt) goto loc_82127B70;
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

__attribute__((alias("__imp__sub_82127BAC"))) PPC_WEAK_FUNC(sub_82127BAC);
PPC_FUNC_IMPL(__imp__sub_82127BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127BB0"))) PPC_WEAK_FUNC(sub_82127BB0);
PPC_FUNC_IMPL(__imp__sub_82127BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bacc
	ctx.lr = 0x82127BB8;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// lwz r30,19168(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19168);
	// addi r11,r11,-29860
	ctx.r11.s64 = ctx.r11.s64 + -29860;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r19,r11,-1
	ctx.r19.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82127bf4
	if (!ctx.cr6.eq) goto loc_82127BF4;
	// li r19,0
	ctx.r19.s64 = 0;
loc_82127BF4:
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820b0048
	ctx.lr = 0x82127C04;
	sub_820B0048(ctx, base);
	// addis r10,r31,35
	ctx.r10.s64 = ctx.r31.s64 + 2293760;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r10,-31704
	ctx.r3.s64 = ctx.r10.s64 + -31704;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x820c8348
	ctx.lr = 0x82127C1C;
	sub_820C8348(ctx, base);
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820c7fd0
	ctx.lr = 0x82127C30;
	sub_820C7FD0(ctx, base);
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820c8048
	ctx.lr = 0x82127C44;
	sub_820C8048(ctx, base);
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820c8240
	ctx.lr = 0x82127C58;
	sub_820C8240(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82127c84
	if (ctx.cr6.lt) goto loc_82127C84;
	// beq cr6,0x82127c70
	if (ctx.cr6.eq) goto loc_82127C70;
	// li r22,0
	ctx.r22.s64 = 0;
	// b 0x82127c90
	goto loc_82127C90;
loc_82127C70:
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// ori r8,r9,35744
	ctx.r8.u64 = ctx.r9.u64 | 35744;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// neg r22,r11
	ctx.r22.s64 = -ctx.r11.s64;
	// b 0x82127c90
	goto loc_82127C90;
loc_82127C84:
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// ori r6,r7,35744
	ctx.r6.u64 = ctx.r7.u64 | 35744;
	// lwzx r22,r31,r6
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
loc_82127C90:
	// addis r11,r31,33
	ctx.r11.s64 = ctx.r31.s64 + 2162688;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b7630
	ctx.lr = 0x82127CA8;
	sub_820B7630(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// cmpw cr6,r25,r5
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r5.s32, ctx.xer);
	// addi r29,r11,8544
	ctx.r29.s64 = ctx.r11.s64 + 8544;
	// blt cr6,0x82127cd4
	if (ctx.cr6.lt) goto loc_82127CD4;
	// mulli r4,r30,136
	ctx.r4.s64 = ctx.r30.s64 * 136;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// li r27,3
	ctx.r27.s64 = 3;
	// stwx r3,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r3.u32);
	// b 0x82127d20
	goto loc_82127D20;
loc_82127CD4:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82127cf8
	if (ctx.cr6.lt) goto loc_82127CF8;
	// mulli r9,r30,136
	ctx.r9.s64 = ctx.r30.s64 * 136;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r29,48
	ctx.r7.s64 = ctx.r29.s64 + 48;
	// li r27,2
	ctx.r27.s64 = 2;
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// b 0x82127d20
	goto loc_82127D20;
loc_82127CF8:
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r25,r6
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82127d1c
	if (ctx.cr6.lt) goto loc_82127D1C;
	// mulli r5,r30,136
	ctx.r5.s64 = ctx.r30.s64 * 136;
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// stwx r3,r5,r4
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r3.u32);
	// b 0x82127d20
	goto loc_82127D20;
loc_82127D1C:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82127D20:
	// lbz r11,15480(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 15480);
	// extsb r26,r28
	ctx.r26.s64 = ctx.r28.s8;
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r23,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r23.u32);
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r19,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r19.u32);
	// lwzx r8,r11,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stb r26,20(r8)
	PPC_STORE_U8(ctx.r8.u32 + 20, ctx.r26.u8);
	// lwzx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// stw r25,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r25.u32);
	// lwz r6,15328(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 15328);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82127d70
	if (!ctx.cr6.eq) goto loc_82127D70;
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// addi r3,r11,14408
	ctx.r3.s64 = ctx.r11.s64 + 14408;
	// bl 0x82121508
	ctx.lr = 0x82127D70;
	sub_82121508(ctx, base);
loc_82127D70:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,16448
	ctx.r11.s64 = ctx.r11.s64 + 16448;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bgt cr6,0x82127d88
	if (ctx.cr6.gt) goto loc_82127D88;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82127D88:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r10,500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82127DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lwz r9,15328(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 15328);
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x82127e3c
	if (ctx.cr6.eq) goto loc_82127E3C;
	// mulli r27,r28,5956
	ctx.r27.s64 = ctx.r28.s64 * 5956;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// addi r28,r11,10528
	ctx.r28.s64 = ctx.r11.s64 + 10528;
	// lhz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 16);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82127e3c
	if (ctx.cr6.eq) goto loc_82127E3C;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820fa560
	ctx.lr = 0x82127DE8;
	sub_820FA560(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r10,r30,136
	ctx.r10.s64 = ctx.r30.s64 * 136;
	// sth r4,16(r28)
	PPC_STORE_U16(ctx.r28.u32 + 16, ctx.r4.u16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 * 328;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r9,r29,156
	ctx.r9.s64 = ctx.r29.s64 + 156;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r19,10616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10616, ctx.r19.u32);
	// stw r25,10636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10636, ctx.r25.u32);
	// stw r23,10620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10620, ctx.r23.u32);
	// stw r21,10624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10624, ctx.r21.u32);
	// stw r20,10628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10628, ctx.r20.u32);
	// stw r22,10632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10632, ctx.r22.u32);
	// stb r26,10640(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10640, ctx.r26.u8);
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,10804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10804, ctx.r8.u32);
	// bl 0x82122010
	ctx.lr = 0x82127E3C;
	sub_82122010(ctx, base);
loc_82127E3C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82127E44"))) PPC_WEAK_FUNC(sub_82127E44);
PPC_FUNC_IMPL(__imp__sub_82127E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82127E48"))) PPC_WEAK_FUNC(sub_82127E48);
PPC_FUNC_IMPL(__imp__sub_82127E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x82127E50;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r25,r11,28544
	ctx.r25.s64 = ctx.r11.s64 + 28544;
	// lis r11,33
	ctx.r11.s64 = 2162688;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r10,r11,4416
	ctx.r10.u64 = ctx.r11.u64 | 4416;
	// lwzx r11,r25,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82127e94
	if (!ctx.cr6.lt) goto loc_82127E94;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addis r10,r25,10
	ctx.r10.s64 = ctx.r25.s64 + 655360;
	// ori r8,r9,37344
	ctx.r8.u64 = ctx.r9.u64 | 37344;
	// addi r10,r10,-7344
	ctx.r10.s64 = ctx.r10.s64 + -7344;
	// mullw r11,r26,r8
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82127e98
	goto loc_82127E98;
loc_82127E94:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82127E98:
	// lwz r7,6912(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6912);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r6,15480(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 15480);
	// extsb r24,r6
	ctx.r24.s64 = ctx.r6.s8;
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r24,r11
	ctx.r5.u64 = ctx.r24.u64 + ctx.r11.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r31,r11,2388
	ctx.r31.s64 = ctx.r11.s64 + 2388;
	// bl 0x822edfd8
	ctx.lr = 0x82127EC0;
	sub_822EDFD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82127ee0
	if (!ctx.cr6.eq) goto loc_82127EE0;
	// lbz r3,17(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82127f04
	if (!ctx.cr6.eq) goto loc_82127F04;
loc_82127EE0:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127f1c
	if (ctx.cr6.eq) goto loc_82127F1C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,30384(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30384);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82127f1c
	if (ctx.cr6.lt) goto loc_82127F1C;
	// bso cr6,0x82127f1c
	if (ctx.cr6.so) goto loc_82127F1C;
loc_82127F04:
	// lbz r10,19(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82127f18
	if (!ctx.cr6.eq) goto loc_82127F18;
	// stb r23,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r23.u8);
	// b 0x82127f1c
	goto loc_82127F1C;
loc_82127F18:
	// stb r23,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r23.u8);
loc_82127F1C:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r28,r11,26080
	ctx.r28.s64 = ctx.r11.s64 + 26080;
	// addi r3,r28,92
	ctx.r3.s64 = ctx.r28.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x82127F2C;
	sub_8210B3C8(ctx, base);
	// lfs f12,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lbz r9,599(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 599);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82127f48
	if (ctx.cr6.eq) goto loc_82127F48;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82127F48:
	// lis r8,33
	ctx.r8.s64 = 2162688;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r7,r8,8348
	ctx.r7.u64 = ctx.r8.u64 | 8348;
	// lfs f1,2864(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwzx r11,r25,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r7.u32);
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// lbz r10,1000(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1000);
	// mulli r11,r26,11920
	ctx.r11.s64 = ctx.r26.s64 * 11920;
	// addi r6,r10,84
	ctx.r6.s64 = ctx.r10.s64 + 84;
	// addis r10,r28,3
	ctx.r10.s64 = ctx.r28.s64 + 196608;
	// rlwinm r5,r6,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r10,-11424
	ctx.r10.s64 = ctx.r10.s64 + -11424;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r29,r5,r27
	PPC_STORE_U8(ctx.r5.u32 + ctx.r27.u32, ctx.r29.u8);
	// ld r11,11856(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11856);
	// rlwinm r4,r11,0,13,13
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// bne cr6,0x82127f98
	if (!ctx.cr6.eq) goto loc_82127F98;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82127F98:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82127fb0
	if (ctx.cr6.eq) goto loc_82127FB0;
	// lwz r8,2968(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2968);
	// lfs f0,88(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82127fd8
	goto loc_82127FD8;
loc_82127FB0:
	// rlwinm r7,r11,0,22,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x82127fc4
	if (!ctx.cr6.eq) goto loc_82127FC4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82127FC4:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82127fd8
	if (ctx.cr6.eq) goto loc_82127FD8;
	// lwz r4,2932(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2932);
	// lfs f0,96(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
loc_82127FD8:
	// clrlwi r3,r29,24
	ctx.r3.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82127ff0
	if (ctx.cr6.eq) goto loc_82127FF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82127FF0:
	// lis r6,0
	ctx.r6.s64 = 0;
	// extsb r4,r26
	ctx.r4.s64 = ctx.r26.s8;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// addi r3,r28,144
	ctx.r3.s64 = ctx.r28.s64 + 144;
	// bl 0x8210f5e0
	ctx.lr = 0x82128004;
	sub_8210F5E0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8232da90
	ctx.lr = 0x82128010;
	sub_8232DA90(ctx, base);
	// stb r29,13815(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13815, ctx.r29.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212801C"))) PPC_WEAK_FUNC(sub_8212801C);
PPC_FUNC_IMPL(__imp__sub_8212801C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82128020"))) PPC_WEAK_FUNC(sub_82128020);
PPC_FUNC_IMPL(__imp__sub_82128020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82128028;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r10,r11,37004
	ctx.r10.u64 = ctx.r11.u64 | 37004;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r25,r11,26080
	ctx.r25.s64 = ctx.r11.s64 + 26080;
	// ble cr6,0x8212813c
	if (!ctx.cr6.gt) goto loc_8212813C;
	// addis r11,r25,3
	ctx.r11.s64 = ctx.r25.s64 + 196608;
	// addis r10,r30,35
	ctx.r10.s64 = ctx.r30.s64 + 2293760;
	// addi r28,r11,-11424
	ctx.r28.s64 = ctx.r11.s64 + -11424;
	// addi r31,r10,-28496
	ctx.r31.s64 = ctx.r10.s64 + -28496;
loc_8212806C:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r7,15480(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15480);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsb r29,r7
	ctx.r29.s64 = ctx.r7.s8;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82128090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,13520(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13520);
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82128108
	if (ctx.cr6.eq) goto loc_82128108;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r4,2406(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2406);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821280c8
	if (ctx.cr6.eq) goto loc_821280C8;
	// lbz r3,2408(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2408);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821280cc
	if (ctx.cr6.eq) goto loc_821280CC;
loc_821280C8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_821280CC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x821280f4
	if (ctx.cr6.eq) goto loc_821280F4;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r8,184(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x82128104
	goto loc_82128104;
loc_821280F4:
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r6,184(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 184);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82128104:
	// bctrl 
	ctx.lr = 0x82128108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82128108:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ed7a0
	ctx.lr = 0x82128114;
	sub_820ED7A0(ctx, base);
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// lwz r5,15332(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15332);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// ori r3,r4,37004
	ctx.r3.u64 = ctx.r4.u64 | 37004;
	// addi r31,r31,19200
	ctx.r31.s64 = ctx.r31.s64 + 19200;
	// addi r28,r28,11920
	ctx.r28.s64 = ctx.r28.s64 + 11920;
	// stb r24,1416(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1416, ctx.r24.u8);
	// lwzx r11,r30,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212806c
	if (ctx.cr6.lt) goto loc_8212806C;
loc_8212813C:
	// lbz r11,49(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82128154
	if (!ctx.cr6.eq) goto loc_82128154;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363ce0
	ctx.lr = 0x82128154;
	sub_82363CE0(ctx, base);
loc_82128154:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// li r10,19
	ctx.r10.s64 = 19;
	// ori r8,r9,35752
	ctx.r8.u64 = ctx.r9.u64 | 35752;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f0,30384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30384);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stbx r11,r30,r8
	PPC_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u8);
	// stfs f0,2788(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 2788, temp.u32);
	// stw r10,2384(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2384, ctx.r10.u32);
	// bl 0x821041d8
	ctx.lr = 0x82128180;
	sub_821041D8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82128254
	if (!ctx.cr6.eq) goto loc_82128254;
	// lis r6,37
	ctx.r6.s64 = 2424832;
	// ori r5,r6,49147
	ctx.r5.u64 = ctx.r6.u64 | 49147;
	// lbzx r4,r30,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82128254
	if (!ctx.cr6.eq) goto loc_82128254;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r10,r3,51969
	ctx.r10.u64 = ctx.r3.u64 | 51969;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82128254
	if (!ctx.cr6.eq) goto loc_82128254;
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820c8348
	ctx.lr = 0x821281C8;
	sub_820C8348(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820b0048
	ctx.lr = 0x821281DC;
	sub_820B0048(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,-6648
	ctx.r31.s64 = ctx.r10.s64 + -6648;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x820fb4a8
	ctx.lr = 0x821281F8;
	sub_820FB4A8(ctx, base);
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// addis r11,r25,3
	ctx.r11.s64 = ctx.r25.s64 + 196608;
	// ori r7,r8,36952
	ctx.r7.u64 = ctx.r8.u64 | 36952;
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// ldx r4,r30,r7
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + ctx.r7.u32);
	// bl 0x822d2ba0
	ctx.lr = 0x82128210;
	sub_822D2BA0(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lwz r4,552(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82128248
	if (ctx.cr6.eq) goto loc_82128248;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// bl 0x820faf88
	ctx.lr = 0x82128230;
	sub_820FAF88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82128248
	if (ctx.cr6.lt) goto loc_82128248;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb300
	ctx.lr = 0x82128248;
	sub_820FB300(ctx, base);
loc_82128248:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb4b8
	ctx.lr = 0x82128254;
	sub_820FB4B8(ctx, base);
loc_82128254:
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,192(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 192);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82128268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82128270"))) PPC_WEAK_FUNC(sub_82128270);
PPC_FUNC_IMPL(__imp__sub_82128270) {
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
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r8,r9,28813
	ctx.r8.u64 = ctx.r9.u64 | 28813;
	// ori r10,r11,28776
	ctx.r10.u64 = ctx.r11.u64 | 28776;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f31,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stfsx f31,r31,r10
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// stbx r11,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// addis r11,r31,33
	ctx.r11.s64 = ctx.r31.s64 + 2162688;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b76f8
	ctx.lr = 0x821282C0;
	sub_820B76F8(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r7,0
	ctx.r7.s64 = 0;
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// stfs f0,2772(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 2772, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stb r7,3480(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3480, ctx.r7.u8);
	// stfs f0,2776(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 2776, temp.u32);
	// bl 0x82120c00
	ctx.lr = 0x821282EC;
	sub_82120C00(ctx, base);
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

__attribute__((alias("__imp__sub_82128308"))) PPC_WEAK_FUNC(sub_82128308);
PPC_FUNC_IMPL(__imp__sub_82128308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82128310;
	__savegprlr_26(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,28544
	ctx.r5.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r4,r9,37344
	ctx.r4.u64 = ctx.r9.u64 | 37344;
	// ori r10,r11,37004
	ctx.r10.u64 = ctx.r11.u64 | 37004;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfs f10,36(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,30980
	ctx.r11.s64 = ctx.r11.s64 + 30980;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwzx r28,r5,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f5,-31768(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -31768);
	ctx.f5.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f4,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// lfs f9,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-31516(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31516);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,2864(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// blt cr6,0x821285c8
	if (ctx.cr6.lt) goto loc_821285C8;
	// addis r11,r5,10
	ctx.r11.s64 = ctx.r5.s64 + 655360;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// addi r6,r11,30000
	ctx.r6.s64 = ctx.r11.s64 + 30000;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r3,9152
	ctx.r29.u64 = ctx.r3.u64 | 9152;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r27,r11,38400
	ctx.r27.u64 = ctx.r11.u64 | 38400;
	// addis r7,r5,35
	ctx.r7.s64 = ctx.r5.s64 + 2293760;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r31,r3,11264
	ctx.r31.u64 = ctx.r3.u64 | 11264;
	// addi r30,r28,-3
	ctx.r30.s64 = ctx.r28.s64 + -3;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r7,r7,4228
	ctx.r7.s64 = ctx.r7.s64 + 4228;
	// ori r3,r11,18304
	ctx.r3.u64 = ctx.r11.u64 | 18304;
loc_821283A8:
	// lis r11,33
	ctx.r11.s64 = 2162688;
	// ori r11,r11,4416
	ctx.r11.u64 = ctx.r11.u64 | 4416;
	// lwzx r11,r5,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// subf r11,r4,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r4.s64;
	// blt cr6,0x821283c4
	if (ctx.cr6.lt) goto loc_821283C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821283C4:
	// lfs f0,-19200(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -19200);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// fmuls f0,f13,f6
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// bgt cr6,0x821283e8
	if (ctx.cr6.gt) goto loc_821283E8;
	// bso cr6,0x821283e8
	if (ctx.cr6.so) goto loc_821283E8;
	// fmr f12,f3
	ctx.f12.f64 = ctx.f3.f64;
	// b 0x821283ec
	goto loc_821283EC;
loc_821283E8:
	// fmuls f12,f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
loc_821283EC:
	// lfs f11,6672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6672);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f2,1944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1944);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f1.f64 = double(temp.f32);
	// stw r8,1980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1980, ctx.r8.u32);
	// stfs f12,1948(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1948, temp.u32);
	// stw r8,2172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2172, ctx.r8.u32);
	// stfs f12,2140(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2140, temp.u32);
	// addi r26,r9,-1
	ctx.r26.s64 = ctx.r9.s64 + -1;
	// fadds f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f12,1944(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1944, temp.u32);
	// fadds f2,f13,f1
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f2,2136(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2136, temp.u32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f1,6708(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6708, temp.u32);
	// lis r11,33
	ctx.r11.s64 = 2162688;
	// ori r11,r11,4416
	ctx.r11.u64 = ctx.r11.u64 | 4416;
	// lwzx r11,r5,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x82128448
	if (ctx.cr6.lt) goto loc_82128448;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82128448:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// fmuls f0,f13,f6
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// bgt cr6,0x8212846c
	if (ctx.cr6.gt) goto loc_8212846C;
	// bso cr6,0x8212846c
	if (ctx.cr6.so) goto loc_8212846C;
	// fmr f12,f3
	ctx.f12.f64 = ctx.f3.f64;
	// b 0x82128470
	goto loc_82128470;
loc_8212846C:
	// fmuls f12,f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
loc_82128470:
	// lfs f11,6672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6672);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f2,1944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1944);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f1.f64 = double(temp.f32);
	// stw r8,1980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1980, ctx.r8.u32);
	// stfs f12,1948(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1948, temp.u32);
	// stw r8,2172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2172, ctx.r8.u32);
	// stfs f12,2140(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2140, temp.u32);
	// fadds f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f12,1944(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1944, temp.u32);
	// fadds f2,f13,f1
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f2,2136(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2136, temp.u32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f1,6708(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6708, temp.u32);
	// lis r11,33
	ctx.r11.s64 = 2162688;
	// ori r11,r11,4416
	ctx.r11.u64 = ctx.r11.u64 | 4416;
	// lwzx r11,r5,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// add r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64;
	// blt cr6,0x821284c8
	if (ctx.cr6.lt) goto loc_821284C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821284C8:
	// lfs f0,19200(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19200);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// fmuls f0,f13,f6
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// bgt cr6,0x821284ec
	if (ctx.cr6.gt) goto loc_821284EC;
	// bso cr6,0x821284ec
	if (ctx.cr6.so) goto loc_821284EC;
	// fmr f12,f3
	ctx.f12.f64 = ctx.f3.f64;
	// b 0x821284f0
	goto loc_821284F0;
loc_821284EC:
	// fmuls f12,f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
loc_821284F0:
	// lfs f11,6672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6672);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f2,1944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1944);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f1.f64 = double(temp.f32);
	// stw r8,1980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1980, ctx.r8.u32);
	// stfs f12,1948(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1948, temp.u32);
	// stw r8,2172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2172, ctx.r8.u32);
	// stfs f12,2140(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2140, temp.u32);
	// addi r26,r9,1
	ctx.r26.s64 = ctx.r9.s64 + 1;
	// fadds f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f12,1944(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1944, temp.u32);
	// fadds f2,f13,f1
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f2,2136(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2136, temp.u32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f1,6708(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6708, temp.u32);
	// lis r11,33
	ctx.r11.s64 = 2162688;
	// ori r11,r11,4416
	ctx.r11.u64 = ctx.r11.u64 | 4416;
	// lwzx r11,r5,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// add r11,r6,r29
	ctx.r11.u64 = ctx.r6.u64 + ctx.r29.u64;
	// blt cr6,0x8212854c
	if (ctx.cr6.lt) goto loc_8212854C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212854C:
	// lfsx f0,r7,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// fmuls f0,f13,f6
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// bgt cr6,0x82128570
	if (ctx.cr6.gt) goto loc_82128570;
	// bso cr6,0x82128570
	if (ctx.cr6.so) goto loc_82128570;
	// fmr f12,f3
	ctx.f12.f64 = ctx.f3.f64;
	// b 0x82128574
	goto loc_82128574;
loc_82128570:
	// fmuls f12,f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
loc_82128574:
	// lfs f11,6672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6672);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f2,1944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1944);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f12,1948(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1948, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f12,2140(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2140, temp.u32);
	// stw r8,1980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1980, ctx.r8.u32);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stw r8,2172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2172, ctx.r8.u32);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// fadds f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f12,1944(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1944, temp.u32);
	// fadds f2,f13,f1
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f2,2136(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2136, temp.u32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f1,6708(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6708, temp.u32);
	// blt cr6,0x821283a8
	if (ctx.cr6.lt) goto loc_821283A8;
loc_821285C8:
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82128684
	if (!ctx.cr6.lt) goto loc_82128684;
	// addis r11,r5,10
	ctx.r11.s64 = ctx.r5.s64 + 655360;
	// addis r7,r5,35
	ctx.r7.s64 = ctx.r5.s64 + 2293760;
	// addi r6,r11,-7344
	ctx.r6.s64 = ctx.r11.s64 + -7344;
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mulli r11,r10,19200
	ctx.r11.s64 = ctx.r10.s64 * 19200;
	// addi r7,r7,-14972
	ctx.r7.s64 = ctx.r7.s64 + -14972;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_821285F0:
	// lis r6,33
	ctx.r6.s64 = 2162688;
	// ori r3,r6,4416
	ctx.r3.u64 = ctx.r6.u64 | 4416;
	// lwzx r11,r5,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x8212860c
	if (ctx.cr6.lt) goto loc_8212860C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212860C:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// fmuls f0,f13,f6
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// bgt cr6,0x82128630
	if (ctx.cr6.gt) goto loc_82128630;
	// bso cr6,0x82128630
	if (ctx.cr6.so) goto loc_82128630;
	// fmr f12,f3
	ctx.f12.f64 = ctx.f3.f64;
	// b 0x82128634
	goto loc_82128634;
loc_82128630:
	// fmuls f12,f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
loc_82128634:
	// lfs f11,6672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6672);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f2,1944(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1944);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f12,1948(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1948, temp.u32);
	// addi r7,r7,19200
	ctx.r7.s64 = ctx.r7.s64 + 19200;
	// stfs f12,2140(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2140, temp.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stw r8,1980(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1980, ctx.r8.u32);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// stw r8,2172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2172, ctx.r8.u32);
	// fadds f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f12,1944(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1944, temp.u32);
	// fadds f2,f13,f1
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f2,2136(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2136, temp.u32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f1,6708(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6708, temp.u32);
	// blt cr6,0x821285f0
	if (ctx.cr6.lt) goto loc_821285F0;
loc_82128684:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212868C"))) PPC_WEAK_FUNC(sub_8212868C);
PPC_FUNC_IMPL(__imp__sub_8212868C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82128690"))) PPC_WEAK_FUNC(sub_82128690);
PPC_FUNC_IMPL(__imp__sub_82128690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82128698;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363c80
	ctx.lr = 0x821286AC;
	sub_82363C80(ctx, base);
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r10,r11,36832
	ctx.r10.u64 = ctx.r11.u64 | 36832;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821286f8
	if (!ctx.cr6.gt) goto loc_821286F8;
	// addi r29,r31,1076
	ctx.r29.s64 = ctx.r31.s64 + 1076;
loc_821286CC:
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82327f50
	ctx.lr = 0x821286D8;
	sub_82327F50(ctx, base);
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r8,r9,36832
	ctx.r8.u64 = ctx.r9.u64 | 36832;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r29,r29,76
	ctx.r29.s64 = ctx.r29.s64 + 76;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821286cc
	if (ctx.cr6.lt) goto loc_821286CC;
loc_821286F8:
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820c79f0
	ctx.lr = 0x82128704;
	sub_820C79F0(ctx, base);
loc_82128704:
	// addi r3,r31,20464
	ctx.r3.s64 = ctx.r31.s64 + 20464;
	// bl 0x82343238
	ctx.lr = 0x8212870C;
	sub_82343238(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82128704
	if (ctx.cr6.eq) goto loc_82128704;
loc_82128718:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232cf58
	ctx.lr = 0x82128720;
	sub_8232CF58(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82128718
	if (ctx.cr6.eq) goto loc_82128718;
loc_8212872C:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8229b8b8
	ctx.lr = 0x82128738;
	sub_8229B8B8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8212872c
	if (ctx.cr6.eq) goto loc_8212872C;
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r3,r4,37004
	ctx.r3.u64 = ctx.r4.u64 | 37004;
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82128790
	if (!ctx.cr6.gt) goto loc_82128790;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r30,r11,-11424
	ctx.r30.s64 = ctx.r11.s64 + -11424;
loc_8212876C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d9f08
	ctx.lr = 0x82128774;
	sub_822D9F08(ctx, base);
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r10,r11,37004
	ctx.r10.u64 = ctx.r11.u64 | 37004;
	// addi r30,r30,11920
	ctx.r30.s64 = ctx.r30.s64 + 11920;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212876c
	if (ctx.cr6.lt) goto loc_8212876C;
loc_82128790:
	// addis r11,r31,33
	ctx.r11.s64 = ctx.r31.s64 + 2162688;
	// addi r3,r11,16944
	ctx.r3.s64 = ctx.r11.s64 + 16944;
	// bl 0x820d31e0
	ctx.lr = 0x8212879C;
	sub_820D31E0(ctx, base);
	// addis r11,r31,33
	ctx.r11.s64 = ctx.r31.s64 + 2162688;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b7590
	ctx.lr = 0x821287A8;
	sub_820B7590(ctx, base);
	// addis r11,r31,33
	ctx.r11.s64 = ctx.r31.s64 + 2162688;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,20464
	ctx.r3.s64 = ctx.r31.s64 + 20464;
	// addi r4,r11,7656
	ctx.r4.s64 = ctx.r11.s64 + 7656;
	// bl 0x82344000
	ctx.lr = 0x821287BC;
	sub_82344000(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821287C4"))) PPC_WEAK_FUNC(sub_821287C4);
PPC_FUNC_IMPL(__imp__sub_821287C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821287C8"))) PPC_WEAK_FUNC(sub_821287C8);
PPC_FUNC_IMPL(__imp__sub_821287C8) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r10,2889(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2889, ctx.r10.u8);
	// lfs f0,31160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31160);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// stfs f0,2792(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2792, temp.u32);
	// addi r31,r11,-11424
	ctx.r31.s64 = ctx.r11.s64 + -11424;
loc_82128800:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8212881C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// addi r31,r31,11920
	ctx.r31.s64 = ctx.r31.s64 + 11920;
	// addi r7,r11,12416
	ctx.r7.s64 = ctx.r11.s64 + 12416;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82128800
	if (ctx.cr6.lt) goto loc_82128800;
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

__attribute__((alias("__imp__sub_82128848"))) PPC_WEAK_FUNC(sub_82128848);
PPC_FUNC_IMPL(__imp__sub_82128848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82128850;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,2889(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2889);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821289d4
	if (ctx.cr6.eq) goto loc_821289D4;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x82128878;
	sub_8210B3C8(ctx, base);
	// lfs f0,2792(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2792);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,2792(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 2792, temp.u32);
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x821289d4
	if (ctx.cr6.gt) goto loc_821289D4;
	// bso cr6,0x821289d4
	if (ctx.cr6.so) goto loc_821289D4;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r11,-18560
	ctx.r28.s64 = ctx.r11.s64 + -18560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addis r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 524288;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r11,27808
	ctx.r3.s64 = ctx.r11.s64 + 27808;
	// stb r31,2889(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2889, ctx.r31.u8);
	// bl 0x822c9a28
	ctx.lr = 0x821288BC;
	sub_822C9A28(ctx, base);
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,2836(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2836);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f2,2868(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82290ce8
	ctx.lr = 0x821288D8;
	sub_82290CE8(ctx, base);
	// lwz r10,2836(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2836);
	// lwz r3,19636(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19636);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82128900
	if (ctx.cr6.eq) goto loc_82128900;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f2,2868(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2868);
	ctx.f2.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,31152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31152);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82290ce8
	ctx.lr = 0x82128900;
	sub_82290CE8(ctx, base);
loc_82128900:
	// lwz r9,2836(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2836);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r8,19643(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19643);
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// bl 0x8232da90
	ctx.lr = 0x8212891C;
	sub_8232DA90(ctx, base);
	// lwz r7,15328(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15328);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8212896c
	if (!ctx.cr6.eq) goto loc_8212896C;
	// lwz r6,19168(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19168);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mulli r3,r6,1104
	ctx.r3.s64 = ctx.r6.s64 * 1104;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,209
	ctx.r4.s64 = 209;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8219c750
	ctx.lr = 0x82128964;
	sub_8219C750(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,3485(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3485, ctx.r5.u8);
loc_8212896C:
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// ori r3,r4,37004
	ctx.r3.u64 = ctx.r4.u64 | 37004;
	// lwzx r11,r29,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821289b4
	if (!ctx.cr6.gt) goto loc_821289B4;
loc_82128984:
	// addis r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 524288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-7996
	ctx.r3.s64 = ctx.r11.s64 + -7996;
	// bl 0x823484f8
	ctx.lr = 0x82128994;
	sub_823484F8(ctx, base);
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,37004
	ctx.r10.u64 = ctx.r11.u64 | 37004;
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// ori r30,r9,1
	ctx.r30.u64 = ctx.r9.u64 | 1;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82128984
	if (ctx.cr6.lt) goto loc_82128984;
loc_821289B4:
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821289d4
	if (ctx.cr6.eq) goto loc_821289D4;
	// addis r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 524288;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r11,27808
	ctx.r3.s64 = ctx.r11.s64 + 27808;
	// bl 0x822c9a28
	ctx.lr = 0x821289D4;
	sub_822C9A28(ctx, base);
loc_821289D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821289E0"))) PPC_WEAK_FUNC(sub_821289E0);
PPC_FUNC_IMPL(__imp__sub_821289E0) {
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
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820c8348
	ctx.lr = 0x82128A00;
	sub_820C8348(ctx, base);
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// ori r10,r11,34079
	ctx.r10.u64 = ctx.r11.u64 | 34079;
	// mulhw r9,r3,r10
	ctx.r9.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82128A28"))) PPC_WEAK_FUNC(sub_82128A28);
PPC_FUNC_IMPL(__imp__sub_82128A28) {
	PPC_FUNC_PROLOGUE();
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r8,r9,36968
	ctx.r8.u64 = ctx.r9.u64 | 36968;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r10,2409
	ctx.r10.s64 = ctx.r10.s64 + 2409;
loc_82128A54:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// and r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82128a54
	if (ctx.cr6.lt) goto loc_82128A54;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82128A74"))) PPC_WEAK_FUNC(sub_82128A74);
PPC_FUNC_IMPL(__imp__sub_82128A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82128A78"))) PPC_WEAK_FUNC(sub_82128A78);
PPC_FUNC_IMPL(__imp__sub_82128A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2796(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2796);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82128adc
	if (!ctx.cr6.gt) goto loc_82128ADC;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,12656
	ctx.r3.s64 = ctx.r11.s64 + 12656;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-15536
	ctx.r11.s64 = ctx.r11.s64 + -15536;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,3236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3236);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82142cd8
	ctx.lr = 0x82128ADC;
	sub_82142CD8(ctx, base);
loc_82128ADC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82128AEC"))) PPC_WEAK_FUNC(sub_82128AEC);
PPC_FUNC_IMPL(__imp__sub_82128AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82128AF0"))) PPC_WEAK_FUNC(sub_82128AF0);
PPC_FUNC_IMPL(__imp__sub_82128AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82128AF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,182(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 182);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128b74
	if (ctx.cr6.eq) goto loc_82128B74;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,37004
	ctx.r9.u64 = ctx.r10.u64 | 37004;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82128b74
	if (!ctx.cr6.gt) goto loc_82128B74;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r31,r11,-11424
	ctx.r31.s64 = ctx.r11.s64 + -11424;
loc_82128B3C:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82128B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r5,r6,37004
	ctx.r5.u64 = ctx.r6.u64 | 37004;
	// addi r31,r31,11920
	ctx.r31.s64 = ctx.r31.s64 + 11920;
	// lwzx r11,r29,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82128b3c
	if (ctx.cr6.lt) goto loc_82128B3C;
loc_82128B74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82128B7C"))) PPC_WEAK_FUNC(sub_82128B7C);
PPC_FUNC_IMPL(__imp__sub_82128B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82128B80"))) PPC_WEAK_FUNC(sub_82128B80);
PPC_FUNC_IMPL(__imp__sub_82128B80) {
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
	// bl 0x821041a8
	ctx.lr = 0x82128B98;
	sub_821041A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// beq cr6,0x82128bdc
	if (ctx.cr6.eq) goto loc_82128BDC;
	// lis r10,-20813
	ctx.r10.s64 = -1364000768;
	// lis r9,-27583
	ctx.r9.s64 = -1807679488;
	// ori r4,r10,49911
	ctx.r4.u64 = ctx.r10.u64 | 49911;
	// ori r8,r9,16334
	ctx.r8.u64 = ctx.r9.u64 | 16334;
	// li r5,3
	ctx.r5.s64 = 3;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82128BCC;
	sub_820A38E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82128BDC:
	// lis r7,-30806
	ctx.r7.s64 = -2018902016;
	// lis r11,-27092
	ctx.r11.s64 = -1775501312;
	// ori r4,r7,55416
	ctx.r4.u64 = ctx.r7.u64 | 55416;
	// ori r10,r11,29197
	ctx.r10.u64 = ctx.r11.u64 | 29197;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82128BF8;
	sub_820A38E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82128C08"))) PPC_WEAK_FUNC(sub_82128C08);
PPC_FUNC_IMPL(__imp__sub_82128C08) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2916(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2916);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82128C10"))) PPC_WEAK_FUNC(sub_82128C10);
PPC_FUNC_IMPL(__imp__sub_82128C10) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,2916(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2916, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82128C1C"))) PPC_WEAK_FUNC(sub_82128C1C);
PPC_FUNC_IMPL(__imp__sub_82128C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82128C20"))) PPC_WEAK_FUNC(sub_82128C20);
PPC_FUNC_IMPL(__imp__sub_82128C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,2896(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2896);
	// bl 0x821f84e0
	ctx.lr = 0x82128C40;
	sub_821F84E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,2900(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2900);
	// bl 0x821f84e0
	ctx.lr = 0x82128C4C;
	sub_821F84E0(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r4,2904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2904);
	// bl 0x821f84e0
	ctx.lr = 0x82128C58;
	sub_821F84E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-31440
	ctx.r5.s64 = ctx.r11.s64 + -31440;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r11,-31456
	ctx.r4.s64 = ctx.r11.s64 + -31456;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82123960
	ctx.lr = 0x82128C84;
	sub_82123960(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82128C98"))) PPC_WEAK_FUNC(sub_82128C98);
PPC_FUNC_IMPL(__imp__sub_82128C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,2896(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2896);
	// bl 0x821f84e0
	ctx.lr = 0x82128CB8;
	sub_821F84E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,2900(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2900);
	// bl 0x821f84e0
	ctx.lr = 0x82128CC4;
	sub_821F84E0(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r4,2904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2904);
	// bl 0x821f84e0
	ctx.lr = 0x82128CD0;
	sub_821F84E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r5,r11,-31400
	ctx.r5.s64 = ctx.r11.s64 + -31400;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r11,-31416
	ctx.r4.s64 = ctx.r11.s64 + -31416;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82123960
	ctx.lr = 0x82128CFC;
	sub_82123960(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82128D10"))) PPC_WEAK_FUNC(sub_82128D10);
PPC_FUNC_IMPL(__imp__sub_82128D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82128D18;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,2844(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2844);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82128f60
	if (ctx.cr6.eq) goto loc_82128F60;
	// lbz r11,2892(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2892);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// bne cr6,0x82128d5c
	if (!ctx.cr6.eq) goto loc_82128D5C;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// ori r8,r9,37004
	ctx.r8.u64 = ctx.r9.u64 | 37004;
	// lwzx r11,r29,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82128f60
	if (!ctx.cr6.eq) goto loc_82128F60;
loc_82128D5C:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// addis r9,r29,33
	ctx.r9.s64 = ctx.r29.s64 + 2162688;
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// addi r5,r9,7632
	ctx.r5.s64 = ctx.r9.s64 + 7632;
	// addi r9,r10,-8640
	ctx.r9.s64 = ctx.r10.s64 + -8640;
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r6,r7,146
	ctx.r6.s64 = ctx.r7.s64 * 146;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// ori r7,r7,472
	ctx.r7.u64 = ctx.r7.u64 | 472;
	// lwzx r7,r31,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// addi r7,r7,68
	ctx.r7.s64 = ctx.r7.s64 + 68;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x822d4948
	ctx.lr = 0x82128DE8;
	sub_822D4948(ctx, base);
	// lwz r10,2844(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2844);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r7,-2
	ctx.r10.s64 = ctx.r7.s64 + -2;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// bl 0x822d4948
	ctx.lr = 0x82128E20;
	sub_822D4948(ctx, base);
	// lfs f11,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// ld r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// ld r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f13,f10,f8
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f7,f0,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fsubs f0,f12,f5
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fmadds f6,f13,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fsubs f13,f11,f4
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// fmuls f3,f13,f13
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f13,f10,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fmadds f1,f0,f0,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f0,f13,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bge cr6,0x82128eac
	if (!ctx.cr6.lt) goto loc_82128EAC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// b 0x82128ec0
	goto loc_82128EC0;
loc_82128EAC:
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_82128EC0:
	// lfs f13,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r11,-11424
	ctx.r3.s64 = ctx.r11.s64 + -11424;
	// fsubs f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmadds f6,f0,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f5,f13,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fsqrts f31,f5
	ctx.f31.f64 = double(float(sqrt(ctx.f5.f64)));
	// bl 0x822da0c8
	ctx.lr = 0x82128F00;
	sub_822DA0C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,2796(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2796);
	ctx.f4.f64 = double(temp.f32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bne cr6,0x82128f60
	if (!ctx.cr6.eq) goto loc_82128F60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x82128F20;
	sub_8210B3C8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fdivs f3,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
	// addi r11,r11,30384
	ctx.r11.s64 = ctx.r11.s64 + 30384;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fcmpu cr6,f3,f2
	ctx.cr6.compare(ctx.f3.f64, ctx.f2.f64);
	// bgt cr6,0x82128f60
	if (ctx.cr6.gt) goto loc_82128F60;
	// bso cr6,0x82128f60
	if (ctx.cr6.so) goto loc_82128F60;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lfs f0,776(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 776);
	ctx.f0.f64 = double(temp.f32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stfs f0,2796(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 2796, temp.u32);
	// addi r10,r10,-18560
	ctx.r10.s64 = ctx.r10.s64 + -18560;
	// addis r11,r10,9
	ctx.r11.s64 = ctx.r10.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822c7128
	ctx.lr = 0x82128F60;
	sub_822C7128(ctx, base);
loc_82128F60:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82128F70"))) PPC_WEAK_FUNC(sub_82128F70);
PPC_FUNC_IMPL(__imp__sub_82128F70) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r8,r11,26080
	ctx.r8.s64 = ctx.r11.s64 + 26080;
	// beq cr6,0x82128fa4
	if (ctx.cr6.eq) goto loc_82128FA4;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r7,r9,16216
	ctx.r7.u64 = ctx.r9.u64 | 16216;
	// ori r4,r5,46272
	ctx.r4.u64 = ctx.r5.u64 | 46272;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stbx r10,r6,r4
	PPC_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r10.u8);
loc_82128FA4:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// stb r10,22402(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22402, ctx.r10.u8);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stb r10,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r10.u8);
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// stb r9,644(r11)
	PPC_STORE_U8(ctx.r11.u32 + 644, ctx.r9.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r7,r10,16294
	ctx.r7.u64 = ctx.r10.u64 | 16294;
	// stbx r11,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// stb r9,2892(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2892, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82128FDC"))) PPC_WEAK_FUNC(sub_82128FDC);
PPC_FUNC_IMPL(__imp__sub_82128FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82128FE0"))) PPC_WEAK_FUNC(sub_82128FE0);
PPC_FUNC_IMPL(__imp__sub_82128FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,33
	ctx.r10.s64 = 2162688;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,8348
	ctx.r9.u64 = ctx.r10.u64 | 8348;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lbz r8,1000(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1000);
	// rotlwi r11,r8,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2672
	ctx.r3.s64 = ctx.r11.s64 + 2672;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82129008"))) PPC_WEAK_FUNC(sub_82129008);
PPC_FUNC_IMPL(__imp__sub_82129008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,36968
	ctx.r9.u64 = ctx.r10.u64 | 36968;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82129048
	if (!ctx.cr6.gt) goto loc_82129048;
	// addi r10,r3,2396
	ctx.r10.s64 = ctx.r3.s64 + 2396;
loc_8212902C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x82129050
	if (ctx.cr6.eq) goto loc_82129050;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8212902c
	if (ctx.cr6.lt) goto loc_8212902C;
loc_82129048:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82129050:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82129058"))) PPC_WEAK_FUNC(sub_82129058);
PPC_FUNC_IMPL(__imp__sub_82129058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r6,r11,28544
	ctx.r6.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r10,r11,37004
	ctx.r10.u64 = ctx.r11.u64 | 37004;
	// lfs f7,36(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lwzx r11,r6,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r9,r9,30384
	ctx.r9.s64 = ctx.r9.s64 + 30384;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r3,2880
	ctx.r11.s64 = ctx.r3.s64 + 2880;
	// addi r10,r3,2856
	ctx.r10.s64 = ctx.r3.s64 + 2856;
	// lfs f8,2864(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2864);
	ctx.f8.f64 = double(temp.f32);
	// subfic r5,r3,-2880
	ctx.xer.ca = ctx.r3.u32 <= 4294964416;
	ctx.r5.s64 = -2880 - ctx.r3.s64;
	// lfs f11,756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 756);
	ctx.f11.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f10,736(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 736);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,2868(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2868);
	ctx.f9.f64 = double(temp.f32);
loc_821290AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821290cc
	if (ctx.cr6.eq) goto loc_821290CC;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x821290cc
	if (!ctx.cr6.gt) goto loc_821290CC;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
loc_821290CC:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// ble cr6,0x821290e0
	if (!ctx.cr6.gt) goto loc_821290E0;
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_821290E0:
	// lfs f5,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fabs f13,f5
	ctx.f13.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fmuls f4,f13,f12
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// ble cr6,0x821290f8
	if (!ctx.cr6.gt) goto loc_821290F8;
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_821290F8:
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r7,r8,37004
	ctx.r7.u64 = ctx.r8.u64 | 37004;
	// add r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwzx r9,r6,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821290ac
	if (ctx.cr6.lt) goto loc_821290AC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212911C"))) PPC_WEAK_FUNC(sub_8212911C);
PPC_FUNC_IMPL(__imp__sub_8212911C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82129120"))) PPC_WEAK_FUNC(sub_82129120);
PPC_FUNC_IMPL(__imp__sub_82129120) {
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
	// mulli r9,r4,19200
	ctx.r9.s64 = ctx.r4.s64 * 19200;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r10,r11,35
	ctx.r10.s64 = ctx.r11.s64 + 2293760;
	// addi r8,r10,-13016
	ctx.r8.s64 = ctx.r10.s64 + -13016;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r31,r10,2388
	ctx.r31.s64 = ctx.r10.s64 + 2388;
	// lbz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821291cc
	if (ctx.cr6.eq) goto loc_821291CC;
	// lis r3,33
	ctx.r3.s64 = 2162688;
	// ori r10,r3,4416
	ctx.r10.u64 = ctx.r3.u64 | 4416;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8212919c
	if (!ctx.cr6.lt) goto loc_8212919C;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addis r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 655360;
	// ori r8,r9,37344
	ctx.r8.u64 = ctx.r9.u64 | 37344;
	// addi r11,r11,-7344
	ctx.r11.s64 = ctx.r11.s64 + -7344;
	// mullw r10,r4,r8
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821291a0
	goto loc_821291A0;
loc_8212919C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821291A0:
	// bl 0x822edfd8
	ctx.lr = 0x821291A4;
	sub_822EDFD8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821291cc
	if (ctx.cr6.eq) goto loc_821291CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stb r6,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r6.u8);
	// stb r5,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r5.u8);
loc_821291CC:
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

__attribute__((alias("__imp__sub_821291E0"))) PPC_WEAK_FUNC(sub_821291E0);
PPC_FUNC_IMPL(__imp__sub_821291E0) {
	PPC_FUNC_PROLOGUE();
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
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
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
	// beq cr6,0x8212923c
	if (ctx.cr6.eq) goto loc_8212923C;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// addi r5,r11,14520
	ctx.r5.s64 = ctx.r11.s64 + 14520;
	// lwzx r11,r10,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82129240
	if (ctx.cr6.eq) goto loc_82129240;
loc_8212923C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82129240:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r7,r8,49147
	ctx.r7.u64 = ctx.r8.u64 | 49147;
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8212926c
	if (ctx.cr6.eq) goto loc_8212926C;
	// b 0x82123e00
	sub_82123E00(ctx, base);
	return;
loc_8212926C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// li r6,6
	ctx.r6.s64 = 6;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// b 0x82361460
	sub_82361460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82129288"))) PPC_WEAK_FUNC(sub_82129288);
PPC_FUNC_IMPL(__imp__sub_82129288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212928C"))) PPC_WEAK_FUNC(sub_8212928C);
PPC_FUNC_IMPL(__imp__sub_8212928C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82129290"))) PPC_WEAK_FUNC(sub_82129290);
PPC_FUNC_IMPL(__imp__sub_82129290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82123490
	sub_82123490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821292A8"))) PPC_WEAK_FUNC(sub_821292A8);
PPC_FUNC_IMPL(__imp__sub_821292A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821292AC"))) PPC_WEAK_FUNC(sub_821292AC);
PPC_FUNC_IMPL(__imp__sub_821292AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821292B0"))) PPC_WEAK_FUNC(sub_821292B0);
PPC_FUNC_IMPL(__imp__sub_821292B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821292B8;
	__savegprlr_29(ctx, base);
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
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r30,r10
	ctx.r30.s64 = ctx.r10.s8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8212938c
	if (ctx.cr6.eq) goto loc_8212938C;
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
	// beq cr6,0x8212931c
	if (ctx.cr6.eq) goto loc_8212931C;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// addi r5,r11,14520
	ctx.r5.s64 = ctx.r11.s64 + 14520;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r4,r10,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82129320
	if (ctx.cr6.eq) goto loc_82129320;
loc_8212931C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82129320:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212938c
	if (ctx.cr6.eq) goto loc_8212938C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lbz r10,5344(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5344);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// li r6,0
	ctx.r6.s64 = 0;
	// bne cr6,0x82129354
	if (!ctx.cr6.eq) goto loc_82129354;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82129354:
	// bl 0x82361460
	ctx.lr = 0x82129358;
	sub_82361460(ctx, base);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r29,5348
	ctx.r6.s64 = ctx.r29.s64 + 5348;
	// ori r5,r5,11
	ctx.r5.u64 = ctx.r5.u64 | 11;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361450
	ctx.lr = 0x82129374;
	sub_82361450(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361460
	ctx.lr = 0x8212938C;
	sub_82361460(ctx, base);
loc_8212938C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82129394"))) PPC_WEAK_FUNC(sub_82129394);
PPC_FUNC_IMPL(__imp__sub_82129394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82129398"))) PPC_WEAK_FUNC(sub_82129398);
PPC_FUNC_IMPL(__imp__sub_82129398) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821293ac
	if (!ctx.cr6.eq) goto loc_821293AC;
loc_821293A4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_821293AC:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821293c0
	if (!ctx.cr6.eq) goto loc_821293C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821293C0:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821293a4
	if (ctx.cr6.lt) goto loc_821293A4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821293D8"))) PPC_WEAK_FUNC(sub_821293D8);
PPC_FUNC_IMPL(__imp__sub_821293D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821293E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-1936(r1)
	ea = -1936 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r30,56(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ble cr6,0x82129474
	if (!ctx.cr6.gt) goto loc_82129474;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
loc_82129420:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r10,r11,584
	ctx.r10.s64 = ctx.r11.s64 * 584;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// mulli r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 * 328;
	// lwz r5,316(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 316);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r5,19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 19, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x82129450
	if (!ctx.cr6.eq) goto loc_82129450;
	// lwz r4,10664(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10664);
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// b 0x82129458
	goto loc_82129458;
loc_82129450:
	// lwz r3,10636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10636);
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
loc_82129458:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,5956
	ctx.r9.s64 = ctx.r9.s64 + 5956;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// stw r11,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r11.u32);
	// addi r8,r8,304
	ctx.r8.s64 = ctx.r8.s64 + 304;
	// blt cr6,0x82129420
	if (ctx.cr6.lt) goto loc_82129420;
loc_82129474:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r5,304
	ctx.r5.s64 = 304;
	// addi r6,r11,-27752
	ctx.r6.s64 = ctx.r11.s64 + -27752;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cd88
	ctx.lr = 0x8212948C;
	sub_8259CD88(ctx, base);
	// li r7,6
	ctx.r7.s64 = 6;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82129574
	if (!ctx.cr6.gt) goto loc_82129574;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// addi r8,r11,-304
	ctx.r8.s64 = ctx.r11.s64 + -304;
loc_821294A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,304(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 304);
	// mulli r9,r11,584
	ctx.r9.s64 = ctx.r11.s64 * 584;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// mulli r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 * 328;
	// lwz r5,316(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 316);
	// mulli r10,r10,5956
	ctx.r10.s64 = ctx.r10.s64 * 5956;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r5,19
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 19, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne cr6,0x8212950c
	if (!ctx.cr6.eq) goto loc_8212950C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r9,r10,584
	ctx.r9.s64 = ctx.r10.s64 * 584;
	// add r4,r9,r31
	ctx.r4.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,324(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 324);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8212950c
	if (!ctx.cr6.lt) goto loc_8212950C;
	// mulli r10,r10,328
	ctx.r10.s64 = ctx.r10.s64 * 328;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r4,10668(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 10668);
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// bge cr6,0x8212950c
	if (!ctx.cr6.lt) goto loc_8212950C;
	// stw r29,10660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10660, ctx.r29.u32);
	// stw r7,10584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10584, ctx.r7.u32);
	// b 0x82129564
	goto loc_82129564;
loc_8212950C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82129550
	if (!ctx.cr6.gt) goto loc_82129550;
	// lwz r3,308(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 308);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82129550
	if (!ctx.cr6.eq) goto loc_82129550;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mulli r10,r9,328
	ctx.r10.s64 = ctx.r9.s64 * 328;
	// mulli r9,r5,5956
	ctx.r9.s64 = ctx.r5.s64 * 5956;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r4,10660(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10660);
	// stw r4,10660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10660, ctx.r4.u32);
	// lwz r3,10584(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10584);
	// stw r3,10584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10584, ctx.r3.u32);
	// b 0x82129560
	goto loc_82129560;
loc_82129550:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r10,10660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10660, ctx.r10.u32);
	// stw r9,10584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10584, ctx.r9.u32);
loc_82129560:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_82129564:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,304
	ctx.r8.s64 = ctx.r8.s64 + 304;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x821294a4
	if (ctx.cr6.lt) goto loc_821294A4;
loc_82129574:
	// addi r1,r1,1936
	ctx.r1.s64 = ctx.r1.s64 + 1936;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212957C"))) PPC_WEAK_FUNC(sub_8212957C);
PPC_FUNC_IMPL(__imp__sub_8212957C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82129580"))) PPC_WEAK_FUNC(sub_82129580);
PPC_FUNC_IMPL(__imp__sub_82129580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x82129588;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r11,15328(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15328);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82129758
	if (ctx.cr6.eq) goto loc_82129758;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lbz r10,15480(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 15480);
	// lwz r30,19168(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19168);
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// extsb r25,r10
	ctx.r25.s64 = ctx.r10.s8;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365698
	ctx.lr = 0x821295C0;
	sub_82365698(ctx, base);
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mulli r27,r3,5956
	ctx.r27.s64 = ctx.r3.s64 * 5956;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// addi r28,r11,10528
	ctx.r28.s64 = ctx.r11.s64 + 10528;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 16);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x820fa560
	ctx.lr = 0x821295F8;
	sub_820FA560(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// addis r11,r29,35
	ctx.r11.s64 = ctx.r29.s64 + 2293760;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// sth r6,16(r28)
	PPC_STORE_U16(ctx.r28.u32 + 16, ctx.r6.u16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 * 328;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,10580
	ctx.r31.s64 = ctx.r11.s64 + 10580;
	// bl 0x820c7fd0
	ctx.lr = 0x8212962C;
	sub_820C7FD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addis r10,r29,35
	ctx.r10.s64 = ctx.r29.s64 + 2293760;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r10,-31704
	ctx.r3.s64 = ctx.r10.s64 + -31704;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x820c8048
	ctx.lr = 0x82129644;
	sub_820C8048(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addis r10,r29,35
	ctx.r10.s64 = ctx.r29.s64 + 2293760;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r10,-31704
	ctx.r3.s64 = ctx.r10.s64 + -31704;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x820c8240
	ctx.lr = 0x8212965C;
	sub_820C8240(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// blt cr6,0x82129688
	if (ctx.cr6.lt) goto loc_82129688;
	// beq cr6,0x82129674
	if (ctx.cr6.eq) goto loc_82129674;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82129694
	goto loc_82129694;
loc_82129674:
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// ori r9,r10,35744
	ctx.r9.u64 = ctx.r10.u64 | 35744;
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// b 0x82129694
	goto loc_82129694;
loc_82129688:
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// ori r7,r8,35744
	ctx.r7.u64 = ctx.r8.u64 | 35744;
	// lwzx r10,r29,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
loc_82129694:
	// addis r11,r29,35
	ctx.r11.s64 = ctx.r29.s64 + 2293760;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820b0048
	ctx.lr = 0x821296A8;
	sub_820B0048(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addis r10,r29,35
	ctx.r10.s64 = ctx.r29.s64 + 2293760;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r10,-31704
	ctx.r3.s64 = ctx.r10.s64 + -31704;
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// bl 0x820aff08
	ctx.lr = 0x821296C0;
	sub_820AFF08(ctx, base);
	// addis r10,r29,35
	ctx.r10.s64 = ctx.r29.s64 + 2293760;
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r10,-31704
	ctx.r3.s64 = ctx.r10.s64 + -31704;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r6,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// stw r5,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r5.u32);
	// bl 0x820c7fd0
	ctx.lr = 0x821296F0;
	sub_820C7FD0(ctx, base);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// rlwinm r28,r25,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,8544
	ctx.r31.s64 = ctx.r11.s64 + 8544;
	// addis r11,r29,35
	ctx.r11.s64 = ctx.r29.s64 + 2293760;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-29860
	ctx.r11.s64 = ctx.r11.s64 + -29860;
	// lwzx r10,r28,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// lwzx r11,r4,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82129724
	if (!ctx.cr6.eq) goto loc_82129724;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82129724:
	// lwzx r9,r28,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// addis r11,r29,35
	ctx.r11.s64 = ctx.r29.s64 + 2293760;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x820b0048
	ctx.lr = 0x8212973C;
	sub_820B0048(ctx, base);
	// lwzx r8,r28,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r11,20(r8)
	PPC_STORE_U8(ctx.r8.u32 + 20, ctx.r11.u8);
	// bl 0x82122010
	ctx.lr = 0x82129758;
	sub_82122010(ctx, base);
loc_82129758:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821293d8
	ctx.lr = 0x82129760;
	sub_821293D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82129768"))) PPC_WEAK_FUNC(sub_82129768);
PPC_FUNC_IMPL(__imp__sub_82129768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82129770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// lwz r29,56(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x821293d8
	ctx.lr = 0x8212979C;
	sub_821293D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fc820
	ctx.lr = 0x821297A8;
	sub_820FC820(ctx, base);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r7,r8,51540
	ctx.r7.u64 = ctx.r8.u64 | 51540;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stbx r11,r30,r7
	PPC_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u8);
	// bl 0x82365698
	ctx.lr = 0x821297C0;
	sub_82365698(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r10,r3,5956
	ctx.r10.s64 = ctx.r3.s64 * 5956;
	// mulli r11,r6,328
	ctx.r11.s64 = ctx.r6.s64 * 328;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,10584(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 10584);
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bne cr6,0x821297ec
	if (!ctx.cr6.eq) goto loc_821297EC;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// bl 0x820ffa70
	ctx.lr = 0x821297EC;
	sub_820FFA70(ctx, base);
loc_821297EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821297F4"))) PPC_WEAK_FUNC(sub_821297F4);
PPC_FUNC_IMPL(__imp__sub_821297F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821297F8"))) PPC_WEAK_FUNC(sub_821297F8);
PPC_FUNC_IMPL(__imp__sub_821297F8) {
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
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x8212981C;
	sub_82365758(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// beq cr6,0x82129850
	if (ctx.cr6.eq) goto loc_82129850;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-29908
	ctx.r9.s64 = ctx.r11.s64 + -29908;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
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
loc_82129850:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820c8348
	ctx.lr = 0x8212985C;
	sub_820C8348(ctx, base);
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

__attribute__((alias("__imp__sub_82129870"))) PPC_WEAK_FUNC(sub_82129870);
PPC_FUNC_IMPL(__imp__sub_82129870) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lbz r9,3501(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3501);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821298a4
	if (ctx.cr6.eq) goto loc_821298A4;
	// lbz r8,3500(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3500);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821298a4
	if (!ctx.cr6.eq) goto loc_821298A4;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r7,1
	ctx.r7.s64 = 1;
	// lbz r3,-25538(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + -25538);
	// stb r7,3500(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3500, ctx.r7.u8);
loc_821298A4:
	// lbz r6,3500(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3500);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821298d0
	if (ctx.cr6.eq) goto loc_821298D0;
	// lbz r5,3502(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3502);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821298d0
	if (ctx.cr6.eq) goto loc_821298D0;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lbz r9,-25537(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -25537);
	// stb r10,3502(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3502, ctx.r10.u8);
	// or r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 | ctx.r8.u64;
loc_821298D0:
	// lbz r7,3483(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3483);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821298f0
	if (ctx.cr6.eq) goto loc_821298F0;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lbz r6,-25540(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + -25540);
	// stb r10,3483(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3483, ctx.r10.u8);
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
loc_821298F0:
	// lbz r9,3484(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3484);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82129910
	if (ctx.cr6.eq) goto loc_82129910;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// lbz r8,-25539(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -25539);
	// stb r10,3484(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3484, ctx.r10.u8);
	// or r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 | ctx.r7.u64;
loc_82129910:
	// lbz r6,3485(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3485);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82129930
	if (ctx.cr6.eq) goto loc_82129930;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// lbz r5,-25536(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + -25536);
	// stb r10,3485(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3485, ctx.r10.u8);
	// or r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 | ctx.r3.u64;
loc_82129930:
	// lbz r9,3503(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3503);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,3504(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3504);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lbz r7,-25535(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -25535);
	// stb r10,3503(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3503, ctx.r10.u8);
	// or r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 | ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82129960"))) PPC_WEAK_FUNC(sub_82129960);
PPC_FUNC_IMPL(__imp__sub_82129960) {
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
	// bl 0x821274d8
	ctx.lr = 0x82129978;
	sub_821274D8(ctx, base);
	// lbz r11,3500(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821299a0
	if (!ctx.cr6.eq) goto loc_821299A0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,3501(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3501, ctx.r10.u8);
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
loc_821299A0:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,3502(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3502, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_821299BC"))) PPC_WEAK_FUNC(sub_821299BC);
PPC_FUNC_IMPL(__imp__sub_821299BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821299C0"))) PPC_WEAK_FUNC(sub_821299C0);
PPC_FUNC_IMPL(__imp__sub_821299C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,3488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3488);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82129ac0
	if (ctx.cr6.eq) goto loc_82129AC0;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82129a5c
	if (ctx.cr6.eq) goto loc_82129A5C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82129ae0
	if (!ctx.cr6.eq) goto loc_82129AE0;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x8221c328
	ctx.lr = 0x821299FC;
	sub_8221C328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// beq cr6,0x82129a3c
	if (ctx.cr6.eq) goto loc_82129A3C;
	// bl 0x82360f70
	ctx.lr = 0x82129A20;
	sub_82360F70(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r10.u32);
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
loc_82129A3C:
	// bl 0x82360f70
	ctx.lr = 0x82129A40;
	sub_82360F70(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r9,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r9.u32);
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
loc_82129A5C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x8221c328
	ctx.lr = 0x82129A68;
	sub_8221C328(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// beq cr6,0x82129aa8
	if (ctx.cr6.eq) goto loc_82129AA8;
	// bl 0x82360f70
	ctx.lr = 0x82129A8C;
	sub_82360F70(ctx, base);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r7,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r7.u32);
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
loc_82129AA8:
	// bl 0x82360f70
	ctx.lr = 0x82129AAC;
	sub_82360F70(ctx, base);
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
loc_82129AC0:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// bl 0x82360f70
	ctx.lr = 0x82129AD8;
	sub_82360F70(ctx, base);
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r6,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r6.u32);
loc_82129AE0:
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

__attribute__((alias("__imp__sub_82129AF4"))) PPC_WEAK_FUNC(sub_82129AF4);
PPC_FUNC_IMPL(__imp__sub_82129AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82129AF8"))) PPC_WEAK_FUNC(sub_82129AF8);
PPC_FUNC_IMPL(__imp__sub_82129AF8) {
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
	// lis r10,3
	ctx.r10.s64 = 196608;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,12424
	ctx.r9.u64 = ctx.r10.u64 | 12424;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r7,r8,12424
	ctx.r7.u64 = ctx.r8.u64 | 12424;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lhzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// ori r7,r8,12424
	ctx.r7.u64 = ctx.r8.u64 | 12424;
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r9,r3,12428
	ctx.r9.u64 = ctx.r3.u64 | 12428;
	// addi r3,r8,23504
	ctx.r3.s64 = ctx.r8.s64 + 23504;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// ori r7,r8,12428
	ctx.r7.u64 = ctx.r8.u64 | 12428;
	// stwx r9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// divwu r11,r10,r5
	ctx.r11.u32 = ctx.r10.u32 / ctx.r5.u32;
	// mullw r9,r11,r5
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x82129B90;
	sub_8210FCF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,5324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5324);
	// li r4,400
	ctx.r4.s64 = 400;
	// bl 0x82361f88
	ctx.lr = 0x82129BA0;
	sub_82361F88(ctx, base);
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

__attribute__((alias("__imp__sub_82129BB4"))) PPC_WEAK_FUNC(sub_82129BB4);
PPC_FUNC_IMPL(__imp__sub_82129BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82129BB8"))) PPC_WEAK_FUNC(sub_82129BB8);
PPC_FUNC_IMPL(__imp__sub_82129BB8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82129BC0;
	__savegprlr_28(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r30,56(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ble cr6,0x82129c50
	if (!ctx.cr6.gt) goto loc_82129C50;
	// clrlwi r29,r6,24
	ctx.r29.u64 = ctx.r6.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r8,10568
	ctx.r7.s64 = ctx.r8.s64 + 10568;
loc_82129C08:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82129c28
	if (ctx.cr6.eq) goto loc_82129C28;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mulli r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 * 328;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,10664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10664);
	// b 0x82129c2c
	goto loc_82129C2C;
loc_82129C28:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82129C2C:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82129c3c
	if (!ctx.cr6.gt) goto loc_82129C3C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82129C3C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,5956
	ctx.r9.s64 = ctx.r9.s64 + 5956;
	// addi r7,r7,5956
	ctx.r7.s64 = ctx.r7.s64 + 5956;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82129c08
	if (ctx.cr6.lt) goto loc_82129C08;
loc_82129C50:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r31.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82129cc0
	if (!ctx.cr6.gt) goto loc_82129CC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r8,10568
	ctx.r7.s64 = ctx.r8.s64 + 10568;
loc_82129C6C:
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82129cac
	if (ctx.cr6.eq) goto loc_82129CAC;
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129c98
	if (ctx.cr6.eq) goto loc_82129C98;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mulli r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 * 328;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,10664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10664);
	// b 0x82129c9c
	goto loc_82129C9C;
loc_82129C98:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82129C9C:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82129cac
	if (!ctx.cr6.gt) goto loc_82129CAC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82129CAC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,5956
	ctx.r9.s64 = ctx.r9.s64 + 5956;
	// addi r7,r7,5956
	ctx.r7.s64 = ctx.r7.s64 + 5956;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82129c6c
	if (ctx.cr6.lt) goto loc_82129C6C;
loc_82129CC0:
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82129CC8"))) PPC_WEAK_FUNC(sub_82129CC8);
PPC_FUNC_IMPL(__imp__sub_82129CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82129CD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82365698
	ctx.lr = 0x82129D04;
	sub_82365698(ctx, base);
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82129d2c
	if (ctx.cr6.eq) goto loc_82129D2C;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mulli r10,r3,5956
	ctx.r10.s64 = ctx.r3.s64 * 5956;
	// mulli r11,r8,328
	ctx.r11.s64 = ctx.r8.s64 * 328;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r6,10664(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 10664);
	// b 0x82129d38
	goto loc_82129D38;
loc_82129D2C:
	// mulli r11,r3,5956
	ctx.r11.s64 = ctx.r3.s64 * 5956;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r6,10568(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10568);
loc_82129D38:
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82129da0
	if (!ctx.cr6.gt) goto loc_82129DA0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r29,10568
	ctx.r8.s64 = ctx.r29.s64 + 10568;
loc_82129D50:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82129d8c
	if (ctx.cr6.eq) goto loc_82129D8C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82129d78
	if (ctx.cr6.eq) goto loc_82129D78;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mulli r11,r4,328
	ctx.r11.s64 = ctx.r4.s64 * 328;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,10664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10664);
	// b 0x82129d7c
	goto loc_82129D7C;
loc_82129D78:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82129D7C:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82129dac
	if (ctx.cr6.gt) goto loc_82129DAC;
	// bne cr6,0x82129d8c
	if (!ctx.cr6.eq) goto loc_82129D8C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82129D8C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,5956
	ctx.r10.s64 = ctx.r10.s64 + 5956;
	// addi r8,r8,5956
	ctx.r8.s64 = ctx.r8.s64 + 5956;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82129d50
	if (ctx.cr6.lt) goto loc_82129D50;
loc_82129DA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82129DAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82129DB8"))) PPC_WEAK_FUNC(sub_82129DB8);
PPC_FUNC_IMPL(__imp__sub_82129DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82129DC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,4864
	ctx.r30.s64 = ctx.r11.s64 + 4864;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// li r4,5
	ctx.r4.s64 = 5;
	// ori r10,r11,52520
	ctx.r10.u64 = ctx.r11.u64 | 52520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// bl 0x82188300
	ctx.lr = 0x82129DF8;
	sub_82188300(ctx, base);
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// ori r8,r9,52259
	ctx.r8.u64 = ctx.r9.u64 | 52259;
	// lbzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82129e70
	if (ctx.cr6.eq) goto loc_82129E70;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r29,r11
	ctx.r6.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lbz r4,2408(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2408);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82129e70
	if (!ctx.cr6.eq) goto loc_82129E70;
	// li r3,0
	ctx.r3.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,257
	ctx.r4.s64 = 257;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219c750
	ctx.lr = 0x82129E5C;
	sub_8219C750(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821939a0
	ctx.lr = 0x82129E68;
	sub_821939A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82129E70:
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219c750
	ctx.lr = 0x82129EA4;
	sub_8219C750(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821939a0
	ctx.lr = 0x82129EB0;
	sub_821939A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82129EB8"))) PPC_WEAK_FUNC(sub_82129EB8);
PPC_FUNC_IMPL(__imp__sub_82129EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82129EC0;
	__savegprlr_29(ctx, base);
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
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r30,r10
	ctx.r30.s64 = ctx.r10.s8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82129f94
	if (ctx.cr6.eq) goto loc_82129F94;
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
	// beq cr6,0x82129f24
	if (ctx.cr6.eq) goto loc_82129F24;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// addi r5,r11,14520
	ctx.r5.s64 = ctx.r11.s64 + 14520;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r4,r10,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82129f28
	if (ctx.cr6.eq) goto loc_82129F28;
loc_82129F24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82129F28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82129f94
	if (ctx.cr6.eq) goto loc_82129F94;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lbz r10,5600(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5600);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// li r6,0
	ctx.r6.s64 = 0;
	// bne cr6,0x82129f5c
	if (!ctx.cr6.eq) goto loc_82129F5C;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82129F5C:
	// bl 0x82361460
	ctx.lr = 0x82129F60;
	sub_82361460(ctx, base);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r29,5604
	ctx.r6.s64 = ctx.r29.s64 + 5604;
	// ori r5,r5,11
	ctx.r5.u64 = ctx.r5.u64 | 11;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361450
	ctx.lr = 0x82129F7C;
	sub_82361450(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,10
	ctx.r6.s64 = 10;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361460
	ctx.lr = 0x82129F94;
	sub_82361460(ctx, base);
loc_82129F94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82129F9C"))) PPC_WEAK_FUNC(sub_82129F9C);
PPC_FUNC_IMPL(__imp__sub_82129F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82129FA0"))) PPC_WEAK_FUNC(sub_82129FA0);
PPC_FUNC_IMPL(__imp__sub_82129FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82129FA8;
	__savegprlr_29(ctx, base);
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
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r30,r10
	ctx.r30.s64 = ctx.r10.s8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8212a07c
	if (ctx.cr6.eq) goto loc_8212A07C;
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
	// beq cr6,0x8212a00c
	if (ctx.cr6.eq) goto loc_8212A00C;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// addi r5,r11,14520
	ctx.r5.s64 = ctx.r11.s64 + 14520;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r4,r10,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8212a010
	if (ctx.cr6.eq) goto loc_8212A010;
loc_8212A00C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212A010:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212a07c
	if (ctx.cr6.eq) goto loc_8212A07C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lbz r10,5344(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5344);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// li r6,0
	ctx.r6.s64 = 0;
	// bne cr6,0x8212a044
	if (!ctx.cr6.eq) goto loc_8212A044;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8212A044:
	// bl 0x82361460
	ctx.lr = 0x8212A048;
	sub_82361460(ctx, base);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r29,5348
	ctx.r6.s64 = ctx.r29.s64 + 5348;
	// ori r5,r5,11
	ctx.r5.u64 = ctx.r5.u64 | 11;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361450
	ctx.lr = 0x8212A064;
	sub_82361450(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,7
	ctx.r6.s64 = 7;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361460
	ctx.lr = 0x8212A07C;
	sub_82361460(ctx, base);
loc_8212A07C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212A084"))) PPC_WEAK_FUNC(sub_8212A084);
PPC_FUNC_IMPL(__imp__sub_8212A084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212A088"))) PPC_WEAK_FUNC(sub_8212A088);
PPC_FUNC_IMPL(__imp__sub_8212A088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8212A090;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// lis r8,0
	ctx.r8.s64 = 0;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// ori r7,r8,46280
	ctx.r7.u64 = ctx.r8.u64 | 46280;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r10,r6,5956
	ctx.r10.s64 = ctx.r6.s64 * 5956;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r8,r5,328
	ctx.r8.s64 = ctx.r5.s64 * 328;
	// addi r29,r9,10528
	ctx.r29.s64 = ctx.r9.s64 + 10528;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// addi r31,r11,10580
	ctx.r31.s64 = ctx.r11.s64 + 10580;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x820fa560
	ctx.lr = 0x8212A0F8;
	sub_820FA560(ctx, base);
	// lhz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// ori r8,r9,35676
	ctx.r8.u64 = ctx.r9.u64 | 35676;
	// sth r11,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r11.u16);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// lwzx r11,r30,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x8212a128
	if (!ctx.cr6.eq) goto loc_8212A128;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8212A128:
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820c7fd0
	ctx.lr = 0x8212A13C;
	sub_820C7FD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addis r10,r30,35
	ctx.r10.s64 = ctx.r30.s64 + 2293760;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,-31704
	ctx.r3.s64 = ctx.r10.s64 + -31704;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x820c8048
	ctx.lr = 0x8212A154;
	sub_820C8048(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addis r10,r30,35
	ctx.r10.s64 = ctx.r30.s64 + 2293760;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,-31704
	ctx.r3.s64 = ctx.r10.s64 + -31704;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x820c8240
	ctx.lr = 0x8212A16C;
	sub_820C8240(ctx, base);
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r6,r7,35744
	ctx.r6.u64 = ctx.r7.u64 | 35744;
	// addis r10,r30,35
	ctx.r10.s64 = ctx.r30.s64 + 2293760;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,-31704
	ctx.r3.s64 = ctx.r10.s64 + -31704;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x820b0048
	ctx.lr = 0x8212A194;
	sub_820B0048(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addis r10,r30,35
	ctx.r10.s64 = ctx.r30.s64 + 2293760;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r10,-31704
	ctx.r3.s64 = ctx.r10.s64 + -31704;
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// bl 0x820aff08
	ctx.lr = 0x8212A1AC;
	sub_820AFF08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x820fa788
	ctx.lr = 0x8212A1BC;
	sub_820FA788(ctx, base);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8544);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r10,8544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8544);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r10,8544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8544);
	// lbz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// stb r7,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r7.u8);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,8544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8544);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// bl 0x82122010
	ctx.lr = 0x8212A200;
	sub_82122010(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212A208"))) PPC_WEAK_FUNC(sub_8212A208);
PPC_FUNC_IMPL(__imp__sub_8212A208) {
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
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r7,r8,46284
	ctx.r7.u64 = ctx.r8.u64 | 46284;
	// ori r5,r6,46280
	ctx.r5.u64 = ctx.r6.u64 | 46280;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r4,r3,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwzx r11,r3,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8212a2e8
	if (ctx.cr6.lt) goto loc_8212A2E8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8212a2e4
	if (!ctx.cr6.gt) goto loc_8212A2E4;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r7,r11,8544
	ctx.r7.s64 = ctx.r11.s64 + 8544;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r9,r3,10544
	ctx.r9.s64 = ctx.r3.s64 + 10544;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
loc_8212A274:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// mulli r8,r11,328
	ctx.r8.s64 = ctx.r11.s64 * 328;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// bne cr6,0x8212a2c8
	if (!ctx.cr6.eq) goto loc_8212A2C8;
	// lwz r31,10620(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10620);
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r31,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r31.u32);
	// lwz r31,10616(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10616);
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r31,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r31.u32);
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r31,10640(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10640);
	// stb r31,20(r8)
	PPC_STORE_U8(ctx.r8.u32 + 20, ctx.r31.u8);
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,10636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10636);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// b 0x8212a2cc
	goto loc_8212A2CC;
loc_8212A2C8:
	// stw r5,10636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10636, ctx.r5.u32);
loc_8212A2CC:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r10,r10,5956
	ctx.r10.s64 = ctx.r10.s64 + 5956;
	// addi r9,r9,5956
	ctx.r9.s64 = ctx.r9.s64 + 5956;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8212a274
	if (!ctx.cr6.eq) goto loc_8212A274;
loc_8212A2E4:
	// bl 0x820fc820
	ctx.lr = 0x8212A2E8;
	sub_820FC820(ctx, base);
loc_8212A2E8:
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

__attribute__((alias("__imp__sub_8212A2FC"))) PPC_WEAK_FUNC(sub_8212A2FC);
PPC_FUNC_IMPL(__imp__sub_8212A2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212A300"))) PPC_WEAK_FUNC(sub_8212A300);
PPC_FUNC_IMPL(__imp__sub_8212A300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-27583
	ctx.r10.s64 = -1807679488;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-20813
	ctx.r11.s64 = -1364000768;
	// ori r9,r10,16334
	ctx.r9.u64 = ctx.r10.u64 | 16334;
	// ori r4,r11,49911
	ctx.r4.u64 = ctx.r11.u64 | 49911;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212A328"))) PPC_WEAK_FUNC(sub_8212A328);
PPC_FUNC_IMPL(__imp__sub_8212A328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8212A330;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r30,r10,28544
	ctx.r30.s64 = ctx.r10.s64 + 28544;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// ori r7,r8,35676
	ctx.r7.u64 = ctx.r8.u64 | 35676;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r9,r30,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// addis r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 65536;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r29,r29,-19256
	ctx.r29.s64 = ctx.r29.s64 + -19256;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r8,r6,328
	ctx.r8.s64 = ctx.r6.s64 * 328;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r5,5956
	ctx.r10.s64 = ctx.r5.s64 * 5956;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r28,r10,10528
	ctx.r28.s64 = ctx.r10.s64 + 10528;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// addi r31,r11,10580
	ctx.r31.s64 = ctx.r11.s64 + 10580;
	// bne cr6,0x8212a3a8
	if (!ctx.cr6.eq) goto loc_8212A3A8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8212A3A8:
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820c7fd0
	ctx.lr = 0x8212A3BC;
	sub_820C7FD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addis r10,r30,35
	ctx.r10.s64 = ctx.r30.s64 + 2293760;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,-31704
	ctx.r3.s64 = ctx.r10.s64 + -31704;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x820c8048
	ctx.lr = 0x8212A3D4;
	sub_820C8048(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addis r10,r30,35
	ctx.r10.s64 = ctx.r30.s64 + 2293760;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,-31704
	ctx.r3.s64 = ctx.r10.s64 + -31704;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x820c8240
	ctx.lr = 0x8212A3EC;
	sub_820C8240(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addis r10,r30,35
	ctx.r10.s64 = ctx.r30.s64 + 2293760;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,-31704
	ctx.r3.s64 = ctx.r10.s64 + -31704;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r10,r11,35744
	ctx.r10.u64 = ctx.r11.u64 | 35744;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x820b0048
	ctx.lr = 0x8212A414;
	sub_820B0048(ctx, base);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stb r3,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r3.u8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8212a42c
	if (!ctx.cr6.eq) goto loc_8212A42C;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
loc_8212A42C:
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820aff08
	ctx.lr = 0x8212A43C;
	sub_820AFF08(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// bl 0x820fa788
	ctx.lr = 0x8212A454;
	sub_820FA788(ctx, base);
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r11,r11,8544
	ctx.r11.s64 = ctx.r11.s64 + 8544;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r6,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r6.u32);
	// lbz r10,61(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 61);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stb r8,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r8.u8);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stb r7,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r7.u8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r30,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r30.u32);
	// bl 0x82122010
	ctx.lr = 0x8212A4D4;
	sub_82122010(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212A4DC"))) PPC_WEAK_FUNC(sub_8212A4DC);
PPC_FUNC_IMPL(__imp__sub_8212A4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212A4E0"))) PPC_WEAK_FUNC(sub_8212A4E0);
PPC_FUNC_IMPL(__imp__sub_8212A4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x8212A4E8;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fab90
	ctx.lr = 0x8212A510;
	sub_820FAB90(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8212a71c
	if (ctx.cr6.eq) goto loc_8212A71C;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r6,r7,46284
	ctx.r6.u64 = ctx.r7.u64 | 46284;
	// addi r25,r11,28544
	ctx.r25.s64 = ctx.r11.s64 + 28544;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r23,r11,8544
	ctx.r23.s64 = ctx.r11.s64 + 8544;
	// lwzx r24,r31,r6
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x8212a5ec
	if (!ctx.cr6.gt) goto loc_8212A5EC;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r28,r31,10528
	ctx.r28.s64 = ctx.r31.s64 + 10528;
	// subfic r26,r31,-10528
	ctx.xer.ca = ctx.r31.u32 <= 4294956768;
	ctx.r26.s64 = -10528 - ctx.r31.s64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_8212A550:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addis r10,r25,35
	ctx.r10.s64 = ctx.r25.s64 + 2293760;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r5,328
	ctx.r11.s64 = ctx.r5.s64 * 328;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r3,r10,-31704
	ctx.r3.s64 = ctx.r10.s64 + -31704;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,10580
	ctx.r30.s64 = ctx.r11.s64 + 10580;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// stb r11,20(r5)
	PPC_STORE_U8(ctx.r5.u32 + 20, ctx.r11.u8);
	// bl 0x820aff08
	ctx.lr = 0x8212A59C;
	sub_820AFF08(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r6,61(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 61);
	// mulli r11,r9,584
	ctx.r11.s64 = ctx.r9.s64 * 584;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r4,593(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + 593);
	// subf r11,r6,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r6.s64;
	// stb r11,62(r30)
	PPC_STORE_U8(ctx.r30.u32 + 62, ctx.r11.u8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// sth r9,16(r28)
	PPC_STORE_U16(ctx.r28.u32 + 16, ctx.r9.u16);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820fa830
	ctx.lr = 0x8212A5D8;
	sub_820FA830(ctx, base);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,5956
	ctx.r28.s64 = ctx.r28.s64 + 5956;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8212a550
	if (!ctx.cr6.eq) goto loc_8212A550;
loc_8212A5EC:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212a71c
	if (!ctx.cr6.eq) goto loc_8212A71C;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x8212a71c
	if (!ctx.cr6.eq) goto loc_8212A71C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8212a624
	if (ctx.cr6.eq) goto loc_8212A624;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212A624:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212a71c
	if (ctx.cr6.eq) goto loc_8212A71C;
	// addis r11,r25,33
	ctx.r11.s64 = ctx.r25.s64 + 2162688;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b7630
	ctx.lr = 0x8212A648;
	sub_820B7630(ctx, base);
	// lhz r3,10576(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10576);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8212a698
	if (!ctx.cr6.eq) goto loc_8212A698;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212a698
	if (!ctx.cr6.eq) goto loc_8212A698;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8212a698
	if (!ctx.cr6.eq) goto loc_8212A698;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
loc_8212A698:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8212a6b0
	if (ctx.cr6.gt) goto loc_8212A6B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r11,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r11.u32);
	// b 0x8212a6ec
	goto loc_8212A6EC;
loc_8212A6B0:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x8212a6cc
	if (ctx.cr6.gt) goto loc_8212A6CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r11.u32);
	// b 0x8212a6ec
	goto loc_8212A6EC;
loc_8212A6CC:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x8212a6e8
	if (ctx.cr6.gt) goto loc_8212A6E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r11.u32);
	// b 0x8212a6ec
	goto loc_8212A6EC;
loc_8212A6E8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8212A6EC:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,16448
	ctx.r11.s64 = ctx.r11.s64 + 16448;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bgt cr6,0x8212a704
	if (ctx.cr6.gt) goto loc_8212A704;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8212A704:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212A71C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212A71C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212A724"))) PPC_WEAK_FUNC(sub_8212A724);
PPC_FUNC_IMPL(__imp__sub_8212A724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212A728"))) PPC_WEAK_FUNC(sub_8212A728);
PPC_FUNC_IMPL(__imp__sub_8212A728) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r8,r11,26080
	ctx.r8.s64 = ctx.r11.s64 + 26080;
	// beq cr6,0x8212a75c
	if (ctx.cr6.eq) goto loc_8212A75C;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r7,r11,16216
	ctx.r7.u64 = ctx.r11.u64 | 16216;
	// ori r4,r5,46272
	ctx.r4.u64 = ctx.r5.u64 | 46272;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stbx r10,r6,r4
	PPC_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r10.u8);
loc_8212A75C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r10,22402(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22402, ctx.r10.u8);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stb r10,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r10.u8);
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// stb r9,644(r11)
	PPC_STORE_U8(ctx.r11.u32 + 644, ctx.r9.u8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,16294
	ctx.r9.u64 = ctx.r10.u64 | 16294;
	// stbx r11,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u8);
	// stb r7,2892(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2892, ctx.r7.u8);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r5,r6,16216
	ctx.r5.u64 = ctx.r6.u64 | 16216;
	// lwzx r11,r8,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x820fa920
	sub_820FA920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212A7B0"))) PPC_WEAK_FUNC(sub_8212A7B0);
PPC_FUNC_IMPL(__imp__sub_8212A7B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212A7B4"))) PPC_WEAK_FUNC(sub_8212A7B4);
PPC_FUNC_IMPL(__imp__sub_8212A7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212A7B8"))) PPC_WEAK_FUNC(sub_8212A7B8);
PPC_FUNC_IMPL(__imp__sub_8212A7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// bne cr6,0x8212a7f4
	if (!ctx.cr6.eq) goto loc_8212A7F4;
	// lis r11,-20813
	ctx.r11.s64 = -1364000768;
	// lis r10,-27583
	ctx.r10.s64 = -1807679488;
	// ori r4,r11,49911
	ctx.r4.u64 = ctx.r11.u64 | 49911;
	// ori r9,r10,16334
	ctx.r9.u64 = ctx.r10.u64 | 16334;
	// li r5,2
	ctx.r5.s64 = 2;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
loc_8212A7F4:
	// lis r8,11753
	ctx.r8.s64 = 770244608;
	// lis r7,23498
	ctx.r7.s64 = 1539964928;
	// ori r4,r8,2177
	ctx.r4.u64 = ctx.r8.u64 | 2177;
	// ori r11,r7,44864
	ctx.r11.u64 = ctx.r7.u64 | 44864;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212A810"))) PPC_WEAK_FUNC(sub_8212A810);
PPC_FUNC_IMPL(__imp__sub_8212A810) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8212a824
	if (!ctx.cr6.eq) goto loc_8212A824;
loc_8212A81C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8212A824:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8212a838
	if (!ctx.cr6.eq) goto loc_8212A838;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8212A838:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212a81c
	if (ctx.cr6.lt) goto loc_8212A81C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212A850"))) PPC_WEAK_FUNC(sub_8212A850);
PPC_FUNC_IMPL(__imp__sub_8212A850) {
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
	// lbz r11,2996(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212a8ac
	if (!ctx.cr6.eq) goto loc_8212A8AC;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f1,3000(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3000);
	ctx.f1.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r3,r11,-29776
	ctx.r3.s64 = ctx.r11.s64 + -29776;
	// bl 0x82325180
	ctx.lr = 0x8212A88C;
	sub_82325180(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2996(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2996, ctx.r11.u8);
	// stb r11,3032(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3032, ctx.r11.u8);
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
loc_8212A8AC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,3032(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3032, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8212A8C8"))) PPC_WEAK_FUNC(sub_8212A8C8);
PPC_FUNC_IMPL(__imp__sub_8212A8C8) {
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
	// stwu r1,-1936(r1)
	ea = -1936 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// lwz r30,56(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble cr6,0x8212a948
	if (!ctx.cr6.gt) goto loc_8212A948;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
loc_8212A914:
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r8,r6,328
	ctx.r8.s64 = ctx.r6.s64 * 328;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,5956
	ctx.r9.s64 = ctx.r9.s64 + 5956;
	// add r5,r8,r31
	ctx.r5.u64 = ctx.r8.u64 + ctx.r31.u64;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// lwz r4,10652(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 10652);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// addi r10,r10,304
	ctx.r10.s64 = ctx.r10.s64 + 304;
	// blt cr6,0x8212a914
	if (ctx.cr6.lt) goto loc_8212A914;
loc_8212A948:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r5,304
	ctx.r5.s64 = 304;
	// addi r6,r11,-22512
	ctx.r6.s64 = ctx.r11.s64 + -22512;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cd88
	ctx.lr = 0x8212A960;
	sub_8259CD88(ctx, base);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8212a9f0
	if (!ctx.cr6.gt) goto loc_8212A9F0;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// addi r9,r11,-304
	ctx.r9.s64 = ctx.r11.s64 + -304;
loc_8212A978:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r11,304(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// mulli r10,r3,328
	ctx.r10.s64 = ctx.r3.s64 * 328;
	// mulli r11,r11,5956
	ctx.r11.s64 = ctx.r11.s64 * 5956;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ble cr6,0x8212a9cc
	if (!ctx.cr6.gt) goto loc_8212A9CC;
	// lwz r8,312(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 312);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8212a9cc
	if (!ctx.cr6.eq) goto loc_8212A9CC;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mulli r8,r4,5956
	ctx.r8.s64 = ctx.r4.s64 * 5956;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r3,10660(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10660);
	// stw r3,10660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10660, ctx.r3.u32);
	// lwz r10,10584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10584);
	// stw r10,10584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10584, ctx.r10.u32);
	// b 0x8212a9dc
	goto loc_8212A9DC;
loc_8212A9CC:
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r8,10660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10660, ctx.r8.u32);
	// stw r5,10584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10584, ctx.r5.u32);
loc_8212A9DC:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r9,r9,304
	ctx.r9.s64 = ctx.r9.s64 + 304;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8212a978
	if (ctx.cr6.lt) goto loc_8212A978;
loc_8212A9F0:
	// addi r1,r1,1936
	ctx.r1.s64 = ctx.r1.s64 + 1936;
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

__attribute__((alias("__imp__sub_8212AA08"))) PPC_WEAK_FUNC(sub_8212AA08);
PPC_FUNC_IMPL(__imp__sub_8212AA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8212AA10;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,15328(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15328);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8212aab4
	if (ctx.cr6.eq) goto loc_8212AAB4;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82365698
	ctx.lr = 0x8212AA54;
	sub_82365698(ctx, base);
	// mulli r29,r3,5956
	ctx.r29.s64 = ctx.r3.s64 * 5956;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r30,r11,10528
	ctx.r30.s64 = ctx.r11.s64 + 10528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x820fa560
	ctx.lr = 0x8212AA74;
	sub_820FA560(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r9,r10,36228
	ctx.r9.u64 = ctx.r10.u64 | 36228;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// sth r6,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r6.u16);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mulli r10,r8,328
	ctx.r10.s64 = ctx.r8.s64 * 328;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,10652(r7)
	PPC_STORE_U32(ctx.r7.u32 + 10652, ctx.r11.u32);
	// bl 0x82122010
	ctx.lr = 0x8212AAB4;
	sub_82122010(ctx, base);
loc_8212AAB4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8212a8c8
	ctx.lr = 0x8212AABC;
	sub_8212A8C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212AAC4"))) PPC_WEAK_FUNC(sub_8212AAC4);
PPC_FUNC_IMPL(__imp__sub_8212AAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212AAC8"))) PPC_WEAK_FUNC(sub_8212AAC8);
PPC_FUNC_IMPL(__imp__sub_8212AAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8212AAD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// lwz r29,56(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8212a8c8
	ctx.lr = 0x8212AAFC;
	sub_8212A8C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fc820
	ctx.lr = 0x8212AB08;
	sub_820FC820(ctx, base);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r7,r8,51540
	ctx.r7.u64 = ctx.r8.u64 | 51540;
	// stbx r11,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212AB20"))) PPC_WEAK_FUNC(sub_8212AB20);
PPC_FUNC_IMPL(__imp__sub_8212AB20) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x8212AB4C;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212ab6c
	if (ctx.cr6.eq) goto loc_8212AB6C;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
loc_8212AB6C:
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

__attribute__((alias("__imp__sub_8212AB84"))) PPC_WEAK_FUNC(sub_8212AB84);
PPC_FUNC_IMPL(__imp__sub_8212AB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212AB88"))) PPC_WEAK_FUNC(sub_8212AB88);
PPC_FUNC_IMPL(__imp__sub_8212AB88) {
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
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x8212ABAC;
	sub_82365758(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// beq cr6,0x8212abe0
	if (ctx.cr6.eq) goto loc_8212ABE0;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
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
loc_8212ABE0:
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// ori r7,r8,36228
	ctx.r7.u64 = ctx.r8.u64 | 36228;
	// lwzx r3,r11,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8212AC00"))) PPC_WEAK_FUNC(sub_8212AC00);
PPC_FUNC_IMPL(__imp__sub_8212AC00) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,3056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3056);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8212ad00
	if (ctx.cr6.eq) goto loc_8212AD00;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8212ac9c
	if (ctx.cr6.eq) goto loc_8212AC9C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8212ad20
	if (!ctx.cr6.eq) goto loc_8212AD20;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x8221c328
	ctx.lr = 0x8212AC3C;
	sub_8221C328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// beq cr6,0x8212ac7c
	if (ctx.cr6.eq) goto loc_8212AC7C;
	// bl 0x82360f70
	ctx.lr = 0x8212AC60;
	sub_82360F70(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,3056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3056, ctx.r10.u32);
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
loc_8212AC7C:
	// bl 0x82360f70
	ctx.lr = 0x8212AC80;
	sub_82360F70(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,3056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3056, ctx.r9.u32);
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
loc_8212AC9C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x8221c328
	ctx.lr = 0x8212ACA8;
	sub_8221C328(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// beq cr6,0x8212ace8
	if (ctx.cr6.eq) goto loc_8212ACE8;
	// bl 0x82360f70
	ctx.lr = 0x8212ACCC;
	sub_82360F70(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,3056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3056, ctx.r7.u32);
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
loc_8212ACE8:
	// bl 0x82360f70
	ctx.lr = 0x8212ACEC;
	sub_82360F70(ctx, base);
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
loc_8212AD00:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// bl 0x82360f70
	ctx.lr = 0x8212AD18;
	sub_82360F70(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r6,3056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3056, ctx.r6.u32);
loc_8212AD20:
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

__attribute__((alias("__imp__sub_8212AD34"))) PPC_WEAK_FUNC(sub_8212AD34);
PPC_FUNC_IMPL(__imp__sub_8212AD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212AD38"))) PPC_WEAK_FUNC(sub_8212AD38);
PPC_FUNC_IMPL(__imp__sub_8212AD38) {
	PPC_FUNC_PROLOGUE();
	// b 0x82122c18
	sub_82122C18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212AD3C"))) PPC_WEAK_FUNC(sub_8212AD3C);
PPC_FUNC_IMPL(__imp__sub_8212AD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212AD40"))) PPC_WEAK_FUNC(sub_8212AD40);
PPC_FUNC_IMPL(__imp__sub_8212AD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8212AD48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212adb8
	if (ctx.cr6.eq) goto loc_8212ADB8;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,37004
	ctx.r9.u64 = ctx.r10.u64 | 37004;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212adac
	if (!ctx.cr6.gt) goto loc_8212ADAC;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,4864
	ctx.r30.s64 = ctx.r11.s64 + 4864;
loc_8212AD80:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188300
	ctx.lr = 0x8212AD90;
	sub_82188300(ctx, base);
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r7,r8,37004
	ctx.r7.u64 = ctx.r8.u64 | 37004;
	// addi r30,r30,1104
	ctx.r30.s64 = ctx.r30.s64 + 1104;
	// lwzx r11,r29,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212ad80
	if (ctx.cr6.lt) goto loc_8212AD80;
loc_8212ADAC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82120c00
	ctx.lr = 0x8212ADB8;
	sub_82120C00(ctx, base);
loc_8212ADB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212ADC0"))) PPC_WEAK_FUNC(sub_8212ADC0);
PPC_FUNC_IMPL(__imp__sub_8212ADC0) {
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
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16273
	ctx.r9.u64 = ctx.r10.u64 | 16273;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r7,r8,16252
	ctx.r7.u64 = ctx.r8.u64 | 16252;
	// ori r5,r6,16247
	ctx.r5.u64 = ctx.r6.u64 | 16247;
	// stbx r11,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r4,57728
	ctx.r9.u64 = ctx.r4.u64 | 57728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r5
	PPC_STORE_U8(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u8);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x821041a8
	ctx.lr = 0x8212AE28;
	sub_821041A8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8212ae40
	if (ctx.cr6.eq) goto loc_8212AE40;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,24760
	ctx.r3.s64 = ctx.r11.s64 + 24760;
	// bl 0x8210e8e0
	ctx.lr = 0x8212AE40;
	sub_8210E8E0(ctx, base);
loc_8212AE40:
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

__attribute__((alias("__imp__sub_8212AE54"))) PPC_WEAK_FUNC(sub_8212AE54);
PPC_FUNC_IMPL(__imp__sub_8212AE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212AE58"))) PPC_WEAK_FUNC(sub_8212AE58);
PPC_FUNC_IMPL(__imp__sub_8212AE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8212AE60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,6912(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6912);
	// lwz r11,15328(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212aec0
	if (!ctx.cr6.eq) goto loc_8212AEC0;
	// lwz r31,19168(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 19168);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// mulli r10,r31,1104
	ctx.r10.s64 = ctx.r31.s64 * 1104;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188f88
	ctx.lr = 0x8212AE90;
	sub_82188F88(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188300
	ctx.lr = 0x8212AEA0;
	sub_82188300(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r3,r11,-29776
	ctx.r3.s64 = ctx.r11.s64 + -29776;
	// bl 0x82324d28
	ctx.lr = 0x8212AEB8;
	sub_82324D28(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,13652(r29)
	PPC_STORE_U8(ctx.r29.u32 + 13652, ctx.r10.u8);
loc_8212AEC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212AEC8"))) PPC_WEAK_FUNC(sub_8212AEC8);
PPC_FUNC_IMPL(__imp__sub_8212AEC8) {
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
	// lwz r11,6912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// bl 0x820ba188
	ctx.lr = 0x8212AEE8;
	sub_820BA188(ctx, base);
	// lwz r3,6912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// lwz r11,13496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13496);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8212af00
	if (!ctx.cr6.eq) goto loc_8212AF00;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820bd6d0
	ctx.lr = 0x8212AF00;
	sub_820BD6D0(ctx, base);
loc_8212AF00:
	// lwz r10,6912(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// lwz r9,15328(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15328);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8212af28
	if (!ctx.cr6.eq) goto loc_8212AF28;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r4,19168(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19168);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r3,r11,-29776
	ctx.r3.s64 = ctx.r11.s64 + -29776;
	// bl 0x82324d40
	ctx.lr = 0x8212AF28;
	sub_82324D40(ctx, base);
loc_8212AF28:
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

__attribute__((alias("__imp__sub_8212AF3C"))) PPC_WEAK_FUNC(sub_8212AF3C);
PPC_FUNC_IMPL(__imp__sub_8212AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212AF40"))) PPC_WEAK_FUNC(sub_8212AF40);
PPC_FUNC_IMPL(__imp__sub_8212AF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8212AF48;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,28544
	ctx.r27.s64 = ctx.r11.s64 + 28544;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8232da90
	ctx.lr = 0x8212AF70;
	sub_8232DA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8212b234
	if (ctx.cr6.eq) goto loc_8212B234;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,13280
	ctx.r3.s64 = ctx.r31.s64 + 13280;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820ac718
	ctx.lr = 0x8212AF90;
	sub_820AC718(ctx, base);
	// lwz r11,15328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212b234
	if (!ctx.cr6.eq) goto loc_8212B234;
	// lwz r29,19168(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19168);
	// addis r11,r27,35
	ctx.r11.s64 = ctx.r27.s64 + 2293760;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r11,-29776
	ctx.r3.s64 = ctx.r11.s64 + -29776;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8232ed30
	ctx.lr = 0x8212AFB8;
	sub_8232ED30(ctx, base);
	// lfs f13,148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// addi r27,r11,31200
	ctx.r27.s64 = ctx.r11.s64 + 31200;
	// lfs f10,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// li r26,1
	ctx.r26.s64 = 1;
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
	// fmadds f13,f11,f12,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,-316(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -316);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f9,f10,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8212b01c
	if (ctx.cr6.gt) goto loc_8212B01C;
	// lbz r10,492(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 492);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212b010
	if (!ctx.cr6.eq) goto loc_8212B010;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8212B010:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8212b020
	if (ctx.cr6.eq) goto loc_8212B020;
loc_8212B01C:
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_8212B020:
	// lbz r7,15219(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15219);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8212b234
	if (!ctx.cr6.eq) goto loc_8212B234;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8212B034;
	sub_82120AC0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// li r8,2
	ctx.r8.s64 = 2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x8212b17c
	if (ctx.cr6.eq) goto loc_8212B17C;
	// clrlwi r5,r26,24
	ctx.r5.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// li r5,-1
	ctx.r5.s64 = -1;
	// beq cr6,0x8212b0ec
	if (ctx.cr6.eq) goto loc_8212B0EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f1,-31380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31380);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212B078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821041a8
	ctx.lr = 0x8212B088;
	sub_821041A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212b0a8
	if (ctx.cr6.eq) goto loc_8212B0A8;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r8,r9,16273
	ctx.r8.u64 = ctx.r9.u64 | 16273;
	// lbzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8212b234
	if (!ctx.cr6.eq) goto loc_8212B234;
loc_8212B0A8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mulli r3,r29,1104
	ctx.r3.s64 = ctx.r29.s64 * 1104;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,252
	ctx.r4.s64 = 252;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8219c750
	ctx.lr = 0x8212B0E0;
	sub_8219C750(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8212B0EC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,-31384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31384);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,380(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212B108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821041a8
	ctx.lr = 0x8212B118;
	sub_821041A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212b138
	if (ctx.cr6.eq) goto loc_8212B138;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r8,r9,16273
	ctx.r8.u64 = ctx.r9.u64 | 16273;
	// lbzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8212b234
	if (!ctx.cr6.eq) goto loc_8212B234;
loc_8212B138:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mulli r3,r29,1104
	ctx.r3.s64 = ctx.r29.s64 * 1104;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,251
	ctx.r4.s64 = 251;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8219c750
	ctx.lr = 0x8212B170;
	sub_8219C750(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8212B17C:
	// clrlwi r6,r26,24
	ctx.r6.u64 = ctx.r26.u32 & 0xFF;
	// li r5,-1
	ctx.r5.s64 = -1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8212b21c
	if (ctx.cr6.eq) goto loc_8212B21C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f1,-31384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31384);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212B1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821041a8
	ctx.lr = 0x8212B1B8;
	sub_821041A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212b1d8
	if (ctx.cr6.eq) goto loc_8212B1D8;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r8,r9,16273
	ctx.r8.u64 = ctx.r9.u64 | 16273;
	// lbzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8212b234
	if (!ctx.cr6.eq) goto loc_8212B234;
loc_8212B1D8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mulli r3,r29,1104
	ctx.r3.s64 = ctx.r29.s64 * 1104;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,250
	ctx.r4.s64 = 250;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8219c750
	ctx.lr = 0x8212B210;
	sub_8219C750(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8212B21C:
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,380(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212B234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212B234:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212B240"))) PPC_WEAK_FUNC(sub_8212B240);
PPC_FUNC_IMPL(__imp__sub_8212B240) {
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
	// lbz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 624);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8212b2b8
	if (!ctx.cr6.eq) goto loc_8212B2B8;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lbz r10,19643(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19643);
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232da90
	ctx.lr = 0x8212B27C;
	sub_8232DA90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212b2b8
	if (ctx.cr6.eq) goto loc_8212B2B8;
	// lwz r9,15328(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15328);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8212b2b8
	if (!ctx.cr6.eq) goto loc_8212B2B8;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lbz r8,19641(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19641);
	// lwz r4,19168(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19168);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// rotlwi r10,r8,9
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 9);
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r11,-29776
	ctx.r3.s64 = ctx.r11.s64 + -29776;
	// bl 0x8232ed30
	ctx.lr = 0x8212B2B8;
	sub_8232ED30(ctx, base);
loc_8212B2B8:
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

__attribute__((alias("__imp__sub_8212B2D0"))) PPC_WEAK_FUNC(sub_8212B2D0);
PPC_FUNC_IMPL(__imp__sub_8212B2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8212B2D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x82125b28
	ctx.lr = 0x8212B2F0;
	sub_82125B28(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212b324
	if (ctx.cr6.eq) goto loc_8212B324;
	// lwz r10,184(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8212b324
	if (ctx.cr6.eq) goto loc_8212B324;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r3,r11,-29776
	ctx.r3.s64 = ctx.r11.s64 + -29776;
	// bl 0x8232f0e0
	ctx.lr = 0x8212B324;
	sub_8232F0E0(ctx, base);
loc_8212B324:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212B32C"))) PPC_WEAK_FUNC(sub_8212B32C);
PPC_FUNC_IMPL(__imp__sub_8212B32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212B330"))) PPC_WEAK_FUNC(sub_8212B330);
PPC_FUNC_IMPL(__imp__sub_8212B330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8212B338;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r10,r11,37004
	ctx.r10.u64 = ctx.r11.u64 | 37004;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212b390
	if (!ctx.cr6.gt) goto loc_8212B390;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,4864
	ctx.r30.s64 = ctx.r11.s64 + 4864;
loc_8212B364:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188300
	ctx.lr = 0x8212B374;
	sub_82188300(ctx, base);
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r8,r9,37004
	ctx.r8.u64 = ctx.r9.u64 | 37004;
	// addi r30,r30,1104
	ctx.r30.s64 = ctx.r30.s64 + 1104;
	// lwzx r11,r29,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212b364
	if (ctx.cr6.lt) goto loc_8212B364;
loc_8212B390:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212B398"))) PPC_WEAK_FUNC(sub_8212B398);
PPC_FUNC_IMPL(__imp__sub_8212B398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2992(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2992);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8212b3ac
	if (ctx.cr6.eq) goto loc_8212B3AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212B3AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212B3B4"))) PPC_WEAK_FUNC(sub_8212B3B4);
PPC_FUNC_IMPL(__imp__sub_8212B3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212B3B8"))) PPC_WEAK_FUNC(sub_8212B3B8);
PPC_FUNC_IMPL(__imp__sub_8212B3B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212B3C0"))) PPC_WEAK_FUNC(sub_8212B3C0);
PPC_FUNC_IMPL(__imp__sub_8212B3C0) {
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
	// lwz r11,15328(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 15328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212b3f4
	if (!ctx.cr6.eq) goto loc_8212B3F4;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r4,19168(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 19168);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r3,r11,-29776
	ctx.r3.s64 = ctx.r11.s64 + -29776;
	// bl 0x8232ef98
	ctx.lr = 0x8212B3F0;
	sub_8232EF98(ctx, base);
	// bl 0x8232da30
	ctx.lr = 0x8212B3F4;
	sub_8232DA30(ctx, base);
loc_8212B3F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212B404"))) PPC_WEAK_FUNC(sub_8212B404);
PPC_FUNC_IMPL(__imp__sub_8212B404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212B408"))) PPC_WEAK_FUNC(sub_8212B408);
PPC_FUNC_IMPL(__imp__sub_8212B408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r4,1104
	ctx.r10.s64 = ctx.r4.s64 * 1104;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8219ca80
	sub_8219CA80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212B41C"))) PPC_WEAK_FUNC(sub_8212B41C);
PPC_FUNC_IMPL(__imp__sub_8212B41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212B420"))) PPC_WEAK_FUNC(sub_8212B420);
PPC_FUNC_IMPL(__imp__sub_8212B420) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x821041a8
	ctx.lr = 0x8212B448;
	sub_821041A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212b540
	if (!ctx.cr6.eq) goto loc_8212B540;
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
	// bne cr6,0x8212b540
	if (!ctx.cr6.eq) goto loc_8212B540;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8212b504
	if (ctx.cr6.lt) goto loc_8212B504;
	// beq cr6,0x8212b4c0
	if (ctx.cr6.eq) goto loc_8212B4C0;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x8212b540
	if (!ctx.cr6.lt) goto loc_8212B540;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// mulli r3,r31,1104
	ctx.r3.s64 = ctx.r31.s64 * 1104;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,225
	ctx.r4.s64 = 225;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8219c750
	ctx.lr = 0x8212B4BC;
	sub_8219C750(ctx, base);
	// b 0x8212b540
	goto loc_8212B540;
loc_8212B4C0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r3,r31,1104
	ctx.r3.s64 = ctx.r31.s64 * 1104;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,224
	ctx.r4.s64 = 224;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8219c750
	ctx.lr = 0x8212B500;
	sub_8219C750(ctx, base);
	// b 0x8212b540
	goto loc_8212B540;
loc_8212B504:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// mulli r3,r31,1104
	ctx.r3.s64 = ctx.r31.s64 * 1104;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,223
	ctx.r4.s64 = 223;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8219c750
	ctx.lr = 0x8212B540;
	sub_8219C750(ctx, base);
loc_8212B540:
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

__attribute__((alias("__imp__sub_8212B558"))) PPC_WEAK_FUNC(sub_8212B558);
PPC_FUNC_IMPL(__imp__sub_8212B558) {
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
	// bl 0x82125d58
	ctx.lr = 0x8212B570;
	sub_82125D58(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r3,r11,-29776
	ctx.r3.s64 = ctx.r11.s64 + -29776;
	// bl 0x8232ef90
	ctx.lr = 0x8212B588;
	sub_8232EF90(ctx, base);
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

__attribute__((alias("__imp__sub_8212B59C"))) PPC_WEAK_FUNC(sub_8212B59C);
PPC_FUNC_IMPL(__imp__sub_8212B59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212B5A0"))) PPC_WEAK_FUNC(sub_8212B5A0);
PPC_FUNC_IMPL(__imp__sub_8212B5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8212B5A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,2996(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212b5f4
	if (!ctx.cr6.eq) goto loc_8212B5F4;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// addis r11,r30,33
	ctx.r11.s64 = ctx.r30.s64 + 2162688;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b76f8
	ctx.lr = 0x8212B5D0;
	sub_820B76F8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// stfs f1,3040(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3040, temp.u32);
	// addi r3,r11,-29776
	ctx.r3.s64 = ctx.r11.s64 + -29776;
	// stb r29,2996(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2996, ctx.r29.u8);
	// bl 0x823251a8
	ctx.lr = 0x8212B5E8;
	sub_823251A8(ctx, base);
	// stb r29,3032(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3032, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8212B5F4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,3032(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3032, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212B604"))) PPC_WEAK_FUNC(sub_8212B604);
PPC_FUNC_IMPL(__imp__sub_8212B604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212B608"))) PPC_WEAK_FUNC(sub_8212B608);
PPC_FUNC_IMPL(__imp__sub_8212B608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8212B610;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,15328(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15328);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8212b780
	if (ctx.cr6.eq) goto loc_8212B780;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lbz r10,15480(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 15480);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// extsb r30,r10
	ctx.r30.s64 = ctx.r10.s8;
	// mulli r29,r30,5956
	ctx.r29.s64 = ctx.r30.s64 * 5956;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r28,r11,10528
	ctx.r28.s64 = ctx.r11.s64 + 10528;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 16);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x820fa560
	ctx.lr = 0x8212B66C;
	sub_820FA560(ctx, base);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r10,28544
	ctx.r30.s64 = ctx.r10.s64 + 28544;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addis r10,r30,33
	ctx.r10.s64 = ctx.r30.s64 + 2162688;
	// addi r11,r11,-1264
	ctx.r11.s64 = ctx.r11.s64 + -1264;
	// sth r8,16(r28)
	PPC_STORE_U16(ctx.r28.u32 + 16, ctx.r8.u16);
	// addi r3,r10,6592
	ctx.r3.s64 = ctx.r10.s64 + 6592;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mulli r11,r10,328
	ctx.r11.s64 = ctx.r10.s64 * 328;
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,10588(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 10588, temp.u32);
	// bl 0x820b7630
	ctx.lr = 0x8212B6BC;
	sub_820B7630(ctx, base);
	// lwz r8,15328(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15328);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8212b764
	if (!ctx.cr6.eq) goto loc_8212B764;
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// lwz r26,19168(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19168);
	// addis r10,r30,35
	ctx.r10.s64 = ctx.r30.s64 + 2293760;
	// addi r6,r11,-29308
	ctx.r6.s64 = ctx.r11.s64 + -29308;
	// rlwinm r11,r26,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 9) & 0xFFFFFE00;
	// addi r7,r10,-29256
	ctx.r7.s64 = ctx.r10.s64 + -29256;
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8212b714
	if (ctx.cr6.lt) goto loc_8212B714;
	// beq cr6,0x8212b70c
	if (ctx.cr6.eq) goto loc_8212B70C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8212b704
	if (ctx.cr6.lt) goto loc_8212B704;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8212b718
	goto loc_8212B718;
loc_8212B704:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x8212b718
	goto loc_8212B718;
loc_8212B70C:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x8212b718
	goto loc_8212B718;
loc_8212B714:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8212B718:
	// stw r11,10652(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10652, ctx.r11.u32);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,16448
	ctx.r11.s64 = ctx.r11.s64 + 16448;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bgt cr6,0x8212b734
	if (ctx.cr6.gt) goto loc_8212B734;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8212B734:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212B74C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// mulli r9,r26,136
	ctx.r9.s64 = ctx.r26.s64 * 136;
	// addi r11,r11,8544
	ctx.r11.s64 = ctx.r11.s64 + 8544;
	// addi r8,r11,152
	ctx.r8.s64 = ctx.r11.s64 + 152;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r7,10628(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10628, ctx.r7.u32);
loc_8212B764:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82122010
	ctx.lr = 0x8212B774;
	sub_82122010(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820fa830
	ctx.lr = 0x8212B780;
	sub_820FA830(ctx, base);
loc_8212B780:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212B788"))) PPC_WEAK_FUNC(sub_8212B788);
PPC_FUNC_IMPL(__imp__sub_8212B788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,2996(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212b7c0
	if (ctx.cr6.eq) goto loc_8212B7C0;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,36224
	ctx.r9.u64 = ctx.r10.u64 | 36224;
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfd f13,-1600(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1600);
	// fsel f1,f0,f0,f13
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// blr 
	return;
loc_8212B7C0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,3000(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3000);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 2162688;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// b 0x820b76f8
	sub_820B76F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212B7E8"))) PPC_WEAK_FUNC(sub_8212B7E8);
PPC_FUNC_IMPL(__imp__sub_8212B7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addis r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 2162688;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b7630
	ctx.lr = 0x8212B81C;
	sub_820B7630(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x821f84e0
	ctx.lr = 0x8212B828;
	sub_821F84E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821f84e0
	ctx.lr = 0x8212B834;
	sub_821F84E0(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821f84e0
	ctx.lr = 0x8212B840;
	sub_821F84E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-31352
	ctx.r5.s64 = ctx.r11.s64 + -31352;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r11,-31376
	ctx.r4.s64 = ctx.r11.s64 + -31376;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82123960
	ctx.lr = 0x8212B86C;
	sub_82123960(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212B880"))) PPC_WEAK_FUNC(sub_8212B880);
PPC_FUNC_IMPL(__imp__sub_8212B880) {
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
	// beq cr6,0x8212b91c
	if (ctx.cr6.eq) goto loc_8212B91C;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8212B8AC:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212b90c
	if (ctx.cr6.eq) goto loc_8212B90C;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_8212B8C4:
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r5,r5,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8212b8fc
	if (!ctx.cr6.eq) goto loc_8212B8FC;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bne cr6,0x8212b8fc
	if (!ctx.cr6.eq) goto loc_8212B8FC;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x8212b8fc
	if (!ctx.cr6.eq) goto loc_8212B8FC;
	// ld r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// cmpld cr6,r4,r5
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r5.u64, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8212B8FC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8212b8c4
	if (ctx.cr6.lt) goto loc_8212B8C4;
loc_8212B90C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8212b8ac
	if (ctx.cr6.lt) goto loc_8212B8AC;
loc_8212B91C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212B924"))) PPC_WEAK_FUNC(sub_8212B924);
PPC_FUNC_IMPL(__imp__sub_8212B924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212B928"))) PPC_WEAK_FUNC(sub_8212B928);
PPC_FUNC_IMPL(__imp__sub_8212B928) {
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
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,14715
	ctx.r10.u64 = ctx.r11.u64 | 14715;
	// lbzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// addi r30,r10,26752
	ctx.r30.s64 = ctx.r10.s64 + 26752;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8212b9e8
	if (ctx.cr6.eq) goto loc_8212B9E8;
	// addis r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 458752;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r10,14537
	ctx.r9.s64 = ctx.r10.s64 + 14537;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8212b9a0
	if (ctx.cr6.eq) goto loc_8212B9A0;
	// addis r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 458752;
	// addi r6,r10,14520
	ctx.r6.s64 = ctx.r10.s64 + 14520;
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8212b9a4
	if (ctx.cr6.eq) goto loc_8212B9A4;
loc_8212B9A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212B9A4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212b9e8
	if (ctx.cr6.eq) goto loc_8212B9E8;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,37
	ctx.r9.s64 = 2424832;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r8,r9,49147
	ctx.r8.u64 = ctx.r9.u64 | 49147;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8212b9d4
	if (ctx.cr6.eq) goto loc_8212B9D4;
	// bl 0x82123e00
	ctx.lr = 0x8212B9D0;
	sub_82123E00(ctx, base);
	// b 0x8212ba74
	goto loc_8212BA74;
loc_8212B9D4:
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82361460
	ctx.lr = 0x8212B9E8;
	sub_82361460(ctx, base);
loc_8212B9E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821041a8
	ctx.lr = 0x8212B9F0;
	sub_821041A8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8212ba74
	if (ctx.cr6.eq) goto loc_8212BA74;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x8212BA08;
	sub_82104600(ctx, base);
	// extsb r4,r3
	ctx.r4.s64 = ctx.r3.s8;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8212ba74
	if (ctx.cr6.eq) goto loc_8212BA74;
	// addis r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 458752;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r5,r10,14537
	ctx.r5.s64 = ctx.r10.s64 + 14537;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212ba50
	if (ctx.cr6.eq) goto loc_8212BA50;
	// addis r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 458752;
	// addi r9,r10,14520
	ctx.r9.s64 = ctx.r10.s64 + 14520;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8212ba54
	if (ctx.cr6.eq) goto loc_8212BA54;
loc_8212BA50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212BA54:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8212ba74
	if (ctx.cr6.eq) goto loc_8212BA74;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82361460
	ctx.lr = 0x8212BA74;
	sub_82361460(ctx, base);
loc_8212BA74:
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

__attribute__((alias("__imp__sub_8212BA8C"))) PPC_WEAK_FUNC(sub_8212BA8C);
PPC_FUNC_IMPL(__imp__sub_8212BA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212BA90"))) PPC_WEAK_FUNC(sub_8212BA90);
PPC_FUNC_IMPL(__imp__sub_8212BA90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addis r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 2162688;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b7610
	ctx.lr = 0x8212BAC4;
	sub_820B7610(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821fe690
	ctx.lr = 0x8212BAD0;
	sub_821FE690(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821fe690
	ctx.lr = 0x8212BADC;
	sub_821FE690(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821fe690
	ctx.lr = 0x8212BAE8;
	sub_821FE690(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212bb48
	if (ctx.cr6.eq) goto loc_8212BB48;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x8212bb48
	if (!ctx.cr6.eq) goto loc_8212BB48;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// addis r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 196608;
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// bl 0x822d2c68
	ctx.lr = 0x8212BB24;
	sub_822D2C68(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-31228
	ctx.r5.s64 = ctx.r11.s64 + -31228;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259da78
	ctx.lr = 0x8212BB3C;
	sub_8259DA78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-31248
	ctx.r4.s64 = ctx.r11.s64 + -31248;
	// b 0x8212bb64
	goto loc_8212BB64;
loc_8212BB48:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-31268
	ctx.r5.s64 = ctx.r11.s64 + -31268;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259da78
	ctx.lr = 0x8212BB5C;
	sub_8259DA78(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-31288
	ctx.r4.s64 = ctx.r11.s64 + -31288;
loc_8212BB64:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82123960
	ctx.lr = 0x8212BB84;
	sub_82123960(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212BB98"))) PPC_WEAK_FUNC(sub_8212BB98);
PPC_FUNC_IMPL(__imp__sub_8212BB98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212BB9C"))) PPC_WEAK_FUNC(sub_8212BB9C);
PPC_FUNC_IMPL(__imp__sub_8212BB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212BBA0"))) PPC_WEAK_FUNC(sub_8212BBA0);
PPC_FUNC_IMPL(__imp__sub_8212BBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r8,r9,16252
	ctx.r8.u64 = ctx.r9.u64 | 16252;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r6,r7,16247
	ctx.r6.u64 = ctx.r7.u64 | 16247;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212BBCC"))) PPC_WEAK_FUNC(sub_8212BBCC);
PPC_FUNC_IMPL(__imp__sub_8212BBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212BBD0"))) PPC_WEAK_FUNC(sub_8212BBD0);
PPC_FUNC_IMPL(__imp__sub_8212BBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r10,r11,28544
	ctx.r10.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r9,r11,50548
	ctx.r9.u64 = ctx.r11.u64 | 50548;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x8212bbf4
	if (!ctx.cr6.lt) goto loc_8212BBF4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212BBF4:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8212bc10
	if (ctx.cr6.eq) goto loc_8212BC10;
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// ori r5,r6,50680
	ctx.r5.u64 = ctx.r6.u64 | 50680;
	// lfsx f1,r10,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8212BC10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212BC1C"))) PPC_WEAK_FUNC(sub_8212BC1C);
PPC_FUNC_IMPL(__imp__sub_8212BC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212BC20"))) PPC_WEAK_FUNC(sub_8212BC20);
PPC_FUNC_IMPL(__imp__sub_8212BC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8212BC28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r9,r10,37004
	ctx.r9.u64 = ctx.r10.u64 | 37004;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8212bc90
	if (!ctx.cr6.gt) goto loc_8212BC90;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// addi r31,r11,-28496
	ctx.r31.s64 = ctx.r11.s64 + -28496;
loc_8212BC58:
	// lwz r8,13496(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13496);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8212bc80
	if (!ctx.cr6.eq) goto loc_8212BC80;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,184(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 184);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8212BC80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212BC80:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,19200
	ctx.r31.s64 = ctx.r31.s64 + 19200;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8212bc58
	if (!ctx.cr6.eq) goto loc_8212BC58;
loc_8212BC90:
	// bl 0x8232da30
	ctx.lr = 0x8212BC94;
	sub_8232DA30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212BC9C"))) PPC_WEAK_FUNC(sub_8212BC9C);
PPC_FUNC_IMPL(__imp__sub_8212BC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212BCA0"))) PPC_WEAK_FUNC(sub_8212BCA0);
PPC_FUNC_IMPL(__imp__sub_8212BCA0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3016(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3016);
	// li r3,2
	ctx.r3.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212BCB8"))) PPC_WEAK_FUNC(sub_8212BCB8);
PPC_FUNC_IMPL(__imp__sub_8212BCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8212BCC0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lbz r10,15480(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 15480);
	// lwz r7,15328(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15328);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// beq cr6,0x8212be70
	if (ctx.cr6.eq) goto loc_8212BE70;
	// mulli r9,r11,5956
	ctx.r9.s64 = ctx.r11.s64 * 5956;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + ctx.r28.u64;
	// addi r29,r10,10528
	ctx.r29.s64 = ctx.r10.s64 + 10528;
	// lhz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8212be70
	if (ctx.cr6.eq) goto loc_8212BE70;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r10,-1264
	ctx.r31.s64 = ctx.r10.s64 + -1264;
	// mulli r10,r8,328
	ctx.r10.s64 = ctx.r8.s64 * 328;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r9,r30,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r4,r11,748
	ctx.r4.s64 = ctx.r11.s64 + 748;
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + ctx.r28.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,10580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10580, ctx.r8.u32);
	// lwzx r7,r30,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,10584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10584, ctx.r6.u32);
	// lwzx r5,r30,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lbz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 20);
	// stb r4,10596(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10596, ctx.r4.u8);
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// stw r10,10616(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10616, ctx.r10.u32);
	// lhz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x820fa560
	ctx.lr = 0x8212BD80;
	sub_820FA560(ctx, base);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// sth r8,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r8.u16);
	// lwz r6,15328(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15328);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8212bda8
	if (!ctx.cr6.eq) goto loc_8212BDA8;
	// lwz r5,19168(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19168);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// mulli r4,r5,200
	ctx.r4.s64 = ctx.r5.s64 * 200;
	// lfsx f31,r4,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8212bdb0
	goto loc_8212BDB0;
loc_8212BDA8:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
loc_8212BDB0:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addis r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 2162688;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b7610
	ctx.lr = 0x8212BDD0;
	sub_820B7610(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x8212bde8
	if (ctx.cr6.gt) goto loc_8212BDE8;
	// bso cr6,0x8212bde8
	if (ctx.cr6.so) goto loc_8212BDE8;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x8212be18
	goto loc_8212BE18;
loc_8212BDE8:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bgt cr6,0x8212be00
	if (ctx.cr6.gt) goto loc_8212BE00;
	// bso cr6,0x8212be00
	if (ctx.cr6.so) goto loc_8212BE00;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x8212be18
	goto loc_8212BE18;
loc_8212BE00:
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// bgt cr6,0x8212be14
	if (ctx.cr6.gt) goto loc_8212BE14;
	// li r5,1
	ctx.r5.s64 = 1;
	// bns cr6,0x8212be18
	if (!ctx.cr6.so) goto loc_8212BE18;
loc_8212BE14:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8212BE18:
	// lwz r10,15328(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15328);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8212be54
	if (!ctx.cr6.eq) goto loc_8212BE54;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,16448
	ctx.r11.s64 = ctx.r11.s64 + 16448;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bgt cr6,0x8212be3c
	if (ctx.cr6.gt) goto loc_8212BE3C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8212BE3C:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,500(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 500);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8212BE54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212BE54:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82122010
	ctx.lr = 0x8212BE64;
	sub_82122010(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x820fa830
	ctx.lr = 0x8212BE70;
	sub_820FA830(ctx, base);
loc_8212BE70:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212BE7C"))) PPC_WEAK_FUNC(sub_8212BE7C);
PPC_FUNC_IMPL(__imp__sub_8212BE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212BE80"))) PPC_WEAK_FUNC(sub_8212BE80);
PPC_FUNC_IMPL(__imp__sub_8212BE80) {
	PPC_FUNC_PROLOGUE();
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
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
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
	// beq cr6,0x8212bedc
	if (ctx.cr6.eq) goto loc_8212BEDC;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// addi r5,r11,14520
	ctx.r5.s64 = ctx.r11.s64 + 14520;
	// lwzx r11,r10,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8212bee0
	if (ctx.cr6.eq) goto loc_8212BEE0;
loc_8212BEDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212BEE0:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r7,r8,49147
	ctx.r7.u64 = ctx.r8.u64 | 49147;
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8212bf0c
	if (ctx.cr6.eq) goto loc_8212BF0C;
	// b 0x82123e00
	sub_82123E00(ctx, base);
	return;
loc_8212BF0C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// li r6,5
	ctx.r6.s64 = 5;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// b 0x82361460
	sub_82361460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212BF28"))) PPC_WEAK_FUNC(sub_8212BF28);
PPC_FUNC_IMPL(__imp__sub_8212BF28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212BF2C"))) PPC_WEAK_FUNC(sub_8212BF2C);
PPC_FUNC_IMPL(__imp__sub_8212BF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212BF30"))) PPC_WEAK_FUNC(sub_8212BF30);
PPC_FUNC_IMPL(__imp__sub_8212BF30) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32560
	ctx.r11.s64 = ctx.r11.s64 + -32560;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r6,r7,16252
	ctx.r6.u64 = ctx.r7.u64 | 16252;
	// stb r10,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r10.u8);
	// ori r4,r5,16271
	ctx.r4.u64 = ctx.r5.u64 | 16271;
	// stb r10,153(r3)
	PPC_STORE_U8(ctx.r3.u32 + 153, ctx.r10.u8);
	// stw r10,2384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2384, ctx.r10.u32);
	// lwz r11,7328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7328);
	// stw r11,2416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2416, ctx.r11.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r3,r3,2388
	ctx.r3.s64 = ctx.r3.s64 + 2388;
	// addi r9,r11,-18560
	ctx.r9.s64 = ctx.r11.s64 + -18560;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r8,r11,57728
	ctx.r8.u64 = ctx.r11.u64 | 57728;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// stwx r3,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r3.u32);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// ori r7,r8,16273
	ctx.r7.u64 = ctx.r8.u64 | 16273;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// stbx r10,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// ori r5,r6,16274
	ctx.r5.u64 = ctx.r6.u64 | 16274;
	// ori r8,r4,16272
	ctx.r8.u64 = ctx.r4.u64 | 16272;
	// stbx r10,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r6,r7,16275
	ctx.r6.u64 = ctx.r7.u64 | 16275;
	// stbx r10,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// stbx r10,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// beq cr6,0x8212bfe8
	if (ctx.cr6.eq) goto loc_8212BFE8;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r4,9308
	ctx.r11.u64 = ctx.r4.u64 | 9308;
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212BFE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212BFE8:
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

__attribute__((alias("__imp__sub_8212BFFC"))) PPC_WEAK_FUNC(sub_8212BFFC);
PPC_FUNC_IMPL(__imp__sub_8212BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212C000"))) PPC_WEAK_FUNC(sub_8212C000);
PPC_FUNC_IMPL(__imp__sub_8212C000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mulli r10,r4,19200
	ctx.r10.s64 = ctx.r4.s64 * 19200;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r9,r11,-15000
	ctx.r9.s64 = ctx.r11.s64 + -15000;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bne cr6,0x8212c024
	if (!ctx.cr6.eq) goto loc_8212C024;
	// b 0x82122aa8
	sub_82122AA8(ctx, base);
	return;
loc_8212C024:
	// b 0x82122c18
	sub_82122C18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212C028"))) PPC_WEAK_FUNC(sub_8212C028);
PPC_FUNC_IMPL(__imp__sub_8212C028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r5,r11,-31176
	ctx.r5.s64 = ctx.r11.s64 + -31176;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r11,-31196
	ctx.r4.s64 = ctx.r11.s64 + -31196;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82123960
	sub_82123960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212C050"))) PPC_WEAK_FUNC(sub_8212C050);
PPC_FUNC_IMPL(__imp__sub_8212C050) {
	PPC_FUNC_PROLOGUE();
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16252
	ctx.r8.u64 = ctx.r9.u64 | 16252;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r6,r7,16247
	ctx.r6.u64 = ctx.r7.u64 | 16247;
	// ori r4,r5,16272
	ctx.r4.u64 = ctx.r5.u64 | 16272;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// ori r9,r3,57728
	ctx.r9.u64 = ctx.r3.u64 | 57728;
	// stbx r10,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// stbx r10,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212C09C"))) PPC_WEAK_FUNC(sub_8212C09C);
PPC_FUNC_IMPL(__imp__sub_8212C09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212C0A0"))) PPC_WEAK_FUNC(sub_8212C0A0);
PPC_FUNC_IMPL(__imp__sub_8212C0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,3036(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3036, ctx.r10.u8);
	// stfs f0,3024(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3024, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212C0BC"))) PPC_WEAK_FUNC(sub_8212C0BC);
PPC_FUNC_IMPL(__imp__sub_8212C0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212C0C0"))) PPC_WEAK_FUNC(sub_8212C0C0);
PPC_FUNC_IMPL(__imp__sub_8212C0C0) {
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
	// lwz r11,15328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212c0e4
	if (!ctx.cr6.eq) goto loc_8212C0E4;
	// bl 0x8232da30
	ctx.lr = 0x8212C0E4;
	sub_8232DA30(ctx, base);
loc_8212C0E4:
	// lwz r10,15328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15328);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8212c0f4
	if (!ctx.cr6.eq) goto loc_8212C0F4;
	// bl 0x8232da30
	ctx.lr = 0x8212C0F4;
	sub_8232DA30(ctx, base);
loc_8212C0F4:
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

__attribute__((alias("__imp__sub_8212C108"))) PPC_WEAK_FUNC(sub_8212C108);
PPC_FUNC_IMPL(__imp__sub_8212C108) {
	PPC_FUNC_PROLOGUE();
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212C110"))) PPC_WEAK_FUNC(sub_8212C110);
PPC_FUNC_IMPL(__imp__sub_8212C110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8212C118;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lbz r10,15480(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 15480);
	// lwz r7,15328(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15328);
	// extsb r29,r10
	ctx.r29.s64 = ctx.r10.s8;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x8212c238
	if (ctx.cr6.eq) goto loc_8212C238;
	// mulli r28,r29,5956
	ctx.r28.s64 = ctx.r29.s64 * 5956;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r30,r11,10528
	ctx.r30.s64 = ctx.r11.s64 + 10528;
	// lhz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8212c238
	if (ctx.cr6.eq) goto loc_8212C238;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fa560
	ctx.lr = 0x8212C180;
	sub_820FA560(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1264
	ctx.r11.s64 = ctx.r11.s64 + -1264;
	// sth r4,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r4.u16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mulli r9,r9,328
	ctx.r9.s64 = ctx.r9.s64 * 328;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r7,10584(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10584, ctx.r7.u32);
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 20);
	// stb r5,10596(r9)
	PPC_STORE_U8(ctx.r9.u32 + 10596, ctx.r5.u8);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbz r3,21(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// stb r3,10597(r9)
	PPC_STORE_U8(ctx.r9.u32 + 10597, ctx.r3.u8);
	// lwz r9,15328(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15328);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8212c21c
	if (!ctx.cr6.eq) goto loc_8212C21C;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subfic r5,r7,4
	ctx.xer.ca = ctx.r7.u32 <= 4;
	ctx.r5.s64 = 4 - ctx.r7.s64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x8212c1ec
	if (!ctx.cr6.lt) goto loc_8212C1EC;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8212C1EC:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,16448
	ctx.r11.s64 = ctx.r11.s64 + 16448;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bgt cr6,0x8212c204
	if (ctx.cr6.gt) goto loc_8212C204;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8212C204:
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,500(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 500);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212C21C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212C21C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82122010
	ctx.lr = 0x8212C22C;
	sub_82122010(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820fa830
	ctx.lr = 0x8212C238;
	sub_820FA830(ctx, base);
loc_8212C238:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212C240"))) PPC_WEAK_FUNC(sub_8212C240);
PPC_FUNC_IMPL(__imp__sub_8212C240) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,15328(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 15328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212c254
	if (!ctx.cr6.eq) goto loc_8212C254;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,3037(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3037, ctx.r10.u8);
loc_8212C254:
	// b 0x82121b88
	sub_82121B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212C258"))) PPC_WEAK_FUNC(sub_8212C258);
PPC_FUNC_IMPL(__imp__sub_8212C258) {
	PPC_FUNC_PROLOGUE();
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
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
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
	// beq cr6,0x8212c2b4
	if (ctx.cr6.eq) goto loc_8212C2B4;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// addi r5,r11,14520
	ctx.r5.s64 = ctx.r11.s64 + 14520;
	// lwzx r11,r10,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8212c2b8
	if (ctx.cr6.eq) goto loc_8212C2B8;
loc_8212C2B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212C2B8:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r7,r8,49147
	ctx.r7.u64 = ctx.r8.u64 | 49147;
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8212c2e4
	if (ctx.cr6.eq) goto loc_8212C2E4;
	// b 0x82123e00
	sub_82123E00(ctx, base);
	return;
loc_8212C2E4:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// li r6,3
	ctx.r6.s64 = 3;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// b 0x82361460
	sub_82361460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212C300"))) PPC_WEAK_FUNC(sub_8212C300);
PPC_FUNC_IMPL(__imp__sub_8212C300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212C304"))) PPC_WEAK_FUNC(sub_8212C304);
PPC_FUNC_IMPL(__imp__sub_8212C304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212C308"))) PPC_WEAK_FUNC(sub_8212C308);
PPC_FUNC_IMPL(__imp__sub_8212C308) {
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
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16274
	ctx.r9.u64 = ctx.r10.u64 | 16274;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r7,r8,57728
	ctx.r7.u64 = ctx.r8.u64 | 57728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r11,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u8);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// bl 0x821041a8
	ctx.lr = 0x8212C350;
	sub_821041A8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8212c368
	if (ctx.cr6.eq) goto loc_8212C368;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,24760
	ctx.r3.s64 = ctx.r11.s64 + 24760;
	// bl 0x8210e8e0
	ctx.lr = 0x8212C368;
	sub_8210E8E0(ctx, base);
loc_8212C368:
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

__attribute__((alias("__imp__sub_8212C37C"))) PPC_WEAK_FUNC(sub_8212C37C);
PPC_FUNC_IMPL(__imp__sub_8212C37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212C380"))) PPC_WEAK_FUNC(sub_8212C380);
PPC_FUNC_IMPL(__imp__sub_8212C380) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212C3AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8212c3d0
	if (!ctx.cr6.eq) goto loc_8212C3D0;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r30,1104
	ctx.r10.s64 = ctx.r30.s64 * 1104;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8219d6e0
	ctx.lr = 0x8212C3D0;
	sub_8219D6E0(ctx, base);
loc_8212C3D0:
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

__attribute__((alias("__imp__sub_8212C3E8"))) PPC_WEAK_FUNC(sub_8212C3E8);
PPC_FUNC_IMPL(__imp__sub_8212C3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8212C3F0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82121e70
	ctx.lr = 0x8212C400;
	sub_82121E70(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// ori r10,r11,36968
	ctx.r10.u64 = ctx.r11.u64 | 36968;
	// li r24,1
	ctx.r24.s64 = 1;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212c4a4
	if (!ctx.cr6.gt) goto loc_8212C4A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r25,3024
	ctx.r28.s64 = ctx.r25.s64 + 3024;
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
loc_8212C438:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232da90
	ctx.lr = 0x8212C444;
	sub_8232DA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,15328(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15328);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8212c458
	if (!ctx.cr6.eq) goto loc_8212C458;
	// stw r24,14780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14780, ctx.r24.u32);
loc_8212C458:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2868(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,14776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 14776, temp.u32);
	// bl 0x820bda30
	ctx.lr = 0x8212C468;
	sub_820BDA30(ctx, base);
	// lwz r8,15328(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15328);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8212c484
	if (!ctx.cr6.eq) goto loc_8212C484;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bd6d0
	ctx.lr = 0x8212C480;
	sub_820BD6D0(ctx, base);
	// stw r26,14780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14780, ctx.r26.u32);
loc_8212C484:
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// stfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r6,r7,36968
	ctx.r6.u64 = ctx.r7.u64 | 36968;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212c438
	if (ctx.cr6.lt) goto loc_8212C438;
loc_8212C4A4:
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,412(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 412);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8212C4B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8212c564
	if (!ctx.cr6.eq) goto loc_8212C564;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r31,r11,-16688
	ctx.r31.s64 = ctx.r11.s64 + -16688;
	// addis r11,r30,33
	ctx.r11.s64 = ctx.r30.s64 + 2162688;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b7630
	ctx.lr = 0x8212C4E0;
	sub_820B7630(ctx, base);
	// lis r3,34
	ctx.r3.s64 = 2228224;
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// ori r11,r3,37004
	ctx.r11.u64 = ctx.r3.u64 | 37004;
	// addi r8,r9,-1264
	ctx.r8.s64 = ctx.r9.s64 + -1264;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8212c518
	if (!ctx.cr6.gt) goto loc_8212C518;
	// addi r9,r8,196
	ctx.r9.s64 = ctx.r8.s64 + 196;
loc_8212C504:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// addi r9,r9,200
	ctx.r9.s64 = ctx.r9.s64 + 200;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8212c504
	if (ctx.cr6.lt) goto loc_8212C504;
loc_8212C518:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8212c564
	if (!ctx.cr6.gt) goto loc_8212C564;
	// addi r11,r25,3072
	ctx.r11.s64 = ctx.r25.s64 + 3072;
	// addi r10,r8,196
	ctx.r10.s64 = ctx.r8.s64 + 196;
loc_8212C52C:
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// ori r5,r6,37004
	ctx.r5.u64 = ctx.r6.u64 | 37004;
	// addi r10,r10,200
	ctx.r10.s64 = ctx.r10.s64 + 200;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lwzx r8,r30,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8212c52c
	if (ctx.cr6.lt) goto loc_8212C52C;
loc_8212C564:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041a8
	ctx.lr = 0x8212C570;
	sub_821041A8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212c580
	if (ctx.cr6.eq) goto loc_8212C580;
	// stb r24,164(r25)
	PPC_STORE_U8(ctx.r25.u32 + 164, ctx.r24.u8);
loc_8212C580:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212C58C"))) PPC_WEAK_FUNC(sub_8212C58C);
PPC_FUNC_IMPL(__imp__sub_8212C58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212C590"))) PPC_WEAK_FUNC(sub_8212C590);
PPC_FUNC_IMPL(__imp__sub_8212C590) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212C598"))) PPC_WEAK_FUNC(sub_8212C598);
PPC_FUNC_IMPL(__imp__sub_8212C598) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212C5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8212c5e8
	if (!ctx.cr6.eq) goto loc_8212C5E8;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// stb r9,3090(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3090, ctx.r9.u8);
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,31532(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31532);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,3056(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3056, temp.u32);
loc_8212C5E8:
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

__attribute__((alias("__imp__sub_8212C5FC"))) PPC_WEAK_FUNC(sub_8212C5FC);
PPC_FUNC_IMPL(__imp__sub_8212C5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212C600"))) PPC_WEAK_FUNC(sub_8212C600);
PPC_FUNC_IMPL(__imp__sub_8212C600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,3090(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3090);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212c624
	if (ctx.cr6.eq) goto loc_8212C624;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f13,3056(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// blr 
	return;
loc_8212C624:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,31532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31532);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212C630"))) PPC_WEAK_FUNC(sub_8212C630);
PPC_FUNC_IMPL(__imp__sub_8212C630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8212C638;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,15328(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15328);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8212c7a4
	if (ctx.cr6.eq) goto loc_8212C7A4;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lbz r10,15480(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 15480);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// extsb r29,r10
	ctx.r29.s64 = ctx.r10.s8;
	// mulli r27,r29,5956
	ctx.r27.s64 = ctx.r29.s64 * 5956;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// addi r28,r11,10528
	ctx.r28.s64 = ctx.r11.s64 + 10528;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 16);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x820fa560
	ctx.lr = 0x8212C694;
	sub_820FA560(ctx, base);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// addi r30,r11,-1264
	ctx.r30.s64 = ctx.r11.s64 + -1264;
	// addis r10,r10,33
	ctx.r10.s64 = ctx.r10.s64 + 2162688;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r10,6592
	ctx.r3.s64 = ctx.r10.s64 + 6592;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// sth r10,16(r28)
	PPC_STORE_U16(ctx.r28.u32 + 16, ctx.r10.u16);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r7,r11,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mulli r10,r8,328
	ctx.r10.s64 = ctx.r8.s64 * 328;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r9,10584(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10584, ctx.r9.u32);
	// lwzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lbz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 20);
	// stb r7,10596(r29)
	PPC_STORE_U8(ctx.r29.u32 + 10596, ctx.r7.u8);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// stb r10,10597(r29)
	PPC_STORE_U8(ctx.r29.u32 + 10597, ctx.r10.u8);
	// bl 0x820b7630
	ctx.lr = 0x8212C6FC;
	sub_820B7630(ctx, base);
	// lwz r9,15328(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 15328);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8212c788
	if (!ctx.cr6.eq) goto loc_8212C788;
	// lwz r8,19168(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19168);
	// addi r6,r30,156
	ctx.r6.s64 = ctx.r30.s64 + 156;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r7,r8,200
	ctx.r7.s64 = ctx.r8.s64 * 200;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8212c72c
	if (ctx.cr6.lt) goto loc_8212C72C;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x8212c754
	goto loc_8212C754;
loc_8212C72C:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8212c740
	if (ctx.cr6.lt) goto loc_8212C740;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x8212c754
	goto loc_8212C754;
loc_8212C740:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8212c754
	if (!ctx.cr6.lt) goto loc_8212C754;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8212C754:
	// stw r11,10644(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10644, ctx.r11.u32);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,16448
	ctx.r11.s64 = ctx.r11.s64 + 16448;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bgt cr6,0x8212c770
	if (ctx.cr6.gt) goto loc_8212C770;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8212C770:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212C788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212C788:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82122010
	ctx.lr = 0x8212C798;
	sub_82122010(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820fa830
	ctx.lr = 0x8212C7A4;
	sub_820FA830(ctx, base);
loc_8212C7A4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212C7AC"))) PPC_WEAK_FUNC(sub_8212C7AC);
PPC_FUNC_IMPL(__imp__sub_8212C7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212C7B0"))) PPC_WEAK_FUNC(sub_8212C7B0);
PPC_FUNC_IMPL(__imp__sub_8212C7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad4
	ctx.lr = 0x8212C7B8;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r25,13696
	ctx.r11.s64 = ctx.r25.s64 + 13696;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// lbz r10,15480(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 15480);
	// extsb r30,r10
	ctx.r30.s64 = ctx.r10.s8;
	// lwz r10,1084(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8212c7f0
	if (ctx.cr6.eq) goto loc_8212C7F0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8212c7f0
	if (!ctx.cr6.gt) goto loc_8212C7F0;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r9,1084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1084, ctx.r9.u32);
loc_8212C7F0:
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lfs f13,1080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2868(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1080(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1080, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8212c818
	if (!ctx.cr6.lt) goto loc_8212C818;
	// stfs f13,1080(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1080, temp.u32);
loc_8212C818:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820bda30
	ctx.lr = 0x8212C820;
	sub_820BDA30(ctx, base);
	// lwz r8,14780(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14780);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8212c844
	if (!ctx.cr6.eq) goto loc_8212C844;
	// lfs f0,2868(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,14776(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 14776, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
loc_8212C844:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041a8
	ctx.lr = 0x8212C850;
	sub_821041A8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8212ca40
	if (!ctx.cr6.eq) goto loc_8212CA40;
	// lwz r11,15328(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 15328);
	// li r20,1
	ctx.r20.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r24,r11,28544
	ctx.r24.s64 = ctx.r11.s64 + 28544;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r31,r11,-1264
	ctx.r31.s64 = ctx.r11.s64 + -1264;
	// bne cr6,0x8212c8f4
	if (!ctx.cr6.eq) goto loc_8212C8F4;
	// lbz r10,3088(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 3088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212ca40
	if (ctx.cr6.eq) goto loc_8212CA40;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8212c8e4
	if (!ctx.cr6.eq) goto loc_8212C8E4;
	// lwz r6,19168(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19168);
	// addi r4,r31,212
	ctx.r4.s64 = ctx.r31.s64 + 212;
	// mulli r5,r6,200
	ctx.r5.s64 = ctx.r6.s64 * 200;
	// lwzx r3,r5,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x8212c8d0
	if (!ctx.cr6.eq) goto loc_8212C8D0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8212c8e0
	goto loc_8212C8E0;
loc_8212C8D0:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r8,184(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8212C8E0:
	// bctrl 
	ctx.lr = 0x8212C8E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212C8E4:
	// lis r7,4
	ctx.r7.s64 = 262144;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// ori r6,r7,15495
	ctx.r6.u64 = ctx.r7.u64 | 15495;
	// stbx r11,r24,r6
	PPC_STORE_U8(ctx.r24.u32 + ctx.r6.u32, ctx.r11.u8);
loc_8212C8F4:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8212ca40
	if (ctx.cr6.eq) goto loc_8212CA40;
	// lwz r5,15328(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 15328);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8212ca40
	if (!ctx.cr6.eq) goto loc_8212CA40;
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// li r21,0
	ctx.r21.s64 = 0;
	// ori r3,r4,37004
	ctx.r3.u64 = ctx.r4.u64 | 37004;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// lwzx r11,r24,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212ca40
	if (!ctx.cr6.gt) goto loc_8212CA40;
	// addis r11,r24,35
	ctx.r11.s64 = ctx.r24.s64 + 2293760;
	// addi r31,r31,196
	ctx.r31.s64 = ctx.r31.s64 + 196;
	// addi r27,r11,-28496
	ctx.r27.s64 = ctx.r11.s64 + -28496;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r30,r28,3080
	ctx.r30.s64 = ctx.r28.s64 + 3080;
	// addi r26,r11,9008
	ctx.r26.s64 = ctx.r11.s64 + 9008;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r22,3
	ctx.r22.s64 = 3;
loc_8212C944:
	// lwz r11,14780(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14780);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8212ca1c
	if (!ctx.cr6.eq) goto loc_8212CA1C;
	// cmplw cr6,r19,r27
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8212ca1c
	if (!ctx.cr6.eq) goto loc_8212CA1C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8212ca88
	if (ctx.cr6.lt) goto loc_8212CA88;
	// beq cr6,0x8212ca74
	if (ctx.cr6.eq) goto loc_8212CA74;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8212ca48
	if (ctx.cr6.lt) goto loc_8212CA48;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8212ca9c
	if (!ctx.cr6.eq) goto loc_8212CA9C;
	// stw r21,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r21.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8212C990:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8212c9a4
	if (ctx.cr6.eq) goto loc_8212C9A4;
	// lwz r9,-40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r8,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r8.u32);
loc_8212C9A4:
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r11,15480(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 15480);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r9,r3,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,380(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 380);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212C9E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,-32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8212ca1c
	if (ctx.cr6.eq) goto loc_8212CA1C;
	// stw r4,-32(r30)
	PPC_STORE_U32(ctx.r30.u32 + -32, ctx.r4.u32);
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x8212ca1c
	if (ctx.cr6.eq) goto loc_8212CA1C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212CA1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212CA1C:
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r8,r9,37004
	ctx.r8.u64 = ctx.r9.u64 | 37004;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r27,r27,19200
	ctx.r27.s64 = ctx.r27.s64 + 19200;
	// addi r31,r31,200
	ctx.r31.s64 = ctx.r31.s64 + 200;
	// lwzx r11,r24,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r8.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212c944
	if (ctx.cr6.lt) goto loc_8212C944;
loc_8212CA40:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
loc_8212CA48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,-84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x8212ca68
	if (ctx.cr6.lt) goto loc_8212CA68;
	// li r11,7
	ctx.r11.s64 = 7;
loc_8212CA68:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8212CA6C:
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// b 0x8212c9a4
	goto loc_8212C9A4;
loc_8212CA74:
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8212c990
	goto loc_8212C990;
loc_8212CA88:
	// stw r20,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r20.u32);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8212c990
	goto loc_8212C990;
loc_8212CA9C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212cab4
	if (!ctx.cr6.eq) goto loc_8212CAB4;
	// stw r20,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r20.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8212c990
	goto loc_8212C990;
loc_8212CAB4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8212ca6c
	if (!ctx.cr6.eq) goto loc_8212CA6C;
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8212c990
	goto loc_8212C990;
}

__attribute__((alias("__imp__sub_8212CACC"))) PPC_WEAK_FUNC(sub_8212CACC);
PPC_FUNC_IMPL(__imp__sub_8212CACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212CAD0"))) PPC_WEAK_FUNC(sub_8212CAD0);
PPC_FUNC_IMPL(__imp__sub_8212CAD0) {
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
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// bgt cr6,0x8212cb84
	if (ctx.cr6.gt) goto loc_8212CB84;
	// lis r12,-32237
	ctx.r12.s64 = -2112684032;
	// addi r12,r12,-13564
	ctx.r12.s64 = ctx.r12.s64 + -13564;
	// rlwinm r0,r31,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r31.u64) {
	case 0:
		goto loc_8212CB28;
	case 1:
		goto loc_8212CB28;
	case 2:
		goto loc_8212CB28;
	case 3:
		goto loc_8212CB28;
	case 4:
		goto loc_8212CB4C;
	case 5:
		goto loc_8212CB4C;
	case 6:
		goto loc_8212CB4C;
	case 7:
		goto loc_8212CB28;
	case 8:
		goto loc_8212CB28;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-13528(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -13528);
	// lwz r16,-13528(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -13528);
	// lwz r16,-13528(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -13528);
	// lwz r16,-13528(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -13528);
	// lwz r16,-13492(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -13492);
	// lwz r16,-13492(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -13492);
	// lwz r16,-13492(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -13492);
	// lwz r16,-13528(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -13528);
	// lwz r16,-13528(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -13528);
loc_8212CB28:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-16676
	ctx.r11.s64 = ctx.r11.s64 + -16676;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
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
loc_8212CB4C:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x8212CB5C;
	sub_8210B3C8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-16676
	ctx.r11.s64 = ctx.r11.s64 + -16676;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
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
loc_8212CB84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_8212CBA0"))) PPC_WEAK_FUNC(sub_8212CBA0);
PPC_FUNC_IMPL(__imp__sub_8212CBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addis r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 2162688;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b7630
	ctx.lr = 0x8212CBD4;
	sub_820B7630(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82362190
	ctx.lr = 0x8212CBE8;
	sub_82362190(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82362190
	ctx.lr = 0x8212CBFC;
	sub_82362190(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82362190
	ctx.lr = 0x8212CC10;
	sub_82362190(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-31136
	ctx.r5.s64 = ctx.r11.s64 + -31136;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r11,-31156
	ctx.r4.s64 = ctx.r11.s64 + -31156;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82123960
	ctx.lr = 0x8212CC3C;
	sub_82123960(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212CC50"))) PPC_WEAK_FUNC(sub_8212CC50);
PPC_FUNC_IMPL(__imp__sub_8212CC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8212CC58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,14715
	ctx.r10.u64 = ctx.r11.u64 | 14715;
	// lbzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// addi r29,r10,26752
	ctx.r29.s64 = ctx.r10.s64 + 26752;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8212cd00
	if (ctx.cr6.eq) goto loc_8212CD00;
	// addis r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 458752;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r9,r10,14537
	ctx.r9.s64 = ctx.r10.s64 + 14537;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8212ccc4
	if (ctx.cr6.eq) goto loc_8212CCC4;
	// addis r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 458752;
	// addi r6,r10,14520
	ctx.r6.s64 = ctx.r10.s64 + 14520;
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8212ccc8
	if (ctx.cr6.eq) goto loc_8212CCC8;
loc_8212CCC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212CCC8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212cd00
	if (ctx.cr6.eq) goto loc_8212CD00;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r6,2400(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2400);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x82361460
	ctx.lr = 0x8212CCE8;
	sub_82361460(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x82361460
	ctx.lr = 0x8212CD00;
	sub_82361460(ctx, base);
loc_8212CD00:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x8212CD0C;
	sub_82104600(ctx, base);
	// extsb r30,r3
	ctx.r30.s64 = ctx.r3.s8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8212cd90
	if (ctx.cr6.eq) goto loc_8212CD90;
	// addis r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 458752;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r9,r10,14537
	ctx.r9.s64 = ctx.r10.s64 + 14537;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8212cd54
	if (ctx.cr6.eq) goto loc_8212CD54;
	// addis r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 458752;
	// addi r6,r10,14520
	ctx.r6.s64 = ctx.r10.s64 + 14520;
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8212cd58
	if (ctx.cr6.eq) goto loc_8212CD58;
loc_8212CD54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212CD58:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212cd90
	if (ctx.cr6.eq) goto loc_8212CD90;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r6,2400(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2400);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x82361460
	ctx.lr = 0x8212CD78;
	sub_82361460(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x82361460
	ctx.lr = 0x8212CD90;
	sub_82361460(ctx, base);
loc_8212CD90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212CD98"))) PPC_WEAK_FUNC(sub_8212CD98);
PPC_FUNC_IMPL(__imp__sub_8212CD98) {
	PPC_FUNC_PROLOGUE();
	// b 0x821255e0
	sub_821255E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212CD9C"))) PPC_WEAK_FUNC(sub_8212CD9C);
PPC_FUNC_IMPL(__imp__sub_8212CD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212CDA0"))) PPC_WEAK_FUNC(sub_8212CDA0);
PPC_FUNC_IMPL(__imp__sub_8212CDA0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82121a58
	ctx.lr = 0x8212CDC4;
	sub_82121A58(ctx, base);
	// lbz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 624);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8212ce68
	if (!ctx.cr6.eq) goto loc_8212CE68;
	// lwz r31,6912(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// lbz r10,15225(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15225);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212ce68
	if (!ctx.cr6.eq) goto loc_8212CE68;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8212cdf4
	if (ctx.cr6.eq) goto loc_8212CDF4;
	// lbz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212ce68
	if (!ctx.cr6.eq) goto loc_8212CE68;
loc_8212CDF4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,14776(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14776);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,31560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31560);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8212ce68
	if (!ctx.cr6.gt) goto loc_8212CE68;
	// addi r11,r31,13696
	ctx.r11.s64 = ctx.r31.s64 + 13696;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,1080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f31,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,1080(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1080, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8212ce2c
	if (!ctx.cr6.lt) goto loc_8212CE2C;
	// stfs f31,1080(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1080, temp.u32);
loc_8212CE2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bda30
	ctx.lr = 0x8212CE34;
	sub_820BDA30(ctx, base);
	// lfs f0,14776(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14776);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8212ce68
	if (ctx.cr6.lt) goto loc_8212CE68;
	// bso cr6,0x8212ce68
	if (ctx.cr6.so) goto loc_8212CE68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-31096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31096);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8212ce68
	if (ctx.cr6.gt) goto loc_8212CE68;
	// bso cr6,0x8212ce68
	if (ctx.cr6.so) goto loc_8212CE68;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1264
	ctx.r11.s64 = ctx.r11.s64 + -1264;
	// stb r10,209(r11)
	PPC_STORE_U8(ctx.r11.u32 + 209, ctx.r10.u8);
loc_8212CE68:
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

__attribute__((alias("__imp__sub_8212CE84"))) PPC_WEAK_FUNC(sub_8212CE84);
PPC_FUNC_IMPL(__imp__sub_8212CE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212CE88"))) PPC_WEAK_FUNC(sub_8212CE88);
PPC_FUNC_IMPL(__imp__sub_8212CE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8212CE90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r26,r11,26752
	ctx.r26.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r27,56(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ble cr6,0x8212cf40
	if (!ctx.cr6.gt) goto loc_8212CF40;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,10544
	ctx.r30.s64 = ctx.r29.s64 + 10544;
loc_8212CECC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x8212CED8;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212cf2c
	if (ctx.cr6.eq) goto loc_8212CF2C;
	// lbz r8,1354(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1354);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212cf2c
	if (ctx.cr6.eq) goto loc_8212CF2C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mulli r10,r11,328
	ctx.r10.s64 = ctx.r11.s64 * 328;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bne cr6,0x8212cf2c
	if (!ctx.cr6.eq) goto loc_8212CF2C;
	// lbz r8,10596(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10596);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8212cf2c
	if (!ctx.cr6.eq) goto loc_8212CF2C;
	// lwz r7,10580(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10580);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x8212cf4c
	if (ctx.cr6.eq) goto loc_8212CF4C;
loc_8212CF2C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,5956
	ctx.r31.s64 = ctx.r31.s64 + 5956;
	// addi r30,r30,5956
	ctx.r30.s64 = ctx.r30.s64 + 5956;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8212cecc
	if (ctx.cr6.lt) goto loc_8212CECC;
loc_8212CF40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8212CF4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212CF58"))) PPC_WEAK_FUNC(sub_8212CF58);
PPC_FUNC_IMPL(__imp__sub_8212CF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8212CF60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r26,r11,26752
	ctx.r26.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r27,56(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ble cr6,0x8212d010
	if (!ctx.cr6.gt) goto loc_8212D010;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,10544
	ctx.r30.s64 = ctx.r29.s64 + 10544;
loc_8212CF9C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x8212CFA8;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212cfc4
	if (ctx.cr6.eq) goto loc_8212CFC4;
	// lbz r8,1354(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1354);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212cffc
	if (ctx.cr6.eq) goto loc_8212CFFC;
loc_8212CFC4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mulli r10,r11,328
	ctx.r10.s64 = ctx.r11.s64 * 328;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bne cr6,0x8212cffc
	if (!ctx.cr6.eq) goto loc_8212CFFC;
	// lbz r8,10596(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10596);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8212cffc
	if (!ctx.cr6.eq) goto loc_8212CFFC;
	// lwz r7,10580(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10580);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x8212d01c
	if (ctx.cr6.eq) goto loc_8212D01C;
loc_8212CFFC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,5956
	ctx.r31.s64 = ctx.r31.s64 + 5956;
	// addi r30,r30,5956
	ctx.r30.s64 = ctx.r30.s64 + 5956;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8212cf9c
	if (ctx.cr6.lt) goto loc_8212CF9C;
loc_8212D010:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8212D01C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212D028"))) PPC_WEAK_FUNC(sub_8212D028);
PPC_FUNC_IMPL(__imp__sub_8212D028) {
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
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365698
	ctx.lr = 0x8212D04C;
	sub_82365698(ctx, base);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mulli r9,r3,5956
	ctx.r9.s64 = ctx.r3.s64 * 5956;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r10,r7,328
	ctx.r10.s64 = ctx.r7.s64 * 328;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// addis r10,r10,35
	ctx.r10.s64 = ctx.r10.s64 + 2293760;
	// addi r3,r10,-15008
	ctx.r3.s64 = ctx.r10.s64 + -15008;
	// beq cr6,0x8212d0ac
	if (ctx.cr6.eq) goto loc_8212D0AC;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r6,10580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10580, ctx.r6.u32);
	// stb r5,10648(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10648, ctx.r5.u8);
	// b 0x8212d0c0
	goto loc_8212D0C0;
loc_8212D0AC:
	// li r9,10
	ctx.r9.s64 = 10;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r9,10580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10580, ctx.r9.u32);
	// stb r8,10648(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10648, ctx.r8.u8);
loc_8212D0C0:
	// bl 0x820d0820
	ctx.lr = 0x8212D0C4;
	sub_820D0820(ctx, base);
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

__attribute__((alias("__imp__sub_8212D0D8"))) PPC_WEAK_FUNC(sub_8212D0D8);
PPC_FUNC_IMPL(__imp__sub_8212D0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8212D0E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,15328(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15328);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8212d234
	if (ctx.cr6.eq) goto loc_8212D234;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82365698
	ctx.lr = 0x8212D124;
	sub_82365698(ctx, base);
	// mulli r11,r3,5956
	ctx.r11.s64 = ctx.r3.s64 * 5956;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r29,r11,10528
	ctx.r29.s64 = ctx.r11.s64 + 10528;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x820fa560
	ctx.lr = 0x8212D144;
	sub_820FA560(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r30,r11,-1264
	ctx.r30.s64 = ctx.r11.s64 + -1264;
	// sth r6,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r6.u16);
	// lbz r4,15480(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 15480);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// mulli r10,r3,328
	ctx.r10.s64 = ctx.r3.s64 * 328;
	// mulli r9,r11,5956
	ctx.r9.s64 = ctx.r11.s64 * 5956;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r31,r11,10580
	ctx.r31.s64 = ctx.r11.s64 + 10580;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwzx r9,r29,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lbz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// stb r8,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r8.u8);
	// lwzx r7,r29,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lbz r6,21(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 21);
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r6,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r6.u8);
	// lwzx r5,r29,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// beq cr6,0x8212d1c4
	if (ctx.cr6.eq) goto loc_8212D1C4;
	// lwz r3,3012(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3012);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_8212D1C4:
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8212d1ec
	if (ctx.cr6.eq) goto loc_8212D1EC;
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212d1ec
	if (!ctx.cr6.eq) goto loc_8212D1EC;
	// addi r3,r28,13488
	ctx.r3.s64 = ctx.r28.s64 + 13488;
	// bl 0x820d01d8
	ctx.lr = 0x8212D1E8;
	sub_820D01D8(ctx, base);
	// stfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_8212D1EC:
	// lwz r8,15328(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15328);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8212d224
	if (!ctx.cr6.eq) goto loc_8212D224;
	// lwzx r7,r29,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8212d21c
	if (ctx.cr6.eq) goto loc_8212D21C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8212d21c
	if (ctx.cr6.eq) goto loc_8212D21C;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r6,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r6.u8);
	// b 0x8212d224
	goto loc_8212D224;
loc_8212D21C:
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r5.u8);
loc_8212D224:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82122010
	ctx.lr = 0x8212D234;
	sub_82122010(ctx, base);
loc_8212D234:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212D23C"))) PPC_WEAK_FUNC(sub_8212D23C);
PPC_FUNC_IMPL(__imp__sub_8212D23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212D240"))) PPC_WEAK_FUNC(sub_8212D240);
PPC_FUNC_IMPL(__imp__sub_8212D240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212d294
	if (ctx.cr6.eq) goto loc_8212D294;
	// lbz r10,17(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212d26c
	if (ctx.cr6.eq) goto loc_8212D26C;
	// lbz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212d26c
	if (!ctx.cr6.eq) goto loc_8212D26C;
loc_8212D264:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8212D26C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212d294
	if (ctx.cr6.eq) goto loc_8212D294;
	// lbz r8,17(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8212d28c
	if (!ctx.cr6.eq) goto loc_8212D28C;
	// lbz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8212d370
	if (ctx.cr6.eq) goto loc_8212D370;
loc_8212D28C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212d2d4
	if (!ctx.cr6.eq) goto loc_8212D2D4;
loc_8212D294:
	// lbz r6,17(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8212d2ac
	if (!ctx.cr6.eq) goto loc_8212D2AC;
	// lbz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8212d264
	if (!ctx.cr6.eq) goto loc_8212D264;
loc_8212D2AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212d2d4
	if (!ctx.cr6.eq) goto loc_8212D2D4;
	// lbz r10,17(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212d2cc
	if (ctx.cr6.eq) goto loc_8212D2CC;
	// lbz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212d370
	if (!ctx.cr6.eq) goto loc_8212D370;
loc_8212D2CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212d2f8
	if (ctx.cr6.eq) goto loc_8212D2F8;
loc_8212D2D4:
	// lbz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8212d2f8
	if (ctx.cr6.eq) goto loc_8212D2F8;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8212d370
	if (!ctx.cr6.gt) goto loc_8212D370;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8212D2F8:
	// lbz r5,18(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8212d264
	if (!ctx.cr6.eq) goto loc_8212D264;
	// lbz r11,18(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212d370
	if (!ctx.cr6.eq) goto loc_8212D370;
	// lbz r11,19(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212d330
	if (ctx.cr6.eq) goto loc_8212D330;
	// lbz r10,19(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 19);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212d370
	if (ctx.cr6.eq) goto loc_8212D370;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212d344
	if (!ctx.cr6.eq) goto loc_8212D344;
loc_8212D330:
	// lbz r9,19(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 19);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212d264
	if (!ctx.cr6.eq) goto loc_8212D264;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212d360
	if (ctx.cr6.eq) goto loc_8212D360;
loc_8212D344:
	// lbz r8,19(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 19);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8212d360
	if (ctx.cr6.eq) goto loc_8212D360;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// b 0x8212d36c
	goto loc_8212D36C;
loc_8212D360:
	// lfs f12,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
loc_8212D36C:
	// blt cr6,0x8212d264
	if (ctx.cr6.lt) goto loc_8212D264;
loc_8212D370:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212D378"))) PPC_WEAK_FUNC(sub_8212D378);
PPC_FUNC_IMPL(__imp__sub_8212D378) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,3000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3000);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8212d478
	if (ctx.cr6.eq) goto loc_8212D478;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8212d414
	if (ctx.cr6.eq) goto loc_8212D414;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8212d498
	if (!ctx.cr6.eq) goto loc_8212D498;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x8221c328
	ctx.lr = 0x8212D3B4;
	sub_8221C328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// beq cr6,0x8212d3f4
	if (ctx.cr6.eq) goto loc_8212D3F4;
	// bl 0x82360f70
	ctx.lr = 0x8212D3D8;
	sub_82360F70(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r10.u32);
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
loc_8212D3F4:
	// bl 0x82360f70
	ctx.lr = 0x8212D3F8;
	sub_82360F70(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r9,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r9.u32);
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
loc_8212D414:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x8221c328
	ctx.lr = 0x8212D420;
	sub_8221C328(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// beq cr6,0x8212d460
	if (ctx.cr6.eq) goto loc_8212D460;
	// bl 0x82360f70
	ctx.lr = 0x8212D444;
	sub_82360F70(ctx, base);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r7,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r7.u32);
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
loc_8212D460:
	// bl 0x82360f70
	ctx.lr = 0x8212D464;
	sub_82360F70(ctx, base);
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
loc_8212D478:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// bl 0x82360f70
	ctx.lr = 0x8212D490;
	sub_82360F70(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r6,3000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3000, ctx.r6.u32);
loc_8212D498:
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

__attribute__((alias("__imp__sub_8212D4AC"))) PPC_WEAK_FUNC(sub_8212D4AC);
PPC_FUNC_IMPL(__imp__sub_8212D4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212D4B0"))) PPC_WEAK_FUNC(sub_8212D4B0);
PPC_FUNC_IMPL(__imp__sub_8212D4B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,3000(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3000);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8212d4c4
	if (!ctx.cr6.eq) goto loc_8212D4C4;
loc_8212D4BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8212D4C4:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r8,r9,52520
	ctx.r8.u64 = ctx.r9.u64 | 52520;
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1264
	ctx.r11.s64 = ctx.r11.s64 + -1264;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// bne cr6,0x8212d508
	if (!ctx.cr6.eq) goto loc_8212D508;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x8212d4bc
	if (ctx.cr6.eq) goto loc_8212D4BC;
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// beq cr6,0x8212d4bc
	if (ctx.cr6.eq) goto loc_8212D4BC;
loc_8212D508:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212D510"))) PPC_WEAK_FUNC(sub_8212D510);
PPC_FUNC_IMPL(__imp__sub_8212D510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8212D518;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bl 0x82121b88
	ctx.lr = 0x8212D528;
	sub_82121B88(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r10,r11,36968
	ctx.r10.u64 = ctx.r11.u64 | 36968;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212d630
	if (!ctx.cr6.gt) goto loc_8212D630;
loc_8212D548:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232da90
	ctx.lr = 0x8212D554;
	sub_8232DA90(ctx, base);
	// lbz r9,15225(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15225);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212d574
	if (!ctx.cr6.eq) goto loc_8212D574;
	// bl 0x820bd910
	ctx.lr = 0x8212D564;
	sub_820BD910(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8212d574
	if (!ctx.cr6.eq) goto loc_8212D574;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8212D574:
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r6,r7,36968
	ctx.r6.u64 = ctx.r7.u64 | 36968;
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212d548
	if (ctx.cr6.lt) goto loc_8212D548;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x8212d630
	if (!ctx.cr6.eq) goto loc_8212D630;
	// lis r5,34
	ctx.r5.s64 = 2228224;
	// ori r4,r5,52265
	ctx.r4.u64 = ctx.r5.u64 | 52265;
	// lbzx r3,r31,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8212d5fc
	if (!ctx.cr6.eq) goto loc_8212D5FC;
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// addi r3,r11,-28496
	ctx.r3.s64 = ctx.r11.s64 + -28496;
	// bl 0x820bd910
	ctx.lr = 0x8212D5B4;
	sub_820BD910(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212d5fc
	if (!ctx.cr6.eq) goto loc_8212D5FC;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// li r4,179
	ctx.r4.s64 = 179;
	// bl 0x8219c750
	ctx.lr = 0x8212D5F4;
	sub_8219C750(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8212D5FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,180
	ctx.r4.s64 = 180;
	// bl 0x8219c750
	ctx.lr = 0x8212D630;
	sub_8219C750(ctx, base);
loc_8212D630:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212D638"))) PPC_WEAK_FUNC(sub_8212D638);
PPC_FUNC_IMPL(__imp__sub_8212D638) {
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
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r30,r10
	ctx.r30.s64 = ctx.r10.s8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8212d738
	if (ctx.cr6.eq) goto loc_8212D738;
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
	// beq cr6,0x8212d6a8
	if (ctx.cr6.eq) goto loc_8212D6A8;
	// addis r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 458752;
	// addi r5,r9,14520
	ctx.r5.s64 = ctx.r9.s64 + 14520;
	// lwzx r4,r10,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8212d6ac
	if (ctx.cr6.eq) goto loc_8212D6AC;
loc_8212D6A8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8212D6AC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212d738
	if (ctx.cr6.eq) goto loc_8212D738;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// addi r31,r10,26752
	ctx.r31.s64 = ctx.r10.s64 + 26752;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// ori r5,r5,11
	ctx.r5.u64 = ctx.r5.u64 | 11;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82361450
	ctx.lr = 0x8212D704;
	sub_82361450(ctx, base);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ori r5,r5,13
	ctx.r5.u64 = ctx.r5.u64 | 13;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361450
	ctx.lr = 0x8212D720;
	sub_82361450(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361460
	ctx.lr = 0x8212D738;
	sub_82361460(ctx, base);
loc_8212D738:
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

__attribute__((alias("__imp__sub_8212D750"))) PPC_WEAK_FUNC(sub_8212D750);
PPC_FUNC_IMPL(__imp__sub_8212D750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad8
	ctx.lr = 0x8212D758;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r23,r11,26080
	ctx.r23.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// lwz r26,56(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// li r21,0
	ctx.r21.s64 = 0;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwzx r11,r23,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ble cr6,0x8212d838
	if (!ctx.cr6.gt) goto loc_8212D838;
	// li r27,0
	ctx.r27.s64 = 0;
loc_8212D7A4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// mulli r11,r9,328
	ctx.r11.s64 = ctx.r9.s64 * 328;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82365758
	ctx.lr = 0x8212D7C0;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212d828
	if (ctx.cr6.eq) goto loc_8212D828;
	// lbz r8,10596(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 10596);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8212d800
	if (ctx.cr6.eq) goto loc_8212D800;
	// lbz r7,1201(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1201);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8212d7f8
	if (!ctx.cr6.eq) goto loc_8212D7F8;
	// lbz r6,1354(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1354);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212d828
	if (!ctx.cr6.eq) goto loc_8212D828;
loc_8212D7F8:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// b 0x8212d828
	goto loc_8212D828;
loc_8212D800:
	// lbz r10,1201(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1201);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212d824
	if (!ctx.cr6.eq) goto loc_8212D824;
	// lbz r9,1354(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1354);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8212d828
	if (!ctx.cr6.eq) goto loc_8212D828;
loc_8212D824:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
loc_8212D828:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,5956
	ctx.r27.s64 = ctx.r27.s64 + 5956;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8212d7a4
	if (ctx.cr6.lt) goto loc_8212D7A4;
loc_8212D838:
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x82365698
	ctx.lr = 0x8212D840;
	sub_82365698(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r10,r3,5956
	ctx.r10.s64 = ctx.r3.s64 * 5956;
	// mulli r11,r4,328
	ctx.r11.s64 = ctx.r4.s64 * 328;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,10596(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212d868
	if (ctx.cr6.eq) goto loc_8212D868;
	// cmpw cr6,r22,r25
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r25.s32, ctx.xer);
	// b 0x8212d86c
	goto loc_8212D86C;
loc_8212D868:
	// cmpw cr6,r21,r24
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r24.s32, ctx.xer);
loc_8212D86C:
	// bne cr6,0x8212d874
	if (!ctx.cr6.eq) goto loc_8212D874;
	// li r20,1
	ctx.r20.s64 = 1;
loc_8212D874:
	// clrlwi r10,r20,24
	ctx.r10.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212d8a0
	if (ctx.cr6.eq) goto loc_8212D8A0;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// lwzx r11,r23,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r8.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,304(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 304);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8212D8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212D8A0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb28
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212D8A8"))) PPC_WEAK_FUNC(sub_8212D8A8);
PPC_FUNC_IMPL(__imp__sub_8212D8A8) {
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
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365698
	ctx.lr = 0x8212D8CC;
	sub_82365698(ctx, base);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lis r9,-32091
	ctx.r9.s64 = -2103115776;
	// addi r31,r9,4864
	ctx.r31.s64 = ctx.r9.s64 + 4864;
	// mulli r9,r10,5956
	ctx.r9.s64 = ctx.r10.s64 * 5956;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r10,r8,328
	ctx.r10.s64 = ctx.r8.s64 * 328;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82188300
	ctx.lr = 0x8212D914;
	sub_82188300(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r7,10648(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10648);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// beq cr6,0x8212d958
	if (ctx.cr6.eq) goto loc_8212D958;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,261
	ctx.r4.s64 = 261;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x8219c750
	ctx.lr = 0x8212D954;
	sub_8219C750(ctx, base);
	// b 0x8212d9c0
	goto loc_8212D9C0;
loc_8212D958:
	// lbz r5,10597(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10597);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x8212d984
	if (ctx.cr6.eq) goto loc_8212D984;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r4,262
	ctx.r4.s64 = 262;
	// bl 0x8219c750
	ctx.lr = 0x8212D980;
	sub_8219C750(ctx, base);
	// b 0x8212d9c0
	goto loc_8212D9C0;
loc_8212D984:
	// lbz r3,10672(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8212d9ac
	if (ctx.cr6.eq) goto loc_8212D9AC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,258
	ctx.r4.s64 = 258;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x8219c750
	ctx.lr = 0x8212D9A8;
	sub_8219C750(ctx, base);
	// b 0x8212d9c0
	goto loc_8212D9C0;
loc_8212D9AC:
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,262
	ctx.r4.s64 = 262;
	// bl 0x8219c750
	ctx.lr = 0x8212D9C0;
	sub_8219C750(ctx, base);
loc_8212D9C0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821939a0
	ctx.lr = 0x8212D9CC;
	sub_821939A0(ctx, base);
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

__attribute__((alias("__imp__sub_8212D9E4"))) PPC_WEAK_FUNC(sub_8212D9E4);
PPC_FUNC_IMPL(__imp__sub_8212D9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212D9E8"))) PPC_WEAK_FUNC(sub_8212D9E8);
PPC_FUNC_IMPL(__imp__sub_8212D9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,-32288
	ctx.r10.s64 = ctx.r11.s64 + -32288;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8212D9F8:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r4,r9
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r9.u64, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r8,r10,176
	ctx.r8.s64 = ctx.r10.s64 + 176;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8212d9f8
	if (ctx.cr6.lt) goto loc_8212D9F8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212DA20"))) PPC_WEAK_FUNC(sub_8212DA20);
PPC_FUNC_IMPL(__imp__sub_8212DA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-16056
	ctx.r11.s64 = ctx.r11.s64 + -16056;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8212DA48:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lbzx r6,r11,r3
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// bne cr6,0x8212da48
	if (!ctx.cr6.eq) goto loc_8212DA48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212DA5C"))) PPC_WEAK_FUNC(sub_8212DA5C);
PPC_FUNC_IMPL(__imp__sub_8212DA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212DA60"))) PPC_WEAK_FUNC(sub_8212DA60);
PPC_FUNC_IMPL(__imp__sub_8212DA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r9,16274
	ctx.r8.u64 = ctx.r9.u64 | 16274;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// ori r6,r7,57728
	ctx.r6.u64 = ctx.r7.u64 | 57728;
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212DA90"))) PPC_WEAK_FUNC(sub_8212DA90);
PPC_FUNC_IMPL(__imp__sub_8212DA90) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x8212db18
	if (ctx.cr6.gt) goto loc_8212DB18;
	// lis r12,-32237
	ctx.r12.s64 = -2112684032;
	// addi r12,r12,-9516
	ctx.r12.s64 = ctx.r12.s64 + -9516;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8212DAFC;
	case 1:
		goto loc_8212DAFC;
	case 2:
		goto loc_8212DAFC;
	case 3:
		goto loc_8212DAFC;
	case 4:
		goto loc_8212DB04;
	case 5:
		goto loc_8212DB04;
	case 6:
		goto loc_8212DB04;
	case 7:
		goto loc_8212DB0C;
	case 8:
		goto loc_8212DB0C;
	case 9:
		goto loc_8212DB0C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-9476(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -9476);
	// lwz r16,-9476(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -9476);
	// lwz r16,-9476(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -9476);
	// lwz r16,-9476(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -9476);
	// lwz r16,-9468(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -9468);
	// lwz r16,-9468(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -9468);
	// lwz r16,-9468(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -9468);
	// lwz r16,-9460(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -9460);
	// lwz r16,-9460(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -9460);
	// lwz r16,-9460(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -9460);
loc_8212DAFC:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8212db10
	goto loc_8212DB10;
loc_8212DB04:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8212db10
	goto loc_8212DB10;
loc_8212DB0C:
	// li r4,2
	ctx.r4.s64 = 2;
loc_8212DB10:
	// addi r3,r31,15552
	ctx.r3.s64 = ctx.r31.s64 + 15552;
	// bl 0x820c2d88
	ctx.lr = 0x8212DB18;
	sub_820C2D88(ctx, base);
loc_8212DB18:
	// lbz r10,9(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,3188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3188);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,18144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18144, temp.u32);
	// stfs f0,18156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 18156, temp.u32);
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

__attribute__((alias("__imp__sub_8212DB5C"))) PPC_WEAK_FUNC(sub_8212DB5C);
PPC_FUNC_IMPL(__imp__sub_8212DB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212DB60"))) PPC_WEAK_FUNC(sub_8212DB60);
PPC_FUNC_IMPL(__imp__sub_8212DB60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6912(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6912);
	// b 0x820bda30
	sub_820BDA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212DB68"))) PPC_WEAK_FUNC(sub_8212DB68);
PPC_FUNC_IMPL(__imp__sub_8212DB68) {
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
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x8212db9c
	if (!ctx.cr6.eq) goto loc_8212DB9C;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,16448
	ctx.r11.s64 = ctx.r11.s64 + 16448;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
loc_8212DB9C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212DBAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8212dbd0
	if (!ctx.cr6.eq) goto loc_8212DBD0;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r30,1104
	ctx.r10.s64 = ctx.r30.s64 * 1104;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8219d6e0
	ctx.lr = 0x8212DBD0;
	sub_8219D6E0(ctx, base);
loc_8212DBD0:
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

__attribute__((alias("__imp__sub_8212DBE8"))) PPC_WEAK_FUNC(sub_8212DBE8);
PPC_FUNC_IMPL(__imp__sub_8212DBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8212DBF0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82121e70
	ctx.lr = 0x8212DC00;
	sub_82121E70(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// ori r10,r11,36968
	ctx.r10.u64 = ctx.r11.u64 | 36968;
	// li r24,1
	ctx.r24.s64 = 1;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212dca4
	if (!ctx.cr6.gt) goto loc_8212DCA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r27,3024
	ctx.r28.s64 = ctx.r27.s64 + 3024;
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
loc_8212DC38:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232da90
	ctx.lr = 0x8212DC44;
	sub_8232DA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,15328(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15328);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8212dc58
	if (!ctx.cr6.eq) goto loc_8212DC58;
	// stw r24,14780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14780, ctx.r24.u32);
loc_8212DC58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2868(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,14776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 14776, temp.u32);
	// bl 0x820bda30
	ctx.lr = 0x8212DC68;
	sub_820BDA30(ctx, base);
	// lwz r8,15328(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15328);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8212dc84
	if (!ctx.cr6.eq) goto loc_8212DC84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bd6d0
	ctx.lr = 0x8212DC80;
	sub_820BD6D0(ctx, base);
	// stw r25,14780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14780, ctx.r25.u32);
loc_8212DC84:
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// stfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r6,r7,36968
	ctx.r6.u64 = ctx.r7.u64 | 36968;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212dc38
	if (ctx.cr6.lt) goto loc_8212DC38;
loc_8212DCA4:
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,412(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 412);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8212DCB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8212dd8c
	if (!ctx.cr6.eq) goto loc_8212DD8C;
	// lwz r3,3088(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3088);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// addi r11,r11,-31904
	ctx.r11.s64 = ctx.r11.s64 + -31904;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,-120
	ctx.r10.s64 = ctx.r11.s64 + -120;
	// ori r5,r6,37004
	ctx.r5.u64 = ctx.r6.u64 | 37004;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r9,r30,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,-15880
	ctx.r11.s64 = ctx.r11.s64 + -15880;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r7,r10,-1264
	ctx.r7.s64 = ctx.r10.s64 + -1264;
	// ble cr6,0x8212dd40
	if (!ctx.cr6.gt) goto loc_8212DD40;
	// addi r10,r7,196
	ctx.r10.s64 = ctx.r7.s64 + 196;
loc_8212DD2C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,200
	ctx.r10.s64 = ctx.r10.s64 + 200;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8212dd2c
	if (ctx.cr6.lt) goto loc_8212DD2C;
loc_8212DD40:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8212dd8c
	if (!ctx.cr6.gt) goto loc_8212DD8C;
	// addi r11,r27,3072
	ctx.r11.s64 = ctx.r27.s64 + 3072;
	// addi r10,r7,196
	ctx.r10.s64 = ctx.r7.s64 + 196;
loc_8212DD54:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// ori r6,r7,37004
	ctx.r6.u64 = ctx.r7.u64 | 37004;
	// addi r10,r10,200
	ctx.r10.s64 = ctx.r10.s64 + 200;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lwzx r9,r30,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8212dd54
	if (ctx.cr6.lt) goto loc_8212DD54;
loc_8212DD8C:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041a8
	ctx.lr = 0x8212DD98;
	sub_821041A8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8212dda8
	if (ctx.cr6.eq) goto loc_8212DDA8;
	// stb r24,164(r27)
	PPC_STORE_U8(ctx.r27.u32 + 164, ctx.r24.u8);
loc_8212DDA8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212DDB4"))) PPC_WEAK_FUNC(sub_8212DDB4);
PPC_FUNC_IMPL(__imp__sub_8212DDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212DDB8"))) PPC_WEAK_FUNC(sub_8212DDB8);
PPC_FUNC_IMPL(__imp__sub_8212DDB8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212DDDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8212de3c
	if (!ctx.cr6.eq) goto loc_8212DE3C;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,3096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3096);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r9,3132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3132, ctx.r9.u8);
	// blt cr6,0x8212de3c
	if (ctx.cr6.lt) goto loc_8212DE3C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r8,3088(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3088);
	// addi r9,r11,-32112
	ctx.r9.s64 = ctx.r11.s64 + -32112;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8212de3c
	if (!ctx.cr6.lt) goto loc_8212DE3C;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-15968
	ctx.r9.s64 = ctx.r9.s64 + -15968;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lfsx f13,r5,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,3056(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3056, temp.u32);
loc_8212DE3C:
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

__attribute__((alias("__imp__sub_8212DE50"))) PPC_WEAK_FUNC(sub_8212DE50);
PPC_FUNC_IMPL(__imp__sub_8212DE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,3132(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212de74
	if (ctx.cr6.eq) goto loc_8212DE74;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f13,3056(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// blr 
	return;
loc_8212DE74:
	// lwz r10,3088(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3088);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,-15968
	ctx.r11.s64 = ctx.r11.s64 + -15968;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfs f1,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212DE90"))) PPC_WEAK_FUNC(sub_8212DE90);
PPC_FUNC_IMPL(__imp__sub_8212DE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8212DE98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,15328(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15328);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8212e000
	if (ctx.cr6.eq) goto loc_8212E000;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lbz r10,15480(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 15480);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// extsb r30,r10
	ctx.r30.s64 = ctx.r10.s8;
	// mulli r29,r30,5956
	ctx.r29.s64 = ctx.r30.s64 * 5956;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r28,r11,10528
	ctx.r28.s64 = ctx.r11.s64 + 10528;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 16);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x820fa560
	ctx.lr = 0x8212DEF4;
	sub_820FA560(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1264
	ctx.r11.s64 = ctx.r11.s64 + -1264;
	// sth r6,16(r28)
	PPC_STORE_U16(ctx.r28.u32 + 16, ctx.r6.u16);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mulli r9,r4,328
	ctx.r9.s64 = ctx.r4.s64 * 328;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r8,10584(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10584, ctx.r8.u32);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 20);
	// stb r6,10596(r9)
	PPC_STORE_U8(ctx.r9.u32 + 10596, ctx.r6.u8);
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbz r4,21(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// stb r4,10597(r9)
	PPC_STORE_U8(ctx.r9.u32 + 10597, ctx.r4.u8);
	// lwz r3,15328(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15328);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8212dfe4
	if (!ctx.cr6.eq) goto loc_8212DFE4;
	// lwz r10,19168(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19168);
	// addi r7,r11,212
	ctx.r7.s64 = ctx.r11.s64 + 212;
	// mulli r8,r10,200
	ctx.r8.s64 = ctx.r10.s64 * 200;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8212dfa4
	if (ctx.cr6.gt) goto loc_8212DFA4;
	// lis r12,-32237
	ctx.r12.s64 = -2112684032;
	// addi r12,r12,-8328
	ctx.r12.s64 = ctx.r12.s64 + -8328;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8212DF8C;
	case 1:
		goto loc_8212DF94;
	case 2:
		goto loc_8212DF9C;
	case 3:
		goto loc_8212DFA4;
	case 4:
		goto loc_8212DFA4;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-8308(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -8308);
	// lwz r16,-8300(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -8300);
	// lwz r16,-8292(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -8292);
	// lwz r16,-8284(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -8284);
	// lwz r16,-8284(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -8284);
loc_8212DF8C:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8212dfa8
	goto loc_8212DFA8;
loc_8212DF94:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x8212dfa8
	goto loc_8212DFA8;
loc_8212DF9C:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x8212dfa8
	goto loc_8212DFA8;
loc_8212DFA4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8212DFA8:
	// addi r6,r11,156
	ctx.r6.s64 = ctx.r11.s64 + 156;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,16448
	ctx.r11.s64 = ctx.r11.s64 + 16448;
	// lwzx r4,r8,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// stw r4,10644(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10644, ctx.r4.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bgt cr6,0x8212dfcc
	if (ctx.cr6.gt) goto loc_8212DFCC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8212DFCC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212DFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212DFE4:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82122010
	ctx.lr = 0x8212DFF4;
	sub_82122010(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820fa830
	ctx.lr = 0x8212E000;
	sub_820FA830(ctx, base);
loc_8212E000:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212E008"))) PPC_WEAK_FUNC(sub_8212E008);
PPC_FUNC_IMPL(__imp__sub_8212E008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8212E010;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r31,13696
	ctx.r11.s64 = ctx.r31.s64 + 13696;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r10,15480(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15480);
	// extsb r29,r10
	ctx.r29.s64 = ctx.r10.s8;
	// lwz r10,1084(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8212e048
	if (ctx.cr6.eq) goto loc_8212E048;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8212e048
	if (!ctx.cr6.gt) goto loc_8212E048;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r9,1084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1084, ctx.r9.u32);
loc_8212E048:
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lfs f13,1080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2868(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1080(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1080, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8212e070
	if (!ctx.cr6.lt) goto loc_8212E070;
	// stfs f13,1080(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1080, temp.u32);
loc_8212E070:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bda30
	ctx.lr = 0x8212E078;
	sub_820BDA30(ctx, base);
	// lwz r8,14780(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14780);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8212e09c
	if (!ctx.cr6.eq) goto loc_8212E09C;
	// lfs f0,2868(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,14776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 14776, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8212E09C:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041a8
	ctx.lr = 0x8212E0A8;
	sub_821041A8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8212e204
	if (!ctx.cr6.eq) goto loc_8212E204;
	// lwz r11,15328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r30,r11,-1264
	ctx.r30.s64 = ctx.r11.s64 + -1264;
	// bne cr6,0x8212e130
	if (!ctx.cr6.eq) goto loc_8212E130;
	// lbz r10,3130(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 3130);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212e204
	if (ctx.cr6.eq) goto loc_8212E204;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8212e104
	if (!ctx.cr6.eq) goto loc_8212E104;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,184(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212E104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212E104:
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r8,r9,15495
	ctx.r8.u64 = ctx.r9.u64 | 15495;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// bl 0x820ed7a0
	ctx.lr = 0x8212E128;
	sub_820ED7A0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,15482(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15482, ctx.r7.u8);
loc_8212E130:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8212e204
	if (ctx.cr6.eq) goto loc_8212E204;
	// lwz r6,15328(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15328);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8212e204
	if (!ctx.cr6.eq) goto loc_8212E204;
	// lwz r5,14780(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14780);
	// lwz r4,19168(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19168);
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212e204
	if (!ctx.cr6.eq) goto loc_8212E204;
	// mulli r11,r4,200
	ctx.r11.s64 = ctx.r4.s64 * 200;
	// addi r8,r30,212
	ctx.r8.s64 = ctx.r30.s64 + 212;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8212e1b8
	if (ctx.cr6.lt) goto loc_8212E1B8;
	// beq cr6,0x8212e1b0
	if (ctx.cr6.eq) goto loc_8212E1B0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8212e184
	if (ctx.cr6.lt) goto loc_8212E184;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8212e1bc
	goto loc_8212E1BC;
loc_8212E184:
	// addi r7,r30,196
	ctx.r7.s64 = ctx.r30.s64 + 196;
	// addi r6,r30,112
	ctx.r6.s64 = ctx.r30.s64 + 112;
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x8212e1bc
	if (ctx.cr6.lt) goto loc_8212E1BC;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8212e1bc
	goto loc_8212E1BC;
loc_8212E1B0:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8212e1bc
	goto loc_8212E1BC;
loc_8212E1B8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8212E1BC:
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,15480(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15480);
	// addi r10,r10,9008
	ctx.r10.s64 = ctx.r10.s64 + 9008;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r11,380(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 380);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r10,r6,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212E204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212E204:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212E20C"))) PPC_WEAK_FUNC(sub_8212E20C);
PPC_FUNC_IMPL(__imp__sub_8212E20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212E210"))) PPC_WEAK_FUNC(sub_8212E210);
PPC_FUNC_IMPL(__imp__sub_8212E210) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// ori r7,r8,56208
	ctx.r7.u64 = ctx.r8.u64 | 56208;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r11,-1264
	ctx.r11.s64 = ctx.r11.s64 + -1264;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// addi r5,r11,196
	ctx.r5.s64 = ctx.r11.s64 + 196;
	// mulli r6,r10,200
	ctx.r6.s64 = ctx.r10.s64 * 200;
	// lwzx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r4,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,3088(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3088);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,-16056
	ctx.r11.s64 = ctx.r11.s64 + -16056;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_8212E26C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// beq cr6,0x8212e290
	if (ctx.cr6.eq) goto loc_8212E290;
loc_8212E280:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// bne cr6,0x8212e280
	if (!ctx.cr6.eq) goto loc_8212E280;
loc_8212E290:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8212e26c
	if (!ctx.cr6.eq) goto loc_8212E26C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212E2A8"))) PPC_WEAK_FUNC(sub_8212E2A8);
PPC_FUNC_IMPL(__imp__sub_8212E2A8) {
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
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// bgt cr6,0x8212e35c
	if (ctx.cr6.gt) goto loc_8212E35C;
	// lis r12,-32237
	ctx.r12.s64 = -2112684032;
	// addi r12,r12,-7460
	ctx.r12.s64 = ctx.r12.s64 + -7460;
	// rlwinm r0,r31,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r31.u64) {
	case 0:
		goto loc_8212E300;
	case 1:
		goto loc_8212E300;
	case 2:
		goto loc_8212E300;
	case 3:
		goto loc_8212E300;
	case 4:
		goto loc_8212E324;
	case 5:
		goto loc_8212E324;
	case 6:
		goto loc_8212E324;
	case 7:
		goto loc_8212E300;
	case 8:
		goto loc_8212E300;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-7424(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7424);
	// lwz r16,-7424(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7424);
	// lwz r16,-7424(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7424);
	// lwz r16,-7424(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7424);
	// lwz r16,-7388(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7388);
	// lwz r16,-7388(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7388);
	// lwz r16,-7388(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7388);
	// lwz r16,-7424(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7424);
	// lwz r16,-7424(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7424);
loc_8212E300:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-15868
	ctx.r11.s64 = ctx.r11.s64 + -15868;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
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
loc_8212E324:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x8212E334;
	sub_8210B3C8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-15868
	ctx.r11.s64 = ctx.r11.s64 + -15868;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
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
loc_8212E35C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_8212E378"))) PPC_WEAK_FUNC(sub_8212E378);
PPC_FUNC_IMPL(__imp__sub_8212E378) {
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
	// lbz r10,15480(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15480);
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// stfs f0,14776(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 14776, temp.u32);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8223d0b0
	ctx.lr = 0x8212E3B0;
	sub_8223D0B0(ctx, base);
	// lbz r9,599(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 599);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212e3cc
	if (ctx.cr6.eq) goto loc_8212E3CC;
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// lbz r4,627(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 627);
	// addi r3,r11,28824
	ctx.r3.s64 = ctx.r11.s64 + 28824;
	// bl 0x8228db28
	ctx.lr = 0x8212E3CC;
	sub_8228DB28(ctx, base);
loc_8212E3CC:
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

__attribute__((alias("__imp__sub_8212E3E0"))) PPC_WEAK_FUNC(sub_8212E3E0);
PPC_FUNC_IMPL(__imp__sub_8212E3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8212E3E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8212e210
	ctx.lr = 0x8212E3F8;
	sub_8212E210(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8212e210
	ctx.lr = 0x8212E408;
	sub_8212E210(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8212e210
	ctx.lr = 0x8212E418;
	sub_8212E210(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82362190
	ctx.lr = 0x8212E430;
	sub_82362190(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362190
	ctx.lr = 0x8212E444;
	sub_82362190(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82362190
	ctx.lr = 0x8212E458;
	sub_82362190(ctx, base);
	// lis r11,-32114
	ctx.r11.s64 = -2104623104;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r31,r11,16696
	ctx.r31.s64 = ctx.r11.s64 + 16696;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r5,r31,1544
	ctx.r5.s64 = ctx.r31.s64 + 1544;
	// bl 0x82361fd8
	ctx.lr = 0x8212E470;
	sub_82361FD8(ctx, base);
	// addi r5,r31,1544
	ctx.r5.s64 = ctx.r31.s64 + 1544;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361fd8
	ctx.lr = 0x8212E480;
	sub_82361FD8(ctx, base);
	// addi r5,r31,1544
	ctx.r5.s64 = ctx.r31.s64 + 1544;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82361fd8
	ctx.lr = 0x8212E490;
	sub_82361FD8(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82361fd8
	ctx.lr = 0x8212E4A0;
	sub_82361FD8(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82361fd8
	ctx.lr = 0x8212E4B0;
	sub_82361FD8(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82361fd8
	ctx.lr = 0x8212E4C0;
	sub_82361FD8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-31092
	ctx.r5.s64 = ctx.r11.s64 + -31092;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r11,-31156
	ctx.r4.s64 = ctx.r11.s64 + -31156;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,592
	ctx.r6.s64 = ctx.r1.s64 + 592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82123960
	ctx.lr = 0x8212E4EC;
	sub_82123960(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212E4F4"))) PPC_WEAK_FUNC(sub_8212E4F4);
PPC_FUNC_IMPL(__imp__sub_8212E4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212E4F8"))) PPC_WEAK_FUNC(sub_8212E4F8);
PPC_FUNC_IMPL(__imp__sub_8212E4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8212E500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8232dc00
	ctx.lr = 0x8212E520;
	sub_8232DC00(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820bda98
	ctx.lr = 0x8212E534;
	sub_820BDA98(ctx, base);
	// lwz r31,18240(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 18240);
	// lwz r29,632(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
loc_8212E53C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212E554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212e53c
	if (ctx.cr6.eq) goto loc_8212E53C;
	// stw r29,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212E56C"))) PPC_WEAK_FUNC(sub_8212E56C);
PPC_FUNC_IMPL(__imp__sub_8212E56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212E570"))) PPC_WEAK_FUNC(sub_8212E570);
PPC_FUNC_IMPL(__imp__sub_8212E570) {
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
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r30,r10
	ctx.r30.s64 = ctx.r10.s8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8212e648
	if (ctx.cr6.eq) goto loc_8212E648;
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
	// beq cr6,0x8212e5e0
	if (ctx.cr6.eq) goto loc_8212E5E0;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// addi r5,r11,14520
	ctx.r5.s64 = ctx.r11.s64 + 14520;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r4,r10,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8212e5e4
	if (ctx.cr6.eq) goto loc_8212E5E4;
loc_8212E5E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212E5E4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212e648
	if (ctx.cr6.eq) goto loc_8212E648;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,37
	ctx.r9.s64 = 2424832;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r8,r9,49147
	ctx.r8.u64 = ctx.r9.u64 | 49147;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8212e614
	if (ctx.cr6.eq) goto loc_8212E614;
	// bl 0x82123e00
	ctx.lr = 0x8212E610;
	sub_82123E00(ctx, base);
	// b 0x8212e648
	goto loc_8212E648;
loc_8212E614:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r6,2400(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2400);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361460
	ctx.lr = 0x8212E630;
	sub_82361460(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361460
	ctx.lr = 0x8212E648;
	sub_82361460(ctx, base);
loc_8212E648:
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

__attribute__((alias("__imp__sub_8212E660"))) PPC_WEAK_FUNC(sub_8212E660);
PPC_FUNC_IMPL(__imp__sub_8212E660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bne cr6,0x8212e694
	if (!ctx.cr6.eq) goto loc_8212E694;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_8212E694:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8236b2f8
	ctx.lr = 0x8212E6A4;
	sub_8236B2F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212E6B4"))) PPC_WEAK_FUNC(sub_8212E6B4);
PPC_FUNC_IMPL(__imp__sub_8212E6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212E6B8"))) PPC_WEAK_FUNC(sub_8212E6B8);
PPC_FUNC_IMPL(__imp__sub_8212E6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bne cr6,0x8212e6ec
	if (!ctx.cr6.eq) goto loc_8212E6EC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8212E6EC:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x8212E700;
	sub_8236B2F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212E710"))) PPC_WEAK_FUNC(sub_8212E710);
PPC_FUNC_IMPL(__imp__sub_8212E710) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,26384
	ctx.r4.s64 = ctx.r11.s64 + 26384;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x8212E748;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x8212E758;
	sub_82361D08(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212e768
	if (!ctx.cr6.eq) goto loc_8212E768;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8212E768:
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x8212E788;
	sub_8236B2F8(ctx, base);
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

__attribute__((alias("__imp__sub_8212E7A0"))) PPC_WEAK_FUNC(sub_8212E7A0);
PPC_FUNC_IMPL(__imp__sub_8212E7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8212E7A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x82361d08
	ctx.lr = 0x8212E7D0;
	sub_82361D08(ctx, base);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8212e7e0
	if (!ctx.cr6.eq) goto loc_8212E7E0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_8212E7E0:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x8212E7FC;
	sub_8236B2F8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212E804"))) PPC_WEAK_FUNC(sub_8212E804);
PPC_FUNC_IMPL(__imp__sub_8212E804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212E808"))) PPC_WEAK_FUNC(sub_8212E808);
PPC_FUNC_IMPL(__imp__sub_8212E808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8212E810;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// bl 0x82361d08
	ctx.lr = 0x8212E83C;
	sub_82361D08(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,26384
	ctx.r4.s64 = ctx.r11.s64 + 26384;
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x8212E854;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x8212E864;
	sub_82361D08(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212e874
	if (!ctx.cr6.eq) goto loc_8212E874;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8212E874:
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8212e884
	if (!ctx.cr6.eq) goto loc_8212E884;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_8212E884:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x8212E8A0;
	sub_8236B2F8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212E8A8"))) PPC_WEAK_FUNC(sub_8212E8A8);
PPC_FUNC_IMPL(__imp__sub_8212E8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8212E8B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// bl 0x82361d08
	ctx.lr = 0x8212E8DC;
	sub_82361D08(ctx, base);
	// sth r30,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r30.u16);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bne cr6,0x8212e8f4
	if (!ctx.cr6.eq) goto loc_8212E8F4;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
loc_8212E8F4:
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8212e904
	if (!ctx.cr6.eq) goto loc_8212E904;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_8212E904:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x8212E91C;
	sub_8236B2F8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212E924"))) PPC_WEAK_FUNC(sub_8212E924);
PPC_FUNC_IMPL(__imp__sub_8212E924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212E928"))) PPC_WEAK_FUNC(sub_8212E928);
PPC_FUNC_IMPL(__imp__sub_8212E928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8212E930;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// bl 0x82361d08
	ctx.lr = 0x8212E95C;
	sub_82361D08(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// bl 0x82361d08
	ctx.lr = 0x8212E970;
	sub_82361D08(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212e980
	if (!ctx.cr6.eq) goto loc_8212E980;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8212E980:
	// lwz r5,204(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8212e990
	if (!ctx.cr6.eq) goto loc_8212E990;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_8212E990:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x8212E9AC;
	sub_8236B2F8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212E9B4"))) PPC_WEAK_FUNC(sub_8212E9B4);
PPC_FUNC_IMPL(__imp__sub_8212E9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212E9B8"))) PPC_WEAK_FUNC(sub_8212E9B8);
PPC_FUNC_IMPL(__imp__sub_8212E9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8212E9C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,-1
	ctx.r27.s64 = -1;
	// lwz r29,4(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8212ea60
	if (!ctx.cr6.gt) goto loc_8212EA60;
loc_8212E9EC:
	// add r9,r29,r27
	ctx.r9.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// addze r31,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r31.s64 = temp.s64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8212bb98
	ctx.lr = 0x8212EA10;
	sub_8212BB98(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82223910
	ctx.lr = 0x8212EA1C;
	sub_82223910(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8212ea5c
	if (!ctx.cr6.eq) goto loc_8212EA5C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82223990
	ctx.lr = 0x8212EA34;
	sub_82223990(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8212ea48
	if (ctx.cr6.eq) goto loc_8212EA48;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x8212ea4c
	goto loc_8212EA4C;
loc_8212EA48:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8212EA4C:
	// subf r4,r27,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r27.s64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bgt cr6,0x8212e9ec
	if (ctx.cr6.gt) goto loc_8212E9EC;
	// b 0x8212ea60
	goto loc_8212EA60;
loc_8212EA5C:
	// li r25,1
	ctx.r25.s64 = 1;
loc_8212EA60:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8212eaa8
	if (ctx.cr6.eq) goto loc_8212EAA8;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ble cr6,0x8212eaa4
	if (!ctx.cr6.gt) goto loc_8212EAA4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8212bb98
	ctx.lr = 0x8212EA8C;
	sub_8212BB98(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82223950
	ctx.lr = 0x8212EA94;
	sub_82223950(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212eaa4
	if (ctx.cr6.eq) goto loc_8212EAA4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8212EAA4:
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
loc_8212EAA8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212EAB4"))) PPC_WEAK_FUNC(sub_8212EAB4);
PPC_FUNC_IMPL(__imp__sub_8212EAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212EAB8"))) PPC_WEAK_FUNC(sub_8212EAB8);
PPC_FUNC_IMPL(__imp__sub_8212EAB8) {
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
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// li r6,2
	ctx.r6.s64 = 2;
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EAF0;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EB08;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EB20;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EB38;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EB50;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EB68;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EB80;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EB98;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EBB0;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EBC8;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,45
	ctx.r4.s64 = ctx.r31.s64 + 45;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EBE0;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,46
	ctx.r4.s64 = ctx.r31.s64 + 46;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EBF8;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,47
	ctx.r4.s64 = ctx.r31.s64 + 47;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EC10;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EC28;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,49
	ctx.r4.s64 = ctx.r31.s64 + 49;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EC40;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,50
	ctx.r4.s64 = ctx.r31.s64 + 50;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EC58;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,51
	ctx.r4.s64 = ctx.r31.s64 + 51;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EC70;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EC88;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,53
	ctx.r4.s64 = ctx.r31.s64 + 53;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212ECA0;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,54
	ctx.r4.s64 = ctx.r31.s64 + 54;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212ECB8;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,55
	ctx.r4.s64 = ctx.r31.s64 + 55;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212ECD0;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212ECE8;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,57
	ctx.r4.s64 = ctx.r31.s64 + 57;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212ED00;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,58
	ctx.r4.s64 = ctx.r31.s64 + 58;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212ED18;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,59
	ctx.r4.s64 = ctx.r31.s64 + 59;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212ED30;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212ED48;
	sub_820BF2D8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// addi r4,r31,61
	ctx.r4.s64 = ctx.r31.s64 + 61;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212ED60;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,62
	ctx.r4.s64 = ctx.r31.s64 + 62;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212ED78;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,63
	ctx.r4.s64 = ctx.r31.s64 + 63;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212ED90;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EDA8;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,65
	ctx.r4.s64 = ctx.r31.s64 + 65;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EDC0;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,66
	ctx.r4.s64 = ctx.r31.s64 + 66;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EDD8;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,67
	ctx.r4.s64 = ctx.r31.s64 + 67;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EDF0;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EE08;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,69
	ctx.r4.s64 = ctx.r31.s64 + 69;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EE20;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,70
	ctx.r4.s64 = ctx.r31.s64 + 70;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EE38;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,71
	ctx.r4.s64 = ctx.r31.s64 + 71;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EE50;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EE68;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,73
	ctx.r4.s64 = ctx.r31.s64 + 73;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EE80;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,74
	ctx.r4.s64 = ctx.r31.s64 + 74;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EE98;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,75
	ctx.r4.s64 = ctx.r31.s64 + 75;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EEB0;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EEC8;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,77
	ctx.r4.s64 = ctx.r31.s64 + 77;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EEE0;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,78
	ctx.r4.s64 = ctx.r31.s64 + 78;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EEF8;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EF10;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8212EF28;
	sub_820BF2D8(ctx, base);
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

__attribute__((alias("__imp__sub_8212EF40"))) PPC_WEAK_FUNC(sub_8212EF40);
PPC_FUNC_IMPL(__imp__sub_8212EF40) {
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
	// bl 0x82122800
	ctx.lr = 0x8212EF50;
	sub_82122800(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,248(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// stfs f0,288(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// stw r9,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r9.u32);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// stw r10,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r10.u32);
	// stb r11,269(r3)
	PPC_STORE_U8(ctx.r3.u32 + 269, ctx.r11.u8);
	// stb r11,270(r3)
	PPC_STORE_U8(ctx.r3.u32 + 270, ctx.r11.u8);
	// stb r11,271(r3)
	PPC_STORE_U8(ctx.r3.u32 + 271, ctx.r11.u8);
	// stb r11,272(r3)
	PPC_STORE_U8(ctx.r3.u32 + 272, ctx.r11.u8);
	// stb r11,273(r3)
	PPC_STORE_U8(ctx.r3.u32 + 273, ctx.r11.u8);
	// stw r10,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r10.u32);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// stw r9,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r9.u32);
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// stb r11,309(r3)
	PPC_STORE_U8(ctx.r3.u32 + 309, ctx.r11.u8);
	// stb r11,310(r3)
	PPC_STORE_U8(ctx.r3.u32 + 310, ctx.r11.u8);
	// stb r11,311(r3)
	PPC_STORE_U8(ctx.r3.u32 + 311, ctx.r11.u8);
	// stb r11,312(r3)
	PPC_STORE_U8(ctx.r3.u32 + 312, ctx.r11.u8);
	// stb r11,313(r3)
	PPC_STORE_U8(ctx.r3.u32 + 313, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8212EFDC"))) PPC_WEAK_FUNC(sub_8212EFDC);
PPC_FUNC_IMPL(__imp__sub_8212EFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212EFE0"))) PPC_WEAK_FUNC(sub_8212EFE0);
PPC_FUNC_IMPL(__imp__sub_8212EFE0) {
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
	// addi r30,r3,236
	ctx.r30.s64 = ctx.r3.s64 + 236;
	// li r31,2
	ctx.r31.s64 = 2;
loc_8212EFFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821241c8
	ctx.lr = 0x8212F004;
	sub_821241C8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8212effc
	if (!ctx.cr6.eq) goto loc_8212EFFC;
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

__attribute__((alias("__imp__sub_8212F02C"))) PPC_WEAK_FUNC(sub_8212F02C);
PPC_FUNC_IMPL(__imp__sub_8212F02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212F030"))) PPC_WEAK_FUNC(sub_8212F030);
PPC_FUNC_IMPL(__imp__sub_8212F030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8212F038;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212F054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212f15c
	if (ctx.cr6.eq) goto loc_8212F15C;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// addi r26,r11,28544
	ctx.r26.s64 = ctx.r11.s64 + 28544;
	// ori r7,r8,37004
	ctx.r7.u64 = ctx.r8.u64 | 37004;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r11,r26,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212f15c
	if (!ctx.cr6.gt) goto loc_8212F15C;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addis r10,r26,10
	ctx.r10.s64 = ctx.r26.s64 + 655360;
	// addi r27,r11,26080
	ctx.r27.s64 = ctx.r11.s64 + 26080;
	// lis r6,0
	ctx.r6.s64 = 0;
	// addis r11,r27,3
	ctx.r11.s64 = ctx.r27.s64 + 196608;
	// addi r30,r10,-808
	ctx.r30.s64 = ctx.r10.s64 + -808;
	// addi r29,r11,-11424
	ctx.r29.s64 = ctx.r11.s64 + -11424;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r28,269
	ctx.r28.s64 = ctx.r28.s64 + 269;
	// ori r25,r6,37344
	ctx.r25.u64 = ctx.r6.u64 | 37344;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
loc_8212F0AC:
	// extsb r3,r31
	ctx.r3.s64 = ctx.r31.s8;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r11,r27,2585
	ctx.r11.s64 = ctx.r27.s64 + 2585;
	// rlwinm r10,r5,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r27,1144
	ctx.r10.s64 = ctx.r27.s64 + 1144;
	// lbzx r9,r3,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// mulli r11,r8,360
	ctx.r11.s64 = ctx.r8.s64 * 360;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8212f0e0
	if (!ctx.cr6.eq) goto loc_8212F0E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212F0E0:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8212f110
	if (ctx.cr6.eq) goto loc_8212F110;
	// lbz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8212f138
	if (!ctx.cr6.eq) goto loc_8212F138;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8212f134
	goto loc_8212F134;
loc_8212F110:
	// bl 0x8210b978
	ctx.lr = 0x8212F114;
	sub_8210B978(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x8212f138
	if (ctx.cr6.eq) goto loc_8212F138;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8212F134:
	// bctrl 
	ctx.lr = 0x8212F138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212F138:
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r6,r7,37004
	ctx.r6.u64 = ctx.r7.u64 | 37004;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// addi r29,r29,11920
	ctx.r29.s64 = ctx.r29.s64 + 11920;
	// lwzx r11,r26,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r6.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212f0ac
	if (ctx.cr6.lt) goto loc_8212F0AC;
loc_8212F15C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212F168"))) PPC_WEAK_FUNC(sub_8212F168);
PPC_FUNC_IMPL(__imp__sub_8212F168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad8
	ctx.lr = 0x8212F170;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r30,13280
	ctx.r31.s64 = ctx.r30.s64 + 13280;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// bl 0x820c5988
	ctx.lr = 0x8212F198;
	sub_820C5988(ctx, base);
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// li r20,0
	ctx.r20.s64 = 0;
	// lfs f13,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f12,100(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lwz r11,15328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r22,r11,4864
	ctx.r22.s64 = ctx.r11.s64 + 4864;
	// bne cr6,0x8212f52c
	if (!ctx.cr6.eq) goto loc_8212F52C;
	// lwz r31,19168(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 19168);
	// li r8,1
	ctx.r8.s64 = 1;
	// lbz r10,15480(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 15480);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mulli r11,r31,1104
	ctx.r11.s64 = ctx.r31.s64 * 1104;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// add r28,r11,r22
	ctx.r28.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x8219cf20
	ctx.lr = 0x8212F1F8;
	sub_8219CF20(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r30,13696
	ctx.r3.s64 = ctx.r30.s64 + 13696;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x820bb2d8
	ctx.lr = 0x8212F208;
	sub_820BB2D8(ctx, base);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,508(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 508);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8212F22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r25,r11,26080
	ctx.r25.s64 = ctx.r11.s64 + 26080;
	// beq cr6,0x8212f2d4
	if (ctx.cr6.eq) goto loc_8212F2D4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,14368(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14368);
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r29,r11,236
	ctx.r29.s64 = ctx.r11.s64 + 236;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82124168
	ctx.lr = 0x8212F260;
	sub_82124168(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212f2d4
	if (ctx.cr6.eq) goto loc_8212F2D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82123f70
	ctx.lr = 0x8212F274;
	sub_82123F70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82188300
	ctx.lr = 0x8212F284;
	sub_82188300(ctx, base);
	// cmpwi cr6,r24,6
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 6, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// beq cr6,0x8212f294
	if (ctx.cr6.eq) goto loc_8212F294;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_8212F294:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r29,r11,-18560
	ctx.r29.s64 = ctx.r11.s64 + -18560;
	// lbz r11,15480(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 15480);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// addis r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 524288;
	// addi r3,r11,27712
	ctx.r3.s64 = ctx.r11.s64 + 27712;
	// bl 0x822aac58
	ctx.lr = 0x8212F2B0;
	sub_822AAC58(ctx, base);
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212f308
	if (ctx.cr6.eq) goto loc_8212F308;
	// cmpwi cr6,r24,6
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 6, ctx.xer);
	// beq cr6,0x8212f308
	if (ctx.cr6.eq) goto loc_8212F308;
	// addis r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 524288;
	// addi r3,r11,27712
	ctx.r3.s64 = ctx.r11.s64 + 27712;
	// bl 0x822aad20
	ctx.lr = 0x8212F2D0;
	sub_822AAD20(ctx, base);
	// b 0x8212f308
	goto loc_8212F308;
loc_8212F2D4:
	// lbz r9,15219(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 15219);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212f308
	if (ctx.cr6.eq) goto loc_8212F308;
	// addis r10,r25,3
	ctx.r10.s64 = ctx.r25.s64 + 196608;
	// mulli r11,r31,11920
	ctx.r11.s64 = ctx.r31.s64 * 11920;
	// addi r10,r10,-11424
	ctx.r10.s64 = ctx.r10.s64 + -11424;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,11
	ctx.r4.s64 = 11;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8212F308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212F308:
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// mulli r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 * 200;
	// addi r10,r10,-1264
	ctx.r10.s64 = ctx.r10.s64 + -1264;
	// addi r6,r10,24
	ctx.r6.s64 = ctx.r10.s64 + 24;
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r8,r4,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8212f374
	if (ctx.cr6.eq) goto loc_8212F374;
	// mulli r9,r31,50
	ctx.r9.s64 = ctx.r31.s64 * 50;
	// addi r7,r10,112
	ctx.r7.s64 = ctx.r10.s64 + 112;
	// add r6,r9,r24
	ctx.r6.u64 = ctx.r9.u64 + ctx.r24.u64;
	// addi r8,r10,160
	ctx.r8.s64 = ctx.r10.s64 + 160;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r23,24
	ctx.r5.u64 = ctx.r23.u32 & 0xFF;
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r4,r6,1
	ctx.r4.s64 = ctx.r6.s64 + 1;
	// stwx r4,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// stwx r3,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r3.u32);
	// beq cr6,0x8212f374
	if (ctx.cr6.eq) goto loc_8212F374;
	// addi r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 + 132;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8212F374:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821041a8
	ctx.lr = 0x8212F37C;
	sub_821041A8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8212f508
	if (!ctx.cr6.eq) goto loc_8212F508;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r7,37
	ctx.r7.s64 = 2424832;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r6,r7,49147
	ctx.r6.u64 = ctx.r7.u64 | 49147;
	// lbzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8212f508
	if (!ctx.cr6.eq) goto loc_8212F508;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r3,r4,51969
	ctx.r3.u64 = ctx.r4.u64 | 51969;
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,-6648
	ctx.r31.s64 = ctx.r11.s64 + -6648;
	// beq cr6,0x8212f3dc
	if (ctx.cr6.eq) goto loc_8212F3DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ffa10
	ctx.lr = 0x8212F3D0;
	sub_820FFA10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fe130
	ctx.lr = 0x8212F3DC;
	sub_820FE130(ctx, base);
loc_8212F3DC:
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212f410
	if (ctx.cr6.eq) goto loc_8212F410;
	// lwz r11,208(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 208);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r11,208(r26)
	PPC_STORE_U32(ctx.r26.u32 + 208, ctx.r11.u32);
	// blt cr6,0x8212f408
	if (ctx.cr6.lt) goto loc_8212F408;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fe130
	ctx.lr = 0x8212F408;
	sub_820FE130(ctx, base);
loc_8212F408:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb3d8
	ctx.lr = 0x8212F410;
	sub_820FB3D8(ctx, base);
loc_8212F410:
	// cmplwi cr6,r24,8
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 8, ctx.xer);
	// bgt cr6,0x8212f4d0
	if (ctx.cr6.gt) goto loc_8212F4D0;
	// lis r12,-32237
	ctx.r12.s64 = -2112684032;
	// addi r12,r12,-3024
	ctx.r12.s64 = ctx.r12.s64 + -3024;
	// rlwinm r0,r24,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r24.u64) {
	case 0:
		goto loc_8212F4C8;
	case 1:
		goto loc_8212F454;
	case 2:
		goto loc_8212F460;
	case 3:
		goto loc_8212F46C;
	case 4:
		goto loc_8212F4C8;
	case 5:
		goto loc_8212F478;
	case 6:
		goto loc_8212F4BC;
	case 7:
		goto loc_8212F484;
	case 8:
		goto loc_8212F4B0;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-2872(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2872);
	// lwz r16,-2988(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2988);
	// lwz r16,-2976(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2976);
	// lwz r16,-2964(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2964);
	// lwz r16,-2872(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2872);
	// lwz r16,-2952(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2952);
	// lwz r16,-2884(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2884);
	// lwz r16,-2940(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2940);
	// lwz r16,-2896(r18)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r18.u32 + -2896);
loc_8212F454:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb398
	ctx.lr = 0x8212F45C;
	sub_820FB398(ctx, base);
	// b 0x8212f4d0
	goto loc_8212F4D0;
loc_8212F460:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb3a8
	ctx.lr = 0x8212F468;
	sub_820FB3A8(ctx, base);
	// b 0x8212f4d0
	goto loc_8212F4D0;
loc_8212F46C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb378
	ctx.lr = 0x8212F474;
	sub_820FB378(ctx, base);
	// b 0x8212f4d0
	goto loc_8212F4D0;
loc_8212F478:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb388
	ctx.lr = 0x8212F480;
	sub_820FB388(ctx, base);
	// b 0x8212f4d0
	goto loc_8212F4D0;
loc_8212F484:
	// lwz r11,204(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stw r11,204(r26)
	PPC_STORE_U32(ctx.r26.u32 + 204, ctx.r11.u32);
	// blt cr6,0x8212f4a4
	if (ctx.cr6.lt) goto loc_8212F4A4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fe130
	ctx.lr = 0x8212F4A4;
	sub_820FE130(ctx, base);
loc_8212F4A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb3b8
	ctx.lr = 0x8212F4AC;
	sub_820FB3B8(ctx, base);
	// b 0x8212f4d0
	goto loc_8212F4D0;
loc_8212F4B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb3c8
	ctx.lr = 0x8212F4B8;
	sub_820FB3C8(ctx, base);
	// b 0x8212f4d0
	goto loc_8212F4D0;
loc_8212F4BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb368
	ctx.lr = 0x8212F4C4;
	sub_820FB368(ctx, base);
	// b 0x8212f4d0
	goto loc_8212F4D0;
loc_8212F4C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb358
	ctx.lr = 0x8212F4D0;
	sub_820FB358(ctx, base);
loc_8212F4D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb248
	ctx.lr = 0x8212F4D8;
	sub_820FB248(ctx, base);
	// cmplwi cr6,r3,250
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 250, ctx.xer);
	// blt cr6,0x8212f4ec
	if (ctx.cr6.lt) goto loc_8212F4EC;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fe130
	ctx.lr = 0x8212F4EC;
	sub_820FE130(ctx, base);
loc_8212F4EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fb248
	ctx.lr = 0x8212F4F4;
	sub_820FB248(ctx, base);
	// cmplwi cr6,r3,1000
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1000, ctx.xer);
	// blt cr6,0x8212f508
	if (ctx.cr6.lt) goto loc_8212F508;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fe130
	ctx.lr = 0x8212F508;
	sub_820FE130(ctx, base);
loc_8212F508:
	// lwz r9,15328(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15328);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8212f52c
	if (!ctx.cr6.eq) goto loc_8212F52C;
	// clrlwi r8,r23,24
	ctx.r8.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8212f52c
	if (ctx.cr6.eq) goto loc_8212F52C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,15552
	ctx.r3.s64 = ctx.r30.s64 + 15552;
	// bl 0x820a7f88
	ctx.lr = 0x8212F52C;
	sub_820A7F88(ctx, base);
loc_8212F52C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,15328(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15328);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r31,r11,23504
	ctx.r31.s64 = ctx.r11.s64 + 23504;
	// lfs f31,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x8212f60c
	if (!ctx.cr6.eq) goto loc_8212F60C;
	// lwz r6,15328(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15328);
	// lwz r29,19168(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19168);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x8212f5d4
	if (!ctx.cr6.eq) goto loc_8212F5D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30956
	ctx.r4.s64 = ctx.r11.s64 + -30956;
	// bl 0x8210fcf8
	ctx.lr = 0x8212F568;
	sub_8210FCF8(ctx, base);
	// addi r11,r30,15424
	ctx.r11.s64 = ctx.r30.s64 + 15424;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r20,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r20.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bne cr6,0x8212f584
	if (!ctx.cr6.eq) goto loc_8212F584;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_8212F584:
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r3,r26,324
	ctx.r3.s64 = ctx.r26.s64 + 324;
	// bl 0x8236b2f8
	ctx.lr = 0x8212F5A0;
	sub_8236B2F8(ctx, base);
	// mulli r11,r29,1104
	ctx.r11.s64 = ctx.r29.s64 * 1104;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,174
	ctx.r4.s64 = 174;
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bl 0x8219c750
	ctx.lr = 0x8212F5D0;
	sub_8219C750(ctx, base);
	// b 0x8212f5f4
	goto loc_8212F5F4;
loc_8212F5D4:
	// mulli r11,r29,1104
	ctx.r11.s64 = ctx.r29.s64 * 1104;
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8219cf20
	ctx.lr = 0x8212F5F4;
	sub_8219CF20(ctx, base);
loc_8212F5F4:
	// lwz r5,15328(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15328);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8212f60c
	if (!ctx.cr6.eq) goto loc_8212F60C;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r30,15552
	ctx.r3.s64 = ctx.r30.s64 + 15552;
	// bl 0x820a7f88
	ctx.lr = 0x8212F60C;
	sub_820A7F88(ctx, base);
loc_8212F60C:
	// lwz r4,15328(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15328);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8212f778
	if (!ctx.cr6.eq) goto loc_8212F778;
	// lwz r3,15328(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 15328);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8212f778
	if (!ctx.cr6.eq) goto loc_8212F778;
	// lbz r11,15480(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 15480);
	// addi r3,r30,13696
	ctx.r3.s64 = ctx.r30.s64 + 13696;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x820bb2d8
	ctx.lr = 0x8212F634;
	sub_820BB2D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212f6ac
	if (ctx.cr6.eq) goto loc_8212F6AC;
	// addi r9,r27,15424
	ctx.r9.s64 = ctx.r27.s64 + 15424;
	// addi r8,r30,15424
	ctx.r8.s64 = ctx.r30.s64 + 15424;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-31000
	ctx.r4.s64 = ctx.r11.s64 + -31000;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x8212F660;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r3,r26,580
	ctx.r3.s64 = ctx.r26.s64 + 580;
	// bl 0x8220bcf0
	ctx.lr = 0x8212F674;
	sub_8220BCF0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8219c750
	ctx.lr = 0x8212F6A0;
	sub_8219C750(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8259bb28
	__restgprlr_20(ctx, base);
	return;
loc_8212F6AC:
	// cmpwi cr6,r24,7
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 7, ctx.xer);
	// bne cr6,0x8212f71c
	if (!ctx.cr6.eq) goto loc_8212F71C;
	// addi r7,r27,15424
	ctx.r7.s64 = ctx.r27.s64 + 15424;
	// addi r6,r30,15424
	ctx.r6.s64 = ctx.r30.s64 + 15424;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-31040
	ctx.r4.s64 = ctx.r11.s64 + -31040;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x8212F6D0;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r3,r26,836
	ctx.r3.s64 = ctx.r26.s64 + 836;
	// bl 0x8220bcf0
	ctx.lr = 0x8212F6E4;
	sub_8220BCF0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,119
	ctx.r4.s64 = 119;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8219c750
	ctx.lr = 0x8212F710;
	sub_8219C750(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8259bb28
	__restgprlr_20(ctx, base);
	return;
loc_8212F71C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r27,15424
	ctx.r5.s64 = ctx.r27.s64 + 15424;
	// addi r4,r11,-31076
	ctx.r4.s64 = ctx.r11.s64 + -31076;
	// addi r11,r30,15424
	ctx.r11.s64 = ctx.r30.s64 + 15424;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x8212F738;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r3,r26,1092
	ctx.r3.s64 = ctx.r26.s64 + 1092;
	// bl 0x8220bcf0
	ctx.lr = 0x8212F74C;
	sub_8220BCF0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,118
	ctx.r4.s64 = 118;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8219c750
	ctx.lr = 0x8212F778;
	sub_8219C750(ctx, base);
loc_8212F778:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8259bb28
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8212F784"))) PPC_WEAK_FUNC(sub_8212F784);
PPC_FUNC_IMPL(__imp__sub_8212F784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8212F788"))) PPC_WEAK_FUNC(sub_8212F788);
PPC_FUNC_IMPL(__imp__sub_8212F788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8212F790;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212F7B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82361d08
	ctx.lr = 0x8212F7C4;
	sub_82361D08(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x8212F7D4;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,128
	ctx.r9.s64 = 128;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// sth r30,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r30.u16);
	// bl 0x8236b2f8
	ctx.lr = 0x8212F804;
	sub_8236B2F8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r11,4864
	ctx.r3.s64 = ctx.r11.s64 + 4864;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8219c750
	ctx.lr = 0x8212F838;
	sub_8219C750(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}


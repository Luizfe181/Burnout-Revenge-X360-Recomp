#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821A1C40"))) PPC_WEAK_FUNC(sub_821A1C40);
PPC_FUNC_IMPL(__imp__sub_821A1C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821A1C48;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A1C74;
	sub_821931F8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,2212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821a1ca0
	if (!ctx.cr6.eq) goto loc_821A1CA0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f0,-1528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_821A1CA0:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lbz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// mulli r10,r31,19200
	ctx.r10.s64 = ctx.r31.s64 * 19200;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// extsh r28,r6
	ctx.r28.s64 = ctx.r6.s16;
	// addis r9,r11,35
	ctx.r9.s64 = ctx.r11.s64 + 2293760;
	// mulli r11,r5,1104
	ctx.r11.s64 = ctx.r5.s64 * 1104;
	// addi r9,r9,-28496
	ctx.r9.s64 = ctx.r9.s64 + -28496;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r27,r11,1008
	ctx.r27.s64 = ctx.r11.s64 + 1008;
	// addi r29,r30,44
	ctx.r29.s64 = ctx.r30.s64 + 44;
	// stw r4,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r4.u32);
loc_821A1CE4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82353538
	ctx.lr = 0x821A1CF4;
	sub_82353538(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x821a1ce4
	if (!ctx.cr6.lt) goto loc_821A1CE4;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r9,r11,13400
	ctx.r9.s64 = ctx.r11.s64 + 13400;
	// lwz r11,328(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a1d28
	if (ctx.cr6.eq) goto loc_821A1D28;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r3,60(r30)
	PPC_STORE_U16(ctx.r30.u32 + 60, ctx.r3.u16);
	// b 0x821a1d34
	goto loc_821A1D34;
loc_821A1D28:
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lhz r11,31068(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31068);
	// sth r11,60(r30)
	PPC_STORE_U16(ctx.r30.u32 + 60, ctx.r11.u16);
loc_821A1D34:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lwz r28,56(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lwz r27,36(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r11,304
	ctx.r11.s64 = ctx.r11.s64 + 304;
	// addi r26,r8,-7992
	ctx.r26.s64 = ctx.r8.s64 + -7992;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r27,32
	ctx.r31.s64 = ctx.r27.s64 + 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// stb r11,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r11.u8);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// bl 0x82361f20
	ctx.lr = 0x821A1D84;
	sub_82361F20(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// addi r10,r11,7920
	ctx.r10.s64 = ctx.r11.s64 + 7920;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// beq cr6,0x821a1dc0
	if (ctx.cr6.eq) goto loc_821A1DC0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x821a1dfc
	goto loc_821A1DFC;
loc_821A1DC0:
	// rlwinm r3,r9,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a1ddc
	if (ctx.cr6.eq) goto loc_821A1DDC;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x821a1dfc
	goto loc_821A1DFC;
loc_821A1DDC:
	// rlwinm r11,r9,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// beq cr6,0x821a1df8
	if (ctx.cr6.eq) goto loc_821A1DF8;
	// lwz r29,36(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x821a1dfc
	goto loc_821A1DFC;
loc_821A1DF8:
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_821A1DFC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821a1e20
	if (ctx.cr6.eq) goto loc_821A1E20;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351f08
	ctx.lr = 0x821A1E1C;
	sub_82351F08(ctx, base);
	// b 0x821a1e44
	goto loc_821A1E44;
loc_821A1E20:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82361f20
	ctx.lr = 0x821A1E28;
	sub_82361F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a1e38
	if (!ctx.cr6.eq) goto loc_821A1E38;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x821a1e44
	goto loc_821A1E44;
loc_821A1E38:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A1E44;
	sub_82351E40(ctx, base);
loc_821A1E44:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// addi r29,r10,-17500
	ctx.r29.s64 = ctx.r10.s64 + -17500;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f0,1788(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1788);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r31,r11,-4000
	ctx.r31.s64 = ctx.r11.s64 + -4000;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A1ED4;
	sub_82352710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82195890
	ctx.lr = 0x821A1EDC;
	sub_82195890(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f0,196(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f2,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-1640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1640);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82194d10
	ctx.lr = 0x821A1F0C;
	sub_82194D10(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A1F1C"))) PPC_WEAK_FUNC(sub_821A1F1C);
PPC_FUNC_IMPL(__imp__sub_821A1F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A1F20"))) PPC_WEAK_FUNC(sub_821A1F20);
PPC_FUNC_IMPL(__imp__sub_821A1F20) {
	PPC_FUNC_PROLOGUE();
	// b 0x82195890
	sub_82195890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A1F24"))) PPC_WEAK_FUNC(sub_821A1F24);
PPC_FUNC_IMPL(__imp__sub_821A1F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A1F28"))) PPC_WEAK_FUNC(sub_821A1F28);
PPC_FUNC_IMPL(__imp__sub_821A1F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821A1F30;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x821041a8
	ctx.lr = 0x821A1F54;
	sub_821041A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821a1f88
	if (ctx.cr6.eq) goto loc_821A1F88;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f0,-1528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stfs f0,19124(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 19124, temp.u32);
	// b 0x821a1f94
	goto loc_821A1F94;
loc_821A1F88:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stfs f31,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f31,19124(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 19124, temp.u32);
loc_821A1F94:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A1FB4;
	sub_821931F8(ctx, base);
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lhz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// mulli r10,r8,1104
	ctx.r10.s64 = ctx.r8.s64 * 1104;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// addi r29,r10,1008
	ctx.r29.s64 = ctx.r10.s64 + 1008;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82353538
	ctx.lr = 0x821A1FF4;
	sub_82353538(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// bl 0x82353538
	ctx.lr = 0x821A200C;
	sub_82353538(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r4,r10,-4000
	ctx.r4.s64 = ctx.r10.s64 + -4000;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x82195cf8
	ctx.lr = 0x821A2024;
	sub_82195CF8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r10,20024
	ctx.r6.s64 = ctx.r10.s64 + 20024;
	// lfs f1,-17304(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17304);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// ld r11,24736(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24736);
	// stfs f1,76(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// bl 0x82195df8
	ctx.lr = 0x821A2050;
	sub_82195DF8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A2074"))) PPC_WEAK_FUNC(sub_821A2074);
PPC_FUNC_IMPL(__imp__sub_821A2074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A2078"))) PPC_WEAK_FUNC(sub_821A2078);
PPC_FUNC_IMPL(__imp__sub_821A2078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821A2080;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lbz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// extsb r30,r8
	ctx.r30.s64 = ctx.r8.s8;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,376(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 376);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821A20C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r4,r5,51969
	ctx.r4.u64 = ctx.r5.u64 | 51969;
	// lbzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a210c
	if (ctx.cr6.eq) goto loc_821A210C;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// rlwinm r10,r30,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 9) & 0xFFFFFE00;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r9,r11,-29312
	ctx.r9.s64 = ctx.r11.s64 + -29312;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfsx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f2,f12,f1
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// b 0x821a2154
	goto loc_821A2154;
loc_821A210C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f11,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f1,f11
	ctx.cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// lfd f0,-14616(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -14616);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-17304(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17304);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f13,6088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6088);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f10,f0,f1
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// ble cr6,0x821a2154
	if (!ctx.cr6.gt) goto loc_821A2154;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821a2154
	if (ctx.cr6.eq) goto loc_821A2154;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f2,36(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 36, temp.u32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 40, temp.u32);
loc_821A2154:
	// stfs f1,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821a217c
	if (ctx.cr6.eq) goto loc_821A217C;
	// addi r11,r29,32
	ctx.r11.s64 = ctx.r29.s64 + 32;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-14740(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14740);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f8,f31,f0,f9
	ctx.f8.f64 = double(float(-(ctx.f31.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821A217C:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,20048
	ctx.r6.s64 = ctx.r11.s64 + 20048;
	// bl 0x82195df8
	ctx.lr = 0x821A218C;
	sub_82195DF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A2198"))) PPC_WEAK_FUNC(sub_821A2198);
PPC_FUNC_IMPL(__imp__sub_821A2198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x821A21A0;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r11,22
	ctx.r11.s64 = 22;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r7,692(r31)
	PPC_STORE_U8(ctx.r31.u32 + 692, ctx.r7.u8);
	// beq cr6,0x821a21d4
	if (ctx.cr6.eq) goto loc_821A21D4;
	// li r11,25
	ctx.r11.s64 = 25;
loc_821A21D4:
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A21EC;
	sub_821931F8(ctx, base);
	// lhz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// lbz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// addi r25,r10,1
	ctx.r25.s64 = ctx.r10.s64 + 1;
	// mulli r10,r6,1104
	ctx.r10.s64 = ctx.r6.s64 * 1104;
	// lwz r7,2212(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// addi r24,r11,1008
	ctx.r24.s64 = ctx.r11.s64 + 1008;
	// bne cr6,0x821a2238
	if (!ctx.cr6.eq) goto loc_821A2238;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-1528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r4.u64);
loc_821A2238:
	// addi r9,r31,416
	ctx.r9.s64 = ctx.r31.s64 + 416;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r8,120
	ctx.r8.s64 = 120;
loc_821A224C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r26,-40(r11)
	PPC_STORE_U32(ctx.r11.u32 + -40, ctx.r26.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// bne cr6,0x821a224c
	if (!ctx.cr6.eq) goto loc_821A224C;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
loc_821A2274:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82353538
	ctx.lr = 0x821A2284;
	sub_82353538(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821a2274
	if (!ctx.cr6.lt) goto loc_821A2274;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lbz r3,692(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 692);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r28,r11,-17256
	ctx.r28.s64 = ctx.r11.s64 + -17256;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r27,r11,20048
	ctx.r27.s64 = ctx.r11.s64 + 20048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,-12136(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12136);
	ctx.f29.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f30,-14496(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14496);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821a2358
	if (ctx.cr6.eq) goto loc_821A2358;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
	// lfs f0,24816(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24816);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
loc_821A22E0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82353538
	ctx.lr = 0x821A22F0;
	sub_82353538(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821a22e0
	if (!ctx.cr6.lt) goto loc_821A22E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,-116(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -116);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f1,-240(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -240);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82194d10
	ctx.lr = 0x821A2328;
	sub_82194D10(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// rlwinm r8,r9,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// addi r7,r11,-29256
	ctx.r7.s64 = ctx.r11.s64 + -29256;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r6,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r6.u32);
	// bl 0x82196d60
	ctx.lr = 0x821A2354;
	sub_82196D60(ctx, base);
	// b 0x821a2368
	goto loc_821A2368;
loc_821A2358:
	// stfs f31,684(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
	// stw r26,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// stw r26,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r26.u32);
	// stw r26,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r26.u32);
loc_821A2368:
	// lfs f13,684(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lfs f0,-116(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -116);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f1,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82194d10
	ctx.lr = 0x821A2394;
	sub_82194D10(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f31,680(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// stw r26,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r26.u32);
	// stw r26,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r26.u32);
	// bl 0x82359d08
	ctx.lr = 0x821A23A8;
	sub_82359D08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// lfs f13,19344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19344);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfd f5,88(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fdivs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f2.f64));
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// bl 0x82196420
	ctx.lr = 0x821A2438;
	sub_82196420(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A2450"))) PPC_WEAK_FUNC(sub_821A2450);
PPC_FUNC_IMPL(__imp__sub_821A2450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82196750
	ctx.lr = 0x821A2470;
	sub_82196750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82196420
	ctx.lr = 0x821A247C;
	sub_82196420(ctx, base);
	// lbz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a24c0
	if (ctx.cr6.eq) goto loc_821A24C0;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lwz r6,688(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// rlwinm r8,r9,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// addi r7,r11,-29256
	ctx.r7.s64 = ctx.r11.s64 + -29256;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821a24c0
	if (ctx.cr6.eq) goto loc_821A24C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r11.u32);
	// bl 0x82196d60
	ctx.lr = 0x821A24C0;
	sub_82196D60(ctx, base);
loc_821A24C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A24D8"))) PPC_WEAK_FUNC(sub_821A24D8);
PPC_FUNC_IMPL(__imp__sub_821A24D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821A24E0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A2514;
	sub_821931F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,2212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821a2540
	if (!ctx.cr6.eq) goto loc_821A2540;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-1528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_821A2540:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r29,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r29.u8);
	// mulli r10,r30,19200
	ctx.r10.s64 = ctx.r30.s64 * 19200;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// addi r11,r11,-28496
	ctx.r11.s64 = ctx.r11.s64 + -28496;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// bl 0x82197000
	ctx.lr = 0x821A2580;
	sub_82197000(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A2590"))) PPC_WEAK_FUNC(sub_821A2590);
PPC_FUNC_IMPL(__imp__sub_821A2590) {
	PPC_FUNC_PROLOGUE();
	// b 0x82197000
	sub_82197000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A2594"))) PPC_WEAK_FUNC(sub_821A2594);
PPC_FUNC_IMPL(__imp__sub_821A2594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A2598"))) PPC_WEAK_FUNC(sub_821A2598);
PPC_FUNC_IMPL(__imp__sub_821A2598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821A25A0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A25C8;
	sub_821931F8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lbz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// addi r26,r30,36
	ctx.r26.s64 = ctx.r30.s64 + 36;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,1
	ctx.r31.s64 = 1;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// lhz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// ld r11,24840(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24840);
	// extsh r28,r7
	ctx.r28.s64 = ctx.r7.s16;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// ld r11,24848(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24848);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// mulli r11,r8,1104
	ctx.r11.s64 = ctx.r8.s64 * 1104;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r27,r11,1008
	ctx.r27.s64 = ctx.r11.s64 + 1008;
loc_821A260C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82353538
	ctx.lr = 0x821A261C;
	sub_82353538(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x821a260c
	if (!ctx.cr6.lt) goto loc_821A260C;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,20176
	ctx.r11.s64 = ctx.r11.s64 + 20176;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// stb r29,72(r30)
	PPC_STORE_U8(ctx.r30.u32 + 72, ctx.r29.u8);
	// addi r27,r9,23504
	ctx.r27.s64 = ctx.r9.s64 + 23504;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// bl 0x82104858
	ctx.lr = 0x821A2668;
	sub_82104858(ctx, base);
	// addi r28,r30,40
	ctx.r28.s64 = ctx.r30.s64 + 40;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82361f50
	ctx.lr = 0x821A2678;
	sub_82361F50(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lwz r26,0(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r11,304
	ctx.r10.s64 = ctx.r11.s64 + 304;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r31,r26,32
	ctx.r31.s64 = ctx.r26.s64 + 32;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stb r29,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r29.u8);
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// stb r29,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r29.u8);
	// bl 0x82361f20
	ctx.lr = 0x821A26B4;
	sub_82361F20(ctx, base);
	// lbz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r7,8
	ctx.r7.s64 = 8;
	// ori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 | 1;
	// addi r9,r11,20080
	ctx.r9.s64 = ctx.r11.s64 + 20080;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r6,4
	ctx.r6.s64 = 4;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stb r10,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r10.u8);
	// clrlwi r5,r10,31
	ctx.r5.u64 = ctx.r10.u32 & 0x1;
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r25,r8,-3928
	ctx.r25.s64 = ctx.r8.s64 + -3928;
	// ld r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// stb r7,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r7.u8);
	// stb r6,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r6.u8);
	// beq cr6,0x821a2708
	if (ctx.cr6.eq) goto loc_821A2708;
	// lwz r29,24(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// b 0x821a273c
	goto loc_821A273C;
loc_821A2708:
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a2720
	if (ctx.cr6.eq) goto loc_821A2720;
	// lwz r29,32(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// b 0x821a273c
	goto loc_821A273C;
loc_821A2720:
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821a2738
	if (ctx.cr6.eq) goto loc_821A2738;
	// lwz r29,36(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// b 0x821a273c
	goto loc_821A273C;
loc_821A2738:
	// lwz r29,28(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
loc_821A273C:
	// lbz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r6,r7,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821a2764
	if (ctx.cr6.eq) goto loc_821A2764;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351f08
	ctx.lr = 0x821A2760;
	sub_82351F08(ctx, base);
	// b 0x821a2788
	goto loc_821A2788;
loc_821A2764:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82361f20
	ctx.lr = 0x821A276C;
	sub_82361F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a277c
	if (!ctx.cr6.eq) goto loc_821A277C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x821a2788
	goto loc_821A2788;
loc_821A277C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A2788;
	sub_82351E40(ctx, base);
loc_821A2788:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f9,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// addi r29,r10,-17372
	ctx.r29.s64 = ctx.r10.s64 + -17372;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r31,r11,20032
	ctx.r31.s64 = ctx.r11.s64 + 20032;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A2820;
	sub_82352710(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lfs f2,2176(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2176);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2180(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2180);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82194a40
	ctx.lr = 0x821A2838;
	sub_82194A40(ctx, base);
	// stfs f31,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A284C"))) PPC_WEAK_FUNC(sub_821A284C);
PPC_FUNC_IMPL(__imp__sub_821A284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A2850"))) PPC_WEAK_FUNC(sub_821A2850);
PPC_FUNC_IMPL(__imp__sub_821A2850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad8
	ctx.lr = 0x821A2858;
	__savegprlr_20(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A2888;
	sub_821931F8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r24,r11,-13600
	ctx.r24.s64 = ctx.r11.s64 + -13600;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// addi r29,r11,13400
	ctx.r29.s64 = ctx.r11.s64 + 13400;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// mulli r11,r9,1104
	ctx.r11.s64 = ctx.r9.s64 * 1104;
	// lwz r22,60(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r26,r11,1008
	ctx.r26.s64 = ctx.r11.s64 + 1008;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r21,r11,26384
	ctx.r21.s64 = ctx.r11.s64 + 26384;
loc_821A28C8:
	// addi r5,r27,2
	ctx.r5.s64 = ctx.r27.s64 + 2;
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d1b0
	ctx.lr = 0x821A28DC;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82361d08
	ctx.lr = 0x821A28EC;
	sub_82361D08(ctx, base);
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821a28fc
	if (!ctx.cr6.eq) goto loc_821A28FC;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_821A28FC:
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x821A2918;
	sub_8236B2F8(ctx, base);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r8,r24,24
	ctx.r8.s64 = ctx.r24.s64 + 24;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821a28c8
	if (ctx.cr6.lt) goto loc_821A28C8;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,2212(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2212);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x821a2958
	if (!ctx.cr6.eq) goto loc_821A2958;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-1528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r4.u64);
loc_821A2958:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r10,r25,19200
	ctx.r10.s64 = ctx.r25.s64 * 19200;
	// stb r23,1789(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1789, ctx.r23.u8);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r11,r11,-28496
	ctx.r11.s64 = ctx.r11.s64 + -28496;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// bl 0x82353538
	ctx.lr = 0x821A2990;
	sub_82353538(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r7,r11,31368
	ctx.r7.s64 = ctx.r11.s64 + 31368;
	// addi r6,r10,20080
	ctx.r6.s64 = ctx.r10.s64 + 20080;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r10,19368
	ctx.r5.s64 = ctx.r10.s64 + 19368;
	// addi r11,r11,20016
	ctx.r11.s64 = ctx.r11.s64 + 20016;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r28,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r28.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A29F0;
	sub_82352710(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r27,r31,32
	ctx.r27.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16271
	ctx.r8.u64 = ctx.r9.u64 | 16271;
	// stw r27,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r27.u32);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821a2ac8
	if (ctx.cr6.eq) goto loc_821A2AC8;
	// lhz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82353538
	ctx.lr = 0x821A2A30;
	sub_82353538(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r10,-14492
	ctx.r4.s64 = ctx.r10.s64 + -14492;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r3,r10,23504
	ctx.r3.s64 = ctx.r10.s64 + 23504;
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821A2A4C;
	sub_8210FCF8(ctx, base);
	// lhz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// stw r11,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r11.u32);
	// bl 0x82353538
	ctx.lr = 0x821A2A6C;
	sub_82353538(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// lfs f0,2864(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// extsb r7,r3
	ctx.r7.s64 = ctx.r3.s8;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r10,r7,1104
	ctx.r10.s64 = ctx.r7.s64 * 1104;
	// stfs f0,1408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1408, temp.u32);
	// stw r11,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r11.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r4,r9,3
	ctx.r4.s64 = ctx.r9.s64 + 3;
	// addi r3,r10,1008
	ctx.r3.s64 = ctx.r10.s64 + 1008;
	// bl 0x82353538
	ctx.lr = 0x821A2AA8;
	sub_82353538(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r30.u32);
	// stw r11,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
	// bl 0x82197e30
	ctx.lr = 0x821A2ABC;
	sub_82197E30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,2864(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82198098
	ctx.lr = 0x821A2AC8;
	sub_82198098(ctx, base);
loc_821A2AC8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,1740(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// bl 0x821874a0
	ctx.lr = 0x821A2AD4;
	sub_821874A0(ctx, base);
	// lwz r6,13368(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13368);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r20,1343(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1343, ctx.r20.u8);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// stw r30,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r30.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r30,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r30.u32);
	// lis r4,697
	ctx.r4.s64 = 45678592;
	// lfs f0,2864(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// ori r3,r4,55032
	ctx.r3.u64 = ctx.r4.u64 | 55032;
	// lfs f11,-1680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1680);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,1336(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1336, temp.u32);
	// lfs f12,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-698
	ctx.r11.s64 = -45744128;
	// ori r9,r11,10503
	ctx.r9.u64 = ctx.r11.u64 | 10503;
	// li r11,-1
	ctx.r11.s64 = -1;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f7,1316(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1316, temp.u32);
	// stw r3,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r3.u32);
	// stw r9,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r9.u32);
	// lwz r10,1388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stb r30,1790(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1790, ctx.r30.u8);
	// stw r30,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r30.u32);
	// std r8,1376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1376, ctx.r8.u64);
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f12,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f4,1412(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1412, temp.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stfs f13,1444(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1444, temp.u32);
	// stfs f0,1448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1448, temp.u32);
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// stfs f0,1452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1452, temp.u32);
	// stw r30,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r30.u32);
	// stb r11,1440(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1440, ctx.r11.u8);
	// stw r10,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r10.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stfs f13,1484(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1484, temp.u32);
	// stfs f0,1488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// stw r30,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r30.u32);
	// stfs f0,1492(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1492, temp.u32);
	// stw r30,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r30.u32);
	// stb r11,1480(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1480, ctx.r11.u8);
	// stw r10,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stfs f13,1524(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1524, temp.u32);
	// stfs f0,1528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1528, temp.u32);
	// stw r30,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r30.u32);
	// stfs f0,1532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1532, temp.u32);
	// stw r30,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r30.u32);
	// stb r11,1520(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1520, ctx.r11.u8);
	// stw r10,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r10.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stfs f13,1564(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
	// stfs f0,1568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1568, temp.u32);
	// stw r30,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r30.u32);
	// stfs f0,1572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1572, temp.u32);
	// stw r30,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r30.u32);
	// stb r11,1560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1560, ctx.r11.u8);
	// stw r10,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r10.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stfs f13,1604(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1604, temp.u32);
	// stfs f0,1608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1608, temp.u32);
	// stw r30,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r30.u32);
	// stfs f0,1612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1612, temp.u32);
	// stw r30,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r30.u32);
	// stb r11,1600(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1600, ctx.r11.u8);
	// stw r10,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r10.u32);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stfs f13,1644(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1644, temp.u32);
	// stfs f0,1648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1648, temp.u32);
	// stb r11,1640(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1640, ctx.r11.u8);
	// stfs f0,1652(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1652, temp.u32);
	// stw r30,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
	// stw r30,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stfs f0,1688(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1688, temp.u32);
	// stfs f0,1692(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1692, temp.u32);
	// stb r11,1680(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1680, ctx.r11.u8);
	// stfs f13,1684(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1684, temp.u32);
	// stw r30,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r30.u32);
	// stw r30,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r30.u32);
	// stw r10,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r10.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stfs f0,1728(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1728, temp.u32);
	// stfs f0,1732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1732, temp.u32);
	// stb r11,1720(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1720, ctx.r11.u8);
	// stfs f13,1724(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1724, temp.u32);
	// stw r30,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r30.u32);
	// stw r30,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r30.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r10.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r30.u32);
	// lfs f0,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// ld r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// stfs f0,1744(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1744, temp.u32);
	// stb r6,1788(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1788, ctx.r6.u8);
	// std r5,1760(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1760, ctx.r5.u64);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb28
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A2C94"))) PPC_WEAK_FUNC(sub_821A2C94);
PPC_FUNC_IMPL(__imp__sub_821A2C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A2C98"))) PPC_WEAK_FUNC(sub_821A2C98);
PPC_FUNC_IMPL(__imp__sub_821A2C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16271
	ctx.r9.u64 = ctx.r10.u64 | 16271;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821a2d1c
	if (ctx.cr6.eq) goto loc_821A2D1C;
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,1384(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// lfs f0,13376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,13372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13372);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,-17280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17280);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,0,r7
	PPC_STORE_U32(ctx.r7.u32, ctx.f10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821a2d10
	if (ctx.cr6.eq) goto loc_821A2D10;
	// stw r11,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r11.u32);
	// bl 0x82197e30
	ctx.lr = 0x821A2D10;
	sub_82197E30(ctx, base);
loc_821A2D10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82198098
	ctx.lr = 0x821A2D1C;
	sub_82198098(ctx, base);
loc_821A2D1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82191b78
	ctx.lr = 0x821A2D28;
	sub_82191B78(ctx, base);
	// lbz r5,1789(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1789);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a2d40
	if (ctx.cr6.eq) goto loc_821A2D40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82192bf0
	ctx.lr = 0x821A2D40;
	sub_82192BF0(ctx, base);
loc_821A2D40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A2D58"))) PPC_WEAK_FUNC(sub_821A2D58);
PPC_FUNC_IMPL(__imp__sub_821A2D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821A2D60;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A2D88;
	sub_821931F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,2212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821a2db4
	if (!ctx.cr6.eq) goto loc_821A2DB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-1528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_821A2DB4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lbz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lis r6,3
	ctx.r6.s64 = 196608;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,-18204
	ctx.r4.s64 = ctx.r11.s64 + -18204;
	// lhz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r5,r6,12432
	ctx.r5.u64 = ctx.r6.u64 | 12432;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// extsh r28,r9
	ctx.r28.s64 = ctx.r9.s16;
	// mulli r11,r11,1104
	ctx.r11.s64 = ctx.r11.s64 * 1104;
	// lwzx r3,r30,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r27,r11,1008
	ctx.r27.s64 = ctx.r11.s64 + 1008;
	// bl 0x820a58c8
	ctx.lr = 0x821A2DF4;
	sub_820A58C8(ctx, base);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// ori r7,r8,12432
	ctx.r7.u64 = ctx.r8.u64 | 12432;
	// addi r4,r11,-18188
	ctx.r4.s64 = ctx.r11.s64 + -18188;
	// lwzx r3,r30,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// bl 0x820a58c8
	ctx.lr = 0x821A2E10;
	sub_820A58C8(ctx, base);
	// lis r6,3
	ctx.r6.s64 = 196608;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// ori r5,r6,12432
	ctx.r5.u64 = ctx.r6.u64 | 12432;
	// addi r4,r11,-18172
	ctx.r4.s64 = ctx.r11.s64 + -18172;
	// lwzx r3,r30,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// bl 0x820a58c8
	ctx.lr = 0x821A2E2C;
	sub_820A58C8(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mulli r10,r29,19200
	ctx.r10.s64 = ctx.r29.s64 * 19200;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// li r30,2
	ctx.r30.s64 = 2;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r11,r11,-28496
	ctx.r11.s64 = ctx.r11.s64 + -28496;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
loc_821A2E54:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82353538
	ctx.lr = 0x821A2E64;
	sub_82353538(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821a2e54
	if (!ctx.cr6.eq) goto loc_821A2E54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82193068
	ctx.lr = 0x821A2E80;
	sub_82193068(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// bl 0x82198418
	ctx.lr = 0x821A2E94;
	sub_82198418(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A2EA0"))) PPC_WEAK_FUNC(sub_821A2EA0);
PPC_FUNC_IMPL(__imp__sub_821A2EA0) {
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
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,376(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 376);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821A2EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821a2f04
	if (!ctx.cr6.gt) goto loc_821A2F04;
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgt cr6,0x821a2f04
	if (ctx.cr6.gt) goto loc_821A2F04;
	// li r30,1
	ctx.r30.s64 = 1;
loc_821A2F04:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821a2f34
	if (ctx.cr6.eq) goto loc_821A2F34;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822b2b80
	ctx.lr = 0x821A2F24;
	sub_822B2B80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82198418
	ctx.lr = 0x821A2F30;
	sub_82198418(ctx, base);
	// b 0x821a2f80
	goto loc_821A2F80;
loc_821A2F34:
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// ori r5,r6,50560
	ctx.r5.u64 = ctx.r6.u64 | 50560;
	// lwzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821a2f5c
	if (!ctx.cr6.eq) goto loc_821A2F5C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821a2f6c
	goto loc_821A2F6C;
loc_821A2F5C:
	// addi r4,r11,14
	ctx.r4.s64 = ctx.r11.s64 + 14;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r3,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
loc_821A2F6C:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822b2780
	ctx.lr = 0x821A2F80;
	sub_822B2780(ctx, base);
loc_821A2F80:
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

__attribute__((alias("__imp__sub_821A2F98"))) PPC_WEAK_FUNC(sub_821A2F98);
PPC_FUNC_IMPL(__imp__sub_821A2F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821A2FA0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A2FCC;
	sub_821931F8(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lbz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// mulli r10,r30,19200
	ctx.r10.s64 = ctx.r30.s64 * 19200;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// extsh r28,r7
	ctx.r28.s64 = ctx.r7.s16;
	// addis r9,r11,35
	ctx.r9.s64 = ctx.r11.s64 + 2293760;
	// mulli r11,r6,1104
	ctx.r11.s64 = ctx.r6.s64 * 1104;
	// addi r9,r9,-28496
	ctx.r9.s64 = ctx.r9.s64 + -28496;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r27,r11,1008
	ctx.r27.s64 = ctx.r11.s64 + 1008;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
loc_821A3010:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82353538
	ctx.lr = 0x821A3020;
	sub_82353538(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821a3010
	if (!ctx.cr6.lt) goto loc_821A3010;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r9,r11,13400
	ctx.r9.s64 = ctx.r11.s64 + 13400;
	// lwz r11,328(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a3054
	if (ctx.cr6.eq) goto loc_821A3054;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r4,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r4.u16);
	// b 0x821a305c
	goto loc_821A305C;
loc_821A3054:
	// li r3,46
	ctx.r3.s64 = 46;
	// sth r3,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r3.u16);
loc_821A305C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lwz r28,56(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lwz r27,36(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,304
	ctx.r11.s64 = ctx.r11.s64 + 304;
	// addi r26,r8,-7992
	ctx.r26.s64 = ctx.r8.s64 + -7992;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r27,32
	ctx.r30.s64 = ctx.r27.s64 + 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// stb r11,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r11.u8);
	// stb r11,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r11.u8);
	// stb r11,23(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23, ctx.r11.u8);
	// stb r11,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r11.u8);
	// bl 0x82361f20
	ctx.lr = 0x821A30AC;
	sub_82361F20(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lbz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// addi r10,r11,7920
	ctx.r10.s64 = ctx.r11.s64 + 7920;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// beq cr6,0x821a30e8
	if (ctx.cr6.eq) goto loc_821A30E8;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x821a3124
	goto loc_821A3124;
loc_821A30E8:
	// rlwinm r3,r9,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a3104
	if (ctx.cr6.eq) goto loc_821A3104;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x821a3124
	goto loc_821A3124;
loc_821A3104:
	// rlwinm r11,r9,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// beq cr6,0x821a3120
	if (ctx.cr6.eq) goto loc_821A3120;
	// lwz r29,36(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x821a3124
	goto loc_821A3124;
loc_821A3120:
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_821A3124:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821a3148
	if (ctx.cr6.eq) goto loc_821A3148;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351f08
	ctx.lr = 0x821A3144;
	sub_82351F08(ctx, base);
	// b 0x821a316c
	goto loc_821A316C;
loc_821A3148:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82361f20
	ctx.lr = 0x821A3150;
	sub_82361F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a3160
	if (!ctx.cr6.eq) goto loc_821A3160;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x821a316c
	goto loc_821A316C;
loc_821A3160:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A316C;
	sub_82351E40(ctx, base);
loc_821A316C:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// addi r29,r10,-17372
	ctx.r29.s64 = ctx.r10.s64 + -17372;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f0,1660(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f31,16(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// addi r30,r11,20048
	ctx.r30.s64 = ctx.r11.s64 + 20048;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fneg f9,f0
	ctx.f9.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f0,-152(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -152);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A3200;
	sub_82352710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82198640
	ctx.lr = 0x821A3208;
	sub_82198640(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f0,68(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f2,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-1640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1640);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82194a40
	ctx.lr = 0x821A3238;
	sub_82194A40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A3248"))) PPC_WEAK_FUNC(sub_821A3248);
PPC_FUNC_IMPL(__imp__sub_821A3248) {
	PPC_FUNC_PROLOGUE();
	// b 0x82198640
	sub_82198640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A324C"))) PPC_WEAK_FUNC(sub_821A324C);
PPC_FUNC_IMPL(__imp__sub_821A324C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A3250"))) PPC_WEAK_FUNC(sub_821A3250);
PPC_FUNC_IMPL(__imp__sub_821A3250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821A3258;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A327C;
	sub_821931F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,2212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821a32a8
	if (!ctx.cr6.eq) goto loc_821A32A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-1528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_821A32A8:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// addi r27,r11,26080
	ctx.r27.s64 = ctx.r11.s64 + 26080;
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// lwzx r11,r27,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r6.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x820fa4b0
	ctx.lr = 0x821A32C4;
	sub_820FA4B0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// stb r3,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r3.u8);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// addi r25,r11,26752
	ctx.r25.s64 = ctx.r11.s64 + 26752;
	// ori r4,r5,51969
	ctx.r4.u64 = ctx.r5.u64 | 51969;
	// li r26,0
	ctx.r26.s64 = 0;
	// lbzx r3,r25,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821a3300
	if (!ctx.cr6.eq) goto loc_821A3300;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821041d8
	ctx.lr = 0x821A32F0;
	sub_821041D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821a3304
	if (ctx.cr6.eq) goto loc_821A3304;
loc_821A3300:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821A3304:
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lhz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// lbz r6,132(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// mulli r10,r8,1104
	ctx.r10.s64 = ctx.r8.s64 * 1104;
	// stb r11,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r11.u8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// addi r29,r10,1008
	ctx.r29.s64 = ctx.r10.s64 + 1008;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r28,r10,-15768
	ctx.r28.s64 = ctx.r10.s64 + -15768;
	// bne cr6,0x821a3388
	if (!ctx.cr6.eq) goto loc_821A3388;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821a3388
	if (!ctx.cr6.eq) goto loc_821A3388;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82353538
	ctx.lr = 0x821A335C;
	sub_82353538(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82353538
	ctx.lr = 0x821A3374;
	sub_82353538(ctx, base);
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// b 0x821a33ec
	goto loc_821A33EC;
loc_821A3388:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82353538
	ctx.lr = 0x821A3398;
	sub_82353538(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x82353538
	ctx.lr = 0x821A33B0;
	sub_82353538(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82353538
	ctx.lr = 0x821A33C8;
	sub_82353538(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82353538
	ctx.lr = 0x821A33E0;
	sub_82353538(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lfs f1,-14464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14464);
	ctx.f1.f64 = double(temp.f32);
loc_821A33EC:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,-1604(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -1604);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,20048
	ctx.r5.s64 = ctx.r11.s64 + 20048;
	// lfs f0,-1536(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -1536);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f2,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82194a40
	ctx.lr = 0x821A3418;
	sub_82194A40(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// addi r4,r11,-18172
	ctx.r4.s64 = ctx.r11.s64 + -18172;
	// ori r11,r3,12432
	ctx.r11.u64 = ctx.r3.u64 | 12432;
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x820a58c8
	ctx.lr = 0x821A3430;
	sub_820A58C8(ctx, base);
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// lbz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// beq cr6,0x821a3518
	if (ctx.cr6.eq) goto loc_821A3518;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addis r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 2162688;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b76c0
	ctx.lr = 0x821A346C;
	sub_820B76C0(ctx, base);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r8,r9,51969
	ctx.r8.u64 = ctx.r9.u64 | 51969;
	// lbzx r7,r25,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821a34cc
	if (ctx.cr6.eq) goto loc_821A34CC;
	// addi r3,r25,24
	ctx.r3.s64 = ctx.r25.s64 + 24;
	// bl 0x82365698
	ctx.lr = 0x821A3488;
	sub_82365698(ctx, base);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// mulli r9,r3,5956
	ctx.r9.s64 = ctx.r3.s64 * 5956;
	// ori r5,r6,16216
	ctx.r5.u64 = ctx.r6.u64 | 16216;
	// lwzx r11,r27,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r10,r4,328
	ctx.r10.s64 = ctx.r4.s64 * 328;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,10664(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821a3508
	if (ctx.cr6.gt) goto loc_821A3508;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x821a354c
	goto loc_821A354C;
loc_821A34CC:
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r6,6
	ctx.r6.s64 = 393216;
	// ori r7,r8,14384
	ctx.r7.u64 = ctx.r8.u64 | 14384;
	// ori r5,r6,33648
	ctx.r5.u64 = ctx.r6.u64 | 33648;
	// lwzx r11,r27,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	// mulli r10,r11,5956
	ctx.r10.s64 = ctx.r11.s64 * 5956;
	// lwzx r11,r27,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	// mulli r9,r11,328
	ctx.r9.s64 = ctx.r11.s64 * 328;
	// addis r11,r27,7
	ctx.r11.s64 = ctx.r27.s64 + 458752;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r11,-21260
	ctx.r3.s64 = ctx.r11.s64 + -21260;
	// lwzx r11,r4,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821a3508
	if (ctx.cr6.gt) goto loc_821A3508;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821A3508:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x821a354c
	goto loc_821A354C;
loc_821A3518:
	// lbz r8,133(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 133);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821a354c
	if (ctx.cr6.eq) goto loc_821A354C;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addis r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 2162688;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b7630
	ctx.lr = 0x821A3544;
	sub_820B7630(ctx, base);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
loc_821A354C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82199030
	ctx.lr = 0x821A3554;
	sub_82199030(ctx, base);
	// lbz r6,132(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821a356c
	if (!ctx.cr6.eq) goto loc_821A356C;
	// lbz r5,133(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 133);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a3574
	if (ctx.cr6.eq) goto loc_821A3574;
loc_821A356C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82199210
	ctx.lr = 0x821A3574;
	sub_82199210(ctx, base);
loc_821A3574:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A3580"))) PPC_WEAK_FUNC(sub_821A3580);
PPC_FUNC_IMPL(__imp__sub_821A3580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821A3588;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// extsb r29,r10
	ctx.r29.s64 = ctx.r10.s8;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820c8420
	ctx.lr = 0x821A35B0;
	sub_820C8420(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820b0048
	ctx.lr = 0x821A35C4;
	sub_820B0048(ctx, base);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x821a35e0
	if (!ctx.cr6.eq) goto loc_821A35E0;
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x821a3614
	if (ctx.cr6.eq) goto loc_821A3614;
loc_821A35E0:
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x821a3604
	if (!ctx.cr6.gt) goto loc_821A3604;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x822c7128
	ctx.lr = 0x821A3604;
	sub_822C7128(ctx, base);
loc_821A3604:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// bl 0x82199030
	ctx.lr = 0x821A3614;
	sub_82199030(ctx, base);
loc_821A3614:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A361C"))) PPC_WEAK_FUNC(sub_821A361C);
PPC_FUNC_IMPL(__imp__sub_821A361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A3620"))) PPC_WEAK_FUNC(sub_821A3620);
PPC_FUNC_IMPL(__imp__sub_821A3620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// cmpwi cr6,r4,30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30, ctx.xer);
	// lfs f0,900(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// blt cr6,0x821a365c
	if (ctx.cr6.lt) goto loc_821A365C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A365C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,-15128(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821a3678
	if (!ctx.cr6.lt) goto loc_821A3678;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a36a4
	if (ctx.cr6.eq) goto loc_821A36A4;
loc_821A3678:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,13736
	ctx.r11.s64 = ctx.r11.s64 + 13736;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r3,r10,23504
	ctx.r3.s64 = ctx.r10.s64 + 23504;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821A3694;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82199918
	ctx.lr = 0x821A36A0;
	sub_82199918(ctx, base);
	// stfs f31,900(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 900, temp.u32);
loc_821A36A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A36BC"))) PPC_WEAK_FUNC(sub_821A36BC);
PPC_FUNC_IMPL(__imp__sub_821A36BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A36C0"))) PPC_WEAK_FUNC(sub_821A36C0);
PPC_FUNC_IMPL(__imp__sub_821A36C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821A36C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// addi r26,r11,26752
	ctx.r26.s64 = ctx.r11.s64 + 26752;
	// ori r5,r6,51969
	ctx.r5.u64 = ctx.r6.u64 | 51969;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mulli r11,r3,1104
	ctx.r11.s64 = ctx.r3.s64 * 1104;
	// lbzx r4,r26,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r5.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r27,r11,1008
	ctx.r27.s64 = ctx.r11.s64 + 1008;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bne cr6,0x821a3724
	if (!ctx.cr6.eq) goto loc_821A3724;
	// li r5,5
	ctx.r5.s64 = 5;
loc_821A3724:
	// bl 0x821931f8
	ctx.lr = 0x821A3728;
	sub_821931F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r10,2212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821a3758
	if (!ctx.cr6.eq) goto loc_821A3758;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-1528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_821A3758:
	// lis r6,3
	ctx.r6.s64 = 196608;
	// lhz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// ori r5,r6,51969
	ctx.r5.u64 = ctx.r6.u64 | 51969;
	// extsh r28,r7
	ctx.r28.s64 = ctx.r7.s16;
	// lbzx r4,r26,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821a37a4
	if (ctx.cr6.eq) goto loc_821A37A4;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
loc_821A377C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82353538
	ctx.lr = 0x821A378C;
	sub_82353538(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821a377c
	if (!ctx.cr6.lt) goto loc_821A377C;
	// b 0x821a37d0
	goto loc_821A37D0;
loc_821A37A4:
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
loc_821A37AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82353538
	ctx.lr = 0x821A37BC;
	sub_82353538(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821a37ac
	if (!ctx.cr6.lt) goto loc_821A37AC;
loc_821A37D0:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,13400
	ctx.r11.s64 = ctx.r11.s64 + 13400;
	// addi r10,r10,23504
	ctx.r10.s64 = ctx.r10.s64 + 23504;
	// lwz r30,264(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r28,24(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,268(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// bl 0x82361f20
	ctx.lr = 0x821A37F4;
	sub_82361F20(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82361f20
	ctx.lr = 0x821A3800;
	sub_82361F20(ctx, base);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ble cr6,0x821a382c
	if (!ctx.cr6.gt) goto loc_821A382C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A3814;
	sub_82351E40(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r11,-17500
	ctx.r30.s64 = ctx.r11.s64 + -17500;
	// lfs f0,196(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// b 0x821a3848
	goto loc_821A3848;
loc_821A382C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A3834;
	sub_82351E40(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r11,-17500
	ctx.r30.s64 = ctx.r11.s64 + -17500;
	// lfs f0,196(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
loc_821A3848:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// addis r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 2162688;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b76c0
	ctx.lr = 0x821A3864;
	sub_820B76C0(ctx, base);
	// lis r3,3
	ctx.r3.s64 = 196608;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// ori r11,r3,51969
	ctx.r11.u64 = ctx.r3.u64 | 51969;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lbzx r10,r26,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r5,r11,-4000
	ctx.r5.s64 = ctx.r11.s64 + -4000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f2,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f2.f64 = double(temp.f32);
	// beq cr6,0x821a38ac
	if (ctx.cr6.eq) goto loc_821A38AC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-1640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1640);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821a38b4
	goto loc_821A38B4;
loc_821A38AC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-1604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1604);
	ctx.f1.f64 = double(temp.f32);
loc_821A38B4:
	// bl 0x82194a40
	ctx.lr = 0x821A38B8;
	sub_82194A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82199ac0
	ctx.lr = 0x821A38C0;
	sub_82199AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219a1e8
	ctx.lr = 0x821A38C8;
	sub_8219A1E8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A38D4"))) PPC_WEAK_FUNC(sub_821A38D4);
PPC_FUNC_IMPL(__imp__sub_821A38D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A38D8"))) PPC_WEAK_FUNC(sub_821A38D8);
PPC_FUNC_IMPL(__imp__sub_821A38D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad4
	ctx.lr = 0x821A38E0;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8259bba8
	ctx.lr = 0x821A38E8;
	__savefpr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A3910;
	sub_821931F8(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,2212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821a393c
	if (!ctx.cr6.eq) goto loc_821A393C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lfs f0,-1528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_821A393C:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lbz r7,28(r27)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + 28);
	// lis r6,33
	ctx.r6.s64 = 2162688;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lhz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 16);
	// ori r5,r6,4416
	ctx.r5.u64 = ctx.r6.u64 | 4416;
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// extsh r28,r3
	ctx.r28.s64 = ctx.r3.s16;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// mulli r10,r4,1104
	ctx.r10.s64 = ctx.r4.s64 * 1104;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r26,r10,1008
	ctx.r26.s64 = ctx.r10.s64 + 1008;
	// bge cr6,0x821a3998
	if (!ctx.cr6.lt) goto loc_821A3998;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 655360;
	// ori r9,r10,37344
	ctx.r9.u64 = ctx.r10.u64 | 37344;
	// addi r11,r11,-7344
	ctx.r11.s64 = ctx.r11.s64 + -7344;
	// mullw r10,r31,r9
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821a399c
	goto loc_821A399C;
loc_821A3998:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821A399C:
	// addi r19,r27,68
	ctx.r19.s64 = ctx.r27.s64 + 68;
	// stw r11,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r11.u32);
	// li r31,5
	ctx.r31.s64 = 5;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_821A39AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82353538
	ctx.lr = 0x821A39BC;
	sub_82353538(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x821a39ac
	if (!ctx.cr6.lt) goto loc_821A39AC;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r11,23500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a39ec
	if (ctx.cr6.eq) goto loc_821A39EC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821a39f0
	if (!ctx.cr6.eq) goto loc_821A39F0;
loc_821A39EC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821A39F0:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r21,r11,13400
	ctx.r21.s64 = ctx.r11.s64 + 13400;
	// beq cr6,0x821a3a0c
	if (ctx.cr6.eq) goto loc_821A3A0C;
	// lwz r30,48(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// b 0x821a3a10
	goto loc_821A3A10;
loc_821A3A0C:
	// lwz r30,52(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
loc_821A3A10:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lwz r26,64(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// lis r22,-32161
	ctx.r22.s64 = -2107703296;
	// addi r25,r11,304
	ctx.r25.s64 = ctx.r11.s64 + 304;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r31,r26,32
	ctx.r31.s64 = ctx.r26.s64 + 32;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lfs f30,20324(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 20324);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r24,r9,-7992
	ctx.r24.s64 = ctx.r9.s64 + -7992;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// stb r29,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r29.u8);
	// stb r29,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r29.u8);
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// bl 0x82361f20
	ctx.lr = 0x821A3A60;
	sub_82361F20(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// addi r23,r11,7920
	ctx.r23.s64 = ctx.r11.s64 + 7920;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r20,r11,23504
	ctx.r20.s64 = ctx.r11.s64 + 23504;
	// beq cr6,0x821a3aa0
	if (ctx.cr6.eq) goto loc_821A3AA0;
	// lwz r28,24(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// b 0x821a3acc
	goto loc_821A3ACC;
loc_821A3AA0:
	// rlwinm r6,r9,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821a3ab4
	if (ctx.cr6.eq) goto loc_821A3AB4;
	// lwz r28,32(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// b 0x821a3acc
	goto loc_821A3ACC;
loc_821A3AB4:
	// rlwinm r5,r9,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a3ac8
	if (ctx.cr6.eq) goto loc_821A3AC8;
	// lwz r28,36(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 36);
	// b 0x821a3acc
	goto loc_821A3ACC;
loc_821A3AC8:
	// lwz r28,28(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
loc_821A3ACC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r4,r9,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821a3af0
	if (ctx.cr6.eq) goto loc_821A3AF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82351f08
	ctx.lr = 0x821A3AEC;
	sub_82351F08(ctx, base);
	// b 0x821a3b14
	goto loc_821A3B14;
loc_821A3AF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361f20
	ctx.lr = 0x821A3AF8;
	sub_82361F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a3b08
	if (!ctx.cr6.eq) goto loc_821A3B08;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x821a3b14
	goto loc_821A3B14;
loc_821A3B08:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A3B14;
	sub_82351E40(ctx, base);
loc_821A3B14:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r28,r11,24880
	ctx.r28.s64 = ctx.r11.s64 + 24880;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r26,r11,20064
	ctx.r26.s64 = ctx.r11.s64 + 20064;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fneg f10,f0
	ctx.f10.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f0,-716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -716);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A3BA0;
	sub_82352710(ctx, base);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lwz r8,64(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lfs f0,20324(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 20324);
	ctx.f0.f64 = double(temp.f32);
	// fneg f8,f0
	ctx.f8.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lwz r24,0(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r25,240(r21)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r21.u32 + 240);
	// addi r31,r24,32
	ctx.r31.s64 = ctx.r24.s64 + 32;
	// lfs f30,20320(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20320);
	ctx.f30.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r30,r9,-15256
	ctx.r30.s64 = ctx.r9.s64 + -15256;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r22,r9,-7992
	ctx.r22.s64 = ctx.r9.s64 + -7992;
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,-416(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -416);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// lfs f0,-2240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -2240);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f0,-568(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -568);
	ctx.f0.f64 = double(temp.f32);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// stb r29,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r29.u8);
	// stb r29,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r29.u8);
	// stb r29,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r29.u8);
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// fsubs f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f0,-27244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fadds f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// lfs f13,25556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25556);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fadds f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x82361f20
	ctx.lr = 0x821A3C44;
	sub_82361F20(ctx, base);
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// beq cr6,0x821a3c74
	if (ctx.cr6.eq) goto loc_821A3C74;
	// lwz r23,24(r20)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24);
	// b 0x821a3ca0
	goto loc_821A3CA0;
loc_821A3C74:
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a3c88
	if (ctx.cr6.eq) goto loc_821A3C88;
	// lwz r23,32(r20)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + 32);
	// b 0x821a3ca0
	goto loc_821A3CA0;
loc_821A3C88:
	// rlwinm r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a3c9c
	if (ctx.cr6.eq) goto loc_821A3C9C;
	// lwz r23,36(r20)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + 36);
	// b 0x821a3ca0
	goto loc_821A3CA0;
loc_821A3C9C:
	// lwz r23,28(r20)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + 28);
loc_821A3CA0:
	// rlwinm r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a3cbc
	if (ctx.cr6.eq) goto loc_821A3CBC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82351f08
	ctx.lr = 0x821A3CB8;
	sub_82351F08(ctx, base);
	// b 0x821a3ce0
	goto loc_821A3CE0;
loc_821A3CBC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82361f20
	ctx.lr = 0x821A3CC4;
	sub_82361F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a3cd4
	if (!ctx.cr6.eq) goto loc_821A3CD4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x821a3ce0
	goto loc_821A3CE0;
loc_821A3CD4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A3CE0;
	sub_82351E40(ctx, base);
loc_821A3CE0:
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r9,24
	ctx.r9.s64 = 24;
	// fadds f3,f1,f0
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmuls f2,f3,f30
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,20056
	ctx.r11.s64 = ctx.r11.s64 + 20056;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsubs f11,f29,f0
	ctx.f11.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f10,f28,f13
	ctx.f10.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A3D5C;
	sub_82352710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,-2116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -2116);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lfs f1,-1188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -1188);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f2,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f2.f64 = double(temp.f32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82194a40
	ctx.lr = 0x821A3D84;
	sub_82194A40(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r29,44(r27)
	PPC_STORE_U32(ctx.r27.u32 + 44, ctx.r29.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lfs f0,-1196(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -1196);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r11,-14460
	ctx.r29.s64 = ctx.r11.s64 + -14460;
	// stfs f0,36(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 36, temp.u32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r30,r27,88
	ctx.r30.s64 = ctx.r27.s64 + 88;
	// addi r28,r11,26080
	ctx.r28.s64 = ctx.r11.s64 + 26080;
loc_821A3DA8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259d1b0
	ctx.lr = 0x821A3DB8;
	sub_8259D1B0(ctx, base);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ori r9,r10,12432
	ctx.r9.u64 = ctx.r10.u64 | 12432;
	// lwzx r3,r28,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// bl 0x820a58c8
	ctx.lr = 0x821A3DCC;
	sub_820A58C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x821a3da8
	if (ctx.cr6.lt) goto loc_821A3DA8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8219a588
	ctx.lr = 0x821A3DE8;
	sub_8219A588(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8259bbf4
	ctx.lr = 0x821A3DF8;
	__restfpr_28(ctx, base);
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A3DFC"))) PPC_WEAK_FUNC(sub_821A3DFC);
PPC_FUNC_IMPL(__imp__sub_821A3DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A3E00"))) PPC_WEAK_FUNC(sub_821A3E00);
PPC_FUNC_IMPL(__imp__sub_821A3E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8219a588
	ctx.lr = 0x821A3E20;
	sub_8219A588(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821a3e68
	if (ctx.cr6.gt) goto loc_821A3E68;
	// bso cr6,0x821a3e68
	if (ctx.cr6.so) goto loc_821A3E68;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bne cr6,0x821a3e5c
	if (!ctx.cr6.eq) goto loc_821A3E5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_821A3E5C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-16452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16452);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_821A3E68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A3E80"))) PPC_WEAK_FUNC(sub_821A3E80);
PPC_FUNC_IMPL(__imp__sub_821A3E80) {
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
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r31,r9,20064
	ctx.r31.s64 = ctx.r9.s64 + 20064;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r9,16
	ctx.r9.s64 = 16;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r8,64
	ctx.r8.s64 = 64;
	// addi r7,r7,-21328
	ctx.r7.s64 = ctx.r7.s64 + -21328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r31,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r31.u64);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f7,f6
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A3F24;
	sub_82352710(ctx, base);
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

__attribute__((alias("__imp__sub_821A3F3C"))) PPC_WEAK_FUNC(sub_821A3F3C);
PPC_FUNC_IMPL(__imp__sub_821A3F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A3F40"))) PPC_WEAK_FUNC(sub_821A3F40);
PPC_FUNC_IMPL(__imp__sub_821A3F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821A3F48;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// addi r11,r11,-14440
	ctx.r11.s64 = ctx.r11.s64 + -14440;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,12
	ctx.r9.s64 = 12;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821A3F70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821a3f70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A3F70;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,29
	ctx.r9.s64 = 29;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821A3F94:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821a3f94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A3F94;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r11,r6,584
	ctx.r11.s64 = ctx.r6.s64 * 584;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ld r3,200(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// bl 0x82347480
	ctx.lr = 0x821A3FD0;
	sub_82347480(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// lbz r9,85(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r7,91(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// stb r5,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r5.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// stb r8,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r8.u8);
	// stb r7,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r7.u8);
	// bl 0x8210fcf8
	ctx.lr = 0x821A4010;
	sub_8210FCF8(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r5,r6,51969
	ctx.r5.u64 = ctx.r6.u64 | 51969;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lbzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821a4070
	if (ctx.cr6.eq) goto loc_821A4070;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r29,40
	ctx.r30.s64 = ctx.r29.s64 + 40;
	// addi r5,r11,-16348
	ctx.r5.s64 = ctx.r11.s64 + -16348;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x821912d8
	ctx.lr = 0x821A406C;
	sub_821912D8(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_821A4070:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8219b510
	ctx.lr = 0x821A4084;
	sub_8219B510(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A408C"))) PPC_WEAK_FUNC(sub_821A408C);
PPC_FUNC_IMPL(__imp__sub_821A408C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A4090"))) PPC_WEAK_FUNC(sub_821A4090);
PPC_FUNC_IMPL(__imp__sub_821A4090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821A4098;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r7,r8,51969
	ctx.r7.u64 = ctx.r8.u64 | 51969;
	// addi r10,r10,26752
	ctx.r10.s64 = ctx.r10.s64 + 26752;
	// addi r11,r11,13400
	ctx.r11.s64 = ctx.r11.s64 + 13400;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbzx r6,r10,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// beq cr6,0x821a4130
	if (ctx.cr6.eq) goto loc_821A4130;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r4,r5,16216
	ctx.r4.u64 = ctx.r5.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r31,r30,40
	ctx.r31.s64 = ctx.r30.s64 + 40;
	// addi r5,r10,-16348
	ctx.r5.s64 = ctx.r10.s64 + -16348;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x821912d8
	ctx.lr = 0x821A412C;
	sub_821912D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_821A4130:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219b510
	ctx.lr = 0x821A4144;
	sub_8219B510(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A414C"))) PPC_WEAK_FUNC(sub_821A414C);
PPC_FUNC_IMPL(__imp__sub_821A414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A4150"))) PPC_WEAK_FUNC(sub_821A4150);
PPC_FUNC_IMPL(__imp__sub_821A4150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821A4158;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A417C;
	sub_821931F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,2212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821a41a8
	if (!ctx.cr6.eq) goto loc_821A41A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-1528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_821A41A8:
	// lbz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,47
	ctx.r6.s64 = 47;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// lhz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// li r26,0
	ctx.r26.s64 = 0;
	// mulli r10,r5,1104
	ctx.r10.s64 = ctx.r5.s64 * 1104;
	// sth r11,58(r31)
	PPC_STORE_U16(ctx.r31.u32 + 58, ctx.r11.u16);
	// sth r6,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r6.u16);
	// sth r11,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r11.u16);
	// sth r11,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r11.u16);
	// sth r26,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r26.u16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r28,r4
	ctx.r28.s64 = ctx.r4.s16;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r27,r10,1008
	ctx.r27.s64 = ctx.r10.s64 + 1008;
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
loc_821A41F0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82353538
	ctx.lr = 0x821A4200;
	sub_82353538(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821a41f0
	if (!ctx.cr6.lt) goto loc_821A41F0;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// stw r26,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r26.u32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r9,r10,28788
	ctx.r9.u64 = ctx.r10.u64 | 28788;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x8219bc90
	ctx.lr = 0x821A4238;
	sub_8219BC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219b8b8
	ctx.lr = 0x821A4240;
	sub_8219B8B8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r11,-4000
	ctx.r5.s64 = ctx.r11.s64 + -4000;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-17500
	ctx.r11.s64 = ctx.r11.s64 + -17500;
	// lfs f2,-12136(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,1192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1192);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82194a40
	ctx.lr = 0x821A4278;
	sub_82194A40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A4284"))) PPC_WEAK_FUNC(sub_821A4284);
PPC_FUNC_IMPL(__imp__sub_821A4284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A4288"))) PPC_WEAK_FUNC(sub_821A4288);
PPC_FUNC_IMPL(__imp__sub_821A4288) {
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
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,35676
	ctx.r9.u64 = ctx.r10.u64 | 35676;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x821a42c0
	if (!ctx.cr6.eq) goto loc_821A42C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A42C0:
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821a42e0
	if (ctx.cr6.eq) goto loc_821A42E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x8219bc90
	ctx.lr = 0x821A42D8;
	sub_8219BC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219b8b8
	ctx.lr = 0x821A42E0;
	sub_8219B8B8(ctx, base);
loc_821A42E0:
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

__attribute__((alias("__imp__sub_821A42F4"))) PPC_WEAK_FUNC(sub_821A42F4);
PPC_FUNC_IMPL(__imp__sub_821A42F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A42F8"))) PPC_WEAK_FUNC(sub_821A42F8);
PPC_FUNC_IMPL(__imp__sub_821A42F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad0
	ctx.lr = 0x821A4300;
	__savegprlr_18(ctx, base);
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f29.u64);
	// stfd f30,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r4,33
	ctx.r4.s64 = 2162688;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r3,r4,4416
	ctx.r3.u64 = ctx.r4.u64 | 4416;
	// lfs f29,20584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20584);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lbz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// lhz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// extsh r22,r10
	ctx.r22.s64 = ctx.r10.s16;
	// addi r8,r11,-10208
	ctx.r8.s64 = ctx.r11.s64 + -10208;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// mulli r6,r11,19200
	ctx.r6.s64 = ctx.r11.s64 * 19200;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// mulli r10,r11,1104
	ctx.r10.s64 = ctx.r11.s64 * 1104;
	// lwz r19,0(r5)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r21,r10,1008
	ctx.r21.s64 = ctx.r10.s64 + 1008;
	// lwzx r10,r31,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821a4390
	if (!ctx.cr6.lt) goto loc_821A4390;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,37344
	ctx.r9.u64 = ctx.r10.u64 | 37344;
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addis r9,r31,10
	ctx.r9.s64 = ctx.r31.s64 + 655360;
	// addi r9,r9,-7344
	ctx.r9.s64 = ctx.r9.s64 + -7344;
	// add r27,r10,r9
	ctx.r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x821a4394
	goto loc_821A4394;
loc_821A4390:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_821A4394:
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// mulli r11,r11,11920
	ctx.r11.s64 = ctx.r11.s64 * 11920;
	// addi r29,r10,26080
	ctx.r29.s64 = ctx.r10.s64 + 26080;
	// addis r10,r29,3
	ctx.r10.s64 = ctx.r29.s64 + 196608;
	// addi r10,r10,-11424
	ctx.r10.s64 = ctx.r10.s64 + -11424;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822da008
	ctx.lr = 0x821A43B0;
	sub_822DA008(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821a46f8
	if (ctx.cr6.eq) goto loc_821A46F8;
	// lbz r7,14653(r27)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + 14653);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821a46f8
	if (ctx.cr6.eq) goto loc_821A46F8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8225ec38
	ctx.lr = 0x821A43D0;
	sub_8225EC38(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821a43f0
	if (ctx.cr6.eq) goto loc_821A43F0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821a43f0
	if (!ctx.cr6.eq) goto loc_821A43F0;
	// li r20,8
	ctx.r20.s64 = 8;
	// b 0x821a43f8
	goto loc_821A43F8;
loc_821A43F0:
	// li r20,9
	ctx.r20.s64 = 9;
	// li r18,1
	ctx.r18.s64 = 1;
loc_821A43F8:
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r4,r5,16271
	ctx.r4.u64 = ctx.r5.u64 | 16271;
	// lbzx r3,r29,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a4414
	if (ctx.cr6.eq) goto loc_821A4414;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f29,1196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1196);
	ctx.f29.f64 = double(temp.f32);
loc_821A4414:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821a443c
	if (ctx.cr6.eq) goto loc_821A443C;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a443c
	if (ctx.cr6.eq) goto loc_821A443C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82353580
	ctx.lr = 0x821A4438;
	sub_82353580(ctx, base);
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
loc_821A443C:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r26,r11,20080
	ctx.r26.s64 = ctx.r11.s64 + 20080;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r23,r11,20056
	ctx.r23.s64 = ctx.r11.s64 + 20056;
	// bne cr6,0x821a460c
	if (!ctx.cr6.eq) goto loc_821A460C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82353538
	ctx.lr = 0x821A4468;
	sub_82353538(ctx, base);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,304
	ctx.r11.s64 = ctx.r11.s64 + 304;
	// rlwinm r8,r20,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,20588(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20588);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r31,r29,32
	ctx.r31.s64 = ctx.r29.s64 + 32;
	// fadds f30,f0,f29
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// addi r9,r10,13400
	ctx.r9.s64 = ctx.r10.s64 + 13400;
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lwzx r27,r8,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r28,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r28.u8);
	// stb r28,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r28.u8);
	// stb r28,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r28.u8);
	// stb r28,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r28.u8);
	// bl 0x82361f20
	ctx.lr = 0x821A44C4;
	sub_82361F20(ctx, base);
	// lbz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// ori r10,r5,1
	ctx.r10.u64 = ctx.r5.u64 | 1;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// addi r24,r8,-7896
	ctx.r24.s64 = ctx.r8.s64 + -7896;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r10,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r10.u8);
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// beq cr6,0x821a450c
	if (ctx.cr6.eq) goto loc_821A450C;
	// lwz r25,24(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x821a4540
	goto loc_821A4540;
loc_821A450C:
	// lbz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821a4524
	if (ctx.cr6.eq) goto loc_821A4524;
	// lwz r25,32(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x821a4540
	goto loc_821A4540;
loc_821A4524:
	// lbz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// rlwinm r5,r6,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a453c
	if (ctx.cr6.eq) goto loc_821A453C;
	// lwz r25,36(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x821a4540
	goto loc_821A4540;
loc_821A453C:
	// lwz r25,28(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_821A4540:
	// lbz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r3,r4,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821a4568
	if (ctx.cr6.eq) goto loc_821A4568;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82351f08
	ctx.lr = 0x821A4564;
	sub_82351F08(ctx, base);
	// b 0x821a458c
	goto loc_821A458C;
loc_821A4568:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82361f20
	ctx.lr = 0x821A4570;
	sub_82361F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a4580
	if (!ctx.cr6.eq) goto loc_821A4580;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x821a458c
	goto loc_821A458C;
loc_821A4580:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A458C;
	sub_82351E40(ctx, base);
loc_821A458C:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lfs f0,24880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24880);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f0,-15712(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15712);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// lfs f0,24880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24880);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f0,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fneg f9,f0
	ctx.f9.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f8,f30,f13
	ctx.f8.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A460C;
	sub_82352710(ctx, base);
loc_821A460C:
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821a462c
	if (!ctx.cr6.eq) goto loc_821A462C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82353538
	ctx.lr = 0x821A4628;
	sub_82353538(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
loc_821A462C:
	// clrlwi r8,r18,24
	ctx.r8.u64 = ctx.r18.u32 & 0xFF;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821a468c
	if (ctx.cr6.eq) goto loc_821A468C;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stfs f29,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r7,r11,20576
	ctx.r7.s64 = ctx.r11.s64 + 20576;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f7,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lfs f0,-1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1628);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x821a3e80
	ctx.lr = 0x821A4674;
	sub_821A3E80(ctx, base);
	// stw r20,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r20.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x8259bb20
	__restgprlr_18(ctx, base);
	return;
loc_821A468C:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r10,r11,20064
	ctx.r10.s64 = ctx.r11.s64 + 20064;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r9,r11,-4000
	ctx.r9.s64 = ctx.r11.s64 + -4000;
	// lfs f5,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stfs f29,132(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r6,r11,20592
	ctx.r6.s64 = ctx.r11.s64 + 20592;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1628);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// stfs f4,128(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r11,r11,-23608
	ctx.r11.s64 = ctx.r11.s64 + -23608;
	// lwz r8,164(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// bl 0x8235fae0
	ctx.lr = 0x821A46E0;
	sub_8235FAE0(ctx, base);
	// stw r20,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r20.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x8259bb20
	__restgprlr_18(ctx, base);
	return;
loc_821A46F8:
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// li r29,2
	ctx.r29.s64 = 2;
loc_821A4700:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a4730
	if (ctx.cr6.eq) goto loc_821A4730;
	// lbz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mulli r11,r3,1104
	ctx.r11.s64 = ctx.r3.s64 * 1104;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
	// bl 0x82353580
	ctx.lr = 0x821A472C;
	sub_82353580(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_821A4730:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821a4700
	if (!ctx.cr6.eq) goto loc_821A4700;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x8259bb20
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A4754"))) PPC_WEAK_FUNC(sub_821A4754);
PPC_FUNC_IMPL(__imp__sub_821A4754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A4758"))) PPC_WEAK_FUNC(sub_821A4758);
PPC_FUNC_IMPL(__imp__sub_821A4758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821A4760;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A4790;
	sub_821931F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,2212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821a47bc
	if (!ctx.cr6.eq) goto loc_821A47BC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-1528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_821A47BC:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lbz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// mulli r10,r30,19200
	ctx.r10.s64 = ctx.r30.s64 * 19200;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// stb r29,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r29.u8);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// addis r9,r11,35
	ctx.r9.s64 = ctx.r11.s64 + 2293760;
	// mulli r11,r6,1104
	ctx.r11.s64 = ctx.r6.s64 * 1104;
	// lfs f0,2864(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r9,r9,-28496
	ctx.r9.s64 = ctx.r9.s64 + -28496;
	// addi r28,r31,44
	ctx.r28.s64 = ctx.r31.s64 + 44;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsh r26,r5
	ctx.r26.s64 = ctx.r5.s16;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r27,r11,1008
	ctx.r27.s64 = ctx.r11.s64 + 1008;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
loc_821A4814:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82353538
	ctx.lr = 0x821A4824;
	sub_82353538(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821a4814
	if (!ctx.cr6.lt) goto loc_821A4814;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,47
	ctx.r10.s64 = 47;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r11.u16);
	// sth r10,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r10.u16);
	// sth r11,76(r31)
	PPC_STORE_U16(ctx.r31.u32 + 76, ctx.r11.u16);
	// sth r29,78(r31)
	PPC_STORE_U16(ctx.r31.u32 + 78, ctx.r29.u16);
	// sth r29,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r29.u16);
	// bl 0x8219be70
	ctx.lr = 0x821A4860;
	sub_8219BE70(ctx, base);
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lwz r27,36(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r9,r9,13400
	ctx.r9.s64 = ctx.r9.s64 + 13400;
	// addi r8,r11,304
	ctx.r8.s64 = ctx.r11.s64 + 304;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r30,r27,32
	ctx.r30.s64 = ctx.r27.s64 + 32;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r28,44(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// fadds f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r26,r8,-7992
	ctx.r26.s64 = ctx.r8.s64 + -7992;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// stb r29,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r29.u8);
	// stb r29,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r29.u8);
	// stb r29,23(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23, ctx.r29.u8);
	// stb r29,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r29.u8);
	// bl 0x82361f20
	ctx.lr = 0x821A48C4;
	sub_82361F20(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lbz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// addi r10,r11,7920
	ctx.r10.s64 = ctx.r11.s64 + 7920;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// beq cr6,0x821a4900
	if (ctx.cr6.eq) goto loc_821A4900;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x821a4934
	goto loc_821A4934;
loc_821A4900:
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// beq cr6,0x821a491c
	if (ctx.cr6.eq) goto loc_821A491C;
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x821a4934
	goto loc_821A4934;
loc_821A491C:
	// rlwinm r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a4930
	if (ctx.cr6.eq) goto loc_821A4930;
	// lwz r29,36(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x821a4934
	goto loc_821A4934;
loc_821A4930:
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_821A4934:
	// rlwinm r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a4950
	if (ctx.cr6.eq) goto loc_821A4950;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351f08
	ctx.lr = 0x821A494C;
	sub_82351F08(ctx, base);
	// b 0x821a4974
	goto loc_821A4974;
loc_821A4950:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82361f20
	ctx.lr = 0x821A4958;
	sub_82361F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a4968
	if (!ctx.cr6.eq) goto loc_821A4968;
	// lfs f1,2864(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821a4974
	goto loc_821A4974;
loc_821A4968:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A4974;
	sub_82351E40(ctx, base);
loc_821A4974:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f11,2864(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 2864);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// addi r29,r10,-17500
	ctx.r29.s64 = ctx.r10.s64 + -17500;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fadds f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f0,1788(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1788);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// addi r30,r11,-4000
	ctx.r30.s64 = ctx.r11.s64 + -4000;
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fsubs f7,f31,f0
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f0,-24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A4A0C;
	sub_82352710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f0,196(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f1,2100(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2100);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f2,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82194a40
	ctx.lr = 0x821A4A38;
	sub_82194A40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A4A48"))) PPC_WEAK_FUNC(sub_821A4A48);
PPC_FUNC_IMPL(__imp__sub_821A4A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r9,13508(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13508);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821a4a8c
	if (ctx.cr6.lt) goto loc_821A4A8C;
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r7,13636(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13636);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x821a4a8c
	if (!ctx.cr6.eq) goto loc_821A4A8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
loc_821A4A8C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-4736(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4736);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lwz r6,13508(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13508);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// b 0x8219be70
	sub_8219BE70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A4AA4"))) PPC_WEAK_FUNC(sub_821A4AA4);
PPC_FUNC_IMPL(__imp__sub_821A4AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A4AA8"))) PPC_WEAK_FUNC(sub_821A4AA8);
PPC_FUNC_IMPL(__imp__sub_821A4AA8) {
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
	// lwz r11,2212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2212);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x821a4c98
	if (ctx.cr6.gt) goto loc_821A4C98;
	// lwz r11,2216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2216);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821a4c98
	if (ctx.cr6.gt) goto loc_821A4C98;
	// lis r12,-32230
	ctx.r12.s64 = -2112225280;
	// addi r12,r12,19184
	ctx.r12.s64 = ctx.r12.s64 + 19184;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821A4B1C;
	case 1:
		goto loc_821A4C98;
	case 2:
		goto loc_821A4B14;
	case 3:
		goto loc_821A4C98;
	case 4:
		goto loc_821A4B1C;
	case 5:
		goto loc_821A4B1C;
	case 6:
		goto loc_821A4C98;
	case 7:
		goto loc_821A4C7C;
	case 8:
		goto loc_821A4BB0;
	default:
		__builtin_unreachable();
	}
	// lwz r16,19228(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19228);
	// lwz r16,19608(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19608);
	// lwz r16,19220(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19220);
	// lwz r16,19608(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19608);
	// lwz r16,19228(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19228);
	// lwz r16,19228(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19228);
	// lwz r16,19608(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19608);
	// lwz r16,19580(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19580);
	// lwz r16,19376(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 19376);
loc_821A4B14:
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x821a4c80
	goto loc_821A4C80;
loc_821A4B1C:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,20824
	ctx.r3.s64 = ctx.r11.s64 + 20824;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8219b7c8
	ctx.lr = 0x821A4B38;
	sub_8219B7C8(ctx, base);
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
	// bne cr6,0x821a4b74
	if (!ctx.cr6.eq) goto loc_821A4B74;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 * 44;
	// addi r11,r11,3752
	ctx.r11.s64 = ctx.r11.s64 + 3752;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82193838
	ctx.lr = 0x821A4B74;
	sub_82193838(ctx, base);
loc_821A4B74:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r11,r11,992
	ctx.r11.s64 = ctx.r11.s64 + 992;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82193408
	ctx.lr = 0x821A4B9C;
	sub_82193408(ctx, base);
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
loc_821A4BB0:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,20824
	ctx.r3.s64 = ctx.r11.s64 + 20824;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8219b7c8
	ctx.lr = 0x821A4BCC;
	sub_8219B7C8(ctx, base);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r11,r11,992
	ctx.r11.s64 = ctx.r11.s64 + 992;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82193408
	ctx.lr = 0x821A4BF4;
	sub_82193408(ctx, base);
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
	// bl 0x820fa4b0
	ctx.lr = 0x821A4C10;
	sub_820FA4B0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r6,3
	ctx.r6.s64 = 3;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// beq cr6,0x821a4c38
	if (ctx.cr6.eq) goto loc_821A4C38;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r3,r11,22752
	ctx.r3.s64 = ctx.r11.s64 + 22752;
	// bl 0x821a36c0
	ctx.lr = 0x821A4C34;
	sub_821A36C0(ctx, base);
	// b 0x821a4c4c
	goto loc_821A4C4C;
loc_821A4C38:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 * 76;
	// addi r11,r11,1208
	ctx.r11.s64 = ctx.r11.s64 + 1208;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a4150
	ctx.lr = 0x821A4C4C;
	sub_821A4150(ctx, base);
loc_821A4C4C:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r11,21832
	ctx.r3.s64 = ctx.r11.s64 + 21832;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82193460
	ctx.lr = 0x821A4C68;
	sub_82193460(ctx, base);
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
loc_821A4C7C:
	// li r7,0
	ctx.r7.s64 = 0;
loc_821A4C80:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,20824
	ctx.r3.s64 = ctx.r11.s64 + 20824;
	// bl 0x8219b7c8
	ctx.lr = 0x821A4C98;
	sub_8219B7C8(ctx, base);
loc_821A4C98:
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

__attribute__((alias("__imp__sub_821A4CAC"))) PPC_WEAK_FUNC(sub_821A4CAC);
PPC_FUNC_IMPL(__imp__sub_821A4CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A4CB0"))) PPC_WEAK_FUNC(sub_821A4CB0);
PPC_FUNC_IMPL(__imp__sub_821A4CB0) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,131
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 131, ctx.xer);
	// bgt cr6,0x821a4d10
	if (ctx.cr6.gt) goto loc_821A4D10;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,616(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8219c750
	ctx.lr = 0x821A4CFC;
	sub_8219C750(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,296
	ctx.r4.s64 = 296;
	// lfs f0,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// stw r4,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r4.u32);
loc_821A4D10:
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

__attribute__((alias("__imp__sub_821A4D24"))) PPC_WEAK_FUNC(sub_821A4D24);
PPC_FUNC_IMPL(__imp__sub_821A4D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A4D28"))) PPC_WEAK_FUNC(sub_821A4D28);
PPC_FUNC_IMPL(__imp__sub_821A4D28) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,21(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8924
	ctx.r11.s64 = ctx.r11.s64 + 8924;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8219d7b8
	sub_8219D7B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A4D54"))) PPC_WEAK_FUNC(sub_821A4D54);
PPC_FUNC_IMPL(__imp__sub_821A4D54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A4D58"))) PPC_WEAK_FUNC(sub_821A4D58);
PPC_FUNC_IMPL(__imp__sub_821A4D58) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,21(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8936
	ctx.r11.s64 = ctx.r11.s64 + 8936;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8219d7b8
	sub_8219D7B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A4D84"))) PPC_WEAK_FUNC(sub_821A4D84);
PPC_FUNC_IMPL(__imp__sub_821A4D84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A4D88"))) PPC_WEAK_FUNC(sub_821A4D88);
PPC_FUNC_IMPL(__imp__sub_821A4D88) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r6,8784(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8784);
	// bne cr6,0x821a4da4
	if (!ctx.cr6.eq) goto loc_821A4DA4;
	// li r11,3
	ctx.r11.s64 = 3;
loc_821A4DA4:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8219d7b8
	sub_8219D7B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A4DB4"))) PPC_WEAK_FUNC(sub_821A4DB4);
PPC_FUNC_IMPL(__imp__sub_821A4DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A4DB8"))) PPC_WEAK_FUNC(sub_821A4DB8);
PPC_FUNC_IMPL(__imp__sub_821A4DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bacc
	ctx.lr = 0x821A4DC0;
	__savegprlr_17(ctx, base);
	// stfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f29.u64);
	// stfd f30,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r17,1
	ctx.r17.s64 = 1;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stb r17,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r17.u8);
	// mulli r10,r9,1104
	ctx.r10.s64 = ctx.r9.s64 * 1104;
	// add r21,r10,r11
	ctx.r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,236(r21)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r21.u32 + 236);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821a4e18
	if (ctx.cr6.eq) goto loc_821A4E18;
	// lwz r7,0(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// b 0x821a4e1c
	goto loc_821A4E1C;
loc_821A4E18:
	// addi r11,r21,36
	ctx.r11.s64 = ctx.r21.s64 + 36;
loc_821A4E1C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219e318
	ctx.lr = 0x821A4E2C;
	sub_8219E318(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f29,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f29.f64 = double(temp.f32);
	// lis r18,-32091
	ctx.r18.s64 = -2103115776;
	// addi r20,r11,26080
	ctx.r20.s64 = ctx.r11.s64 + 26080;
	// beq cr6,0x821a5154
	if (ctx.cr6.eq) goto loc_821A5154;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// lbz r5,9(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// rlwinm r3,r11,0,26,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lbz r4,10(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// extsb r24,r6
	ctx.r24.s64 = ctx.r6.s8;
	// extsb r22,r5
	ctx.r22.s64 = ctx.r5.s8;
	// extsb r23,r4
	ctx.r23.s64 = ctx.r4.s8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// bne cr6,0x821a4e84
	if (!ctx.cr6.eq) goto loc_821A4E84;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_821A4E84:
	// lbz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// clrlwi r25,r11,24
	ctx.r25.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821a4e98
	if (!ctx.cr6.eq) goto loc_821A4E98;
	// li r26,4096
	ctx.r26.s64 = 4096;
loc_821A4E98:
	// lbz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// mulli r11,r7,1104
	ctx.r11.s64 = ctx.r7.s64 * 1104;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,1000(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1000);
	// stb r19,1000(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1000, ctx.r19.u8);
	// bl 0x82189c70
	ctx.lr = 0x821A4EBC;
	sub_82189C70(ctx, base);
	// lbz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// mulli r11,r5,1104
	ctx.r11.s64 = ctx.r5.s64 * 1104;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,988(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 988);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821a4f08
	if (ctx.cr6.eq) goto loc_821A4F08;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821a4f08
	if (ctx.cr6.eq) goto loc_821A4F08;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821a4f08
	if (ctx.cr6.eq) goto loc_821A4F08;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a4f08
	if (!ctx.cr6.eq) goto loc_821A4F08;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// ori r26,r26,16
	ctx.r26.u64 = ctx.r26.u64 | 16;
	// b 0x821a4f0c
	goto loc_821A4F0C;
loc_821A4F08:
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_821A4F0C:
	// mulli r11,r28,56
	ctx.r11.s64 = ctx.r28.s64 * 56;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r27,r11,32
	ctx.r27.s64 = ctx.r11.s64 + 32;
	// stfs f31,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 36, temp.u32);
	// bl 0x821975e0
	ctx.lr = 0x821A4F24;
	sub_821975E0(ctx, base);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82189bb8
	ctx.lr = 0x821A4F34;
	sub_82189BB8(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82189bb8
	ctx.lr = 0x821A4F40;
	sub_82189BB8(ctx, base);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r6,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a4fa0
	if (ctx.cr6.eq) goto loc_821A4FA0;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a4fb0
	if (ctx.cr6.eq) goto loc_821A4FB0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821a4f90
	if (ctx.cr6.eq) goto loc_821A4F90;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r8,932(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 932);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// li r7,63
	ctx.r7.s64 = 63;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r24,3
	ctx.r24.s64 = 3;
	// bl 0x8219e4e8
	ctx.lr = 0x821A4F8C;
	sub_8219E4E8(ctx, base);
	// b 0x821a4fb0
	goto loc_821A4FB0;
loc_821A4F90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a4fb0
	if (ctx.cr6.eq) goto loc_821A4FB0;
	// rlwinm r26,r26,0,27,25
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// b 0x821a4fb0
	goto loc_821A4FB0;
loc_821A4FA0:
	// lbz r9,24(r21)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a4fb0
	if (ctx.cr6.eq) goto loc_821A4FB0;
	// ori r26,r26,4
	ctx.r26.u64 = ctx.r26.u64 | 4;
loc_821A4FB0:
	// rlwinm r8,r26,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821a5008
	if (ctx.cr6.eq) goto loc_821A5008;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,20864
	ctx.r11.s64 = ctx.r11.s64 + 20864;
	// lfs f0,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821a4ff8
	if (!ctx.cr6.gt) goto loc_821A4FF8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,7696(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7696);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// b 0x821a4ffc
	goto loc_821A4FFC;
loc_821A4FF8:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_821A4FFC:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x821a5008
	if (!ctx.cr6.gt) goto loc_821A5008;
	// rlwinm r26,r26,0,25,23
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
loc_821A5008:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219e4e8
	ctx.lr = 0x821A5030;
	sub_8219E4E8(ctx, base);
	// cmplwi cr6,r26,8197
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 8197, ctx.xer);
	// bne cr6,0x821a507c
	if (!ctx.cr6.eq) goto loc_821A507C;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,128(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r10,r11,23440
	ctx.r10.s64 = ctx.r11.s64 + 23440;
	// addi r11,r31,208
	ctx.r11.s64 = ctx.r31.s64 + 208;
	// addi r8,r9,23488
	ctx.r8.s64 = ctx.r9.s64 + 23488;
	// addi r9,r31,224
	ctx.r9.s64 = ctx.r31.s64 + 224;
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// b 0x821a5154
	goto loc_821A5154;
loc_821A507C:
	// cmplwi cr6,r26,1029
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1029, ctx.xer);
	// bne cr6,0x821a50c8
	if (!ctx.cr6.eq) goto loc_821A50C8;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,128(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r10,r11,23456
	ctx.r10.s64 = ctx.r11.s64 + 23456;
	// addi r11,r31,208
	ctx.r11.s64 = ctx.r31.s64 + 208;
	// addi r8,r9,23504
	ctx.r8.s64 = ctx.r9.s64 + 23504;
	// addi r9,r31,224
	ctx.r9.s64 = ctx.r31.s64 + 224;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// b 0x821a5154
	goto loc_821A5154;
loc_821A50C8:
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r11,r3,5
	ctx.r11.u64 = ctx.r3.u64 | 5;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821a5114
	if (ctx.cr6.eq) goto loc_821A5114;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,5
	ctx.r9.u64 = ctx.r10.u64 | 5;
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821a5114
	if (ctx.cr6.eq) goto loc_821A5114;
	// lfs f10,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// beq cr6,0x821a5154
	if (ctx.cr6.eq) goto loc_821A5154;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,8360(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 8360);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-15112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15112);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,128(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// stfs f8,184(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// b 0x821a5154
	goto loc_821A5154;
loc_821A5114:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,128(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r10,r11,23472
	ctx.r10.s64 = ctx.r11.s64 + 23472;
	// addi r11,r31,208
	ctx.r11.s64 = ctx.r31.s64 + 208;
	// addi r8,r9,23520
	ctx.r8.s64 = ctx.r9.s64 + 23520;
	// addi r9,r31,224
	ctx.r9.s64 = ctx.r31.s64 + 224;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// ld r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
loc_821A5154:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// lis r25,-32091
	ctx.r25.s64 = -2103115776;
	// lis r27,-32091
	ctx.r27.s64 = -2103115776;
	// lis r26,-32091
	ctx.r26.s64 = -2103115776;
	// lis r28,-32091
	ctx.r28.s64 = -2103115776;
loc_821A516C:
	// lhz r11,22(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 22);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x821a5200
	if (ctx.cr6.eq) goto loc_821A5200;
	// lbz r9,180(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 180);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a51e0
	if (ctx.cr6.eq) goto loc_821A51E0;
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821a51bc
	if (ctx.cr6.eq) goto loc_821A51BC;
	// lfs f0,1592(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1592);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821a51e0
	if (!ctx.cr6.gt) goto loc_821A51E0;
	// lfs f0,7700(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 7700);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821a51e0
	if (ctx.cr6.gt) goto loc_821A51E0;
	// bso cr6,0x821a51e0
	if (ctx.cr6.so) goto loc_821A51E0;
	// fsubs f7,f0,f30
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x821a51e0
	goto loc_821A51E0;
loc_821A51BC:
	// lfs f0,4180(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821a51e0
	if (!ctx.cr6.gt) goto loc_821A51E0;
	// lfs f0,1608(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 1608);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821a51e0
	if (ctx.cr6.gt) goto loc_821A51E0;
	// bso cr6,0x821a51e0
	if (ctx.cr6.so) goto loc_821A51E0;
	// fsubs f6,f0,f30
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_821A51E0:
	// lfs f5,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r30,-32
	ctx.r3.s64 = ctx.r30.s64 + -32;
	// fadds f1,f5,f30
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f30.f64));
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bl 0x8219e430
	ctx.lr = 0x821A51F4;
	sub_8219E430(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821a5214
	if (!ctx.cr6.eq) goto loc_821A5214;
loc_821A5200:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x821a516c
	if (ctx.cr6.lt) goto loc_821A516C;
	// b 0x821a5278
	goto loc_821A5278;
loc_821A5214:
	// lhz r6,86(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// bne cr6,0x821a522c
	if (!ctx.cr6.eq) goto loc_821A522C;
	// lhz r5,142(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 142);
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// beq cr6,0x821a5260
	if (ctx.cr6.eq) goto loc_821A5260;
loc_821A522C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f29,16(r21)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r21.u32 + 16, temp.u32);
	// stw r19,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r19.u32);
	// stw r19,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r19.u32);
	// stw r19,20(r21)
	PPC_STORE_U32(ctx.r21.u32 + 20, ctx.r19.u32);
	// stw r19,28(r21)
	PPC_STORE_U32(ctx.r21.u32 + 28, ctx.r19.u32);
	// lfs f0,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// stb r19,24(r21)
	PPC_STORE_U8(ctx.r21.u32 + 24, ctx.r19.u8);
	// stfs f0,12(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 12, temp.u32);
	// stb r19,25(r21)
	PPC_STORE_U8(ctx.r21.u32 + 25, ctx.r19.u8);
	// stb r17,26(r21)
	PPC_STORE_U8(ctx.r21.u32 + 26, ctx.r17.u8);
	// stw r19,32(r21)
	PPC_STORE_U32(ctx.r21.u32 + 32, ctx.r19.u32);
	// stb r19,237(r21)
	PPC_STORE_U8(ctx.r21.u32 + 237, ctx.r19.u8);
loc_821A5260:
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82189bb8
	ctx.lr = 0x821A526C;
	sub_82189BB8(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82189bb8
	ctx.lr = 0x821A5278;
	sub_82189BB8(ctx, base);
loc_821A5278:
	// lfs f13,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// beq cr6,0x821a54f8
	if (ctx.cr6.eq) goto loc_821A54F8;
	// lfs f0,128(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,1628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bso cr6,0x821a52a0
	if (ctx.cr6.so) goto loc_821A52A0;
	// ble cr6,0x821a54f8
	if (!ctx.cr6.gt) goto loc_821A54F8;
loc_821A52A0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,-4736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x821a5344
	if (ctx.cr6.gt) goto loc_821A5344;
	// bso cr6,0x821a5344
	if (ctx.cr6.so) goto loc_821A5344;
	// fsubs f4,f0,f13
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f3,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f2,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f2.f64 = double(temp.f32);
	// lfs f13,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f3,f13
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// lfs f0,-15672(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15672);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f2,f12
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// lfs f11,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// lfs f1,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f7,f1,f11
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// lfs f6,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fsubs f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f2,f0,f10
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f2,124(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r4,192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 192, ctx.r4.u64);
	// std r3,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r3.u64);
	// b 0x821a54f8
	goto loc_821A54F8;
loc_821A5344:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f11,-15128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15128);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821a53e8
	if (ctx.cr6.gt) goto loc_821A53E8;
	// bso cr6,0x821a53e8
	if (ctx.cr6.so) goto loc_821A53E8;
	// fsubs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f12,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-1628(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1628);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f8,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f10,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f6,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fsubs f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f2,f0,f10
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f2,124(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 192, ctx.r10.u64);
	// std r9,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r9.u64);
	// b 0x821a54f8
	goto loc_821A54F8;
loc_821A53E8:
	// lfs f12,8360(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 8360);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x821a549c
	if (ctx.cr6.gt) goto loc_821A549C;
	// bso cr6,0x821a549c
	if (ctx.cr6.so) goto loc_821A549C;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r11,23536
	ctx.r10.s64 = ctx.r11.s64 + 23536;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,-14428(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14428);
	ctx.f0.f64 = double(temp.f32);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// std r8,208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 208, ctx.r8.u64);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 216, ctx.r7.u64);
	// lfs f13,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f10,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f6,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fadds f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f2,f0,f10
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f2,124(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,192(r31)
	PPC_STORE_U64(ctx.r31.u32 + 192, ctx.r6.u64);
	// std r5,200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 200, ctx.r5.u64);
	// b 0x821a54f8
	goto loc_821A54F8;
loc_821A549C:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r10,r31,208
	ctx.r10.s64 = ctx.r31.s64 + 208;
	// addi r11,r11,23536
	ctx.r11.s64 = ctx.r11.s64 + 23536;
	// addi r8,r31,224
	ctx.r8.s64 = ctx.r31.s64 + 224;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r6,r31,192
	ctx.r6.s64 = ctx.r31.s64 + 192;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// ld r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// ld r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// ld r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// stfs f29,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
loc_821A54F8:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-2944
	ctx.r3.s64 = ctx.r11.s64 + -2944;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// bl 0x8214ec00
	ctx.lr = 0x821A550C;
	sub_8214EC00(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A5520"))) PPC_WEAK_FUNC(sub_821A5520);
PPC_FUNC_IMPL(__imp__sub_821A5520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac0
	ctx.lr = 0x821A5528;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8259bba4
	ctx.lr = 0x821A5530;
	__savefpr_27(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r15,0
	ctx.r15.s64 = 0;
	// addi r22,r10,-15712
	ctx.r22.s64 = ctx.r10.s64 + -15712;
	// lhz r9,16(r20)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r20.u32 + 16);
	// lis r26,-32161
	ctx.r26.s64 = -2107703296;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// extsh r27,r9
	ctx.r27.s64 = ctx.r9.s16;
	// lbz r7,28(r20)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r20.u32 + 28);
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lfs f0,32(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r23,r11,26752
	ctx.r23.s64 = ctx.r11.s64 + 26752;
	// lwz r6,2216(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2216);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f27,25556(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 25556);
	ctx.f27.f64 = double(temp.f32);
	// mulli r7,r9,1104
	ctx.r7.s64 = ctx.r9.s64 * 1104;
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r17,56(r23)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r23.u32 + 56);
	// lfs f28,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f28.f64 = double(temp.f32);
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// fmr f30,f28
	ctx.f30.f64 = ctx.f28.f64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mulli r9,r9,19200
	ctx.r9.s64 = ctx.r9.s64 * 19200;
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r25,r10,1008
	ctx.r25.s64 = ctx.r10.s64 + 1008;
	// addi r8,r11,-28496
	ctx.r8.s64 = ctx.r11.s64 + -28496;
	// addi r11,r17,-1
	ctx.r11.s64 = ctx.r17.s64 + -1;
	// add r24,r9,r8
	ctx.r24.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r24.u32);
	// blt cr6,0x821a5638
	if (ctx.cr6.lt) goto loc_821A5638;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r9,r20
	ctx.r9.u64 = ctx.r9.u64 + ctx.r20.u64;
	// addi r7,r20,104
	ctx.r7.s64 = ctx.r20.s64 + 104;
loc_821A5604:
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r11,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r11.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfs f13,23556(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 23556);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r15,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r15.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// stb r3,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r3.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bge cr6,0x821a5604
	if (!ctx.cr6.lt) goto loc_821A5604;
loc_821A5638:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821a5768
	if (ctx.cr6.gt) goto loc_821A5768;
	// lis r12,-32230
	ctx.r12.s64 = -2112225280;
	// addi r12,r12,22108
	ctx.r12.s64 = ctx.r12.s64 + 22108;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821A5680;
	case 1:
		goto loc_821A5768;
	case 2:
		goto loc_821A5768;
	case 3:
		goto loc_821A5768;
	case 4:
		goto loc_821A5768;
	case 5:
		goto loc_821A5744;
	case 6:
		goto loc_821A5768;
	case 7:
		goto loc_821A575C;
	case 8:
		goto loc_821A5690;
	default:
		__builtin_unreachable();
	}
	// lwz r16,22144(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22144);
	// lwz r16,22376(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22376);
	// lwz r16,22376(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22376);
	// lwz r16,22376(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22376);
	// lwz r16,22376(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22376);
	// lwz r16,22340(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22340);
	// lwz r16,22376(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22376);
	// lwz r16,22364(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22364);
	// lwz r16,22160(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22160);
loc_821A5680:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82189e40
	ctx.lr = 0x821A568C;
	sub_82189E40(ctx, base);
	// b 0x821a5768
	goto loc_821A5768;
loc_821A5690:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82189f78
	ctx.lr = 0x821A569C;
	sub_82189F78(ctx, base);
	// lfs f0,40(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// cmpwi cr6,r17,4
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 4, ctx.xer);
	// blt cr6,0x821a570c
	if (ctx.cr6.lt) goto loc_821A570C;
	// addi r10,r17,-4
	ctx.r10.s64 = ctx.r17.s64 + -4;
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_821A56C0:
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f9,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f7,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfs f8,0(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f5,0(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// bne cr6,0x821a56c0
	if (!ctx.cr6.eq) goto loc_821A56C0;
loc_821A570C:
	// cmpw cr6,r6,r17
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r17.s32, ctx.xer);
	// bge cr6,0x821a5768
	if (!ctx.cr6.lt) goto loc_821A5768;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// subf r10,r6,r17
	ctx.r10.s64 = ctx.r17.s64 - ctx.r6.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_821A5724:
	// lfs f4,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fsubs f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821a5724
	if (!ctx.cr6.eq) goto loc_821A5724;
	// b 0x821a5768
	goto loc_821A5768;
loc_821A5744:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8218a0f0
	ctx.lr = 0x821A5758;
	sub_8218A0F0(ctx, base);
	// b 0x821a5768
	goto loc_821A5768;
loc_821A575C:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8218a330
	ctx.lr = 0x821A5768;
	sub_8218A330(ctx, base);
loc_821A5768:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ble cr6,0x821a57d0
	if (!ctx.cr6.gt) goto loc_821A57D0;
	// addi r29,r20,208
	ctx.r29.s64 = ctx.r20.s64 + 208;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
loc_821A5778:
	// lwz r9,832(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 832);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821a57c0
	if (!ctx.cr6.gt) goto loc_821A57C0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821A578C:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821a57ac
	if (!ctx.cr6.eq) goto loc_821A57AC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,8(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82353538
	ctx.lr = 0x821A57A8;
	sub_82353538(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_821A57AC:
	// lwz r7,832(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 832);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821a578c
	if (ctx.cr6.lt) goto loc_821A578C;
loc_821A57C0:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r29,r29,120
	ctx.r29.s64 = ctx.r29.s64 + 120;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821a5778
	if (!ctx.cr6.eq) goto loc_821A5778;
loc_821A57D0:
	// lwz r6,836(r20)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r20.u32 + 836);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821a5804
	if (!ctx.cr6.eq) goto loc_821A5804;
	// lbz r5,28(r20)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r20.u32 + 28);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// lwz r5,8(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// mulli r11,r3,1104
	ctx.r11.s64 = ctx.r3.s64 * 1104;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
	// bl 0x82353538
	ctx.lr = 0x821A5800;
	sub_82353538(ctx, base);
	// stw r3,836(r20)
	PPC_STORE_U32(ctx.r20.u32 + 836, ctx.r3.u32);
loc_821A5804:
	// rlwinm r11,r17,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,23556(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 23556);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lfs f2,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f0,-1660(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -1660);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,836(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 836);
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r19,r9,20064
	ctx.r19.s64 = ctx.r9.s64 + 20064;
	// lfs f11,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f2,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r19,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r19.u32);
	// lfs f0,-1608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1608);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f1,f13,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// bl 0x82194d10
	ctx.lr = 0x821A5864;
	sub_82194D10(ctx, base);
	// lwz r9,832(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 832);
	// fmr f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f28.f64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bgt cr6,0x821a587c
	if (ctx.cr6.gt) goto loc_821A587C;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_821A587C:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r14,r11,-23608
	ctx.r14.s64 = ctx.r11.s64 + -23608;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r26,-32253
	ctx.r26.s64 = -2113732608;
	// addi r21,r11,24576
	ctx.r21.s64 = ctx.r11.s64 + 24576;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lis r27,-32161
	ctx.r27.s64 = -2107703296;
	// addi r18,r11,-4000
	ctx.r18.s64 = ctx.r11.s64 + -4000;
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// stw r18,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r18.u32);
	// beq cr6,0x821a59a4
	if (ctx.cr6.eq) goto loc_821A59A4;
	// addi r10,r21,16
	ctx.r10.s64 = ctx.r21.s64 + 16;
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// ble cr6,0x821a5990
	if (!ctx.cr6.gt) goto loc_821A5990;
	// addi r29,r1,224
	ctx.r29.s64 = ctx.r1.s64 + 224;
	// addi r30,r20,228
	ctx.r30.s64 = ctx.r20.s64 + 228;
	// addi r28,r20,104
	ctx.r28.s64 = ctx.r20.s64 + 104;
loc_821A58E0:
	// lbzx r4,r28,r31
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// addi r3,r23,24
	ctx.r3.s64 = ctx.r23.s64 + 24;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// bl 0x82365758
	ctx.lr = 0x821A58F0;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5904
	if (ctx.cr6.eq) goto loc_821A5904;
	// lwz r3,1932(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1932);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821a5908
	if (!ctx.cr6.eq) goto loc_821A5908;
loc_821A5904:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_821A5908:
	// bl 0x820bd910
	ctx.lr = 0x821A590C;
	sub_820BD910(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a5928
	if (ctx.cr6.eq) goto loc_821A5928;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,348(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// b 0x821a592c
	goto loc_821A592C;
loc_821A5928:
	// stfs f28,348(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
loc_821A592C:
	// lfs f0,23552(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 23552);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// lfs f13,-14792(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -14792);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// lwz r8,144(r14)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r14.u32 + 144);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f13,304(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// stfs f13,308(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// fneg f8,f0
	ctx.f8.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f8,248(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fsubs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f7,252(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// bl 0x8235fae0
	ctx.lr = 0x821A597C;
	sub_8235FAE0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,120
	ctx.r30.s64 = ctx.r30.s64 + 120;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r17
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x821a58e0
	if (ctx.cr6.lt) goto loc_821A58E0;
loc_821A5990:
	// lfs f6,23552(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 23552);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f29,f6
	ctx.f29.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f5,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f30,f29,f5
	ctx.f30.f64 = double(float(ctx.f29.f64 - ctx.f5.f64));
loc_821A59A4:
	// lwz r11,832(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 832);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x821a59b8
	if (!ctx.cr6.lt) goto loc_821A59B8;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_821A59B8:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r16,r11,304
	ctx.r16.s64 = ctx.r11.s64 + 304;
	// lis r22,-32161
	ctx.r22.s64 = -2107703296;
	// stw r16,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r16.u32);
	// beq cr6,0x821a5be0
	if (ctx.cr6.eq) goto loc_821A5BE0;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ble cr6,0x821a5bd0
	if (!ctx.cr6.gt) goto loc_821A5BD0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r25,r1,224
	ctx.r25.s64 = ctx.r1.s64 + 224;
	// addi r23,r11,-7992
	ctx.r23.s64 = ctx.r11.s64 + -7992;
	// addi r29,r20,112
	ctx.r29.s64 = ctx.r20.s64 + 112;
	// addi r24,r20,104
	ctx.r24.s64 = ctx.r20.s64 + 104;
loc_821A59F4:
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// lwz r30,104(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lbzx r8,r24,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r27.u32);
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// lfs f31,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r26,r8
	ctx.r26.s64 = ctx.r8.s8;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// stb r15,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r15.u8);
	// stb r15,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r15.u8);
	// stb r15,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r15.u8);
	// stb r15,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r15.u8);
	// bl 0x82361f20
	ctx.lr = 0x821A5A38;
	sub_82361F20(ctx, base);
	// addi r10,r21,32
	ctx.r10.s64 = ctx.r21.s64 + 32;
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// clrlwi r4,r9,31
	ctx.r4.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// beq cr6,0x821a5a6c
	if (ctx.cr6.eq) goto loc_821A5A6C;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,24(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// b 0x821a5aa4
	goto loc_821A5AA4;
loc_821A5A6C:
	// rlwinm r7,r9,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821a5a84
	if (ctx.cr6.eq) goto loc_821A5A84;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,32(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// b 0x821a5aa4
	goto loc_821A5AA4;
loc_821A5A84:
	// rlwinm r5,r9,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a5a9c
	if (ctx.cr6.eq) goto loc_821A5A9C;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,36(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// b 0x821a5aa4
	goto loc_821A5AA4;
loc_821A5A9C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,28(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_821A5AA4:
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a5ac0
	if (ctx.cr6.eq) goto loc_821A5AC0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82351f08
	ctx.lr = 0x821A5ABC;
	sub_82351F08(ctx, base);
	// b 0x821a5ae4
	goto loc_821A5AE4;
loc_821A5AC0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82361f20
	ctx.lr = 0x821A5AC8;
	sub_82361F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a5ad8
	if (!ctx.cr6.eq) goto loc_821A5AD8;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// b 0x821a5ae4
	goto loc_821A5AE4;
loc_821A5AD8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A5AE4;
	sub_82351E40(ctx, base);
loc_821A5AE4:
	// lfs f0,24880(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 24880);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fadds f4,f0,f1
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lfs f0,-1592(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1592);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// lfs f0,24880(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 24880);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f28,16(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f0,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f13,4(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f1,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f0,296(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// stfs f13,300(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A5B60;
	sub_82352710(ctx, base);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// lbzx r9,r27,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a5b9c
	if (ctx.cr6.eq) goto loc_821A5B9C;
	// addi r8,r26,8
	ctx.r8.s64 = ctx.r26.s64 + 8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r20
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r20.u32);
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// b 0x821a5bb0
	goto loc_821A5BB0;
loc_821A5B9C:
	// addi r10,r21,48
	ctx.r10.s64 = ctx.r21.s64 + 48;
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
loc_821A5BB0:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// fsubs f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// addi r29,r29,120
	ctx.r29.s64 = ctx.r29.s64 + 120;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r27,r17
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r17.s32, ctx.xer);
	// fsel f29,f12,f29,f0
	ctx.f29.f64 = ctx.f12.f64 >= 0.0 ? ctx.f29.f64 : ctx.f0.f64;
	// blt cr6,0x821a59f4
	if (ctx.cr6.lt) goto loc_821A59F4;
loc_821A5BD0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r23,108(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f11,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f30,f29,f11
	ctx.f30.f64 = double(float(ctx.f29.f64 - ctx.f11.f64));
loc_821A5BE0:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// addi r27,r11,20096
	ctx.r27.s64 = ctx.r11.s64 + 20096;
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// ble cr6,0x821a5cf4
	if (!ctx.cr6.gt) goto loc_821A5CF4;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r29,r1,224
	ctx.r29.s64 = ctx.r1.s64 + 224;
	// addi r30,r20,112
	ctx.r30.s64 = ctx.r20.s64 + 112;
	// addi r28,r20,104
	ctx.r28.s64 = ctx.r20.s64 + 104;
	// addi r26,r11,23568
	ctx.r26.s64 = ctx.r11.s64 + 23568;
loc_821A5C20:
	// lbzx r6,r28,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// addi r3,r23,24
	ctx.r3.s64 = ctx.r23.s64 + 24;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// bl 0x82365758
	ctx.lr = 0x821A5C30;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821a5c44
	if (!ctx.cr6.eq) goto loc_821A5C44;
	// addi r3,r23,24
	ctx.r3.s64 = ctx.r23.s64 + 24;
	// bl 0x823656e8
	ctx.lr = 0x821A5C40;
	sub_823656E8(ctx, base);
	// b 0x821a5c48
	goto loc_821A5C48;
loc_821A5C44:
	// bl 0x823475c0
	ctx.lr = 0x821A5C48;
	sub_823475C0(ctx, base);
loc_821A5C48:
	// lbz r5,2472(r23)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r23.u32 + 2472);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x821a5c84
	if (!ctx.cr6.eq) goto loc_821A5C84;
	// lwz r9,2488(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 2488);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821a5c84
	if (!ctx.cr6.gt) goto loc_821A5C84;
	// addi r10,r23,2492
	ctx.r10.s64 = ctx.r23.s64 + 2492;
loc_821A5C68:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821a5e3c
	if (ctx.cr6.eq) goto loc_821A5E3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821a5c68
	if (ctx.cr6.lt) goto loc_821A5C68;
loc_821A5C84:
	// stfs f28,332(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
loc_821A5C88:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f10,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// lwz r8,140(r14)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r14.u32 + 140);
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// lfs f0,23552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23552);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lfs f13,-14792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14792);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,272(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f13,276(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fsubs f9,f30,f0
	ctx.f9.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f9,288(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f8,292(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// bl 0x8235fae0
	ctx.lr = 0x821A5CE0;
	sub_8235FAE0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,120
	ctx.r30.s64 = ctx.r30.s64 + 120;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r17
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x821a5c20
	if (ctx.cr6.lt) goto loc_821A5C20;
loc_821A5CF4:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,832(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 832);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// lfs f7,23552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23552);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f6,f30,f7
	ctx.f6.f64 = double(float(ctx.f30.f64 - ctx.f7.f64));
	// lfs f5,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f5.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f31,f6,f5
	ctx.f31.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// bgt cr6,0x821a5d20
	if (ctx.cr6.gt) goto loc_821A5D20;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_821A5D20:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a615c
	if (ctx.cr6.eq) goto loc_821A615C;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// mr r21,r15
	ctx.r21.u64 = ctx.r15.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f0,192(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fadds f29,f31,f0
	ctx.f29.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// ble cr6,0x821a6128
	if (!ctx.cr6.gt) goto loc_821A6128;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r25,r1,224
	ctx.r25.s64 = ctx.r1.s64 + 224;
	// addi r19,r11,-7992
	ctx.r19.s64 = ctx.r11.s64 + -7992;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r28,r20,176
	ctx.r28.s64 = ctx.r20.s64 + 176;
	// addi r24,r11,20016
	ctx.r24.s64 = ctx.r11.s64 + 20016;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r16,r20,104
	ctx.r16.s64 = ctx.r20.s64 + 104;
	// lis r22,-32091
	ctx.r22.s64 = -2103115776;
	// lis r23,-32091
	ctx.r23.s64 = -2103115776;
	// addi r26,r11,26080
	ctx.r26.s64 = ctx.r11.s64 + 26080;
	// li r17,38
	ctx.r17.s64 = 38;
	// li r18,37
	ctx.r18.s64 = 37;
loc_821A5D90:
	// lbzx r5,r16,r21
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r16.u32 + ctx.r21.u32);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// extsb r31,r5
	ctx.r31.s64 = ctx.r5.s8;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82365758
	ctx.lr = 0x821A5DA8;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821a5e94
	if (!ctx.cr6.eq) goto loc_821A5E94;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
loc_821A5DB4:
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r20.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r14
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
loc_821A5DC8:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r31,14
	ctx.r9.s64 = ctx.r31.s64 + 14;
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lfs f31,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f0,-14792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14792);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f0,-1592(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1592);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r7,r20
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r20.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// ld r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// lfs f0,23552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23552);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fnmsubs f11,f0,f27,f31
	ctx.f11.f64 = double(float(-(ctx.f0.f64 * ctx.f27.f64 - ctx.f31.f64)));
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// lfs f0,128(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821a5f10
	if (!ctx.cr6.eq) goto loc_821A5F10;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r7,r11,-23312
	ctx.r7.s64 = ctx.r11.s64 + -23312;
	// b 0x821a5f18
	goto loc_821A5F18;
loc_821A5E3C:
	// mulli r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 * 28;
	// addi r11,r23,2519
	ctx.r11.s64 = ctx.r23.s64 + 2519;
	// lbzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821a5e70
	if (!ctx.cr6.eq) goto loc_821A5E70;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// b 0x821a5c88
	goto loc_821A5C88;
loc_821A5E70:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821a5c84
	if (!ctx.cr6.eq) goto loc_821A5C84;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// b 0x821a5c88
	goto loc_821A5C88;
loc_821A5E94:
	// addi r4,r3,23108
	ctx.r4.s64 = ctx.r3.s64 + 23108;
	// addi r3,r30,8840
	ctx.r3.s64 = ctx.r30.s64 + 8840;
	// bl 0x8222c180
	ctx.lr = 0x821A5EA0;
	sub_8222C180(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x821a5edc
	if (!ctx.cr6.lt) goto loc_821A5EDC;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,14
	ctx.r3.s64 = ctx.r31.s64 + 14;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,152(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 152);
	// stfs f0,364(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stwx r17,r10,r20
	PPC_STORE_U32(ctx.r10.u32 + ctx.r20.u32, ctx.r17.u32);
	// lfs f0,128(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r20
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r20.u32, temp.u32);
	// b 0x821a5dc8
	goto loc_821A5DC8;
loc_821A5EDC:
	// ble cr6,0x821a5db4
	if (!ctx.cr6.gt) goto loc_821A5DB4;
	// addi r8,r31,20
	ctx.r8.s64 = ctx.r31.s64 + 20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r31,14
	ctx.r7.s64 = ctx.r31.s64 + 14;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,148(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 148);
	// stfs f0,364(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stwx r18,r6,r20
	PPC_STORE_U32(ctx.r6.u32 + ctx.r20.u32, ctx.r18.u32);
	// lfs f0,128(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r5,r20
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r20.u32, temp.u32);
	// b 0x821a5dc8
	goto loc_821A5DC8;
loc_821A5F10:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r7,r11,17264
	ctx.r7.s64 = ctx.r11.s64 + 17264;
loc_821A5F18:
	// lfs f4,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// li r9,24
	ctx.r9.s64 = 24;
	// lfs f3,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// li r8,64
	ctx.r8.s64 = 64;
	// lfs f2,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f3,f4
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// lfs f1,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// fmuls f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f13,284(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A5F58;
	sub_82352710(ctx, base);
	// lwz r30,44(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// neg r4,r27
	ctx.r4.s64 = -ctx.r27.s64;
	// blt cr6,0x821a5f6c
	if (ctx.cr6.lt) goto loc_821A5F6C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_821A5F6C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82362158
	ctx.lr = 0x821A5F7C;
	sub_82362158(ctx, base);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lfs f0,7876(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 7876);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// fsubs f30,f29,f0
	ctx.f30.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// lfs f0,3744(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 3744);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// stb r15,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r15.u8);
	// stb r15,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r15.u8);
	// stb r15,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r15.u8);
	// stb r15,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r15.u8);
	// bl 0x82361f20
	ctx.lr = 0x821A5FC0;
	sub_82361F20(ctx, base);
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821a5fdc
	if (ctx.cr6.eq) goto loc_821A5FDC;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r29,24(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// b 0x821a6014
	goto loc_821A6014;
loc_821A5FDC:
	// rlwinm r5,r11,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a5ff4
	if (ctx.cr6.eq) goto loc_821A5FF4;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r29,32(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// b 0x821a6014
	goto loc_821A6014;
loc_821A5FF4:
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a600c
	if (ctx.cr6.eq) goto loc_821A600C;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r29,36(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// b 0x821a6014
	goto loc_821A6014;
loc_821A600C:
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r29,28(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
loc_821A6014:
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821a6030
	if (ctx.cr6.eq) goto loc_821A6030;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351f08
	ctx.lr = 0x821A602C;
	sub_82351F08(ctx, base);
	// b 0x821a6054
	goto loc_821A6054;
loc_821A6030:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82361f20
	ctx.lr = 0x821A6038;
	sub_82361F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a6048
	if (!ctx.cr6.eq) goto loc_821A6048;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// b 0x821a6054
	goto loc_821A6054;
loc_821A6048:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A6054;
	sub_82351E40(ctx, base);
loc_821A6054:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,64
	ctx.r8.s64 = 64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f0,24880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24880);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// fadds f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ld r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// lfs f0,24880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24880);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f28,16(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f0,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fsubs f8,f30,f0
	ctx.f8.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f8,264(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fsubs f7,f31,f13
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// stfs f7,268(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A60D4;
	sub_82352710(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// beq cr6,0x821a60f8
	if (ctx.cr6.eq) goto loc_821A60F8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// b 0x821a6110
	goto loc_821A6110;
loc_821A60F8:
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r6,48
	ctx.r10.s64 = ctx.r6.s64 + 48;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
loc_821A6110:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r28,r28,120
	ctx.r28.s64 = ctx.r28.s64 + 120;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r21,r3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821a5d90
	if (ctx.cr6.lt) goto loc_821A5D90;
loc_821A6128:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r19,152(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r21,104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r16,156(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r17,136(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lfs f6,23552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23552);
	ctx.f6.f64 = double(temp.f32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fsubs f5,f29,f6
	ctx.f5.f64 = double(float(ctx.f29.f64 - ctx.f6.f64));
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f3,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// fsubs f31,f4,f3
	ctx.f31.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
loc_821A615C:
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ble cr6,0x821a6374
	if (!ctx.cr6.gt) goto loc_821A6374;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r18,100(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r14,96(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r26,r1,224
	ctx.r26.s64 = ctx.r1.s64 + 224;
	// addi r23,r11,-7992
	ctx.r23.s64 = ctx.r11.s64 + -7992;
	// addi r27,r20,144
	ctx.r27.s64 = ctx.r20.s64 + 144;
	// addi r22,r20,104
	ctx.r22.s64 = ctx.r20.s64 + 104;
loc_821A6184:
	// lbzx r10,r22,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r28.u32);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// extsb r24,r10
	ctx.r24.s64 = ctx.r10.s8;
	// lwz r29,64(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// addi r3,r9,24
	ctx.r3.s64 = ctx.r9.s64 + 24;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82365758
	ctx.lr = 0x821A61A0;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821a61b4
	if (!ctx.cr6.eq) goto loc_821A61B4;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r30,r8,15424
	ctx.r30.s64 = ctx.r8.s64 + 15424;
	// b 0x821a61e8
	goto loc_821A61E8;
loc_821A61B4:
	// lwz r11,1932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1932);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a61e4
	if (!ctx.cr6.eq) goto loc_821A61E4;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821A61D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82361dd0
	ctx.lr = 0x821A61DC;
	sub_82361DD0(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x821a61e8
	goto loc_821A61E8;
loc_821A61E4:
	// addi r30,r11,15424
	ctx.r30.s64 = ctx.r11.s64 + 15424;
loc_821A61E8:
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// lfs f30,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r31,r29,32
	ctx.r31.s64 = ctx.r29.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stb r15,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r15.u8);
	// stb r15,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r15.u8);
	// stb r15,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r15.u8);
	// stb r15,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r15.u8);
	// bl 0x82361f20
	ctx.lr = 0x821A6220;
	sub_82361F20(ctx, base);
	// addi r10,r21,32
	ctx.r10.s64 = ctx.r21.s64 + 32;
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// beq cr6,0x821a6250
	if (ctx.cr6.eq) goto loc_821A6250;
	// lwz r25,24(r14)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24);
	// b 0x821a627c
	goto loc_821A627C;
loc_821A6250:
	// rlwinm r5,r9,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a6264
	if (ctx.cr6.eq) goto loc_821A6264;
	// lwz r25,32(r14)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r14.u32 + 32);
	// b 0x821a627c
	goto loc_821A627C;
loc_821A6264:
	// rlwinm r4,r9,0,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821a6278
	if (ctx.cr6.eq) goto loc_821A6278;
	// lwz r25,36(r14)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r14.u32 + 36);
	// b 0x821a627c
	goto loc_821A627C;
loc_821A6278:
	// lwz r25,28(r14)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
loc_821A627C:
	// rlwinm r3,r9,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a6298
	if (ctx.cr6.eq) goto loc_821A6298;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82351f08
	ctx.lr = 0x821A6294;
	sub_82351F08(ctx, base);
	// b 0x821a62bc
	goto loc_821A62BC;
loc_821A6298:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361f20
	ctx.lr = 0x821A62A0;
	sub_82361F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a62b0
	if (!ctx.cr6.eq) goto loc_821A62B0;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// b 0x821a62bc
	goto loc_821A62BC;
loc_821A62B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A62BC;
	sub_82351E40(ctx, base);
loc_821A62BC:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lfs f0,24880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24880);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fadds f2,f0,f1
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f0,-1592(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + -1592);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// lfs f0,24880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24880);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f28,16(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsubs f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stfs f11,256(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fsubs f10,f30,f13
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// stfs f10,260(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A6338;
	sub_82352710(ctx, base);
	// addi r9,r24,8
	ctx.r9.s64 = ctx.r24.s64 + 8;
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,120
	ctx.r27.s64 = ctx.r27.s64 + 120;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r28,r17
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r17.s32, ctx.xer);
	// lwzx r7,r8,r20
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r20.u32);
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// blt cr6,0x821a6184
	if (ctx.cr6.lt) goto loc_821A6184;
loc_821A6374:
	// cmpwi cr6,r17,6
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 6, ctx.xer);
	// bge cr6,0x821a63a8
	if (!ctx.cr6.lt) goto loc_821A63A8;
	// mulli r11,r17,120
	ctx.r11.s64 = ctx.r17.s64 * 120;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// subfic r31,r17,6
	ctx.xer.ca = ctx.r17.u32 <= 6;
	ctx.r31.s64 = 6 - ctx.r17.s64;
	// addi r30,r11,112
	ctx.r30.s64 = ctx.r11.s64 + 112;
loc_821A638C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8218a480
	ctx.lr = 0x821A6398;
	sub_8218A480(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,120
	ctx.r30.s64 = ctx.r30.s64 + 120;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821a638c
	if (!ctx.cr6.eq) goto loc_821A638C;
loc_821A63A8:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8259bbf0
	ctx.lr = 0x821A63B4;
	__restfpr_27(ctx, base);
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A63B8"))) PPC_WEAK_FUNC(sub_821A63B8);
PPC_FUNC_IMPL(__imp__sub_821A63B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad8
	ctx.lr = 0x821A63C0;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r9,r10,36976
	ctx.r9.u64 = ctx.r10.u64 | 36976;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r29,72
	ctx.r3.s64 = ctx.r29.s64 + 72;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r21,r11,23504
	ctx.r21.s64 = ctx.r11.s64 + 23504;
	// lwz r11,24(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// lfs f31,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// stw r4,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r4.u32);
	// bl 0x82362158
	ctx.lr = 0x821A6408;
	sub_82362158(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lwz r24,40(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r11,304
	ctx.r25.s64 = ctx.r11.s64 + 304;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r28,r11,-15712
	ctx.r28.s64 = ctx.r11.s64 + -15712;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r31,r24,32
	ctx.r31.s64 = ctx.r24.s64 + 32;
	// addi r26,r29,68
	ctx.r26.s64 = ctx.r29.s64 + 68;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f0,-56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-1816(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -1816);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmadds f30,f31,f0,f13
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f13.f64));
	// addi r22,r9,-7992
	ctx.r22.s64 = ctx.r9.s64 + -7992;
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// stb r30,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r30.u8);
	// stb r30,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r30.u8);
	// stb r30,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r30.u8);
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// bl 0x82361f20
	ctx.lr = 0x821A646C;
	sub_82361F20(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lbz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// addi r23,r11,7920
	ctx.r23.s64 = ctx.r11.s64 + 7920;
	// ori r10,r5,5
	ctx.r10.u64 = ctx.r5.u64 | 5;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r10,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r10.u8);
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// beq cr6,0x821a64ac
	if (ctx.cr6.eq) goto loc_821A64AC;
	// lwz r27,24(r21)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// b 0x821a64e0
	goto loc_821A64E0;
loc_821A64AC:
	// lbz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821a64c4
	if (ctx.cr6.eq) goto loc_821A64C4;
	// lwz r27,32(r21)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	// b 0x821a64e0
	goto loc_821A64E0;
loc_821A64C4:
	// lbz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// rlwinm r5,r6,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a64dc
	if (ctx.cr6.eq) goto loc_821A64DC;
	// lwz r27,36(r21)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// b 0x821a64e0
	goto loc_821A64E0;
loc_821A64DC:
	// lwz r27,28(r21)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
loc_821A64E0:
	// lbz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// lis r20,-32256
	ctx.r20.s64 = -2113929216;
	// rlwinm r3,r4,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a6504
	if (ctx.cr6.eq) goto loc_821A6504;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82351f08
	ctx.lr = 0x821A6500;
	sub_82351F08(ctx, base);
	// b 0x821a6528
	goto loc_821A6528;
loc_821A6504:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82361f20
	ctx.lr = 0x821A650C;
	sub_82361F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a651c
	if (!ctx.cr6.eq) goto loc_821A651C;
	// lfs f1,2864(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821a6528
	goto loc_821A6528;
loc_821A651C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A6528;
	sub_82351E40(ctx, base);
loc_821A6528:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f12,2864(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 2864);
	ctx.f12.f64 = double(temp.f32);
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r27,r11,24880
	ctx.r27.s64 = ctx.r11.s64 + 24880;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// lfs f0,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f10,f31
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fneg f9,f0
	ctx.f9.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f8,f30,f13
	ctx.f8.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A65A0;
	sub_82352710(ctx, base);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,13400
	ctx.r10.s64 = ctx.r10.s64 + 13400;
	// addi r24,r9,-7992
	ctx.r24.s64 = ctx.r9.s64 + -7992;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r26,40(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r25,36(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r31,r25,32
	ctx.r31.s64 = ctx.r25.s64 + 32;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// stb r30,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r30.u8);
	// stb r30,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r30.u8);
	// stb r30,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r30.u8);
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// bl 0x82361f20
	ctx.lr = 0x821A65EC;
	sub_82361F20(ctx, base);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// beq cr6,0x821a661c
	if (ctx.cr6.eq) goto loc_821A661C;
	// lwz r30,24(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// b 0x821a6648
	goto loc_821A6648;
loc_821A661C:
	// rlwinm r4,r9,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821a6630
	if (ctx.cr6.eq) goto loc_821A6630;
	// lwz r30,32(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	// b 0x821a6648
	goto loc_821A6648;
loc_821A6630:
	// rlwinm r3,r9,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a6644
	if (ctx.cr6.eq) goto loc_821A6644;
	// lwz r30,36(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// b 0x821a6648
	goto loc_821A6648;
loc_821A6644:
	// lwz r30,28(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
loc_821A6648:
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a6664
	if (ctx.cr6.eq) goto loc_821A6664;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82351f08
	ctx.lr = 0x821A6660;
	sub_82351F08(ctx, base);
	// b 0x821a6688
	goto loc_821A6688;
loc_821A6664:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82361f20
	ctx.lr = 0x821A666C;
	sub_82361F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a667c
	if (!ctx.cr6.eq) goto loc_821A667C;
	// lfs f1,2864(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821a6688
	goto loc_821A6688;
loc_821A667C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A6688;
	sub_82351E40(ctx, base);
loc_821A6688:
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// fadds f7,f0,f1
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r11,r11,20048
	ctx.r11.s64 = ctx.r11.s64 + 20048;
	// lfs f6,2864(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 2864);
	ctx.f6.f64 = double(temp.f32);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// lfs f0,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f6,16(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f0,-1812(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -1812);
	ctx.f0.f64 = double(temp.f32);
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f1,140(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A6710;
	sub_82352710(ctx, base);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821a6748
	if (!ctx.cr6.lt) goto loc_821A6748;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// b 0x821a6754
	goto loc_821A6754;
loc_821A6748:
	// stfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
loc_821A6754:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8219f208
	ctx.lr = 0x821A675C;
	sub_8219F208(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8259bb28
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A676C"))) PPC_WEAK_FUNC(sub_821A676C);
PPC_FUNC_IMPL(__imp__sub_821A676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A6770"))) PPC_WEAK_FUNC(sub_821A6770);
PPC_FUNC_IMPL(__imp__sub_821A6770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821A6778;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A67A8;
	sub_821931F8(ctx, base);
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,8
	ctx.r30.s64 = 8;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lhz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// mulli r11,r9,1104
	ctx.r11.s64 = ctx.r9.s64 * 1104;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// addi r27,r11,1008
	ctx.r27.s64 = ctx.r11.s64 + 1008;
loc_821A67D0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82353538
	ctx.lr = 0x821A67E0;
	sub_82353538(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821a67d0
	if (!ctx.cr6.lt) goto loc_821A67D0;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,16448
	ctx.r11.s64 = ctx.r11.s64 + 16448;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bgt cr6,0x821a680c
	if (ctx.cr6.gt) goto loc_821A680C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_821A680C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r10.u8);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-17388
	ctx.r29.s64 = ctx.r11.s64 + -17388;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,-24604(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24604);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821a6854
	if (!ctx.cr6.gt) goto loc_821A6854;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x821a6860
	goto loc_821A6860;
loc_821A6854:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821a6860
	if (!ctx.cr6.lt) goto loc_821A6860;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_821A6860:
	// stb r10,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r10.u8);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// stfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lis r9,-32091
	ctx.r9.s64 = -2103115776;
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,108(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// stfs f31,112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// ori r6,r7,16271
	ctx.r6.u64 = ctx.r7.u64 | 16271;
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lfs f13,4176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4176);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stb r11,126(r31)
	PPC_STORE_U8(ctx.r31.u32 + 126, ctx.r11.u8);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stb r11,127(r31)
	PPC_STORE_U8(ctx.r31.u32 + 127, ctx.r11.u8);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r9,r9,13400
	ctx.r9.s64 = ctx.r9.s64 + 13400;
	// lbzx r5,r10,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f31,88(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// addi r26,r8,-7992
	ctx.r26.s64 = ctx.r8.s64 + -7992;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// lfs f0,-14420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14420);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lwz r28,244(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	// addi r4,r10,304
	ctx.r4.s64 = ctx.r10.s64 + 304;
	// lwz r27,72(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r30,r27,32
	ctx.r30.s64 = ctx.r27.s64 + 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// stb r11,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r11.u8);
	// stb r11,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r11.u8);
	// stb r11,23(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23, ctx.r11.u8);
	// stb r11,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r11.u8);
	// bl 0x82361f20
	ctx.lr = 0x821A6920;
	sub_82361F20(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lbz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// addi r10,r11,7920
	ctx.r10.s64 = ctx.r11.s64 + 7920;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// beq cr6,0x821a695c
	if (ctx.cr6.eq) goto loc_821A695C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lwz r25,24(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x821a6998
	goto loc_821A6998;
loc_821A695C:
	// rlwinm r3,r9,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a6978
	if (ctx.cr6.eq) goto loc_821A6978;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lwz r25,32(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x821a6998
	goto loc_821A6998;
loc_821A6978:
	// rlwinm r11,r9,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// beq cr6,0x821a6994
	if (ctx.cr6.eq) goto loc_821A6994;
	// lwz r25,36(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x821a6998
	goto loc_821A6998;
loc_821A6994:
	// lwz r25,28(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_821A6998:
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a69b4
	if (ctx.cr6.eq) goto loc_821A69B4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82351f08
	ctx.lr = 0x821A69B0;
	sub_82351F08(ctx, base);
	// b 0x821a69d8
	goto loc_821A69D8;
loc_821A69B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82361f20
	ctx.lr = 0x821A69BC;
	sub_82361F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a69cc
	if (!ctx.cr6.eq) goto loc_821A69CC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x821a69d8
	goto loc_821A69D8;
loc_821A69CC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A69D8;
	sub_82351E40(ctx, base);
loc_821A69D8:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fadds f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f0,1676(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1676);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f31,16(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// addi r30,r11,20064
	ctx.r30.s64 = ctx.r11.s64 + 20064;
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fsubs f8,f30,f0
	ctx.f8.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f7,f29,f13
	ctx.f7.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A6A60;
	sub_82352710(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f0,1796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1796);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f1,1824(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1824);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f2.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82194d10
	ctx.lr = 0x821A6A8C;
	sub_82194D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219f468
	ctx.lr = 0x821A6A94;
	sub_8219F468(ctx, base);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f0,2028(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2028);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r10,20080
	ctx.r6.s64 = ctx.r10.s64 + 20080;
	// lwz r30,76(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lfs f30,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// addi r10,r10,23680
	ctx.r10.s64 = ctx.r10.s64 + 23680;
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fadds f10,f6,f5
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r7,-21872
	ctx.r7.s64 = ctx.r7.s64 + -21872;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,1716(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1716);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f0,-14424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14424);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fsubs f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f3,f0,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A6B14;
	sub_82352710(ctx, base);
	// stfs f30,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8218a720
	ctx.lr = 0x821A6B24;
	sub_8218A720(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A6B3C"))) PPC_WEAK_FUNC(sub_821A6B3C);
PPC_FUNC_IMPL(__imp__sub_821A6B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A6B40"))) PPC_WEAK_FUNC(sub_821A6B40);
PPC_FUNC_IMPL(__imp__sub_821A6B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x821A6B48;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8259bba0
	ctx.lr = 0x821A6B50;
	__savefpr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lis r9,-32124
	ctx.r9.s64 = -2105278464;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r28,r9,26080
	ctx.r28.s64 = ctx.r9.s64 + 26080;
	// addi r10,r11,20080
	ctx.r10.s64 = ctx.r11.s64 + 20080;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lbz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r8,r9,16271
	ctx.r8.u64 = ctx.r9.u64 | 16271;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// mulli r10,r9,1104
	ctx.r10.s64 = ctx.r9.s64 * 1104;
	// lfs f30,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f30.f64 = double(temp.f32);
	// lbzx r8,r28,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r8.u32);
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r27,988(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 988);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r26,r11,28544
	ctx.r26.s64 = ctx.r11.s64 + 28544;
	// beq cr6,0x821a6c18
	if (ctx.cr6.eq) goto loc_821A6C18;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// mulli r9,r9,19200
	ctx.r9.s64 = ctx.r9.s64 * 19200;
	// ori r5,r7,16216
	ctx.r5.u64 = ctx.r7.u64 | 16216;
	// lwzx r11,r28,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addis r11,r26,35
	ctx.r11.s64 = ctx.r26.s64 + 2293760;
	// addi r4,r11,-13016
	ctx.r4.s64 = ctx.r11.s64 + -13016;
	// lbzx r3,r9,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,2396(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2396);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// beq cr6,0x821a6c10
	if (ctx.cr6.eq) goto loc_821A6C10;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_821A6C10:
	// clrlwi r25,r11,24
	ctx.r25.u64 = ctx.r11.u32 & 0xFF;
	// b 0x821a6c1c
	goto loc_821A6C1C;
loc_821A6C18:
	// li r25,1
	ctx.r25.s64 = 1;
loc_821A6C1C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f26,f13,f12
	ctx.f26.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f28,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x821a6e0c
	if (ctx.cr6.eq) goto loc_821A6E0C;
	// clrlwi r6,r25,24
	ctx.r6.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821a6c50
	if (!ctx.cr6.eq) goto loc_821A6C50;
	// stfs f28,124(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
loc_821A6C50:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ld r23,16(r11)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ld r22,24(r11)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// std r23,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r23.u64);
	// std r22,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r22.u64);
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// std r9,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r9.u64);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r6,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r6.u64);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// std r5,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r5.u64);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r4,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r4.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r3,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r3.u64);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r9,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r9.u64);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ld r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// std r5,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r5.u64);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ld r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// std r29,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r29.u64);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// std r9,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r9.u64);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r6,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r6.u64);
	// std r5,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r5.u64);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r4,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r4.u64);
	// std r3,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r3.u64);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16271
	ctx.r10.u64 = ctx.r11.u64 | 16271;
	// lbzx r8,r28,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
loc_821A6E0C:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r28,r11,16448
	ctx.r28.s64 = ctx.r11.s64 + 16448;
	// lwz r30,12(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bgt cr6,0x821a6e24
	if (ctx.cr6.gt) goto loc_821A6E24;
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
loc_821A6E24:
	// lbz r9,125(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 125);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x821a6edc
	if (ctx.cr6.eq) goto loc_821A6EDC;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x821a6e50
	if (ctx.cr6.eq) goto loc_821A6E50;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821a6edc
	if (ctx.cr6.eq) goto loc_821A6EDC;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bne cr6,0x821a6edc
	if (!ctx.cr6.eq) goto loc_821A6EDC;
loc_821A6E50:
	// lbz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// mulli r10,r4,1104
	ctx.r10.s64 = ctx.r4.s64 * 1104;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8219f468
	ctx.lr = 0x821A6E70;
	sub_8219F468(ctx, base);
	// lbz r3,125(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 125);
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stb r3,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r3.u8);
	// stb r11,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r11.u8);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x821a6ea0
	if (!ctx.cr6.gt) goto loc_821A6EA0;
	// stfs f30,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x821a6ea8
	goto loc_821A6EA8;
loc_821A6EA0:
	// stfs f28,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
loc_821A6EA8:
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8219c750
	ctx.lr = 0x821A6ED0;
	sub_8219C750(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f28,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stb r7,126(r31)
	PPC_STORE_U8(ctx.r31.u32 + 126, ctx.r7.u8);
loc_821A6EDC:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// clrlwi r6,r25,24
	ctx.r6.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f31,-17388(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -17388);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,-24604(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24604);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x821a6fe4
	if (ctx.cr6.eq) goto loc_821A6FE4;
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fmuls f0,f11,f29
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x821a6f94
	if (ctx.cr6.gt) goto loc_821A6F94;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x821a6f28
	if (ctx.cr6.lt) goto loc_821A6F28;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821a6f94
	if (!ctx.cr6.lt) goto loc_821A6F94;
loc_821A6F28:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f0,36(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f10,f0
	ctx.f10.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfiwx f10,0,r5
	PPC_STORE_U32(ctx.r5.u32, ctx.f10.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fsubs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bge cr6,0x821a6f6c
	if (!ctx.cr6.lt) goto loc_821A6F6C;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x821a6f70
	goto loc_821A6F70;
loc_821A6F6C:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_821A6F70:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r10,r11,23664
	ctx.r10.s64 = ctx.r11.s64 + 23664;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x821a6fb4
	goto loc_821A6FB4;
loc_821A6F94:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r10,r11,20160
	ctx.r10.s64 = ctx.r11.s64 + 20160;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// stfs f30,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_821A6FB4:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// std r4,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// lfs f5,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,-14416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// bl 0x8218a720
	ctx.lr = 0x821A6FE4;
	sub_8218A720(ctx, base);
loc_821A6FE4:
	// lis r29,-32091
	ctx.r29.s64 = -2103115776;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4176(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821a7054
	if (!ctx.cr6.gt) goto loc_821A7054;
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f4,f0,f31
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fmuls f0,f4,f29
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x821a7014
	if (!ctx.cr6.gt) goto loc_821A7014;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x821a7020
	goto loc_821A7020;
loc_821A7014:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x821a7020
	if (!ctx.cr6.lt) goto loc_821A7020;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
loc_821A7020:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// bl 0x8218a688
	ctx.lr = 0x821A702C;
	sub_8218A688(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f3,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,48(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// addi r5,r11,23680
	ctx.r5.s64 = ctx.r11.s64 + 23680;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x821a7174
	goto loc_821A7174;
loc_821A7054:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f1,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// stfs f1,96(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// bl 0x8218a688
	ctx.lr = 0x821A7064;
	sub_8218A688(ctx, base);
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4176(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821a70a4
	if (!ctx.cr6.gt) goto loc_821A70A4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r5,r11,23680
	ctx.r5.s64 = ctx.r11.s64 + 23680;
	// stb r3,55(r30)
	PPC_STORE_U8(ctx.r30.u32 + 55, ctx.r3.u8);
	// lfs f0,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x821a7174
	goto loc_821A7174;
loc_821A70A4:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,7872(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7872);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821a7150
	if (!ctx.cr6.gt) goto loc_821A7150;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,23640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23640);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 126);
	// fdivs f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f31,f12,f11
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// beq cr6,0x821a7118
	if (ctx.cr6.eq) goto loc_821A7118;
	// lbz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 124);
	// lbz r9,125(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 125);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x821a7104
	if (!ctx.cr6.gt) goto loc_821A7104;
	// stfs f28,100(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stb r24,127(r31)
	PPC_STORE_U8(ctx.r31.u32 + 127, ctx.r24.u8);
	// stfs f28,104(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f28,120(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f28,108(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// b 0x821a710c
	goto loc_821A710C;
loc_821A7104:
	// stfs f30,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f30,104(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
loc_821A710C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219f468
	ctx.lr = 0x821A7114;
	sub_8219F468(ctx, base);
	// stb r24,126(r31)
	PPC_STORE_U8(ctx.r31.u32 + 126, ctx.r24.u8);
loc_821A7118:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f0,-4760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f31,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f9.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stb r5,55(r30)
	PPC_STORE_U8(ctx.r30.u32 + 55, ctx.r5.u8);
	// lfs f8,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,48(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8259bbec
	ctx.lr = 0x821A714C;
	__restfpr_26(ctx, base);
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_821A7150:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f7,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,48(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// addi r5,r11,23680
	ctx.r5.s64 = ctx.r11.s64 + 23680;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_821A7174:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stfs f26,96(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82194870
	ctx.lr = 0x821A718C;
	sub_82194870(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8259bbec
	ctx.lr = 0x821A7198;
	__restfpr_26(ctx, base);
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A719C"))) PPC_WEAK_FUNC(sub_821A719C);
PPC_FUNC_IMPL(__imp__sub_821A719C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A71A0"))) PPC_WEAK_FUNC(sub_821A71A0);
PPC_FUNC_IMPL(__imp__sub_821A71A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821A71A8;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A71D4;
	sub_821931F8(ctx, base);
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lhz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mulli r10,r8,1104
	ctx.r10.s64 = ctx.r8.s64 * 1104;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// extsh r27,r7
	ctx.r27.s64 = ctx.r7.s16;
	// addi r26,r10,1008
	ctx.r26.s64 = ctx.r10.s64 + 1008;
	// bl 0x82365698
	ctx.lr = 0x821A7204;
	sub_82365698(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r5,r6,16216
	ctx.r5.u64 = ctx.r6.u64 | 16216;
	// lwzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// mulli r10,r4,584
	ctx.r10.s64 = ctx.r4.s64 * 584;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// beq cr6,0x821a7258
	if (ctx.cr6.eq) goto loc_821A7258;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82353538
	ctx.lr = 0x821A7250;
	sub_82353538(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x821a725c
	goto loc_821A725C;
loc_821A7258:
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_821A725C:
	// addi r25,r31,40
	ctx.r25.s64 = ctx.r31.s64 + 40;
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_821A7268:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82353538
	ctx.lr = 0x821A7278;
	sub_82353538(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821a7268
	if (!ctx.cr6.lt) goto loc_821A7268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219f680
	ctx.lr = 0x821A7294;
	sub_8219F680(ctx, base);
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r9,r9,13400
	ctx.r9.s64 = ctx.r9.s64 + 13400;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r8,r10,304
	ctx.r8.s64 = ctx.r10.s64 + 304;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r30,r27,32
	ctx.r30.s64 = ctx.r27.s64 + 32;
	// lwz r28,308(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 308);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r26,r8,-7992
	ctx.r26.s64 = ctx.r8.s64 + -7992;
	// fadds f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// stb r29,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r29.u8);
	// stb r29,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r29.u8);
	// stb r29,23(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23, ctx.r29.u8);
	// stb r29,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r29.u8);
	// bl 0x82361f20
	ctx.lr = 0x821A72F8;
	sub_82361F20(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lbz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// addi r10,r11,7920
	ctx.r10.s64 = ctx.r11.s64 + 7920;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// beq cr6,0x821a7334
	if (ctx.cr6.eq) goto loc_821A7334;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x821a7368
	goto loc_821A7368;
loc_821A7334:
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// beq cr6,0x821a7350
	if (ctx.cr6.eq) goto loc_821A7350;
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x821a7368
	goto loc_821A7368;
loc_821A7350:
	// rlwinm r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a7364
	if (ctx.cr6.eq) goto loc_821A7364;
	// lwz r29,36(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x821a7368
	goto loc_821A7368;
loc_821A7364:
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_821A7368:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821a738c
	if (ctx.cr6.eq) goto loc_821A738C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351f08
	ctx.lr = 0x821A7388;
	sub_82351F08(ctx, base);
	// b 0x821a73b0
	goto loc_821A73B0;
loc_821A738C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82361f20
	ctx.lr = 0x821A7394;
	sub_82361F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a73a4
	if (!ctx.cr6.eq) goto loc_821A73A4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x821a73b0
	goto loc_821A73B0;
loc_821A73A4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A73B0;
	sub_82351E40(ctx, base);
loc_821A73B0:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r29,r10,-17500
	ctx.r29.s64 = ctx.r10.s64 + -17500;
	// li r8,64
	ctx.r8.s64 = 64;
	// lfs f0,24880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24880);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,1788(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1788);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// lfs f0,24880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24880);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f31,16(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// addi r30,r11,-4000
	ctx.r30.s64 = ctx.r11.s64 + -4000;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fneg f9,f0
	ctx.f9.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f8,f30,f13
	ctx.f8.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A743C;
	sub_82352710(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lfs f13,1980(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1980);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f0,196(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// lfs f2,-12136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f2.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// fsubs f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// bl 0x82194a40
	ctx.lr = 0x821A7480;
	sub_82194A40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A7494"))) PPC_WEAK_FUNC(sub_821A7494);
PPC_FUNC_IMPL(__imp__sub_821A7494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A7498"))) PPC_WEAK_FUNC(sub_821A7498);
PPC_FUNC_IMPL(__imp__sub_821A7498) {
	PPC_FUNC_PROLOGUE();
	// b 0x8219f680
	sub_8219F680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A749C"))) PPC_WEAK_FUNC(sub_821A749C);
PPC_FUNC_IMPL(__imp__sub_821A749C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A74A0"))) PPC_WEAK_FUNC(sub_821A74A0);
PPC_FUNC_IMPL(__imp__sub_821A74A0) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A74D0;
	sub_821931F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// bl 0x8219fad0
	ctx.lr = 0x821A74F0;
	sub_8219FAD0(ctx, base);
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

__attribute__((alias("__imp__sub_821A7508"))) PPC_WEAK_FUNC(sub_821A7508);
PPC_FUNC_IMPL(__imp__sub_821A7508) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r11,r11,-1264
	ctx.r11.s64 = ctx.r11.s64 + -1264;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addi r7,r11,212
	ctx.r7.s64 = ctx.r11.s64 + 212;
	// mulli r8,r9,200
	ctx.r8.s64 = ctx.r9.s64 * 200;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// b 0x8219fad0
	sub_8219FAD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A7538"))) PPC_WEAK_FUNC(sub_821A7538);
PPC_FUNC_IMPL(__imp__sub_821A7538) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A753C"))) PPC_WEAK_FUNC(sub_821A753C);
PPC_FUNC_IMPL(__imp__sub_821A753C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A7540"))) PPC_WEAK_FUNC(sub_821A7540);
PPC_FUNC_IMPL(__imp__sub_821A7540) {
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
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A7578;
	sub_821931F8(ctx, base);
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lhz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mulli r10,r8,1104
	ctx.r10.s64 = ctx.r8.s64 * 1104;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// addi r3,r10,1008
	ctx.r3.s64 = ctx.r10.s64 + 1008;
	// addis r10,r11,35
	ctx.r10.s64 = ctx.r11.s64 + 2293760;
	// mulli r11,r30,19200
	ctx.r11.s64 = ctx.r30.s64 * 19200;
	// addi r10,r10,-28496
	ctx.r10.s64 = ctx.r10.s64 + -28496;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// bl 0x82353538
	ctx.lr = 0x821A75BC;
	sub_82353538(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stb r5,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r5.u8);
	// bl 0x8219ffd0
	ctx.lr = 0x821A75D4;
	sub_8219FFD0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_821A75F0"))) PPC_WEAK_FUNC(sub_821A75F0);
PPC_FUNC_IMPL(__imp__sub_821A75F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,-1264
	ctx.r11.s64 = ctx.r11.s64 + -1264;
	// lbz r9,15480(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15480);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lbz r5,21(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 21);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r4,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r4.u8);
	// b 0x8219ffd0
	sub_8219FFD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A7630"))) PPC_WEAK_FUNC(sub_821A7630);
PPC_FUNC_IMPL(__imp__sub_821A7630) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A7634"))) PPC_WEAK_FUNC(sub_821A7634);
PPC_FUNC_IMPL(__imp__sub_821A7634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A7638"))) PPC_WEAK_FUNC(sub_821A7638);
PPC_FUNC_IMPL(__imp__sub_821A7638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821A7640;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,2212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x821a7910
	if (ctx.cr6.gt) goto loc_821A7910;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821931f8
	ctx.lr = 0x821A767C;
	sub_821931F8(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,2212(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2212);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x821a76a8
	if (!ctx.cr6.eq) goto loc_821A76A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f0,-1528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
loc_821A76A8:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lbz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// mulli r10,r31,19200
	ctx.r10.s64 = ctx.r31.s64 * 19200;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// extsh r28,r4
	ctx.r28.s64 = ctx.r4.s16;
	// addis r9,r11,35
	ctx.r9.s64 = ctx.r11.s64 + 2293760;
	// mulli r11,r3,1104
	ctx.r11.s64 = ctx.r3.s64 * 1104;
	// addi r9,r9,-28496
	ctx.r9.s64 = ctx.r9.s64 + -28496;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r27,r11,1008
	ctx.r27.s64 = ctx.r11.s64 + 1008;
	// addi r29,r30,44
	ctx.r29.s64 = ctx.r30.s64 + 44;
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
loc_821A76EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82353538
	ctx.lr = 0x821A76FC;
	sub_82353538(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x821a76ec
	if (!ctx.cr6.lt) goto loc_821A76EC;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r9,r11,13400
	ctx.r9.s64 = ctx.r11.s64 + 13400;
	// lwz r11,328(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a7730
	if (ctx.cr6.eq) goto loc_821A7730;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r8,62(r30)
	PPC_STORE_U16(ctx.r30.u32 + 62, ctx.r8.u16);
	// b 0x821a773c
	goto loc_821A773C;
loc_821A7730:
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lhz r11,31068(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31068);
	// sth r11,62(r30)
	PPC_STORE_U16(ctx.r30.u32 + 62, ctx.r11.u16);
loc_821A773C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lwz r28,56(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lwz r27,36(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,304
	ctx.r11.s64 = ctx.r11.s64 + 304;
	// addi r31,r27,32
	ctx.r31.s64 = ctx.r27.s64 + 32;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r26,r8,-7992
	ctx.r26.s64 = ctx.r8.s64 + -7992;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// stb r11,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r11.u8);
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
	// stb r11,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r11.u8);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// bl 0x82361f20
	ctx.lr = 0x821A778C;
	sub_82361F20(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lbz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// addi r10,r11,7920
	ctx.r10.s64 = ctx.r11.s64 + 7920;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// beq cr6,0x821a77c8
	if (ctx.cr6.eq) goto loc_821A77C8;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lwz r29,24(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x821a77fc
	goto loc_821A77FC;
loc_821A77C8:
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// beq cr6,0x821a77e4
	if (ctx.cr6.eq) goto loc_821A77E4;
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x821a77fc
	goto loc_821A77FC;
loc_821A77E4:
	// rlwinm r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a77f8
	if (ctx.cr6.eq) goto loc_821A77F8;
	// lwz r29,36(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x821a77fc
	goto loc_821A77FC;
loc_821A77F8:
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_821A77FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821a7820
	if (ctx.cr6.eq) goto loc_821A7820;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351f08
	ctx.lr = 0x821A781C;
	sub_82351F08(ctx, base);
	// b 0x821a7844
	goto loc_821A7844;
loc_821A7820:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82361f20
	ctx.lr = 0x821A7828;
	sub_82361F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a7838
	if (!ctx.cr6.eq) goto loc_821A7838;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x821a7844
	goto loc_821A7844;
loc_821A7838:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82351e40
	ctx.lr = 0x821A7844;
	sub_82351E40(ctx, base);
loc_821A7844:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,24880
	ctx.r11.s64 = ctx.r11.s64 + 24880;
	// addi r29,r10,-17372
	ctx.r29.s64 = ctx.r10.s64 + -17372;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f0,1660(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r31,r11,20048
	ctx.r31.s64 = ctx.r11.s64 + 20048;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fneg f9,f0
	ctx.f9.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f0,-152(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -152);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82352710
	ctx.lr = 0x821A78D8;
	sub_82352710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a0240
	ctx.lr = 0x821A78E0;
	sub_821A0240(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f0,68(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f2,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-1640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1640);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82194a40
	ctx.lr = 0x821A7910;
	sub_82194A40(ctx, base);
loc_821A7910:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A7920"))) PPC_WEAK_FUNC(sub_821A7920);
PPC_FUNC_IMPL(__imp__sub_821A7920) {
	PPC_FUNC_PROLOGUE();
	// b 0x821a0240
	sub_821A0240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A7924"))) PPC_WEAK_FUNC(sub_821A7924);
PPC_FUNC_IMPL(__imp__sub_821A7924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A7928"))) PPC_WEAK_FUNC(sub_821A7928);
PPC_FUNC_IMPL(__imp__sub_821A7928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821A7930;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,4864
	ctx.r11.s64 = ctx.r11.s64 + 4864;
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// mulli r10,r9,1104
	ctx.r10.s64 = ctx.r9.s64 * 1104;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r30,988(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 988);
	// lwz r28,632(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 632);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x821a7974
	if (ctx.cr6.eq) goto loc_821A7974;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x821a7978
	if (!ctx.cr6.eq) goto loc_821A7978;
loc_821A7974:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821A7978:
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r28,17
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 17, ctx.xer);
	// beq cr6,0x821a7a10
	if (ctx.cr6.eq) goto loc_821A7A10;
	// lwz r8,312(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x821a7998
	if (ctx.cr6.eq) goto loc_821A7998;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b3c8
	ctx.lr = 0x821A7998;
	sub_8218B3C8(ctx, base);
loc_821A7998:
	// cmpwi cr6,r28,18
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 18, ctx.xer);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// bge cr6,0x821a79d4
	if (!ctx.cr6.lt) goto loc_821A79D4;
	// clrlwi r7,r27,24
	ctx.r7.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821a79b8
	if (ctx.cr6.eq) goto loc_821A79B8;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// bne cr6,0x821a79d4
	if (!ctx.cr6.eq) goto loc_821A79D4;
loc_821A79B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b3c8
	ctx.lr = 0x821A79C0;
	sub_8218B3C8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a06f8
	ctx.lr = 0x821A79CC;
	sub_821A06F8(ctx, base);
	// li r6,18
	ctx.r6.s64 = 18;
	// stw r6,632(r29)
	PPC_STORE_U32(ctx.r29.u32 + 632, ctx.r6.u32);
loc_821A79D4:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8376);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bso cr6,0x821a79ec
	if (ctx.cr6.so) goto loc_821A79EC;
	// bge cr6,0x821a7a18
	if (!ctx.cr6.lt) goto loc_821A7A18;
loc_821A79EC:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821a7a10
	if (!ctx.cr6.lt) goto loc_821A7A10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b330
	ctx.lr = 0x821A7A04;
	sub_8218B330(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821A7A10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218b3c8
	ctx.lr = 0x821A7A18;
	sub_8218B3C8(ctx, base);
loc_821A7A18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A7A24"))) PPC_WEAK_FUNC(sub_821A7A24);
PPC_FUNC_IMPL(__imp__sub_821A7A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A7A28"))) PPC_WEAK_FUNC(sub_821A7A28);
PPC_FUNC_IMPL(__imp__sub_821A7A28) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A7A58;
	sub_821931F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,2212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821a7a84
	if (!ctx.cr6.eq) goto loc_821A7A84;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-1528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_821A7A84:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x821a1830
	ctx.lr = 0x821A7AA8;
	sub_821A1830(ctx, base);
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
}

__attribute__((alias("__imp__sub_821A7AC0"))) PPC_WEAK_FUNC(sub_821A7AC0);
PPC_FUNC_IMPL(__imp__sub_821A7AC0) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,-1264
	ctx.r11.s64 = ctx.r11.s64 + -1264;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// addi r6,r11,156
	ctx.r6.s64 = ctx.r11.s64 + 156;
	// mulli r7,r8,200
	ctx.r7.s64 = ctx.r8.s64 * 200;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821a1830
	sub_821A1830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A7AEC"))) PPC_WEAK_FUNC(sub_821A7AEC);
PPC_FUNC_IMPL(__imp__sub_821A7AEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A7AF0"))) PPC_WEAK_FUNC(sub_821A7AF0);
PPC_FUNC_IMPL(__imp__sub_821A7AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x821A7AF8;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8259bba4
	ctx.lr = 0x821A7B00;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lwz r11,908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// lbz r10,15219(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15219);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821a7b3c
	if (!ctx.cr6.eq) goto loc_821A7B3C;
	// lwz r9,892(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821a7b3c
	if (!ctx.cr6.gt) goto loc_821A7B3C;
	// bl 0x82187b48
	ctx.lr = 0x821A7B2C;
	sub_82187B48(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8259bbf0
	ctx.lr = 0x821A7B38;
	__restfpr_27(ctx, base);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_821A7B3C:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,868(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,876(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r23,r31,880
	ctx.r23.s64 = ctx.r31.s64 + 880;
	// lfs f12,864(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	ctx.f12.f64 = double(temp.f32);
	// addi r25,r11,-16616
	ctx.r25.s64 = ctx.r11.s64 + -16616;
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-968(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -968);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f10,0(r23)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f6,4(r23)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r23.u32 + 4, temp.u32);
	// lwz r11,908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// lbz r6,18860(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18860);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821a7ba8
	if (ctx.cr6.eq) goto loc_821A7BA8;
	// addi r3,r11,18304
	ctx.r3.s64 = ctx.r11.s64 + 18304;
	// bl 0x820adf30
	ctx.lr = 0x821A7B9C;
	sub_820ADF30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a3620
	ctx.lr = 0x821A7BA8;
	sub_821A3620(ctx, base);
loc_821A7BA8:
	// lwz r10,892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821a7ee4
	if (!ctx.cr6.gt) goto loc_821A7EE4;
	// lfs f5,904(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f5,f29
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f29.f64));
	// li r24,1
	ctx.r24.s64 = 1;
	// stfs f0,904(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 904, temp.u32);
	// lis r26,-32253
	ctx.r26.s64 = -2113732608;
	// lfs f30,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x821a7be8
	if (ctx.cr6.gt) goto loc_821A7BE8;
	// bso cr6,0x821a7be8
	if (ctx.cr6.so) goto loc_821A7BE8;
	// lfs f0,-15148(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -15148);
	ctx.f0.f64 = double(temp.f32);
	// stb r24,888(r31)
	PPC_STORE_U8(ctx.r31.u32 + 888, ctx.r24.u8);
	// stfs f0,904(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 904, temp.u32);
loc_821A7BE8:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lbz r5,888(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 888);
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f13,20312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20312);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// fmuls f31,f13,f29
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f13,20316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20316);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f28,f13,f29
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// beq cr6,0x821a7df4
	if (ctx.cr6.eq) goto loc_821A7DF4;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f3,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,-576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -576);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// lfs f4,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f31.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x821a7d58
	if (!ctx.cr6.lt) goto loc_821A7D58;
	// lbz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lhz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mulli r11,r11,1104
	ctx.r11.s64 = ctx.r11.s64 * 1104;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
	// bl 0x82353580
	ctx.lr = 0x821A7C68;
	sub_82353580(ctx, base);
	// lwz r10,892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// li r27,0
	ctx.r27.s64 = 0;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// stw r11,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// ble 0x821a7d40
	if (!ctx.cr0.gt) goto loc_821A7D40;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82361f20
	ctx.lr = 0x821A7C8C;
	sub_82361F20(ctx, base);
	// lwz r11,892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8259dd00
	ctx.lr = 0x821A7CB0;
	sub_8259DD00(ctx, base);
	// addi r8,r29,176
	ctx.r8.s64 = ctx.r29.s64 + 176;
	// lwz r11,892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r27,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r27.u32);
	// lwz r5,896(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// subf r11,r29,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r29.s64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// bl 0x8259dd00
	ctx.lr = 0x821A7CEC;
	sub_8259DD00(ctx, base);
	// lwz r4,892(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821a7d44
	if (!ctx.cr6.gt) goto loc_821A7D44;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
loc_821A7D00:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r30,-12
	ctx.r3.s64 = ctx.r30.s64 + -12;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x821995c0
	ctx.lr = 0x821A7D18;
	sub_821995C0(ctx, base);
	// lwz r9,892(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821a7d00
	if (ctx.cr6.lt) goto loc_821A7D00;
	// lfs f0,-15148(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -15148);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stfs f0,904(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 904, temp.u32);
	// stb r27,888(r31)
	PPC_STORE_U8(ctx.r31.u32 + 888, ctx.r27.u8);
	// b 0x821a7d68
	goto loc_821A7D68;
loc_821A7D40:
	// stw r27,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r27.u32);
loc_821A7D44:
	// lfs f0,-15148(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -15148);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stfs f0,904(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 904, temp.u32);
	// stb r27,888(r31)
	PPC_STORE_U8(ctx.r31.u32 + 888, ctx.r27.u8);
	// b 0x821a7d68
	goto loc_821A7D68;
loc_821A7D58:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bl 0x821995c0
	ctx.lr = 0x821A7D68;
	sub_821995C0(ctx, base);
loc_821A7D68:
	// lwz r8,892(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// lfs f13,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x821a7ee4
	if (!ctx.cr6.lt) goto loc_821A7EE4;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,32
	ctx.r30.s64 = ctx.r11.s64 + 32;
loc_821A7D90:
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x821a7dc4
	if (!ctx.cr6.eq) goto loc_821A7DC4;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821a7db8
	if (!ctx.cr6.lt) goto loc_821A7DB8;
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_821A7DB8:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821995c0
	ctx.lr = 0x821A7DC4;
	sub_821995C0(ctx, base);
loc_821A7DC4:
	// lwz r6,892(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lfs f11,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// lfs f10,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// fadds f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// blt cr6,0x821a7d90
	if (ctx.cr6.lt) goto loc_821A7D90;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8259bbf0
	ctx.lr = 0x821A7DF0;
	__restfpr_27(ctx, base);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_821A7DF4:
	// li r27,0
	ctx.r27.s64 = 0;
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// ble cr6,0x821a7ec8
	if (!ctx.cr6.gt) goto loc_821A7EC8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// lfs f27,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f27.f64 = double(temp.f32);
loc_821A7E14:
	// addi r29,r30,-8
	ctx.r29.s64 = ctx.r30.s64 + -8;
	// lfs f9,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// fadds f31,f9,f31
	ctx.f31.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f8,f30
	ctx.cr6.compare(ctx.f8.f64, ctx.f30.f64);
	// ble cr6,0x821a7e4c
	if (!ctx.cr6.gt) goto loc_821A7E4C;
	// fsubs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821a7e48
	if (!ctx.cr6.lt) goto loc_821A7E48;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_821A7E48:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_821A7E4C:
	// lfs f7,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bne cr6,0x821a7e6c
	if (!ctx.cr6.eq) goto loc_821A7E6C;
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f6,f30
	ctx.cr6.compare(ctx.f6.f64, ctx.f30.f64);
	// bge cr6,0x821a7e6c
	if (!ctx.cr6.lt) goto loc_821A7E6C;
	// stfs f27,0(r30)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x821a7e8c
	goto loc_821A7E8C;
loc_821A7E6C:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x821a7e90
	if (!ctx.cr6.gt) goto loc_821A7E90;
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x821a7e8c
	if (!ctx.cr6.lt) goto loc_821A7E8C;
	// stfs f30,0(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_821A7E8C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_821A7E90:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a7ea8
	if (ctx.cr6.eq) goto loc_821A7EA8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821995c0
	ctx.lr = 0x821A7EA8;
	sub_821995C0(ctx, base);
loc_821A7EA8:
	// lwz r4,892(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lfs f5,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// lfs f4,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// cmpw cr6,r28,r4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r4.s32, ctx.xer);
	// fadds f0,f5,f4
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// blt cr6,0x821a7e14
	if (ctx.cr6.lt) goto loc_821A7E14;
loc_821A7EC8:
	// lfs f3,872(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f31,f3
	ctx.cr6.compare(ctx.f31.f64, ctx.f3.f64);
	// ble cr6,0x821a7ee4
	if (!ctx.cr6.gt) goto loc_821A7EE4;
	// lwz r3,892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821a7ee4
	if (!ctx.cr6.gt) goto loc_821A7EE4;
	// stb r24,888(r31)
	PPC_STORE_U8(ctx.r31.u32 + 888, ctx.r24.u8);
loc_821A7EE4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8259bbf0
	ctx.lr = 0x821A7EF0;
	__restfpr_27(ctx, base);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A7EF4"))) PPC_WEAK_FUNC(sub_821A7EF4);
PPC_FUNC_IMPL(__imp__sub_821A7EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A7EF8"))) PPC_WEAK_FUNC(sub_821A7EF8);
PPC_FUNC_IMPL(__imp__sub_821A7EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821A7F00;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r10,26080
	ctx.r29.s64 = ctx.r10.s64 + 26080;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lwz r11,2216(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2216);
	// addi r30,r10,26752
	ctx.r30.s64 = ctx.r10.s64 + 26752;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821a83e0
	if (ctx.cr6.gt) goto loc_821A83E0;
	// lis r12,-32230
	ctx.r12.s64 = -2112225280;
	// addi r12,r12,32584
	ctx.r12.s64 = ctx.r12.s64 + 32584;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821A7F6C;
	case 1:
		goto loc_821A83E0;
	case 2:
		goto loc_821A8310;
	case 3:
		goto loc_821A83E0;
	case 4:
		goto loc_821A8354;
	case 5:
		goto loc_821A8264;
	case 6:
		goto loc_821A83E0;
	case 7:
		goto loc_821A81BC;
	case 8:
		goto loc_821A8050;
	default:
		__builtin_unreachable();
	}
	// lwz r16,32620(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32620);
	// lwz r16,-31776(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31776);
	// lwz r16,-31984(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31984);
	// lwz r16,-31776(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31776);
	// lwz r16,-31916(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31916);
	// lwz r16,-32156(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32156);
	// lwz r16,-31776(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31776);
	// lwz r16,-32324(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32324);
	// lwz r16,-32688(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32688);
loc_821A7F6C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,316
	ctx.r10.s64 = ctx.r31.s64 * 316;
	// addi r11,r11,4220
	ctx.r11.s64 = ctx.r11.s64 + 4220;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821949c0
	ctx.lr = 0x821A7F8C;
	sub_821949C0(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 * 240;
	// addi r11,r11,3024
	ctx.r11.s64 = ctx.r11.s64 + 3024;
	// li r6,47
	ctx.r6.s64 = 47;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8219e000
	ctx.lr = 0x821A7FAC;
	sub_8219E000(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,1792
	ctx.r10.s64 = ctx.r31.s64 * 1792;
	// addi r11,r11,-3392
	ctx.r11.s64 = ctx.r11.s64 + -3392;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,23
	ctx.r6.s64 = 23;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a2850
	ctx.lr = 0x821A7FD4;
	sub_821A2850(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,51969
	ctx.r10.u64 = ctx.r11.u64 | 51969;
	// lbzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821a83e0
	if (ctx.cr6.eq) goto loc_821A83E0;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r3,r11,20992
	ctx.r3.s64 = ctx.r11.s64 + 20992;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82194278
	ctx.lr = 0x821A8000;
	sub_82194278(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,7536
	ctx.r11.s64 = ctx.r11.s64 + 7536;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,-16224(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16224);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,3
	ctx.r6.s64 = 3;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a24d8
	ctx.lr = 0x821A8038;
	sub_821A24D8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r11,23148
	ctx.r3.s64 = ctx.r11.s64 + 23148;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821a2598
	ctx.lr = 0x821A804C;
	sub_821A2598(ctx, base);
	// b 0x821a83e0
	goto loc_821A83E0;
loc_821A8050:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x821a8090
	if (!ctx.cr6.eq) goto loc_821A8090;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821041a8
	ctx.lr = 0x821A8068;
	sub_821041A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r6,3
	ctx.r6.s64 = 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,22980
	ctx.r3.s64 = ctx.r11.s64 + 22980;
	// bl 0x821a3f40
	ctx.lr = 0x821A8088;
	sub_821A3F40(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f31,-16224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16224);
	ctx.f31.f64 = double(temp.f32);
loc_821A8090:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,316
	ctx.r10.s64 = ctx.r31.s64 * 316;
	// addi r11,r11,4220
	ctx.r11.s64 = ctx.r11.s64 + 4220;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821949c0
	ctx.lr = 0x821A80B0;
	sub_821949C0(ctx, base);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r11,r11,7536
	ctx.r11.s64 = ctx.r11.s64 + 7536;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a24d8
	ctx.lr = 0x821A80E4;
	sub_821A24D8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 * 44;
	// addi r11,r11,3752
	ctx.r11.s64 = ctx.r11.s64 + 3752;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82193838
	ctx.lr = 0x821A8104;
	sub_82193838(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 * 112;
	// addi r11,r11,7936
	ctx.r11.s64 = ctx.r11.s64 + 7936;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a38d8
	ctx.lr = 0x821A8124;
	sub_821A38D8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,136
	ctx.r10.s64 = ctx.r31.s64 * 136;
	// addi r11,r11,7264
	ctx.r11.s64 = ctx.r11.s64 + 7264;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a3250
	ctx.lr = 0x821A8144;
	sub_821A3250(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 * 240;
	// addi r11,r11,3024
	ctx.r11.s64 = ctx.r11.s64 + 3024;
	// li r6,11
	ctx.r6.s64 = 11;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8219e000
	ctx.lr = 0x821A8164;
	sub_8219E000(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,1792
	ctx.r10.s64 = ctx.r31.s64 * 1792;
	// addi r11,r11,-3392
	ctx.r11.s64 = ctx.r11.s64 + -3392;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a2850
	ctx.lr = 0x821A818C;
	sub_821A2850(ctx, base);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r8,r9,51969
	ctx.r8.u64 = ctx.r9.u64 | 51969;
	// lbzx r6,r30,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821a83e0
	if (ctx.cr6.eq) goto loc_821A83E0;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r3,r11,20992
	ctx.r3.s64 = ctx.r11.s64 + 20992;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82194278
	ctx.lr = 0x821A81B8;
	sub_82194278(ctx, base);
	// b 0x821a83e0
	goto loc_821A83E0;
loc_821A81BC:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,316
	ctx.r10.s64 = ctx.r31.s64 * 316;
	// addi r11,r11,4220
	ctx.r11.s64 = ctx.r11.s64 + 4220;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821949c0
	ctx.lr = 0x821A81DC;
	sub_821949C0(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 * 88;
	// addi r11,r11,3848
	ctx.r11.s64 = ctx.r11.s64 + 3848;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a1f28
	ctx.lr = 0x821A81FC;
	sub_821A1F28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821041a8
	ctx.lr = 0x821A8204;
	sub_821041A8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mulli r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 * 240;
	// addi r11,r11,3024
	ctx.r11.s64 = ctx.r11.s64 + 3024;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,15
	ctx.r6.s64 = 15;
	// bne cr6,0x821a8230
	if (!ctx.cr6.eq) goto loc_821A8230;
	// li r6,9
	ctx.r6.s64 = 9;
loc_821A8230:
	// bl 0x8219e000
	ctx.lr = 0x821A8234;
	sub_8219E000(ctx, base);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// ori r3,r4,51969
	ctx.r3.u64 = ctx.r4.u64 | 51969;
	// lbzx r10,r30,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a83e0
	if (ctx.cr6.eq) goto loc_821A83E0;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r3,r11,20992
	ctx.r3.s64 = ctx.r11.s64 + 20992;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82194278
	ctx.lr = 0x821A8260;
	sub_82194278(ctx, base);
	// b 0x821a83e0
	goto loc_821A83E0;
loc_821A8264:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,316
	ctx.r10.s64 = ctx.r31.s64 * 316;
	// addi r11,r11,4220
	ctx.r11.s64 = ctx.r11.s64 + 4220;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821949c0
	ctx.lr = 0x821A8284;
	sub_821949C0(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 * 240;
	// addi r11,r11,3024
	ctx.r11.s64 = ctx.r11.s64 + 3024;
	// li r6,47
	ctx.r6.s64 = 47;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8219e000
	ctx.lr = 0x821A82A4;
	sub_8219E000(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,1792
	ctx.r10.s64 = ctx.r31.s64 * 1792;
	// addi r11,r11,-3392
	ctx.r11.s64 = ctx.r11.s64 + -3392;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,23
	ctx.r6.s64 = 23;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a2850
	ctx.lr = 0x821A82CC;
	sub_821A2850(ctx, base);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r8,r9,51969
	ctx.r8.u64 = ctx.r9.u64 | 51969;
	// lbzx r6,r30,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821a83e0
	if (ctx.cr6.eq) goto loc_821A83E0;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r3,r11,20992
	ctx.r3.s64 = ctx.r11.s64 + 20992;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82194278
	ctx.lr = 0x821A82F8;
	sub_82194278(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r11,23148
	ctx.r3.s64 = ctx.r11.s64 + 23148;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821a2598
	ctx.lr = 0x821A830C;
	sub_821A2598(ctx, base);
	// b 0x821a83e0
	goto loc_821A83E0;
loc_821A8310:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,316
	ctx.r10.s64 = ctx.r31.s64 * 316;
	// addi r11,r11,4220
	ctx.r11.s64 = ctx.r11.s64 + 4220;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821949c0
	ctx.lr = 0x821A8330;
	sub_821949C0(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 * 240;
	// addi r11,r11,3024
	ctx.r11.s64 = ctx.r11.s64 + 3024;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8219e000
	ctx.lr = 0x821A8350;
	sub_8219E000(ctx, base);
	// b 0x821a83b8
	goto loc_821A83B8;
loc_821A8354:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,316
	ctx.r10.s64 = ctx.r31.s64 * 316;
	// addi r11,r11,4220
	ctx.r11.s64 = ctx.r11.s64 + 4220;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821949c0
	ctx.lr = 0x821A8374;
	sub_821949C0(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 * 240;
	// addi r11,r11,3024
	ctx.r11.s64 = ctx.r11.s64 + 3024;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8219e000
	ctx.lr = 0x821A8394;
	sub_8219E000(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 * 68;
	// addi r11,r11,-3868
	ctx.r11.s64 = ctx.r11.s64 + -3868;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a1c40
	ctx.lr = 0x821A83B8;
	sub_821A1C40(ctx, base);
loc_821A83B8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,1792
	ctx.r10.s64 = ctx.r31.s64 * 1792;
	// addi r11,r11,-3392
	ctx.r11.s64 = ctx.r11.s64 + -3392;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a2850
	ctx.lr = 0x821A83E0;
	sub_821A2850(ctx, base);
loc_821A83E0:
	// lis r5,3
	ctx.r5.s64 = 196608;
	// ori r4,r5,51969
	ctx.r4.u64 = ctx.r5.u64 | 51969;
	// lbzx r11,r30,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a8430
	if (!ctx.cr6.eq) goto loc_821A8430;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821041d8
	ctx.lr = 0x821A83FC;
	sub_821041D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821a8430
	if (!ctx.cr6.eq) goto loc_821A8430;
	// lwz r9,2216(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2216);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,5
	ctx.r5.s64 = 5;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,20864
	ctx.r3.s64 = ctx.r11.s64 + 20864;
	// li r6,1
	ctx.r6.s64 = 1;
	// bne cr6,0x821a842c
	if (!ctx.cr6.eq) goto loc_821A842C;
	// li r6,7
	ctx.r6.s64 = 7;
loc_821A842C:
	// bl 0x821a6770
	ctx.lr = 0x821A8430;
	sub_821A6770(ctx, base);
loc_821A8430:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A843C"))) PPC_WEAK_FUNC(sub_821A843C);
PPC_FUNC_IMPL(__imp__sub_821A843C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A8440"))) PPC_WEAK_FUNC(sub_821A8440);
PPC_FUNC_IMPL(__imp__sub_821A8440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821A8448;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,432(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 432);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821A8480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,624(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,13500(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 13500);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f30,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f30.f64 = double(temp.f32);
	// ble cr6,0x821a84f4
	if (!ctx.cr6.gt) goto loc_821A84F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,-1680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1680);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821a84f4
	if (ctx.cr6.lt) goto loc_821A84F4;
	// bso cr6,0x821a84f4
	if (ctx.cr6.so) goto loc_821A84F4;
	// stfs f30,44(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// stb r29,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r29.u8);
	// stb r29,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r29.u8);
	// stb r27,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r27.u8);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
loc_821A84F4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,484(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,13356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13356);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x821a8514
	if (ctx.cr6.lt) goto loc_821A8514;
	// bso cr6,0x821a8514
	if (ctx.cr6.so) goto loc_821A8514;
	// stw r29,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r29.u32);
loc_821A8514:
	// lwz r5,472(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821a8538
	if (ctx.cr6.eq) goto loc_821A8538;
	// lfs f10,460(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x821a8538
	if (ctx.cr6.lt) goto loc_821A8538;
	// bso cr6,0x821a8538
	if (ctx.cr6.so) goto loc_821A8538;
	// stw r29,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r29.u32);
loc_821A8538:
	// lwz r4,576(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821a855c
	if (ctx.cr6.eq) goto loc_821A855C;
	// lfs f8,572(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// blt cr6,0x821a855c
	if (ctx.cr6.lt) goto loc_821A855C;
	// bso cr6,0x821a855c
	if (ctx.cr6.so) goto loc_821A855C;
	// stfs f30,572(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// stw r29,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r29.u32);
loc_821A855C:
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821a8580
	if (ctx.cr6.eq) goto loc_821A8580;
	// lfs f7,580(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// blt cr6,0x821a8580
	if (ctx.cr6.lt) goto loc_821A8580;
	// bso cr6,0x821a8580
	if (ctx.cr6.so) goto loc_821A8580;
	// stfs f30,580(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// stw r29,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r29.u32);
loc_821A8580:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f6,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f6,f30
	ctx.cr6.compare(ctx.f6.f64, ctx.f30.f64);
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// beq cr6,0x821a85d0
	if (ctx.cr6.eq) goto loc_821A85D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x821A859C;
	sub_8210B3C8(ctx, base);
	// lfs f5,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f5,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// stfs f0,620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x821a85d0
	if (ctx.cr6.gt) goto loc_821A85D0;
	// bso cr6,0x821a85d0
	if (ctx.cr6.so) goto loc_821A85D0;
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// stfs f31,620(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// lbz r10,15219(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15219);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821a85d0
	if (!ctx.cr6.eq) goto loc_821A85D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a4cb0
	ctx.lr = 0x821A85D0;
	sub_821A4CB0(ctx, base);
loc_821A85D0:
	// lbz r9,68(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 68);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a863c
	if (ctx.cr6.eq) goto loc_821A863C;
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// bl 0x820acc20
	ctx.lr = 0x821A85E8;
	sub_820ACC20(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821a8638
	if (!ctx.cr6.eq) goto loc_821A8638;
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lfs f4,13376(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13376);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,13388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13388);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f4,f3
	ctx.cr6.compare(ctx.f4.f64, ctx.f3.f64);
	// blt cr6,0x821a8610
	if (ctx.cr6.lt) goto loc_821A8610;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bns cr6,0x821a8614
	if (!ctx.cr6.so) goto loc_821A8614;
loc_821A8610:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821A8614:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821a8638
	if (ctx.cr6.eq) goto loc_821A8638;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f2,636(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,-1608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1608);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x821a8688
	if (!ctx.cr6.gt) goto loc_821A8688;
	// stw r29,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r29.u32);
loc_821A8638:
	// stfs f31,636(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
loc_821A863C:
	// lbz r6,67(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 67);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821a86d4
	if (ctx.cr6.eq) goto loc_821A86D4;
	// lwz r5,624(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// addis r9,r30,35
	ctx.r9.s64 = ctx.r30.s64 + 2293760;
	// addis r10,r30,35
	ctx.r10.s64 = ctx.r30.s64 + 2293760;
	// lwz r8,644(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// addi r3,r9,-29284
	ctx.r3.s64 = ctx.r9.s64 + -29284;
	// addi r9,r10,-29280
	ctx.r9.s64 = ctx.r10.s64 + -29280;
	// lwz r4,19168(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 19168);
	// rlwinm r11,r4,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x821a86a0
	if (ctx.cr6.eq) goto loc_821A86A0;
	// stfs f31,640(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// b 0x821a86d4
	goto loc_821A86D4;
loc_821A8688:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x821A8690;
	sub_8210B3C8(ctx, base);
	// lfs f0,636(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,636(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
	// b 0x821a863c
	goto loc_821A863C;
loc_821A86A0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f12,640(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-15672(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15672);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x821a86c0
	if (!ctx.cr6.gt) goto loc_821A86C0;
	// stfs f31,640(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// stw r27,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r27.u32);
	// b 0x821a86d4
	goto loc_821A86D4;
loc_821A86C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x821A86C8;
	sub_8210B3C8(ctx, base);
	// lfs f11,640(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f10,640(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
loc_821A86D4:
	// lbz r7,69(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 69);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821a86e8
	if (ctx.cr6.eq) goto loc_821A86E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219dd18
	ctx.lr = 0x821A86E8;
	sub_8219DD18(ctx, base);
loc_821A86E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82188a30
	ctx.lr = 0x821A86F0;
	sub_82188A30(ctx, base);
	// lbz r6,980(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 980);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821a8758
	if (ctx.cr6.lt) goto loc_821A8758;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,980(r31)
	PPC_STORE_U8(ctx.r31.u32 + 980, ctx.r11.u8);
	// bge cr6,0x821a8758
	if (!ctx.cr6.lt) goto loc_821A8758;
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// addi r30,r31,948
	ctx.r30.s64 = ctx.r31.s64 + 948;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f9,13500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13500);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,956(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 956, temp.u32);
	// bl 0x82193e88
	ctx.lr = 0x821A8730;
	sub_82193E88(ctx, base);
	// stfs f30,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stfs f31,12(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stb r29,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r29.u8);
	// stb r29,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r29.u8);
	// stb r27,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r27.u8);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
loc_821A8758:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A8768"))) PPC_WEAK_FUNC(sub_821A8768);
PPC_FUNC_IMPL(__imp__sub_821A8768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821A8770;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821931f8
	ctx.lr = 0x821A87A0;
	sub_821931F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,2212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2212);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821a87cc
	if (!ctx.cr6.eq) goto loc_821A87CC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-1528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
loc_821A87CC:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r9,r30,19200
	ctx.r9.s64 = ctx.r30.s64 * 19200;
	// lhz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// stb r29,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r29.u8);
	// stb r28,93(r31)
	PPC_STORE_U8(ctx.r31.u32 + 93, ctx.r28.u8);
	// lfs f0,2864(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// li r4,47
	ctx.r4.s64 = 47;
	// addis r8,r11,35
	ctx.r8.s64 = ctx.r11.s64 + 2293760;
	// mulli r11,r5,1104
	ctx.r11.s64 = ctx.r5.s64 * 1104;
	// sth r4,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r4.u16);
	// addi r8,r8,-28496
	ctx.r8.s64 = ctx.r8.s64 + -28496;
	// li r26,0
	ctx.r26.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// extsh r28,r6
	ctx.r28.s64 = ctx.r6.s16;
	// addi r27,r11,1008
	ctx.r27.s64 = ctx.r11.s64 + 1008;
	// li r30,3
	ctx.r30.s64 = 3;
	// sth r26,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r26.u16);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
	// sth r9,70(r31)
	PPC_STORE_U16(ctx.r31.u32 + 70, ctx.r9.u16);
	// sth r9,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r9.u16);
loc_821A8848:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82353538
	ctx.lr = 0x821A8858;
	sub_82353538(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821a8848
	if (!ctx.cr6.lt) goto loc_821A8848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a63b8
	ctx.lr = 0x821A8874;
	sub_821A63B8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r11,20048
	ctx.r5.s64 = ctx.r11.s64 + 20048;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-16308
	ctx.r11.s64 = ctx.r11.s64 + -16308;
	// lfs f2,-12136(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,-1064(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1064);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,-996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82194a40
	ctx.lr = 0x821A88AC;
	sub_82194A40(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r26,95(r31)
	PPC_STORE_U8(ctx.r31.u32 + 95, ctx.r26.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,94(r31)
	PPC_STORE_U8(ctx.r31.u32 + 94, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A88C4"))) PPC_WEAK_FUNC(sub_821A88C4);
PPC_FUNC_IMPL(__imp__sub_821A88C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A88C8"))) PPC_WEAK_FUNC(sub_821A88C8);
PPC_FUNC_IMPL(__imp__sub_821A88C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8218a580
	ctx.lr = 0x821A88E8;
	sub_8218A580(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r8,r9,36976
	ctx.r8.u64 = ctx.r9.u64 | 36976;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821a8918
	if (ctx.cr6.eq) goto loc_821A8918;
	// lbz r7,94(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 94);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821a8918
	if (ctx.cr6.eq) goto loc_821A8918;
	// bl 0x821a63b8
	ctx.lr = 0x821A8918;
	sub_821A63B8(ctx, base);
loc_821A8918:
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lhz r4,13680(r5)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + 13680);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821a896c
	if (ctx.cr6.eq) goto loc_821A896C;
	// lbz r11,94(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 94);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a8944
	if (ctx.cr6.eq) goto loc_821A8944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219f208
	ctx.lr = 0x821A8944;
	sub_8219F208(ctx, base);
loc_821A8944:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,13500(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13500);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821a8994
	if (!ctx.cr6.gt) goto loc_821A8994;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// b 0x821a8994
	goto loc_821A8994;
loc_821A896C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821a8994
	if (!ctx.cr6.gt) goto loc_821A8994;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821a8994
	if (!ctx.cr6.lt) goto loc_821A8994;
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_821A8994:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A89AC"))) PPC_WEAK_FUNC(sub_821A89AC);
PPC_FUNC_IMPL(__imp__sub_821A89AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A89B0"))) PPC_WEAK_FUNC(sub_821A89B0);
PPC_FUNC_IMPL(__imp__sub_821A89B0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,2216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2216);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x821a8d94
	if (ctx.cr6.gt) goto loc_821A8D94;
	// lis r12,-32229
	ctx.r12.s64 = -2112159744;
	// addi r12,r12,-30220
	ctx.r12.s64 = ctx.r12.s64 + -30220;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821A8A14;
	case 1:
		goto loc_821A8D94;
	case 2:
		goto loc_821A8CA8;
	case 3:
		goto loc_821A8D94;
	case 4:
		goto loc_821A8D10;
	case 5:
		goto loc_821A8B54;
	case 6:
		goto loc_821A8D94;
	case 7:
		goto loc_821A8AA8;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-30188(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -30188);
	// lwz r16,-29292(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -29292);
	// lwz r16,-29528(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -29528);
	// lwz r16,-29292(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -29292);
	// lwz r16,-29424(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -29424);
	// lwz r16,-29868(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -29868);
	// lwz r16,-29292(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -29292);
	// lwz r16,-30040(r26)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r26.u32 + -30040);
loc_821A8A14:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// rlwinm r10,r31,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r11,7132
	ctx.r11.s64 = ctx.r11.s64 + 7132;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a1078
	ctx.lr = 0x821A8A34;
	sub_821A1078(ctx, base);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r11,r11,776
	ctx.r11.s64 = ctx.r11.s64 + 776;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a8768
	ctx.lr = 0x821A8A64;
	sub_821A8768(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,92
	ctx.r10.s64 = ctx.r31.s64 * 92;
	// addi r11,r11,324
	ctx.r11.s64 = ctx.r11.s64 + 324;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a4758
	ctx.lr = 0x821A8A88;
	sub_821A4758(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041d8
	ctx.lr = 0x821A8A94;
	sub_821041D8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821a8d94
	if (!ctx.cr6.eq) goto loc_821A8D94;
	// li r7,79
	ctx.r7.s64 = 79;
	// b 0x821a8d7c
	goto loc_821A8D7C;
loc_821A8AA8:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041d8
	ctx.lr = 0x821A8AB4;
	sub_821041D8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821a8ae0
	if (!ctx.cr6.eq) goto loc_821A8AE0;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r6,r7,51969
	ctx.r6.u64 = ctx.r7.u64 | 51969;
	// li r30,1
	ctx.r30.s64 = 1;
	// lbzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a8ae4
	if (ctx.cr6.eq) goto loc_821A8AE4;
loc_821A8AE0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821A8AE4:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// rlwinm r10,r31,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r11,7132
	ctx.r11.s64 = ctx.r11.s64 + 7132;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a1078
	ctx.lr = 0x821A8B04;
	sub_821A1078(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,1792
	ctx.r10.s64 = ctx.r31.s64 * 1792;
	// addi r11,r11,-3392
	ctx.r11.s64 = ctx.r11.s64 + -3392;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a2850
	ctx.lr = 0x821A8B2C;
	sub_821A2850(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,696
	ctx.r10.s64 = ctx.r31.s64 * 696;
	// addi r11,r11,1632
	ctx.r11.s64 = ctx.r11.s64 + 1632;
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a2198
	ctx.lr = 0x821A8B50;
	sub_821A2198(ctx, base);
	// b 0x821a8d94
	goto loc_821A8D94;
loc_821A8B54:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// rlwinm r10,r31,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r11,7132
	ctx.r11.s64 = ctx.r11.s64 + 7132;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a1078
	ctx.lr = 0x821A8B74;
	sub_821A1078(ctx, base);
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r3,r4,51969
	ctx.r3.u64 = ctx.r4.u64 | 51969;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a8bfc
	if (ctx.cr6.eq) goto loc_821A8BFC;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4024
	ctx.r11.s64 = ctx.r11.s64 + 4024;
	// li r5,7
	ctx.r5.s64 = 7;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a7638
	ctx.lr = 0x821A8BBC;
	sub_821A7638(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 * 84;
	// addi r11,r11,592
	ctx.r11.s64 = ctx.r11.s64 + 592;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a71a0
	ctx.lr = 0x821A8BDC;
	sub_821A71A0(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r11,22876
	ctx.r3.s64 = ctx.r11.s64 + 22876;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821a7540
	ctx.lr = 0x821A8BF4;
	sub_821A7540(ctx, base);
	// li r7,78
	ctx.r7.s64 = 78;
	// b 0x821a8d7c
	goto loc_821A8D7C;
loc_821A8BFC:
	// lwz r9,2212(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2212);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x821a8c28
	if (!ctx.cr6.gt) goto loc_821A8C28;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,4024
	ctx.r11.s64 = ctx.r11.s64 + 4024;
	// li r5,7
	ctx.r5.s64 = 7;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a7638
	ctx.lr = 0x821A8C24;
	sub_821A7638(ctx, base);
	// b 0x821a8c84
	goto loc_821A8C84;
loc_821A8C28:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,-16224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16224);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,7536
	ctx.r11.s64 = ctx.r11.s64 + 7536;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a24d8
	ctx.lr = 0x821A8C50;
	sub_821A24D8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r11,22920
	ctx.r3.s64 = ctx.r11.s64 + 22920;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821a74a0
	ctx.lr = 0x821A8C68;
	sub_821A74A0(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r7,78
	ctx.r7.s64 = 78;
	// addi r3,r11,22980
	ctx.r3.s64 = ctx.r11.s64 + 22980;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821a4090
	ctx.lr = 0x821A8C84;
	sub_821A4090(ctx, base);
loc_821A8C84:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 * 68;
	// addi r11,r11,7712
	ctx.r11.s64 = ctx.r11.s64 + 7712;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a7a28
	ctx.lr = 0x821A8CA4;
	sub_821A7A28(ctx, base);
	// b 0x821a8d94
	goto loc_821A8D94;
loc_821A8CA8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// rlwinm r10,r31,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r11,7132
	ctx.r11.s64 = ctx.r11.s64 + 7132;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a1078
	ctx.lr = 0x821A8CC8;
	sub_821A1078(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,168
	ctx.r10.s64 = ctx.r31.s64 * 168;
	// addi r11,r11,-3732
	ctx.r11.s64 = ctx.r11.s64 + -3732;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a2d58
	ctx.lr = 0x821A8CE8;
	sub_821A2D58(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r10,r31,92
	ctx.r10.s64 = ctx.r31.s64 * 92;
	// addi r11,r11,8176
	ctx.r11.s64 = ctx.r11.s64 + 8176;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a2f98
	ctx.lr = 0x821A8D0C;
	sub_821A2F98(ctx, base);
	// b 0x821a8d94
	goto loc_821A8D94;
loc_821A8D10:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// rlwinm r10,r31,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r11,7132
	ctx.r11.s64 = ctx.r11.s64 + 7132;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a1078
	ctx.lr = 0x821A8D30;
	sub_821A1078(ctx, base);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r11,r11,776
	ctx.r11.s64 = ctx.r11.s64 + 776;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a8768
	ctx.lr = 0x821A8D60;
	sub_821A8768(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// bl 0x821041d8
	ctx.lr = 0x821A8D6C;
	sub_821041D8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821a8d94
	if (!ctx.cr6.eq) goto loc_821A8D94;
	// li r7,80
	ctx.r7.s64 = 80;
loc_821A8D7C:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,22980
	ctx.r3.s64 = ctx.r11.s64 + 22980;
	// bl 0x821a4090
	ctx.lr = 0x821A8D94;
	sub_821A4090(ctx, base);
loc_821A8D94:
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

__attribute__((alias("__imp__sub_821A8DAC"))) PPC_WEAK_FUNC(sub_821A8DAC);
PPC_FUNC_IMPL(__imp__sub_821A8DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A8DB0"))) PPC_WEAK_FUNC(sub_821A8DB0);
PPC_FUNC_IMPL(__imp__sub_821A8DB0) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r30,1096(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// bl 0x821a8440
	ctx.lr = 0x821A8DE0;
	sub_821A8440(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,984(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x821a8e5c
	if (ctx.cr6.eq) goto loc_821A8E5C;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,984(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 984, temp.u32);
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821a8e10
	if (!ctx.cr6.lt) goto loc_821A8E10;
	// stfs f31,984(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 984, temp.u32);
loc_821A8E10:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f12,984(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-15116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15116);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// bl 0x82188198
	ctx.lr = 0x821A8E30;
	sub_82188198(ctx, base);
	// lfs f11,984(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bne cr6,0x821a8e5c
	if (!ctx.cr6.eq) goto loc_821A8E5C;
	// lwz r4,996(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// beq cr6,0x821a8e58
	if (ctx.cr6.eq) goto loc_821A8E58;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82188300
	ctx.lr = 0x821A8E54;
	sub_82188300(ctx, base);
	// b 0x821a8e5c
	goto loc_821A8E5C;
loc_821A8E58:
	// stfs f29,984(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 984, temp.u32);
loc_821A8E5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821a8e88
	if (ctx.cr6.eq) goto loc_821A8E88;
loc_821A8E64:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A8E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821a8e64
	if (!ctx.cr6.eq) goto loc_821A8E64;
loc_821A8E88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A8EAC"))) PPC_WEAK_FUNC(sub_821A8EAC);
PPC_FUNC_IMPL(__imp__sub_821A8EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A8EB0"))) PPC_WEAK_FUNC(sub_821A8EB0);
PPC_FUNC_IMPL(__imp__sub_821A8EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821A8EB8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,2220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2220);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x821a8f14
	if (!ctx.cr6.eq) goto loc_821A8F14;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r8,2
	ctx.r8.s64 = 2;
loc_821A8EDC:
	// addi r7,r9,1096
	ctx.r7.s64 = ctx.r9.s64 + 1096;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a8f00
	if (ctx.cr6.eq) goto loc_821A8F00;
loc_821A8EEC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821a8eec
	if (!ctx.cr6.eq) goto loc_821A8EEC;
loc_821A8F00:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// addi r9,r9,1104
	ctx.r9.s64 = ctx.r9.s64 + 1104;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821a8edc
	if (!ctx.cr6.eq) goto loc_821A8EDC;
loc_821A8F14:
	// lwz r10,2212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2212);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821a8f44
	if (!ctx.cr6.gt) goto loc_821A8F44;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_821A8F28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219c638
	ctx.lr = 0x821A8F30;
	sub_8219C638(ctx, base);
	// lwz r9,2212(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2212);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,1104
	ctx.r30.s64 = ctx.r30.s64 + 1104;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821a8f28
	if (ctx.cr6.lt) goto loc_821A8F28;
loc_821A8F44:
	// lwz r8,2212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2212);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x821a91bc
	if (!ctx.cr6.eq) goto loc_821A91BC;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// lbz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// lwz r11,8540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8540);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821a9094
	if (ctx.cr6.eq) goto loc_821A9094;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// lis r27,-32091
	ctx.r27.s64 = -2103115776;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821a8fa0
	if (!ctx.cr6.eq) goto loc_821A8FA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8540, ctx.r11.u32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8536(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8536, temp.u32);
	// b 0x821a8fa4
	goto loc_821A8FA4;
loc_821A8FA0:
	// lfs f0,8536(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8536);
	ctx.f0.f64 = double(temp.f32);
loc_821A8FA4:
	// lis r28,-32161
	ctx.r28.s64 = -2107703296;
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lfs f0,19348(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 19348);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_821A8FC8:
	// lwz r10,1052(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r11,288
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 288, ctx.xer);
	// stw r29,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r29.u32);
	// blt cr6,0x821a8fc8
	if (ctx.cr6.lt) goto loc_821A8FC8;
	// lwz r3,1092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a8ff4
	if (ctx.cr6.eq) goto loc_821A8FF4;
	// bl 0x82359d70
	ctx.lr = 0x821A8FF0;
	sub_82359D70(ctx, base);
	// stw r29,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r29.u32);
loc_821A8FF4:
	// lwz r3,1028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// bl 0x82359d08
	ctx.lr = 0x821A8FFC;
	sub_82359D08(ctx, base);
	// stw r3,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r3.u32);
	// bl 0x823523c0
	ctx.lr = 0x821A9004;
	sub_823523C0(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,8536(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8536);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,1092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// lfs f13,19348(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 19348);
	ctx.f13.f64 = double(temp.f32);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r30,r31,1104
	ctx.r30.s64 = ctx.r31.s64 + 1104;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// std r3,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// lwz r9,1092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
loc_821A903C:
	// lwz r10,1052(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1052);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r11,288
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 288, ctx.xer);
	// stw r29,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r29.u32);
	// blt cr6,0x821a903c
	if (ctx.cr6.lt) goto loc_821A903C;
	// lwz r3,1092(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1092);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a9068
	if (ctx.cr6.eq) goto loc_821A9068;
	// bl 0x82359d70
	ctx.lr = 0x821A9064;
	sub_82359D70(ctx, base);
	// stw r29,1092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1092, ctx.r29.u32);
loc_821A9068:
	// lwz r3,1028(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	// bl 0x82359d08
	ctx.lr = 0x821A9070;
	sub_82359D08(ctx, base);
	// stw r3,1092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1092, ctx.r3.u32);
	// bl 0x823523c0
	ctx.lr = 0x821A9078;
	sub_823523C0(ctx, base);
	// lwz r7,1092(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1092);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// lwz r4,1092(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1092);
	// std r5,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r5.u64);
	// b 0x821a9220
	goto loc_821A9220;
loc_821A9094:
	// rlwinm r3,r11,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r27,-32091
	ctx.r27.s64 = -2103115776;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821a90c8
	if (!ctx.cr6.eq) goto loc_821A90C8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,8540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8540, ctx.r11.u32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8532(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8532, temp.u32);
	// b 0x821a90cc
	goto loc_821A90CC;
loc_821A90C8:
	// lfs f0,8532(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8532);
	ctx.f0.f64 = double(temp.f32);
loc_821A90CC:
	// lis r28,-32161
	ctx.r28.s64 = -2107703296;
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lfs f13,19344(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 19344);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_821A90F0:
	// lwz r10,1052(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r11,288
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 288, ctx.xer);
	// stw r29,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r29.u32);
	// blt cr6,0x821a90f0
	if (ctx.cr6.lt) goto loc_821A90F0;
	// lwz r3,1092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a911c
	if (ctx.cr6.eq) goto loc_821A911C;
	// bl 0x82359d70
	ctx.lr = 0x821A9118;
	sub_82359D70(ctx, base);
	// stw r29,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r29.u32);
loc_821A911C:
	// lwz r3,1028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// bl 0x82359d08
	ctx.lr = 0x821A9124;
	sub_82359D08(ctx, base);
	// stw r3,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r3.u32);
	// bl 0x823523c0
	ctx.lr = 0x821A912C;
	sub_823523C0(ctx, base);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfs f0,19344(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 19344);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,1092(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,8532(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8532);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r30,r31,1104
	ctx.r30.s64 = ctx.r31.s64 + 1104;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// lwz r6,1092(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// std r7,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r7.u64);
loc_821A9164:
	// lwz r10,1052(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1052);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r11,288
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 288, ctx.xer);
	// stw r29,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r29.u32);
	// blt cr6,0x821a9164
	if (ctx.cr6.lt) goto loc_821A9164;
	// lwz r3,1092(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1092);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a9190
	if (ctx.cr6.eq) goto loc_821A9190;
	// bl 0x82359d70
	ctx.lr = 0x821A918C;
	sub_82359D70(ctx, base);
	// stw r29,1092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1092, ctx.r29.u32);
loc_821A9190:
	// lwz r3,1028(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	// bl 0x82359d08
	ctx.lr = 0x821A9198;
	sub_82359D08(ctx, base);
	// stw r3,1092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1092, ctx.r3.u32);
	// bl 0x823523c0
	ctx.lr = 0x821A91A0;
	sub_823523C0(ctx, base);
	// lwz r4,1092(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1092);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r3,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r3.u64);
	// lwz r10,1092(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1092);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// b 0x821a9220
	goto loc_821A9220;
loc_821A91BC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821A91C0:
	// lwz r10,1052(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r11,288
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 288, ctx.xer);
	// stw r29,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r29.u32);
	// blt cr6,0x821a91c0
	if (ctx.cr6.lt) goto loc_821A91C0;
	// lwz r3,1092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a91ec
	if (ctx.cr6.eq) goto loc_821A91EC;
	// bl 0x82359d70
	ctx.lr = 0x821A91E8;
	sub_82359D70(ctx, base);
	// stw r29,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r29.u32);
loc_821A91EC:
	// addi r30,r31,1104
	ctx.r30.s64 = ctx.r31.s64 + 1104;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821A91F4:
	// lwz r10,1052(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1052);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r11,288
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 288, ctx.xer);
	// stw r29,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r29.u32);
	// blt cr6,0x821a91f4
	if (ctx.cr6.lt) goto loc_821A91F4;
	// lwz r3,1092(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1092);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a9220
	if (ctx.cr6.eq) goto loc_821A9220;
	// bl 0x82359d70
	ctx.lr = 0x821A921C;
	sub_82359D70(ctx, base);
	// stw r29,1092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1092, ctx.r29.u32);
loc_821A9220:
	// bl 0x8218d128
	ctx.lr = 0x821A9224;
	sub_8218D128(ctx, base);
	// lwz r7,2212(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2212);
	// stb r29,2208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2208, ctx.r29.u8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x821a929c
	if (!ctx.cr6.gt) goto loc_821A929C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,988
	ctx.r30.s64 = ctx.r31.s64 + 988;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r27,6
	ctx.r27.s64 = 6;
	// lfs f31,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
loc_821A9248:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a89b0
	ctx.lr = 0x821A9254;
	sub_821A89B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a4aa8
	ctx.lr = 0x821A9260;
	sub_821A4AA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a7ef8
	ctx.lr = 0x821A926C;
	sub_821A7EF8(ctx, base);
	// addi r3,r30,-988
	ctx.r3.s64 = ctx.r30.s64 + -988;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// bl 0x82188198
	ctx.lr = 0x821A9280;
	sub_82188198(ctx, base);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r30,r30,1104
	ctx.r30.s64 = ctx.r30.s64 + 1104;
	// lwz r6,2212(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2212);
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x821a9248
	if (ctx.cr6.lt) goto loc_821A9248;
loc_821A929C:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,2220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2220, ctx.r5.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A92B4"))) PPC_WEAK_FUNC(sub_821A92B4);
PPC_FUNC_IMPL(__imp__sub_821A92B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A92B8"))) PPC_WEAK_FUNC(sub_821A92B8);
PPC_FUNC_IMPL(__imp__sub_821A92B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821A92C0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,2212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821a9304
	if (!ctx.cr6.gt) goto loc_821A9304;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821A92E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821a8db0
	ctx.lr = 0x821A92F0;
	sub_821A8DB0(ctx, base);
	// lwz r10,2212(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2212);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,1104
	ctx.r31.s64 = ctx.r31.s64 + 1104;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821a92e4
	if (ctx.cr6.lt) goto loc_821A92E4;
loc_821A9304:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A9310"))) PPC_WEAK_FUNC(sub_821A9310);
PPC_FUNC_IMPL(__imp__sub_821A9310) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,24900(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24900);
	// bl 0x8242bf18
	ctx.lr = 0x821A9330;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-10312
	ctx.r11.s64 = ctx.r11.s64 + -10312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8808, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821A9360"))) PPC_WEAK_FUNC(sub_821A9360);
PPC_FUNC_IMPL(__imp__sub_821A9360) {
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
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A9384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821A9398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,56(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821A93B0;
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

__attribute__((alias("__imp__sub_821A93C4"))) PPC_WEAK_FUNC(sub_821A93C4);
PPC_FUNC_IMPL(__imp__sub_821A93C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A93C8"))) PPC_WEAK_FUNC(sub_821A93C8);
PPC_FUNC_IMPL(__imp__sub_821A93C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_821A93E4"))) PPC_WEAK_FUNC(sub_821A93E4);
PPC_FUNC_IMPL(__imp__sub_821A93E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A93E8"))) PPC_WEAK_FUNC(sub_821A93E8);
PPC_FUNC_IMPL(__imp__sub_821A93E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,24896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24896);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A93F4"))) PPC_WEAK_FUNC(sub_821A93F4);
PPC_FUNC_IMPL(__imp__sub_821A93F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A93F8"))) PPC_WEAK_FUNC(sub_821A93F8);
PPC_FUNC_IMPL(__imp__sub_821A93F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,8808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8808, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9404"))) PPC_WEAK_FUNC(sub_821A9404);
PPC_FUNC_IMPL(__imp__sub_821A9404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9408"))) PPC_WEAK_FUNC(sub_821A9408);
PPC_FUNC_IMPL(__imp__sub_821A9408) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,24924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24924);
	// bl 0x8242bf18
	ctx.lr = 0x821A9428;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-10240
	ctx.r11.s64 = ctx.r11.s64 + -10240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8840, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821A9458"))) PPC_WEAK_FUNC(sub_821A9458);
PPC_FUNC_IMPL(__imp__sub_821A9458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,24920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24920);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9464"))) PPC_WEAK_FUNC(sub_821A9464);
PPC_FUNC_IMPL(__imp__sub_821A9464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9468"))) PPC_WEAK_FUNC(sub_821A9468);
PPC_FUNC_IMPL(__imp__sub_821A9468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,8840(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8840, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9474"))) PPC_WEAK_FUNC(sub_821A9474);
PPC_FUNC_IMPL(__imp__sub_821A9474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9478"))) PPC_WEAK_FUNC(sub_821A9478);
PPC_FUNC_IMPL(__imp__sub_821A9478) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// lbz r11,3672(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8259d300
	ctx.lr = 0x821A94A0;
	sub_8259D300(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8840);
	// bl 0x821e6ac0
	ctx.lr = 0x821A94B0;
	sub_821E6AC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82431c88
	ctx.lr = 0x821A94B8;
	sub_82431C88(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A94C8"))) PPC_WEAK_FUNC(sub_821A94C8);
PPC_FUNC_IMPL(__imp__sub_821A94C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A94D8"))) PPC_WEAK_FUNC(sub_821A94D8);
PPC_FUNC_IMPL(__imp__sub_821A94D8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821a94ec
	if (!ctx.cr6.eq) goto loc_821A94EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A94EC:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r10,r11,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A94FC"))) PPC_WEAK_FUNC(sub_821A94FC);
PPC_FUNC_IMPL(__imp__sub_821A94FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9500"))) PPC_WEAK_FUNC(sub_821A9500);
PPC_FUNC_IMPL(__imp__sub_821A9500) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,25,0,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xFE000000;
	// srawi r3,r10,25
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFFFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 25;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9510"))) PPC_WEAK_FUNC(sub_821A9510);
PPC_FUNC_IMPL(__imp__sub_821A9510) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821a9528
	if (!ctx.cr6.eq) goto loc_821A9528;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A9528:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9530"))) PPC_WEAK_FUNC(sub_821A9530);
PPC_FUNC_IMPL(__imp__sub_821A9530) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,4095
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4095, ctx.xer);
	// ble cr6,0x821a9548
	if (!ctx.cr6.gt) goto loc_821A9548;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,4095
	ctx.r4.s64 = 4095;
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_821A9548:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r9,r4,14,6,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 14) & 0x3FFC000) | (ctx.r9.u64 & 0xFFFFFFFFFC003FFF);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9558"))) PPC_WEAK_FUNC(sub_821A9558);
PPC_FUNC_IMPL(__imp__sub_821A9558) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r4,r11,0,0,24
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFF80) | (ctx.r4.u64 & 0xFFFFFFFF0000007F);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9568"))) PPC_WEAK_FUNC(sub_821A9568);
PPC_FUNC_IMPL(__imp__sub_821A9568) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821a957c
	if (!ctx.cr6.eq) goto loc_821A957C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A957C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r10,r11,27,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A958C"))) PPC_WEAK_FUNC(sub_821A958C);
PPC_FUNC_IMPL(__imp__sub_821A958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9590"))) PPC_WEAK_FUNC(sub_821A9590);
PPC_FUNC_IMPL(__imp__sub_821A9590) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821a95a4
	if (!ctx.cr6.eq) goto loc_821A95A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A95A4:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r10,r11,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A95B4"))) PPC_WEAK_FUNC(sub_821A95B4);
PPC_FUNC_IMPL(__imp__sub_821A95B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A95B8"))) PPC_WEAK_FUNC(sub_821A95B8);
PPC_FUNC_IMPL(__imp__sub_821A95B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r4,8,18,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A95C8"))) PPC_WEAK_FUNC(sub_821A95C8);
PPC_FUNC_IMPL(__imp__sub_821A95C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A95D8"))) PPC_WEAK_FUNC(sub_821A95D8);
PPC_FUNC_IMPL(__imp__sub_821A95D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,3,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A95E8"))) PPC_WEAK_FUNC(sub_821A95E8);
PPC_FUNC_IMPL(__imp__sub_821A95E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821a9600
	if (!ctx.cr6.eq) goto loc_821A9600;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A9600:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9614"))) PPC_WEAK_FUNC(sub_821A9614);
PPC_FUNC_IMPL(__imp__sub_821A9614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9618"))) PPC_WEAK_FUNC(sub_821A9618);
PPC_FUNC_IMPL(__imp__sub_821A9618) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,25,0,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xFE000000;
	// srawi r10,r10,25
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 25;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821a9634
	if (ctx.cr6.eq) goto loc_821A9634;
	// cmpwi cr6,r10,42
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 42, ctx.xer);
	// bne cr6,0x821a9660
	if (!ctx.cr6.eq) goto loc_821A9660;
loc_821A9634:
	// rlwinm r9,r11,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821a9648
	if (!ctx.cr6.eq) goto loc_821A9648;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A9648:
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
	// beq cr6,0x821a9664
	if (ctx.cr6.eq) goto loc_821A9664;
loc_821A9660:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A9664:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A966C"))) PPC_WEAK_FUNC(sub_821A966C);
PPC_FUNC_IMPL(__imp__sub_821A966C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9670"))) PPC_WEAK_FUNC(sub_821A9670);
PPC_FUNC_IMPL(__imp__sub_821A9670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x821a96ac
	if (!ctx.cr6.eq) goto loc_821A96AC;
	// rlwinm r9,r11,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821a9694
	if (!ctx.cr6.eq) goto loc_821A9694;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A9694:
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
	// beq cr6,0x821a96b0
	if (ctx.cr6.eq) goto loc_821A96B0;
loc_821A96AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A96B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A96B8"))) PPC_WEAK_FUNC(sub_821A96B8);
PPC_FUNC_IMPL(__imp__sub_821A96B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x821a96f4
	if (!ctx.cr6.eq) goto loc_821A96F4;
	// rlwinm r9,r11,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821a96dc
	if (!ctx.cr6.eq) goto loc_821A96DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A96DC:
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
	// beq cr6,0x821a96f8
	if (ctx.cr6.eq) goto loc_821A96F8;
loc_821A96F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A96F8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9700"))) PPC_WEAK_FUNC(sub_821A9700);
PPC_FUNC_IMPL(__imp__sub_821A9700) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x821a973c
	if (!ctx.cr6.eq) goto loc_821A973C;
	// rlwinm r9,r11,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821a9724
	if (!ctx.cr6.eq) goto loc_821A9724;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A9724:
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
	// beq cr6,0x821a9740
	if (ctx.cr6.eq) goto loc_821A9740;
loc_821A973C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A9740:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9748"))) PPC_WEAK_FUNC(sub_821A9748);
PPC_FUNC_IMPL(__imp__sub_821A9748) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// bne cr6,0x821a9784
	if (!ctx.cr6.eq) goto loc_821A9784;
	// rlwinm r9,r11,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821a976c
	if (!ctx.cr6.eq) goto loc_821A976C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A976C:
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
	// beq cr6,0x821a9788
	if (ctx.cr6.eq) goto loc_821A9788;
loc_821A9784:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A9788:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9790"))) PPC_WEAK_FUNC(sub_821A9790);
PPC_FUNC_IMPL(__imp__sub_821A9790) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821a97b0
	if (ctx.cr6.lt) goto loc_821A97B0;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r8,r9,0,3,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// blr 
	return;
loc_821A97B0:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A97CC"))) PPC_WEAK_FUNC(sub_821A97CC);
PPC_FUNC_IMPL(__imp__sub_821A97CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A97D0"))) PPC_WEAK_FUNC(sub_821A97D0);
PPC_FUNC_IMPL(__imp__sub_821A97D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// b 0x8242bcd0
	sub_8242BCD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A97E4"))) PPC_WEAK_FUNC(sub_821A97E4);
PPC_FUNC_IMPL(__imp__sub_821A97E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A97E8"))) PPC_WEAK_FUNC(sub_821A97E8);
PPC_FUNC_IMPL(__imp__sub_821A97E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A97F4"))) PPC_WEAK_FUNC(sub_821A97F4);
PPC_FUNC_IMPL(__imp__sub_821A97F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A97F8"))) PPC_WEAK_FUNC(sub_821A97F8);
PPC_FUNC_IMPL(__imp__sub_821A97F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A980C"))) PPC_WEAK_FUNC(sub_821A980C);
PPC_FUNC_IMPL(__imp__sub_821A980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9810"))) PPC_WEAK_FUNC(sub_821A9810);
PPC_FUNC_IMPL(__imp__sub_821A9810) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// b 0x8242bcd0
	sub_8242BCD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A9844"))) PPC_WEAK_FUNC(sub_821A9844);
PPC_FUNC_IMPL(__imp__sub_821A9844) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9848"))) PPC_WEAK_FUNC(sub_821A9848);
PPC_FUNC_IMPL(__imp__sub_821A9848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821a9864
	if (ctx.cr6.eq) goto loc_821A9864;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A9864:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A986C"))) PPC_WEAK_FUNC(sub_821A986C);
PPC_FUNC_IMPL(__imp__sub_821A986C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9870"))) PPC_WEAK_FUNC(sub_821A9870);
PPC_FUNC_IMPL(__imp__sub_821A9870) {
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
	// bl 0x82434768
	ctx.lr = 0x821A9888;
	sub_82434768(ctx, base);
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

__attribute__((alias("__imp__sub_821A98A0"))) PPC_WEAK_FUNC(sub_821A98A0);
PPC_FUNC_IMPL(__imp__sub_821A98A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// b 0x8242bcd0
	sub_8242BCD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A98D4"))) PPC_WEAK_FUNC(sub_821A98D4);
PPC_FUNC_IMPL(__imp__sub_821A98D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A98D8"))) PPC_WEAK_FUNC(sub_821A98D8);
PPC_FUNC_IMPL(__imp__sub_821A98D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 65536;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x821a9938
	if (!ctx.cr6.eq) goto loc_821A9938;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x821A9938;
	sub_8242BCD0(ctx, base);
loc_821A9938:
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_821A995C"))) PPC_WEAK_FUNC(sub_821A995C);
PPC_FUNC_IMPL(__imp__sub_821A995C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9960"))) PPC_WEAK_FUNC(sub_821A9960);
PPC_FUNC_IMPL(__imp__sub_821A9960) {
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
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r10,-24144
	ctx.r3.s64 = ctx.r10.s64 + -24144;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82438b68
	ctx.lr = 0x821A9994;
	sub_82438B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a99c0
	if (ctx.cr6.eq) goto loc_821A99C0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821a99b4
	if (!ctx.cr6.eq) goto loc_821A99B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A99B4:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821a99c4
	if (!ctx.cr6.eq) goto loc_821A99C4;
loc_821A99C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A99C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A99D4"))) PPC_WEAK_FUNC(sub_821A99D4);
PPC_FUNC_IMPL(__imp__sub_821A99D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A99D8"))) PPC_WEAK_FUNC(sub_821A99D8);
PPC_FUNC_IMPL(__imp__sub_821A99D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r3,r10,-24144
	ctx.r3.s64 = ctx.r10.s64 + -24144;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8244c040
	sub_8244C040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A9A04"))) PPC_WEAK_FUNC(sub_821A9A04);
PPC_FUNC_IMPL(__imp__sub_821A9A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9A08"))) PPC_WEAK_FUNC(sub_821A9A08);
PPC_FUNC_IMPL(__imp__sub_821A9A08) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,25296(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25296);
	// bl 0x8242bf18
	ctx.lr = 0x821A9A28;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-10112
	ctx.r11.s64 = ctx.r11.s64 + -10112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8864, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821A9A58"))) PPC_WEAK_FUNC(sub_821A9A58);
PPC_FUNC_IMPL(__imp__sub_821A9A58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,25292(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25292);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9A64"))) PPC_WEAK_FUNC(sub_821A9A64);
PPC_FUNC_IMPL(__imp__sub_821A9A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9A68"))) PPC_WEAK_FUNC(sub_821A9A68);
PPC_FUNC_IMPL(__imp__sub_821A9A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,8864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8864, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9A74"))) PPC_WEAK_FUNC(sub_821A9A74);
PPC_FUNC_IMPL(__imp__sub_821A9A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9A78"))) PPC_WEAK_FUNC(sub_821A9A78);
PPC_FUNC_IMPL(__imp__sub_821A9A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8864(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8864);
	// bl 0x821ee778
	ctx.lr = 0x821A9A94;
	sub_821EE778(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82431c88
	ctx.lr = 0x821A9A9C;
	sub_82431C88(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9AAC"))) PPC_WEAK_FUNC(sub_821A9AAC);
PPC_FUNC_IMPL(__imp__sub_821A9AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9AB0"))) PPC_WEAK_FUNC(sub_821A9AB0);
PPC_FUNC_IMPL(__imp__sub_821A9AB0) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,25304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25304);
	// bl 0x8242bf18
	ctx.lr = 0x821A9AD0;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-10040
	ctx.r11.s64 = ctx.r11.s64 + -10040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8948, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821A9B00"))) PPC_WEAK_FUNC(sub_821A9B00);
PPC_FUNC_IMPL(__imp__sub_821A9B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,25300(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25300);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9B0C"))) PPC_WEAK_FUNC(sub_821A9B0C);
PPC_FUNC_IMPL(__imp__sub_821A9B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9B10"))) PPC_WEAK_FUNC(sub_821A9B10);
PPC_FUNC_IMPL(__imp__sub_821A9B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,8948(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8948, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9B1C"))) PPC_WEAK_FUNC(sub_821A9B1C);
PPC_FUNC_IMPL(__imp__sub_821A9B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9B20"))) PPC_WEAK_FUNC(sub_821A9B20);
PPC_FUNC_IMPL(__imp__sub_821A9B20) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,25312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25312);
	// bl 0x8242bf18
	ctx.lr = 0x821A9B40;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-9968
	ctx.r11.s64 = ctx.r11.s64 + -9968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8956, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821A9B70"))) PPC_WEAK_FUNC(sub_821A9B70);
PPC_FUNC_IMPL(__imp__sub_821A9B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,25308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25308);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9B7C"))) PPC_WEAK_FUNC(sub_821A9B7C);
PPC_FUNC_IMPL(__imp__sub_821A9B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9B80"))) PPC_WEAK_FUNC(sub_821A9B80);
PPC_FUNC_IMPL(__imp__sub_821A9B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,8956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8956, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9B8C"))) PPC_WEAK_FUNC(sub_821A9B8C);
PPC_FUNC_IMPL(__imp__sub_821A9B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9B90"))) PPC_WEAK_FUNC(sub_821A9B90);
PPC_FUNC_IMPL(__imp__sub_821A9B90) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,25448(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25448);
	// bl 0x8242bf18
	ctx.lr = 0x821A9BB0;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-9896
	ctx.r11.s64 = ctx.r11.s64 + -9896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8964, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821A9BE0"))) PPC_WEAK_FUNC(sub_821A9BE0);
PPC_FUNC_IMPL(__imp__sub_821A9BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,25444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25444);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9BEC"))) PPC_WEAK_FUNC(sub_821A9BEC);
PPC_FUNC_IMPL(__imp__sub_821A9BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9BF0"))) PPC_WEAK_FUNC(sub_821A9BF0);
PPC_FUNC_IMPL(__imp__sub_821A9BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,8964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8964, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9BFC"))) PPC_WEAK_FUNC(sub_821A9BFC);
PPC_FUNC_IMPL(__imp__sub_821A9BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9C00"))) PPC_WEAK_FUNC(sub_821A9C00);
PPC_FUNC_IMPL(__imp__sub_821A9C00) {
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
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8964);
	// bl 0x821e70b8
	ctx.lr = 0x821A9C1C;
	sub_821E70B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82431c88
	ctx.lr = 0x821A9C24;
	sub_82431C88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9C34"))) PPC_WEAK_FUNC(sub_821A9C34);
PPC_FUNC_IMPL(__imp__sub_821A9C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9C38"))) PPC_WEAK_FUNC(sub_821A9C38);
PPC_FUNC_IMPL(__imp__sub_821A9C38) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,25576(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25576);
	// bl 0x8242bf18
	ctx.lr = 0x821A9C58;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-9824
	ctx.r11.s64 = ctx.r11.s64 + -9824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9048, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821A9C88"))) PPC_WEAK_FUNC(sub_821A9C88);
PPC_FUNC_IMPL(__imp__sub_821A9C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,25572(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25572);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9C94"))) PPC_WEAK_FUNC(sub_821A9C94);
PPC_FUNC_IMPL(__imp__sub_821A9C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9C98"))) PPC_WEAK_FUNC(sub_821A9C98);
PPC_FUNC_IMPL(__imp__sub_821A9C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,9048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9048, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821A9CA4"))) PPC_WEAK_FUNC(sub_821A9CA4);
PPC_FUNC_IMPL(__imp__sub_821A9CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821A9CA8"))) PPC_WEAK_FUNC(sub_821A9CA8);
PPC_FUNC_IMPL(__imp__sub_821A9CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821A9CB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r25,-32044
	ctx.r25.s64 = -2100035584;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// ori r27,r4,65535
	ctx.r27.u64 = ctx.r4.u64 | 65535;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r29,r11,25464
	ctx.r29.s64 = ctx.r11.s64 + 25464;
loc_821A9D28:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r31,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x82434768
	ctx.lr = 0x821A9D34;
	sub_82434768(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r8,r9,r27
	ctx.r8.u64 = ctx.r9.u64 + ctx.r27.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x821a9d74
	if (!ctx.cr6.eq) goto loc_821A9D74;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x821A9D74;
	sub_8242BCD0(ctx, base);
loc_821A9D74:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r5,r6,r27
	ctx.r5.u64 = ctx.r6.u64 + ctx.r27.u64;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a9da8
	if (!ctx.cr6.eq) goto loc_821A9DA8;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x821A9DA8;
	sub_8242BCD0(ctx, base);
loc_821A9DA8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 24, ctx.xer);
	// blt cr6,0x821a9d28
	if (ctx.cr6.lt) goto loc_821A9D28;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,-24144
	ctx.r31.s64 = ctx.r11.s64 + -24144;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438b68
	ctx.lr = 0x821A9DDC;
	sub_82438B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a9e08
	if (ctx.cr6.eq) goto loc_821A9E08;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821a9dfc
	if (!ctx.cr6.eq) goto loc_821A9DFC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A9DFC:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821a9e0c
	if (!ctx.cr6.eq) goto loc_821A9E0C;
loc_821A9E08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A9E0C:
	// bl 0x8242c678
	ctx.lr = 0x821A9E10;
	sub_8242C678(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438b68
	ctx.lr = 0x821A9E38;
	sub_82438B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a9e64
	if (ctx.cr6.eq) goto loc_821A9E64;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r5,r6,0,4,4
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821a9e58
	if (!ctx.cr6.eq) goto loc_821A9E58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A9E58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a9e68
	if (!ctx.cr6.eq) goto loc_821A9E68;
loc_821A9E64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A9E68:
	// bl 0x8242c678
	ctx.lr = 0x821A9E6C;
	sub_8242C678(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438b68
	ctx.lr = 0x821A9E94;
	sub_82438B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a9ec0
	if (ctx.cr6.eq) goto loc_821A9EC0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821a9eb4
	if (!ctx.cr6.eq) goto loc_821A9EB4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A9EB4:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821a9ec4
	if (!ctx.cr6.eq) goto loc_821A9EC4;
loc_821A9EC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A9EC4:
	// bl 0x8242c678
	ctx.lr = 0x821A9EC8;
	sub_8242C678(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438b68
	ctx.lr = 0x821A9EF0;
	sub_82438B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a9f1c
	if (ctx.cr6.eq) goto loc_821A9F1C;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r5,r6,0,4,4
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821a9f10
	if (!ctx.cr6.eq) goto loc_821A9F10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A9F10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a9f20
	if (!ctx.cr6.eq) goto loc_821A9F20;
loc_821A9F1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A9F20:
	// bl 0x8242c678
	ctx.lr = 0x821A9F24;
	sub_8242C678(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438b68
	ctx.lr = 0x821A9F4C;
	sub_82438B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a9f78
	if (ctx.cr6.eq) goto loc_821A9F78;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821a9f6c
	if (!ctx.cr6.eq) goto loc_821A9F6C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821A9F6C:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821a9f7c
	if (!ctx.cr6.eq) goto loc_821A9F7C;
loc_821A9F78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A9F7C:
	// bl 0x8242ca40
	ctx.lr = 0x821A9F80;
	sub_8242CA40(ctx, base);
	// addi r31,r1,120
	ctx.r31.s64 = ctx.r1.s64 + 120;
	// li r30,5
	ctx.r30.s64 = 5;
	// stb r3,21(r26)
	PPC_STORE_U8(ctx.r26.u32 + 21, ctx.r3.u8);
loc_821A9F8C:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r5,r6,r27
	ctx.r5.u64 = ctx.r6.u64 + ctx.r27.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x821a9fbc
	if (!ctx.cr6.eq) goto loc_821A9FBC;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x821A9FBC;
	sub_8242BCD0(ctx, base);
loc_821A9FBC:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821a9f8c
	if (!ctx.cr6.lt) goto loc_821A9F8C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821A9FD0"))) PPC_WEAK_FUNC(sub_821A9FD0);
PPC_FUNC_IMPL(__imp__sub_821A9FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x821A9FD8;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r25,r11,8344
	ctx.r25.s64 = ctx.r11.s64 + 8344;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,11
	ctx.r10.s64 = 11;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821A9FF8:
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821a9ff8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A9FF8;
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// lis r24,-32044
	ctx.r24.s64 = -2100035584;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r27,r9,65535
	ctx.r27.u64 = ctx.r9.u64 | 65535;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r29,r11,25488
	ctx.r29.s64 = ctx.r11.s64 + 25488;
	// sth r10,0(r25)
	PPC_STORE_U16(ctx.r25.u32 + 0, ctx.r10.u16);
loc_821AA030:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r31,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x82434768
	ctx.lr = 0x821AA03C;
	sub_82434768(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r5,r6,r27
	ctx.r5.u64 = ctx.r6.u64 + ctx.r27.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x821aa07c
	if (!ctx.cr6.eq) goto loc_821AA07C;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x821AA07C;
	sub_8242BCD0(ctx, base);
loc_821AA07C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + ctx.r27.u64;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821aa0b0
	if (!ctx.cr6.eq) goto loc_821AA0B0;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x821AA0B0;
	sub_8242BCD0(ctx, base);
loc_821AA0B0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,44
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 44, ctx.xer);
	// blt cr6,0x821aa030
	if (ctx.cr6.lt) goto loc_821AA030;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,-24144
	ctx.r31.s64 = ctx.r11.s64 + -24144;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438b68
	ctx.lr = 0x821AA0E4;
	sub_82438B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa110
	if (ctx.cr6.eq) goto loc_821AA110;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r5,r6,0,4,4
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821aa104
	if (!ctx.cr6.eq) goto loc_821AA104;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AA104:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aa114
	if (!ctx.cr6.eq) goto loc_821AA114;
loc_821AA110:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AA114:
	// bl 0x8242c678
	ctx.lr = 0x821AA118;
	sub_8242C678(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438b68
	ctx.lr = 0x821AA13C;
	sub_82438B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa168
	if (ctx.cr6.eq) goto loc_821AA168;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821aa15c
	if (!ctx.cr6.eq) goto loc_821AA15C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AA15C:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821aa16c
	if (!ctx.cr6.eq) goto loc_821AA16C;
loc_821AA168:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AA16C:
	// bl 0x8242c678
	ctx.lr = 0x821AA170;
	sub_8242C678(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438b68
	ctx.lr = 0x821AA198;
	sub_82438B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa1c4
	if (ctx.cr6.eq) goto loc_821AA1C4;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r5,r6,0,4,4
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821aa1b8
	if (!ctx.cr6.eq) goto loc_821AA1B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AA1B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aa1c8
	if (!ctx.cr6.eq) goto loc_821AA1C8;
loc_821AA1C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AA1C8:
	// bl 0x8242c678
	ctx.lr = 0x821AA1CC;
	sub_8242C678(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438b68
	ctx.lr = 0x821AA1F4;
	sub_82438B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa220
	if (ctx.cr6.eq) goto loc_821AA220;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821aa214
	if (!ctx.cr6.eq) goto loc_821AA214;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AA214:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821aa224
	if (!ctx.cr6.eq) goto loc_821AA224;
loc_821AA220:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AA224:
	// bl 0x8242c678
	ctx.lr = 0x821AA228;
	sub_8242C678(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438b68
	ctx.lr = 0x821AA250;
	sub_82438B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa27c
	if (ctx.cr6.eq) goto loc_821AA27C;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r5,r6,0,4,4
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821aa270
	if (!ctx.cr6.eq) goto loc_821AA270;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AA270:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aa280
	if (!ctx.cr6.eq) goto loc_821AA280;
loc_821AA27C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AA280:
	// bl 0x8242c678
	ctx.lr = 0x821AA284;
	sub_8242C678(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438b68
	ctx.lr = 0x821AA2AC;
	sub_82438B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa2d8
	if (ctx.cr6.eq) goto loc_821AA2D8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821aa2cc
	if (!ctx.cr6.eq) goto loc_821AA2CC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AA2CC:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821aa2dc
	if (!ctx.cr6.eq) goto loc_821AA2DC;
loc_821AA2D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AA2DC:
	// bl 0x8242ca40
	ctx.lr = 0x821AA2E0;
	sub_8242CA40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,32(r26)
	PPC_STORE_U8(ctx.r26.u32 + 32, ctx.r11.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438b68
	ctx.lr = 0x821AA308;
	sub_82438B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa334
	if (ctx.cr6.eq) goto loc_821AA334;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r5,r6,0,4,4
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821aa328
	if (!ctx.cr6.eq) goto loc_821AA328;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AA328:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aa338
	if (!ctx.cr6.eq) goto loc_821AA338;
loc_821AA334:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AA338:
	// bl 0x8242c678
	ctx.lr = 0x821AA33C;
	sub_8242C678(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438b68
	ctx.lr = 0x821AA364;
	sub_82438B68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa390
	if (ctx.cr6.eq) goto loc_821AA390;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821aa384
	if (!ctx.cr6.eq) goto loc_821AA384;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AA384:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821aa394
	if (!ctx.cr6.eq) goto loc_821AA394;
loc_821AA390:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AA394:
	// bl 0x8242ca40
	ctx.lr = 0x821AA398;
	sub_8242CA40(ctx, base);
	// stb r3,33(r26)
	PPC_STORE_U8(ctx.r26.u32 + 33, ctx.r3.u8);
	// lhz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// add r5,r6,r27
	ctx.r5.u64 = ctx.r6.u64 + ctx.r27.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r25)
	PPC_STORE_U16(ctx.r25.u32 + 0, ctx.r11.u16);
	// bne cr6,0x821aa3c8
	if (!ctx.cr6.eq) goto loc_821AA3C8;
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,-26632(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x821AA3C8;
	sub_8242BCD0(ctx, base);
loc_821AA3C8:
	// addi r31,r1,140
	ctx.r31.s64 = ctx.r1.s64 + 140;
	// li r30,10
	ctx.r30.s64 = 10;
loc_821AA3D0:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x821aa400
	if (!ctx.cr6.eq) goto loc_821AA400;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x821AA400;
	sub_8242BCD0(ctx, base);
loc_821AA400:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821aa3d0
	if (!ctx.cr6.lt) goto loc_821AA3D0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821AA414"))) PPC_WEAK_FUNC(sub_821AA414);
PPC_FUNC_IMPL(__imp__sub_821AA414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA418"))) PPC_WEAK_FUNC(sub_821AA418);
PPC_FUNC_IMPL(__imp__sub_821AA418) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,25584(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25584);
	// bl 0x8242bf18
	ctx.lr = 0x821AA438;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-9752
	ctx.r11.s64 = ctx.r11.s64 + -9752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9124, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821AA468"))) PPC_WEAK_FUNC(sub_821AA468);
PPC_FUNC_IMPL(__imp__sub_821AA468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,25580(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25580);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA474"))) PPC_WEAK_FUNC(sub_821AA474);
PPC_FUNC_IMPL(__imp__sub_821AA474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA478"))) PPC_WEAK_FUNC(sub_821AA478);
PPC_FUNC_IMPL(__imp__sub_821AA478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,9124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9124, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA484"))) PPC_WEAK_FUNC(sub_821AA484);
PPC_FUNC_IMPL(__imp__sub_821AA484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA488"))) PPC_WEAK_FUNC(sub_821AA488);
PPC_FUNC_IMPL(__imp__sub_821AA488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lwz r3,9124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9124);
	// bl 0x821e8b58
	ctx.lr = 0x821AA4A0;
	sub_821E8B58(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x821aa4c8
	if (!ctx.cr6.lt) goto loc_821AA4C8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,3672
	ctx.r3.s64 = ctx.r11.s64 + 3672;
	// bl 0x82431c88
	ctx.lr = 0x821AA4B8;
	sub_82431C88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821AA4C8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,13348
	ctx.r5.s64 = ctx.r11.s64 + 13348;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259da78
	ctx.lr = 0x821AA4DC;
	sub_8259DA78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82431c88
	ctx.lr = 0x821AA4E4;
	sub_82431C88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA4F4"))) PPC_WEAK_FUNC(sub_821AA4F4);
PPC_FUNC_IMPL(__imp__sub_821AA4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA4F8"))) PPC_WEAK_FUNC(sub_821AA4F8);
PPC_FUNC_IMPL(__imp__sub_821AA4F8) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,25812(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25812);
	// bl 0x8242bf18
	ctx.lr = 0x821AA518;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-9680
	ctx.r11.s64 = ctx.r11.s64 + -9680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9156, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821AA548"))) PPC_WEAK_FUNC(sub_821AA548);
PPC_FUNC_IMPL(__imp__sub_821AA548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,25808(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25808);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA554"))) PPC_WEAK_FUNC(sub_821AA554);
PPC_FUNC_IMPL(__imp__sub_821AA554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA558"))) PPC_WEAK_FUNC(sub_821AA558);
PPC_FUNC_IMPL(__imp__sub_821AA558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,9156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9156, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA564"))) PPC_WEAK_FUNC(sub_821AA564);
PPC_FUNC_IMPL(__imp__sub_821AA564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA568"))) PPC_WEAK_FUNC(sub_821AA568);
PPC_FUNC_IMPL(__imp__sub_821AA568) {
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
	// lwz r3,9156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9156);
	// bl 0x821f0e78
	ctx.lr = 0x821AA580;
	sub_821F0E78(ctx, base);
	// bl 0x82431c88
	ctx.lr = 0x821AA584;
	sub_82431C88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA594"))) PPC_WEAK_FUNC(sub_821AA594);
PPC_FUNC_IMPL(__imp__sub_821AA594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA598"))) PPC_WEAK_FUNC(sub_821AA598);
PPC_FUNC_IMPL(__imp__sub_821AA598) {
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
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,25864
	ctx.r9.u64 = ctx.r10.u64 | 25864;
	// ori r7,r8,25868
	ctx.r7.u64 = ctx.r8.u64 | 25868;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x821aa608
	if (ctx.cr6.eq) goto loc_821AA608;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// ori r4,r5,16216
	ctx.r4.u64 = ctx.r5.u64 | 16216;
	// addi r6,r10,24760
	ctx.r6.s64 = ctx.r10.s64 + 24760;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x821aa608
	if (ctx.cr6.eq) goto loc_821AA608;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lwz r3,9156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9156);
	// bl 0x821f0e78
	ctx.lr = 0x821AA5F4;
	sub_821F0E78(ctx, base);
	// bl 0x82431c88
	ctx.lr = 0x821AA5F8;
	sub_82431C88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821AA608:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,3672
	ctx.r3.s64 = ctx.r11.s64 + 3672;
	// bl 0x82431c88
	ctx.lr = 0x821AA614;
	sub_82431C88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA624"))) PPC_WEAK_FUNC(sub_821AA624);
PPC_FUNC_IMPL(__imp__sub_821AA624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA628"))) PPC_WEAK_FUNC(sub_821AA628);
PPC_FUNC_IMPL(__imp__sub_821AA628) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,25820(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25820);
	// bl 0x8242bf18
	ctx.lr = 0x821AA648;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-9608
	ctx.r11.s64 = ctx.r11.s64 + -9608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9284, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821AA678"))) PPC_WEAK_FUNC(sub_821AA678);
PPC_FUNC_IMPL(__imp__sub_821AA678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,25816(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25816);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA684"))) PPC_WEAK_FUNC(sub_821AA684);
PPC_FUNC_IMPL(__imp__sub_821AA684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA688"))) PPC_WEAK_FUNC(sub_821AA688);
PPC_FUNC_IMPL(__imp__sub_821AA688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,9284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9284, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA694"))) PPC_WEAK_FUNC(sub_821AA694);
PPC_FUNC_IMPL(__imp__sub_821AA694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA698"))) PPC_WEAK_FUNC(sub_821AA698);
PPC_FUNC_IMPL(__imp__sub_821AA698) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,25908(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25908);
	// bl 0x8242bf18
	ctx.lr = 0x821AA6B8;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-9536
	ctx.r11.s64 = ctx.r11.s64 + -9536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8800(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8800, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821AA6E8"))) PPC_WEAK_FUNC(sub_821AA6E8);
PPC_FUNC_IMPL(__imp__sub_821AA6E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,25904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25904);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA6F4"))) PPC_WEAK_FUNC(sub_821AA6F4);
PPC_FUNC_IMPL(__imp__sub_821AA6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA6F8"))) PPC_WEAK_FUNC(sub_821AA6F8);
PPC_FUNC_IMPL(__imp__sub_821AA6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,8800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8800, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA704"))) PPC_WEAK_FUNC(sub_821AA704);
PPC_FUNC_IMPL(__imp__sub_821AA704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA708"))) PPC_WEAK_FUNC(sub_821AA708);
PPC_FUNC_IMPL(__imp__sub_821AA708) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,25924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25924);
	// bl 0x8242bf18
	ctx.lr = 0x821AA728;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-9464
	ctx.r11.s64 = ctx.r11.s64 + -9464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9328, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821AA758"))) PPC_WEAK_FUNC(sub_821AA758);
PPC_FUNC_IMPL(__imp__sub_821AA758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,25920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25920);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA764"))) PPC_WEAK_FUNC(sub_821AA764);
PPC_FUNC_IMPL(__imp__sub_821AA764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA768"))) PPC_WEAK_FUNC(sub_821AA768);
PPC_FUNC_IMPL(__imp__sub_821AA768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,9328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9328, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA774"))) PPC_WEAK_FUNC(sub_821AA774);
PPC_FUNC_IMPL(__imp__sub_821AA774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA778"))) PPC_WEAK_FUNC(sub_821AA778);
PPC_FUNC_IMPL(__imp__sub_821AA778) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,25968(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25968);
	// bl 0x8242bf18
	ctx.lr = 0x821AA798;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-9392
	ctx.r11.s64 = ctx.r11.s64 + -9392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8804, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821AA7C8"))) PPC_WEAK_FUNC(sub_821AA7C8);
PPC_FUNC_IMPL(__imp__sub_821AA7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,25964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25964);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA7D4"))) PPC_WEAK_FUNC(sub_821AA7D4);
PPC_FUNC_IMPL(__imp__sub_821AA7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA7D8"))) PPC_WEAK_FUNC(sub_821AA7D8);
PPC_FUNC_IMPL(__imp__sub_821AA7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,8804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8804, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA7E4"))) PPC_WEAK_FUNC(sub_821AA7E4);
PPC_FUNC_IMPL(__imp__sub_821AA7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA7E8"))) PPC_WEAK_FUNC(sub_821AA7E8);
PPC_FUNC_IMPL(__imp__sub_821AA7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821AA7F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32091
	ctx.r30.s64 = -2103115776;
	// lwz r3,8804(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8804);
	// bl 0x821e9db8
	ctx.lr = 0x821AA800;
	sub_821E9DB8(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821AA814;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa828
	if (ctx.cr6.eq) goto loc_821AA828;
	// bl 0x824519f8
	ctx.lr = 0x821AA820;
	sub_824519F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x821aa82c
	goto loc_821AA82C;
loc_821AA828:
	// li r28,0
	ctx.r28.s64 = 0;
loc_821AA82C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821aa864
	if (!ctx.cr6.gt) goto loc_821AA864;
loc_821AA838:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8804(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8804);
	// bl 0x821e9dd0
	ctx.lr = 0x821AA844;
	sub_821E9DD0(ctx, base);
	// bl 0x82431c88
	ctx.lr = 0x821AA848;
	sub_82431C88(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82450718
	ctx.lr = 0x821AA858;
	sub_82450718(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821aa838
	if (ctx.cr6.lt) goto loc_821AA838;
loc_821AA864:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821AA870"))) PPC_WEAK_FUNC(sub_821AA870);
PPC_FUNC_IMPL(__imp__sub_821AA870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821AA878;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32091
	ctx.r30.s64 = -2103115776;
	// lwz r3,8804(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8804);
	// bl 0x821e9d90
	ctx.lr = 0x821AA888;
	sub_821E9D90(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821AA89C;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa8b0
	if (ctx.cr6.eq) goto loc_821AA8B0;
	// bl 0x824519f8
	ctx.lr = 0x821AA8A8;
	sub_824519F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x821aa8b4
	goto loc_821AA8B4;
loc_821AA8B0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_821AA8B4:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821aa8ec
	if (!ctx.cr6.gt) goto loc_821AA8EC;
loc_821AA8C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8804(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8804);
	// bl 0x821e9da0
	ctx.lr = 0x821AA8CC;
	sub_821E9DA0(ctx, base);
	// bl 0x82431c88
	ctx.lr = 0x821AA8D0;
	sub_82431C88(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82450718
	ctx.lr = 0x821AA8E0;
	sub_82450718(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821aa8c0
	if (ctx.cr6.lt) goto loc_821AA8C0;
loc_821AA8EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821AA8F8"))) PPC_WEAK_FUNC(sub_821AA8F8);
PPC_FUNC_IMPL(__imp__sub_821AA8F8) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,26016(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26016);
	// bl 0x8242bf18
	ctx.lr = 0x821AA918;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-9320
	ctx.r11.s64 = ctx.r11.s64 + -9320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9404, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821AA948"))) PPC_WEAK_FUNC(sub_821AA948);
PPC_FUNC_IMPL(__imp__sub_821AA948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,26012(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26012);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA954"))) PPC_WEAK_FUNC(sub_821AA954);
PPC_FUNC_IMPL(__imp__sub_821AA954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA958"))) PPC_WEAK_FUNC(sub_821AA958);
PPC_FUNC_IMPL(__imp__sub_821AA958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,9404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9404, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA964"))) PPC_WEAK_FUNC(sub_821AA964);
PPC_FUNC_IMPL(__imp__sub_821AA964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA968"))) PPC_WEAK_FUNC(sub_821AA968);
PPC_FUNC_IMPL(__imp__sub_821AA968) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,26024(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26024);
	// bl 0x8242bf18
	ctx.lr = 0x821AA988;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-9248
	ctx.r11.s64 = ctx.r11.s64 + -9248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9452, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821AA9B8"))) PPC_WEAK_FUNC(sub_821AA9B8);
PPC_FUNC_IMPL(__imp__sub_821AA9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,26020(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26020);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA9C4"))) PPC_WEAK_FUNC(sub_821AA9C4);
PPC_FUNC_IMPL(__imp__sub_821AA9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA9C8"))) PPC_WEAK_FUNC(sub_821AA9C8);
PPC_FUNC_IMPL(__imp__sub_821AA9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,9452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9452, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AA9D4"))) PPC_WEAK_FUNC(sub_821AA9D4);
PPC_FUNC_IMPL(__imp__sub_821AA9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AA9D8"))) PPC_WEAK_FUNC(sub_821AA9D8);
PPC_FUNC_IMPL(__imp__sub_821AA9D8) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,26076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26076);
	// bl 0x8242bf18
	ctx.lr = 0x821AA9F8;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-9176
	ctx.r11.s64 = ctx.r11.s64 + -9176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9484, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821AAA28"))) PPC_WEAK_FUNC(sub_821AAA28);
PPC_FUNC_IMPL(__imp__sub_821AAA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,26072(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26072);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AAA34"))) PPC_WEAK_FUNC(sub_821AAA34);
PPC_FUNC_IMPL(__imp__sub_821AAA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AAA38"))) PPC_WEAK_FUNC(sub_821AAA38);
PPC_FUNC_IMPL(__imp__sub_821AAA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,9484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9484, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AAA44"))) PPC_WEAK_FUNC(sub_821AAA44);
PPC_FUNC_IMPL(__imp__sub_821AAA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AAA48"))) PPC_WEAK_FUNC(sub_821AAA48);
PPC_FUNC_IMPL(__imp__sub_821AAA48) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,26160(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26160);
	// bl 0x8242bf18
	ctx.lr = 0x821AAA68;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-9104
	ctx.r11.s64 = ctx.r11.s64 + -9104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9536(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9536, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821AAA98"))) PPC_WEAK_FUNC(sub_821AAA98);
PPC_FUNC_IMPL(__imp__sub_821AAA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,26156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26156);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AAAA4"))) PPC_WEAK_FUNC(sub_821AAAA4);
PPC_FUNC_IMPL(__imp__sub_821AAAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AAAA8"))) PPC_WEAK_FUNC(sub_821AAAA8);
PPC_FUNC_IMPL(__imp__sub_821AAAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,9536(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9536, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AAAB4"))) PPC_WEAK_FUNC(sub_821AAAB4);
PPC_FUNC_IMPL(__imp__sub_821AAAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AAAB8"))) PPC_WEAK_FUNC(sub_821AAAB8);
PPC_FUNC_IMPL(__imp__sub_821AAAB8) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,26184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26184);
	// bl 0x8242bf18
	ctx.lr = 0x821AAAD8;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-9032
	ctx.r11.s64 = ctx.r11.s64 + -9032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9560, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821AAB08"))) PPC_WEAK_FUNC(sub_821AAB08);
PPC_FUNC_IMPL(__imp__sub_821AAB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,26180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26180);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AAB14"))) PPC_WEAK_FUNC(sub_821AAB14);
PPC_FUNC_IMPL(__imp__sub_821AAB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AAB18"))) PPC_WEAK_FUNC(sub_821AAB18);
PPC_FUNC_IMPL(__imp__sub_821AAB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,9560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9560, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821AAB24"))) PPC_WEAK_FUNC(sub_821AAB24);
PPC_FUNC_IMPL(__imp__sub_821AAB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821AAB28"))) PPC_WEAK_FUNC(sub_821AAB28);
PPC_FUNC_IMPL(__imp__sub_821AAB28) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,26192(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26192);
	// bl 0x8242bf18
	ctx.lr = 0x821AAB48;
	sub_8242BF18(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-8960
	ctx.r11.s64 = ctx.r11.s64 + -8960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9576, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821AAB78"))) PPC_WEAK_FUNC(sub_821AAB78);
PPC_FUNC_IMPL(__imp__sub_821AAB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r3,26188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26188);
	// blr 
	return;
}


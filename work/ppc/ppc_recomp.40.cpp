#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8231F958"))) PPC_WEAK_FUNC(sub_8231F958);
PPC_FUNC_IMPL(__imp__sub_8231F958) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8231fa20
	if (ctx.cr6.lt) goto loc_8231FA20;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d46b0
	ctx.lr = 0x8231F998;
	sub_822D46B0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8231fa20
	if (!ctx.cr6.eq) goto loc_8231FA20;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822ef020
	ctx.lr = 0x8231F9BC;
	sub_822EF020(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8231fa08
	if (!ctx.cr6.lt) goto loc_8231FA08;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4dc0
	ctx.lr = 0x8231F9DC;
	sub_822D4DC0(ctx, base);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4dc0
	ctx.lr = 0x8231F9F4;
	sub_822D4DC0(ctx, base);
	// fsubs f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f13,f0,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// b 0x8231fa74
	goto loc_8231FA74;
loc_8231FA08:
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4dc0
	ctx.lr = 0x8231FA18;
	sub_822D4DC0(ctx, base);
	// stfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// b 0x8231fa74
	goto loc_8231FA74;
loc_8231FA20:
	// lbz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8231fa50
	if (!ctx.cr6.eq) goto loc_8231FA50;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lfs f11,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r5,r6,16280
	ctx.r5.u64 = ctx.r6.u64 | 16280;
	// lfsx f0,r11,r5
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// b 0x8231fa74
	goto loc_8231FA74;
loc_8231FA50:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// bne cr6,0x8231fa6c
	if (!ctx.cr6.eq) goto loc_8231FA6C;
	// bl 0x822d9f60
	ctx.lr = 0x8231FA64;
	sub_822D9F60(ctx, base);
	// stfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// b 0x8231fa74
	goto loc_8231FA74;
loc_8231FA6C:
	// lfs f9,11872(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11872);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,48(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_8231FA74:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8231fab0
	if (ctx.cr6.lt) goto loc_8231FAB0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d46b0
	ctx.lr = 0x8231FA90;
	sub_822D46B0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8231fab0
	if (!ctx.cr6.eq) goto loc_8231FAB0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f8,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x8231fae8
	if (ctx.cr6.lt) goto loc_8231FAE8;
	// b 0x8231fadc
	goto loc_8231FADC;
loc_8231FAB0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4650
	ctx.lr = 0x8231FAC0;
	sub_822D4650(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231fae8
	if (ctx.cr6.eq) goto loc_8231FAE8;
	// lfs f7,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// bgt cr6,0x8231fae8
	if (ctx.cr6.gt) goto loc_8231FAE8;
loc_8231FADC:
	// bso cr6,0x8231fae8
	if (ctx.cr6.so) goto loc_8231FAE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231c578
	ctx.lr = 0x8231FAE8;
	sub_8231C578(ctx, base);
loc_8231FAE8:
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

__attribute__((alias("__imp__sub_8231FB04"))) PPC_WEAK_FUNC(sub_8231FB04);
PPC_FUNC_IMPL(__imp__sub_8231FB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8231FB08"))) PPC_WEAK_FUNC(sub_8231FB08);
PPC_FUNC_IMPL(__imp__sub_8231FB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac8
	ctx.lr = 0x8231FB10;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x8259bb94
	ctx.lr = 0x8231FB18;
	__savefpr_23(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4112(r1)
	ea = -4112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// clrlwi r19,r10,24
	ctx.r19.u64 = ctx.r10.u32 & 0xFF;
	// fmr f27,f3
	ctx.f27.f64 = ctx.f3.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// lfs f24,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f24.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,80(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// li r18,3
	ctx.r18.s64 = 3;
	// li r20,-1
	ctx.r20.s64 = -1;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// lfs f25,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f25.f64 = double(temp.f32);
	// lwz r29,8(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// beq cr6,0x8231fba0
	if (ctx.cr6.eq) goto loc_8231FBA0;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8231FB78:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8231fb78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231FB78;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,176(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f26,19900(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19900);
	ctx.f26.f64 = double(temp.f32);
	// fadds f30,f0,f26
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// b 0x8231fbb8
	goto loc_8231FBB8;
loc_8231FBA0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8231cf20
	ctx.lr = 0x8231FBAC;
	sub_8231CF20(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f25.f64;
	// lfs f26,-14576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14576);
	ctx.f26.f64 = double(temp.f32);
loc_8231FBB8:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8231FBC8:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8231fbc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231FBC8;
	// lfs f0,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f11,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f7,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f5,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f0,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,2736
	ctx.r11.s64 = ctx.r11.s64 + 2736;
	// lfs f3,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f23,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f0,f23,f0
	ctx.f0.f64 = double(float(ctx.f23.f64 * ctx.f0.f64));
	// addi r28,r30,32
	ctx.r28.s64 = ctx.r30.s64 + 32;
	// stfs f1,196(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// li r21,1
	ctx.r21.s64 = 1;
	// stfs f5,168(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f9,f4,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f3,192(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// addi r25,r1,320
	ctx.r25.s64 = ctx.r1.s64 + 320;
	// stfs f1,16(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 16, temp.u32);
	// fadds f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// fadds f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fneg f6,f12
	ctx.f6.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fneg f4,f11
	ctx.f4.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f4,132(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f0,20(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 20, temp.u32);
	// addi r10,r28,32
	ctx.r10.s64 = ctx.r28.s64 + 32;
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// ld r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// ld r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// std r8,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r8.u64);
	// ld r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// std r7,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r7.u64);
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r6,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r6.u32);
	// lwz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r5,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r5.u32);
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r4,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r4.u32);
	// lbz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f31,18460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18460);
	ctx.f31.f64 = double(temp.f32);
	// stb r3,76(r28)
	PPC_STORE_U8(ctx.r28.u32 + 76, ctx.r3.u8);
loc_8231FD0C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfs f13,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lfs f12,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f11,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,11892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11892);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,64(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f5,f25
	ctx.f5.f64 = ctx.f25.f64;
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lfs f6,116(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82307858
	ctx.lr = 0x8231FD78;
	sub_82307858(ctx, base);
	// lwz r10,516(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 516);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lbz r7,626(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 626);
	// addi r27,r25,112
	ctx.r27.s64 = ctx.r25.s64 + 112;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lfs f10,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82303500
	ctx.lr = 0x8231FDB8;
	sub_82303500(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r11,r11,7392
	ctx.r11.s64 = ctx.r11.s64 + 7392;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8231FDD4:
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// bdnz 0x8231fdd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231FDD4;
	// stfs f25,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f25,28(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f25,32(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r11,7392
	ctx.r3.s64 = ctx.r11.s64 + 7392;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8231FE10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r3,r23,24
	ctx.r3.u64 = ctx.r23.u32 & 0xFF;
	// lwz r9,516(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 516);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// lbz r4,626(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 626);
	// cntlzw r8,r3
	ctx.r8.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// lwz r6,11896(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11896);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lbz r11,7904(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7904);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r31,r1,288
	ctx.r31.s64 = ctx.r1.s64 + 288;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// ld r27,0(r9)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// extsb r5,r4
	ctx.r5.s64 = ctx.r4.s8;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// and r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ctx.r8.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// std r27,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r27.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// stbx r11,r26,r31
	PPC_STORE_U8(ctx.r26.u32 + ctx.r31.u32, ctx.r11.u8);
	// bl 0x823035d0
	ctx.lr = 0x8231FE74;
	sub_823035D0(ctx, base);
	// lbzx r10,r26,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r31.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// and r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 & ctx.r9.u64;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stbx r11,r26,r31
	PPC_STORE_U8(ctx.r26.u32 + ctx.r31.u32, ctx.r11.u8);
	// beq cr6,0x8231fe98
	if (ctx.cr6.eq) goto loc_8231FE98;
	// li r22,0
	ctx.r22.s64 = 0;
	// b 0x8231fe9c
	goto loc_8231FE9C;
loc_8231FE98:
	// li r21,0
	ctx.r21.s64 = 0;
loc_8231FE9C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// fadds f30,f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f26.f64));
	// addi r25,r25,224
	ctx.r25.s64 = ctx.r25.s64 + 224;
	// cmpwi cr6,r26,16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 16, ctx.xer);
	// blt cr6,0x8231fd0c
	if (ctx.cr6.lt) goto loc_8231FD0C;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f31,f24
	ctx.f31.f64 = ctx.f24.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f28,f24
	ctx.f28.f64 = ctx.f24.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r27,-1
	ctx.r27.s64 = -1;
	// lfs f29,18168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18168);
	ctx.f29.f64 = double(temp.f32);
	// li r25,-1
	ctx.r25.s64 = -1;
	// lfs f26,-27244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27244);
	ctx.f26.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f27,-1668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1668);
	ctx.f27.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f30,3060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3060);
	ctx.f30.f64 = double(temp.f32);
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi r24,r22,24
	ctx.r24.u64 = ctx.r22.u32 & 0xFF;
loc_8231FEF0:
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// lbzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8231ffa4
	if (ctx.cr6.eq) goto loc_8231FFA4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8231ffac
	if (!ctx.cr6.eq) goto loc_8231FFAC;
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// mulli r29,r31,224
	ctx.r29.s64 = ctx.r31.s64 * 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82302040
	ctx.lr = 0x8231FF1C;
	sub_82302040(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lbz r11,5429(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5429);
	// stfsx f1,r4,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231ff74
	if (ctx.cr6.eq) goto loc_8231FF74;
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// lfsx f8,r29,r10
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f30,f8
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f8.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x8231ff60
	if (ctx.cr6.gt) goto loc_8231FF60;
	// bso cr6,0x8231ff60
	if (ctx.cr6.so) goto loc_8231FF60;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// blt cr6,0x8231ff60
	if (ctx.cr6.lt) goto loc_8231FF60;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x8231ff64
	if (!ctx.cr6.so) goto loc_8231FF64;
loc_8231FF60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231FF64:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8231ff74
	if (ctx.cr6.eq) goto loc_8231FF74;
	// fmuls f1,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f26.f64));
loc_8231FF74:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8231ff84
	if (!ctx.cr6.gt) goto loc_8231FF84;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_8231FF84:
	// clrlwi r7,r28,24
	ctx.r7.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82320044
	if (!ctx.cr6.eq) goto loc_82320044;
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// ble cr6,0x82320044
	if (!ctx.cr6.gt) goto loc_82320044;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// b 0x82320044
	goto loc_82320044;
loc_8231FFA4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8232002c
	if (ctx.cr6.eq) goto loc_8232002C;
loc_8231FFAC:
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// mulli r29,r31,224
	ctx.r29.s64 = ctx.r31.s64 * 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82302040
	ctx.lr = 0x8231FFC0;
	sub_82302040(ctx, base);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lbz r3,5429(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 5429);
	// stfsx f1,r5,r4
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82320018
	if (ctx.cr6.eq) goto loc_82320018;
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// lfsx f7,r29,r11
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f0,f30,f7
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f7.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x82320004
	if (ctx.cr6.gt) goto loc_82320004;
	// bso cr6,0x82320004
	if (ctx.cr6.so) goto loc_82320004;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// blt cr6,0x82320004
	if (ctx.cr6.lt) goto loc_82320004;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x82320008
	if (!ctx.cr6.so) goto loc_82320008;
loc_82320004:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82320008:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82320018
	if (ctx.cr6.eq) goto loc_82320018;
	// fmuls f1,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f26.f64));
loc_82320018:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82320044
	if (!ctx.cr6.gt) goto loc_82320044;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x82320044
	goto loc_82320044;
loc_8232002C:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82320038
	if (ctx.cr6.eq) goto loc_82320038;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82320038:
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// stfsx f25,r8,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
loc_82320044:
	// cmpwi cr6,r26,8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 8, ctx.xer);
	// bne cr6,0x8232005c
	if (!ctx.cr6.eq) goto loc_8232005C;
	// li r31,16
	ctx.r31.s64 = 16;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// b 0x8232006c
	goto loc_8232006C;
loc_8232005C:
	// blt cr6,0x82320068
	if (ctx.cr6.lt) goto loc_82320068;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// b 0x8232006c
	goto loc_8232006C;
loc_82320068:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8232006C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 16, ctx.xer);
	// blt cr6,0x8231fef0
	if (ctx.cr6.lt) goto loc_8231FEF0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82320088
	if (ctx.cr6.lt) goto loc_82320088;
	// cmpwi cr6,r27,16
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16, ctx.xer);
	// blt cr6,0x8232008c
	if (ctx.cr6.lt) goto loc_8232008C;
loc_82320088:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8232008C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x823200a4
	if (ctx.cr6.eq) goto loc_823200A4;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// fmr f24,f31
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f31.f64;
	// li r18,0
	ctx.r18.s64 = 0;
	// b 0x82320100
	goto loc_82320100;
loc_823200A4:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x823200f0
	if (ctx.cr6.eq) goto loc_823200F0;
	// cmplwi cr6,r25,15
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 15, ctx.xer);
	// ble cr6,0x823200f4
	if (!ctx.cr6.gt) goto loc_823200F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823200B8:
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lbzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823200d8
	if (!ctx.cr6.eq) goto loc_823200D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x823200b8
	if (ctx.cr6.lt) goto loc_823200B8;
	// b 0x82320100
	goto loc_82320100;
loc_823200D8:
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// lfsx f24,r4,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	ctx.f24.f64 = double(temp.f32);
	// b 0x82320100
	goto loc_82320100;
loc_823200F0:
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
loc_823200F4:
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
	// fmr f24,f28
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f28.f64;
	// li r18,1
	ctx.r18.s64 = 1;
loc_82320100:
	// mulli r11,r20,224
	ctx.r11.s64 = ctx.r20.s64 * 224;
	// addi r8,r1,320
	ctx.r8.s64 = ctx.r1.s64 + 320;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// li r9,28
	ctx.r9.s64 = 28;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82320118:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82320118
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82320118;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// beq cr6,0x8232013c
	if (ctx.cr6.eq) goto loc_8232013C;
	// stfs f24,0(r16)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r16.u32 + 0, temp.u32);
loc_8232013C:
	// addi r1,r1,4112
	ctx.r1.s64 = ctx.r1.s64 + 4112;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x8259bbe0
	ctx.lr = 0x82320148;
	__restfpr_23(ctx, base);
	// b 0x8259bb18
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232014C"))) PPC_WEAK_FUNC(sub_8232014C);
PPC_FUNC_IMPL(__imp__sub_8232014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320150"))) PPC_WEAK_FUNC(sub_82320150);
PPC_FUNC_IMPL(__imp__sub_82320150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82320158;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8259bb94
	ctx.lr = 0x82320160;
	__savefpr_23(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r10,33
	ctx.r10.s64 = 2162688;
	// ori r9,r10,4416
	ctx.r9.u64 = ctx.r10.u64 | 4416;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r28,11892(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11892);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823201a8
	if (!ctx.cr6.lt) goto loc_823201A8;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addis r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 655360;
	// ori r7,r8,37344
	ctx.r7.u64 = ctx.r8.u64 | 37344;
	// addi r11,r11,-7344
	ctx.r11.s64 = ctx.r11.s64 + -7344;
	// mullw r10,r28,r7
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823201ac
	goto loc_823201AC;
loc_823201A8:
	// li r26,0
	ctx.r26.s64 = 0;
loc_823201AC:
	// lwz r10,6912(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6912);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// lwz r9,516(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 516);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r10,r10,15124
	ctx.r10.s64 = ctx.r10.s64 + 15124;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lbz r6,41(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 41);
	// rotlwi r8,r6,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// ldx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// std r7,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// bl 0x820aad38
	ctx.lr = 0x823201F0;
	sub_820AAD38(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,188(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r11,17304
	ctx.r27.s64 = ctx.r11.s64 + 17304;
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,980(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 980);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82320228
	if (!ctx.cr6.gt) goto loc_82320228;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x820c37c8
	ctx.lr = 0x82320228;
	sub_820C37C8(ctx, base);
loc_82320228:
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
loc_82320234:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x820a8720
	ctx.lr = 0x82320248;
	sub_820A8720(ctx, base);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lhz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 140);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r4,3(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// clrlwi r11,r4,29
	ctx.r11.u64 = ctx.r4.u32 & 0x7;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82320284
	if (ctx.cr6.eq) goto loc_82320284;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82320288
	if (!ctx.cr6.eq) goto loc_82320288;
loc_82320284:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82320288:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823202a4
	if (ctx.cr6.eq) goto loc_823202A4;
	// lbz r10,142(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 142);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82320234
	if (!ctx.cr6.eq) goto loc_82320234;
loc_823202A4:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820a8720
	ctx.lr = 0x823202B8;
	sub_820A8720(ctx, base);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lhz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r3,3(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// clrlwi r11,r3,29
	ctx.r11.u64 = ctx.r3.u32 & 0x7;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823202f4
	if (ctx.cr6.eq) goto loc_823202F4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823202f8
	if (!ctx.cr6.eq) goto loc_823202F8;
loc_823202F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823202F8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82320314
	if (ctx.cr6.eq) goto loc_82320314;
	// lbz r9,134(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 134);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823202a4
	if (!ctx.cr6.eq) goto loc_823202A4;
loc_82320314:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x820a8688
	ctx.lr = 0x82320320;
	sub_820A8688(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820a86d8
	ctx.lr = 0x8232032C;
	sub_820A86D8(ctx, base);
	// lwz r10,516(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 516);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f11,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lfs f10,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lfs f8,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f7,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f6,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f6.f64 = double(temp.f32);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// lfs f31,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f28,f11,f31
	ctx.f28.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// lfs f29,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f27,f10,f30
	ctx.f27.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// fsubs f26,f9,f29
	ctx.f26.f64 = double(float(ctx.f9.f64 - ctx.f29.f64));
	// fsubs f25,f8,f31
	ctx.f25.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// fsubs f24,f7,f30
	ctx.f24.f64 = double(float(ctx.f7.f64 - ctx.f30.f64));
	// fsubs f23,f6,f29
	ctx.f23.f64 = double(float(ctx.f6.f64 - ctx.f29.f64));
	// bl 0x82303500
	ctx.lr = 0x82320394;
	sub_82303500(ctx, base);
	// fmuls f5,f27,f27
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmuls f4,f24,f24
	ctx.f4.f64 = double(float(ctx.f24.f64 * ctx.f24.f64));
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lis r29,-32255
	ctx.r29.s64 = -2113863680;
	// fmadds f3,f26,f26,f5
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f5.f64));
	// fmadds f2,f23,f23,f4
	ctx.f2.f64 = double(float(ctx.f23.f64 * ctx.f23.f64 + ctx.f4.f64));
	// fmadds f1,f28,f28,f3
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f3.f64));
	// fmadds f0,f25,f25,f2
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f25.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823203e8
	if (!ctx.cr6.gt) goto loc_823203E8;
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823203e8
	if (!ctx.cr6.eq) goto loc_823203E8;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// b 0x82320490
	goto loc_82320490;
loc_823203E8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82303500
	ctx.lr = 0x823203F8;
	sub_82303500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82320420
	if (!ctx.cr6.eq) goto loc_82320420;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// b 0x82320490
	goto loc_82320490;
loc_82320420:
	// clrlwi r7,r31,24
	ctx.r7.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82320448
	if (!ctx.cr6.eq) goto loc_82320448;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// b 0x82320490
	goto loc_82320490;
loc_82320448:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82301ea8
	ctx.lr = 0x82320450;
	sub_82301EA8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f2,-1632(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -1632);
	ctx.f2.f64 = double(temp.f32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lfs f1,2868(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f3,6052(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6052);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x8231fb08
	ctx.lr = 0x82320478;
	sub_8231FB08(ctx, base);
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
loc_82320490:
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lwz r6,4(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f10,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,-6624
	ctx.r11.s64 = ctx.r11.s64 + -6624;
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-27244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// ld r11,11856(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 11856);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f12,f8,f11
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bne cr6,0x823204f8
	if (!ctx.cr6.eq) goto loc_823204F8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823204F8:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823206cc
	if (ctx.cr6.eq) goto loc_823206CC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fsubs f6,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// fsubs f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// addi r6,r6,2784
	ctx.r6.s64 = ctx.r6.s64 + 2784;
	// fsubs f5,f12,f29
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lfs f8,2864(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2864);
	ctx.f8.f64 = double(temp.f32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// lfs f9,64(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// ld r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// std r5,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// std r4,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lfs f4,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f4.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f7,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f13,f4,f30
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f30.f64));
	// fsubs f0,f7,f31
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// lfs f3,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f13,f3,f29
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f29.f64));
	// stfs f13,232(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fadds f2,f11,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f7,f2,f13
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// fcmpu cr6,f7,f9
	ctx.cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// blt cr6,0x823205bc
	if (ctx.cr6.lt) goto loc_823205BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823205BC:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// lfs f7,2868(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2868);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823205f8
	if (!ctx.cr6.eq) goto loc_823205F8;
	// fadds f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f2,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// fadds f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// fsqrts f12,f3
	ctx.f12.f64 = double(float(sqrt(ctx.f3.f64)));
	// fdivs f13,f7,f12
	ctx.f13.f64 = double(float(ctx.f7.f64 / ctx.f12.f64));
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmuls f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f2,f13
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82320604
	goto loc_82320604;
loc_823205F8:
	// lfs f11,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
loc_82320604:
	// fmuls f0,f6,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f13,f10,f10
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f12,f5,f5
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fadds f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fcmpu cr6,f5,f9
	ctx.cr6.compare(ctx.f5.f64, ctx.f9.f64);
	// blt cr6,0x82320628
	if (ctx.cr6.lt) goto loc_82320628;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82320628:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82320660
	if (!ctx.cr6.eq) goto loc_82320660;
	// fadds f2,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// fsqrts f13,f1
	ctx.f13.f64 = double(float(sqrt(ctx.f1.f64)));
	// fdivs f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 / ctx.f13.f64));
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f10,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// b 0x8232066c
	goto loc_8232066C;
loc_82320660:
	// lfs f0,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
loc_8232066C:
	// fmuls f9,f13,f4
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f7,f0,f11,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f9.f64));
	// lfs f0,3260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3260);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f12,f3,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x823206b4
	if (!ctx.cr6.gt) goto loc_823206B4;
	// fsubs f5,f8,f1
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-31608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31608);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f5
	ctx.f0.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823206b4
	if (!ctx.cr6.lt) goto loc_823206B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8259bbe0
	ctx.lr = 0x823206B0;
	__restfpr_23(ctx, base);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_823206B4:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,28296
	ctx.r3.s64 = ctx.r11.s64 + 28296;
	// bl 0x822bde00
	ctx.lr = 0x823206CC;
	sub_822BDE00(ctx, base);
loc_823206CC:
	// lwz r10,516(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 516);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r10,48
	ctx.r5.s64 = ctx.r10.s64 + 48;
	// lfs f6,-1632(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -1632);
	ctx.f6.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f5,812(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 812);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r9,4768
	ctx.r3.s64 = ctx.r9.s64 + 4768;
	// lfs f4,980(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 980);
	ctx.f4.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f1,2868(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,-1608(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1608);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f8
	ctx.f2.f64 = ctx.f8.f64;
	// lfs f7,11268(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11268);
	ctx.f7.f64 = double(temp.f32);
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// bl 0x822e28d8
	ctx.lr = 0x82320724;
	sub_822E28D8(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x822efbc0
	ctx.lr = 0x82320730;
	sub_822EFBC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8259bbe0
	ctx.lr = 0x82320740;
	__restfpr_23(ctx, base);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82320744"))) PPC_WEAK_FUNC(sub_82320744);
PPC_FUNC_IMPL(__imp__sub_82320744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320748"))) PPC_WEAK_FUNC(sub_82320748);
PPC_FUNC_IMPL(__imp__sub_82320748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82320750;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// lbz r11,49(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82320778
	if (!ctx.cr6.eq) goto loc_82320778;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363ce0
	ctx.lr = 0x82320778;
	sub_82363CE0(ctx, base);
loc_82320778:
	// addi r9,r31,20
	ctx.r9.s64 = ctx.r31.s64 + 20;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r29,r10,26080
	ctx.r29.s64 = ctx.r10.s64 + 26080;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82320880
	if (ctx.cr6.lt) goto loc_82320880;
	// beq cr6,0x82320854
	if (ctx.cr6.eq) goto loc_82320854;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82320938
	if (!ctx.cr6.lt) goto loc_82320938;
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r8,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r8.u8);
	// lfs f0,128(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x823207c0
	if (ctx.cr6.eq) goto loc_823207C0;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// b 0x82320938
	goto loc_82320938;
loc_823207C0:
	// lfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,18776(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18776);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82320938
	if (!ctx.cr6.gt) goto loc_82320938;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addis r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 196608;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r7,r11,-10488
	ctx.r7.s64 = ctx.r11.s64 + -10488;
	// lwz r5,532(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 532);
	// mulli r4,r5,11920
	ctx.r4.s64 = ctx.r5.s64 * 11920;
	// lwzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82320800
	if (!ctx.cr6.eq) goto loc_82320800;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_82320800:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82320938
	if (!ctx.cr6.eq) goto loc_82320938;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// ori r8,r9,16294
	ctx.r8.u64 = ctx.r9.u64 | 16294;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r11,r29,r8
	PPC_STORE_U8(ctx.r29.u32 + ctx.r8.u32, ctx.r11.u8);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82320830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// stw r3,540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 540, ctx.r3.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82320850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82320938
	goto loc_82320938;
loc_82320854:
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r8,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r8.u8);
	// bne cr6,0x82320938
	if (!ctx.cr6.eq) goto loc_82320938;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x822eb738
	ctx.lr = 0x82320874;
	sub_822EB738(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// b 0x82320930
	goto loc_82320930;
loc_82320880:
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stb r8,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r8.u8);
	// beq cr6,0x823208e8
	if (ctx.cr6.eq) goto loc_823208E8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addis r10,r30,33
	ctx.r10.s64 = ctx.r30.s64 + 2162688;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,7936
	ctx.r3.s64 = ctx.r10.s64 + 7936;
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r4,532(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 532);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8231cd78
	ctx.lr = 0x823208C8;
	sub_8231CD78(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addis r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 196608;
	// addi r9,r11,-10488
	ctx.r9.s64 = ctx.r11.s64 + -10488;
	// lwz r10,532(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// mulli r8,r10,11920
	ctx.r8.s64 = ctx.r10.s64 * 11920;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// b 0x82320938
	goto loc_82320938;
loc_823208E8:
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addis r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 196608;
	// addi r10,r11,-10560
	ctx.r10.s64 = ctx.r11.s64 + -10560;
	// lwz r5,532(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 532);
	// mulli r11,r5,11920
	ctx.r11.s64 = ctx.r5.s64 * 11920;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r3,r10,-2
	ctx.r3.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8232091c
	if (!ctx.cr6.lt) goto loc_8232091C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8232091C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82320938
	if (ctx.cr6.eq) goto loc_82320938;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
loc_82320930:
	// stb r28,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r28.u8);
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
loc_82320938:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,5416(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5416);
	// lwz r11,5424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5424);
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// addze r11,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82320964
	if (ctx.cr6.gt) goto loc_82320964;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82320970
	goto loc_82320970;
loc_82320964:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82320970
	if (ctx.cr6.lt) goto loc_82320970;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82320970:
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// lwz r3,532(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// addis r10,r29,3
	ctx.r10.s64 = ctx.r29.s64 + 196608;
	// mulli r11,r3,11920
	ctx.r11.s64 = ctx.r3.s64 * 11920;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f8,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// addi r10,r10,-10492
	ctx.r10.s64 = ctx.r10.s64 + -10492;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// bl 0x822ec2b8
	ctx.lr = 0x8232099C;
	sub_822EC2B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f5,f0,f1
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fcmpu cr6,f6,f5
	ctx.cr6.compare(ctx.f6.f64, ctx.f5.f64);
	// beq cr6,0x823209d0
	if (ctx.cr6.eq) goto loc_823209D0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fdivs f4,f0,f6
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,128(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f4,24(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f13,-1608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1608);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
loc_823209D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823209D8"))) PPC_WEAK_FUNC(sub_823209D8);
PPC_FUNC_IMPL(__imp__sub_823209D8) {
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
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82320a28
	if (!ctx.cr6.eq) goto loc_82320A28;
	// bl 0x8231c8f8
	ctx.lr = 0x82320A18;
	sub_8231C8F8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stb r10,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r10.u8);
loc_82320A28:
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

__attribute__((alias("__imp__sub_82320A44"))) PPC_WEAK_FUNC(sub_82320A44);
PPC_FUNC_IMPL(__imp__sub_82320A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320A48"))) PPC_WEAK_FUNC(sub_82320A48);
PPC_FUNC_IMPL(__imp__sub_82320A48) {
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
	// lbz r11,177(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320a90
	if (ctx.cr6.eq) goto loc_82320A90;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320a90
	if (ctx.cr6.eq) goto loc_82320A90;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82320a90
	if (!ctx.cr6.eq) goto loc_82320A90;
	// lbz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82320a94
	if (ctx.cr6.eq) goto loc_82320A94;
loc_82320A90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82320A94:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82320abc
	if (ctx.cr6.eq) goto loc_82320ABC;
	// bl 0x82320b30
	ctx.lr = 0x82320AA8;
	sub_82320B30(ctx, base);
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
loc_82320ABC:
	// bl 0x8231c8f8
	ctx.lr = 0x82320AC0;
	sub_8231C8F8(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// lfs f0,-528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -528);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f13,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x82320b18
	if (!ctx.cr6.gt) goto loc_82320B18;
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// bne cr6,0x82320b18
	if (!ctx.cr6.eq) goto loc_82320B18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82315938
	ctx.lr = 0x82320B18;
	sub_82315938(ctx, base);
loc_82320B18:
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

__attribute__((alias("__imp__sub_82320B2C"))) PPC_WEAK_FUNC(sub_82320B2C);
PPC_FUNC_IMPL(__imp__sub_82320B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82320B30"))) PPC_WEAK_FUNC(sub_82320B30);
PPC_FUNC_IMPL(__imp__sub_82320B30) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320b64
	if (ctx.cr6.eq) goto loc_82320B64;
	// lbz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320b70
	if (ctx.cr6.eq) goto loc_82320B70;
loc_82320B64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r30.u8);
	// bl 0x82320a48
	ctx.lr = 0x82320B70;
	sub_82320A48(ctx, base);
loc_82320B70:
	// lwz r7,152(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lwz r8,168(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r3,r10,7728
	ctx.r3.s64 = ctx.r10.s64 + 7728;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f2,18168(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 18168);
	ctx.f2.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r4,532(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 532);
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f1,2868(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-6624
	ctx.r11.s64 = ctx.r11.s64 + -6624;
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82314900
	ctx.lr = 0x82320C00;
	sub_82314900(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82320c14
	if (!ctx.cr6.eq) goto loc_82320C14;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82320c70
	goto loc_82320C70;
loc_82320C14:
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// bl 0x82302cc0
	ctx.lr = 0x82320C3C;
	sub_82302CC0(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r9,1
	ctx.r9.s64 = 1;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r11,27808
	ctx.r3.s64 = ctx.r11.s64 + 27808;
	// stb r9,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r9.u8);
	// bl 0x822c9a28
	ctx.lr = 0x82320C6C;
	sub_822C9A28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82320C70:
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

__attribute__((alias("__imp__sub_82320C88"))) PPC_WEAK_FUNC(sub_82320C88);
PPC_FUNC_IMPL(__imp__sub_82320C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,864
	ctx.r11.s64 = ctx.r11.s64 + 864;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82320cb8
	if (!ctx.cr6.lt) goto loc_82320CB8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82320CB8:
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82320cdc
	if (ctx.cr6.eq) goto loc_82320CDC;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82320cdc
	if (ctx.cr6.lt) goto loc_82320CDC;
	// li r10,1
	ctx.r10.s64 = 1;
	// bns cr6,0x82320ce0
	if (!ctx.cr6.so) goto loc_82320CE0;
loc_82320CDC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82320CE0:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82320cf0
	if (ctx.cr6.eq) goto loc_82320CF0;
	// b 0x82303028
	sub_82303028(ctx, base);
	return;
loc_82320CF0:
	// lfs f12,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16280
	ctx.r9.u64 = ctx.r10.u64 | 16280;
	// lfsx f0,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x8231f958
	sub_8231F958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82320D14"))) PPC_WEAK_FUNC(sub_82320D14);
PPC_FUNC_IMPL(__imp__sub_82320D14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82320D18"))) PPC_WEAK_FUNC(sub_82320D18);
PPC_FUNC_IMPL(__imp__sub_82320D18) {
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
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82321104
	if (ctx.cr6.gt) goto loc_82321104;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// addi r12,r12,3416
	ctx.r12.s64 = ctx.r12.s64 + 3416;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_823210A4;
	case 1:
		goto loc_82320D68;
	case 2:
		goto loc_82320D98;
	case 3:
		goto loc_82320DEC;
	default:
		__builtin_unreachable();
	}
	// lwz r17,4260(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4260);
	// lwz r17,3432(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3432);
	// lwz r17,3480(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3480);
	// lwz r17,3564(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3564);
loc_82320D68:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r10,11892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// mulli r10,r10,5440
	ctx.r10.s64 = ctx.r10.s64 * 5440;
	// addis r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 2228224;
	// addi r11,r11,21248
	ctx.r11.s64 = ctx.r11.s64 + 21248;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823144e0
	ctx.lr = 0x82320D8C;
	sub_823144E0(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x82314c50
	ctx.lr = 0x82320D94;
	sub_82314C50(ctx, base);
	// b 0x82321104
	goto loc_82321104;
loc_82320D98:
	// lwz r9,936(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82320dac
	if (!ctx.cr6.eq) goto loc_82320DAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82320DAC:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82320dc0
	if (ctx.cr6.eq) goto loc_82320DC0;
	// addi r3,r31,932
	ctx.r3.s64 = ctx.r31.s64 + 932;
	// bl 0x82320c88
	ctx.lr = 0x82320DC0;
	sub_82320C88(ctx, base);
loc_82320DC0:
	// lbz r6,320(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 320);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82321104
	if (ctx.cr6.eq) goto loc_82321104;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r4,r5,16280
	ctx.r4.u64 = ctx.r5.u64 | 16280;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// lfsx f1,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822ebca8
	ctx.lr = 0x82320DE8;
	sub_822EBCA8(ctx, base);
	// b 0x82321104
	goto loc_82321104;
loc_82320DEC:
	// addi r11,r6,-6
	ctx.r11.s64 = ctx.r6.s64 + -6;
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// bgt cr6,0x82321104
	if (ctx.cr6.gt) goto loc_82321104;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// addi r12,r12,3600
	ctx.r12.s64 = ctx.r12.s64 + 3600;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82320F24;
	case 1:
		goto loc_82321104;
	case 2:
		goto loc_82321104;
	case 3:
		goto loc_82321104;
	case 4:
		goto loc_82321104;
	case 5:
		goto loc_82321104;
	case 6:
		goto loc_82321104;
	case 7:
		goto loc_82321104;
	case 8:
		goto loc_82321104;
	case 9:
		goto loc_82321104;
	case 10:
		goto loc_82320EAC;
	case 11:
		goto loc_82320ED4;
	case 12:
		goto loc_82321104;
	case 13:
		goto loc_82321104;
	case 14:
		goto loc_82320EFC;
	case 15:
		goto loc_82321104;
	case 16:
		goto loc_82321104;
	case 17:
		goto loc_82321104;
	case 18:
		goto loc_82321104;
	case 19:
		goto loc_82321104;
	case 20:
		goto loc_82321104;
	case 21:
		goto loc_82320F78;
	case 22:
		goto loc_82320F58;
	case 23:
		goto loc_82320F98;
	case 24:
		goto loc_82320FB8;
	case 25:
		goto loc_82321104;
	case 26:
		goto loc_82321104;
	case 27:
		goto loc_82320FD8;
	case 28:
		goto loc_82320FF8;
	case 29:
		goto loc_8232101C;
	case 30:
		goto loc_82320F38;
	case 31:
		goto loc_82321104;
	case 32:
		goto loc_82321080;
	case 33:
		goto loc_82321104;
	case 34:
		goto loc_82321104;
	case 35:
		goto loc_82321104;
	case 36:
		goto loc_82321104;
	case 37:
		goto loc_82321104;
	case 38:
		goto loc_8232103C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,3876(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3876);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,3756(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3756);
	// lwz r17,3796(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3796);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,3836(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3836);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,3960(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3960);
	// lwz r17,3928(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3928);
	// lwz r17,3992(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3992);
	// lwz r17,4024(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4024);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4056(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4056);
	// lwz r17,4088(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4088);
	// lwz r17,4124(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4124);
	// lwz r17,3896(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 3896);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4224(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4224);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4356);
	// lwz r17,4156(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4156);
loc_82320EAC:
	// lis r3,-32118
	ctx.r3.s64 = -2104885248;
	// lis r11,-17864
	ctx.r11.s64 = -1170735104;
	// ori r4,r3,14497
	ctx.r4.u64 = ctx.r3.u64 | 14497;
	// ori r10,r11,59100
	ctx.r10.u64 = ctx.r11.u64 | 59100;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82320ED0;
	sub_820A38E8(ctx, base);
	// b 0x82321104
	goto loc_82321104;
loc_82320ED4:
	// lis r9,-22828
	ctx.r9.s64 = -1496055808;
	// lis r8,-17864
	ctx.r8.s64 = -1170735104;
	// ori r4,r9,10879
	ctx.r4.u64 = ctx.r9.u64 | 10879;
	// ori r7,r8,59100
	ctx.r7.u64 = ctx.r8.u64 | 59100;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82320EF8;
	sub_820A38E8(ctx, base);
	// b 0x82321104
	goto loc_82321104;
loc_82320EFC:
	// lis r3,-17864
	ctx.r3.s64 = -1170735104;
	// lis r4,-27127
	ctx.r4.s64 = -1777795072;
	// ori r11,r3,58938
	ctx.r11.u64 = ctx.r3.u64 | 58938;
	// ori r4,r4,40895
	ctx.r4.u64 = ctx.r4.u64 | 40895;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82320F20;
	sub_820A38E8(ctx, base);
	// b 0x82321104
	goto loc_82321104;
loc_82320F24:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,9020
	ctx.r3.s64 = ctx.r31.s64 + 9020;
	// bl 0x822f50b0
	ctx.lr = 0x82320F34;
	sub_822F50B0(ctx, base);
	// b 0x82321104
	goto loc_82321104;
loc_82320F38:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82320F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82321104
	goto loc_82321104;
loc_82320F58:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82320F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82321104
	goto loc_82321104;
loc_82320F78:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82320F94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82321104
	goto loc_82321104;
loc_82320F98:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82320FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82321104
	goto loc_82321104;
loc_82320FB8:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82320FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82321104
	goto loc_82321104;
loc_82320FD8:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82320FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82321104
	goto loc_82321104;
loc_82320FF8:
	// addi r11,r31,304
	ctx.r11.s64 = ctx.r31.s64 + 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,408
	ctx.r3.s64 = ctx.r11.s64 + 408;
	// stw r3,540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 540, ctx.r3.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82321018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82321104
	goto loc_82321104;
loc_8232101C:
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82321038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82321104
	goto loc_82321104;
loc_8232103C:
	// lis r3,-17864
	ctx.r3.s64 = -1170735104;
	// lis r4,-22828
	ctx.r4.s64 = -1496055808;
	// ori r11,r3,59100
	ctx.r11.u64 = ctx.r3.u64 | 59100;
	// ori r4,r4,10879
	ctx.r4.u64 = ctx.r4.u64 | 10879;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82321060;
	sub_820A38E8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8232107C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82321104
	goto loc_82321104;
loc_82321080:
	// addi r11,r31,304
	ctx.r11.s64 = ctx.r31.s64 + 304;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,176
	ctx.r3.s64 = ctx.r11.s64 + 176;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823210A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82321104
	goto loc_82321104;
loc_823210A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822efb38
	ctx.lr = 0x823210AC;
	sub_822EFB38(ctx, base);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x822ebd00
	ctx.lr = 0x823210B4;
	sub_822EBD00(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r6,11892(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// mulli r11,r6,5440
	ctx.r11.s64 = ctx.r6.s64 * 5440;
	// addis r10,r30,34
	ctx.r10.s64 = ctx.r30.s64 + 2228224;
	// addi r10,r10,21248
	ctx.r10.s64 = ctx.r10.s64 + 21248;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82301e08
	ctx.lr = 0x823210D4;
	sub_82301E08(ctx, base);
	// lbz r5,49(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823210ec
	if (!ctx.cr6.eq) goto loc_823210EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363ce0
	ctx.lr = 0x823210EC;
	sub_82363CE0(ctx, base);
loc_823210EC:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r3,r4,16294
	ctx.r3.u64 = ctx.r4.u64 | 16294;
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
loc_82321104:
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

__attribute__((alias("__imp__sub_8232111C"))) PPC_WEAK_FUNC(sub_8232111C);
PPC_FUNC_IMPL(__imp__sub_8232111C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321120"))) PPC_WEAK_FUNC(sub_82321120);
PPC_FUNC_IMPL(__imp__sub_82321120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82321128;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82321404
	if (ctx.cr6.gt) goto loc_82321404;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// addi r12,r12,4440
	ctx.r12.s64 = ctx.r12.s64 + 4440;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82321370;
	case 1:
		goto loc_82321168;
	case 2:
		goto loc_82321268;
	case 3:
		goto loc_82321324;
	default:
		__builtin_unreachable();
	}
	// lwz r17,4976(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4976);
	// lwz r17,4456(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4456);
	// lwz r17,4712(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4712);
	// lwz r17,4900(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4900);
loc_82321168:
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// addi r30,r10,28544
	ctx.r30.s64 = ctx.r10.s64 + 28544;
	// lwz r11,11892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11892);
	// addis r9,r30,33
	ctx.r9.s64 = ctx.r30.s64 + 2162688;
	// addis r10,r30,35
	ctx.r10.s64 = ctx.r30.s64 + 2293760;
	// mulli r11,r11,19200
	ctx.r11.s64 = ctx.r11.s64 * 19200;
	// addi r10,r10,-28496
	ctx.r10.s64 = ctx.r10.s64 + -28496;
	// addi r3,r9,6592
	ctx.r3.s64 = ctx.r9.s64 + 6592;
	// lis r9,33
	ctx.r9.s64 = 2162688;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r8,r9,8348
	ctx.r8.u64 = ctx.r9.u64 | 8348;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// lwzx r11,r30,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lbz r4,1000(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1000);
	// bl 0x820b76e0
	ctx.lr = 0x823211AC;
	sub_820B76E0(ctx, base);
	// addis r11,r30,33
	ctx.r11.s64 = ctx.r30.s64 + 2162688;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,7936
	ctx.r3.s64 = ctx.r11.s64 + 7936;
	// bl 0x822ec0c0
	ctx.lr = 0x823211C0;
	sub_822EC0C0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r7,936(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823211e4
	if (!ctx.cr6.eq) goto loc_823211E4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_823211E4:
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823211f8
	if (ctx.cr6.eq) goto loc_823211F8;
	// addi r3,r11,932
	ctx.r3.s64 = ctx.r11.s64 + 932;
	// bl 0x82303028
	ctx.lr = 0x823211F8;
	sub_82303028(ctx, base);
loc_823211F8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addis r10,r30,35
	ctx.r10.s64 = ctx.r30.s64 + 2293760;
	// addis r9,r30,35
	ctx.r9.s64 = ctx.r30.s64 + 2293760;
	// addi r3,r10,-32688
	ctx.r3.s64 = ctx.r10.s64 + -32688;
	// addi r4,r9,-32688
	ctx.r4.s64 = ctx.r9.s64 + -32688;
	// lwz r10,19168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19168);
	// mulli r9,r10,704
	ctx.r9.s64 = ctx.r10.s64 * 704;
	// lwzx r8,r9,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// stw r8,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r8.u32);
	// lwz r7,19168(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19168);
	// mulli r6,r7,704
	ctx.r6.s64 = ctx.r7.s64 * 704;
	// stwx r28,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r28.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// beq cr6,0x82321254
	if (ctx.cr6.eq) goto loc_82321254;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// bne cr6,0x82321404
	if (!ctx.cr6.eq) goto loc_82321404;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stb r28,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r28.u8);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82321254:
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stb r28,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82321268:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// ori r11,r4,37004
	ctx.r11.u64 = ctx.r4.u64 | 37004;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823212b8
	if (!ctx.cr6.gt) goto loc_823212B8;
	// addis r11,r3,35
	ctx.r11.s64 = ctx.r3.s64 + 2293760;
	// addi r11,r11,-13279
	ctx.r11.s64 = ctx.r11.s64 + -13279;
loc_82321294:
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// stb r29,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r29.u8);
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r8,r9,37004
	ctx.r8.u64 = ctx.r9.u64 | 37004;
	// addi r11,r11,19200
	ctx.r11.s64 = ctx.r11.s64 + 19200;
	// lwzx r9,r3,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82321294
	if (ctx.cr6.lt) goto loc_82321294;
loc_823212B8:
	// lbz r7,49(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823212cc
	if (!ctx.cr6.eq) goto loc_823212CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82363ce0
	ctx.lr = 0x823212CC;
	sub_82363CE0(ctx, base);
loc_823212CC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823212ec
	if (ctx.cr6.eq) goto loc_823212EC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823212f4
	if (!ctx.cr6.eq) goto loc_823212F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231b468
	ctx.lr = 0x823212E8;
	sub_8231B468(ctx, base);
	// b 0x823212f4
	goto loc_823212F4;
loc_823212EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231b3b0
	ctx.lr = 0x823212F4;
	sub_8231B3B0(ctx, base);
loc_823212F4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r6,936(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82321308
	if (ctx.cr6.eq) goto loc_82321308;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82321308:
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82321404
	if (ctx.cr6.eq) goto loc_82321404;
	// addi r3,r11,932
	ctx.r3.s64 = ctx.r11.s64 + 932;
	// bl 0x82320c88
	ctx.lr = 0x8232131C;
	sub_82320C88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82321324:
	// cmpwi cr6,r6,20
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 20, ctx.xer);
	// beq cr6,0x82321344
	if (ctx.cr6.eq) goto loc_82321344;
	// cmpwi cr6,r6,43
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 43, ctx.xer);
	// bne cr6,0x82321404
	if (!ctx.cr6.eq) goto loc_82321404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231b778
	ctx.lr = 0x8232133C;
	sub_8231B778(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82321344:
	// lis r11,-27127
	ctx.r11.s64 = -1777795072;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lis r10,-17864
	ctx.r10.s64 = -1170735104;
	// ori r4,r11,40895
	ctx.r4.u64 = ctx.r11.u64 | 40895;
	// ori r9,r10,58938
	ctx.r9.u64 = ctx.r10.u64 | 58938;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82321368;
	sub_820A38E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82321370:
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r7,r8,16294
	ctx.r7.u64 = ctx.r8.u64 | 16294;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwz r5,628(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// addi r31,r10,-18560
	ctx.r31.s64 = ctx.r10.s64 + -18560;
	// addis r10,r11,35
	ctx.r10.s64 = ctx.r11.s64 + 2293760;
	// addis r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 524288;
	// lwz r4,19168(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 19168);
	// addi r8,r10,-32688
	ctx.r8.s64 = ctx.r10.s64 + -32688;
	// addi r3,r11,27760
	ctx.r3.s64 = ctx.r11.s64 + 27760;
	// mulli r9,r4,704
	ctx.r9.s64 = ctx.r4.s64 * 704;
	// stwx r5,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8212bb98
	ctx.lr = 0x823213C4;
	sub_8212BB98(ctx, base);
	// addis r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-7996
	ctx.r3.s64 = ctx.r11.s64 + -7996;
	// bl 0x823484f8
	ctx.lr = 0x823213D4;
	sub_823484F8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addis r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 524288;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-7996
	ctx.r3.s64 = ctx.r11.s64 + -7996;
	// stb r29,176(r7)
	PPC_STORE_U8(ctx.r7.u32 + 176, ctx.r29.u8);
	// bl 0x823484f8
	ctx.lr = 0x823213F0;
	sub_823484F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addis r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 524288;
	// addi r3,r11,27808
	ctx.r3.s64 = ctx.r11.s64 + 27808;
	// stb r29,176(r6)
	PPC_STORE_U8(ctx.r6.u32 + 176, ctx.r29.u8);
	// bl 0x822aa7e0
	ctx.lr = 0x82321404;
	sub_822AA7E0(ctx, base);
loc_82321404:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232140C"))) PPC_WEAK_FUNC(sub_8232140C);
PPC_FUNC_IMPL(__imp__sub_8232140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321410"))) PPC_WEAK_FUNC(sub_82321410);
PPC_FUNC_IMPL(__imp__sub_82321410) {
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
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x823214d0
	if (ctx.cr6.eq) goto loc_823214D0;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x823214a8
	if (ctx.cr6.eq) goto loc_823214A8;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x823214d0
	if (!ctx.cr6.eq) goto loc_823214D0;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r11,7748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7748);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8232144c
	if (ctx.cr6.eq) goto loc_8232144C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823214d0
	if (!ctx.cr6.eq) goto loc_823214D0;
loc_8232144C:
	// lwz r11,936(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 936);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82321460
	if (!ctx.cr6.eq) goto loc_82321460;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82321460:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82321490
	if (!ctx.cr6.eq) goto loc_82321490;
	// ld r8,11856(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 11856);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r7,r8,0,8,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x82321484
	if (!ctx.cr6.eq) goto loc_82321484;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82321484:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823214d0
	if (ctx.cr6.eq) goto loc_823214D0;
loc_82321490:
	// addi r3,r5,932
	ctx.r3.s64 = ctx.r5.s64 + 932;
	// bl 0x82320c88
	ctx.lr = 0x82321498;
	sub_82320C88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823214A8:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ld r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 2162688;
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// addi r3,r11,7936
	ctx.r3.s64 = ctx.r11.s64 + 7936;
	// bl 0x822ec040
	ctx.lr = 0x823214C8;
	sub_822EC040(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stw r3,7728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7728, ctx.r3.u32);
loc_823214D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823214E0"))) PPC_WEAK_FUNC(sub_823214E0);
PPC_FUNC_IMPL(__imp__sub_823214E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x823214E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82321f0c
	if (ctx.cr6.gt) goto loc_82321F0C;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// addi r12,r12,5404
	ctx.r12.s64 = ctx.r12.s64 + 5404;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82321EF4;
	case 1:
		goto loc_8232152C;
	case 2:
		goto loc_82321574;
	case 3:
		goto loc_82321790;
	default:
		__builtin_unreachable();
	}
	// lwz r17,7924(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7924);
	// lwz r17,5420(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5420);
	// lwz r17,5492(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 5492);
	// lwz r17,6032(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6032);
loc_8232152C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-7323
	ctx.r10.s64 = -479920128;
	// lis r8,-17864
	ctx.r8.s64 = -1170735104;
	// ori r9,r10,58274
	ctx.r9.u64 = ctx.r10.u64 | 58274;
	// ori r7,r8,59327
	ctx.r7.u64 = ctx.r8.u64 | 59327;
	// stb r11,32(r28)
	PPC_STORE_U8(ctx.r28.u32 + 32, ctx.r11.u8);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r6,r9
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x82321560
	if (ctx.cr6.eq) goto loc_82321560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823005a8
	ctx.lr = 0x82321560;
	sub_823005A8(ctx, base);
loc_82321560:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 36, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321574:
	// addi r3,r31,932
	ctx.r3.s64 = ctx.r31.s64 + 932;
	// bl 0x82320c88
	ctx.lr = 0x8232157C;
	sub_82320C88(ctx, base);
	// ld r5,11856(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r4,r5,0,20,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x800;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne cr6,0x8232159c
	if (!ctx.cr6.eq) goto loc_8232159C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8232159C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823215c0
	if (ctx.cr6.eq) goto loc_823215C0;
	// lbz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823215c0
	if (!ctx.cr6.eq) goto loc_823215C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823005a8
	ctx.lr = 0x823215C0;
	sub_823005A8(ctx, base);
loc_823215C0:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// stb r29,32(r28)
	PPC_STORE_U8(ctx.r28.u32 + 32, ctx.r29.u8);
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r10,r11,26080
	ctx.r10.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16271
	ctx.r8.u64 = ctx.r9.u64 | 16271;
	// lbzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82321f0c
	if (ctx.cr6.eq) goto loc_82321F0C;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// lwz r6,11892(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r4,r5,16216
	ctx.r4.u64 = ctx.r5.u64 | 16216;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// addi r9,r11,-13016
	ctx.r9.s64 = ctx.r11.s64 + -13016;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r10,r6,19200
	ctx.r10.s64 = ctx.r6.s64 * 19200;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// lwz r6,460(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 460);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82321620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82126db0
	ctx.lr = 0x82321624;
	sub_82126DB0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823216d8
	if (ctx.cr6.eq) goto loc_823216D8;
	// ld r4,11856(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// rlwinm r3,r4,0,22,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// bne cr6,0x82321648
	if (!ctx.cr6.eq) goto loc_82321648;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82321648:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82321f0c
	if (ctx.cr6.eq) goto loc_82321F0C;
	// addi r11,r31,7920
	ctx.r11.s64 = ctx.r31.s64 + 7920;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ld r9,11856(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 11856);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x82321674
	if (!ctx.cr6.eq) goto loc_82321674;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82321674:
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// li r4,18
	ctx.r4.s64 = 18;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82321728
	if (ctx.cr6.eq) goto loc_82321728;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r4,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r4.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r29,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r29.u32);
	// stw r27,464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 464, ctx.r27.u32);
	// li r12,-513
	ctx.r12.s64 = -513;
	// stb r29,468(r11)
	PPC_STORE_U8(ctx.r11.u32 + 468, ctx.r29.u8);
	// lfs f0,3260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,428(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 428, temp.u32);
	// stw r5,440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 440, ctx.r5.u32);
	// lfs f0,11876(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11876);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,424(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 424, temp.u32);
	// stfs f0,436(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 436, temp.u32);
	// ld r10,11856(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 11856);
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// std r9,11856(r3)
	PPC_STORE_U64(ctx.r3.u32 + 11856, ctx.r9.u64);
	// lwz r4,456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822ef9d0
	ctx.lr = 0x823216D0;
	sub_822EF9D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_823216D8:
	// ld r8,11856(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// rlwinm r7,r8,0,13,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x823216ec
	if (!ctx.cr6.eq) goto loc_823216EC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823216EC:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82321f0c
	if (ctx.cr6.eq) goto loc_82321F0C;
	// addi r11,r31,7920
	ctx.r11.s64 = ctx.r31.s64 + 7920;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ld r4,11856(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 11856);
	// rlwinm r10,r4,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bne cr6,0x82321718
	if (!ctx.cr6.eq) goto loc_82321718;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82321718:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82321734
	if (!ctx.cr6.eq) goto loc_82321734;
	// li r4,9
	ctx.r4.s64 = 9;
loc_82321728:
	// bl 0x822efbc0
	ctx.lr = 0x8232172C;
	sub_822EFBC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321734:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r29.u32);
	// li r7,18
	ctx.r7.s64 = 18;
	// stw r27,464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 464, ctx.r27.u32);
	// li r6,9
	ctx.r6.s64 = 9;
	// stb r29,468(r11)
	PPC_STORE_U8(ctx.r11.u32 + 468, ctx.r29.u8);
	// lis r12,-5
	ctx.r12.s64 = -327680;
	// lfs f0,25556(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// stfs f0,428(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 428, temp.u32);
	// stw r7,440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 440, ctx.r7.u32);
	// stw r6,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r6.u32);
	// lfs f0,11876(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11876);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,424(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 424, temp.u32);
	// stfs f0,436(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 436, temp.u32);
	// ld r5,11856(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 11856);
	// and r4,r5,r12
	ctx.r4.u64 = ctx.r5.u64 & ctx.r12.u64;
	// std r4,11856(r3)
	PPC_STORE_U64(ctx.r3.u32 + 11856, ctx.r4.u64);
	// lwz r4,456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822ef9d0
	ctx.lr = 0x82321788;
	sub_822EF9D0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321790:
	// lwz r3,936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne cr6,0x823217ac
	if (!ctx.cr6.eq) goto loc_823217AC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823217AC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823217c0
	if (ctx.cr6.eq) goto loc_823217C0;
	// cmpwi cr6,r6,19
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 19, ctx.xer);
	// bne cr6,0x82321f0c
	if (!ctx.cr6.eq) goto loc_82321F0C;
loc_823217C0:
	// cmplwi cr6,r6,49
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 49, ctx.xer);
	// bgt cr6,0x82321f0c
	if (ctx.cr6.gt) goto loc_82321F0C;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// addi r12,r12,6112
	ctx.r12.s64 = ctx.r12.s64 + 6112;
	// rlwinm r0,r6,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r6.u64) {
	case 0:
		goto loc_82321BA4;
	case 1:
		goto loc_82321F0C;
	case 2:
		goto loc_82321F0C;
	case 3:
		goto loc_82321F0C;
	case 4:
		goto loc_82321F0C;
	case 5:
		goto loc_82321F0C;
	case 6:
		goto loc_82321F0C;
	case 7:
		goto loc_823219B0;
	case 8:
		goto loc_82321A8C;
	case 9:
		goto loc_82321AC8;
	case 10:
		goto loc_82321F0C;
	case 11:
		goto loc_82321F0C;
	case 12:
		goto loc_82321AF4;
	case 13:
		goto loc_82321B20;
	case 14:
		goto loc_8232197C;
	case 15:
		goto loc_82321F0C;
	case 16:
		goto loc_82321C74;
	case 17:
		goto loc_82321F0C;
	case 18:
		goto loc_82321F0C;
	case 19:
		goto loc_823218D4;
	case 20:
		goto loc_82321C48;
	case 21:
		goto loc_82321F0C;
	case 22:
		goto loc_82321F0C;
	case 23:
		goto loc_82321CAC;
	case 24:
		goto loc_82321CF8;
	case 25:
		goto loc_82321F0C;
	case 26:
		goto loc_82321F0C;
	case 27:
		goto loc_82321F0C;
	case 28:
		goto loc_82321F0C;
	case 29:
		goto loc_82321F0C;
	case 30:
		goto loc_82321F0C;
	case 31:
		goto loc_82321F0C;
	case 32:
		goto loc_82321F0C;
	case 33:
		goto loc_82321F0C;
	case 34:
		goto loc_82321F0C;
	case 35:
		goto loc_82321F0C;
	case 36:
		goto loc_82321F0C;
	case 37:
		goto loc_82321F0C;
	case 38:
		goto loc_82321F0C;
	case 39:
		goto loc_82321F0C;
	case 40:
		goto loc_82321F0C;
	case 41:
		goto loc_82321F0C;
	case 42:
		goto loc_82321F0C;
	case 43:
		goto loc_82321F0C;
	case 44:
		goto loc_82321F0C;
	case 45:
		goto loc_82321D48;
	case 46:
		goto loc_823218A8;
	case 47:
		goto loc_82321B4C;
	case 48:
		goto loc_82321A78;
	case 49:
		goto loc_82321B78;
	default:
		__builtin_unreachable();
	}
	// lwz r17,7076(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7076);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,6576(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6576);
	// lwz r17,6796(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6796);
	// lwz r17,6856(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6856);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,6900(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6900);
	// lwz r17,6944(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6944);
	// lwz r17,6524(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6524);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7284(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7284);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,6356(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6356);
	// lwz r17,7240(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7240);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7340(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7340);
	// lwz r17,7416(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7416);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7948(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7948);
	// lwz r17,7496(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7496);
	// lwz r17,6312(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6312);
	// lwz r17,6988(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6988);
	// lwz r17,6776(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 6776);
	// lwz r17,7032(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 7032);
loc_823218A8:
	// lis r9,-22873
	ctx.r9.s64 = -1499004928;
	// lis r8,-17864
	ctx.r8.s64 = -1170735104;
	// ori r4,r9,21665
	ctx.r4.u64 = ctx.r9.u64 | 21665;
	// ori r7,r8,59447
	ctx.r7.u64 = ctx.r8.u64 | 59447;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x823218CC;
	sub_820A38E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_823218D4:
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lwz r11,11892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// lis r6,33
	ctx.r6.s64 = 2162688;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// ori r5,r6,4416
	ctx.r5.u64 = ctx.r6.u64 | 4416;
	// lwzx r9,r10,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82321910
	if (!ctx.cr6.lt) goto loc_82321910;
	// lis r4,0
	ctx.r4.s64 = 0;
	// addis r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 655360;
	// ori r3,r4,37344
	ctx.r3.u64 = ctx.r4.u64 | 37344;
	// addi r10,r10,-7344
	ctx.r10.s64 = ctx.r10.s64 + -7344;
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82321914
	goto loc_82321914;
loc_82321910:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82321914:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16271
	ctx.r9.u64 = ctx.r10.u64 | 16271;
	// li r6,0
	ctx.r6.s64 = 0;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82321958
	if (ctx.cr6.eq) goto loc_82321958;
	// lis r7,29631
	ctx.r7.s64 = 1941897216;
	// lis r3,-17864
	ctx.r3.s64 = -1170735104;
	// ori r4,r7,39048
	ctx.r4.u64 = ctx.r7.u64 | 39048;
	// ori r11,r3,58875
	ctx.r11.u64 = ctx.r3.u64 | 58875;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82321950;
	sub_820A38E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321958:
	// lis r10,-3748
	ctx.r10.s64 = -245628928;
	// lis r9,-17864
	ctx.r9.s64 = -1170735104;
	// ori r4,r10,37420
	ctx.r4.u64 = ctx.r10.u64 | 37420;
	// ori r8,r9,59015
	ctx.r8.u64 = ctx.r9.u64 | 59015;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82321974;
	sub_820A38E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8232197C:
	// lis r3,-17864
	ctx.r3.s64 = -1170735104;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r4,-16294
	ctx.r4.s64 = -1067843584;
	// ori r11,r3,59435
	ctx.r11.u64 = ctx.r3.u64 | 59435;
	// ori r4,r4,61392
	ctx.r4.u64 = ctx.r4.u64 | 61392;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x823219A8;
	sub_820A38E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_823219B0:
	// ld r10,11856(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x823219c8
	if (!ctx.cr6.eq) goto loc_823219C8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823219C8:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82321a20
	if (ctx.cr6.eq) goto loc_82321A20;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r5,37
	ctx.r5.s64 = 2424832;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r4,r5,49147
	ctx.r4.u64 = ctx.r5.u64 | 49147;
	// stw r6,11900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11900, ctx.r6.u32);
	// lbzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82321a0c
	if (!ctx.cr6.eq) goto loc_82321A0C;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r10,11892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// stbx r29,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u8);
loc_82321A0C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823005a8
	ctx.lr = 0x82321A18;
	sub_823005A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321A20:
	// rlwinm r8,r10,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x82321a34
	if (!ctx.cr6.eq) goto loc_82321A34;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82321A34:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82321f0c
	if (ctx.cr6.eq) goto loc_82321F0C;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r4,37
	ctx.r4.s64 = 2424832;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r3,r4,49147
	ctx.r3.u64 = ctx.r4.u64 | 49147;
	// stw r5,11900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11900, ctx.r5.u32);
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82321a78
	if (!ctx.cr6.eq) goto loc_82321A78;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r10,11892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// stbx r27,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r27.u8);
loc_82321A78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823005a8
	ctx.lr = 0x82321A84;
	sub_823005A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321A8C:
	// ld r8,11856(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwinm r7,r8,0,20,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x82321aa4
	if (!ctx.cr6.eq) goto loc_82321AA4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82321AA4:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82321abc
	if (!ctx.cr6.eq) goto loc_82321ABC;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822efbc0
	ctx.lr = 0x82321ABC;
	sub_822EFBC0(ctx, base);
loc_82321ABC:
	// stb r27,32(r28)
	PPC_STORE_U8(ctx.r28.u32 + 32, ctx.r27.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321AC8:
	// lis r3,-17864
	ctx.r3.s64 = -1170735104;
	// lis r4,-2083
	ctx.r4.s64 = -136511488;
	// ori r11,r3,59507
	ctx.r11.u64 = ctx.r3.u64 | 59507;
	// ori r4,r4,56914
	ctx.r4.u64 = ctx.r4.u64 | 56914;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82321AEC;
	sub_820A38E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321AF4:
	// lis r10,23632
	ctx.r10.s64 = 1548746752;
	// lis r9,-17864
	ctx.r9.s64 = -1170735104;
	// ori r4,r10,40720
	ctx.r4.u64 = ctx.r10.u64 | 40720;
	// ori r8,r9,59477
	ctx.r8.u64 = ctx.r9.u64 | 59477;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82321B18;
	sub_820A38E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321B20:
	// lis r7,-16294
	ctx.r7.s64 = -1067843584;
	// lis r3,-17864
	ctx.r3.s64 = -1170735104;
	// ori r4,r7,61392
	ctx.r4.u64 = ctx.r7.u64 | 61392;
	// ori r11,r3,59435
	ctx.r11.u64 = ctx.r3.u64 | 59435;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82321B44;
	sub_820A38E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321B4C:
	// lis r10,-7323
	ctx.r10.s64 = -479920128;
	// lis r9,-17864
	ctx.r9.s64 = -1170735104;
	// ori r4,r10,58274
	ctx.r4.u64 = ctx.r10.u64 | 58274;
	// ori r8,r9,59327
	ctx.r8.u64 = ctx.r9.u64 | 59327;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82321B70;
	sub_820A38E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321B78:
	// lis r7,-25407
	ctx.r7.s64 = -1665073152;
	// lis r3,-17864
	ctx.r3.s64 = -1170735104;
	// ori r4,r7,8063
	ctx.r4.u64 = ctx.r7.u64 | 8063;
	// ori r11,r3,59435
	ctx.r11.u64 = ctx.r3.u64 | 59435;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82321B9C;
	sub_820A38E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321BA4:
	// ld r10,11856(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82321bbc
	if (!ctx.cr6.eq) goto loc_82321BBC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82321BBC:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82321be8
	if (!ctx.cr6.eq) goto loc_82321BE8;
	// rlwinm r6,r10,0,19,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// bne cr6,0x82321bdc
	if (!ctx.cr6.eq) goto loc_82321BDC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82321BDC:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82321f0c
	if (ctx.cr6.eq) goto loc_82321F0C;
loc_82321BE8:
	// li r12,1
	ctx.r12.s64 = 1;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rldicr r12,r12,32,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// and r3,r10,r12
	ctx.r3.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// bne cr6,0x82321c04
	if (!ctx.cr6.eq) goto loc_82321C04;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82321C04:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82321f0c
	if (!ctx.cr6.eq) goto loc_82321F0C;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r4,11896(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11896);
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x8232da90
	ctx.lr = 0x82321C20;
	sub_8232DA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,9020
	ctx.r3.s64 = ctx.r31.s64 + 9020;
	// bl 0x822f50b0
	ctx.lr = 0x82321C34;
	sub_822F50B0(ctx, base);
	// addi r3,r30,13280
	ctx.r3.s64 = ctx.r30.s64 + 13280;
	// bl 0x820aba80
	ctx.lr = 0x82321C3C;
	sub_820ABA80(ctx, base);
	// stfs f1,9048(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9048, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321C48:
	// lis r9,-27127
	ctx.r9.s64 = -1777795072;
	// lis r8,-17864
	ctx.r8.s64 = -1170735104;
	// ori r4,r9,40895
	ctx.r4.u64 = ctx.r9.u64 | 40895;
	// ori r7,r8,58938
	ctx.r7.u64 = ctx.r8.u64 | 58938;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82321C6C;
	sub_820A38E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321C74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,11904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11904);
	// bl 0x822efa40
	ctx.lr = 0x82321C80;
	sub_822EFA40(ctx, base);
	// lis r3,-17864
	ctx.r3.s64 = -1170735104;
	// lis r4,-32118
	ctx.r4.s64 = -2104885248;
	// ori r11,r3,59100
	ctx.r11.u64 = ctx.r3.u64 | 59100;
	// ori r4,r4,14497
	ctx.r4.u64 = ctx.r4.u64 | 14497;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82321CA4;
	sub_820A38E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321CAC:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,11856(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rldicr r12,r12,32,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82321ccc
	if (!ctx.cr6.eq) goto loc_82321CCC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82321CCC:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82321f0c
	if (!ctx.cr6.eq) goto loc_82321F0C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f0,9052(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9052, temp.u32);
	// addi r3,r31,9020
	ctx.r3.s64 = ctx.r31.s64 + 9020;
	// bl 0x822f50b0
	ctx.lr = 0x82321CF0;
	sub_822F50B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321CF8:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r6,11856(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rldicr r12,r12,32,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// and r5,r6,r12
	ctx.r5.u64 = ctx.r6.u64 & ctx.r12.u64;
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// bne cr6,0x82321d18
	if (!ctx.cr6.eq) goto loc_82321D18;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82321D18:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82321f0c
	if (!ctx.cr6.eq) goto loc_82321F0C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r31,9020
	ctx.r3.s64 = ctx.r31.s64 + 9020;
	// lfs f0,6076(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6076);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,9052(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 9052, temp.u32);
	// bl 0x822f50b0
	ctx.lr = 0x82321D40;
	sub_822F50B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321D48:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r8,11892(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addi r10,r31,9184
	ctx.r10.s64 = ctx.r31.s64 + 9184;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r6,r10,368
	ctx.r6.s64 = ctx.r10.s64 + 368;
	// lfs f0,2864(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// mulli r9,r8,19200
	ctx.r9.s64 = ctx.r8.s64 * 19200;
	// addi r11,r11,-28480
	ctx.r11.s64 = ctx.r11.s64 + -28480;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lis r9,-32151
	ctx.r9.s64 = -2107047936;
	// addi r5,r10,384
	ctx.r5.s64 = ctx.r10.s64 + 384;
	// addi r9,r9,21968
	ctx.r9.s64 = ctx.r9.s64 + 21968;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// ld r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// ld r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// std r3,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r3.u64);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// lfs f6,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// lfs f5,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fadds f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// lfs f4,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// stfs f0,408(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 408, temp.u32);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stw r29,324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 324, ctx.r29.u32);
	// fmuls f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// ld r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// std r9,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// ld r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// fadds f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// stfs f0,304(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 304, temp.u32);
	// stb r29,416(r10)
	PPC_STORE_U8(ctx.r10.u32 + 416, ctx.r29.u8);
	// stfs f0,308(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 308, temp.u32);
	// stfs f0,312(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 312, temp.u32);
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r4,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r4.u64);
	// std r3,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r3.u64);
	// beq cr6,0x82321ee0
	if (ctx.cr6.eq) goto loc_82321EE0;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82321ed4
	if (ctx.cr6.eq) goto loc_82321ED4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x82321f0c
	if (!ctx.cr6.eq) goto loc_82321F0C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,3628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3628, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r27,3638(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3638, ctx.r27.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,-1624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1624);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f13,3612(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3612, temp.u32);
	// lfs f12,-1648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1648);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f12,3616(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3616, temp.u32);
	// lfs f11,17912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17912);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f11,3620(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3620, temp.u32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,3624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3624, temp.u32);
	// stfs f0,3608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3608, temp.u32);
	// lfs f10,3148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3148);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,3604(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3604, temp.u32);
	// bl 0x822efbc0
	ctx.lr = 0x82321ECC;
	sub_822EFBC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321ED4:
	// addi r3,r31,5184
	ctx.r3.s64 = ctx.r31.s64 + 5184;
	// lwz r4,11896(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11896);
	// bl 0x822fb908
	ctx.lr = 0x82321EE0;
	sub_822FB908(ctx, base);
loc_82321EE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,11900(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11900);
	// bl 0x822efbc0
	ctx.lr = 0x82321EEC;
	sub_822EFBC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82321EF4:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r8,r9,16294
	ctx.r8.u64 = ctx.r9.u64 | 16294;
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
loc_82321F0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82321F14"))) PPC_WEAK_FUNC(sub_82321F14);
PPC_FUNC_IMPL(__imp__sub_82321F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82321F18"))) PPC_WEAK_FUNC(sub_82321F18);
PPC_FUNC_IMPL(__imp__sub_82321F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82321F20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r30,44
	ctx.r29.s64 = ctx.r30.s64 + 44;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8232226c
	if (ctx.cr6.gt) goto loc_8232226C;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// addi r12,r12,8024
	ctx.r12.s64 = ctx.r12.s64 + 8024;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82321F68;
	case 1:
		goto loc_82322000;
	case 2:
		goto loc_823220E0;
	case 3:
		goto loc_82322180;
	default:
		__builtin_unreachable();
	}
	// lwz r17,8040(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8040);
	// lwz r17,8192(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8192);
	// lwz r17,8416(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8416);
	// lwz r17,8576(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8576);
loc_82321F68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231f5a0
	ctx.lr = 0x82321F74;
	sub_8231F5A0(ctx, base);
	// lbz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82321fc8
	if (!ctx.cr6.eq) goto loc_82321FC8;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82321fc8
	if (ctx.cr6.eq) goto loc_82321FC8;
	// lbz r9,4777(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4777);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82321fc8
	if (!ctx.cr6.eq) goto loc_82321FC8;
	// lbz r8,9193(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9193);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82321fc8
	if (!ctx.cr6.eq) goto loc_82321FC8;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f13,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-1612(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1612);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8232226c
	if (!ctx.cr6.gt) goto loc_8232226C;
loc_82321FC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82300fe8
	ctx.lr = 0x82321FD4;
	sub_82300FE8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8232226c
	if (!ctx.cr6.eq) goto loc_8232226C;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r5,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r5.u32);
	// stb r4,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r4.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82322000:
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r28,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r28.u8);
	// beq cr6,0x82322058
	if (ctx.cr6.eq) goto loc_82322058;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r4,35
	ctx.r4.s64 = 35;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lwz r10,11892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// addi r8,r11,-13016
	ctx.r8.s64 = ctx.r11.s64 + -13016;
	// mulli r9,r10,19200
	ctx.r9.s64 = ctx.r10.s64 * 19200;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stb r28,10332(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10332, ctx.r28.u8);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// stb r28,10335(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10335, ctx.r28.u8);
	// stb r28,10333(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10333, ctx.r28.u8);
	// stw r6,10164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10164, ctx.r6.u32);
	// bl 0x822efbc0
	ctx.lr = 0x82322058;
	sub_822EFBC0(ctx, base);
loc_82322058:
	// lbz r5,10057(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10057);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8232226c
	if (ctx.cr6.eq) goto loc_8232226C;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r3,r4,16271
	ctx.r3.u64 = ctx.r4.u64 | 16271;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823220b4
	if (ctx.cr6.eq) goto loc_823220B4;
	// bl 0x8231f8d8
	ctx.lr = 0x8232208C;
	sub_8231F8D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8232226c
	if (!ctx.cr6.eq) goto loc_8232226C;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stb r8,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r8.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_823220B4:
	// bl 0x82301070
	ctx.lr = 0x823220B8;
	sub_82301070(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8232226c
	if (!ctx.cr6.eq) goto loc_8232226C;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stb r5,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r5.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_823220E0:
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r28,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r28.u8);
	// beq cr6,0x82322140
	if (ctx.cr6.eq) goto loc_82322140;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82301070
	ctx.lr = 0x82322100;
	sub_82301070(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82322140
	if (!ctx.cr6.eq) goto loc_82322140;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231f8d8
	ctx.lr = 0x82322118;
	sub_8231F8D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232226c
	if (!ctx.cr6.eq) goto loc_8232226C;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stb r9,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r9.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82322140:
	// lbz r8,10633(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10633);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8232226c
	if (ctx.cr6.eq) goto loc_8232226C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231f8d8
	ctx.lr = 0x82322158;
	sub_8231F8D8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8232226c
	if (!ctx.cr6.eq) goto loc_8232226C;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stb r5,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r5.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82322180:
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r28,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r28.u8);
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// beq cr6,0x823221a4
	if (ctx.cr6.eq) goto loc_823221A4;
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
loc_823221A4:
	// ld r3,11856(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// rlwinm r11,r3,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x823221b8
	if (ctx.cr6.eq) goto loc_823221B8;
	// li r28,1
	ctx.r28.s64 = 1;
loc_823221B8:
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823221d0
	if (!ctx.cr6.eq) goto loc_823221D0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822efbc0
	ctx.lr = 0x823221D0;
	sub_822EFBC0(ctx, base);
loc_823221D0:
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,-27244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x8232226c
	if (!ctx.cr6.gt) goto loc_8232226C;
	// lwz r8,11892(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// addis r11,r29,35
	ctx.r11.s64 = ctx.r29.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r11,-13016
	ctx.r5.s64 = ctx.r11.s64 + -13016;
	// mulli r7,r8,19200
	ctx.r7.s64 = ctx.r8.s64 * 19200;
	// lbzx r11,r7,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// stw r6,11812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11812, ctx.r6.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,11776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11776, ctx.r11.u32);
	// stb r10,11816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11816, ctx.r10.u8);
	// bl 0x8231f8d8
	ctx.lr = 0x82322224;
	sub_8231F8D8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8232226c
	if (!ctx.cr6.eq) goto loc_8232226C;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r7,r8,16271
	ctx.r7.u64 = ctx.r8.u64 | 16271;
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82322264
	if (!ctx.cr6.eq) goto loc_82322264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82301070
	ctx.lr = 0x82322258;
	sub_82301070(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8232226c
	if (!ctx.cr6.eq) goto loc_8232226C;
loc_82322264:
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
loc_8232226C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322274"))) PPC_WEAK_FUNC(sub_82322274);
PPC_FUNC_IMPL(__imp__sub_82322274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322278"))) PPC_WEAK_FUNC(sub_82322278);
PPC_FUNC_IMPL(__imp__sub_82322278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lbz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r9,5416(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5416);
	// bne cr6,0x82322300
	if (!ctx.cr6.eq) goto loc_82322300;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bgt cr6,0x82322300
	if (ctx.cr6.gt) goto loc_82322300;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x823222bc
	if (ctx.cr6.lt) goto loc_823222BC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f1,-15116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15116);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f2,13356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13356);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f3,18116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18116);
	ctx.f3.f64 = double(temp.f32);
	// b 0x82322318
	goto loc_82322318;
loc_823222BC:
	// lbz r8,5429(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5429);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823222e4
	if (ctx.cr6.eq) goto loc_823222E4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f1,-15116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15116);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f2,13356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13356);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f3,18116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18116);
	ctx.f3.f64 = double(temp.f32);
	// b 0x82322318
	goto loc_82322318;
loc_823222E4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-1616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1616);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f2,-1612(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1612);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f3,18116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18116);
	ctx.f3.f64 = double(temp.f32);
	// b 0x82322318
	goto loc_82322318;
loc_82322300:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,18116
	ctx.r11.s64 = ctx.r11.s64 + 18116;
	// lfs f1,592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,604(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f3,3068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f3.f64 = double(temp.f32);
loc_82322318:
	// b 0x8231fb08
	sub_8231FB08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232231C"))) PPC_WEAK_FUNC(sub_8232231C);
PPC_FUNC_IMPL(__imp__sub_8232231C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322320"))) PPC_WEAK_FUNC(sub_82322320);
PPC_FUNC_IMPL(__imp__sub_82322320) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,5404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5404);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,752
	ctx.r11.s64 = ctx.r11.s64 + 752;
	// lbz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82322364
	if (!ctx.cr6.eq) goto loc_82322364;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82322364
	if (ctx.cr6.eq) goto loc_82322364;
	// lbz r8,14(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82322368
	if (ctx.cr6.eq) goto loc_82322368;
loc_82322364:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82322368:
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82322378
	if (!ctx.cr6.eq) goto loc_82322378;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82322378:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82322278
	sub_82322278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322388"))) PPC_WEAK_FUNC(sub_82322388);
PPC_FUNC_IMPL(__imp__sub_82322388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82322390;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addis r10,r30,35
	ctx.r10.s64 = ctx.r30.s64 + 2293760;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r10,-10256
	ctx.r8.s64 = ctx.r10.s64 + -10256;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r10,r11,-11424
	ctx.r10.s64 = ctx.r11.s64 + -11424;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,532(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 532);
	// mulli r7,r11,19200
	ctx.r7.s64 = ctx.r11.s64 * 19200;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mulli r11,r11,11920
	ctx.r11.s64 = ctx.r11.s64 * 11920;
	// lbz r5,6536(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 6536);
	// rlwinm r4,r5,0,26,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823223f8
	if (!ctx.cr6.eq) goto loc_823223F8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_823223F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232247c
	if (ctx.cr6.eq) goto loc_8232247C;
	// lis r10,33
	ctx.r10.s64 = 2162688;
	// lwz r11,532(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 532);
	// ori r9,r10,4416
	ctx.r9.u64 = ctx.r10.u64 | 4416;
	// lwzx r10,r30,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82322438
	if (!ctx.cr6.lt) goto loc_82322438;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addis r10,r30,10
	ctx.r10.s64 = ctx.r30.s64 + 655360;
	// ori r7,r8,37344
	ctx.r7.u64 = ctx.r8.u64 | 37344;
	// addi r10,r10,-7344
	ctx.r10.s64 = ctx.r10.s64 + -7344;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8232243c
	goto loc_8232243C;
loc_82322438:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8232243C:
	// lbz r6,604(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 604);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8232247c
	if (!ctx.cr6.eq) goto loc_8232247C;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8232245C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// stw r3,540(r11)
	PPC_STORE_U32(ctx.r11.u32 + 540, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232247C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232247C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82315f10
	ctx.lr = 0x82322488;
	sub_82315F10(ctx, base);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x823227a0
	if (ctx.cr6.gt) goto loc_823227A0;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// addi r12,r12,9392
	ctx.r12.s64 = ctx.r12.s64 + 9392;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_823224C8;
	case 1:
		goto loc_823224D4;
	case 2:
		goto loc_8232264C;
	case 3:
		goto loc_823226B0;
	case 4:
		goto loc_823227A0;
	case 5:
		goto loc_82322728;
	default:
		__builtin_unreachable();
	}
	// lwz r17,9416(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 9416);
	// lwz r17,9428(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 9428);
	// lwz r17,9804(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 9804);
	// lwz r17,9904(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 9904);
	// lwz r17,10144(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 10144);
	// lwz r17,10024(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 10024);
loc_823224C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82320a48
	ctx.lr = 0x823224D0;
	sub_82320A48(ctx, base);
	// b 0x823227a0
	goto loc_823227A0;
loc_823224D4:
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r28,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r28.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823224fc
	if (ctx.cr6.eq) goto loc_823224FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15148);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,-1616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1616);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,160(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
loc_823224FC:
	// lbz r8,49(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82322514
	if (!ctx.cr6.eq) goto loc_82322514;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363ce0
	ctx.lr = 0x82322514;
	sub_82363CE0(ctx, base);
loc_82322514:
	// lwz r10,11904(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11904);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x8232255c
	if (!ctx.cr6.eq) goto loc_8232255C;
	// lwz r7,2924(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2924);
	// lbz r6,9(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 9);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8232255c
	if (ctx.cr6.eq) goto loc_8232255C;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,7728(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7728);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d49c0
	ctx.lr = 0x82322550;
	sub_822D49C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82320a48
	ctx.lr = 0x82322558;
	sub_82320A48(ctx, base);
	// b 0x823227a0
	goto loc_823227A0;
loc_8232255C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x823224c8
	if (ctx.cr6.lt) goto loc_823224C8;
	// lbz r9,177(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823225a4
	if (ctx.cr6.eq) goto loc_823225A4;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823225a4
	if (ctx.cr6.eq) goto loc_823225A4;
	// lbz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bne cr6,0x823225a4
	if (!ctx.cr6.eq) goto loc_823225A4;
	// lbz r3,14(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823225a8
	if (ctx.cr6.eq) goto loc_823225A8;
loc_823225A4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_823225A8:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823224c8
	if (!ctx.cr6.eq) goto loc_823224C8;
	// lfs f12,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x823227a0
	if (!ctx.cr6.lt) goto loc_823227A0;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x823227a0
	if (!ctx.cr6.eq) goto loc_823227A0;
	// ld r7,11856(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 11856);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwinm r6,r7,0,8,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x800000;
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// bne cr6,0x823225e0
	if (!ctx.cr6.eq) goto loc_823225E0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_823225E0:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823227a0
	if (!ctx.cr6.eq) goto loc_823227A0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8232261c
	if (ctx.cr6.eq) goto loc_8232261C;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232261c
	if (ctx.cr6.eq) goto loc_8232261C;
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x8232261c
	if (!ctx.cr6.eq) goto loc_8232261C;
	// lbz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// beq cr6,0x82322620
	if (ctx.cr6.eq) goto loc_82322620;
loc_8232261C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82322620:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82322640
	if (ctx.cr6.eq) goto loc_82322640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82320b30
	ctx.lr = 0x82322634;
	sub_82320B30(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823227a0
	if (!ctx.cr6.eq) goto loc_823227A0;
loc_82322640:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823156a0
	ctx.lr = 0x82322648;
	sub_823156A0(ctx, base);
	// b 0x823227a0
	goto loc_823227A0;
loc_8232264C:
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r28,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r28.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82322674
	if (ctx.cr6.eq) goto loc_82322674;
	// lbz r6,49(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82322674
	if (!ctx.cr6.eq) goto loc_82322674;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363ce0
	ctx.lr = 0x82322674;
	sub_82363CE0(ctx, base);
loc_82322674:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x823226a4
	if (ctx.cr6.lt) goto loc_823226A4;
	// lwz r11,11904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11904);
	// addi r5,r11,724
	ctx.r5.s64 = ctx.r11.s64 + 724;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823227a0
	if (ctx.cr6.eq) goto loc_823227A0;
loc_823226A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82320a48
	ctx.lr = 0x823226AC;
	sub_82320A48(ctx, base);
	// b 0x823227a0
	goto loc_823227A0;
loc_823226B0:
	// lwz r11,11904(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11904);
	// addi r10,r11,724
	ctx.r10.s64 = ctx.r11.s64 + 724;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lbz r7,9(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 9);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82322710
	if (!ctx.cr6.eq) goto loc_82322710;
	// lbz r6,177(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82322700
	if (ctx.cr6.eq) goto loc_82322700;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82322700
	if (ctx.cr6.eq) goto loc_82322700;
	// lbz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x82322700
	if (!ctx.cr6.eq) goto loc_82322700;
	// lbz r4,14(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82322704
	if (ctx.cr6.eq) goto loc_82322704;
loc_82322700:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82322704:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823227a0
	if (ctx.cr6.eq) goto loc_823227A0;
loc_82322710:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stb r27,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r27.u8);
	// bl 0x82320a48
	ctx.lr = 0x82322724;
	sub_82320A48(ctx, base);
	// b 0x823227a0
	goto loc_823227A0;
loc_82322728:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r28,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r28.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82322750
	if (ctx.cr6.eq) goto loc_82322750;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stb r27,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r27.u8);
	// lfs f0,-1628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1628);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82322750:
	// lbz r9,49(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82322774
	if (!ctx.cr6.eq) goto loc_82322774;
	// lbz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82322774
	if (ctx.cr6.eq) goto loc_82322774;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363ce0
	ctx.lr = 0x82322774;
	sub_82363CE0(ctx, base);
loc_82322774:
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r7,10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 10, ctx.xer);
	// bne cr6,0x823227a0
	if (!ctx.cr6.eq) goto loc_823227A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x823227a0
	if (!ctx.cr6.lt) goto loc_823227A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82315938
	ctx.lr = 0x8232279C;
	sub_82315938(ctx, base);
	// stb r28,177(r31)
	PPC_STORE_U8(ctx.r31.u32 + 177, ctx.r28.u8);
loc_823227A0:
	// lfs f9,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// fsubs f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f6,160(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823227C4"))) PPC_WEAK_FUNC(sub_823227C4);
PPC_FUNC_IMPL(__imp__sub_823227C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823227C8"))) PPC_WEAK_FUNC(sub_823227C8);
PPC_FUNC_IMPL(__imp__sub_823227C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x823227D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// bgt cr6,0x82322d48
	if (ctx.cr6.gt) goto loc_82322D48;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// addi r12,r12,10240
	ctx.r12.s64 = ctx.r12.s64 + 10240;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82322818;
	case 1:
		goto loc_82322D48;
	case 2:
		goto loc_82322D20;
	case 3:
		goto loc_82322884;
	case 4:
		goto loc_823228C0;
	case 5:
		goto loc_82322AD4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,10264(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 10264);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11552(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11552);
	// lwz r17,10372(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 10372);
	// lwz r17,10432(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 10432);
	// lwz r17,10964(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 10964);
loc_82322818:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r9,697
	ctx.r9.s64 = 45678592;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r7,-698
	ctx.r7.s64 = -45744128;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// ori r8,r9,55032
	ctx.r8.u64 = ctx.r9.u64 | 55032;
	// stb r27,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r27.u8);
	// ori r6,r7,10503
	ctx.r6.u64 = ctx.r7.u64 | 10503;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stb r27,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r27.u8);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stb r30,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r30.u8);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stb r27,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r27.u8);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stb r30,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r30.u8);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82322884:
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r4,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stb r27,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r27.u8);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stb r27,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r27.u8);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stb r30,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r30.u8);
	// stb r30,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_823228C0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82300e20
	ctx.lr = 0x823228CC;
	sub_82300E20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82321f18
	ctx.lr = 0x823228D8;
	sub_82321F18(ctx, base);
	// addi r28,r31,64
	ctx.r28.s64 = ctx.r31.s64 + 64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82322d48
	if (ctx.cr6.gt) goto loc_82322D48;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// addi r12,r12,10496
	ctx.r12.s64 = ctx.r12.s64 + 10496;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82322910;
	case 1:
		goto loc_82322950;
	case 2:
		goto loc_82322990;
	case 3:
		goto loc_82322A74;
	default:
		__builtin_unreachable();
	}
	// lwz r17,10512(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 10512);
	// lwz r17,10576(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 10576);
	// lwz r17,10640(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 10640);
	// lwz r17,10868(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 10868);
loc_82322910:
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r30,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r30.u8);
	// beq cr6,0x82322d48
	if (ctx.cr6.eq) goto loc_82322D48;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// stw r10,11900(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11900, ctx.r10.u32);
	// bl 0x822efbc0
	ctx.lr = 0x82322948;
	sub_822EFBC0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82322950:
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r30,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r30.u8);
	// beq cr6,0x82322d48
	if (ctx.cr6.eq) goto loc_82322D48;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// li r7,9
	ctx.r7.s64 = 9;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r8,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r8.u8);
	// stw r7,11900(r29)
	PPC_STORE_U32(ctx.r29.u32 + 11900, ctx.r7.u32);
	// bl 0x822efbc0
	ctx.lr = 0x82322988;
	sub_822EFBC0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82322990:
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r26,r11,28544
	ctx.r26.s64 = ctx.r11.s64 + 28544;
	// stb r30,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r30.u8);
	// beq cr6,0x823229fc
	if (ctx.cr6.eq) goto loc_823229FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r26,35
	ctx.r11.s64 = ctx.r26.s64 + 2293760;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// addi r5,r11,-13016
	ctx.r5.s64 = ctx.r11.s64 + -13016;
	// stb r27,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r27.u8);
	// lwz r11,11892(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11892);
	// mulli r10,r11,19200
	ctx.r10.s64 = ctx.r11.s64 * 19200;
	// lbzx r9,r10,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// stb r30,10332(r29)
	PPC_STORE_U8(ctx.r29.u32 + 10332, ctx.r30.u8);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stb r30,10335(r29)
	PPC_STORE_U8(ctx.r29.u32 + 10335, ctx.r30.u8);
	// stb r30,10333(r29)
	PPC_STORE_U8(ctx.r29.u32 + 10333, ctx.r30.u8);
	// stw r8,10164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10164, ctx.r8.u32);
	// bl 0x822efbc0
	ctx.lr = 0x823229FC;
	sub_822EFBC0(ctx, base);
loc_823229FC:
	// lbz r7,10057(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10057);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82322a1c
	if (ctx.cr6.eq) goto loc_82322A1C;
	// li r4,12
	ctx.r4.s64 = 12;
	// lfs f0,36(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// bl 0x822efbc0
	ctx.lr = 0x82322A1C;
	sub_822EFBC0(ctx, base);
loc_82322A1C:
	// ld r6,11856(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 11856);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwinm r5,r6,0,19,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// bne cr6,0x82322a34
	if (!ctx.cr6.eq) goto loc_82322A34;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82322A34:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82322d48
	if (ctx.cr6.eq) goto loc_82322D48;
	// lfs f0,36(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-27244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82322d48
	if (!ctx.cr6.gt) goto loc_82322D48;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// stb r27,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r27.u8);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82322A74:
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r30,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r30.u8);
	// beq cr6,0x82322d48
	if (ctx.cr6.eq) goto loc_82322D48;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16271
	ctx.r8.u64 = ctx.r9.u64 | 16271;
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82322abc
	if (ctx.cr6.eq) goto loc_82322ABC;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stb r27,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r27.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82322ABC:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// stb r5,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r5.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82322AD4:
	// addi r11,r6,-9
	ctx.r11.s64 = ctx.r6.s64 + -9;
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// bgt cr6,0x82322d48
	if (ctx.cr6.gt) goto loc_82322D48;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// addi r12,r12,11000
	ctx.r12.s64 = ctx.r12.s64 + 11000;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82322CA8;
	case 1:
		goto loc_82322D48;
	case 2:
		goto loc_82322D48;
	case 3:
		goto loc_82322CD0;
	case 4:
		goto loc_82322CF8;
	case 5:
		goto loc_82322C80;
	case 6:
		goto loc_82322D48;
	case 7:
		goto loc_82322D48;
	case 8:
		goto loc_82322D48;
	case 9:
		goto loc_82322D48;
	case 10:
		goto loc_82322C18;
	case 11:
		goto loc_82322D48;
	case 12:
		goto loc_82322D48;
	case 13:
		goto loc_82322D48;
	case 14:
		goto loc_82322D48;
	case 15:
		goto loc_82322D48;
	case 16:
		goto loc_82322D48;
	case 17:
		goto loc_82322D48;
	case 18:
		goto loc_82322D48;
	case 19:
		goto loc_82322D48;
	case 20:
		goto loc_82322D48;
	case 21:
		goto loc_82322D48;
	case 22:
		goto loc_82322D48;
	case 23:
		goto loc_82322D48;
	case 24:
		goto loc_82322D48;
	case 25:
		goto loc_82322D48;
	case 26:
		goto loc_82322D48;
	case 27:
		goto loc_82322D48;
	case 28:
		goto loc_82322D48;
	case 29:
		goto loc_82322D48;
	case 30:
		goto loc_82322D48;
	case 31:
		goto loc_82322D48;
	case 32:
		goto loc_82322D48;
	case 33:
		goto loc_82322D48;
	case 34:
		goto loc_82322D48;
	case 35:
		goto loc_82322D48;
	case 36:
		goto loc_82322D48;
	case 37:
		goto loc_82322D48;
	case 38:
		goto loc_82322D48;
	case 39:
		goto loc_82322D48;
	case 40:
		goto loc_82322D48;
	case 41:
		goto loc_82322BA8;
	case 42:
		goto loc_82322BEC;
	case 43:
		goto loc_82322BDC;
	default:
		__builtin_unreachable();
	}
	// lwz r17,11432(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11432);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11472(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11472);
	// lwz r17,11512(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11512);
	// lwz r17,11392(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11392);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11288(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11288);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11592(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11592);
	// lwz r17,11176(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11176);
	// lwz r17,11244(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11244);
	// lwz r17,11228(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 11228);
loc_82322BA8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// stw r4,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r4.u32);
	// stb r3,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r3.u8);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// beq cr6,0x82322d48
	if (ctx.cr6.eq) goto loc_82322D48;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82322BDC:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82322BEC:
	// lis r9,-22828
	ctx.r9.s64 = -1496055808;
	// lis r8,-17864
	ctx.r8.s64 = -1170735104;
	// ori r4,r9,10879
	ctx.r4.u64 = ctx.r9.u64 | 10879;
	// ori r7,r8,59100
	ctx.r7.u64 = ctx.r8.u64 | 59100;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r7,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82322C10;
	sub_820A38E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82322C18:
	// lis r6,7
	ctx.r6.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r4,r6,16271
	ctx.r4.u64 = ctx.r6.u64 | 16271;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r6,0
	ctx.r6.s64 = 0;
	// lbzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82322c5c
	if (ctx.cr6.eq) goto loc_82322C5C;
	// lis r11,29631
	ctx.r11.s64 = 1941897216;
	// lis r10,-17864
	ctx.r10.s64 = -1170735104;
	// ori r4,r11,39048
	ctx.r4.u64 = ctx.r11.u64 | 39048;
	// ori r9,r10,58875
	ctx.r9.u64 = ctx.r10.u64 | 58875;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x82322C54;
	sub_820A38E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82322C5C:
	// lis r8,-3748
	ctx.r8.s64 = -245628928;
	// lis r7,-17864
	ctx.r7.s64 = -1170735104;
	// ori r4,r8,37420
	ctx.r4.u64 = ctx.r8.u64 | 37420;
	// ori r3,r7,59015
	ctx.r3.u64 = ctx.r7.u64 | 59015;
	// rldimi r4,r3,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82322C78;
	sub_820A38E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82322C80:
	// lis r11,-16294
	ctx.r11.s64 = -1067843584;
	// lis r10,-17864
	ctx.r10.s64 = -1170735104;
	// ori r4,r11,61392
	ctx.r4.u64 = ctx.r11.u64 | 61392;
	// ori r9,r10,59435
	ctx.r9.u64 = ctx.r10.u64 | 59435;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82322CA0;
	sub_820A38E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82322CA8:
	// lis r8,-2083
	ctx.r8.s64 = -136511488;
	// lis r7,-17864
	ctx.r7.s64 = -1170735104;
	// ori r4,r8,56914
	ctx.r4.u64 = ctx.r8.u64 | 56914;
	// ori r3,r7,59507
	ctx.r3.u64 = ctx.r7.u64 | 59507;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r3,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82322CC8;
	sub_820A38E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82322CD0:
	// lis r11,23632
	ctx.r11.s64 = 1548746752;
	// lis r10,-17864
	ctx.r10.s64 = -1170735104;
	// ori r4,r11,40720
	ctx.r4.u64 = ctx.r11.u64 | 40720;
	// ori r9,r10,59477
	ctx.r9.u64 = ctx.r10.u64 | 59477;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82322CF0;
	sub_820A38E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82322CF8:
	// lis r8,-16294
	ctx.r8.s64 = -1067843584;
	// lis r7,-17864
	ctx.r7.s64 = -1170735104;
	// ori r4,r8,61392
	ctx.r4.u64 = ctx.r8.u64 | 61392;
	// ori r3,r7,59435
	ctx.r3.u64 = ctx.r7.u64 | 59435;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r3,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82322D18;
	sub_820A38E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82322D20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822efb38
	ctx.lr = 0x82322D28;
	sub_822EFB38(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stb r30,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r30.u8);
loc_82322D48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322D50"))) PPC_WEAK_FUNC(sub_82322D50);
PPC_FUNC_IMPL(__imp__sub_82322D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82322D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,33
	ctx.r9.s64 = 2162688;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// ori r8,r9,4416
	ctx.r8.u64 = ctx.r9.u64 | 4416;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r11,11892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11892);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82322da4
	if (!ctx.cr6.lt) goto loc_82322DA4;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addis r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 655360;
	// ori r6,r7,37344
	ctx.r6.u64 = ctx.r7.u64 | 37344;
	// addi r10,r10,-7344
	ctx.r10.s64 = ctx.r10.s64 + -7344;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82322da8
	goto loc_82322DA8;
loc_82322DA4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82322DA8:
	// lbz r5,604(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 604);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82322dc4
	if (ctx.cr6.eq) goto loc_82322DC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823021e0
	ctx.lr = 0x82322DBC;
	sub_823021E0(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82322DC4:
	// lis r3,3
	ctx.r3.s64 = 196608;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r10,r3,12424
	ctx.r10.u64 = ctx.r3.u64 | 12424;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r7,r8,12424
	ctx.r7.u64 = ctx.r8.u64 | 12424;
	// ori r5,r6,12428
	ctx.r5.u64 = ctx.r6.u64 | 12428;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r3,3
	ctx.r3.s64 = 196608;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lhzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// ori r8,r3,12424
	ctx.r8.u64 = ctx.r3.u64 | 12424;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// ori r5,r6,12428
	ctx.r5.u64 = ctx.r6.u64 | 12428;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// stwx r10,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,17564
	ctx.r11.s64 = ctx.r11.s64 + 17564;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -196);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82322f2c
	if (!ctx.cr6.lt) goto loc_82322F2C;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// ld r10,11856(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 11856);
	// rlwinm r3,r10,0,14,14
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// bne cr6,0x82322e6c
	if (!ctx.cr6.eq) goto loc_82322E6C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82322E6C:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82322f08
	if (!ctx.cr6.eq) goto loc_82322F08;
	// rlwinm r8,r10,0,9,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x82322e8c
	if (!ctx.cr6.eq) goto loc_82322E8C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82322E8C:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82322f08
	if (!ctx.cr6.eq) goto loc_82322F08;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82322320
	ctx.lr = 0x82322EA4;
	sub_82322320(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r8,28
	ctx.r8.s64 = 28;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82322EB8:
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82322eb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82322EB8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,9
	ctx.r3.s64 = 9;
	// li r4,17
	ctx.r4.s64 = 17;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// stw r29,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r29.u32);
	// stb r30,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r30.u8);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822efbc0
	ctx.lr = 0x82322F00;
	sub_822EFBC0(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82322F08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r29.u32);
	// stb r30,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r30.u8);
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82322F2C:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82322f84
	if (!ctx.cr6.lt) goto loc_82322F84;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,4080
	ctx.r3.s64 = ctx.r11.s64 + 4080;
	// bl 0x822da8b0
	ctx.lr = 0x82322F50;
	sub_822DA8B0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822efbc0
	ctx.lr = 0x82322F5C;
	sub_822EFBC0(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,28296
	ctx.r3.s64 = ctx.r11.s64 + 28296;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822bde00
	ctx.lr = 0x82322F7C;
	sub_822BDE00(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82322F84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82320150
	ctx.lr = 0x82322F8C;
	sub_82320150(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82322F94"))) PPC_WEAK_FUNC(sub_82322F94);
PPC_FUNC_IMPL(__imp__sub_82322F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82322F98"))) PPC_WEAK_FUNC(sub_82322F98);
PPC_FUNC_IMPL(__imp__sub_82322F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82322FA0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8259bba8
	ctx.lr = 0x82322FA8;
	__savefpr_28(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r8,r10,37344
	ctx.r8.u64 = ctx.r10.u64 | 37344;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lis r7,33
	ctx.r7.s64 = 2162688;
	// addi r3,r10,28544
	ctx.r3.s64 = ctx.r10.s64 + 28544;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r6,r7,4416
	ctx.r6.u64 = ctx.r7.u64 | 4416;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,11892(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11892);
	// lwzx r10,r3,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82322ff8
	if (!ctx.cr6.lt) goto loc_82322FF8;
	// addis r10,r3,10
	ctx.r10.s64 = ctx.r3.s64 + 655360;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r10,r10,-7344
	ctx.r10.s64 = ctx.r10.s64 + -7344;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82322ffc
	goto loc_82322FFC;
loc_82322FF8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82322FFC:
	// lbz r29,604(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 604);
	// addis r11,r3,35
	ctx.r11.s64 = ctx.r3.s64 + 2293760;
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// li r26,1
	ctx.r26.s64 = 1;
	// ld r5,11856(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 11856);
	// addi r11,r11,-10256
	ctx.r11.s64 = ctx.r11.s64 + -10256;
	// mulli r9,r10,19200
	ctx.r9.s64 = ctx.r10.s64 * 19200;
	// lwzx r28,r9,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r4,r5,0,8,8
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x800000;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// bne cr6,0x82323030
	if (!ctx.cr6.eq) goto loc_82323030;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82323030:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f1,18460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18460);
	ctx.f1.f64 = double(temp.f32);
	// bne cr6,0x82323090
	if (!ctx.cr6.eq) goto loc_82323090;
	// lbz r5,6536(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6536);
	// rlwinm r4,r5,0,26,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82323090
	if (ctx.cr6.eq) goto loc_82323090;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82323090
	if (ctx.cr6.eq) goto loc_82323090;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82323090
	if (ctx.cr6.eq) goto loc_82323090;
	// lfs f0,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82323090
	if (!ctx.cr6.gt) goto loc_82323090;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82323090
	if (!ctx.cr6.eq) goto loc_82323090;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r27,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r27.u32);
	// stb r26,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r26.u8);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
loc_82323090:
	// addi r30,r31,208
	ctx.r30.s64 = ctx.r31.s64 + 208;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82323a14
	if (ctx.cr6.gt) goto loc_82323A14;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// addi r12,r12,12476
	ctx.r12.s64 = ctx.r12.s64 + 12476;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_823230F4;
	case 1:
		goto loc_82323104;
	case 2:
		goto loc_823231D8;
	case 3:
		goto loc_823231E8;
	case 4:
		goto loc_823232E4;
	case 5:
		goto loc_82323300;
	case 6:
		goto loc_823233D0;
	case 7:
		goto loc_823233EC;
	case 8:
		goto loc_82323408;
	case 9:
		goto loc_82323628;
	case 10:
		goto loc_82323830;
	case 11:
		goto loc_82323598;
	case 12:
		goto loc_823239E4;
	case 13:
		goto loc_823239F4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,12532(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12532);
	// lwz r17,12548(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12548);
	// lwz r17,12760(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12760);
	// lwz r17,12776(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12776);
	// lwz r17,13028(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13028);
	// lwz r17,13056(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13056);
	// lwz r17,13264(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13264);
	// lwz r17,13292(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13292);
	// lwz r17,13320(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13320);
	// lwz r17,13864(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13864);
	// lwz r17,14384(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 14384);
	// lwz r17,13720(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 13720);
	// lwz r17,14820(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 14820);
	// lwz r17,14836(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 14836);
loc_823230F4:
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_82323104:
	// lbz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r27,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r27.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8232311c
	if (ctx.cr6.eq) goto loc_8232311C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82322d50
	ctx.lr = 0x8232311C;
	sub_82322D50(ctx, base);
loc_8232311C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ld r7,11856(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11856);
	// rlwinm r6,r7,0,8,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x800000;
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// bne cr6,0x82323138
	if (!ctx.cr6.eq) goto loc_82323138;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82323138:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82323a14
	if (!ctx.cr6.eq) goto loc_82323A14;
	// clrlwi r3,r29,24
	ctx.r3.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232317c
	if (ctx.cr6.eq) goto loc_8232317C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8232317c
	if (!ctx.cr6.lt) goto loc_8232317C;
	// bl 0x822ee398
	ctx.lr = 0x82323168;
	sub_822EE398(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82323a14
	goto loc_82323A14;
loc_8232317C:
	// lwz r11,11904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11904);
	// addi r9,r11,724
	ctx.r9.s64 = ctx.r11.s64 + 724;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lbz r6,9(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 9);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823231b0
	if (ctx.cr6.eq) goto loc_823231B0;
	// bl 0x822ee398
	ctx.lr = 0x8232319C;
	sub_822EE398(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// b 0x82323a14
	goto loc_82323A14;
loc_823231B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82323a14
	if (!ctx.cr6.gt) goto loc_82323A14;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// b 0x82323a14
	goto loc_82323A14;
loc_823231D8:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_823231E8:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r27,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r27.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82323200
	if (ctx.cr6.eq) goto loc_82323200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82320150
	ctx.lr = 0x82323200;
	sub_82320150(ctx, base);
loc_82323200:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8232330c
	if (!ctx.cr6.eq) goto loc_8232330C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r10,4768
	ctx.r11.s64 = ctx.r10.s64 + 4768;
	// addi r8,r11,112
	ctx.r8.s64 = ctx.r11.s64 + 112;
	// lwz r7,11904(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11904);
	// lfs f10,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r7,724
	ctx.r7.s64 = ctx.r7.s64 + 724;
	// lfs f11,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lfs f9,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// std r3,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r3.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// fsubs f13,f10,f7
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f11,f8
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// lbz r4,9(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 9);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// fmuls f6,f13,f13
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f13,f9,f5
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fmadds f4,f0,f0,f6
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f0,f13,f13,f4
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// bne cr6,0x823232d0
	if (!ctx.cr6.eq) goto loc_823232D0;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f3,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,22028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22028);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// ble cr6,0x82323a14
	if (!ctx.cr6.gt) goto loc_82323A14;
	// ld r7,11856(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11856);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwinm r6,r7,0,24,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80;
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// bne cr6,0x823232a4
	if (!ctx.cr6.eq) goto loc_823232A4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_823232A4:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82323a14
	if (ctx.cr6.eq) goto loc_82323A14;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f13,22032(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22032);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x823232d0
	if (ctx.cr6.lt) goto loc_823232D0;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f13,22036(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22036);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82323a14
	if (!ctx.cr6.gt) goto loc_82323A14;
loc_823232D0:
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// b 0x82323a14
	goto loc_82323A14;
loc_823232E4:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r27,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r27.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82323a14
	if (ctx.cr6.eq) goto loc_82323A14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82320150
	ctx.lr = 0x823232FC;
	sub_82320150(ctx, base);
	// b 0x82323a14
	goto loc_82323A14;
loc_82323300:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82323320
	if (ctx.cr6.eq) goto loc_82323320;
loc_8232330C:
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// b 0x82323a14
	goto loc_82323A14;
loc_82323320:
	// lbz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r27,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r27.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82323384
	if (ctx.cr6.eq) goto loc_82323384;
	// lis r6,33
	ctx.r6.s64 = 2162688;
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// ori r5,r6,4416
	ctx.r5.u64 = ctx.r6.u64 | 4416;
	// lwzx r10,r3,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8232335c
	if (!ctx.cr6.lt) goto loc_8232335C;
	// addis r10,r3,10
	ctx.r10.s64 = ctx.r3.s64 + 655360;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r10,r10,-7344
	ctx.r10.s64 = ctx.r10.s64 + -7344;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82323360
	goto loc_82323360;
loc_8232335C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82323360:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,5168(r4)
	PPC_STORE_U32(ctx.r4.u32 + 5168, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,7920
	ctx.r3.s64 = ctx.r11.s64 + 7920;
	// lwz r4,11904(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11904);
	// bl 0x822f7448
	ctx.lr = 0x82323384;
	sub_822F7448(ctx, base);
loc_82323384:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r11,11856(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 11856);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x823233a0
	if (!ctx.cr6.eq) goto loc_823233A0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_823233A0:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82323a14
	if (!ctx.cr6.eq) goto loc_82323A14;
	// lbz r7,6536(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6536);
	// rlwinm r6,r7,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82323a14
	if (!ctx.cr6.eq) goto loc_82323A14;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// b 0x82323a14
	goto loc_82323A14;
loc_823233D0:
	// lbz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r27,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r27.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82323a14
	if (ctx.cr6.eq) goto loc_82323A14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823021e0
	ctx.lr = 0x823233E8;
	sub_823021E0(ctx, base);
	// b 0x82323a14
	goto loc_82323A14;
loc_823233EC:
	// lbz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r27,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r27.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82323a14
	if (ctx.cr6.eq) goto loc_82323A14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823023f8
	ctx.lr = 0x82323404;
	sub_823023F8(ctx, base);
	// b 0x82323a14
	goto loc_82323A14;
loc_82323408:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82323428
	if (ctx.cr6.eq) goto loc_82323428;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82323a14
	goto loc_82323A14;
loc_82323428:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f2.f64 = double(temp.f32);
	// lfs f29,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f2,f29
	ctx.cr6.compare(ctx.f2.f64, ctx.f29.f64);
	// bgt cr6,0x82323530
	if (ctx.cr6.gt) goto loc_82323530;
	// bso cr6,0x82323530
	if (ctx.cr6.so) goto loc_82323530;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x82302040
	ctx.lr = 0x82323450;
	sub_82302040(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// li r9,28
	ctx.r9.s64 = 28;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8232346C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8232346c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232346C;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,132(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 132);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82322278
	ctx.lr = 0x82323498;
	sub_82322278(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82323530
	if (ctx.cr6.eq) goto loc_82323530;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82302040
	ctx.lr = 0x823234B0;
	sub_82302040(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
	// lwz r4,11892(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11892);
	// bl 0x82303a98
	ctx.lr = 0x823234C8;
	sub_82303A98(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,18004
	ctx.r11.s64 = ctx.r11.s64 + 18004;
	// lfs f0,720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 720);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f1
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bgt cr6,0x823234ec
	if (ctx.cr6.gt) goto loc_823234EC;
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82323530
	if (ctx.cr6.eq) goto loc_82323530;
loc_823234EC:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82323530
	if (!ctx.cr6.eq) goto loc_82323530;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,252(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 252);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82323530
	if (!ctx.cr6.eq) goto loc_82323530;
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// li r9,28
	ctx.r9.s64 = 28;
	// addi r10,r8,272
	ctx.r10.s64 = ctx.r8.s64 + 272;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82323514:
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82323514
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323514;
	// stb r26,513(r8)
	PPC_STORE_U8(ctx.r8.u32 + 513, ctx.r26.u8);
	// stfs f29,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
loc_82323530:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r3,512(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 512);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8232355c
	if (!ctx.cr6.eq) goto loc_8232355C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bl 0x823026d8
	ctx.lr = 0x82323550;
	sub_823026D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82323a14
	if (!ctx.cr6.eq) goto loc_82323A14;
loc_8232355C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ld r9,11856(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11856);
	// rlwinm r8,r9,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x82323578
	if (!ctx.cr6.eq) goto loc_82323578;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82323578:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82323a14
	if (!ctx.cr6.eq) goto loc_82323A14;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// b 0x82323a14
	goto loc_82323A14;
loc_82323598:
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823235b8
	if (ctx.cr6.eq) goto loc_823235B8;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// b 0x82323a14
	goto loc_82323A14;
loc_823235B8:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r27,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r27.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82323a14
	if (ctx.cr6.eq) goto loc_82323A14;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ld r9,11856(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11856);
	// rlwinm r8,r9,0,12,12
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x823235e4
	if (!ctx.cr6.eq) goto loc_823235E4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_823235E4:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82323a14
	if (!ctx.cr6.eq) goto loc_82323A14;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,11904(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11904);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r3,r10,7920
	ctx.r3.s64 = ctx.r10.s64 + 7920;
	// lfs f1,18004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18004);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f7448
	ctx.lr = 0x82323610;
	sub_822F7448(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r10,6944
	ctx.r3.s64 = ctx.r10.s64 + 6944;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82308620
	ctx.lr = 0x82323624;
	sub_82308620(ctx, base);
	// b 0x82323a14
	goto loc_82323A14;
loc_82323628:
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82323648
	if (ctx.cr6.eq) goto loc_82323648;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// b 0x82323a14
	goto loc_82323A14;
loc_82323648:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// ori r6,r7,36856
	ctx.r6.u64 = ctx.r7.u64 | 36856;
	// lfs f31,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,252(r9)
	PPC_STORE_U32(ctx.r9.u32 + 252, ctx.r10.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r26,248(r8)
	PPC_STORE_U32(ctx.r8.u32 + 248, ctx.r26.u32);
	// stfs f31,236(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lwzx r11,r3,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82323a14
	if (!ctx.cr6.gt) goto loc_82323A14;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82301ea8
	ctx.lr = 0x8232368C;
	sub_82301EA8(ctx, base);
	// lwz r5,80(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r11,6912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	// addi r11,r11,15124
	ctx.r11.s64 = ctx.r11.s64 + 15124;
	// lbz r4,41(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// rotlwi r10,r4,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820a5df0
	ctx.lr = 0x823236AC;
	sub_820A5DF0(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82323a14
	if (!ctx.cr6.eq) goto loc_82323A14;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,28
	ctx.r8.s64 = 28;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823236D0:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x823236d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823236D0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r9,7392
	ctx.r11.s64 = ctx.r9.s64 + 7392;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r8,28
	ctx.r8.s64 = 28;
	// lfs f13,-1608(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1608);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,212(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82323718:
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82323718
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323718;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,28
	ctx.r8.s64 = 28;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82323754:
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82323754
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323754;
	// stfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822efab0
	ctx.lr = 0x8232377C;
	sub_822EFAB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r5,11856(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 11856);
	// oris r4,r5,64
	ctx.r4.u64 = ctx.r5.u64 | 4194304;
	// std r4,11856(r11)
	PPC_STORE_U64(ctx.r11.u32 + 11856, ctx.r4.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,7920
	ctx.r11.s64 = ctx.r11.s64 + 7920;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ld r10,11856(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 11856);
	// rlwinm r9,r10,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x823237b0
	if (!ctx.cr6.eq) goto loc_823237B0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_823237B0:
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823237d4
	if (!ctx.cr6.eq) goto loc_823237D4;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x822efbc0
	ctx.lr = 0x823237C4;
	sub_822EFBC0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// b 0x82323a14
	goto loc_82323A14;
loc_823237D4:
	// li r6,22
	ctx.r6.s64 = 22;
	// stfs f31,428(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 428, temp.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r27,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r27.u32);
	// stw r26,464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 464, ctx.r26.u32);
	// lis r12,-65
	ctx.r12.s64 = -4259840;
	// stb r27,468(r11)
	PPC_STORE_U8(ctx.r11.u32 + 468, ctx.r27.u8);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// stw r6,440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 440, ctx.r6.u32);
	// stw r5,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r5.u32);
	// lfs f0,11876(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11876);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,424(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 424, temp.u32);
	// stfs f0,436(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 436, temp.u32);
	// ld r4,11856(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 11856);
	// and r10,r4,r12
	ctx.r10.u64 = ctx.r4.u64 & ctx.r12.u64;
	// std r10,11856(r3)
	PPC_STORE_U64(ctx.r3.u32 + 11856, ctx.r10.u64);
	// lwz r4,456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822ef9d0
	ctx.lr = 0x82323820;
	sub_822EF9D0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// b 0x82323a14
	goto loc_82323A14;
loc_82323830:
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82323850
	if (ctx.cr6.eq) goto loc_82323850;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// b 0x82323a14
	goto loc_82323A14;
loc_82323850:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bgt cr6,0x82323a14
	if (ctx.cr6.gt) goto loc_82323A14;
	// bso cr6,0x82323a14
	if (ctx.cr6.so) goto loc_82323A14;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,28
	ctx.r9.s64 = 28;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82323880:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82323880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323880;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,132(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 132);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82322278
	ctx.lr = 0x823238AC;
	sub_82322278(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82323a14
	if (ctx.cr6.eq) goto loc_82323A14;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,28
	ctx.r8.s64 = 28;
	// addi r11,r11,7392
	ctx.r11.s64 = ctx.r11.s64 + 7392;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lfs f0,2868(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823238DC:
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x823238dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823238DC;
	// stfs f31,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f31,28(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// li r8,28
	ctx.r8.s64 = 28;
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82323910:
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82323910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82323910;
	// stfs f31,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f31,28(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,7920
	ctx.r11.s64 = ctx.r11.s64 + 7920;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ld r4,11856(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 11856);
	// rlwinm r10,r4,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x400000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bne cr6,0x82323954
	if (!ctx.cr6.eq) goto loc_82323954;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82323954:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8232397c
	if (!ctx.cr6.eq) goto loc_8232397C;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x822efbc0
	ctx.lr = 0x82323968;
	sub_822EFBC0(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// b 0x82323a14
	goto loc_82323A14;
loc_8232397C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r26,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r26.u32);
	// li r7,22
	ctx.r7.s64 = 22;
	// stw r26,464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 464, ctx.r26.u32);
	// li r6,17
	ctx.r6.s64 = 17;
	// stb r27,468(r11)
	PPC_STORE_U8(ctx.r11.u32 + 468, ctx.r27.u8);
	// lis r12,-65
	ctx.r12.s64 = -4259840;
	// lfs f0,-1528(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// stfs f0,428(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 428, temp.u32);
	// stw r7,440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 440, ctx.r7.u32);
	// stw r6,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r6.u32);
	// lfs f0,11876(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11876);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,424(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 424, temp.u32);
	// stfs f0,436(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 436, temp.u32);
	// ld r5,11856(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 11856);
	// and r4,r5,r12
	ctx.r4.u64 = ctx.r5.u64 & ctx.r12.u64;
	// std r4,11856(r3)
	PPC_STORE_U64(ctx.r3.u32 + 11856, ctx.r4.u64);
	// lwz r4,456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822ef9d0
	ctx.lr = 0x823239D0;
	sub_822EF9D0(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// b 0x82323a14
	goto loc_82323A14;
loc_823239E4:
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stb r26,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r26.u8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_823239F4:
	// lbz r10,49(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82323a14
	if (!ctx.cr6.eq) goto loc_82323A14;
	// lbz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82323a14
	if (ctx.cr6.eq) goto loc_82323A14;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82363ce0
	ctx.lr = 0x82323A14;
	sub_82363CE0(ctx, base);
loc_82323A14:
	// lfs f10,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f28
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f28.f64));
	// fadds f7,f9,f28
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f28.f64));
	// stfs f8,236(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stfs f7,232(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8259bbf4
	ctx.lr = 0x82323A38;
	__restfpr_28(ctx, base);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82323A3C"))) PPC_WEAK_FUNC(sub_82323A3C);
PPC_FUNC_IMPL(__imp__sub_82323A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82323A40"))) PPC_WEAK_FUNC(sub_82323A40);
PPC_FUNC_IMPL(__imp__sub_82323A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82323A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 5, ctx.xer);
	// bgt cr6,0x82323dc4
	if (ctx.cr6.gt) goto loc_82323DC4;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// addi r12,r12,14968
	ctx.r12.s64 = ctx.r12.s64 + 14968;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82323A90;
	case 1:
		goto loc_82323DC4;
	case 2:
		goto loc_82323D70;
	case 3:
		goto loc_82323AA0;
	case 4:
		goto loc_82323AE8;
	case 5:
		goto loc_82323B18;
	default:
		__builtin_unreachable();
	}
	// lwz r17,14992(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 14992);
	// lwz r17,15812(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15812);
	// lwz r17,15728(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15728);
	// lwz r17,15008(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15008);
	// lwz r17,15080(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15080);
	// lwz r17,15128(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15128);
loc_82323A90:
	// li r11,53
	ctx.r11.s64 = 53;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82323AA0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stb r10,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r10.u8);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwz r9,11892(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// addis r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 2228224;
	// addi r10,r11,21248
	ctx.r10.s64 = ctx.r11.s64 + 21248;
	// mulli r11,r9,5440
	ctx.r11.s64 = ctx.r9.s64 * 5440;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823144e0
	ctx.lr = 0x82323AD8;
	sub_823144E0(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82302148
	ctx.lr = 0x82323AE0;
	sub_82302148(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82323AE8:
	// lbz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82323dc4
	if (ctx.cr6.eq) goto loc_82323DC4;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r6,r7,16280
	ctx.r6.u64 = ctx.r7.u64 | 16280;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lfsx f1,r11,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82322f98
	ctx.lr = 0x82323B10;
	sub_82322F98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82323B18:
	// addi r11,r6,-6
	ctx.r11.s64 = ctx.r6.s64 + -6;
	// stw r6,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r6.u32);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bgt cr6,0x82323dc4
	if (ctx.cr6.gt) goto loc_82323DC4;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// addi r12,r12,15168
	ctx.r12.s64 = ctx.r12.s64 + 15168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82323C60;
	case 1:
		goto loc_82323DC4;
	case 2:
		goto loc_82323DC4;
	case 3:
		goto loc_82323D28;
	case 4:
		goto loc_82323DC4;
	case 5:
		goto loc_82323DC4;
	case 6:
		goto loc_82323DC4;
	case 7:
		goto loc_82323DC4;
	case 8:
		goto loc_82323BF4;
	case 9:
		goto loc_82323DC4;
	case 10:
		goto loc_82323B9C;
	case 11:
		goto loc_82323BC8;
	case 12:
		goto loc_82323DC4;
	case 13:
		goto loc_82323DC4;
	case 14:
		goto loc_82323C34;
	case 15:
		goto loc_82323DC4;
	case 16:
		goto loc_82323DC4;
	case 17:
		goto loc_82323DC4;
	case 18:
		goto loc_82323DC4;
	case 19:
		goto loc_82323DC4;
	case 20:
		goto loc_82323D54;
	case 21:
		goto loc_82323DC4;
	case 22:
		goto loc_82323C78;
	default:
		__builtin_unreachable();
	}
	// lwz r17,15456(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15456);
	// lwz r17,15812(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15812);
	// lwz r17,15812(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15812);
	// lwz r17,15656(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15656);
	// lwz r17,15812(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15812);
	// lwz r17,15812(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15812);
	// lwz r17,15812(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15812);
	// lwz r17,15812(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15812);
	// lwz r17,15348(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15348);
	// lwz r17,15812(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15812);
	// lwz r17,15260(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15260);
	// lwz r17,15304(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15304);
	// lwz r17,15812(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15812);
	// lwz r17,15812(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15812);
	// lwz r17,15412(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15412);
	// lwz r17,15812(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15812);
	// lwz r17,15812(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15812);
	// lwz r17,15812(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15812);
	// lwz r17,15812(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15812);
	// lwz r17,15812(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15812);
	// lwz r17,15700(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15700);
	// lwz r17,15812(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15812);
	// lwz r17,15480(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 15480);
loc_82323B9C:
	// lis r3,-17864
	ctx.r3.s64 = -1170735104;
	// lis r4,-32118
	ctx.r4.s64 = -2104885248;
	// ori r11,r3,59100
	ctx.r11.u64 = ctx.r3.u64 | 59100;
	// ori r4,r4,14497
	ctx.r4.u64 = ctx.r4.u64 | 14497;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82323BC0;
	sub_820A38E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82323BC8:
	// lis r10,-22828
	ctx.r10.s64 = -1496055808;
	// lis r9,-17864
	ctx.r9.s64 = -1170735104;
	// ori r4,r10,10879
	ctx.r4.u64 = ctx.r10.u64 | 10879;
	// ori r8,r9,59100
	ctx.r8.u64 = ctx.r9.u64 | 59100;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82323BEC;
	sub_820A38E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82323BF4:
	// lis r10,-16294
	ctx.r10.s64 = -1067843584;
	// stw r29,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r29.u32);
	// lis r9,-17864
	ctx.r9.s64 = -1170735104;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r4,r10,61392
	ctx.r4.u64 = ctx.r10.u64 | 61392;
	// ori r8,r9,59435
	ctx.r8.u64 = ctx.r9.u64 | 59435;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r7,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r7.u32);
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stb r11,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82323C2C;
	sub_820A38E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82323C34:
	// lis r7,-27127
	ctx.r7.s64 = -1777795072;
	// lis r3,-17864
	ctx.r3.s64 = -1170735104;
	// ori r4,r7,40895
	ctx.r4.u64 = ctx.r7.u64 | 40895;
	// ori r11,r3,58938
	ctx.r11.u64 = ctx.r3.u64 | 58938;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82323C58;
	sub_820A38E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82323C60:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,9020
	ctx.r3.s64 = ctx.r31.s64 + 9020;
	// bl 0x822f50b0
	ctx.lr = 0x82323C70;
	sub_822F50B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82323C78:
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
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,432(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 432);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82323CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r6,52(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82323ce0
	if (ctx.cr6.eq) goto loc_82323CE0;
	// lbz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82323ce0
	if (!ctx.cr6.eq) goto loc_82323CE0;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// lbz r4,49(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82323ce0
	if (!ctx.cr6.eq) goto loc_82323CE0;
	// lbz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82323ce0
	if (ctx.cr6.eq) goto loc_82323CE0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82363ce0
	ctx.lr = 0x82323CE0;
	sub_82363CE0(ctx, base);
loc_82323CE0:
	// addi r3,r31,6944
	ctx.r3.s64 = ctx.r31.s64 + 6944;
	// lwz r4,11896(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11896);
	// bl 0x822f4c08
	ctx.lr = 0x82323CEC;
	sub_822F4C08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,11904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11904);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r31,7920
	ctx.r3.s64 = ctx.r31.s64 + 7920;
	// lfs f1,-1608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1608);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f7448
	ctx.lr = 0x82323D0C;
	sub_822F7448(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r29.u32);
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stb r9,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82323D28:
	// lis r8,-2083
	ctx.r8.s64 = -136511488;
	// lis r7,-17864
	ctx.r7.s64 = -1170735104;
	// ori r4,r8,56914
	ctx.r4.u64 = ctx.r8.u64 | 56914;
	// ori r3,r7,59507
	ctx.r3.u64 = ctx.r7.u64 | 59507;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r3,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a38e8
	ctx.lr = 0x82323D4C;
	sub_820A38E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82323D54:
	// addi r11,r31,4768
	ctx.r11.s64 = ctx.r31.s64 + 4768;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,248(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 248, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82323D70:
	// bl 0x822ee320
	ctx.lr = 0x82323D74;
	sub_822EE320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822efb38
	ctx.lr = 0x82323D7C;
	sub_822EFB38(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x822ebdb8
	ctx.lr = 0x82323D84;
	sub_822EBDB8(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r10,11892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// mulli r10,r10,5440
	ctx.r10.s64 = ctx.r10.s64 * 5440;
	// addis r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 2228224;
	// addi r11,r11,21248
	ctx.r11.s64 = ctx.r11.s64 + 21248;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82301e08
	ctx.lr = 0x82323DA4;
	sub_82301E08(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r7,r8,16294
	ctx.r7.u64 = ctx.r8.u64 | 16294;
	// stb r9,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r9.u8);
	// stbx r10,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
loc_82323DC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82323DCC"))) PPC_WEAK_FUNC(sub_82323DCC);
PPC_FUNC_IMPL(__imp__sub_82323DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82323DD0"))) PPC_WEAK_FUNC(sub_82323DD0);
PPC_FUNC_IMPL(__imp__sub_82323DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,20088
	ctx.r11.s64 = ctx.r11.s64 + 20088;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,-1592(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1592);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,4(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lbz r5,2(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f4,-16(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lbz r8,3(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,8
	ctx.r11.s64 = 8;
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,12(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lbz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,16(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lbz r8,5(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f1
	ctx.f12.f64 = double(ctx.f1.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,20(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lbz r5,6(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,24(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lbz r9,7(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f3,-16(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,28(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
loc_82323F14:
	// lbzx r6,r11,r3
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f10,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x82323f14
	if (ctx.cr6.lt) goto loc_82323F14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82323F4C"))) PPC_WEAK_FUNC(sub_82323F4C);
PPC_FUNC_IMPL(__imp__sub_82323F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82323F50"))) PPC_WEAK_FUNC(sub_82323F50);
PPC_FUNC_IMPL(__imp__sub_82323F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82323F58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82323f84
	if (ctx.cr6.eq) goto loc_82323F84;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x823991c0
	ctx.lr = 0x82323F84;
	sub_823991C0(ctx, base);
loc_82323F84:
	// lhz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82323fec
	if (!ctx.cr6.gt) goto loc_82323FEC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r28,0
	ctx.r28.s64 = 0;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// ble cr6,0x82323fec
	if (!ctx.cr6.gt) goto loc_82323FEC;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82323FB4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// stw r28,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r28.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r4.u32);
	// bl 0x823991c0
	ctx.lr = 0x82323FD4;
	sub_823991C0(ctx, base);
	// lhz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82323fb4
	if (ctx.cr6.lt) goto loc_82323FB4;
loc_82323FEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82323FF4"))) PPC_WEAK_FUNC(sub_82323FF4);
PPC_FUNC_IMPL(__imp__sub_82323FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82323FF8"))) PPC_WEAK_FUNC(sub_82323FF8);
PPC_FUNC_IMPL(__imp__sub_82323FF8) {
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82324030
	if (ctx.cr6.eq) goto loc_82324030;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x823991c0
	ctx.lr = 0x82324030;
	sub_823991C0(ctx, base);
loc_82324030:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82324058
	if (ctx.cr6.eq) goto loc_82324058;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// bl 0x823991c0
	ctx.lr = 0x82324058;
	sub_823991C0(ctx, base);
loc_82324058:
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

__attribute__((alias("__imp__sub_8232406C"))) PPC_WEAK_FUNC(sub_8232406C);
PPC_FUNC_IMPL(__imp__sub_8232406C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324070"))) PPC_WEAK_FUNC(sub_82324070);
PPC_FUNC_IMPL(__imp__sub_82324070) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,18
	ctx.r9.s64 = 18;
	// lfs f0,20048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// lfs f13,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stfs f13,572(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// stb r11,549(r31)
	PPC_STORE_U8(ctx.r31.u32 + 549, ctx.r11.u8);
	// addi r10,r31,164
	ctx.r10.s64 = ctx.r31.s64 + 164;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// stb r11,548(r31)
	PPC_STORE_U8(ctx.r31.u32 + 548, ctx.r11.u8);
	// stb r11,560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 560, ctx.r11.u8);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823240D0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823240d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823240D0;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82324148
	if (!ctx.cr6.eq) goto loc_82324148;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x8210cf48
	ctx.lr = 0x823240FC;
	sub_8210CF48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,64
	ctx.r5.s64 = 4194304;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// addis r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 4194304;
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x82347590
	ctx.lr = 0x8232411C;
	sub_82347590(ctx, base);
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,800
	ctx.r5.s64 = 52428800;
	// addis r4,r10,128
	ctx.r4.s64 = ctx.r10.s64 + 8388608;
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x82347590
	ctx.lr = 0x82324134;
	sub_82347590(ctx, base);
	// lwz r31,240(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215ff60
	ctx.lr = 0x82324140;
	sub_8215FF60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821449f0
	ctx.lr = 0x82324148;
	sub_821449F0(ctx, base);
loc_82324148:
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

__attribute__((alias("__imp__sub_8232415C"))) PPC_WEAK_FUNC(sub_8232415C);
PPC_FUNC_IMPL(__imp__sub_8232415C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324160"))) PPC_WEAK_FUNC(sub_82324160);
PPC_FUNC_IMPL(__imp__sub_82324160) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,532(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324168"))) PPC_WEAK_FUNC(sub_82324168);
PPC_FUNC_IMPL(__imp__sub_82324168) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,549(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 549);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232417c
	if (ctx.cr6.eq) goto loc_8232417C;
	// lwz r3,528(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// blr 
	return;
loc_8232417C:
	// lwz r3,532(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324184"))) PPC_WEAK_FUNC(sub_82324184);
PPC_FUNC_IMPL(__imp__sub_82324184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324188"))) PPC_WEAK_FUNC(sub_82324188);
PPC_FUNC_IMPL(__imp__sub_82324188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f13,580(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823241A0"))) PPC_WEAK_FUNC(sub_823241A0);
PPC_FUNC_IMPL(__imp__sub_823241A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,596
	ctx.r3.s64 = ctx.r3.s64 + 596;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823241A8"))) PPC_WEAK_FUNC(sub_823241A8);
PPC_FUNC_IMPL(__imp__sub_823241A8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r3,596
	ctx.r3.s64 = ctx.r3.s64 + 596;
	// b 0x82361f88
	sub_82361F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823241B8"))) PPC_WEAK_FUNC(sub_823241B8);
PPC_FUNC_IMPL(__imp__sub_823241B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// stb r4,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r4.u8);
	// stb r4,550(r31)
	PPC_STORE_U8(ctx.r31.u32 + 550, ctx.r4.u8);
	// beq cr6,0x82324214
	if (ctx.cr6.eq) goto loc_82324214;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821040d8
	ctx.lr = 0x823241F4;
	sub_821040D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82324214
	if (!ctx.cr6.eq) goto loc_82324214;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r8,r9,16293
	ctx.r8.u64 = ctx.r9.u64 | 16293;
	// stbx r11,r30,r8
	PPC_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u8);
	// b 0x82324244
	goto loc_82324244;
loc_82324214:
	// lbz r7,550(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 550);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82324244
	if (!ctx.cr6.eq) goto loc_82324244;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821040d8
	ctx.lr = 0x82324228;
	sub_821040D8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82324244
	if (ctx.cr6.eq) goto loc_82324244;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r4,r5,16294
	ctx.r4.u64 = ctx.r5.u64 | 16294;
	// stbx r11,r30,r4
	PPC_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u8);
loc_82324244:
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

__attribute__((alias("__imp__sub_8232425C"))) PPC_WEAK_FUNC(sub_8232425C);
PPC_FUNC_IMPL(__imp__sub_8232425C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324260"))) PPC_WEAK_FUNC(sub_82324260);
PPC_FUNC_IMPL(__imp__sub_82324260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82324268;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r28,r29,116
	ctx.r28.s64 = ctx.r29.s64 + 116;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823475b0
	ctx.lr = 0x82324280;
	sub_823475B0(ctx, base);
	// lwz r9,540(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823242c4
	if (!ctx.cr6.gt) goto loc_823242C4;
	// addi r10,r29,164
	ctx.r10.s64 = ctx.r29.s64 + 164;
loc_82324298:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x823242b8
	if (ctx.cr6.gt) goto loc_823242B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82324298
	if (ctx.cr6.lt) goto loc_82324298;
loc_823242B8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823242c4
	if (!ctx.cr6.gt) goto loc_823242C4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_823242C4:
	// addi r6,r11,41
	ctx.r6.s64 = ctx.r11.s64 + 41;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r31,r4,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r4.s64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82324310
	if (!ctx.cr6.gt) goto loc_82324310;
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
loc_823242E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823475c8
	ctx.lr = 0x823242F4;
	sub_823475C8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d5960
	ctx.lr = 0x82324300;
	sub_820D5960(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x823242e8
	if (ctx.cr6.gt) goto loc_823242E8;
loc_82324310:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823475c8
	ctx.lr = 0x8232431C;
	sub_823475C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324328"))) PPC_WEAK_FUNC(sub_82324328);
PPC_FUNC_IMPL(__imp__sub_82324328) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,540(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// stb r10,551(r11)
	PPC_STORE_U8(ctx.r11.u32 + 551, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232433C"))) PPC_WEAK_FUNC(sub_8232433C);
PPC_FUNC_IMPL(__imp__sub_8232433C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324340"))) PPC_WEAK_FUNC(sub_82324340);
PPC_FUNC_IMPL(__imp__sub_82324340) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// li r9,-1
	ctx.r9.s64 = -1;
	// ori r7,r8,56220
	ctx.r7.u64 = ctx.r8.u64 | 56220;
	// stb r11,552(r3)
	PPC_STORE_U8(ctx.r3.u32 + 552, ctx.r11.u8);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stw r10,564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 564, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// stw r9,536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 536, ctx.r9.u32);
	// sthx r10,r11,r7
	PPC_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324378"))) PPC_WEAK_FUNC(sub_82324378);
PPC_FUNC_IMPL(__imp__sub_82324378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82324380;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,41
	ctx.r11.s64 = ctx.r4.s64 + 41;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r31,140
	ctx.r30.s64 = ctx.r31.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r28,r11,76
	ctx.r28.s64 = ctx.r11.s64 + 76;
	// bl 0x823475b0
	ctx.lr = 0x823243A8;
	sub_823475B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r4,r28,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r28.s64;
	// bl 0x823475c8
	ctx.lr = 0x823243B8;
	sub_823475C8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823243D4"))) PPC_WEAK_FUNC(sub_823243D4);
PPC_FUNC_IMPL(__imp__sub_823243D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823243D8"))) PPC_WEAK_FUNC(sub_823243D8);
PPC_FUNC_IMPL(__imp__sub_823243D8) {
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
	// lbz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82324404
	if (!ctx.cr6.eq) goto loc_82324404;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82324404:
	// lbz r10,549(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 549);
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82324440
	if (ctx.cr6.eq) goto loc_82324440;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82324428
	if (!ctx.cr6.eq) goto loc_82324428;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82324428:
	// bl 0x820bed80
	ctx.lr = 0x8232442C;
	sub_820BED80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82324440:
	// bl 0x820bed10
	ctx.lr = 0x82324444;
	sub_820BED10(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324458"))) PPC_WEAK_FUNC(sub_82324458);
PPC_FUNC_IMPL(__imp__sub_82324458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82324460;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 548);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82324480
	if (!ctx.cr6.eq) goto loc_82324480;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82324480:
	// lbz r10,549(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 549);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823244c4
	if (ctx.cr6.eq) goto loc_823244C4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// bne cr6,0x823244ac
	if (!ctx.cr6.eq) goto loc_823244AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820beaa0
	ctx.lr = 0x823244A0;
	sub_820BEAA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_823244AC:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820bec48
	ctx.lr = 0x823244B8;
	sub_820BEC48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_823244C4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x823244f8
	if (!ctx.cr6.eq) goto loc_823244F8;
	// addi r30,r3,256
	ctx.r30.s64 = ctx.r3.s64 + 256;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820be9d0
	ctx.lr = 0x823244E0;
	sub_820BE9D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820beaa0
	ctx.lr = 0x823244EC;
	sub_820BEAA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_823244F8:
	// addi r30,r4,-1
	ctx.r30.s64 = ctx.r4.s64 + -1;
	// addi r29,r3,256
	ctx.r29.s64 = ctx.r3.s64 + 256;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820beb80
	ctx.lr = 0x82324514;
	sub_820BEB80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820bec48
	ctx.lr = 0x82324524;
	sub_820BEC48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324530"))) PPC_WEAK_FUNC(sub_82324530);
PPC_FUNC_IMPL(__imp__sub_82324530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r8,r11,28544
	ctx.r8.s64 = ctx.r11.s64 + 28544;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r10,540(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 540);
	// lfs f0,36(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// beq cr6,0x82324554
	if (ctx.cr6.eq) goto loc_82324554;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82324554:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x823245cc
	if (ctx.cr6.lt) goto loc_823245CC;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8232456C:
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f13,56(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bso cr6,0x82324580
	if (ctx.cr6.so) goto loc_82324580;
	// bge cr6,0x8232461c
	if (!ctx.cr6.lt) goto loc_8232461C;
loc_82324580:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f12,56(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bso cr6,0x82324594
	if (ctx.cr6.so) goto loc_82324594;
	// bge cr6,0x82324608
	if (!ctx.cr6.lt) goto loc_82324608;
loc_82324594:
	// lwz r5,-4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lfs f11,56(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bso cr6,0x823245a8
	if (ctx.cr6.so) goto loc_823245A8;
	// bge cr6,0x82324610
	if (!ctx.cr6.lt) goto loc_82324610;
loc_823245A8:
	// lwz r4,-8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lfs f10,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bso cr6,0x823245bc
	if (ctx.cr6.so) goto loc_823245BC;
	// bge cr6,0x82324618
	if (!ctx.cr6.lt) goto loc_82324618;
loc_823245BC:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8232456c
	if (ctx.cr6.gt) goto loc_8232456C;
loc_823245CC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82324620
	if (!ctx.cr6.gt) goto loc_82324620;
	// addi r3,r11,41
	ctx.r3.s64 = ctx.r11.s64 + 41;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_823245E0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f9,56(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bso cr6,0x823245f4
	if (ctx.cr6.so) goto loc_823245F4;
	// bge cr6,0x8232461c
	if (!ctx.cr6.lt) goto loc_8232461C;
loc_823245F4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823245e0
	if (ctx.cr6.gt) goto loc_823245E0;
	// b 0x8232461c
	goto loc_8232461C;
loc_82324608:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8232461c
	goto loc_8232461C;
loc_82324610:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x8232461c
	goto loc_8232461C;
loc_82324618:
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
loc_8232461C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82324620:
	// blt cr6,0x82324658
	if (ctx.cr6.lt) goto loc_82324658;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,556(r9)
	PPC_STORE_U32(ctx.r9.u32 + 556, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r6,552(r9)
	PPC_STORE_U8(ctx.r9.u32 + 552, ctx.r6.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,564(r9)
	PPC_STORE_U32(ctx.r9.u32 + 564, ctx.r5.u32);
	// stw r4,536(r9)
	PPC_STORE_U32(ctx.r9.u32 + 536, ctx.r4.u32);
	// ori r9,r10,56220
	ctx.r9.u64 = ctx.r10.u64 | 56220;
	// sthx r11,r8,r9
	PPC_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u16);
	// blr 
	return;
loc_82324658:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324660"))) PPC_WEAK_FUNC(sub_82324660);
PPC_FUNC_IMPL(__imp__sub_82324660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r11,28544
	ctx.r7.s64 = ctx.r11.s64 + 28544;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r9,540(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 540);
	// lfs f13,36(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// beq cr6,0x82324684
	if (ctx.cr6.eq) goto loc_82324684;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82324684:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x823246f8
	if (ctx.cr6.lt) goto loc_823246F8;
	// addi r10,r8,168
	ctx.r10.s64 = ctx.r8.s64 + 168;
loc_82324694:
	// lwz r6,-4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lfs f12,56(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bso cr6,0x823246a8
	if (ctx.cr6.so) goto loc_823246A8;
	// ble cr6,0x82324748
	if (!ctx.cr6.gt) goto loc_82324748;
loc_823246A8:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f11,56(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bso cr6,0x823246bc
	if (ctx.cr6.so) goto loc_823246BC;
	// ble cr6,0x82324734
	if (!ctx.cr6.gt) goto loc_82324734;
loc_823246BC:
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f10,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bso cr6,0x823246d0
	if (ctx.cr6.so) goto loc_823246D0;
	// ble cr6,0x8232473c
	if (!ctx.cr6.gt) goto loc_8232473C;
loc_823246D0:
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f9,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bso cr6,0x823246e4
	if (ctx.cr6.so) goto loc_823246E4;
	// ble cr6,0x82324744
	if (!ctx.cr6.gt) goto loc_82324744;
loc_823246E4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r6,r9,-3
	ctx.r6.s64 = ctx.r9.s64 + -3;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82324694
	if (ctx.cr6.lt) goto loc_82324694;
loc_823246F8:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8232474c
	if (!ctx.cr6.lt) goto loc_8232474C;
	// addi r5,r11,41
	ctx.r5.s64 = ctx.r11.s64 + 41;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8232470C:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f8,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bso cr6,0x82324720
	if (ctx.cr6.so) goto loc_82324720;
	// ble cr6,0x82324748
	if (!ctx.cr6.gt) goto loc_82324748;
loc_82324720:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8232470c
	if (ctx.cr6.lt) goto loc_8232470C;
	// b 0x82324748
	goto loc_82324748;
loc_82324734:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82324748
	goto loc_82324748;
loc_8232473C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x82324748
	goto loc_82324748;
loc_82324744:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82324748:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
loc_8232474C:
	// bne cr6,0x8232476c
	if (!ctx.cr6.eq) goto loc_8232476C;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lfs f7,56(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// ble cr6,0x8232476c
	if (!ctx.cr6.gt) goto loc_8232476C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8232476C:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823247a8
	if (!ctx.cr6.lt) goto loc_823247A8;
	// stw r11,556(r8)
	PPC_STORE_U32(ctx.r8.u32 + 556, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// ori r9,r10,56220
	ctx.r9.u64 = ctx.r10.u64 | 56220;
	// stw r11,564(r8)
	PPC_STORE_U32(ctx.r8.u32 + 564, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r5,552(r8)
	PPC_STORE_U8(ctx.r8.u32 + 552, ctx.r5.u8);
	// stw r4,536(r8)
	PPC_STORE_U32(ctx.r8.u32 + 536, ctx.r4.u32);
	// sthx r11,r7,r9
	PPC_STORE_U16(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u16);
	// blr 
	return;
loc_823247A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823247B0"))) PPC_WEAK_FUNC(sub_823247B0);
PPC_FUNC_IMPL(__imp__sub_823247B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823247C0"))) PPC_WEAK_FUNC(sub_823247C0);
PPC_FUNC_IMPL(__imp__sub_823247C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x823247C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,11600
	ctx.r31.s64 = ctx.r11.s64 + 11600;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r4,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r11,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.r11.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r11,r11,20240
	ctx.r11.s64 = ctx.r11.s64 + 20240;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r10,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r10.u32);
	// ld r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r10,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r10.u64);
	// lbz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 72);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r10.u32);
	// ld r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// std r10,432(r31)
	PPC_STORE_U64(ctx.r31.u32 + 432, ctx.r10.u64);
	// lbz r6,73(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 73);
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// stw r10,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r10.u32);
	// ld r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// std r10,440(r31)
	PPC_STORE_U64(ctx.r31.u32 + 440, ctx.r10.u64);
	// lbz r5,74(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 74);
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// stw r10,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r10.u32);
	// ld r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// std r10,448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 448, ctx.r10.u64);
	// lbz r3,75(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 75);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// stw r10,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r10.u32);
	// ld r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// std r10,456(r31)
	PPC_STORE_U64(ctx.r31.u32 + 456, ctx.r10.u64);
	// lbz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r10,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r10.u32);
	// ld r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 64);
	// std r10,464(r31)
	PPC_STORE_U64(ctx.r31.u32 + 464, ctx.r10.u64);
	// lbz r6,77(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 77);
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// stw r10,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
loc_82324890:
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823248d0
	if (ctx.cr6.eq) goto loc_823248D0;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplwi cr6,r7,120
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 120, ctx.xer);
	// blt cr6,0x82324890
	if (ctx.cr6.lt) goto loc_82324890;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,0
	ctx.r8.s64 = 0;
loc_823248B8:
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823248f8
	if (!ctx.cr6.eq) goto loc_823248F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_823248D0:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r29,r11,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// b 0x823248b8
	goto loc_823248B8;
loc_823248F8:
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// stb r10,637(r31)
	PPC_STORE_U8(ctx.r31.u32 + 637, ctx.r10.u8);
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r10,20656
	ctx.r3.s64 = ctx.r10.s64 + 20656;
	// stb r11,644(r31)
	PPC_STORE_U8(ctx.r31.u32 + 644, ctx.r11.u8);
	// bl 0x822d2c68
	ctx.lr = 0x8232491C;
	sub_822D2C68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8280
	ctx.lr = 0x82324928;
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
	ctx.lr = 0x8232493C;
	sub_820FAD88(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// bl 0x820faf08
	ctx.lr = 0x8232494C;
	sub_820FAF08(ctx, base);
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// addi r10,r11,12440
	ctx.r10.s64 = ctx.r11.s64 + 12440;
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82324960:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82324960
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82324960;
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,12416
	ctx.r11.s64 = ctx.r11.s64 + 12416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// stw r9,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r9.u32);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
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
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// lwz r9,84(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r10,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r10.u32);
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// bl 0x82203578
	ctx.lr = 0x823249BC;
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
	ctx.lr = 0x823249E4;
	sub_820A38E8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821f6a20
	ctx.lr = 0x823249F0;
	sub_821F6A20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823249FC"))) PPC_WEAK_FUNC(sub_823249FC);
PPC_FUNC_IMPL(__imp__sub_823249FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324A00"))) PPC_WEAK_FUNC(sub_82324A00);
PPC_FUNC_IMPL(__imp__sub_82324A00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,240(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// b 0x82160138
	sub_82160138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324A08"))) PPC_WEAK_FUNC(sub_82324A08);
PPC_FUNC_IMPL(__imp__sub_82324A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82324A10;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32085
	ctx.r30.s64 = -2102722560;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,28388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82324a6c
	if (!ctx.cr6.eq) goto loc_82324A6C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,20880
	ctx.r4.s64 = ctx.r11.s64 + 20880;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x82324A40;
	sub_8210FCF8(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stw r3,28388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28388, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,8312
	ctx.r31.s64 = ctx.r11.s64 + 8312;
	// li r3,221
	ctx.r3.s64 = 221;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821896e8
	ctx.lr = 0x82324A5C;
	sub_821896E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,222
	ctx.r3.s64 = 222;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// bl 0x821896e8
	ctx.lr = 0x82324A6C;
	sub_821896E8(ctx, base);
loc_82324A6C:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,28544
	ctx.r28.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// ori r10,r11,37004
	ctx.r10.u64 = ctx.r11.u64 | 37004;
	// lwzx r11,r28,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82324b14
	if (!ctx.cr6.gt) goto loc_82324B14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r25,472
	ctx.r31.s64 = ctx.r25.s64 + 472;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r27,4
	ctx.r27.s64 = 4;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
loc_82324AA4:
	// addis r11,r28,33
	ctx.r11.s64 = ctx.r28.s64 + 2162688;
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r6,r31,44
	ctx.r6.s64 = ctx.r31.s64 + 44;
	// stfs f31,-8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r30.u32);
	// stw r30,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r30.u32);
	// bl 0x820b7630
	ctx.lr = 0x82324AEC;
	sub_820B7630(ctx, base);
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r8,r9,37004
	ctx.r8.u64 = ctx.r9.u64 | 37004;
	// stb r30,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r30.u8);
	// addi r31,r31,512
	ctx.r31.s64 = ctx.r31.s64 + 512;
	// lwzx r11,r28,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82324aa4
	if (ctx.cr6.lt) goto loc_82324AA4;
loc_82324B14:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,432(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 432);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82324B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r25,1040
	ctx.r11.s64 = ctx.r25.s64 + 1040;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82324B48:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82324b48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82324B48;
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
	// bne cr6,0x82324bd0
	if (!ctx.cr6.eq) goto loc_82324BD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821041d8
	ctx.lr = 0x82324B78;
	sub_821041D8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82324bd0
	if (!ctx.cr6.eq) goto loc_82324BD0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lwz r4,552(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// bl 0x820fceb0
	ctx.lr = 0x82324B9C;
	sub_820FCEB0(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-6648
	ctx.r10.s64 = ctx.r10.s64 + -6648;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,3988
	ctx.r6.s64 = ctx.r10.s64 + 3988;
	// addi r7,r25,1064
	ctx.r7.s64 = ctx.r25.s64 + 1064;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfsx f0,r5,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r7
	PPC_STORE_U32(ctx.r7.u32, ctx.f13.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82324BD0:
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r11,r4,65535
	ctx.r11.u64 = ctx.r4.u64 | 65535;
	// stw r11,1064(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82324BEC"))) PPC_WEAK_FUNC(sub_82324BEC);
PPC_FUNC_IMPL(__imp__sub_82324BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324BF0"))) PPC_WEAK_FUNC(sub_82324BF0);
PPC_FUNC_IMPL(__imp__sub_82324BF0) {
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
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x82324C18;
	sub_8210B3C8(ctx, base);
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r11,37004
	ctx.r10.u64 = ctx.r11.u64 | 37004;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82324d10
	if (!ctx.cr6.gt) goto loc_82324D10;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r31,460
	ctx.r6.s64 = ctx.r31.s64 + 460;
	// lfs f0,20084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20084);
	ctx.f0.f64 = double(temp.f32);
loc_82324C3C:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r6,-444
	ctx.r8.s64 = ctx.r6.s64 + -444;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82324c74
	if (!ctx.cr6.gt) goto loc_82324C74;
	// addi r11,r6,-124
	ctx.r11.s64 = ctx.r6.s64 + -124;
loc_82324C54:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fadds f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82324c54
	if (ctx.cr6.lt) goto loc_82324C54;
loc_82324C74:
	// lwz r4,444(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 444);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82324cf4
	if (!ctx.cr6.gt) goto loc_82324CF4;
	// addi r9,r8,160
	ctx.r9.s64 = ctx.r8.s64 + 160;
	// addi r11,r8,364
	ctx.r11.s64 = ctx.r8.s64 + 364;
loc_82324C8C:
	// lfs f11,-44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -44);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x82324cdc
	if (ctx.cr6.lt) goto loc_82324CDC;
	// bso cr6,0x82324cdc
	if (ctx.cr6.so) goto loc_82324CDC;
	// lwz r3,444(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 444);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82324ccc
	if (!ctx.cr6.lt) goto loc_82324CCC;
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// lfs f10,-40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,-44(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -44, temp.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r3,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
loc_82324CCC:
	// lwz r7,444(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 444);
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// stw r4,444(r8)
	PPC_STORE_U32(ctx.r8.u32 + 444, ctx.r4.u32);
	// b 0x82324ce8
	goto loc_82324CE8;
loc_82324CDC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82324CE8:
	// lwz r3,444(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 444);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82324c8c
	if (ctx.cr6.lt) goto loc_82324C8C;
loc_82324CF4:
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// ori r10,r11,37004
	ctx.r10.u64 = ctx.r11.u64 | 37004;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82324c3c
	if (ctx.cr6.lt) goto loc_82324C3C;
loc_82324D10:
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

__attribute__((alias("__imp__sub_82324D28"))) PPC_WEAK_FUNC(sub_82324D28);
PPC_FUNC_IMPL(__imp__sub_82324D28) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,524(r9)
	PPC_STORE_U8(ctx.r9.u32 + 524, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324D3C"))) PPC_WEAK_FUNC(sub_82324D3C);
PPC_FUNC_IMPL(__imp__sub_82324D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324D40"))) PPC_WEAK_FUNC(sub_82324D40);
PPC_FUNC_IMPL(__imp__sub_82324D40) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,524(r9)
	PPC_STORE_U8(ctx.r9.u32 + 524, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324D54"))) PPC_WEAK_FUNC(sub_82324D54);
PPC_FUNC_IMPL(__imp__sub_82324D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324D58"))) PPC_WEAK_FUNC(sub_82324D58);
PPC_FUNC_IMPL(__imp__sub_82324D58) {
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
	// rlwinm r11,r4,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// lbz r10,509(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 509);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82324e80
	if (ctx.cr6.eq) goto loc_82324E80;
	// lis r9,-32085
	ctx.r9.s64 = -2102722560;
	// stw r5,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r5.u32);
	// mulli r8,r4,19200
	ctx.r8.s64 = ctx.r4.s64 * 19200;
	// stw r6,464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 464, ctx.r6.u32);
	// addi r9,r9,28544
	ctx.r9.s64 = ctx.r9.s64 + 28544;
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// addis r9,r9,35
	ctx.r9.s64 = ctx.r9.s64 + 2293760;
	// addi r3,r9,-14996
	ctx.r3.s64 = ctx.r9.s64 + -14996;
	// lwz r9,440(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// lfsx f0,r8,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,452(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// lwz r8,488(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// stfs f0,468(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 468, temp.u32);
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r3,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r3.u32);
	// stw r10,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r10.u32);
	// bge cr6,0x82324e18
	if (!ctx.cr6.lt) goto loc_82324E18;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lwz r10,440(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// addi r7,r10,60
	ctx.r7.s64 = ctx.r10.s64 + 60;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r10,440(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// addi r10,r10,70
	ctx.r10.s64 = ctx.r10.s64 + 70;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r10,440(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 440);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 440, ctx.r8.u32);
loc_82324E18:
	// lwz r7,452(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// lwz r6,1064(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82324e80
	if (!ctx.cr6.lt) goto loc_82324E80;
	// lwz r5,520(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82324e80
	if (!ctx.cr6.eq) goto loc_82324E80;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mulli r3,r4,1104
	ctx.r3.s64 = ctx.r4.s64 * 1104;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
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
	// li r4,110
	ctx.r4.s64 = 110;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8219c750
	ctx.lr = 0x82324E74;
	sub_8219C750(ctx, base);
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// ori r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 65535;
	// stw r7,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r7.u32);
loc_82324E80:
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

__attribute__((alias("__imp__sub_82324E98"))) PPC_WEAK_FUNC(sub_82324E98);
PPC_FUNC_IMPL(__imp__sub_82324E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// blt cr6,0x82324f00
	if (ctx.cr6.lt) goto loc_82324F00;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// ble 0x82324f00
	if (!ctx.cr0.gt) goto loc_82324F00;
	// addi r9,r11,160
	ctx.r9.s64 = ctx.r11.s64 + 160;
	// addi r10,r11,364
	ctx.r10.s64 = ctx.r11.s64 + 364;
loc_82324EC8:
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// lfs f0,-40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-44(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -44, temp.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r3,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r3.u32);
	// lwz r4,40(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r4,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r3,444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82324ec8
	if (ctx.cr6.lt) goto loc_82324EC8;
loc_82324F00:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// addi r8,r10,20
	ctx.r8.s64 = ctx.r10.s64 + 20;
	// lfs f0,2864(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r9,r7,r11
	PPC_STORE_U64(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u64);
	// lwz r10,444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// addi r4,r10,80
	ctx.r4.s64 = ctx.r10.s64 + 80;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r3,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// lwz r10,444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// addi r10,r10,90
	ctx.r10.s64 = ctx.r10.s64 + 90;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// lwz r10,444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// addi r8,r10,100
	ctx.r8.s64 = ctx.r10.s64 + 100;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r10,444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82324F5C"))) PPC_WEAK_FUNC(sub_82324F5C);
PPC_FUNC_IMPL(__imp__sub_82324F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82324F60"))) PPC_WEAK_FUNC(sub_82324F60);
PPC_FUNC_IMPL(__imp__sub_82324F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82324F68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,432(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82324F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,64(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82325020
	if (ctx.cr6.eq) goto loc_82325020;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mulli r10,r31,19200
	ctx.r10.s64 = ctx.r31.s64 * 19200;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r11,r11,-28496
	ctx.r11.s64 = ctx.r11.s64 + -28496;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,13520(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13520);
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82325020
	if (ctx.cr6.eq) goto loc_82325020;
	// lbz r5,15219(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15219);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82325020
	if (!ctx.cr6.eq) goto loc_82325020;
	// rlwinm r11,r31,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0xFFFFFE00;
	// lis r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// ori r10,r4,50000
	ctx.r10.u64 = ctx.r4.u64 | 50000;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r5,r6,16216
	ctx.r5.u64 = ctx.r6.u64 | 16216;
	// lwz r3,468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// lwz r9,500(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r8.u32);
	// stw r7,500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 500, ctx.r7.u32);
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
	ctx.lr = 0x82325020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82325020:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82325028"))) PPC_WEAK_FUNC(sub_82325028);
PPC_FUNC_IMPL(__imp__sub_82325028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82325030;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r11,r29,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 9) & 0xFFFFFE00;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lbz r11,509(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 509);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82325178
	if (ctx.cr6.eq) goto loc_82325178;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r28,r11,26080
	ctx.r28.s64 = ctx.r11.s64 + 26080;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821041a8
	ctx.lr = 0x82325064;
	sub_821041A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8232511c
	if (!ctx.cr6.eq) goto loc_8232511C;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f9,448(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// addi r11,r11,20080
	ctx.r11.s64 = ctx.r11.s64 + 20080;
	// lfs f11,-36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x8232511c
	if (ctx.cr6.gt) goto loc_8232511C;
	// bso cr6,0x8232511c
	if (ctx.cr6.so) goto loc_8232511C;
	// lwz r9,452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// lfs f0,284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// lfs f12,156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// lfd f8,88(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmadds f3,f4,f0,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f5,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 / ctx.f3.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x823250fc
	if (ctx.cr6.gt) goto loc_823250FC;
	// bso cr6,0x823250fc
	if (ctx.cr6.so) goto loc_823250FC;
	// cmpwi cr6,r30,100
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 100, ctx.xer);
	// ble cr6,0x823250fc
	if (!ctx.cr6.gt) goto loc_823250FC;
	// fsubs f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fadds f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
loc_823250FC:
	// fadds f0,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// fsubs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x8232511c
	if (!ctx.cr6.gt) goto loc_8232511C;
	// fsubs f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
loc_8232511C:
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82325178
	if (ctx.cr6.eq) goto loc_82325178;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82325138
	if (ctx.cr6.eq) goto loc_82325138;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82325138:
	// addi r6,r4,123
	ctx.r6.s64 = ctx.r4.s64 + 123;
	// lwz r5,452(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82325178
	if (ctx.cr6.lt) goto loc_82325178;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// stw r4,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r4.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// lwzx r11,r28,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,200(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 200);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82325178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82325178:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82325180"))) PPC_WEAK_FUNC(sub_82325180);
PPC_FUNC_IMPL(__imp__sub_82325180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,525(r11)
	PPC_STORE_U8(ctx.r11.u32 + 525, ctx.r10.u8);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// lfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,464(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 464, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823251A8"))) PPC_WEAK_FUNC(sub_823251A8);
PPC_FUNC_IMPL(__imp__sub_823251A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r9,r11,28544
	ctx.r9.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r10,r11,37004
	ctx.r10.u64 = ctx.r11.u64 | 37004;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r3,464
	ctx.r11.s64 = ctx.r3.s64 + 464;
	// li r7,1
	ctx.r7.s64 = 1;
loc_823251D0:
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// stb r7,61(r11)
	PPC_STORE_U8(ctx.r11.u32 + 61, ctx.r7.u8);
	// lfs f0,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r6,r8,37004
	ctx.r6.u64 = ctx.r8.u64 | 37004;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// lwzx r8,r9,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823251d0
	if (ctx.cr6.lt) goto loc_823251D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82325200"))) PPC_WEAK_FUNC(sub_82325200);
PPC_FUNC_IMPL(__imp__sub_82325200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82325208;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8259bb98
	ctx.lr = 0x82325210;
	__savefpr_24(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r11,3204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3204);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82325238:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82325238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82325238;
	// lwz r7,120(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// rlwinm r10,r27,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r6,124(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lfs f28,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f28.f64 = double(temp.f32);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// add r11,r10,r26
	ctx.r11.u64 = ctx.r10.u64 + ctx.r26.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lwz r3,440(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 440);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f0,20904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20904);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f25,f12
	ctx.f25.f64 = double(float(ctx.f12.f64));
	// frsp f26,f11
	ctx.f26.f64 = double(float(ctx.f11.f64));
	// fmuls f10,f25,f0
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// lfs f0,-1680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1680);
	ctx.f0.f64 = double(temp.f32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f9,f26,f0
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ble cr6,0x82325404
	if (!ctx.cr6.gt) goto loc_82325404;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f7,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// ld r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f5,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// addi r31,r28,240
	ctx.r31.s64 = ctx.r28.s64 + 240;
	// lfs f4,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f4.f64 = double(temp.f32);
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// lfs f3,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f27.f64 = double(temp.f32);
loc_823252FC:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f29,f0
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f9,f3,f13
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmuls f8,f1,f13
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f24,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f24.f64 = double(temp.f32);
	// fadds f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fadds f11,f24,f11
	ctx.f11.f64 = double(float(ctx.f24.f64 + ctx.f11.f64));
	// lfs f24,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f24.f64 = double(temp.f32);
	// fadds f0,f24,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 + ctx.f0.f64));
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fmuls f9,f6,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f8,f4,f12
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fadds f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f11,f8,f10
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x823253bc
	if (ctx.cr6.lt) goto loc_823253BC;
	// bso cr6,0x823253bc
	if (ctx.cr6.so) goto loc_823253BC;
	// fres f12,f0
	ctx.f12.f64 = float(1.0 / ctx.f0.f64);
	// fnmsubs f8,f0,f12,f27
	ctx.f8.f64 = double(float(-(ctx.f0.f64 * ctx.f12.f64 - ctx.f27.f64)));
	// fadds f10,f8,f27
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f27.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fnmsubs f9,f0,f12,f27
	ctx.f9.f64 = double(float(-(ctx.f0.f64 * ctx.f12.f64 - ctx.f27.f64)));
	// fadds f8,f9,f27
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f27.f64));
	// fmuls f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f12,f0,f25
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fmuls f10,f0,f26
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x823253c0
	goto loc_823253C0;
loc_823253BC:
	// std r25,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r25.u64);
loc_823253C0:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x823253d4
	if (!ctx.cr6.eq) goto loc_823253D4;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_823253D4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82324e98
	ctx.lr = 0x823253EC;
	sub_82324E98(ctx, base);
	// lwz r7,440(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 440);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823252fc
	if (ctx.cr6.lt) goto loc_823252FC;
loc_82325404:
	// stw r24,440(r28)
	PPC_STORE_U32(ctx.r28.u32 + 440, ctx.r24.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8259bbe4
	ctx.lr = 0x82325414;
	__restfpr_24(ctx, base);
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82325418"))) PPC_WEAK_FUNC(sub_82325418);
PPC_FUNC_IMPL(__imp__sub_82325418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// addi r10,r5,20
	ctx.r10.s64 = ctx.r5.s64 + 20;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r3,r5,90
	ctx.r3.s64 = ctx.r5.s64 + 90;
	// addi r10,r5,100
	ctx.r10.s64 = ctx.r5.s64 + 100;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ldx r4,r4,r11
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + ctx.r11.u32);
	// addi r5,r5,80
	ctx.r5.s64 = ctx.r5.s64 + 80;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// std r4,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lfsx f0,r5,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82325468"))) PPC_WEAK_FUNC(sub_82325468);
PPC_FUNC_IMPL(__imp__sub_82325468) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r4,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r11,440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r10,240
	ctx.r10.s64 = ctx.r10.s64 + 240;
loc_8232548C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232548c
	if (!ctx.cr6.eq) goto loc_8232548C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823254A8"))) PPC_WEAK_FUNC(sub_823254A8);
PPC_FUNC_IMPL(__imp__sub_823254A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x823254B0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bba8
	ctx.lr = 0x823254B8;
	__savefpr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f1.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f3,f2
	ctx.f3.f64 = ctx.f2.f64;
	// addi r29,r11,20088
	ctx.r29.s64 = ctx.r11.s64 + 20088;
	// lfs f0,-8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bgt cr6,0x82325854
	if (ctx.cr6.gt) goto loc_82325854;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfd f0,-4840(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f12,23808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23808);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f11,-24704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24704);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f11,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f8,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsel f13,f10,f0,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f2,f9,f12,f0
	ctx.f2.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fsubs f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fcmpu cr6,f1,f8
	ctx.cr6.compare(ctx.f1.f64, ctx.f8.f64);
	// ble cr6,0x82325854
	if (!ctx.cr6.gt) goto loc_82325854;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// ld r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// ld r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r30,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r30.u64);
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f5,f7,f7
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// lfd f12,-4832(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// fmadds f13,f9,f9,f5
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f10,f6,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f13.f64));
	// frsqrte f13,f10
	ctx.f13.f64 = double(1.0f / sqrtf(float(ctx.f10.f64)));
	// fmul f5,f10,f13
	ctx.f5.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fmul f31,f13,f12
	ctx.f31.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fnmsub f5,f5,f13,f0
	ctx.f5.f64 = -(ctx.f5.f64 * ctx.f13.f64 - ctx.f0.f64);
	// fmadd f13,f5,f31,f13
	ctx.f13.f64 = ctx.f5.f64 * ctx.f31.f64 + ctx.f13.f64;
	// fmul f10,f10,f13
	ctx.f10.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fmul f5,f13,f12
	ctx.f5.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fnmsub f10,f10,f13,f0
	ctx.f10.f64 = -(ctx.f10.f64 * ctx.f13.f64 - ctx.f0.f64);
	// fmadd f5,f10,f5,f13
	ctx.f5.f64 = ctx.f10.f64 * ctx.f5.f64 + ctx.f13.f64;
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// fmuls f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfs f5,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f5.f64 = double(temp.f32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// fmuls f31,f6,f13
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f7,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f30,f5,f10
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f29,f7,f9
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmsubs f10,f7,f10,f31
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f31.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f9,f6,f9,f30
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 - ctx.f30.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmsubs f10,f5,f13,f29
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 - ctx.f29.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r9,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// li r9,8
	ctx.r9.s64 = 8;
	// std r8,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmadds f9,f10,f10,f6
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f6.f64));
	// frsqrte f13,f9
	ctx.f13.f64 = double(1.0f / sqrtf(float(ctx.f9.f64)));
	// fmul f5,f9,f13
	ctx.f5.f64 = ctx.f9.f64 * ctx.f13.f64;
	// fmul f7,f13,f12
	ctx.f7.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fnmsub f6,f5,f13,f0
	ctx.f6.f64 = -(ctx.f5.f64 * ctx.f13.f64 - ctx.f0.f64);
	// lfs f5,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f5.f64 = double(temp.f32);
	// fmadd f13,f6,f7,f13
	ctx.f13.f64 = ctx.f6.f64 * ctx.f7.f64 + ctx.f13.f64;
	// lfs f7,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// fmul f9,f9,f13
	ctx.f9.f64 = ctx.f9.f64 * ctx.f13.f64;
	// fmul f12,f13,f12
	ctx.f12.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fnmsub f9,f9,f13,f0
	ctx.f9.f64 = -(ctx.f9.f64 * ctx.f13.f64 - ctx.f0.f64);
	// fmadd f0,f9,f12,f13
	ctx.f0.f64 = ctx.f9.f64 * ctx.f12.f64 + ctx.f13.f64;
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f10,f7,f13
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f31,f6,f12
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmsubs f9,f7,f12,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 - ctx.f9.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f7,f6,f0,f10
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f10.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f6,f5,f13,f31
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 - ctx.f31.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823256C0:
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// std r3,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// bdnz 0x823256c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823256C0;
	// addi r9,r4,48
	ctx.r9.s64 = ctx.r4.s64 + 48;
	// lwz r30,128(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lfs f0,308(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// addi r10,r30,7488
	ctx.r10.s64 = ctx.r30.s64 + 7488;
	// lfs f5,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfs f4,228(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r9,r30,7472
	ctx.r9.s64 = ctx.r30.s64 + 7472;
	// fadds f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f0,284(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// ld r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// ld r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lfs f13,288(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// std r7,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r7.u64);
	// lbz r6,9(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// fmuls f30,f30,f13
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f29,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f29.f64 = double(temp.f32);
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f28,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfs f7,6504(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6504);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,136(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f6,6696(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6696);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f6,f12,f5
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f31,f10
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f10.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f8,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f4,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f30,f10
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f7,f9
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f5,f9,f29
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f12,f4,f9
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f6,f13,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8214f000
	ctx.lr = 0x82325854;
	sub_8214F000(ctx, base);
loc_82325854:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bbf4
	ctx.lr = 0x82325860;
	__restfpr_28(ctx, base);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82325864"))) PPC_WEAK_FUNC(sub_82325864);
PPC_FUNC_IMPL(__imp__sub_82325864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82325868"))) PPC_WEAK_FUNC(sub_82325868);
PPC_FUNC_IMPL(__imp__sub_82325868) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823258b4
	if (!ctx.cr6.eq) goto loc_823258B4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r4,r11,20908
	ctx.r4.s64 = ctx.r11.s64 + 20908;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,12432
	ctx.r9.u64 = ctx.r10.u64 | 12432;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x820a58c8
	ctx.lr = 0x823258B0;
	sub_820A58C8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_823258B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_823258D4"))) PPC_WEAK_FUNC(sub_823258D4);
PPC_FUNC_IMPL(__imp__sub_823258D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823258D8"))) PPC_WEAK_FUNC(sub_823258D8);
PPC_FUNC_IMPL(__imp__sub_823258D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823258E8"))) PPC_WEAK_FUNC(sub_823258E8);
PPC_FUNC_IMPL(__imp__sub_823258E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82325900"))) PPC_WEAK_FUNC(sub_82325900);
PPC_FUNC_IMPL(__imp__sub_82325900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82325908;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r5,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r5.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// bne cr6,0x82325954
	if (!ctx.cr6.eq) goto loc_82325954;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82325954
	if (ctx.cr6.eq) goto loc_82325954;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// ori r8,r9,12432
	ctx.r8.u64 = ctx.r9.u64 | 12432;
	// addi r4,r11,20916
	ctx.r4.s64 = ctx.r11.s64 + 20916;
	// lwzx r3,r30,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// bl 0x820a58c8
	ctx.lr = 0x82325950;
	sub_820A58C8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82325954:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8232597c
	if (!ctx.cr6.eq) goto loc_8232597C;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// ori r5,r6,12432
	ctx.r5.u64 = ctx.r6.u64 | 12432;
	// addi r4,r11,20908
	ctx.r4.s64 = ctx.r11.s64 + 20908;
	// lwzx r3,r30,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// bl 0x820a58c8
	ctx.lr = 0x82325978;
	sub_820A58C8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8232597C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232598C"))) PPC_WEAK_FUNC(sub_8232598C);
PPC_FUNC_IMPL(__imp__sub_8232598C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82325990"))) PPC_WEAK_FUNC(sub_82325990);
PPC_FUNC_IMPL(__imp__sub_82325990) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823259A8"))) PPC_WEAK_FUNC(sub_823259A8);
PPC_FUNC_IMPL(__imp__sub_823259A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823259B4"))) PPC_WEAK_FUNC(sub_823259B4);
PPC_FUNC_IMPL(__imp__sub_823259B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823259B8"))) PPC_WEAK_FUNC(sub_823259B8);
PPC_FUNC_IMPL(__imp__sub_823259B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823259C8"))) PPC_WEAK_FUNC(sub_823259C8);
PPC_FUNC_IMPL(__imp__sub_823259C8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82325a04
	if (ctx.cr6.eq) goto loc_82325A04;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,2736
	ctx.r3.s64 = ctx.r11.s64 + 2736;
	// bl 0x821019e8
	ctx.lr = 0x82325A00;
	sub_821019E8(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_82325A04:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8210d230
	ctx.lr = 0x82325A20;
	sub_8210D230(ctx, base);
	// lis r30,-32047
	ctx.r30.s64 = -2100232192;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x82325A34;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x82325A44;
	sub_82350C88(ctx, base);
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82325A64"))) PPC_WEAK_FUNC(sub_82325A64);
PPC_FUNC_IMPL(__imp__sub_82325A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82325A68"))) PPC_WEAK_FUNC(sub_82325A68);
PPC_FUNC_IMPL(__imp__sub_82325A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82325A70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82325acc
	if (!ctx.cr6.gt) goto loc_82325ACC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82325A94:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r4,112
	ctx.r11.s64 = ctx.r4.s64 + 112;
	// dcbt 16,r0,r11
	// li r9,128
	ctx.r9.s64 = 128;
	// dcbt 16,r9,r11
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820bfe80
	ctx.lr = 0x82325AB4;
	sub_820BFE80(ctx, base);
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82325a94
	if (ctx.cr6.lt) goto loc_82325A94;
loc_82325ACC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82325AD4"))) PPC_WEAK_FUNC(sub_82325AD4);
PPC_FUNC_IMPL(__imp__sub_82325AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82325AD8"))) PPC_WEAK_FUNC(sub_82325AD8);
PPC_FUNC_IMPL(__imp__sub_82325AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82325AE0;
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
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lfs f31,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82325e74
	if (ctx.cr6.eq) goto loc_82325E74;
	// lhz r11,14(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82325e74
	if (!ctx.cr6.gt) goto loc_82325E74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f30,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f30.f64 = double(temp.f32);
loc_82325B30:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r30.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r6,17(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82325e10
	if (!ctx.cr6.gt) goto loc_82325E10;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// ble cr6,0x82325e58
	if (!ctx.cr6.gt) goto loc_82325E58;
	// lhz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// rlwinm r4,r5,0,23,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82325d24
	if (ctx.cr6.eq) goto loc_82325D24;
	// lbz r3,19(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// stb r9,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r9.u8);
	// bne cr6,0x82325bc4
	if (!ctx.cr6.eq) goto loc_82325BC4;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82325bc4
	if (ctx.cr6.lt) goto loc_82325BC4;
	// stb r26,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r26.u8);
	// b 0x82325be4
	goto loc_82325BE4;
loc_82325BC4:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82325be4
	if (!ctx.cr6.eq) goto loc_82325BE4;
	// lbz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x82325be4
	if (ctx.cr6.gt) goto loc_82325BE4;
	// stb r27,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r27.u8);
	// stb r27,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r27.u8);
loc_82325BE4:
	// lbz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// lbz r9,19(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// divw r7,r8,r11
	ctx.r7.s32 = ctx.r8.s32 / ctx.r11.s32;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// subf r4,r6,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r6.s64;
	// andc r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// extsb r8,r4
	ctx.r8.s64 = ctx.r4.s8;
	// twlgei r3,-1
	if (ctx.r3.u32 >= 4294967295) __builtin_debugtrap();
	// bne cr6,0x82325cb0
	if (!ctx.cr6.eq) goto loc_82325CB0;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82325c38
	if (!ctx.cr6.eq) goto loc_82325C38;
	// lfs f11,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// b 0x82325e58
	goto loc_82325E58;
loc_82325C38:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82325C44:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82325c44
	if (!ctx.cr6.eq) goto loc_82325C44;
	// lbz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwzx r10,r4,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8259dbd0
	ctx.lr = 0x82325C78;
	sub_8259DBD0(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// lbz r3,18(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// lfs f10,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stb r11,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r11.u8);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f6,24(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// b 0x82325e58
	goto loc_82325E58;
loc_82325CB0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82325CBC:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82325cbc
	if (!ctx.cr6.eq) goto loc_82325CBC;
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8259dbd0
	ctx.lr = 0x82325CEC;
	sub_8259DBD0(ctx, base);
	// lbz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// lfs f5,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// stb r11,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r11.u8);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f4,88(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// stfs f1,24(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// b 0x82325e58
	goto loc_82325E58;
loc_82325D24:
	// lbz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// divw r3,r4,r11
	ctx.r3.s32 = ctx.r4.s32 / ctx.r11.s32;
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// mullw r9,r3,r11
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// andc r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// twlgei r6,-1
	if (ctx.r6.u32 >= 4294967295) __builtin_debugtrap();
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// divw r4,r5,r11
	ctx.r4.s32 = ctx.r5.s32 / ctx.r11.s32;
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// mullw r3,r4,r11
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// andc r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.u32 >= 4294967295) __builtin_debugtrap();
	// bne cr6,0x82325da0
	if (!ctx.cr6.eq) goto loc_82325DA0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stb r11,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r11.u8);
	// b 0x82325e58
	goto loc_82325E58;
loc_82325DA0:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82325DAC:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82325dac
	if (!ctx.cr6.eq) goto loc_82325DAC;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwzx r10,r6,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8259dbd0
	ctx.lr = 0x82325DD8;
	sub_8259DBD0(ctx, base);
	// lbz r4,18(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// stb r11,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r11.u8);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// b 0x82325e58
	goto loc_82325E58;
loc_82325E10:
	// lhz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// rlwinm r5,r6,0,22,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82325e58
	if (ctx.cr6.eq) goto loc_82325E58;
	// lfs f8,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fabs f13,f8
	ctx.f13.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fadds f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82325e58
	if (ctx.cr6.lt) goto loc_82325E58;
	// bso cr6,0x82325e58
	if (ctx.cr6.so) goto loc_82325E58;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82325e54
	if (ctx.cr6.eq) goto loc_82325E54;
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// b 0x82325e58
	goto loc_82325E58;
loc_82325E54:
	// stfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_82325E58:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lhz r3,14(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82325b30
	if (ctx.cr6.lt) goto loc_82325B30;
loc_82325E74:
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

__attribute__((alias("__imp__sub_82325E84"))) PPC_WEAK_FUNC(sub_82325E84);
PPC_FUNC_IMPL(__imp__sub_82325E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82325E88"))) PPC_WEAK_FUNC(sub_82325E88);
PPC_FUNC_IMPL(__imp__sub_82325E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82325E90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// ble cr6,0x82325f10
	if (!ctx.cr6.gt) goto loc_82325F10;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82325EBC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82323f50
	ctx.lr = 0x82325ECC;
	sub_82323F50(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82325ee0
	if (ctx.cr6.eq) goto loc_82325EE0;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
loc_82325EE0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82325ef8
	if (ctx.cr6.eq) goto loc_82325EF8;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// bl 0x823547e0
	ctx.lr = 0x82325EF8;
	sub_823547E0(ctx, base);
loc_82325EF8:
	// lhz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r28,r6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82325ebc
	if (ctx.cr6.lt) goto loc_82325EBC;
loc_82325F10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82325F18"))) PPC_WEAK_FUNC(sub_82325F18);
PPC_FUNC_IMPL(__imp__sub_82325F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82325F20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// bl 0x82323ff8
	ctx.lr = 0x82325F68;
	sub_82323FF8(ctx, base);
	// lhz r6,74(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// rlwinm r4,r6,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82325f84
	if (ctx.cr6.eq) goto loc_82325F84;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// bl 0x82323ff8
	ctx.lr = 0x82325F84;
	sub_82323FF8(ctx, base);
loc_82325F84:
	// lhz r3,74(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// rlwinm r10,r3,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82325fa0
	if (ctx.cr6.eq) goto loc_82325FA0;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x82323ff8
	ctx.lr = 0x82325FA0;
	sub_82323FF8(ctx, base);
loc_82325FA0:
	// lhz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82325fb8
	if (ctx.cr6.eq) goto loc_82325FB8;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82323ff8
	ctx.lr = 0x82325FB8;
	sub_82323FF8(ctx, base);
loc_82325FB8:
	// lhz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// rlwinm r4,r6,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82325fd4
	if (ctx.cr6.eq) goto loc_82325FD4;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// bl 0x82323ff8
	ctx.lr = 0x82325FD4;
	sub_82323FF8(ctx, base);
loc_82325FD4:
	// lhz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// rlwinm r10,r3,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82325ff0
	if (ctx.cr6.eq) goto loc_82325FF0;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x82323ff8
	ctx.lr = 0x82325FF0;
	sub_82323FF8(ctx, base);
loc_82325FF0:
	// lbz r11,78(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 78);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326070
	if (ctx.cr6.eq) goto loc_82326070;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82326004:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326034
	if (ctx.cr6.eq) goto loc_82326034;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stw r4,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r4.u32);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// bl 0x823991c0
	ctx.lr = 0x82326034;
	sub_823991C0(ctx, base);
loc_82326034:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232605c
	if (ctx.cr6.eq) goto loc_8232605C;
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// clrlwi r6,r7,30
	ctx.r6.u64 = ctx.r7.u32 & 0x3;
	// stw r4,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r4.u32);
	// stw r6,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r6.u32);
	// bl 0x823991c0
	ctx.lr = 0x8232605C;
	sub_823991C0(ctx, base);
loc_8232605C:
	// lbz r5,78(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 78);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,52
	ctx.r29.s64 = ctx.r29.s64 + 52;
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82326004
	if (ctx.cr6.lt) goto loc_82326004;
loc_82326070:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82326078"))) PPC_WEAK_FUNC(sub_82326078);
PPC_FUNC_IMPL(__imp__sub_82326078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82326080;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232609c
	if (ctx.cr6.eq) goto loc_8232609C;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8232609C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823260ec
	if (ctx.cr6.eq) goto loc_823260EC;
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// ble cr6,0x823260ec
	if (!ctx.cr6.gt) goto loc_823260EC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823260C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8214e210
	ctx.lr = 0x823260D4;
	sub_8214E210(ctx, base);
	// lhz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823260c8
	if (ctx.cr6.lt) goto loc_823260C8;
loc_823260EC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232614c
	if (ctx.cr6.eq) goto loc_8232614C;
	// lhz r4,22(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// ble cr6,0x8232614c
	if (!ctx.cr6.gt) goto loc_8232614C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82326118:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r3,r9,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// bl 0x82357738
	ctx.lr = 0x82326134;
	sub_82357738(ctx, base);
	// lhz r8,22(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82326118
	if (ctx.cr6.lt) goto loc_82326118;
loc_8232614C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232619c
	if (ctx.cr6.eq) goto loc_8232619C;
	// lhz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// ble cr6,0x8232619c
	if (!ctx.cr6.gt) goto loc_8232619C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82326178:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82325e88
	ctx.lr = 0x82326184;
	sub_82325E88(ctx, base);
	// lhz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82326178
	if (ctx.cr6.lt) goto loc_82326178;
loc_8232619C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823261ec
	if (ctx.cr6.eq) goto loc_823261EC;
	// lhz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// ble cr6,0x823261ec
	if (!ctx.cr6.gt) goto loc_823261EC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823261C8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82325e88
	ctx.lr = 0x823261D4;
	sub_82325E88(ctx, base);
	// lhz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823261c8
	if (ctx.cr6.lt) goto loc_823261C8;
loc_823261EC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232623c
	if (ctx.cr6.eq) goto loc_8232623C;
	// lhz r4,34(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// ble cr6,0x8232623c
	if (!ctx.cr6.gt) goto loc_8232623C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82326218:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82325e88
	ctx.lr = 0x82326224;
	sub_82325E88(ctx, base);
	// lhz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82326218
	if (ctx.cr6.lt) goto loc_82326218;
loc_8232623C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232628c
	if (ctx.cr6.eq) goto loc_8232628C;
	// lhz r8,30(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// ble cr6,0x8232628c
	if (!ctx.cr6.gt) goto loc_8232628C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82326268:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82325e88
	ctx.lr = 0x82326274;
	sub_82325E88(ctx, base);
	// lhz r6,30(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82326268
	if (ctx.cr6.lt) goto loc_82326268;
loc_8232628C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823263f4
	if (ctx.cr6.eq) goto loc_823263F4;
	// lhz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r4,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// ble cr6,0x823263f4
	if (!ctx.cr6.gt) goto loc_823263F4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823262B8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r30,r29,32
	ctx.r30.s64 = ctx.r29.s64 + 32;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823262ec
	if (ctx.cr6.eq) goto loc_823262EC;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// stw r4,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r4.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// bl 0x823991c0
	ctx.lr = 0x823262EC;
	sub_823991C0(ctx, base);
loc_823262EC:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326314
	if (ctx.cr6.eq) goto loc_82326314;
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// stw r4,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r4.u32);
	// stw r7,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r7.u32);
	// bl 0x823991c0
	ctx.lr = 0x82326314;
	sub_823991C0(ctx, base);
loc_82326314:
	// lbz r6,194(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 194);
	// clrlwi r4,r6,31
	ctx.r4.u64 = ctx.r6.u32 & 0x1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82326378
	if (ctx.cr6.eq) goto loc_82326378;
	// addi r30,r29,84
	ctx.r30.s64 = ctx.r29.s64 + 84;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326350
	if (ctx.cr6.eq) goto loc_82326350;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r4,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r4.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// bl 0x823991c0
	ctx.lr = 0x82326350;
	sub_823991C0(ctx, base);
loc_82326350:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326378
	if (ctx.cr6.eq) goto loc_82326378;
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stw r4,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r4.u32);
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// bl 0x823991c0
	ctx.lr = 0x82326378;
	sub_823991C0(ctx, base);
loc_82326378:
	// lbz r7,194(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 194);
	// rlwinm r5,r7,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823263dc
	if (ctx.cr6.eq) goto loc_823263DC;
	// addi r30,r29,136
	ctx.r30.s64 = ctx.r29.s64 + 136;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823263b4
	if (ctx.cr6.eq) goto loc_823263B4;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stw r4,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r4.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// bl 0x823991c0
	ctx.lr = 0x823263B4;
	sub_823991C0(ctx, base);
loc_823263B4:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823263dc
	if (ctx.cr6.eq) goto loc_823263DC;
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// stw r4,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r4.u32);
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// bl 0x823991c0
	ctx.lr = 0x823263DC;
	sub_823991C0(ctx, base);
loc_823263DC:
	// lhz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,224
	ctx.r28.s64 = ctx.r28.s64 + 224;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r27,r6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823262b8
	if (ctx.cr6.lt) goto loc_823262B8;
loc_823263F4:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232643c
	if (ctx.cr6.eq) goto loc_8232643C;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// ble cr6,0x8232643c
	if (!ctx.cr6.gt) goto loc_8232643C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8232641C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82325f18
	ctx.lr = 0x82326428;
	sub_82325F18(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8232641c
	if (ctx.cr6.lt) goto loc_8232641C;
loc_8232643C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326484
	if (ctx.cr6.eq) goto loc_82326484;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// ble cr6,0x82326484
	if (!ctx.cr6.gt) goto loc_82326484;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82326464:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x8212bb98
	ctx.lr = 0x82326470;
	sub_8212BB98(ctx, base);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,192
	ctx.r29.s64 = ctx.r29.s64 + 192;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82326464
	if (ctx.cr6.lt) goto loc_82326464;
loc_82326484:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823264cc
	if (ctx.cr6.eq) goto loc_823264CC;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// ble cr6,0x823264cc
	if (!ctx.cr6.gt) goto loc_823264CC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823264AC:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8212bb98
	ctx.lr = 0x823264B8;
	sub_8212BB98(ctx, base);
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823264ac
	if (ctx.cr6.lt) goto loc_823264AC;
loc_823264CC:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326514
	if (ctx.cr6.eq) goto loc_82326514;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// ble cr6,0x82326514
	if (!ctx.cr6.gt) goto loc_82326514;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823264F4:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822d4e60
	ctx.lr = 0x82326500;
	sub_822D4E60(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x823264f4
	if (ctx.cr6.lt) goto loc_823264F4;
loc_82326514:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326528
	if (ctx.cr6.eq) goto loc_82326528;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_82326528:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326540
	if (ctx.cr6.eq) goto loc_82326540;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// bl 0x82354800
	ctx.lr = 0x82326540;
	sub_82354800(ctx, base);
loc_82326540:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326554
	if (ctx.cr6.eq) goto loc_82326554;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
loc_82326554:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326568
	if (ctx.cr6.eq) goto loc_82326568;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
loc_82326568:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823265b0
	if (ctx.cr6.eq) goto loc_823265B0;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r8,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r8.u32);
	// ble cr6,0x823265b0
	if (!ctx.cr6.gt) goto loc_823265B0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82326590:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x822d6308
	ctx.lr = 0x8232659C;
	sub_822D6308(ctx, base);
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82326590
	if (ctx.cr6.lt) goto loc_82326590;
loc_823265B0:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823265f8
	if (ctx.cr6.eq) goto loc_823265F8;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r5,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r5.u32);
	// ble cr6,0x823265f8
	if (!ctx.cr6.gt) goto loc_823265F8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_823265D8:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8212bb98
	ctx.lr = 0x823265E4;
	sub_8212BB98(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x823265d8
	if (ctx.cr6.lt) goto loc_823265D8;
loc_823265F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82326600"))) PPC_WEAK_FUNC(sub_82326600);
PPC_FUNC_IMPL(__imp__sub_82326600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82326614
	if (!ctx.cr6.eq) goto loc_82326614;
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82326614:
	// add r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 196608;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,66(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 66);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x82326664
	if (!ctx.cr6.eq) goto loc_82326664;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,-12136(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stb r6,66(r11)
	PPC_STORE_U8(ctx.r11.u32 + 66, ctx.r6.u8);
loc_82326664:
	// li r5,255
	ctx.r5.s64 = 255;
	// stb r5,16(r8)
	PPC_STORE_U8(ctx.r8.u32 + 16, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82326670"))) PPC_WEAK_FUNC(sub_82326670);
PPC_FUNC_IMPL(__imp__sub_82326670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8232668c
	if (!ctx.cr6.eq) goto loc_8232668C;
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232668c
	if (!ctx.cr6.eq) goto loc_8232668C;
loc_82326684:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8232668C:
	// addi r8,r4,6
	ctx.r8.s64 = ctx.r4.s64 + 6;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r4,10
	ctx.r5.s64 = ctx.r4.s64 + 10;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// addi r6,r10,1080
	ctx.r6.s64 = ctx.r10.s64 + 1080;
	// mulli r7,r3,76
	ctx.r7.s64 = ctx.r3.s64 * 76;
	// lwzx r8,r4,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lhzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// ori r4,r5,15464
	ctx.r4.u64 = ctx.r5.u64 | 15464;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r11,r6,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82326684
	if (ctx.cr6.eq) goto loc_82326684;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 196608;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f13.u32);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x8232671c
	if (ctx.cr6.gt) goto loc_8232671C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232671C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82326724"))) PPC_WEAK_FUNC(sub_82326724);
PPC_FUNC_IMPL(__imp__sub_82326724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82326728"))) PPC_WEAK_FUNC(sub_82326728);
PPC_FUNC_IMPL(__imp__sub_82326728) {
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
	// bl 0x82326670
	ctx.lr = 0x82326748;
	sub_82326670(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232682c
	if (!ctx.cr6.eq) goto loc_8232682C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r8,r31,10
	ctx.r8.s64 = ctx.r31.s64 + 10;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addi r5,r31,6
	ctx.r5.s64 = ctx.r31.s64 + 6;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r7,r11,1076
	ctx.r7.s64 = ctx.r11.s64 + 1076;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r9,r3,76
	ctx.r9.s64 = ctx.r3.s64 * 76;
	// lwzx r8,r6,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// ori r5,r7,15464
	ctx.r5.u64 = ctx.r7.u64 | 15464;
	// lwzx r6,r4,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lhz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lbzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x823267e4
	if (ctx.cr6.eq) goto loc_823267E4;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addis r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 196608;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,32192
	ctx.r9.s64 = ctx.r9.s64 + 32192;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r10,65(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 65);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x8232682c
	if (ctx.cr6.eq) goto loc_8232682C;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x82326800
	goto loc_82326800;
loc_823267E4:
	// lbz r10,70(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 70);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x8232682c
	if (ctx.cr6.eq) goto loc_8232682C;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_82326800:
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232682c
	if (ctx.cr6.eq) goto loc_8232682C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f13.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82326830
	if (!ctx.cr6.lt) goto loc_82326830;
loc_8232682C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82326830:
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

__attribute__((alias("__imp__sub_82326848"))) PPC_WEAK_FUNC(sub_82326848);
PPC_FUNC_IMPL(__imp__sub_82326848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82326850;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ori r10,r11,15464
	ctx.r10.u64 = ctx.r11.u64 | 15464;
	// lwzx r29,r31,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bne cr6,0x82326928
	if (!ctx.cr6.eq) goto loc_82326928;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82326670
	ctx.lr = 0x8232687C;
	sub_82326670(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8232691c
	if (ctx.cr6.eq) goto loc_8232691C;
	// lbz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8232689c
	if (!ctx.cr6.eq) goto loc_8232689C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82326910
	goto loc_82326910;
loc_8232689C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r31,1080
	ctx.r7.s64 = ctx.r31.s64 + 1080;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r5,r6,76
	ctx.r5.s64 = ctx.r6.s64 * 76;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lhzx r11,r5,r7
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r11,r4,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x823268d0
	if (!ctx.cr6.eq) goto loc_823268D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82326910
	goto loc_82326910;
loc_823268D0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f13.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8232690c
	if (ctx.cr6.gt) goto loc_8232690C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232690C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82326910:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82326978
	if (!ctx.cr6.eq) goto loc_82326978;
loc_8232691C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82326928:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82326950
	if (!ctx.cr6.eq) goto loc_82326950;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82326670
	ctx.lr = 0x82326938;
	sub_82326670(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82326978
	if (!ctx.cr6.eq) goto loc_82326978;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82326950:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82326978
	if (!ctx.cr6.eq) goto loc_82326978;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82326670
	ctx.lr = 0x82326960;
	sub_82326670(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82326978
	if (!ctx.cr6.eq) goto loc_82326978;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82326978:
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r6,84(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	// bne cr6,0x82326990
	if (!ctx.cr6.eq) goto loc_82326990;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82326990:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82326a3c
	if (!ctx.cr6.gt) goto loc_82326A3C;
loc_8232699C:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823269ac
	if (!ctx.cr6.eq) goto loc_823269AC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82326a30
	if (ctx.cr6.eq) goto loc_82326A30;
loc_823269AC:
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// lwzx r10,r3,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// ble cr6,0x823269c4
	if (!ctx.cr6.gt) goto loc_823269C4;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823269d4
	goto loc_823269D4;
loc_823269C4:
	// addi r11,r9,10
	ctx.r11.s64 = ctx.r9.s64 + 10;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
loc_823269D4:
	// mulli r4,r10,76
	ctx.r4.s64 = ctx.r10.s64 * 76;
	// addi r11,r31,1080
	ctx.r11.s64 = ctx.r31.s64 + 1080;
	// addi r3,r9,14
	ctx.r3.s64 = ctx.r9.s64 + 14;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r11,r4,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lbzx r11,r4,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82326a30
	if (ctx.cr6.eq) goto loc_82326A30;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addis r8,r31,3
	ctx.r8.s64 = ctx.r31.s64 + 196608;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r8,32192
	ctx.r8.s64 = ctx.r8.s64 + 32192;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f12,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8232691c
	if (!ctx.cr6.gt) goto loc_8232691C;
loc_82326A30:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8232699c
	if (ctx.cr6.lt) goto loc_8232699C;
loc_82326A3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82326A48"))) PPC_WEAK_FUNC(sub_82326A48);
PPC_FUNC_IMPL(__imp__sub_82326A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82326A50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// stb r11,93(r31)
	PPC_STORE_U8(ctx.r31.u32 + 93, ctx.r11.u8);
	// stb r11,94(r31)
	PPC_STORE_U8(ctx.r31.u32 + 94, ctx.r11.u8);
	// stb r11,95(r31)
	PPC_STORE_U8(ctx.r31.u32 + 95, ctx.r11.u8);
	// stb r11,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r11.u8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
	// addi r3,r11,8304
	ctx.r3.s64 = ctx.r11.s64 + 8304;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// bl 0x825afa00
	ctx.lr = 0x82326AF8;
	sub_825AFA00(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r11,28380
	ctx.r3.s64 = ctx.r11.s64 + 28380;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825afa00
	ctx.lr = 0x82326B0C;
	sub_825AFA00(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r30,28376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28376, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82326B20"))) PPC_WEAK_FUNC(sub_82326B20);
PPC_FUNC_IMPL(__imp__sub_82326B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82326B28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwzx r4,r9,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82326b70
	if (ctx.cr6.eq) goto loc_82326B70;
	// addi r6,r30,2
	ctx.r6.s64 = ctx.r30.s64 + 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// bl 0x82142530
	ctx.lr = 0x82326B68;
	sub_82142530(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82326bdc
	if (ctx.cr6.eq) goto loc_82326BDC;
loc_82326B70:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82326bdc
	if (ctx.cr6.lt) goto loc_82326BDC;
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82326bdc
	if (!ctx.cr6.lt) goto loc_82326BDC;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82326bbc
	if (!ctx.cr6.eq) goto loc_82326BBC;
	// addi r10,r29,152
	ctx.r10.s64 = ctx.r29.s64 + 152;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82326bdc
	if (ctx.cr6.eq) goto loc_82326BDC;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x82326bdc
	if (!ctx.cr6.eq) goto loc_82326BDC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82326BBC:
	// addi r7,r29,142
	ctx.r7.s64 = ctx.r29.s64 + 142;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82326bdc
	if (ctx.cr6.eq) goto loc_82326BDC;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x82326be0
	if (ctx.cr6.eq) goto loc_82326BE0;
loc_82326BDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82326BE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82326BE8"))) PPC_WEAK_FUNC(sub_82326BE8);
PPC_FUNC_IMPL(__imp__sub_82326BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82326BF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82326c18
	if (!ctx.cr6.lt) goto loc_82326C18;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82326C18:
	// addi r28,r31,9
	ctx.r28.s64 = ctx.r31.s64 + 9;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82326cc0
	if (!ctx.cr6.lt) goto loc_82326CC0;
	// neg r30,r31
	ctx.r30.s64 = -ctx.r31.s64;
loc_82326C28:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// blt cr6,0x82326c58
	if (ctx.cr6.lt) goto loc_82326C58;
	// rotlwi r10,r31,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// divw r9,r31,r11
	ctx.r9.s32 = ctx.r31.s32 / ctx.r11.s32;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// andc r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// subf r4,r7,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r7.s64;
	// twlgei r6,-1
	if (ctx.r6.u32 >= 4294967295) __builtin_debugtrap();
	// b 0x82326c98
	goto loc_82326C98;
loc_82326C58:
	// divw r5,r30,r11
	ctx.r5.s32 = ctx.r30.s32 / ctx.r11.s32;
	// rotlwi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// subf r3,r4,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r4.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// andc r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r7,r9,r11
	ctx.r7.s32 = ctx.r9.s32 / ctx.r11.s32;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mullw r5,r7,r11
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// andc r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// twlgei r8,-1
	if (ctx.r8.u32 >= 4294967295) __builtin_debugtrap();
	// subf r4,r5,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r5.s64;
	// twlgei r3,-1
	if (ctx.r3.u32 >= 4294967295) __builtin_debugtrap();
loc_82326C98:
	// addi r11,r4,152
	ctx.r11.s64 = ctx.r4.s64 + 152;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82326CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82326c28
	if (ctx.cr6.lt) goto loc_82326C28;
loc_82326CC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82326CC8"))) PPC_WEAK_FUNC(sub_82326CC8);
PPC_FUNC_IMPL(__imp__sub_82326CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82326CD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// lis r11,37
	ctx.r11.s64 = 2424832;
	// ori r10,r11,49147
	ctx.r10.u64 = ctx.r11.u64 | 49147;
	// lbzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82326ec0
	if (!ctx.cr6.eq) goto loc_82326EC0;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// ori r7,r8,16271
	ctx.r7.u64 = ctx.r8.u64 | 16271;
	// lbzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82326e00
	if (ctx.cr6.eq) goto loc_82326E00;
	// lwz r5,684(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 684);
	// lbz r4,140(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 140);
	// cmplwi cr6,r4,128
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 128, ctx.xer);
	// bge cr6,0x82326ec0
	if (!ctx.cr6.lt) goto loc_82326EC0;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// ori r11,r3,16216
	ctx.r11.u64 = ctx.r3.u64 | 16216;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,392(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 392);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82326D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82326ec0
	if (!ctx.cr6.eq) goto loc_82326EC0;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,396(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 396);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82326D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82326ec0
	if (!ctx.cr6.eq) goto loc_82326EC0;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// addis r10,r29,35
	ctx.r10.s64 = ctx.r29.s64 + 2293760;
	// addi r4,r10,-13277
	ctx.r4.s64 = ctx.r10.s64 + -13277;
	// mulli r3,r11,19200
	ctx.r3.s64 = ctx.r11.s64 * 19200;
	// lbzx r10,r3,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82326ec0
	if (!ctx.cr6.eq) goto loc_82326EC0;
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// mulli r11,r11,11920
	ctx.r11.s64 = ctx.r11.s64 * 11920;
	// addi r10,r10,-11424
	ctx.r10.s64 = ctx.r10.s64 + -11424;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326dc8
	if (ctx.cr6.eq) goto loc_82326DC8;
	// lis r9,-3748
	ctx.r9.s64 = -245628928;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r7,-17864
	ctx.r7.s64 = -1170735104;
	// ori r8,r9,37420
	ctx.r8.u64 = ctx.r9.u64 | 37420;
	// ori r6,r7,59015
	ctx.r6.u64 = ctx.r7.u64 | 59015;
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r8
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82326ec0
	if (ctx.cr6.eq) goto loc_82326EC0;
loc_82326DC8:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326df4
	if (ctx.cr6.eq) goto loc_82326DF4;
	// lis r5,-22330
	ctx.r5.s64 = -1463418880;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r3,-17864
	ctx.r3.s64 = -1170735104;
	// ori r4,r5,38459
	ctx.r4.u64 = ctx.r5.u64 | 38459;
	// ori r10,r3,59490
	ctx.r10.u64 = ctx.r3.u64 | 59490;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x82326ec0
	if (ctx.cr6.eq) goto loc_82326EC0;
loc_82326DF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82326E00:
	// lwz r9,28(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// mulli r11,r9,11920
	ctx.r11.s64 = ctx.r9.s64 * 11920;
	// addi r10,r10,-11424
	ctx.r10.s64 = ctx.r10.s64 + -11424;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326e40
	if (ctx.cr6.eq) goto loc_82326E40;
	// lis r8,29631
	ctx.r8.s64 = 1941897216;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r6,-17864
	ctx.r6.s64 = -1170735104;
	// ori r7,r8,39048
	ctx.r7.u64 = ctx.r8.u64 | 39048;
	// ori r5,r6,58875
	ctx.r5.u64 = ctx.r6.u64 | 58875;
	// rldimi r7,r5,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x82326ec0
	if (ctx.cr6.eq) goto loc_82326EC0;
loc_82326E40:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326e6c
	if (ctx.cr6.eq) goto loc_82326E6C;
	// lis r4,-2083
	ctx.r4.s64 = -136511488;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r9,-17864
	ctx.r9.s64 = -1170735104;
	// ori r3,r4,56914
	ctx.r3.u64 = ctx.r4.u64 | 56914;
	// ori r8,r9,59507
	ctx.r8.u64 = ctx.r9.u64 | 59507;
	// rldimi r3,r8,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r3
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x82326ec0
	if (ctx.cr6.eq) goto loc_82326EC0;
loc_82326E6C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82326e98
	if (ctx.cr6.eq) goto loc_82326E98;
	// lis r7,-3748
	ctx.r7.s64 = -245628928;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r5,-17864
	ctx.r5.s64 = -1170735104;
	// ori r6,r7,37420
	ctx.r6.u64 = ctx.r7.u64 | 37420;
	// ori r4,r5,59015
	ctx.r4.u64 = ctx.r5.u64 | 59015;
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r6
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r6.u64, ctx.xer);
	// beq cr6,0x82326ec0
	if (ctx.cr6.eq) goto loc_82326EC0;
loc_82326E98:
	// lwz r3,684(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 684);
	// lbz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82326ec0
	if (!ctx.cr6.lt) goto loc_82326EC0;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// lbz r10,86(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 86);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82326ec4
	if (!ctx.cr6.eq) goto loc_82326EC4;
loc_82326EC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82326EC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82326ECC"))) PPC_WEAK_FUNC(sub_82326ECC);
PPC_FUNC_IMPL(__imp__sub_82326ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82326ED0"))) PPC_WEAK_FUNC(sub_82326ED0);
PPC_FUNC_IMPL(__imp__sub_82326ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r8,r9,32132
	ctx.r8.u64 = ctx.r9.u64 | 32132;
	// addi r10,r4,27
	ctx.r10.s64 = ctx.r4.s64 + 27;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r10,r6,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// lhz r7,108(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 108);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// blt cr6,0x82326f28
	if (ctx.cr6.lt) goto loc_82326F28;
	// divw r5,r10,r11
	ctx.r5.s32 = ctx.r10.s32 / ctx.r11.s32;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// subf r3,r4,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r4.s64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// andc r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twlgei r9,-1
	if (ctx.r9.u32 >= 4294967295) __builtin_debugtrap();
	// blr 
	return;
loc_82326F28:
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// divw r7,r8,r11
	ctx.r7.s32 = ctx.r8.s32 / ctx.r11.s32;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r5,r6,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r6.s64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// subf r3,r5,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r5.s64;
	// andc r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// rotlwi r10,r3,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r8,r3,r11
	ctx.r8.s32 = ctx.r3.s32 / ctx.r11.s32;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// andc r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// subf r3,r7,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r7.s64;
	// twlgei r9,-1
	if (ctx.r9.u32 >= 4294967295) __builtin_debugtrap();
	// twlgei r5,-1
	if (ctx.r5.u32 >= 4294967295) __builtin_debugtrap();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82326F70"))) PPC_WEAK_FUNC(sub_82326F70);
PPC_FUNC_IMPL(__imp__sub_82326F70) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r9,r10,26080
	ctx.r9.s64 = ctx.r10.s64 + 26080;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addis r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 + 196608;
	// lwz r5,688(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// addi r10,r10,-11424
	ctx.r10.s64 = ctx.r10.s64 + -11424;
	// mulli r8,r7,11920
	ctx.r8.s64 = ctx.r7.s64 * 11920;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82326fd4
	if (ctx.cr6.eq) goto loc_82326FD4;
	// lis r4,-27127
	ctx.r4.s64 = -1777795072;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lis r31,-17864
	ctx.r31.s64 = -1170735104;
	// ori r4,r4,40895
	ctx.r4.u64 = ctx.r4.u64 | 40895;
	// ori r31,r31,58938
	ctx.r31.u64 = ctx.r31.u64 | 58938;
	// rldimi r4,r31,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x82327000
	if (ctx.cr6.eq) goto loc_82327000;
loc_82326FD4:
	// addis r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 + 196608;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// ldx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r8,r9,63
	ctx.r8.u64 = ctx.r9.u64 & 0x1;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x82326ff4
	if (!ctx.cr6.eq) goto loc_82326FF4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82326FF4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82327004
	if (ctx.cr6.eq) goto loc_82327004;
loc_82327000:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82327004:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x8232702c
	if (ctx.cr6.lt) goto loc_8232702C;
	// bne cr6,0x82327064
	if (!ctx.cr6.eq) goto loc_82327064;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x822d9fb0
	ctx.lr = 0x82327018;
	sub_822D9FB0(ctx, base);
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
loc_8232702C:
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r9,r10,28544
	ctx.r9.s64 = ctx.r10.s64 + 28544;
	// mulli r8,r7,19200
	ctx.r8.s64 = ctx.r7.s64 * 19200;
	// addis r9,r9,35
	ctx.r9.s64 = ctx.r9.s64 + 2293760;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r9,-28432
	ctx.r11.s64 = ctx.r9.s64 + -28432;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// bl 0x820c0170
	ctx.lr = 0x82327064;
	sub_820C0170(ctx, base);
loc_82327064:
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

__attribute__((alias("__imp__sub_82327078"))) PPC_WEAK_FUNC(sub_82327078);
PPC_FUNC_IMPL(__imp__sub_82327078) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x820c0170
	ctx.lr = 0x82327090;
	sub_820C0170(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// blt cr6,0x823270b8
	if (ctx.cr6.lt) goto loc_823270B8;
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
loc_823270B8:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r8,r9,32132
	ctx.r8.u64 = ctx.r9.u64 | 32132;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823270e0
	if (!ctx.cr6.eq) goto loc_823270E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823270E0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_823270F8"))) PPC_WEAK_FUNC(sub_823270F8);
PPC_FUNC_IMPL(__imp__sub_823270F8) {
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
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x82323f50
	ctx.lr = 0x82327118;
	sub_82323F50(ctx, base);
	// lwz r11,6228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232712c
	if (ctx.cr6.eq) goto loc_8232712C;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,6228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6228, ctx.r11.u32);
loc_8232712C:
	// lwz r11,6232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82327140
	if (ctx.cr6.eq) goto loc_82327140;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,6232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6232, ctx.r10.u32);
loc_82327140:
	// lhz r9,6236(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6236);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82327188
	if (ctx.cr6.eq) goto loc_82327188;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82327150:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,6228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6228);
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8212bb98
	ctx.lr = 0x82327168;
	sub_8212BB98(ctx, base);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// lhz r6,6236(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6236);
	// clrlwi r31,r7,16
	ctx.r31.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82327150
	if (ctx.cr6.lt) goto loc_82327150;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r5.u32);
	// b 0x82327190
	goto loc_82327190;
loc_82327188:
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r4.u32);
loc_82327190:
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

__attribute__((alias("__imp__sub_823271A8"))) PPC_WEAK_FUNC(sub_823271A8);
PPC_FUNC_IMPL(__imp__sub_823271A8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823271D0:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823271e8
	if (ctx.cr6.eq) goto loc_823271E8;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
loc_823271E8:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823271d0
	if (!ctx.cr6.eq) goto loc_823271D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823271FC"))) PPC_WEAK_FUNC(sub_823271FC);
PPC_FUNC_IMPL(__imp__sub_823271FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82327200"))) PPC_WEAK_FUNC(sub_82327200);
PPC_FUNC_IMPL(__imp__sub_82327200) {
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
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82323f50
	ctx.lr = 0x82327224;
	sub_82323F50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82327240
	if (ctx.cr6.eq) goto loc_82327240;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
loc_82327240:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82327258
	if (ctx.cr6.eq) goto loc_82327258;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// bl 0x82354800
	ctx.lr = 0x82327258;
	sub_82354800(ctx, base);
loc_82327258:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x823271a8
	ctx.lr = 0x82327264;
	sub_823271A8(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82327284
	if (ctx.cr6.eq) goto loc_82327284;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82327284:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823272a0
	if (ctx.cr6.eq) goto loc_823272A0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_823272A0:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823272bc
	if (ctx.cr6.eq) goto loc_823272BC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_823272BC:
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823272d8
	if (ctx.cr6.eq) goto loc_823272D8;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
loc_823272D8:
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

__attribute__((alias("__imp__sub_823272F0"))) PPC_WEAK_FUNC(sub_823272F0);
PPC_FUNC_IMPL(__imp__sub_823272F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// stfs f12,-32(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fmuls f11,f5,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// stfs f8,-28(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fmuls f10,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f6,-24(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f4,-20(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f2,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfs f1,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f6,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f12,f6,f11
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// lfs f4,-4(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f11,f5,f10
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// lfs f7,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fadds f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// fsubs f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x823273c8
	if (ctx.cr6.lt) goto loc_823273C8;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x823273c8
	if (ctx.cr6.lt) goto loc_823273C8;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x823273c8
	if (ctx.cr6.lt) goto loc_823273C8;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_823273C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823273D0"))) PPC_WEAK_FUNC(sub_823273D0);
PPC_FUNC_IMPL(__imp__sub_823273D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bba8
	ctx.lr = 0x823273E0;
	__savefpr_28(ctx, base);
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f5,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f4,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f31,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f28.f64 = double(temp.f32);
	// fadds f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f7,f3,f6
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f6,f2,f5
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fadds f5,f1,f4
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// lfs f1,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// fsubs f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f30.f64));
	// fsubs f6,f6,f29
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f29.f64));
	// fsubs f5,f5,f28
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f28.f64));
	// fcmpu cr6,f8,f1
	ctx.cr6.compare(ctx.f8.f64, ctx.f1.f64);
	// ble cr6,0x82327498
	if (!ctx.cr6.gt) goto loc_82327498;
	// fcmpu cr6,f7,f1
	ctx.cr6.compare(ctx.f7.f64, ctx.f1.f64);
	// ble cr6,0x82327498
	if (!ctx.cr6.gt) goto loc_82327498;
	// fcmpu cr6,f6,f1
	ctx.cr6.compare(ctx.f6.f64, ctx.f1.f64);
	// ble cr6,0x82327498
	if (!ctx.cr6.gt) goto loc_82327498;
	// fcmpu cr6,f5,f1
	ctx.cr6.compare(ctx.f5.f64, ctx.f1.f64);
	// ble cr6,0x82327498
	if (!ctx.cr6.gt) goto loc_82327498;
loc_82327480:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bbf4
	ctx.lr = 0x8232748C;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82327498:
	// lfs f3,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfs f2,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fsubs f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fneg f7,f7
	ctx.f7.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// lfs f2,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fneg f6,f6
	ctx.f6.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f31,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f31.f64 = double(temp.f32);
	// fneg f5,f5
	ctx.f5.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f4,f13,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// fadds f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// fadds f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fdivs f13,f8,f12
	ctx.f13.f64 = double(float(ctx.f8.f64 / ctx.f12.f64));
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// fdivs f12,f7,f11
	ctx.f12.f64 = double(float(ctx.f7.f64 / ctx.f11.f64));
	// stfs f12,-76(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// fdivs f11,f6,f10
	ctx.f11.f64 = double(float(ctx.f6.f64 / ctx.f10.f64));
	// stfs f11,-72(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// fdivs f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 / ctx.f0.f64));
	// stfs f10,-68(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
loc_82327540:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x8232755c
	if (ctx.cr6.lt) goto loc_8232755C;
	// bso cr6,0x8232755c
	if (ctx.cr6.so) goto loc_8232755C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bso cr6,0x8232755c
	if (ctx.cr6.so) goto loc_8232755C;
	// ble cr6,0x82327480
	if (!ctx.cr6.gt) goto loc_82327480;
loc_8232755C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82327540
	if (ctx.cr6.lt) goto loc_82327540;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bbf4
	ctx.lr = 0x82327578;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327584"))) PPC_WEAK_FUNC(sub_82327584);
PPC_FUNC_IMPL(__imp__sub_82327584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82327588"))) PPC_WEAK_FUNC(sub_82327588);
PPC_FUNC_IMPL(__imp__sub_82327588) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823275d0
	if (!ctx.cr6.gt) goto loc_823275D0;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
loc_823275B4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823275ec
	if (ctx.cr6.eq) goto loc_823275EC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823275b4
	if (ctx.cr6.lt) goto loc_823275B4;
loc_823275D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823275D4:
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
loc_823275EC:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8210cf48
	ctx.lr = 0x82327600;
	sub_8210CF48(ctx, base);
	// addi r8,r31,6
	ctx.r8.s64 = ctx.r31.s64 + 6;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// beq cr6,0x823275d0
	if (ctx.cr6.eq) goto loc_823275D0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// b 0x823275d4
	goto loc_823275D4;
}

__attribute__((alias("__imp__sub_82327624"))) PPC_WEAK_FUNC(sub_82327624);
PPC_FUNC_IMPL(__imp__sub_82327624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82327628"))) PPC_WEAK_FUNC(sub_82327628);
PPC_FUNC_IMPL(__imp__sub_82327628) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82327698
	if (!ctx.cr6.gt) goto loc_82327698;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
loc_82327654:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82327674
	if (ctx.cr6.eq) goto loc_82327674;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82327654
	if (ctx.cr6.lt) goto loc_82327654;
	// b 0x82327698
	goto loc_82327698;
loc_82327674:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8210d230
	ctx.lr = 0x82327688;
	sub_8210D230(ctx, base);
	// addi r8,r31,6
	ctx.r8.s64 = ctx.r31.s64 + 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r6.u32);
loc_82327698:
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

__attribute__((alias("__imp__sub_823276B0"))) PPC_WEAK_FUNC(sub_823276B0);
PPC_FUNC_IMPL(__imp__sub_823276B0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823276f8
	if (!ctx.cr6.gt) goto loc_823276F8;
	// addi r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 + 100;
loc_823276DC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82327714
	if (ctx.cr6.eq) goto loc_82327714;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823276dc
	if (ctx.cr6.lt) goto loc_823276DC;
loc_823276F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823276FC:
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
loc_82327714:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8210cf48
	ctx.lr = 0x82327728;
	sub_8210CF48(ctx, base);
	// addi r8,r31,25
	ctx.r8.s64 = ctx.r31.s64 + 25;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// beq cr6,0x823276f8
	if (ctx.cr6.eq) goto loc_823276F8;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// b 0x823276fc
	goto loc_823276FC;
}

__attribute__((alias("__imp__sub_8232774C"))) PPC_WEAK_FUNC(sub_8232774C);
PPC_FUNC_IMPL(__imp__sub_8232774C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82327750"))) PPC_WEAK_FUNC(sub_82327750);
PPC_FUNC_IMPL(__imp__sub_82327750) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823277c0
	if (!ctx.cr6.gt) goto loc_823277C0;
	// addi r11,r30,100
	ctx.r11.s64 = ctx.r30.s64 + 100;
loc_8232777C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8232779c
	if (ctx.cr6.eq) goto loc_8232779C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8232777c
	if (ctx.cr6.lt) goto loc_8232777C;
	// b 0x823277c0
	goto loc_823277C0;
loc_8232779C:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8210d230
	ctx.lr = 0x823277B0;
	sub_8210D230(ctx, base);
	// addi r8,r31,25
	ctx.r8.s64 = ctx.r31.s64 + 25;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r6.u32);
loc_823277C0:
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

__attribute__((alias("__imp__sub_823277D8"))) PPC_WEAK_FUNC(sub_823277D8);
PPC_FUNC_IMPL(__imp__sub_823277D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823277E4"))) PPC_WEAK_FUNC(sub_823277E4);
PPC_FUNC_IMPL(__imp__sub_823277E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823277E8"))) PPC_WEAK_FUNC(sub_823277E8);
PPC_FUNC_IMPL(__imp__sub_823277E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823277F4"))) PPC_WEAK_FUNC(sub_823277F4);
PPC_FUNC_IMPL(__imp__sub_823277F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823277F8"))) PPC_WEAK_FUNC(sub_823277F8);
PPC_FUNC_IMPL(__imp__sub_823277F8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823278a4
	if (!ctx.cr6.eq) goto loc_823278A4;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ld r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// bl 0x822d2ba0
	ctx.lr = 0x82327834;
	sub_822D2BA0(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// bl 0x822d2af0
	ctx.lr = 0x8232784C;
	sub_822D2AF0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,20924
	ctx.r11.s64 = ctx.r11.s64 + 20924;
loc_82327858:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82327858
	if (!ctx.cr6.eq) goto loc_82327858;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8232786C:
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
	// bne cr6,0x8232786c
	if (!ctx.cr6.eq) goto loc_8232786C;
	// li r5,17
	ctx.r5.s64 = 17;
	// lwz r3,2672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2672);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82362500
	ctx.lr = 0x82327894;
	sub_82362500(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x823278a8
	if (ctx.cr6.eq) goto loc_823278A8;
loc_823278A4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823278A8:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

__attribute__((alias("__imp__sub_823278C0"))) PPC_WEAK_FUNC(sub_823278C0);
PPC_FUNC_IMPL(__imp__sub_823278C0) {
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
	// beq cr6,0x8232792c
	if (ctx.cr6.eq) goto loc_8232792C;
loc_823278E0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823278F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823278e0
	if (!ctx.cr6.eq) goto loc_823278E0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82327910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
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
loc_8232792C:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82327948"))) PPC_WEAK_FUNC(sub_82327948);
PPC_FUNC_IMPL(__imp__sub_82327948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82327950;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x82327978;
	sub_820BF2D8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r29,r11,-21272
	ctx.r29.s64 = ctx.r11.s64 + -21272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x8232798C;
	sub_8210D3F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210d390
	ctx.lr = 0x823279A0;
	sub_8210D390(ctx, base);
	// lis r11,-12851
	ctx.r11.s64 = -842203136;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ori r7,r11,52685
	ctx.r7.u64 = ctx.r11.u64 | 52685;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,19380
	ctx.r9.s64 = 19380;
	// addi r4,r11,20940
	ctx.r4.s64 = ctx.r11.s64 + 20940;
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r8,r30,1076
	ctx.r8.s64 = ctx.r30.s64 + 1076;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r31,40
	ctx.r6.s64 = ctx.r31.s64 + 40;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820d5a38
	ctx.lr = 0x823279DC;
	sub_820D5A38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823279E4"))) PPC_WEAK_FUNC(sub_823279E4);
PPC_FUNC_IMPL(__imp__sub_823279E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823279E8"))) PPC_WEAK_FUNC(sub_823279E8);
PPC_FUNC_IMPL(__imp__sub_823279E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x823279F0;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r23,-32252
	ctx.r23.s64 = -2113667072;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r26,r1,128
	ctx.r26.s64 = ctx.r1.s64 + 128;
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lhz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lfs f0,20436(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 20436);
	ctx.f0.f64 = double(temp.f32);
	// lhz r8,34(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lhz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lhz r6,38(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// rotlwi r30,r9,4
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// rotlwi r4,r8,4
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// rotlwi r5,r7,4
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// rotlwi r6,r6,4
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r30,r4,r11
	ctx.r30.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// add r29,r5,r11
	ctx.r29.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfs f7,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// add r24,r6,r11
	ctx.r24.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f4,f13,f10
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r22,0(r10)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r25,r1,144
	ctx.r25.s64 = ctx.r1.s64 + 144;
	// lfs f0,-1672(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1672);
	ctx.f0.f64 = double(temp.f32);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// std r22,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r22.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r10,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r10.u64);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fadds f1,f13,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f11,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// ld r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r11,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r11.u64);
	// std r10,8(r25)
	PPC_STORE_U64(ctx.r25.u32 + 8, ctx.r10.u64);
	// bl 0x82358840
	ctx.lr = 0x82327B04;
	sub_82358840(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82327b30
	if (!ctx.cr6.eq) goto loc_82327B30;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82358840
	ctx.lr = 0x82327B30;
	sub_82358840(ctx, base);
loc_82327B30:
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82327c88
	if (ctx.cr6.eq) goto loc_82327C88;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,20436(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 20436);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,3552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3552);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f30,f8,f0
	ctx.f30.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f7,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f29,f31,f2,f1
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f2.f64 + ctx.f1.f64));
	// lfs f12,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f6,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f10,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f6,f12
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f5,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f31,f10,f9
	ctx.f31.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f4,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f12,f6,f5
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f3,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f6,f4,f10
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fsubs f9,f3,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fsubs f10,f4,f3
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fsubs f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fadds f11,f7,f30
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f30.f64));
	// fadds f13,f12,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// fadds f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fadds f12,f10,f31
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// fadds f10,f5,f8
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fmuls f7,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmsubs f12,f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f8.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmsubs f12,f10,f0,f7
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f7.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmsubs f0,f9,f13,f6
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f6.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// lfs f10,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// fmadds f4,f12,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f5.f64));
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f3,f0,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fsqrts f12,f3
	ctx.f12.f64 = double(float(sqrt(ctx.f3.f64)));
	// fdivs f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bne cr6,0x82327c5c
	if (!ctx.cr6.eq) goto loc_82327C5C;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82327C5C:
	// lfs f8,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fadds f7,f8,f29
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f29.f64));
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r5.u64);
	// fmadds f5,f7,f6,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f0.f64));
	// std r4,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r4.u64);
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82327C88:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82327C9C"))) PPC_WEAK_FUNC(sub_82327C9C);
PPC_FUNC_IMPL(__imp__sub_82327C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82327CA0"))) PPC_WEAK_FUNC(sub_82327CA0);
PPC_FUNC_IMPL(__imp__sub_82327CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bba8
	ctx.lr = 0x82327CB0;
	__savefpr_28(ctx, base);
	// lhz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82327f38
	if (ctx.cr6.eq) goto loc_82327F38;
	// lhz r9,34(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82327f38
	if (ctx.cr6.eq) goto loc_82327F38;
	// lhz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// beq cr6,0x82327f38
	if (ctx.cr6.eq) goto loc_82327F38;
	// lhz r7,38(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 38);
	// cmplwi cr6,r7,65535
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 65535, ctx.xer);
	// beq cr6,0x82327f38
	if (ctx.cr6.eq) goto loc_82327F38;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lfd f0,-1544(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1544);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fres f13,f0
	ctx.f13.f64 = float(1.0 / ctx.f0.f64);
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// lfs f12,20080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20080);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f6,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f8,f7,f6
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fadds f6,f3,f1
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fadds f7,f5,f4
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fnmsubs f2,f13,f12,f0
	ctx.f2.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fnmsubs f11,f13,f12,f0
	ctx.f11.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// lfs f5,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f3,f2,f0
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// fadds f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fnmsubs f1,f11,f12,f0
	ctx.f1.f64 = double(float(-(ctx.f11.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// fnmsubs f12,f13,f12,f0
	ctx.f12.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// fadds f4,f1,f0
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fadds f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f4,f11
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f3,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f10,f7,f13
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fsubs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f9,-76(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f12,-72(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// fmuls f2,f9,f9
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f9,f5,f13
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmadds f1,f12,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// stfs f8,-80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// ld r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r10,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// fmadds f7,f8,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f1.f64));
	// lfd f13,-4832(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f12,-4840(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// frsqrte f0,f7
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f7.f64)));
	// fmul f6,f7,f0
	ctx.f6.f64 = ctx.f7.f64 * ctx.f0.f64;
	// fmul f5,f0,f13
	ctx.f5.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f4,f6,f0,f12
	ctx.f4.f64 = -(ctx.f6.f64 * ctx.f0.f64 - ctx.f12.f64);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadd f0,f4,f5,f0
	ctx.f0.f64 = ctx.f4.f64 * ctx.f5.f64 + ctx.f0.f64;
	// fmul f1,f7,f0
	ctx.f1.f64 = ctx.f7.f64 * ctx.f0.f64;
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmul f30,f0,f13
	ctx.f30.f64 = ctx.f0.f64 * ctx.f13.f64;
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f31,f3,f9
	ctx.f31.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f3,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fnmsub f1,f1,f0,f12
	ctx.f1.f64 = -(ctx.f1.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f1,f30,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f30.f64 + ctx.f0.f64;
	// fsubs f30,f7,f11
	ctx.f30.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fsubs f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fsubs f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fsubs f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f7,f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f29,f2,f2,f7
	ctx.f29.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f7.f64));
	// lfs f2,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f7,f2,f0
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f2,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f28,f1,f2
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f0,f3,f3,f29
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f29.f64));
	// fmadds f3,f30,f7,f28
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f7.f64 + ctx.f28.f64));
	// fsqrts f8,f0
	ctx.f8.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmadds f0,f31,f1,f3
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f1.f64 + ctx.f3.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f3,f2,f0
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// fsubs f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// stfs f11,-76(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// fsubs f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// stfs f10,-72(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// fmuls f2,f11,f11
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fsubs f11,f0,f4
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// stfs f11,-80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// fmadds f1,f10,f10,f2
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fmadds f10,f11,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f1.f64));
	// frsqrte f0,f10
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f10.f64)));
	// fmul f9,f10,f0
	ctx.f9.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fmul f7,f0,f13
	ctx.f7.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f3,f9,f0,f12
	ctx.f3.f64 = -(ctx.f9.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f3,f7,f0
	ctx.f0.f64 = ctx.f3.f64 * ctx.f7.f64 + ctx.f0.f64;
	// fmul f2,f10,f0
	ctx.f2.f64 = ctx.f10.f64 * ctx.f0.f64;
	// lfs f10,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f10.f64 = double(temp.f32);
	// fmul f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f1,f2,f0,f12
	ctx.f1.f64 = -(ctx.f2.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f12,f1,f13,f0
	ctx.f12.f64 = ctx.f1.f64 * ctx.f13.f64 + ctx.f0.f64;
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fadds f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_82327F38:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bbf4
	ctx.lr = 0x82327F40;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327F4C"))) PPC_WEAK_FUNC(sub_82327F4C);
PPC_FUNC_IMPL(__imp__sub_82327F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82327F50"))) PPC_WEAK_FUNC(sub_82327F50);
PPC_FUNC_IMPL(__imp__sub_82327F50) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,255
	ctx.r8.s64 = 255;
	// sth r4,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r4.u16);
	// stb r5,71(r3)
	PPC_STORE_U8(ctx.r3.u32 + 71, ctx.r5.u8);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, ctx.r11.u8);
	// stb r8,70(r3)
	PPC_STORE_U8(ctx.r3.u32 + 70, ctx.r8.u8);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82327F7C"))) PPC_WEAK_FUNC(sub_82327F7C);
PPC_FUNC_IMPL(__imp__sub_82327F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82327F80"))) PPC_WEAK_FUNC(sub_82327F80);
PPC_FUNC_IMPL(__imp__sub_82327F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82327fa8
	if (!ctx.cr6.gt) goto loc_82327FA8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82327FA8:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82327fc0
	if (ctx.cr6.lt) goto loc_82327FC0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82327fc8
	goto loc_82327FC8;
loc_82327FC0:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2864(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
loc_82327FC8:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82327ffc
	if (!ctx.cr6.lt) goto loc_82327FFC;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f11,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfsx f13,r6,r8
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fsubs f8,f1,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fmadds f1,f12,f8,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f0.f64));
	// blr 
	return;
loc_82327FFC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82328004"))) PPC_WEAK_FUNC(sub_82328004);
PPC_FUNC_IMPL(__imp__sub_82328004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82328008"))) PPC_WEAK_FUNC(sub_82328008);
PPC_FUNC_IMPL(__imp__sub_82328008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,-8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f8.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ble cr6,0x82328064
	if (!ctx.cr6.gt) goto loc_82328064;
	// lfs f0,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82328068
	goto loc_82328068;
loc_82328064:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82328068:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x823280a4
	if (!ctx.cr6.gt) goto loc_823280A4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82328098
	if (!ctx.cr6.gt) goto loc_82328098;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_8232807C:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x823280d0
	if (ctx.cr6.lt) goto loc_823280D0;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// bgt cr6,0x8232807c
	if (ctx.cr6.gt) goto loc_8232807C;
loc_82328098:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_823280A4:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823280d0
	if (!ctx.cr6.lt) goto loc_823280D0;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_823280B0:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bso cr6,0x823280bc
	if (ctx.cr6.so) goto loc_823280BC;
	// bge cr6,0x823280d0
	if (!ctx.cr6.lt) goto loc_823280D0;
loc_823280BC:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x823280b0
	if (ctx.cr6.lt) goto loc_823280B0;
loc_823280D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82328098
	if (!ctx.cr6.gt) goto loc_82328098;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// fsubs f7,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f4,-16(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lfs f5,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f6,f5
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fsubs f1,f0,f7
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fdivs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// fadds f1,f0,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232811C"))) PPC_WEAK_FUNC(sub_8232811C);
PPC_FUNC_IMPL(__imp__sub_8232811C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82328120"))) PPC_WEAK_FUNC(sub_82328120);
PPC_FUNC_IMPL(__imp__sub_82328120) {
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
	// fmr f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f1.f64;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r7,r8,15464
	ctx.r7.u64 = ctx.r8.u64 | 15464;
	// fctidz f0,f7
	ctx.f0.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x823281ac
	if (!ctx.cr6.eq) goto loc_823281AC;
	// lbz r10,70(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 70);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x82328184
	if (!ctx.cr6.eq) goto loc_82328184;
loc_82328170:
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
loc_82328184:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
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
loc_823281AC:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addis r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 196608;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,32192
	ctx.r9.s64 = ctx.r9.s64 + 32192;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82328170
	if (ctx.cr6.eq) goto loc_82328170;
	// lbz r10,65(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 65);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x823281ec
	if (!ctx.cr6.eq) goto loc_823281EC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823281EC:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82328170
	if (ctx.cr6.eq) goto loc_82328170;
	// lfs f1,44(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82327f80
	ctx.lr = 0x82328214;
	sub_82327F80(ctx, base);
	// fmr f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f1.f64;
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// bl 0x82327f80
	ctx.lr = 0x82328220;
	sub_82327F80(ctx, base);
	// fmr f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f1.f64;
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// bl 0x82327f80
	ctx.lr = 0x8232822C;
	sub_82327F80(ctx, base);
	// fmr f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f1.f64;
	// lfs f1,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82327f80
	ctx.lr = 0x82328238;
	sub_82327F80(ctx, base);
	// fsubs f13,f6,f5
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsubs f12,f7,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f1.f64));
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82328250
	if (ctx.cr6.lt) goto loc_82328250;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_82328250:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82328260"))) PPC_WEAK_FUNC(sub_82328260);
PPC_FUNC_IMPL(__imp__sub_82328260) {
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
	// lbz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 64);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x823282d4
	if (!ctx.cr6.eq) goto loc_823282D4;
	// lbz r11,65(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 65);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x823282a0
	if (!ctx.cr6.eq) goto loc_823282A0;
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
loc_823282A0:
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 196608;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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
loc_823282D4:
	// lbz r9,65(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 65);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// bne cr6,0x82328314
	if (!ctx.cr6.eq) goto loc_82328314;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 196608;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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
loc_82328314:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addis r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 196608;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r8,32192
	ctx.r8.s64 = ctx.r8.s64 + 32192;
	// addis r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 196608;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f1,44(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82327f80
	ctx.lr = 0x8232834C;
	sub_82327F80(ctx, base);
	// lfs f7,44(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fmr f6,f1
	ctx.f6.f64 = ctx.f1.f64;
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// bl 0x82327f80
	ctx.lr = 0x8232835C;
	sub_82327F80(ctx, base);
	// fmr f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f1.f64;
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// bl 0x82327f80
	ctx.lr = 0x82328368;
	sub_82327F80(ctx, base);
	// fmr f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f1.f64;
	// lfs f1,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82327f80
	ctx.lr = 0x82328374;
	sub_82327F80(ctx, base);
	// fsubs f0,f6,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsubs f13,f7,f1
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f1.f64));
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8232838c
	if (ctx.cr6.lt) goto loc_8232838C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8232838C:
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

__attribute__((alias("__imp__sub_823283A0"))) PPC_WEAK_FUNC(sub_823283A0);
PPC_FUNC_IMPL(__imp__sub_823283A0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x823283A8;
	__savegprlr_27(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// lbz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// beq cr6,0x82328428
	if (ctx.cr6.eq) goto loc_82328428;
	// addi r8,r3,6
	ctx.r8.s64 = ctx.r3.s64 + 6;
	// subfic r29,r3,-6
	ctx.xer.ca = ctx.r3.u32 <= 4294967290;
	ctx.r29.s64 = -6 - ctx.r3.s64;
loc_823283D0:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r28,r30,20532
	ctx.r28.s64 = ctx.r30.s64 + 20532;
	// lbz r9,24(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 24);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// rotlwi r27,r9,2
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x82328414
	if (ctx.cr6.gt) goto loc_82328414;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x82328414
	if (!ctx.cr6.gt) goto loc_82328414;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82328414:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// add r11,r29,r8
	ctx.r11.u64 = ctx.r29.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823283d0
	if (ctx.cr6.lt) goto loc_823283D0;
loc_82328428:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// bge cr6,0x8232843c
	if (!ctx.cr6.lt) goto loc_8232843C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8232843C:
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r30,20468
	ctx.r10.s64 = ctx.r30.s64 + 20468;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82328454"))) PPC_WEAK_FUNC(sub_82328454);
PPC_FUNC_IMPL(__imp__sub_82328454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82328458"))) PPC_WEAK_FUNC(sub_82328458);
PPC_FUNC_IMPL(__imp__sub_82328458) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82328460;
	__savegprlr_27(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r31,16000
	ctx.r31.s64 = 16000;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lbz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// beq cr6,0x823284e0
	if (ctx.cr6.eq) goto loc_823284E0;
	// addi r8,r3,6
	ctx.r8.s64 = ctx.r3.s64 + 6;
	// subfic r29,r3,-6
	ctx.xer.ca = ctx.r3.u32 <= 4294967290;
	ctx.r29.s64 = -6 - ctx.r3.s64;
loc_82328488:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r28,r30,20532
	ctx.r28.s64 = ctx.r30.s64 + 20532;
	// lbz r9,24(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 24);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// rotlwi r27,r9,2
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x823284cc
	if (!ctx.cr6.gt) goto loc_823284CC;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x823284cc
	if (!ctx.cr6.lt) goto loc_823284CC;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_823284CC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// add r11,r29,r8
	ctx.r11.u64 = ctx.r29.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82328488
	if (ctx.cr6.lt) goto loc_82328488;
loc_823284E0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// bge cr6,0x823284f4
	if (!ctx.cr6.lt) goto loc_823284F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_823284F4:
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r30,20468
	ctx.r10.s64 = ctx.r30.s64 + 20468;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232850C"))) PPC_WEAK_FUNC(sub_8232850C);
PPC_FUNC_IMPL(__imp__sub_8232850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82328510"))) PPC_WEAK_FUNC(sub_82328510);
PPC_FUNC_IMPL(__imp__sub_82328510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// subfic r7,r3,-16
	ctx.xer.ca = ctx.r3.u32 <= 4294967280;
	ctx.r7.s64 = -16 - ctx.r3.s64;
	// addi r8,r11,28544
	ctx.r8.s64 = ctx.r11.s64 + 28544;
	// lfs f0,-12136(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,255
	ctx.r6.s64 = 255;
loc_82328540:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8232857c
	if (ctx.cr6.eq) goto loc_8232857C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r8,3
	ctx.r10.s64 = ctx.r8.s64 + 196608;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,66(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 66);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82328578
	if (!ctx.cr6.eq) goto loc_82328578;
	// stfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stb r5,66(r11)
	PPC_STORE_U8(ctx.r11.u32 + 66, ctx.r5.u8);
loc_82328578:
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
loc_8232857C:
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbz r11,21(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82328540
	if (ctx.cr6.lt) goto loc_82328540;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82328598"))) PPC_WEAK_FUNC(sub_82328598);
PPC_FUNC_IMPL(__imp__sub_82328598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x823285A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r11,21(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823289c8
	if (ctx.cr6.eq) goto loc_823289C8;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// lfs f5,20052(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20052);
	ctx.f5.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f6,2864(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f6.f64 = double(temp.f32);
	// subfic r27,r29,-16
	ctx.xer.ca = ctx.r29.u32 <= 4294967280;
	ctx.r27.s64 = -16 - ctx.r29.s64;
	// lfs f4,-12136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f4.f64 = double(temp.f32);
	// addi r4,r11,28544
	ctx.r4.s64 = ctx.r11.s64 + 28544;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r26,255
	ctx.r26.s64 = 255;
	// li r28,2
	ctx.r28.s64 = 2;
loc_823285F0:
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// addi r8,r4,1076
	ctx.r8.s64 = ctx.r4.s64 + 1076;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mulli r9,r10,76
	ctx.r9.s64 = ctx.r10.s64 * 76;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x823286a0
	if (ctx.cr6.eq) goto loc_823286A0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r9,r4,3
	ctx.r9.s64 = ctx.r4.s64 + 196608;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,32192
	ctx.r9.s64 = ctx.r9.s64 + 32192;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r6,61(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 61);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82328650
	if (ctx.cr6.eq) goto loc_82328650;
	// lbz r3,66(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 66);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x82328648
	if (!ctx.cr6.eq) goto loc_82328648;
	// stfs f4,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// stb r25,66(r5)
	PPC_STORE_U8(ctx.r5.u32 + 66, ctx.r25.u8);
loc_82328648:
	// stb r26,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
	// b 0x823289ac
	goto loc_823289AC;
loc_82328650:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82327f80
	ctx.lr = 0x82328670;
	sub_82327F80(ctx, base);
	// fmr f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f1.f64;
	// lfs f1,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82327f80
	ctx.lr = 0x8232867C;
	sub_82327F80(ctx, base);
	// fsubs f0,f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f1.f64));
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bge cr6,0x8232868c
	if (!ctx.cr6.lt) goto loc_8232868C;
	// fmr f0,f6
	ctx.f0.f64 = ctx.f6.f64;
loc_8232868C:
	// lbz r8,66(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 66);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bne cr6,0x823289ac
	if (!ctx.cr6.eq) goto loc_823289AC;
	// stfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// b 0x823289ac
	goto loc_823289AC;
loc_823286A0:
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lwzx r9,r6,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r10,r11,15464
	ctx.r10.u64 = ctx.r11.u64 | 15464;
	// lwzx r8,r4,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r11,r5,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x823286fc
	if (ctx.cr6.eq) goto loc_823286FC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 196608;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,65(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x823289ac
	if (ctx.cr6.eq) goto loc_823289AC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x82328714
	goto loc_82328714;
loc_823286FC:
	// lbz r11,70(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 70);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x823289ac
	if (ctx.cr6.eq) goto loc_823289AC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_82328714:
	// addis r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 196608;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823289ac
	if (ctx.cr6.eq) goto loc_823289AC;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f12,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f8
	ctx.f10.f64 = double(float(ctx.f8.f64));
	// fctiwz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfiwx f7,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f7.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82328774:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lfs f12,44(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82328788
	if (!ctx.cr6.gt) goto loc_82328788;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82328788:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823287a0
	if (ctx.cr6.lt) goto loc_823287A0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f13,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x823287a4
	goto loc_823287A4;
loc_823287A0:
	// fmr f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f6.f64;
loc_823287A4:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823287d4
	if (!ctx.cr6.lt) goto loc_823287D4;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfsx f3,r3,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// lfd f1,120(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmadds f13,f2,f8,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f13.f64));
loc_823287D4:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// fctiwz f7,f12
	ctx.fpscr.disableFlushMode();
	ctx.f7.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f7,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f7.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823287f4
	if (!ctx.cr6.gt) goto loc_823287F4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_823287F4:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8232880c
	if (ctx.cr6.lt) goto loc_8232880C;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82328810
	goto loc_82328810;
loc_8232880C:
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
loc_82328810:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82328840
	if (!ctx.cr6.lt) goto loc_82328840;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfsx f3,r3,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// lfd f1,128(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f11,f1
	ctx.f11.f64 = double(ctx.f1.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fsubs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fmadds f0,f2,f7,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f0.f64));
loc_82328840:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// fctiwz f3,f12
	ctx.fpscr.disableFlushMode();
	ctx.f3.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfiwx f3,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f3.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82328864
	if (!ctx.cr6.gt) goto loc_82328864;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82328864:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8232887c
	if (ctx.cr6.lt) goto loc_8232887C;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f13,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82328880
	goto loc_82328880;
loc_8232887C:
	// fmr f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f6.f64;
loc_82328880:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823288b0
	if (!ctx.cr6.lt) goto loc_823288B0;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lfsx f2,r3,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// lfd f0,136(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f8,f0
	ctx.f8.f64 = double(ctx.f0.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fsubs f3,f12,f7
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmadds f13,f1,f3,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f13.f64));
loc_823288B0:
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// fctiwz f2,f10
	ctx.fpscr.disableFlushMode();
	ctx.f2.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f2,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f2.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823288d0
	if (!ctx.cr6.gt) goto loc_823288D0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_823288D0:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823288e8
	if (ctx.cr6.lt) goto loc_823288E8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x823288ec
	goto loc_823288EC;
loc_823288E8:
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
loc_823288EC:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8232891c
	if (!ctx.cr6.lt) goto loc_8232891C;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// lfsx f1,r3,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfd f8,144(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fsubs f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fmadds f0,f12,f2,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f0.f64));
loc_8232891C:
	// fcmpu cr6,f11,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f6.f64);
	// ble cr6,0x82328940
	if (!ctx.cr6.gt) goto loc_82328940;
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f6
	ctx.cr6.compare(ctx.f1.f64, ctx.f6.f64);
	// ble cr6,0x82328940
	if (!ctx.cr6.gt) goto loc_82328940;
	// fmuls f0,f11,f5
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f13,40(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82328970
	if (ctx.cr6.lt) goto loc_82328970;
loc_82328940:
	// lbz r11,65(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 65);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x823289ac
	if (ctx.cr6.eq) goto loc_823289AC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 196608;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82328774
	if (!ctx.cr6.eq) goto loc_82328774;
	// b 0x823289ac
	goto loc_823289AC;
loc_82328970:
	// lbz r10,66(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 66);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8232899c
	if (ctx.cr6.eq) goto loc_8232899C;
	// lfs f12,16(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x8232898c
	if (!ctx.cr6.lt) goto loc_8232898C;
	// stfs f11,16(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
loc_8232898C:
	// lbz r9,69(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 69);
	// stb r28,66(r8)
	PPC_STORE_U8(ctx.r8.u32 + 66, ctx.r28.u8);
	// stb r9,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
	// b 0x823289ac
	goto loc_823289AC;
loc_8232899C:
	// lbz r7,69(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 69);
	// stfs f11,16(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// stb r28,66(r8)
	PPC_STORE_U8(ctx.r8.u32 + 66, ctx.r28.u8);
	// stb r7,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r7.u8);
loc_823289AC:
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// add r5,r27,r30
	ctx.r5.u64 = ctx.r27.u64 + ctx.r30.u64;
	// lbz r6,21(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 21);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823285f0
	if (ctx.cr6.lt) goto loc_823285F0;
loc_823289C8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823289D0"))) PPC_WEAK_FUNC(sub_823289D0);
PPC_FUNC_IMPL(__imp__sub_823289D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x823289D8;
	__savegprlr_29(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// addi r11,r11,23392
	ctx.r11.s64 = ctx.r11.s64 + 23392;
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fadds f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fmuls f9,f13,f4
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fadds f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f7,-48(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fmuls f10,f6,f0
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f7,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f6,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f2,f12
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fadds f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fadds f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f5,-44(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fadds f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f4,-40(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f1,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f5,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// fadds f1,f13,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f1,-48(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,-44(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// addi r31,r7,16
	ctx.r31.s64 = ctx.r7.s64 + 16;
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// addi r30,r7,32
	ctx.r30.s64 = ctx.r7.s64 + 32;
	// fadds f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f12,-40(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// ld r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f9,f0,f7
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f8,f0,f6
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f7,f5,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f6,f4,f0
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f5,f3,f0
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fadds f3,f13,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f3,-48(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fadds f2,f12,f9
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f2,-44(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fadds f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f1,-40(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// std r9,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r9.u64);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// lfs f1,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f2,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// fmuls f8,f2,f0
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// addi r9,r7,48
	ctx.r9.s64 = ctx.r7.s64 + 48;
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f3,-48(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fadds f2,f10,f8
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f2,-44(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f1,-40(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,23456
	ctx.r11.s64 = ctx.r11.s64 + 23456;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f5,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f4,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f3,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f2,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fadds f1,f13,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f1,-48(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,-44(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fadds f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f12,-40(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r7,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 16;
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f12,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f1,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f12,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// lfs f2,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r31,r8,32
	ctx.r31.s64 = ctx.r8.s64 + 32;
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fmuls f8,f2,f0
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f3,-48(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fadds f2,f10,f8
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f2,-44(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f1,-40(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// ld r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r30,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r30.u64);
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f6,f0,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f5,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fmuls f10,f0,f4
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fadds f1,f13,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f1,-48(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,-44(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fadds f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f12,-40(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r8,48
	ctx.r10.s64 = ctx.r8.s64 + 48;
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f7,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f3,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f2,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f12,f3
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f1,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f0,f4
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f4,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fadds f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f3,-48(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fadds f2,f8,f9
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f2,-44(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f1,-40(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82328FA4"))) PPC_WEAK_FUNC(sub_82328FA4);
PPC_FUNC_IMPL(__imp__sub_82328FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82328FA8"))) PPC_WEAK_FUNC(sub_82328FA8);
PPC_FUNC_IMPL(__imp__sub_82328FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f7,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f7,f13
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f5,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f6,f13
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f6,f4,f12
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfs f2,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f3,f12
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f1,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// fadds f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// fadds f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f8,f31,f11
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fmuls f13,f11,f1
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// fadds f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fadds f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fadds f12,f9,f8
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f12,-28(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,-24(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lfs f10,48(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,56(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f7,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f7,f13
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f6,f13
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f4,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f4,f12
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfs f1,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f1,f11
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f5,40(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f31,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f5,f3,f12
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f2,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f31,f11
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// lfs f30,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// fadds f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fadds f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f11,f6,f8
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// fadds f8,f5,f7
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// fadds f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f12,-32(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,-24(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fadds f11,f8,f9
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f11,-28(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfd f0,-4832(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4832);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f13,-4840(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4840);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// fmadds f7,f11,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f8,f9,f9,f7
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// frsqrte f12,f8
	ctx.f12.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f6,f8,f12
	ctx.f6.f64 = ctx.f8.f64 * ctx.f12.f64;
	// fmul f5,f12,f0
	ctx.f5.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fnmsub f4,f6,f12,f13
	ctx.f4.f64 = -(ctx.f6.f64 * ctx.f12.f64 - ctx.f13.f64);
	// fmadd f12,f4,f5,f12
	ctx.f12.f64 = ctx.f4.f64 * ctx.f5.f64 + ctx.f12.f64;
	// fmul f3,f8,f12
	ctx.f3.f64 = ctx.f8.f64 * ctx.f12.f64;
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fnmsub f1,f3,f12,f13
	ctx.f1.f64 = -(ctx.f3.f64 * ctx.f12.f64 - ctx.f13.f64);
	// fmadd f12,f1,f2,f12
	ctx.f12.f64 = ctx.f1.f64 * ctx.f2.f64 + ctx.f12.f64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmr f12,f10
	ctx.f12.f64 = ctx.f10.f64;
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f8,f12
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmsubs f3,f8,f10,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f5.f64));
	// stfs f3,-28(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fmsubs f1,f9,f7,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f2.f64));
	// stfs f1,-24(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fmsubs f4,f11,f12,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f4,-32(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f10,f10
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// frsqrte f12,f8
	ctx.f12.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f12
	ctx.f7.f64 = ctx.f8.f64 * ctx.f12.f64;
	// fmul f6,f12,f0
	ctx.f6.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fnmsub f5,f7,f12,f13
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f12.f64 - ctx.f13.f64);
	// fmadd f12,f5,f6,f12
	ctx.f12.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64;
	// fmul f4,f8,f12
	ctx.f4.f64 = ctx.f8.f64 * ctx.f12.f64;
	// fmul f3,f12,f0
	ctx.f3.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fnmsub f2,f4,f12,f13
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f12.f64 - ctx.f13.f64);
	// fmadd f1,f2,f3,f12
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f12.f64;
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmr f12,f10
	ctx.f12.f64 = ctx.f10.f64;
	// stfs f9,8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmsubs f2,f8,f10,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f5.f64));
	// stfs f2,-28(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fmsubs f1,f9,f7,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f4.f64));
	// stfs f1,-24(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fmsubs f3,f11,f12,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f3,-32(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// std r6,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r6.u64);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f10,f10
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// frsqrte f12,f8
	ctx.f12.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f12
	ctx.f7.f64 = ctx.f8.f64 * ctx.f12.f64;
	// fmul f6,f12,f0
	ctx.f6.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fnmsub f5,f7,f12,f13
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f12.f64 - ctx.f13.f64);
	// fmadd f12,f5,f6,f12
	ctx.f12.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64;
	// fmul f4,f8,f12
	ctx.f4.f64 = ctx.f8.f64 * ctx.f12.f64;
	// fmul f3,f12,f0
	ctx.f3.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fnmsub f2,f4,f12,f13
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f12.f64 - ctx.f13.f64);
	// fmadd f1,f2,f3,f12
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f12.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823292E8"))) PPC_WEAK_FUNC(sub_823292E8);
PPC_FUNC_IMPL(__imp__sub_823292E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,37
	ctx.r10.s64 = 2424832;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,49147
	ctx.r9.u64 = ctx.r10.u64 | 49147;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82329314
	if (!ctx.cr6.eq) goto loc_82329314;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// lbz r11,22(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// b 0x82329334
	goto loc_82329334;
loc_82329314:
	// lis r7,4
	ctx.r7.s64 = 262144;
	// ori r6,r7,29992
	ctx.r6.u64 = ctx.r7.u64 | 29992;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82329330
	if (!ctx.cr6.eq) goto loc_82329330;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82329330:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82329334:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r11,5
	ctx.r11.s64 = 5;
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfd f12,-1600(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + -1600);
loc_82329358:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fsel f0,f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// bne cr6,0x82329358
	if (!ctx.cr6.eq) goto loc_82329358;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f12,20952(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20952);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82329384"))) PPC_WEAK_FUNC(sub_82329384);
PPC_FUNC_IMPL(__imp__sub_82329384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82329388"))) PPC_WEAK_FUNC(sub_82329388);
PPC_FUNC_IMPL(__imp__sub_82329388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-1588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1588);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r9,r10,15416
	ctx.r9.u64 = ctx.r10.u64 | 15416;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// ori r7,r8,15416
	ctx.r7.u64 = ctx.r8.u64 | 15416;
	// ori r5,r6,15420
	ctx.r5.u64 = ctx.r6.u64 | 15420;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lis r4,4
	ctx.r4.s64 = 262144;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lhzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// ori r3,r4,15416
	ctx.r3.u64 = ctx.r4.u64 | 15416;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfd f13,20968(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 20968);
	// addi r10,r10,20080
	ctx.r10.s64 = ctx.r10.s64 + 20080;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// ori r6,r7,15420
	ctx.r6.u64 = ctx.r7.u64 | 15420;
	// lfd f12,20960(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 20960);
	// lwzx r8,r11,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lfs f0,304(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrldi r5,r9,32
	ctx.r5.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// stwx r8,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u32);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f11,-72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -72);
	ctx.f11.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f0,f8,f0,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f11.f64));
	// lfs f11,368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 368);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f0,f7,f13,f0
	ctx.f0.f64 = ctx.f7.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f13,372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f1,f6,f0,f12
	ctx.f1.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82329460"))) PPC_WEAK_FUNC(sub_82329460);
PPC_FUNC_IMPL(__imp__sub_82329460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82329468;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8259bba0
	ctx.lr = 0x82329470;
	__savefpr_26(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,61(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 61);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8232948c
	if (!ctx.cr6.eq) goto loc_8232948C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823294a0
	goto loc_823294A0;
loc_8232948C:
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// mulli r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 * 76;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// addi r10,r10,1076
	ctx.r10.s64 = ctx.r10.s64 + 1076;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823294A0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x823294e0
	if (ctx.cr6.lt) goto loc_823294E0;
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
loc_823294E0:
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f13,2868(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fsubs f13,f1,f8
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bgt cr6,0x82329534
	if (ctx.cr6.gt) goto loc_82329534;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82329544
	goto loc_82329544;
loc_82329534:
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bge cr6,0x82329544
	if (!ctx.cr6.lt) goto loc_82329544;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82329544:
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r4,2(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// rotlwi r6,r6,4
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// rotlwi r8,r4,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 4);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// std r31,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r31.u64);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// bgt cr6,0x823295a4
	if (ctx.cr6.gt) goto loc_823295A4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823295b4
	goto loc_823295B4;
loc_823295A4:
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bge cr6,0x823295b4
	if (!ctx.cr6.lt) goto loc_823295B4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_823295B4:
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// rotlwi r6,r6,4
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// rotlwi r8,r8,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ld r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r30,0(r6)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r31,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r31.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// std r30,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r30.u64);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// bgt cr6,0x82329618
	if (ctx.cr6.gt) goto loc_82329618;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82329624
	goto loc_82329624;
loc_82329618:
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82329624
	if (ctx.cr6.lt) goto loc_82329624;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82329624:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lhz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// rotlwi r8,r4,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 4);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// std r31,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r31.u64);
	// std r8,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// bgt cr6,0x82329688
	if (ctx.cr6.gt) goto loc_82329688;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82329698
	goto loc_82329698;
loc_82329688:
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bge cr6,0x82329698
	if (!ctx.cr6.lt) goto loc_82329698;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82329698:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lhz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lhz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// rotlwi r3,r3,4
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 4);
	// rotlwi r9,r9,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r3,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r3.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// lfs f12,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f11,f6,f12
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f4,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f9,f5,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// fsubs f7,f4,f8
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// lfs f31,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f9,f10
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f11,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// fadds f1,f7,f8
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f7,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fsubs f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f30,f31,f9
	ctx.f30.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// fsubs f28,f29,f8
	ctx.f28.f64 = double(float(ctx.f29.f64 - ctx.f8.f64));
	// fsubs f26,f27,f7
	ctx.f26.f64 = double(float(ctx.f27.f64 - ctx.f7.f64));
	// std r8,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// std r7,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r7.u64);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fadds f6,f12,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f5,f11,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f4,f10,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// lfs f6,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f5.f64 = double(temp.f32);
	// ld r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// lfs f4,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fsubs f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fsubs f1,f4,f10
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// std r5,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r5.u64);
	// fmuls f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// std r3,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r3.u64);
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmuls f30,f13,f30
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// fmuls f28,f28,f13
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// fmuls f13,f26,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// addi r31,r1,320
	ctx.r31.s64 = ctx.r1.s64 + 320;
	// fsubs f29,f29,f5
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f5.f64));
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// fsubs f31,f31,f6
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f6.f64));
	// addi r29,r1,336
	ctx.r29.s64 = ctx.r1.s64 + 336;
	// fsubs f27,f27,f4
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f4.f64));
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// fadds f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// fadds f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// fadds f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// fadds f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f30.f64));
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// fadds f8,f8,f28
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// fadds f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fsubs f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f9,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,256(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fsubs f12,f10,f7
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fadds f2,f5,f29
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f29.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f1,f4,f27
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f27.f64));
	// lfs f4,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f3.f64 = double(temp.f32);
	// lfs f7,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f6,f2,f7
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fsubs f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f11,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// stfs f12,260(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fsubs f8,f3,f9
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// ld r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r27,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r27.u64);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// std r26,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r26.u64);
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
	// fmadds f1,f13,f13,f5
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmadds f12,f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f11,272(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fadds f10,f9,f8
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// stfs f10,276(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fadds f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f9,280(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// ld r25,0(r9)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r25,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r25.u64);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// std r9,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r9.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmul f8,f0,f0
	ctx.f8.f64 = ctx.f0.f64 * ctx.f0.f64;
	// lfd f11,-4832(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmul f7,f0,f11
	ctx.f7.f64 = ctx.f0.f64 * ctx.f11.f64;
	// lfd f10,-4840(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// fnmsub f6,f8,f12,f10
	ctx.f6.f64 = -(ctx.f8.f64 * ctx.f12.f64 - ctx.f10.f64);
	// fmadd f0,f6,f7,f0
	ctx.f0.f64 = ctx.f6.f64 * ctx.f7.f64 + ctx.f0.f64;
	// fmul f5,f0,f0
	ctx.f5.f64 = ctx.f0.f64 * ctx.f0.f64;
	// fmul f4,f0,f11
	ctx.f4.f64 = ctx.f0.f64 * ctx.f11.f64;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fnmsub f3,f5,f12,f10
	ctx.f3.f64 = -(ctx.f5.f64 * ctx.f12.f64 - ctx.f10.f64);
	// fmadd f2,f3,f4,f0
	ctx.f2.f64 = ctx.f3.f64 * ctx.f4.f64 + ctx.f0.f64;
	// frsp f0,f2
	ctx.f0.f64 = double(float(ctx.f2.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x823289d0
	ctx.lr = 0x8232995C;
	sub_823289D0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82328fa8
	ctx.lr = 0x82329974;
	sub_82328FA8(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8259bbec
	ctx.lr = 0x82329980;
	__restfpr_26(ctx, base);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82329984"))) PPC_WEAK_FUNC(sub_82329984);
PPC_FUNC_IMPL(__imp__sub_82329984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82329988"))) PPC_WEAK_FUNC(sub_82329988);
PPC_FUNC_IMPL(__imp__sub_82329988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// lis r9,4
	ctx.r9.s64 = 262144;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// addi r6,r11,28544
	ctx.r6.s64 = ctx.r11.s64 + 28544;
	// ori r8,r9,15464
	ctx.r8.u64 = ctx.r9.u64 | 15464;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// ble cr6,0x823299c8
	if (!ctx.cr6.gt) goto loc_823299C8;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r7.u8);
	// b 0x823299cc
	goto loc_823299CC;
loc_823299C8:
	// stb r7,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r7.u8);
loc_823299CC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r9,71(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 71);
	// stfs f1,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lwz r7,-32(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f0,-31512(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -31512);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,20052
	ctx.r10.s64 = ctx.r11.s64 + 20052;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f2,f13
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// lfd f13,20976(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20976);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fsel f0,f11,f0,f2
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// lfs f11,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f0,f10,f0,f13
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lbz r11,71(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 71);
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stb r8,71(r3)
	PPC_STORE_U8(ctx.r3.u32 + 71, ctx.r8.u8);
	// stb r11,61(r3)
	PPC_STORE_U8(ctx.r3.u32 + 61, ctx.r11.u8);
	// ble cr6,0x82329a58
	if (!ctx.cr6.gt) goto loc_82329A58;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// b 0x82329a68
	goto loc_82329A68;
loc_82329A58:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfsx f6,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,28(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
loc_82329A68:
	// lfs f5,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,-104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82329c0c
	if (ctx.cr6.eq) goto loc_82329C0C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,61(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 61);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r6,3
	ctx.r10.s64 = ctx.r6.s64 + 196608;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,61(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 61);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82329ac4
	if (ctx.cr6.eq) goto loc_82329AC4;
loc_82329AB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82329AC4:
	// lfs f3,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f1,f3
	ctx.cr6.compare(ctx.f1.f64, ctx.f3.f64);
	// bgt cr6,0x82329b54
	if (ctx.cr6.gt) goto loc_82329B54;
	// bso cr6,0x82329b54
	if (ctx.cr6.so) goto loc_82329B54;
	// lbz r9,65(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// stb r9,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r9.u8);
	// beq cr6,0x82329b08
	if (ctx.cr6.eq) goto loc_82329B08;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,69(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addis r9,r6,3
	ctx.r9.s64 = ctx.r6.s64 + 196608;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,32192
	ctx.r9.s64 = ctx.r9.s64 + 32192;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r8,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, ctx.r8.u8);
loc_82329B08:
	// lbz r9,69(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lbz r8,69(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r9,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r9.u8);
	// stb r8,65(r11)
	PPC_STORE_U8(ctx.r11.u32 + 65, ctx.r8.u8);
	// blt cr6,0x82329c10
	if (ctx.cr6.lt) goto loc_82329C10;
loc_82329B24:
	// lhz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lbz r8,69(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r30,r9,r5
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82329c10
	if (!ctx.cr6.eq) goto loc_82329C10;
	// lbz r8,69(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stbx r8,r9,r5
	PPC_STORE_U8(ctx.r9.u32 + ctx.r5.u32, ctx.r8.u8);
	// bge cr6,0x82329b24
	if (!ctx.cr6.lt) goto loc_82329B24;
	// b 0x82329c10
	goto loc_82329C10;
loc_82329B54:
	// lfs f2,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// ble cr6,0x82329b9c
	if (!ctx.cr6.gt) goto loc_82329B9C;
loc_82329B60:
	// lbz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x82329b98
	if (ctx.cr6.eq) goto loc_82329B98;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r10,r6,3
	ctx.r10.s64 = ctx.r6.s64 + 196608;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82329b60
	if (ctx.cr6.gt) goto loc_82329B60;
	// b 0x82329b9c
	goto loc_82329B9C;
loc_82329B98:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82329B9C:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82329c10
	if (!ctx.cr6.eq) goto loc_82329C10;
	// lbz r8,65(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x82329be0
	if (ctx.cr6.eq) goto loc_82329BE0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r30,69(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// stb r8,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r8.u8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addis r9,r6,3
	ctx.r9.s64 = ctx.r6.s64 + 196608;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,32192
	ctx.r9.s64 = ctx.r9.s64 + 32192;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r30,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, ctx.r30.u8);
	// b 0x82329be8
	goto loc_82329BE8;
loc_82329BE0:
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r9,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r9.u8);
loc_82329BE8:
	// lbz r10,69(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// lbz r9,69(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// stb r10,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r10.u8);
	// beq cr6,0x82329ab4
	if (ctx.cr6.eq) goto loc_82329AB4;
	// stb r9,65(r11)
	PPC_STORE_U8(ctx.r11.u32 + 65, ctx.r9.u8);
	// b 0x82329c10
	goto loc_82329C10;
loc_82329C0C:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82329C10:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82329c8c
	if (ctx.cr6.eq) goto loc_82329C8C;
	// lbz r9,70(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 70);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82329c54
	if (ctx.cr6.eq) goto loc_82329C54;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r31,69(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// stb r9,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r9.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addis r8,r6,3
	ctx.r8.s64 = ctx.r6.s64 + 196608;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r8,32192
	ctx.r8.s64 = ctx.r8.s64 + 32192;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r31,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r31.u8);
loc_82329C54:
	// lbz r9,69(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r9,70(r4)
	PPC_STORE_U8(ctx.r4.u32 + 70, ctx.r9.u8);
	// blt cr6,0x82329c8c
	if (ctx.cr6.lt) goto loc_82329C8C;
loc_82329C64:
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r8,r11,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// bne cr6,0x82329c8c
	if (!ctx.cr6.eq) goto loc_82329C8C;
	// lbz r7,69(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stbx r7,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u8);
	// bge cr6,0x82329c64
	if (!ctx.cr6.lt) goto loc_82329C64;
loc_82329C8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82329C9C"))) PPC_WEAK_FUNC(sub_82329C9C);
PPC_FUNC_IMPL(__imp__sub_82329C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82329CA0"))) PPC_WEAK_FUNC(sub_82329CA0);
PPC_FUNC_IMPL(__imp__sub_82329CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// ori r7,r8,15464
	ctx.r7.u64 = ctx.r8.u64 | 15464;
	// lbz r9,61(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 61);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// lwzx r7,r10,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// bne cr6,0x82329ccc
	if (!ctx.cr6.eq) goto loc_82329CCC;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82329cd8
	goto loc_82329CD8;
loc_82329CCC:
	// mulli r9,r9,76
	ctx.r9.s64 = ctx.r9.s64 * 76;
	// addi r8,r10,1076
	ctx.r8.s64 = ctx.r10.s64 + 1076;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_82329CD8:
	// lbz r9,65(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x82329d04
	if (ctx.cr6.eq) goto loc_82329D04;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addis r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 196608;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r8,32192
	ctx.r8.s64 = ctx.r8.s64 + 32192;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r5,64(r9)
	PPC_STORE_U8(ctx.r9.u32 + 64, ctx.r5.u8);
loc_82329D04:
	// lbz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x82329d34
	if (ctx.cr6.eq) goto loc_82329D34;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r3,65(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addis r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 196608;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,32192
	ctx.r9.s64 = ctx.r9.s64 + 32192;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r3,65(r10)
	PPC_STORE_U8(ctx.r10.u32 + 65, ctx.r3.u8);
	// b 0x82329d3c
	goto loc_82329D3C;
loc_82329D34:
	// lbz r5,65(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// stb r5,70(r6)
	PPC_STORE_U8(ctx.r6.u32 + 70, ctx.r5.u8);
loc_82329D3C:
	// addi r3,r1,-16
	ctx.r3.s64 = ctx.r1.s64 + -16;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r3
	PPC_STORE_U32(ctx.r3.u32, ctx.f13.u32);
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82329d64
	if (ctx.cr6.lt) goto loc_82329D64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
loc_82329D64:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r5,255
	ctx.r5.s64 = 255;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82329db0
	if (ctx.cr6.lt) goto loc_82329DB0;
loc_82329D74:
	// lhz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// lbz r9,69(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r4,r10,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82329db0
	if (!ctx.cr6.eq) goto loc_82329DB0;
	// lbz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x82329da0
	if (ctx.cr6.eq) goto loc_82329DA0;
	// stbx r9,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u8);
	// b 0x82329da4
	goto loc_82329DA4;
loc_82329DA0:
	// stbx r5,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u8);
loc_82329DA4:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82329d74
	if (!ctx.cr6.lt) goto loc_82329D74;
loc_82329DB0:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lbz r8,69(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lhz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r4,r10,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82329dd8
	if (!ctx.cr6.eq) goto loc_82329DD8;
	// stbx r5,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u8);
loc_82329DD8:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82329e14
	if (ctx.cr6.lt) goto loc_82329E14;
loc_82329DE4:
	// lhz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// lbz r3,69(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82329e08
	if (!ctx.cr6.eq) goto loc_82329E08;
	// lbz r4,1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r4,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
loc_82329E08:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82329de4
	if (!ctx.cr6.lt) goto loc_82329DE4;
loc_82329E14:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r5,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r5.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r5,65(r11)
	PPC_STORE_U8(ctx.r11.u32 + 65, ctx.r5.u8);
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82329E30"))) PPC_WEAK_FUNC(sub_82329E30);
PPC_FUNC_IMPL(__imp__sub_82329E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwz r10,20464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20464);
	// lwz r5,56(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r10,r11,28596
	ctx.r10.s64 = ctx.r11.s64 + 28596;
loc_82329E54:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,21(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 21);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82329e88
	if (!ctx.cr6.gt) goto loc_82329E88;
	// lbz r9,69(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
loc_82329E70:
	// lbzx r4,r8,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82329e9c
	if (ctx.cr6.eq) goto loc_82329E9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82329e70
	if (ctx.cr6.lt) goto loc_82329E70;
loc_82329E88:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82329e54
	if (ctx.cr6.lt) goto loc_82329E54;
	// blr 
	return;
loc_82329E9C:
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82329EAC"))) PPC_WEAK_FUNC(sub_82329EAC);
PPC_FUNC_IMPL(__imp__sub_82329EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82329EB0"))) PPC_WEAK_FUNC(sub_82329EB0);
PPC_FUNC_IMPL(__imp__sub_82329EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82329EB8;
	__savegprlr_25(ctx, base);
	// lbz r11,61(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 61);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// addi r27,r10,28544
	ctx.r27.s64 = ctx.r10.s64 + 28544;
	// bne cr6,0x82329ed4
	if (!ctx.cr6.eq) goto loc_82329ED4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82329ee0
	goto loc_82329EE0;
loc_82329ED4:
	// mulli r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 * 76;
	// addi r10,r27,1076
	ctx.r10.s64 = ctx.r27.s64 + 1076;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82329EE0:
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r25,r8,24
	ctx.r25.u64 = ctx.r8.u32 & 0xFF;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f13.u64);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lhz r11,-74(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -74);
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// beq cr6,0x82329f0c
	if (ctx.cr6.eq) goto loc_82329F0C;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82329f2c
	goto loc_82329F2C;
loc_82329F0C:
	// lbz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x82329f24
	if (!ctx.cr6.gt) goto loc_82329F24;
	// addi r8,r28,1
	ctx.r8.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// b 0x82329f2c
	goto loc_82329F2C;
loc_82329F24:
	// addi r3,r28,3
	ctx.r3.s64 = ctx.r28.s64 + 3;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
loc_82329F2C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r26,r8,65535
	ctx.r26.u64 = ctx.r8.u64 | 65535;
	// lwz r30,16(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82329f50
	if (ctx.cr6.lt) goto loc_82329F50;
	// add r3,r30,r26
	ctx.r3.u64 = ctx.r30.u64 + ctx.r26.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
loc_82329F50:
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82329f74
	if (ctx.cr6.eq) goto loc_82329F74;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82329f6c
	if (ctx.cr6.eq) goto loc_82329F6C;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82329f84
	goto loc_82329F84;
loc_82329F6C:
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x82329f84
	goto loc_82329F84;
loc_82329F74:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// bne cr6,0x82329f84
	if (!ctx.cr6.eq) goto loc_82329F84;
	// li r7,3
	ctx.r7.s64 = 3;
loc_82329F84:
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8232a094
	if (ctx.cr6.lt) goto loc_8232A094;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r29,r30,-1
	ctx.r29.s64 = ctx.r30.s64 + -1;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82329FA8:
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x82329fb8
	if (ctx.cr6.lt) goto loc_82329FB8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82329FB8:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82329ff0
	if (!ctx.cr6.lt) goto loc_82329FF0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82329ff0
	if (ctx.cr6.lt) goto loc_82329FF0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x82329ff4
	if (!ctx.cr6.eq) goto loc_82329FF4;
loc_82329FF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82329FF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232a084
	if (ctx.cr6.eq) goto loc_8232A084;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8232a074
	if (ctx.cr6.eq) goto loc_8232A074;
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8232a084
	if (ctx.cr6.eq) goto loc_8232A084;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// mulli r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 * 76;
	// lhzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// addi r9,r27,1076
	ctx.r9.s64 = ctx.r27.s64 + 1076;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8232a09c
	if (!ctx.cr6.eq) goto loc_8232A09C;
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r9,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r9.u64);
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lfd f12,-80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f9,0(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8232A074:
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8232a0e0
	if (!ctx.cr6.eq) goto loc_8232A0E0;
loc_8232A084:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,-18
	ctx.r9.s64 = ctx.r9.s64 + -18;
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82329fa8
	if (!ctx.cr6.lt) goto loc_82329FA8;
loc_8232A094:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8232A09C:
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r7,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r7.u64);
	// std r4,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r4.u64);
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lfd f8,-80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,-72(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fsubs f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// stfs f2,0(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f3,0(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8232A0E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r27,1076
	ctx.r10.s64 = ctx.r27.s64 + 1076;
	// mulli r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 * 76;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lhzx r10,r7,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8232a184
	if (ctx.cr6.eq) goto loc_8232A184;
	// subf r9,r28,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r28.s64;
	// add r7,r9,r26
	ctx.r7.u64 = ctx.r9.u64 + ctx.r26.u64;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x8232a120
	if (!ctx.cr6.gt) goto loc_8232A120;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8232A120:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r3,r11,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r9.u64);
	// lfd f1,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// ble cr6,0x8232a170
	if (!ctx.cr6.gt) goto loc_8232A170;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r7.u64);
	// lfd f12,-72(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8232A170:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8232A184:
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// std r3,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r3.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r11.u64);
	// lfd f9,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f8,-80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// stfs f5,0(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// stfs f4,0(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232A1BC"))) PPC_WEAK_FUNC(sub_8232A1BC);
PPC_FUNC_IMPL(__imp__sub_8232A1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232A1C0"))) PPC_WEAK_FUNC(sub_8232A1C0);
PPC_FUNC_IMPL(__imp__sub_8232A1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lbz r8,71(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 71);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f12,20384(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20384);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r10,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r10.u8);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stb r10,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, ctx.r10.u8);
	// lfs f11,15560(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15560);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stb r11,67(r3)
	PPC_STORE_U8(ctx.r3.u32 + 67, ctx.r11.u8);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stb r11,61(r3)
	PPC_STORE_U8(ctx.r3.u32 + 61, ctx.r11.u8);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stb r11,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r11.u8);
	// lfs f13,-12136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12136);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r11,70(r3)
	PPC_STORE_U8(ctx.r3.u32 + 70, ctx.r11.u8);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// andi. r7,r8,226
	ctx.r7.u64 = ctx.r8.u64 & 226;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r10,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, ctx.r10.u8);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stb r10,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r10.u8);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stb r11,62(r3)
	PPC_STORE_U8(ctx.r3.u32 + 62, ctx.r11.u8);
	// stb r11,63(r3)
	PPC_STORE_U8(ctx.r3.u32 + 63, ctx.r11.u8);
	// sth r9,56(r3)
	PPC_STORE_U16(ctx.r3.u32 + 56, ctx.r9.u16);
	// sth r9,58(r3)
	PPC_STORE_U16(ctx.r3.u32 + 58, ctx.r9.u16);
	// stb r7,71(r3)
	PPC_STORE_U8(ctx.r3.u32 + 71, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232A274"))) PPC_WEAK_FUNC(sub_8232A274);
PPC_FUNC_IMPL(__imp__sub_8232A274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232A278"))) PPC_WEAK_FUNC(sub_8232A278);
PPC_FUNC_IMPL(__imp__sub_8232A278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,15488
	ctx.r9.u64 = ctx.r10.u64 | 15488;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// ori r6,r7,15489
	ctx.r6.u64 = ctx.r7.u64 | 15489;
	// lbzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r10,r4,15416
	ctx.r10.u64 = ctx.r4.u64 | 15416;
	// ori r7,r8,15416
	ctx.r7.u64 = ctx.r8.u64 | 15416;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// ori r5,r6,15420
	ctx.r5.u64 = ctx.r6.u64 | 15420;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lhzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// ori r7,r4,15416
	ctx.r7.u64 = ctx.r4.u64 | 15416;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r11,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// addi r10,r10,20080
	ctx.r10.s64 = ctx.r10.s64 + 20080;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// ori r4,r5,15420
	ctx.r4.u64 = ctx.r5.u64 | 15420;
	// lfs f13,464(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 464);
	ctx.f13.f64 = double(temp.f32);
	// stwx r9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// stwx r9,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f12,-72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -72);
	ctx.f12.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f6,f7,f13,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232A350"))) PPC_WEAK_FUNC(sub_8232A350);
PPC_FUNC_IMPL(__imp__sub_8232A350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x8232A358;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8259bba8
	ctx.lr = 0x8232A360;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r24,r10,28544
	ctx.r24.s64 = ctx.r10.s64 + 28544;
	// lbz r11,61(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 61);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8232a384
	if (!ctx.cr6.eq) goto loc_8232A384;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8232a390
	goto loc_8232A390;
loc_8232A384:
	// mulli r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 * 76;
	// addi r10,r24,1076
	ctx.r10.s64 = ctx.r24.s64 + 1076;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8232A390:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r10,67(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 67);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfsx f4,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f28,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f4,f28
	ctx.cr6.compare(ctx.f4.f64, ctx.f28.f64);
	// bge cr6,0x8232a3c8
	if (!ctx.cr6.lt) goto loc_8232A3C8;
loc_8232A3B4:
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8259bbf4
	ctx.lr = 0x8232A3C4;
	__restfpr_28(ctx, base);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_8232A3C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f28.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82328260
	ctx.lr = 0x8232A3E0;
	sub_82328260(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r27,r11,20088
	ctx.r27.s64 = ctx.r11.s64 + 20088;
	// li r23,127
	ctx.r23.s64 = 127;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f6,360(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 360);
	ctx.f6.f64 = double(temp.f32);
	// lfs f29,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x8232a4d0
	if (ctx.cr6.eq) goto loc_8232A4D0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82327f80
	ctx.lr = 0x8232A40C;
	sub_82327F80(ctx, base);
	// fmr f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f1.f64;
	// lfs f1,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82327f80
	ctx.lr = 0x8232A418;
	sub_82327F80(ctx, base);
	// fsubs f12,f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f1.f64));
	// fabs f0,f12
	ctx.f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// bge cr6,0x8232a4d0
	if (!ctx.cr6.lt) goto loc_8232A4D0;
	// lfs f0,-140(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f8,f13,f0,f11
	ctx.f8.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// lfs f9,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f7,f10,f0,f9
	ctx.f7.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// fabs f0,f8
	ctx.f0.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fabs f13,f7
	ctx.f13.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8232a4cc
	if (!ctx.cr6.gt) goto loc_8232A4CC;
	// lwz r11,52(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232a488
	if (ctx.cr6.eq) goto loc_8232A488;
	// lbz r10,67(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 67);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x8232a488
	if (ctx.cr6.eq) goto loc_8232A488;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f5,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fmuls f0,f4,f29
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// b 0x8232a48c
	goto loc_8232A48C;
loc_8232A488:
	// fmr f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f4.f64;
loc_8232A48C:
	// fabs f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fmuls f3,f0,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// ble cr6,0x8232a4cc
	if (!ctx.cr6.gt) goto loc_8232A4CC;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwimi r5,r23,23,1,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r23.u32, 23) & 0x7FFFFFFF) | (ctx.r5.u64 & 0xFFFFFFFF80000000);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,456(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f1,f0
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x8232a4d0
	goto loc_8232A4D0;
loc_8232A4CC:
	// fmr f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f28.f64;
loc_8232A4D0:
	// lbz r4,71(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 71);
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232a52c
	if (ctx.cr6.eq) goto loc_8232A52C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stfiwx f13,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f13.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,14(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// stb r8,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r8.u8);
	// lbz r7,15(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// stb r7,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r7.u8);
	// lhz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r6,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r6.u16);
	// lhz r5,6(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// sth r5,58(r31)
	PPC_STORE_U16(ctx.r31.u32 + 58, ctx.r5.u16);
loc_8232A52C:
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8232a6bc
	if (!ctx.cr6.eq) goto loc_8232A6BC;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8232A53C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8232a564
	if (!ctx.cr6.eq) goto loc_8232A564;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r10,67(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 67);
	// lbz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 62);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lhz r29,56(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfsx f31,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8232a580
	goto loc_8232A580;
loc_8232A564:
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lbz r6,67(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 67);
	// lbz r11,63(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 63);
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lhz r29,58(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 58);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lfsx f31,r5,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f31.f64 = double(temp.f32);
loc_8232A580:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8232a590
	if (!ctx.cr6.eq) goto loc_8232A590;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8232a59c
	goto loc_8232A59C;
loc_8232A590:
	// addi r10,r24,1076
	ctx.r10.s64 = ctx.r24.s64 + 1076;
	// mulli r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 * 76;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8232A59C:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// blt cr6,0x8232a6ac
	if (ctx.cr6.lt) goto loc_8232A6AC;
	// bso cr6,0x8232a6ac
	if (ctx.cr6.so) goto loc_8232A6AC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8232a6ac
	if (ctx.cr6.eq) goto loc_8232A6AC;
	// cmplwi cr6,r29,65535
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 65535, ctx.xer);
	// beq cr6,0x8232a6ac
	if (ctx.cr6.eq) goto loc_8232A6AC;
	// lfs f1,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8259d868
	ctx.lr = 0x8232A5C0;
	sub_8259D868(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// fsubs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fadds f4,f8,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82328120
	ctx.lr = 0x8232A5F0;
	sub_82328120(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8232a6ac
	if (ctx.cr6.eq) goto loc_8232A6AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,44(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82327f80
	ctx.lr = 0x8232A608;
	sub_82327F80(ctx, base);
	// fmr f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f1.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82327f80
	ctx.lr = 0x8232A614;
	sub_82327F80(ctx, base);
	// fsubs f13,f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f1.f64));
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fabs f0,f13
	ctx.f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bge cr6,0x8232a6ac
	if (!ctx.cr6.lt) goto loc_8232A6AC;
	// lwz r10,52(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232a680
	if (ctx.cr6.eq) goto loc_8232A680;
	// lbz r11,67(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 67);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8232a680
	if (ctx.cr6.eq) goto loc_8232A680;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8232a668
	if (!ctx.cr6.eq) goto loc_8232A668;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f5,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// fmuls f0,f4,f29
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// b 0x8232a684
	goto loc_8232A684;
loc_8232A668:
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f3,r6,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// fmuls f0,f2,f29
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f29.f64));
	// b 0x8232a684
	goto loc_8232A684;
loc_8232A680:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_8232A684:
	// stfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r5,r23,23,1,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r23.u32, 23) & 0x7FFFFFFF) | (ctx.r5.u64 & 0xFFFFFFFF80000000);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,456(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 456);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8232A6AC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// blt cr6,0x8232a53c
	if (ctx.cr6.lt) goto loc_8232A53C;
	// lfs f6,360(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 360);
	ctx.f6.f64 = double(temp.f32);
loc_8232A6BC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8232a3b4
	if (ctx.cr6.eq) goto loc_8232A3B4;
	// extsw r4,r25
	ctx.r4.s64 = ctx.r25.s32;
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f12,f30,f9
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f9.f64));
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f0,f8,f0,f12
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsubs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f1,f7,f0,f13
	ctx.f1.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x8259bbf4
	ctx.lr = 0x8232A704;
	__restfpr_28(ctx, base);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232A708"))) PPC_WEAK_FUNC(sub_8232A708);
PPC_FUNC_IMPL(__imp__sub_8232A708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lbz r11,69(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// lbz r9,69(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 69);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r6,r11,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addis r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 262144;
	// addis r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 262144;
	// addi r7,r8,-12976
	ctx.r7.s64 = ctx.r8.s64 + -12976;
	// addi r8,r10,-12976
	ctx.r8.s64 = ctx.r10.s64 + -12976;
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f13,f6,f5
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmadds f4,f0,f0,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f3,f13,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fsqrts f0,f3
	ctx.f0.f64 = double(float(sqrt(ctx.f3.f64)));
	// fadds f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8232a7a0
	if (!ctx.cr6.lt) goto loc_8232A7A0;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8232A7A0:
	// lbz r11,73(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 73);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8232a7cc
	if (ctx.cr6.eq) goto loc_8232A7CC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8232a7cc
	if (ctx.cr6.eq) goto loc_8232A7CC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,20524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20524);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// blr 
	return;
loc_8232A7CC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,20524
	ctx.r11.s64 = ctx.r11.s64 + 20524;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232A7E0"))) PPC_WEAK_FUNC(sub_8232A7E0);
PPC_FUNC_IMPL(__imp__sub_8232A7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r9,r10,15416
	ctx.r9.u64 = ctx.r10.u64 | 15416;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// lis r31,4
	ctx.r31.s64 = 262144;
	// ori r31,r31,15416
	ctx.r31.u64 = ctx.r31.u64 | 15416;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// ori r10,r8,15416
	ctx.r10.u64 = ctx.r8.u64 | 15416;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r9,r9,15420
	ctx.r9.u64 = ctx.r9.u64 | 15420;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lis r31,4
	ctx.r31.s64 = 262144;
	// ori r31,r31,15420
	ctx.r31.u64 = ctx.r31.u64 | 15420;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrldi r3,r10,32
	ctx.r3.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,20008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20008);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-1576(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1576);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8232a8b8
	if (!ctx.cr6.lt) goto loc_8232A8B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f8,32(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,32(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r6,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r6.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8232A8B8:
	// addi r3,r6,5
	ctx.r3.s64 = ctx.r6.s64 + 5;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f6,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f0,f4,f13
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fadds f3,f0,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fcmpu cr6,f12,f3
	ctx.cr6.compare(ctx.f12.f64, ctx.f3.f64);
	// bge cr6,0x8232a90c
	if (!ctx.cr6.lt) goto loc_8232A90C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f2,32(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,32(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8232A90C:
	// addi r6,r6,11
	ctx.r6.s64 = ctx.r6.s64 + 11;
	// lfs f0,32(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,32(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// stb r8,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r8.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232A954"))) PPC_WEAK_FUNC(sub_8232A954);
PPC_FUNC_IMPL(__imp__sub_8232A954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232A958"))) PPC_WEAK_FUNC(sub_8232A958);
PPC_FUNC_IMPL(__imp__sub_8232A958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,26080
	ctx.r9.s64 = ctx.r11.s64 + 26080;
	// addis r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 196608;
	// addi r11,r11,13672
	ctx.r11.s64 = ctx.r11.s64 + 13672;
loc_8232A96C:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r4,r8
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x8232a994
	if (ctx.cr6.eq) goto loc_8232A994;
	// addis r8,r9,3
	ctx.r8.s64 = ctx.r9.s64 + 196608;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r8,14872
	ctx.r7.s64 = ctx.r8.s64 + 14872;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8232a96c
	if (ctx.cr6.lt) goto loc_8232A96C;
	// blr 
	return;
loc_8232A994:
	// addis r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 196608;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,14872
	ctx.r4.s64 = ctx.r11.s64 + 14872;
	// addis r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 65536;
	// addi r5,r5,-3256
	ctx.r5.s64 = ctx.r5.s64 + -3256;
	// lwzx r10,r6,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232A9B8"))) PPC_WEAK_FUNC(sub_8232A9B8);
PPC_FUNC_IMPL(__imp__sub_8232A9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,52560
	ctx.r10.u64 = ctx.r11.u64 | 52560;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addis r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 262144;
	// addi r10,r10,-13168
	ctx.r10.s64 = ctx.r10.s64 + -13168;
loc_8232A9DC:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r4,r8
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x8232a9fc
	if (ctx.cr6.eq) goto loc_8232A9FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8232a9dc
	if (ctx.cr6.lt) goto loc_8232A9DC;
	// blr 
	return;
loc_8232A9FC:
	// addis r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 65536;
	// addi r6,r6,-3268
	ctx.r6.s64 = ctx.r6.s64 + -3268;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// stb r11,490(r5)
	PPC_STORE_U8(ctx.r5.u32 + 490, ctx.r11.u8);
	// stw r3,240(r5)
	PPC_STORE_U32(ctx.r5.u32 + 240, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232AA18"))) PPC_WEAK_FUNC(sub_8232AA18);
PPC_FUNC_IMPL(__imp__sub_8232AA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r7,r4,-1
	ctx.r7.s64 = ctx.r4.s64 + -1;
	// addi r10,r11,28544
	ctx.r10.s64 = ctx.r11.s64 + 28544;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 10, ctx.xer);
	// lwz r11,20464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20464);
	// bgt cr6,0x8232aae4
	if (ctx.cr6.gt) {
		// ERROR 8232AAE4
		return;
	}
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-21932
	ctx.r12.s64 = ctx.r12.s64 + -21932;
	// rlwinm r0,r7,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r7.u64) {
	case 0:
		// ERROR: 0x8232AA80
		return;
	case 1:
		sub_8232AA90(ctx, base);
		return;
	case 2:
		sub_8232AAB0(ctx, base);
		return;
	case 3:
		sub_8232AAC0(ctx, base);
		return;
	case 4:
		sub_8232AAA0(ctx, base);
		return;
	case 5:
		// ERROR: 0x8232AAE4
		return;
	case 6:
		// ERROR: 0x8232AAE4
		return;
	case 7:
		// ERROR: 0x8232AAE4
		return;
	case 8:
		// ERROR: 0x8232AAE4
		return;
	case 9:
		// ERROR: 0x8232AAE4
		return;
	case 10:
		sub_8232AAD0(ctx, base);
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8232AA54"))) PPC_WEAK_FUNC(sub_8232AA54);
PPC_FUNC_IMPL(__imp__sub_8232AA54) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-21888(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21888);
	// lwz r17,-21872(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21872);
	// lwz r17,-21840(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21840);
	// lwz r17,-21824(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21824);
	// lwz r17,-21856(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21856);
	// lwz r17,-21788(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21788);
	// lwz r17,-21788(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21788);
	// lwz r17,-21788(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21788);
	// lwz r17,-21788(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21788);
	// lwz r17,-21788(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21788);
	// lwz r17,-21808(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -21808);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// b 0x8232aadc
	// ERROR 8232AADC
	return;
}

__attribute__((alias("__imp__sub_8232AA90"))) PPC_WEAK_FUNC(sub_8232AA90);
PPC_FUNC_IMPL(__imp__sub_8232AA90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,104(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r8,108(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x8232aadc
	// ERROR 8232AADC
	return;
}

__attribute__((alias("__imp__sub_8232AAA0"))) PPC_WEAK_FUNC(sub_8232AAA0);
PPC_FUNC_IMPL(__imp__sub_8232AAA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// b 0x8232aadc
	// ERROR 8232AADC
	return;
}

__attribute__((alias("__imp__sub_8232AAB0"))) PPC_WEAK_FUNC(sub_8232AAB0);
PPC_FUNC_IMPL(__imp__sub_8232AAB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r8,132(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x8232aadc
	// ERROR 8232AADC
	return;
}

__attribute__((alias("__imp__sub_8232AAC0"))) PPC_WEAK_FUNC(sub_8232AAC0);
PPC_FUNC_IMPL(__imp__sub_8232AAC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r8,144(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// lwz r9,148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x8232aadc
	// ERROR 8232AADC
	return;
}

__attribute__((alias("__imp__sub_8232AAD0"))) PPC_WEAK_FUNC(sub_8232AAD0);
PPC_FUNC_IMPL(__imp__sub_8232AAD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lwz r8,156(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// lwz r9,160(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8232ab80
	if (ctx.cr6.eq) goto loc_8232AB80;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// ori r7,r11,15416
	ctx.r7.u64 = ctx.r11.u64 | 15416;
	// ori r5,r6,15416
	ctx.r5.u64 = ctx.r6.u64 | 15416;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// lwzx r11,r10,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// twllei r4,0
	if (ctx.r4.u32 <= 0) __builtin_debugtrap();
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r7,r11,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// lhzx r11,r10,r5
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// ori r5,r6,15416
	ctx.r5.u64 = ctx.r6.u64 | 15416;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// ori r7,r9,15420
	ctx.r7.u64 = ctx.r9.u64 | 15420;
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divwu r7,r11,r4
	ctx.r7.u32 = ctx.r11.u32 / ctx.r4.u32;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r4,r7,r4
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// stwx r11,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r11.u32);
	// ori r5,r6,15420
	ctx.r5.u64 = ctx.r6.u64 | 15420;
	// subf r6,r4,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r4.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r9,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble cr6,0x8232ab7c
	if (!ctx.cr6.gt) goto loc_8232AB7C;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
loc_8232AB5C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8232ab84
	if (!ctx.cr6.gt) goto loc_8232AB84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8232ab5c
	if (ctx.cr6.lt) goto loc_8232AB5C;
loc_8232AB7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232AB80:
	// blr 
	return;
loc_8232AB84:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232AB98"))) PPC_WEAK_FUNC(sub_8232AB98);
PPC_FUNC_IMPL(__imp__sub_8232AB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8232abac
	if (ctx.cr6.gt) goto loc_8232ABAC;
loc_8232ABA4:
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
loc_8232ABAC:
	// addis r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 262144;
	// addi r11,r11,-5048
	ctx.r11.s64 = ctx.r11.s64 + -5048;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r10,20008
	ctx.r10.s64 = ctx.r10.s64 + 20008;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 540);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x8232ac14
	if (!ctx.cr6.lt) goto loc_8232AC14;
	// cmpwi cr6,r4,11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 11, ctx.xer);
	// bne cr6,0x8232aba4
	if (!ctx.cr6.eq) goto loc_8232ABA4;
loc_8232AC14:
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r3,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lfd f10,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfd f7,-16(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfd f3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f3.u64);
	// lbz r3,-9(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232AC7C"))) PPC_WEAK_FUNC(sub_8232AC7C);
PPC_FUNC_IMPL(__imp__sub_8232AC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232AC80"))) PPC_WEAK_FUNC(sub_8232AC80);
PPC_FUNC_IMPL(__imp__sub_8232AC80) {
	PPC_FUNC_PROLOGUE();
	// add r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addis r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 262144;
	// addi r7,r7,-4989
	ctx.r7.s64 = ctx.r7.s64 + -4989;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r9,172(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne cr6,0x8232accc
	if (!ctx.cr6.eq) goto loc_8232ACCC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8232accc
	if (!ctx.cr6.eq) goto loc_8232ACCC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r4,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r4.u8);
	// blr 
	return;
loc_8232ACCC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ad00
	if (!ctx.cr6.eq) goto loc_8232AD00;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,-16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8232ad00
	if (!ctx.cr6.eq) goto loc_8232AD00;
	// addi r6,r10,255
	ctx.r6.s64 = ctx.r10.s64 + 255;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r6,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r6.u8);
	// blr 
	return;
loc_8232AD00:
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x8232ad1c
	if (!ctx.cr6.gt) goto loc_8232AD1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_8232AD1C:
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8232ad38
	if (!ctx.cr6.lt) goto loc_8232AD38;
	// addi r8,r11,255
	ctx.r8.s64 = ctx.r11.s64 + 255;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r8,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r8.u8);
	// blr 
	return;
loc_8232AD38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232AD40"))) PPC_WEAK_FUNC(sub_8232AD40);
PPC_FUNC_IMPL(__imp__sub_8232AD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 262144;
	// addi r7,r7,-5020
	ctx.r7.s64 = ctx.r7.s64 + -5020;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ad5c
	if (!ctx.cr6.eq) goto loc_8232AD5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8232AD5C:
	// lwz r4,376(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addis r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 262144;
	// addi r10,r10,-4984
	ctx.r10.s64 = ctx.r10.s64 + -4984;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lbz r9,491(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 491);
	// stw r6,376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 376, ctx.r6.u32);
	// rlwinm r8,r9,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// addis r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 65536;
	// addi r4,r4,-1288
	ctx.r4.s64 = ctx.r4.s64 + -1288;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r4,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 5;
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// lwzx r4,r8,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// slw r5,r5,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbz r4,488(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 488);
	// ori r10,r4,1
	ctx.r10.u64 = ctx.r4.u64 | 1;
	// stb r10,488(r11)
	PPC_STORE_U8(ctx.r11.u32 + 488, ctx.r10.u8);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8232ade0
	if (!ctx.cr6.eq) goto loc_8232ADE0;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// ori r7,r8,60520
	ctx.r7.u64 = ctx.r8.u64 | 60520;
	// stwx r6,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r6.u32);
loc_8232ADE0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232ADE8"))) PPC_WEAK_FUNC(sub_8232ADE8);
PPC_FUNC_IMPL(__imp__sub_8232ADE8) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addis r8,r6,4
	ctx.r8.s64 = ctx.r6.s64 + 262144;
	// addi r8,r8,-5012
	ctx.r8.s64 = ctx.r8.s64 + -5012;
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8232ae1c
	if (!ctx.cr6.eq) goto loc_8232AE1C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8232AE1C:
	// lbz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8232ae30
	if (!ctx.cr6.eq) goto loc_8232AE30;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8232ae50
	goto loc_8232AE50;
loc_8232AE30:
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 196608;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8232AE50:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// bl 0x8232a1c0
	ctx.lr = 0x8232AE58;
	sub_8232A1C0(ctx, base);
	// lbz r11,69(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// srawi r5,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 5;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// addis r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 65536;
	// rlwinm r8,r4,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r7,-1280
	ctx.r7.s64 = ctx.r7.s64 + -1280;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lwzx r4,r10,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// slw r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stwx r11,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r11.u32);
	// lbz r10,71(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 71);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stb r9,71(r3)
	PPC_STORE_U8(ctx.r3.u32 + 71, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232AEB0"))) PPC_WEAK_FUNC(sub_8232AEB0);
PPC_FUNC_IMPL(__imp__sub_8232AEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r11,60560
	ctx.r10.u64 = ctx.r11.u64 | 60560;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8232af10
	if (!ctx.cr6.eq) goto loc_8232AF10;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,24376
	ctx.r10.s64 = ctx.r10.s64 + 24376;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// cntlzw r8,r4
	ctx.r8.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lbzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// slw r11,r3,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// and r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 & ctx.r6.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8232AF10:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232AF18"))) PPC_WEAK_FUNC(sub_8232AF18);
PPC_FUNC_IMPL(__imp__sub_8232AF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8232AF20;
	__savegprlr_28(ctx, base);
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x821041a8
	ctx.lr = 0x8232AF40;
	sub_821041A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232af58
	if (!ctx.cr6.eq) goto loc_8232AF58;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232afcc
	if (ctx.cr6.eq) goto loc_8232AFCC;
loc_8232AF58:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r10,r31,30,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFF;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32085
	ctx.r9.s64 = -2102722560;
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,24376
	ctx.r9.s64 = ctx.r9.s64 + 24376;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// beq cr6,0x8232afb4
	if (ctx.cr6.eq) goto loc_8232AFB4;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r8,r11,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r3.u8 & 0x3F));
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stbx r6,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8232AFB4:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// slw r11,r3,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// andc r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// stbx r7,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u8);
loc_8232AFCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232AFD4"))) PPC_WEAK_FUNC(sub_8232AFD4);
PPC_FUNC_IMPL(__imp__sub_8232AFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232AFD8"))) PPC_WEAK_FUNC(sub_8232AFD8);
PPC_FUNC_IMPL(__imp__sub_8232AFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// srawi r5,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 5;
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// addi r8,r8,-1288
	ctx.r8.s64 = ctx.r8.s64 + -1288;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// rlwinm r3,r4,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 & ctx.r6.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B020"))) PPC_WEAK_FUNC(sub_8232B020);
PPC_FUNC_IMPL(__imp__sub_8232B020) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 262144;
	// addi r11,r11,-5020
	ctx.r11.s64 = ctx.r11.s64 + -5020;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8232b050
	if (!ctx.cr6.eq) goto loc_8232B050;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r9,60520
	ctx.r8.u64 = ctx.r9.u64 | 60520;
	// stwx r4,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r4.u32);
	// stw r7,376(r4)
	PPC_STORE_U32(ctx.r4.u32 + 376, ctx.r7.u32);
	// b 0x8232b06c
	goto loc_8232B06C;
loc_8232B050:
	// addis r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 262144;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-5016
	ctx.r11.s64 = ctx.r11.s64 + -5016;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,376(r5)
	PPC_STORE_U32(ctx.r5.u32 + 376, ctx.r4.u32);
	// stw r6,376(r4)
	PPC_STORE_U32(ctx.r4.u32 + 376, ctx.r6.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
loc_8232B06C:
	// addis r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 262144;
	// addi r11,r11,-4984
	ctx.r11.s64 = ctx.r11.s64 + -4984;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r10,255
	ctx.r4.s64 = ctx.r10.s64 + 255;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B084"))) PPC_WEAK_FUNC(sub_8232B084);
PPC_FUNC_IMPL(__imp__sub_8232B084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232B088"))) PPC_WEAK_FUNC(sub_8232B088);
PPC_FUNC_IMPL(__imp__sub_8232B088) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addis r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 262144;
	// bne cr6,0x8232b0d4
	if (!ctx.cr6.eq) goto loc_8232B0D4;
	// addi r10,r10,-5008
	ctx.r10.s64 = ctx.r10.s64 + -5008;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232b0b8
	if (ctx.cr6.eq) goto loc_8232B0B8;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,376(r5)
	PPC_STORE_U32(ctx.r5.u32 + 376, ctx.r9.u32);
	// blr 
	return;
loc_8232B0B8:
	// lis r8,3
	ctx.r8.s64 = 196608;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r7,r8,60532
	ctx.r7.u64 = ctx.r8.u64 | 60532;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stwx r11,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u32);
	// stw r11,376(r5)
	PPC_STORE_U32(ctx.r5.u32 + 376, ctx.r11.u32);
	// blr 
	return;
loc_8232B0D4:
	// addi r10,r10,-5004
	ctx.r10.s64 = ctx.r10.s64 + -5004;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8232b0f8
	if (!ctx.cr6.eq) goto loc_8232B0F8;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r11,376(r4)
	PPC_STORE_U32(ctx.r4.u32 + 376, ctx.r11.u32);
	// stw r11,376(r5)
	PPC_STORE_U32(ctx.r5.u32 + 376, ctx.r11.u32);
	// blr 
	return;
loc_8232B0F8:
	// lwz r3,376(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 376);
	// stw r3,376(r4)
	PPC_STORE_U32(ctx.r4.u32 + 376, ctx.r3.u32);
	// stw r11,376(r5)
	PPC_STORE_U32(ctx.r5.u32 + 376, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B108"))) PPC_WEAK_FUNC(sub_8232B108);
PPC_FUNC_IMPL(__imp__sub_8232B108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,-32045
	ctx.r9.s64 = -2100101120;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// ori r7,r8,49147
	ctx.r7.u64 = ctx.r8.u64 | 49147;
	// lwz r9,-20920(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20920);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8232b14c
	if (!ctx.cr6.eq) goto loc_8232B14C;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// lbz r11,22(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// b 0x8232b16c
	goto loc_8232B16C;
loc_8232B14C:
	// lis r5,4
	ctx.r5.s64 = 262144;
	// ori r4,r5,29992
	ctx.r4.u64 = ctx.r5.u64 | 29992;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8232b168
	if (!ctx.cr6.eq) goto loc_8232B168;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232B168:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8232B16C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232b1ac
	if (ctx.cr6.eq) goto loc_8232B1AC;
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// ori r9,r11,26215
	ctx.r9.u64 = ctx.r11.u64 | 26215;
	// mulhw r8,r10,r9
	ctx.r8.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// blr 
	return;
loc_8232B1AC:
	// lis r3,10922
	ctx.r3.s64 = 715784192;
	// ori r11,r3,43691
	ctx.r11.u64 = ctx.r3.u64 | 43691;
	// mulhw r11,r10,r11
	ctx.r11.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B1E0"))) PPC_WEAK_FUNC(sub_8232B1E0);
PPC_FUNC_IMPL(__imp__sub_8232B1E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8232b270
	if (!ctx.cr6.gt) goto loc_8232B270;
	// lwz r10,76(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r6,r10,56
	ctx.r6.s64 = ctx.r10.s64 + 56;
loc_8232B200:
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8232b260
	if (!ctx.cr6.gt) goto loc_8232B260;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8232B214:
	// lbz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8232b250
	if (!ctx.cr6.gt) goto loc_8232B250;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
loc_8232B228:
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x8232b23c
	if (!ctx.cr6.eq) goto loc_8232B23C;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// b 0x8232b240
	goto loc_8232B240;
loc_8232B23C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8232B240:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b228
	if (!ctx.cr6.eq) goto loc_8232B228;
loc_8232B250:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8232b214
	if (!ctx.cr6.eq) goto loc_8232B214;
loc_8232B260:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r6,r6,88
	ctx.r6.s64 = ctx.r6.s64 + 88;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8232b200
	if (!ctx.cr6.eq) goto loc_8232B200;
loc_8232B270:
	// lwz r11,88(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232B27C"))) PPC_WEAK_FUNC(sub_8232B27C);
PPC_FUNC_IMPL(__imp__sub_8232B27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232B280"))) PPC_WEAK_FUNC(sub_8232B280);
PPC_FUNC_IMPL(__imp__sub_8232B280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8232B288;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addis r7,r3,3
	ctx.r7.s64 = ctx.r3.s64 + 196608;
	// addi r25,r11,28544
	ctx.r25.s64 = ctx.r11.s64 + 28544;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r11,15464
	ctx.r10.u64 = ctx.r11.u64 | 15464;
	// addi r7,r7,11728
	ctx.r7.s64 = ctx.r7.s64 + 11728;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r24,r25,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// ori r30,r9,64256
	ctx.r30.u64 = ctx.r9.u64 | 64256;
loc_8232B2C0:
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r8,r5,r30
	ctx.r8.u64 = ctx.r5.u64 + ctx.r30.u64;
	// li r11,32
	ctx.r11.s64 = 32;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r4,222
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 222, ctx.xer);
	// lwzx r31,r6,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// blt cr6,0x8232b2e4
	if (ctx.cr6.lt) goto loc_8232B2E4;
	// li r11,31
	ctx.r11.s64 = 31;
loc_8232B2E4:
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8232b330
	if (!ctx.cr6.gt) goto loc_8232B330;
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_8232B300:
	// and r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8232b318
	if (ctx.cr6.eq) goto loc_8232B318;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8232B318:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r7,r7,80
	ctx.r7.s64 = ctx.r7.s64 + 80;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8232b300
	if (ctx.cr6.lt) goto loc_8232B300;
loc_8232B330:
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r4,254
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 254, ctx.xer);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// blt cr6,0x8232b2c0
	if (ctx.cr6.lt) goto loc_8232B2C0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8232b5d8
	if (!ctx.cr6.gt) goto loc_8232B5D8;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_8232B354:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 64);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8232b36c
	if (!ctx.cr6.eq) goto loc_8232B36C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8232b384
	goto loc_8232B384;
loc_8232B36C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r25,3
	ctx.r10.s64 = ctx.r25.s64 + 196608;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8232B384:
	// lbz r11,65(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 65);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8232b398
	if (!ctx.cr6.eq) goto loc_8232B398;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8232b3b0
	goto loc_8232B3B0;
loc_8232B398:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r25,3
	ctx.r10.s64 = ctx.r25.s64 + 196608;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8232B3B0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8232b410
	if (ctx.cr6.eq) goto loc_8232B410;
	// lfs f0,44(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8232b410
	if (!ctx.cr6.lt) goto loc_8232B410;
	// lbz r11,61(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 61);
	// lfs f31,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8232b3e0
	if (!ctx.cr6.eq) goto loc_8232B3E0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8232b3ec
	goto loc_8232B3EC;
loc_8232B3E0:
	// mulli r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 * 76;
	// addi r10,r25,1076
	ctx.r10.s64 = ctx.r25.s64 + 1076;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8232B3EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82329ca0
	ctx.lr = 0x8232B3F4;
	sub_82329CA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r7,66(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 66);
	// lfs f2,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82329988
	ctx.lr = 0x8232B40C;
	sub_82329988(ctx, base);
	// stfs f31,40(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 40, temp.u32);
loc_8232B410:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8232b470
	if (ctx.cr6.eq) goto loc_8232B470;
	// lfs f12,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x8232b470
	if (!ctx.cr6.gt) goto loc_8232B470;
	// lbz r11,61(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 61);
	// lfs f31,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8232b440
	if (!ctx.cr6.eq) goto loc_8232B440;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8232b44c
	goto loc_8232B44C;
loc_8232B440:
	// mulli r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 * 76;
	// addi r10,r25,1076
	ctx.r10.s64 = ctx.r25.s64 + 1076;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8232B44C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82329ca0
	ctx.lr = 0x8232B454;
	sub_82329CA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r7,66(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 66);
	// lfs f2,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82329988
	ctx.lr = 0x8232B46C;
	sub_82329988(ctx, base);
	// stfs f31,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
loc_8232B470:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8232b354
	if (!ctx.cr6.eq) goto loc_8232B354;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8232b5d8
	if (!ctx.cr6.gt) goto loc_8232B5D8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_8232B48C:
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lbz r11,61(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 61);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8232b4a4
	if (!ctx.cr6.eq) goto loc_8232B4A4;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8232b4b0
	goto loc_8232B4B0;
loc_8232B4A4:
	// mulli r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 * 76;
	// addi r10,r25,1076
	ctx.r10.s64 = ctx.r25.s64 + 1076;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8232B4B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f10,44(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// lhz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// stfiwx f9,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f9.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbzx r11,r3,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8232b50c
	if (!ctx.cr6.eq) goto loc_8232B50C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8232b5c8
	if (ctx.cr6.lt) goto loc_8232B5C8;
loc_8232B4E0:
	// lhz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8232b5c4
	if (!ctx.cr6.eq) goto loc_8232B5C4;
	// lbz r9,69(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 69);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbx r9,r11,r24
	PPC_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r9.u8);
	// bge cr6,0x8232b4e0
	if (!ctx.cr6.lt) goto loc_8232B4E0;
	// b 0x8232b5c4
	goto loc_8232B5C4;
loc_8232B50C:
	// lbz r4,69(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 69);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8232b5c8
	if (!ctx.cr6.eq) goto loc_8232B5C8;
loc_8232B518:
	// lbz r9,65(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 65);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8232b5a0
	if (ctx.cr6.eq) goto loc_8232B5A0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r25,3
	ctx.r10.s64 = ctx.r25.s64 + 196608;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232b5a0
	if (ctx.cr6.eq) goto loc_8232B5A0;
loc_8232B548:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lfs f8,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f7.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8232b5a0
	if (ctx.cr6.lt) goto loc_8232B5A0;
	// lhz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stbx r9,r3,r24
	PPC_STORE_U8(ctx.r3.u32 + ctx.r24.u32, ctx.r9.u8);
	// lbz r9,65(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 65);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8232b5a0
	if (ctx.cr6.eq) goto loc_8232B5A0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r25,3
	ctx.r10.s64 = ctx.r25.s64 + 196608;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232b548
	if (!ctx.cr6.eq) goto loc_8232B548;
loc_8232B5A0:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8232b5c4
	if (ctx.cr6.lt) goto loc_8232B5C4;
	// lhz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// lbz r10,69(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 69);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbzx r4,r9,r24
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r24.u32);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8232b518
	if (ctx.cr6.eq) goto loc_8232B518;
loc_8232B5C4:
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_8232B5C8:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8232b48c
	if (!ctx.cr6.eq) goto loc_8232B48C;
loc_8232B5D8:
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232B5E4"))) PPC_WEAK_FUNC(sub_8232B5E4);
PPC_FUNC_IMPL(__imp__sub_8232B5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232B5E8"))) PPC_WEAK_FUNC(sub_8232B5E8);
PPC_FUNC_IMPL(__imp__sub_8232B5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8232B5F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,23012(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23012);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8232b614
	if (!ctx.cr6.eq) goto loc_8232B614;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r10,23012(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23012, ctx.r10.u32);
loc_8232B614:
	// addis r25,r31,4
	ctx.r25.s64 = ctx.r31.s64 + 262144;
	// addi r25,r25,8332
	ctx.r25.s64 = ctx.r25.s64 + 8332;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// bgt cr6,0x8232b850
	if (ctx.cr6.gt) goto loc_8232B850;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r28,r10,8305
	ctx.r28.u64 = ctx.r10.u64 | 8305;
	// ori r30,r9,8304
	ctx.r30.u64 = ctx.r9.u64 | 8304;
	// ori r27,r8,8308
	ctx.r27.u64 = ctx.r8.u64 | 8308;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-18852
	ctx.r12.s64 = ctx.r12.s64 + -18852;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8232B73C;
	case 1:
		goto loc_8232B750;
	case 2:
		goto loc_8232B85C;
	case 3:
		goto loc_8232B850;
	case 4:
		goto loc_8232B850;
	case 5:
		goto loc_8232B850;
	case 6:
		goto loc_8232B850;
	case 7:
		goto loc_8232B850;
	case 8:
		goto loc_8232B850;
	case 9:
		goto loc_8232B850;
	case 10:
		goto loc_8232B850;
	case 11:
		goto loc_8232B850;
	case 12:
		goto loc_8232B850;
	case 13:
		goto loc_8232B850;
	case 14:
		goto loc_8232B850;
	case 15:
		goto loc_8232B850;
	case 16:
		goto loc_8232B850;
	case 17:
		goto loc_8232B850;
	case 18:
		goto loc_8232B850;
	case 19:
		goto loc_8232B850;
	case 20:
		goto loc_8232B850;
	case 21:
		goto loc_8232B850;
	case 22:
		goto loc_8232B850;
	case 23:
		goto loc_8232B850;
	case 24:
		goto loc_8232B850;
	case 25:
		goto loc_8232B850;
	case 26:
		goto loc_8232B850;
	case 27:
		goto loc_8232B850;
	case 28:
		goto loc_8232B850;
	case 29:
		goto loc_8232B850;
	case 30:
		goto loc_8232B850;
	case 31:
		goto loc_8232B850;
	case 32:
		goto loc_8232B850;
	case 33:
		goto loc_8232B850;
	case 34:
		goto loc_8232B850;
	case 35:
		goto loc_8232B850;
	case 36:
		goto loc_8232B850;
	case 37:
		goto loc_8232B850;
	case 38:
		goto loc_8232B850;
	case 39:
		goto loc_8232B850;
	case 40:
		goto loc_8232B850;
	case 41:
		goto loc_8232B850;
	case 42:
		goto loc_8232B850;
	case 43:
		goto loc_8232B850;
	case 44:
		goto loc_8232B850;
	case 45:
		goto loc_8232B850;
	case 46:
		goto loc_8232B850;
	case 47:
		goto loc_8232B850;
	case 48:
		goto loc_8232B850;
	case 49:
		goto loc_8232B850;
	case 50:
		goto loc_8232B850;
	case 51:
		goto loc_8232B850;
	case 52:
		goto loc_8232B850;
	case 53:
		goto loc_8232B850;
	case 54:
		goto loc_8232B850;
	case 55:
		goto loc_8232B73C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-18628(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18628);
	// lwz r17,-18608(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18608);
	// lwz r17,-18340(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18340);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18352(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18352);
	// lwz r17,-18628(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -18628);
loc_8232B73C:
	// li r7,2
	ctx.r7.s64 = 2;
	// stbx r26,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r26.u8);
	// stbx r26,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r26.u8);
	// stwx r26,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r26.u32);
	// stw r7,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r7.u32);
loc_8232B750:
	// lis r6,3
	ctx.r6.s64 = 196608;
	// add r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 + ctx.r28.u64;
	// ori r5,r6,52560
	ctx.r5.u64 = ctx.r6.u64 | 52560;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lbzx r4,r31,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8232b848
	if (!ctx.cr6.lt) goto loc_8232B848;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r10,r10,31122
	ctx.r10.s64 = ctx.r10.s64 + 31122;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addis r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 196608;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// ldx r4,r9,r31
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x822d2858
	ctx.lr = 0x8232B794;
	sub_822D2858(ctx, base);
	// addis r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 196608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// bl 0x822d2700
	ctx.lr = 0x8232B7AC;
	sub_822D2700(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,20984
	ctx.r11.s64 = ctx.r11.s64 + 20984;
loc_8232B7B8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8232b7b8
	if (!ctx.cr6.eq) goto loc_8232B7B8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8232B7CC:
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
	// bne cr6,0x8232b7cc
	if (!ctx.cr6.eq) goto loc_8232B7CC;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// stb r26,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
	// bl 0x8210d3f0
	ctx.lr = 0x8232B7FC;
	sub_8210D3F0(ctx, base);
	// lbz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// addi r3,r29,2736
	ctx.r3.s64 = ctx.r29.s64 + 2736;
	// addis r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 65536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r4,-3268
	ctx.r4.s64 = ctx.r4.s64 + -3268;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8210e1f0
	ctx.lr = 0x8232B82C;
	sub_8210E1F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r11,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8232B848:
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
loc_8232B850:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8232B85C:
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r7,r8,8304
	ctx.r7.u64 = ctx.r8.u64 | 8304;
	// lbzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8232b87c
	if (!ctx.cr6.eq) goto loc_8232B87C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8232B87C:
	// addis r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 262144;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// addi r27,r27,8308
	ctx.r27.s64 = ctx.r27.s64 + 8308;
	// ori r28,r4,8305
	ctx.r28.u64 = ctx.r4.u64 | 8305;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8232b954
	if (ctx.cr6.eq) goto loc_8232B954;
	// add r29,r31,r28
	ctx.r29.u64 = ctx.r31.u64 + ctx.r28.u64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r30,r3,62268
	ctx.r30.u64 = ctx.r3.u64 | 62268;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x82173af8
	ctx.lr = 0x8232B8BC;
	sub_82173AF8(ctx, base);
	// lbz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// add r5,r6,r30
	ctx.r5.u64 = ctx.r6.u64 + ctx.r30.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// lbz r10,8697(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8697);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8232b954
	if (!ctx.cr6.gt) goto loc_8232B954;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r6,r10,28544
	ctx.r6.s64 = ctx.r10.s64 + 28544;
loc_8232B8F0:
	// lis r5,34
	ctx.r5.s64 = 2228224;
	// lbz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r4,r5,32132
	ctx.r4.u64 = ctx.r5.u64 | 32132;
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// lwzx r10,r6,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// lwz r8,68(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwz r10,8692(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8692);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// lbz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stb r3,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r3.u8);
	// lbz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// add r4,r5,r30
	ctx.r4.u64 = ctx.r5.u64 + ctx.r30.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// lbz r8,8697(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8697);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8232b8f0
	if (ctx.cr6.lt) goto loc_8232B8F0;
loc_8232B954:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r5,r6,52560
	ctx.r5.u64 = ctx.r6.u64 | 52560;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbzx r4,r31,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bne cr6,0x8232b99c
	if (!ctx.cr6.eq) goto loc_8232B99C;
	// li r7,28
	ctx.r7.s64 = 28;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r7,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8232B99C:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r6.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232B9B0"))) PPC_WEAK_FUNC(sub_8232B9B0);
PPC_FUNC_IMPL(__imp__sub_8232B9B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3696(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 3696);
	// addi r10,r3,128
	ctx.r10.s64 = ctx.r3.s64 + 128;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r11,67
	ctx.r11.s64 = ctx.r11.s64 + 67;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8232B9D4:
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8232b9d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232B9D4;
	// lwz r11,3696(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 3696);
	// addi r8,r11,912
	ctx.r8.s64 = ctx.r11.s64 + 912;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r4.u32);
	// lwz r11,3696(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 3696);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,3696(r5)
	PPC_STORE_U32(ctx.r5.u32 + 3696, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232BA08"))) PPC_WEAK_FUNC(sub_8232BA08);
PPC_FUNC_IMPL(__imp__sub_8232BA08) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,3696(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3696);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8232ba54
	if (!ctx.cr6.gt) goto loc_8232BA54;
	// addi r7,r31,3216
	ctx.r7.s64 = ctx.r31.s64 + 3216;
loc_8232BA30:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x823272f0
	ctx.lr = 0x8232BA38;
	sub_823272F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ba6c
	if (!ctx.cr6.eq) goto loc_8232BA6C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8232ba30
	if (ctx.cr6.lt) goto loc_8232BA30;
loc_8232BA54:
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
loc_8232BA6C:
	// addi r10,r6,912
	ctx.r10.s64 = ctx.r6.s64 + 912;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8232BA8C"))) PPC_WEAK_FUNC(sub_8232BA8C);
PPC_FUNC_IMPL(__imp__sub_8232BA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232BA90"))) PPC_WEAK_FUNC(sub_8232BA90);
PPC_FUNC_IMPL(__imp__sub_8232BA90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8259c328
	ctx.lr = 0x8232BAB8;
	sub_8259C328(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x8259c400
	ctx.lr = 0x8232BACC;
	sub_8259C400(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f13,2864(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fneg f6,f9
	ctx.f6.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f7,f10
	ctx.f7.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fadds f6,f5,f0
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fadds f5,f4,f0
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fmuls f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmuls f8,f12,f7
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f7,f6,f12
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fneg f1,f9
	ctx.f1.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f1,16(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fneg f2,f10
	ctx.f2.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fsubs f3,f0,f8
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsubs f9,f0,f7
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f8,36(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fsubs f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f7,40(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
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

__attribute__((alias("__imp__sub_8232BBD8"))) PPC_WEAK_FUNC(sub_8232BBD8);
PPC_FUNC_IMPL(__imp__sub_8232BBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232BBF4"))) PPC_WEAK_FUNC(sub_8232BBF4);
PPC_FUNC_IMPL(__imp__sub_8232BBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232BBF8"))) PPC_WEAK_FUNC(sub_8232BBF8);
PPC_FUNC_IMPL(__imp__sub_8232BBF8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lbz r10,9(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232BC1C"))) PPC_WEAK_FUNC(sub_8232BC1C);
PPC_FUNC_IMPL(__imp__sub_8232BC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232BC20"))) PPC_WEAK_FUNC(sub_8232BC20);
PPC_FUNC_IMPL(__imp__sub_8232BC20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232BC3C"))) PPC_WEAK_FUNC(sub_8232BC3C);
PPC_FUNC_IMPL(__imp__sub_8232BC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232BC40"))) PPC_WEAK_FUNC(sub_8232BC40);
PPC_FUNC_IMPL(__imp__sub_8232BC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8232BC48;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r8,r6,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// lfs f11,20992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// lfs f8,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// lfs f7,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// lfs f2,-1680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1680);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32134
	ctx.r10.s64 = -2105933824;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r3,r10,32208
	ctx.r3.s64 = ctx.r10.s64 + 32208;
	// lwz r10,180(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// lfs f0,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f6,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
	// lwz r11,180(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r9.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r8.u64);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fadds f0,f13,f6
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f13,f12,f5
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f4,f0,f0
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fadds f0,f10,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f1,f13,f13,f4
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fsubs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// ld r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r11,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r10,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r10.u64);
	// fmadds f13,f0,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f10,20528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20528);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f1,f12,f11,f10
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x820b4300
	ctx.lr = 0x8232BDA0;
	sub_820B4300(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232BDA8"))) PPC_WEAK_FUNC(sub_8232BDA8);
PPC_FUNC_IMPL(__imp__sub_8232BDA8) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r3,164
	ctx.r6.s64 = ctx.r3.s64 + 164;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// addi r5,r3,280
	ctx.r5.s64 = ctx.r3.s64 + 280;
loc_8232BDBC:
	// stw r10,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r10.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r10,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stbx r10,r5,r7
	PPC_STORE_U8(ctx.r5.u32 + ctx.r7.u32, ctx.r10.u8);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8232BDDC:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8232bddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232BDDC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r6,r6,28
	ctx.r6.s64 = ctx.r6.s64 + 28;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x8232bdbc
	if (ctx.cr6.lt) goto loc_8232BDBC;
	// stb r10,284(r3)
	PPC_STORE_U8(ctx.r3.u32 + 284, ctx.r10.u8);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232BE08"))) PPC_WEAK_FUNC(sub_8232BE08);
PPC_FUNC_IMPL(__imp__sub_8232BE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,15416
	ctx.r9.u64 = ctx.r10.u64 | 15416;
	// ori r6,r7,15416
	ctx.r6.u64 = ctx.r7.u64 | 15416;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lhzx r9,r11,r6
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r6.u32);
	// lis r6,4
	ctx.r6.s64 = 262144;
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// addi r10,r10,20080
	ctx.r10.s64 = ctx.r10.s64 + 20080;
	// ori r7,r8,15420
	ctx.r7.u64 = ctx.r8.u64 | 15420;
	// lfs f0,504(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r8,r11,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// ori r7,r6,15416
	ctx.r7.u64 = ctx.r6.u64 | 15416;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,-72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -72);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f12,500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 500);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,4
	ctx.r4.s64 = 262144;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwx r9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// ori r7,r4,15420
	ctx.r7.u64 = ctx.r4.u64 | 15420;
	// stwx r8,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwzx r4,r6,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// clrldi r3,r9,32
	ctx.r3.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfsx f11,r4,r5
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmsubs f7,f8,f13,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f11.f64));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmadds f4,f5,f12,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fadds f1,f4,f1
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232BEC0"))) PPC_WEAK_FUNC(sub_8232BEC0);
PPC_FUNC_IMPL(__imp__sub_8232BEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwz r10,20464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20464);
	// lbz r11,13(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 13);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8232bee8
	if (ctx.cr6.eq) goto loc_8232BEE8;
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// blr 
	return;
loc_8232BEE8:
	// rlwinm r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8232befc
	if (ctx.cr6.eq) goto loc_8232BEFC;
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// blr 
	return;
loc_8232BEFC:
	// rlwinm r6,r11,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8232bf10
	if (ctx.cr6.eq) goto loc_8232BF10;
	// ld r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// blr 
	return;
loc_8232BF10:
	// rlwinm r5,r11,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8232bf24
	if (ctx.cr6.eq) goto loc_8232BF24;
	// ld r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// blr 
	return;
loc_8232BF24:
	// rlwinm r4,r11,0,27,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8232bf38
	if (ctx.cr6.eq) goto loc_8232BF38;
	// ld r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32);
	// blr 
	return;
loc_8232BF38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232BF40"))) PPC_WEAK_FUNC(sub_8232BF40);
PPC_FUNC_IMPL(__imp__sub_8232BF40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lbz r11,13(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232bf5c
	if (ctx.cr6.eq) goto loc_8232BF5C;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_8232BF5C:
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8232bf70
	if (ctx.cr6.eq) goto loc_8232BF70;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_8232BF70:
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8232bf84
	if (ctx.cr6.eq) goto loc_8232BF84;
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_8232BF84:
	// rlwinm r7,r11,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8232bf98
	if (ctx.cr6.eq) goto loc_8232BF98;
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_8232BF98:
	// rlwinm r6,r11,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// li r3,10
	ctx.r3.s64 = 10;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232BFB0"))) PPC_WEAK_FUNC(sub_8232BFB0);
PPC_FUNC_IMPL(__imp__sub_8232BFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r9,r10,15416
	ctx.r9.u64 = ctx.r10.u64 | 15416;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// ori r7,r8,15416
	ctx.r7.u64 = ctx.r8.u64 | 15416;
	// ori r5,r6,15420
	ctx.r5.u64 = ctx.r6.u64 | 15420;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lhzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// ori r6,r7,15416
	ctx.r6.u64 = ctx.r7.u64 | 15416;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrldi r5,r10,32
	ctx.r5.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// ori r7,r9,15420
	ctx.r7.u64 = ctx.r9.u64 | 15420;
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,20008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20008);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f10,f1
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
loc_8232C03C:
	// cmpwi cr6,r8,11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 11, ctx.xer);
	// beq cr6,0x8232c060
	if (ctx.cr6.eq) goto loc_8232C060;
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// lfsx f9,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8232c078
	if (ctx.cr6.gt) goto loc_8232C078;
loc_8232C060:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// blt cr6,0x8232c03c
	if (ctx.cr6.lt) goto loc_8232C03C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8232C078:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C080"))) PPC_WEAK_FUNC(sub_8232C080);
PPC_FUNC_IMPL(__imp__sub_8232C080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8232C088;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r31,r10,28544
	ctx.r31.s64 = ctx.r10.s64 + 28544;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bne cr6,0x8232c0b8
	if (!ctx.cr6.eq) goto loc_8232C0B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8232c0c4
	goto loc_8232C0C4;
loc_8232C0B8:
	// mulli r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 * 76;
	// addi r10,r31,1076
	ctx.r10.s64 = ctx.r31.s64 + 1076;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8232C0C4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8232c0e0
	if (ctx.cr6.lt) goto loc_8232C0E0;
loc_8232C0D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8232C0E0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8232c0f8
	if (!ctx.cr6.eq) goto loc_8232C0F8;
	// lbz r4,284(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 284);
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8232c174
	if (!ctx.cr6.eq) goto loc_8232C174;
loc_8232C0F8:
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r31,20464
	ctx.r3.s64 = ctx.r31.s64 + 20464;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8232aeb0
	ctx.lr = 0x8232C114;
	sub_8232AEB0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8232c0d4
	if (!ctx.cr6.eq) goto loc_8232C0D4;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// ori r7,r8,15464
	ctx.r7.u64 = ctx.r8.u64 | 15464;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lbzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8232c174
	if (ctx.cr6.eq) goto loc_8232C174;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r5
	PPC_STORE_U32(ctx.r5.u32, ctx.f13.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r4,r29
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8232c178
	if (ctx.cr6.eq) goto loc_8232C178;
loc_8232C174:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8232C178:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C180"))) PPC_WEAK_FUNC(sub_8232C180);
PPC_FUNC_IMPL(__imp__sub_8232C180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8232C188;
	__savegprlr_25(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// rlwinm r27,r5,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r8,64(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lfsx f0,r9,r27
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8232c408
	if (ctx.cr6.eq) goto loc_8232C408;
	// lbz r11,284(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 284);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8232c408
	if (!ctx.cr6.eq) goto loc_8232C408;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bso cr6,0x8232c1d8
	if (ctx.cr6.so) goto loc_8232C1D8;
	// bge cr6,0x8232c408
	if (!ctx.cr6.lt) goto loc_8232C408;
loc_8232C1D8:
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r8,r9,15416
	ctx.r8.u64 = ctx.r9.u64 | 15416;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// ori r10,r5,15416
	ctx.r10.u64 = ctx.r5.u64 | 15416;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r8,r9,15420
	ctx.r8.u64 = ctx.r9.u64 | 15420;
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// ori r8,r5,15416
	ctx.r8.u64 = ctx.r5.u64 | 15416;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// ori r8,r5,15420
	ctx.r8.u64 = ctx.r5.u64 | 15420;
	// clrldi r5,r10,32
	ctx.r5.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// std r5,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r5.u64);
	// lfs f9,20008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20008);
	ctx.f9.f64 = double(temp.f32);
	// lfd f12,-80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bgt cr6,0x8232c260
	if (ctx.cr6.gt) goto loc_8232C260;
	// bns cr6,0x8232c408
	if (!ctx.cr6.so) goto loc_8232C408;
loc_8232C260:
	// lwz r8,64(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// li r26,1
	ctx.r26.s64 = 1;
	// fsubs f10,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x8232c40c
	if (!ctx.cr6.gt) goto loc_8232C40C;
	// addi r5,r6,5
	ctx.r5.s64 = ctx.r6.s64 + 5;
	// addi r30,r6,3
	ctx.r30.s64 = ctx.r6.s64 + 3;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// rlwinm r31,r5,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r6,-1
	ctx.r30.s64 = ctx.r6.s64 + -1;
	// add r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 + ctx.r28.u64;
	// lfs f11,2864(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2864);
	ctx.f11.f64 = double(temp.f32);
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
loc_8232C2A0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8232c2b4
	if (ctx.cr6.lt) goto loc_8232C2B4;
	// lwz r29,0(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfsx f12,r29,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8232c2b8
	goto loc_8232C2B8;
loc_8232C2B4:
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
loc_8232C2B8:
	// add r29,r3,r6
	ctx.r29.u64 = ctx.r3.u64 + ctx.r6.u64;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8232c2d0
	if (!ctx.cr6.lt) goto loc_8232C2D0;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfsx f13,r8,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8232c2d4
	goto loc_8232C2D4;
loc_8232C2D0:
	// fmr f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f11.f64;
loc_8232C2D4:
	// fadds f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bso cr6,0x8232c2e4
	if (ctx.cr6.so) goto loc_8232C2E4;
	// ble cr6,0x8232c348
	if (!ctx.cr6.gt) goto loc_8232C348;
loc_8232C2E4:
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r10,r10,15416
	ctx.r10.u64 = ctx.r10.u64 | 15416;
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r8,r8,15416
	ctx.r8.u64 = ctx.r8.u64 | 15416;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r8,r8,15420
	ctx.r8.u64 = ctx.r8.u64 | 15420;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r8,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r8.u64);
	// lfd f6,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fmuls f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bso cr6,0x8232c344
	if (ctx.cr6.so) goto loc_8232C344;
	// ble cr6,0x8232c36c
	if (!ctx.cr6.gt) goto loc_8232C36C;
loc_8232C344:
	// fsubs f10,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
loc_8232C348:
	// lwz r8,64(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8232c2a0
	if (ctx.cr6.lt) goto loc_8232C2A0;
	// b 0x8232c40c
	goto loc_8232C40C;
loc_8232C36C:
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x8232c384
	if (ctx.cr6.gt) goto loc_8232C384;
	// bso cr6,0x8232c384
	if (ctx.cr6.so) goto loc_8232C384;
loc_8232C378:
	// stb r25,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r25.u8);
	// stfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x8232c40c
	goto loc_8232C40C;
loc_8232C384:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x8232c39c
	if (ctx.cr6.gt) goto loc_8232C39C;
	// bso cr6,0x8232c39c
	if (ctx.cr6.so) goto loc_8232C39C;
	// stb r26,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r26.u8);
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x8232c40c
	goto loc_8232C40C;
loc_8232C39C:
	// lis r6,4
	ctx.r6.s64 = 262144;
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// ori r5,r6,15416
	ctx.r5.u64 = ctx.r6.u64 | 15416;
	// lhzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r6,r8,15416
	ctx.r6.u64 = ctx.r8.u64 | 15416;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r8,r5,15420
	ctx.r8.u64 = ctx.r5.u64 | 15420;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// clrldi r6,r10,32
	ctx.r6.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// std r6,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r6.u64);
	// lfd f1,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f11,f1
	ctx.f11.f64 = double(ctx.f1.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bgt cr6,0x8232c378
	if (ctx.cr6.gt) goto loc_8232C378;
	// bso cr6,0x8232c378
	if (ctx.cr6.so) goto loc_8232C378;
	// stb r26,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r26.u8);
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x8232c40c
	goto loc_8232C40C;
loc_8232C408:
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_8232C40C:
	// lwz r5,64(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8232c420
	if (!ctx.cr6.eq) goto loc_8232C420;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8232C420:
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C424"))) PPC_WEAK_FUNC(sub_8232C424);
PPC_FUNC_IMPL(__imp__sub_8232C424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232C428"))) PPC_WEAK_FUNC(sub_8232C428);
PPC_FUNC_IMPL(__imp__sub_8232C428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// bne cr6,0x8232c43c
	if (!ctx.cr6.eq) goto loc_8232C43C;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
loc_8232C43C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lfs f1,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C44C"))) PPC_WEAK_FUNC(sub_8232C44C);
PPC_FUNC_IMPL(__imp__sub_8232C44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232C450"))) PPC_WEAK_FUNC(sub_8232C450);
PPC_FUNC_IMPL(__imp__sub_8232C450) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232c468
	if (ctx.cr6.eq) goto loc_8232C468;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// b 0x8232c470
	goto loc_8232C470;
loc_8232C468:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_8232C470:
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwz r6,16(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x8232c498
	if (ctx.cr6.gt) goto loc_8232C498;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r5,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r5.u8);
	// blr 
	return;
loc_8232C498:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r4,276(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 276);
	// stb r4,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r4.u8);
	// lbz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 276);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// stb r10,276(r11)
	PPC_STORE_U8(ctx.r11.u32 + 276, ctx.r10.u8);
	// lwzx r4,r9,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// divw r8,r6,r10
	ctx.r8.s32 = ctx.r6.s32 / ctx.r10.s32;
	// andc r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// mullw r4,r8,r10
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// subf r10,r4,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r4.s64;
	// twlgei r5,-1
	if (ctx.r5.u32 >= 4294967295) __builtin_debugtrap();
	// stb r10,276(r11)
	PPC_STORE_U8(ctx.r11.u32 + 276, ctx.r10.u8);
	// lwzx r6,r9,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8232c4f8
	if (!ctx.cr6.eq) goto loc_8232C4F8;
	// li r5,255
	ctx.r5.s64 = 255;
	// stb r5,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r5.u8);
loc_8232C4F8:
	// lwzx r3,r9,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232C500"))) PPC_WEAK_FUNC(sub_8232C500);
PPC_FUNC_IMPL(__imp__sub_8232C500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x8232C508;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r28,r11,28544
	ctx.r28.s64 = ctx.r11.s64 + 28544;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lwz r8,64(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r9,r11,15464
	ctx.r9.u64 = ctx.r11.u64 | 15464;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwzx r27,r28,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bne cr6,0x8232c54c
	if (!ctx.cr6.eq) goto loc_8232C54C;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// b 0x8232c558
	goto loc_8232C558;
loc_8232C54C:
	// mulli r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 * 76;
	// addi r9,r28,1076
	ctx.r9.s64 = ctx.r28.s64 + 1076;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8232C558:
	// add r4,r25,r26
	ctx.r4.u64 = ctx.r25.u64 + ctx.r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,276(r4)
	PPC_STORE_U8(ctx.r4.u32 + 276, ctx.r23.u8);
	// lwz r11,64(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82328458
	ctx.lr = 0x8232C57C;
	sub_82328458(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8232c594
	if (!ctx.cr6.eq) goto loc_8232C594;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// b 0x8232c598
	goto loc_8232C598;
loc_8232C594:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8232C598:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbzx r30,r7,r27
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8232c684
	if (ctx.cr6.eq) goto loc_8232C684;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r10,r28,3
	ctx.r10.s64 = ctx.r28.s64 + 196608;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,32192
	ctx.r10.s64 = ctx.r10.s64 + 32192;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8232c684
	if (ctx.cr6.eq) goto loc_8232C684;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// li r24,255
	ctx.r24.s64 = 255;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
loc_8232C5E8:
	// lfs f12,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bso cr6,0x8232c5f8
	if (ctx.cr6.so) goto loc_8232C5F8;
	// bge cr6,0x8232c684
	if (!ctx.cr6.lt) goto loc_8232C684;
loc_8232C5F8:
	// lbz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8232c620
	if (!ctx.cr6.eq) goto loc_8232C620;
	// addi r7,r31,67
	ctx.r7.s64 = ctx.r31.s64 + 67;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8232c450
	ctx.lr = 0x8232C618;
	sub_8232C450(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// b 0x8232c628
	goto loc_8232C628;
loc_8232C620:
	// stb r24,67(r31)
	PPC_STORE_U8(ctx.r31.u32 + 67, ctx.r24.u8);
	// stw r23,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r23.u32);
loc_8232C628:
	// lfs f11,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lhz r11,94(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8232c684
	if (ctx.cr6.eq) goto loc_8232C684;
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8232c684
	if (ctx.cr6.eq) goto loc_8232C684;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r9,r28,3
	ctx.r9.s64 = ctx.r28.s64 + 196608;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,32192
	ctx.r9.s64 = ctx.r9.s64 + 32192;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8232c5e8
	if (!ctx.cr6.eq) goto loc_8232C5E8;
loc_8232C684:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C68C"))) PPC_WEAK_FUNC(sub_8232C68C);
PPC_FUNC_IMPL(__imp__sub_8232C68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232C690"))) PPC_WEAK_FUNC(sub_8232C690);
PPC_FUNC_IMPL(__imp__sub_8232C690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad8
	ctx.lr = 0x8232C698;
	__savegprlr_20(ctx, base);
	// stfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f29.u64);
	// stfd f30,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// addi r22,r11,20656
	ctx.r22.s64 = ctx.r11.s64 + 20656;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stb r24,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r24.u8);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r28,r11,28544
	ctx.r28.s64 = ctx.r11.s64 + 28544;
	// ble cr6,0x8232c7f4
	if (!ctx.cr6.gt) goto loc_8232C7F4;
	// lfs f30,-8(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -8);
	ctx.f30.f64 = double(temp.f32);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lfs f29,-64(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -64);
	ctx.f29.f64 = double(temp.f32);
	// addi r26,r23,64
	ctx.r26.s64 = ctx.r23.s64 + 64;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8232C6F4:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232c7e0
	if (ctx.cr6.eq) goto loc_8232C7E0;
	// lfs f0,-16(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,-8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f31,f13,f13,f10
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x8232c748
	if (ctx.cr6.lt) goto loc_8232C748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120aa0
	ctx.lr = 0x8232C730;
	sub_82120AA0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8232c748
	if (!ctx.cr6.eq) goto loc_8232C748;
	// clrlwi r9,r25,24
	ctx.r9.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8232c7d0
	if (ctx.cr6.eq) goto loc_8232C7D0;
loc_8232C748:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a5f00
	ctx.lr = 0x8232C750;
	sub_820A5F00(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8232c7d0
	if (!ctx.cr6.eq) goto loc_8232C7D0;
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// stb r27,0(r20)
	PPC_STORE_U8(ctx.r20.u32 + 0, ctx.r27.u8);
	// blt cr6,0x8232c790
	if (ctx.cr6.lt) goto loc_8232C790;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120aa0
	ctx.lr = 0x8232C770;
	sub_82120AA0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8232c790
	if (!ctx.cr6.eq) goto loc_8232C790;
	// lbz r5,493(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 493);
	// slw r6,r27,r30
	ctx.r6.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// andc r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// stb r4,493(r31)
	PPC_STORE_U8(ctx.r31.u32 + 493, ctx.r4.u8);
	// b 0x8232c7a0
	goto loc_8232C7A0;
loc_8232C790:
	// lbz r11,493(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 493);
	// slw r3,r27,r30
	ctx.r3.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// or r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stb r10,493(r31)
	PPC_STORE_U8(ctx.r31.u32 + 493, ctx.r10.u8);
loc_8232C7A0:
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// lbz r8,491(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 491);
	// addis r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 262144;
	// addi r11,r11,15424
	ctx.r11.s64 = ctx.r11.s64 + 15424;
	// addi r7,r10,13588
	ctx.r7.s64 = ctx.r10.s64 + 13588;
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stbx r8,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r8.u8);
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stbx r5,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r5.u8);
	// b 0x8232c7e0
	goto loc_8232C7E0;
loc_8232C7D0:
	// lbz r11,493(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 493);
	// slw r3,r27,r30
	ctx.r3.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// andc r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// stb r10,493(r31)
	PPC_STORE_U8(ctx.r31.u32 + 493, ctx.r10.u8);
loc_8232C7E0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,80
	ctx.r26.s64 = ctx.r26.s64 + 80;
	// addi r29,r29,254
	ctx.r29.s64 = ctx.r29.s64 + 254;
	// cmpw cr6,r30,r21
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x8232c6f4
	if (ctx.cr6.lt) goto loc_8232C6F4;
loc_8232C7F4:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x8232c940
	if (!ctx.cr6.gt) goto loc_8232C940;
	// lfs f30,-4(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -4);
	ctx.f30.f64 = double(temp.f32);
	// addi r27,r31,160
	ctx.r27.s64 = ctx.r31.s64 + 160;
	// lfs f29,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// addi r29,r23,16
	ctx.r29.s64 = ctx.r23.s64 + 16;
loc_8232C818:
	// lfs f9,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lbz r11,491(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 491);
	// lfs f7,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f0,f7,f9
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// fsubs f13,f6,f8
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,7492
	ctx.r7.s64 = ctx.r11.s64 + 7492;
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f4,f13,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fsqrts f0,f4
	ctx.f0.f64 = double(float(sqrt(ctx.f4.f64)));
	// stfsx f0,r8,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// lfs f3,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lbz r6,0(r20)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// lfs f2,-16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lfs f1,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f13,-8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fsqrts f31,f11
	ctx.f31.f64 = double(float(sqrt(ctx.f11.f64)));
	// beq cr6,0x8232c924
	if (ctx.cr6.eq) goto loc_8232C924;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x8232c8a0
	if (ctx.cr6.lt) goto loc_8232C8A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120aa0
	ctx.lr = 0x8232C894;
	sub_82120AA0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8232c924
	if (ctx.cr6.eq) goto loc_8232C924;
loc_8232C8A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a5f00
	ctx.lr = 0x8232C8A8;
	sub_820A5F00(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8232c924
	if (!ctx.cr6.eq) goto loc_8232C924;
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bge cr6,0x8232c8f0
	if (!ctx.cr6.lt) goto loc_8232C8F0;
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// addi r11,r11,15436
	ctx.r11.s64 = ctx.r11.s64 + 15436;
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x8232c8f0
	if (!ctx.cr6.lt) goto loc_8232C8F0;
	// add r9,r25,r10
	ctx.r9.u64 = ctx.r25.u64 + ctx.r10.u64;
	// lbz r3,491(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 491);
	// addis r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 262144;
	// addi r8,r10,15262
	ctx.r8.s64 = ctx.r10.s64 + 15262;
	// stbx r3,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r3.u8);
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stbx r7,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r7.u8);
loc_8232C8F0:
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// addi r11,r11,15430
	ctx.r11.s64 = ctx.r11.s64 + 15430;
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// bge cr6,0x8232c924
	if (!ctx.cr6.lt) goto loc_8232C924;
	// add r4,r24,r10
	ctx.r4.u64 = ctx.r24.u64 + ctx.r10.u64;
	// lbz r5,491(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 491);
	// addis r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 262144;
	// addi r3,r10,15112
	ctx.r3.s64 = ctx.r10.s64 + 15112;
	// stbx r5,r4,r3
	PPC_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r5.u8);
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
loc_8232C924:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,254
	ctx.r26.s64 = ctx.r26.s64 + 254;
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// addi r24,r24,25
	ctx.r24.s64 = ctx.r24.s64 + 25;
	// cmpw cr6,r30,r21
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x8232c818
	if (ctx.cr6.lt) goto loc_8232C818;
loc_8232C940:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f30,-120(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8259bb28
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232C954"))) PPC_WEAK_FUNC(sub_8232C954);
PPC_FUNC_IMPL(__imp__sub_8232C954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232C958"))) PPC_WEAK_FUNC(sub_8232C958);
PPC_FUNC_IMPL(__imp__sub_8232C958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// li r8,30
	ctx.r8.s64 = 30;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,-12136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12136);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stfs f0,260(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stfs f13,396(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// stw r11,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r11.u32);
	// stw r11,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8232C994:
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x8232c994
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232C994;
	// lis r9,-32151
	ctx.r9.s64 = -2107047936;
	// stfs f0,252(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f0,244(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// addi r9,r9,23136
	ctx.r9.s64 = ctx.r9.s64 + 23136;
	// stb r11,264(r3)
	PPC_STORE_U8(ctx.r3.u32 + 264, ctx.r11.u8);
	// stb r11,304(r3)
	PPC_STORE_U8(ctx.r3.u32 + 304, ctx.r11.u8);
	// lis r8,-32151
	ctx.r8.s64 = -2107047936;
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// addi r8,r8,23152
	ctx.r8.s64 = ctx.r8.s64 + 23152;
	// lfs f12,2868(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 32;
	// stfs f12,256(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// addi r31,r10,48
	ctx.r31.s64 = ctx.r10.s64 + 48;
	// stfs f12,248(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// ld r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lis r7,-32151
	ctx.r7.s64 = -2107047936;
	// lis r6,-32085
	ctx.r6.s64 = -2102722560;
	// addi r7,r7,23168
	ctx.r7.s64 = ctx.r7.s64 + 23168;
	// addi r6,r6,28496
	ctx.r6.s64 = ctx.r6.s64 + 28496;
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r9,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r8,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r8.u64);
	// li r8,-1
	ctx.r8.s64 = -1;
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// ld r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r5,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
	// ld r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r4,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r4.u64);
	// lbz r10,492(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 492);
	// stfs f0,408(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 408, temp.u32);
	// stfs f0,412(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 412, temp.u32);
	// stb r11,489(r3)
	PPC_STORE_U8(ctx.r3.u32 + 489, ctx.r11.u8);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stfs f0,416(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 416, temp.u32);
	// stb r11,493(r3)
	PPC_STORE_U8(ctx.r3.u32 + 493, ctx.r11.u8);
	// addi r10,r3,352
	ctx.r10.s64 = ctx.r3.s64 + 352;
	// stb r9,492(r3)
	PPC_STORE_U8(ctx.r3.u32 + 492, ctx.r9.u8);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stb r11,491(r3)
	PPC_STORE_U8(ctx.r3.u32 + 491, ctx.r11.u8);
	// stfs f0,400(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// stb r11,486(r3)
	PPC_STORE_U8(ctx.r3.u32 + 486, ctx.r11.u8);
	// stfs f12,404(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// stb r8,484(r3)
	PPC_STORE_U8(ctx.r3.u32 + 484, ctx.r8.u8);
	// stfs f0,428(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 428, temp.u32);
	// stw r11,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r11.u32);
	// stfs f13,432(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 432, temp.u32);
	// stb r11,487(r3)
	PPC_STORE_U8(ctx.r3.u32 + 487, ctx.r11.u8);
	// stfs f13,436(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 436, temp.u32);
	// stb r11,265(r3)
	PPC_STORE_U8(ctx.r3.u32 + 265, ctx.r11.u8);
	// stfs f13,440(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 440, temp.u32);
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// stfs f0,444(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 444, temp.u32);
	// stw r11,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r11.u32);
	// stfs f0,448(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 448, temp.u32);
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// stfs f0,452(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 452, temp.u32);
	// stw r11,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r11.u32);
	// stfs f0,456(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 456, temp.u32);
	// stb r11,488(r3)
	PPC_STORE_U8(ctx.r3.u32 + 488, ctx.r11.u8);
	// stfs f0,460(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 460, temp.u32);
	// stfs f0,476(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 476, temp.u32);
	// stfs f0,464(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 464, temp.u32);
	// stfs f0,468(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 468, temp.u32);
	// stfs f0,420(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// stfs f0,424(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 424, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8232CAD4:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8232cad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232CAD4;
	// stb r11,490(r3)
	PPC_STORE_U8(ctx.r3.u32 + 490, ctx.r11.u8);
	// stb r11,485(r3)
	PPC_STORE_U8(ctx.r3.u32 + 485, ctx.r11.u8);
	// stb r11,494(r3)
	PPC_STORE_U8(ctx.r3.u32 + 494, ctx.r11.u8);
	// stb r11,500(r3)
	PPC_STORE_U8(ctx.r3.u32 + 500, ctx.r11.u8);
	// stw r11,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r11.u32);
	// stb r11,495(r3)
	PPC_STORE_U8(ctx.r3.u32 + 495, ctx.r11.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CB04"))) PPC_WEAK_FUNC(sub_8232CB04);
PPC_FUNC_IMPL(__imp__sub_8232CB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232CB08"))) PPC_WEAK_FUNC(sub_8232CB08);
PPC_FUNC_IMPL(__imp__sub_8232CB08) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lbz r10,71(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 71);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8232cb3c
	if (!ctx.cr6.eq) goto loc_8232CB3C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8232CB3C:
	// lwz r3,388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r6,r31,464
	ctx.r6.s64 = ctx.r31.s64 + 464;
	// addi r5,r31,396
	ctx.r5.s64 = ctx.r31.s64 + 396;
	// addi r4,r31,392
	ctx.r4.s64 = ctx.r31.s64 + 392;
	// lbz r7,72(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// bl 0x82329eb0
	ctx.lr = 0x8232CB58;
	sub_82329EB0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8232cb8c
	if (ctx.cr6.eq) goto loc_8232CB8C;
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8232cb8c
	if (ctx.cr6.eq) goto loc_8232CB8C;
	// lwz r6,388(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r5,68(r6)
	PPC_STORE_U8(ctx.r6.u32 + 68, ctx.r5.u8);
	// lwz r11,388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// lbz r4,71(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 71);
	// andi. r3,r4,251
	ctx.r3.u64 = ctx.r4.u64 & 251;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r3,71(r11)
	PPC_STORE_U8(ctx.r11.u32 + 71, ctx.r3.u8);
loc_8232CB8C:
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

__attribute__((alias("__imp__sub_8232CBA4"))) PPC_WEAK_FUNC(sub_8232CBA4);
PPC_FUNC_IMPL(__imp__sub_8232CBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232CBA8"))) PPC_WEAK_FUNC(sub_8232CBA8);
PPC_FUNC_IMPL(__imp__sub_8232CBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4764(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4764);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8232cbc8
	if (!ctx.cr6.gt) goto loc_8232CBC8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8232cbe8
	if (ctx.cr6.lt) goto loc_8232CBE8;
loc_8232CBC8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,20088
	ctx.r11.s64 = ctx.r11.s64 + 20088;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8232cbf4
	if (!ctx.cr6.gt) goto loc_8232CBF4;
	// lfs f0,596(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8232cbf4
	if (!ctx.cr6.lt) goto loc_8232CBF4;
loc_8232CBE8:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_8232CBF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CC00"))) PPC_WEAK_FUNC(sub_8232CC00);
PPC_FUNC_IMPL(__imp__sub_8232CC00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,496(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CC08"))) PPC_WEAK_FUNC(sub_8232CC08);
PPC_FUNC_IMPL(__imp__sub_8232CC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r9,r10,15416
	ctx.r9.u64 = ctx.r10.u64 | 15416;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// ori r7,r8,15416
	ctx.r7.u64 = ctx.r8.u64 | 15416;
	// ori r5,r6,15420
	ctx.r5.u64 = ctx.r6.u64 | 15420;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lis r4,4
	ctx.r4.s64 = 262144;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r3,r4,15416
	ctx.r3.u64 = ctx.r4.u64 | 15416;
	// lfs f0,-1680(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1680);
	ctx.f0.f64 = double(temp.f32);
	// lhzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// ori r6,r7,15420
	ctx.r6.u64 = ctx.r7.u64 | 15420;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,20008
	ctx.r11.s64 = ctx.r11.s64 + 20008;
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f13,536(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f10,f0,f13
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CC98"))) PPC_WEAK_FUNC(sub_8232CC98);
PPC_FUNC_IMPL(__imp__sub_8232CC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r9,r10,15416
	ctx.r9.u64 = ctx.r10.u64 | 15416;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// ori r7,r8,15416
	ctx.r7.u64 = ctx.r8.u64 | 15416;
	// ori r4,r5,15420
	ctx.r4.u64 = ctx.r5.u64 | 15420;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,2864(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// lfs f0,-1680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1680);
	ctx.f0.f64 = double(temp.f32);
	// lhzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// ori r7,r8,15416
	ctx.r7.u64 = ctx.r8.u64 | 15416;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lis r4,4
	ctx.r4.s64 = 262144;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrldi r5,r10,32
	ctx.r5.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r9,r4,15420
	ctx.r9.u64 = ctx.r4.u64 | 15420;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// stfs f13,436(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 436, temp.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r6,494(r3)
	PPC_STORE_U8(ctx.r3.u32 + 494, ctx.r6.u8);
	// addi r11,r11,20008
	ctx.r11.s64 = ctx.r11.s64 + 20008;
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f13,536(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,472(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 472, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232CD40"))) PPC_WEAK_FUNC(sub_8232CD40);
PPC_FUNC_IMPL(__imp__sub_8232CD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8232CD48;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// cmpld cr6,r11,r29
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, ctx.xer);
	// beq cr6,0x8232ce34
	if (ctx.cr6.eq) goto loc_8232CE34;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lbz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r28,r11,-21272
	ctx.r28.s64 = ctx.r11.s64 + -21272;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210cf48
	ctx.lr = 0x8232CD7C;
	sub_8210CF48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// bne cr6,0x8232cd94
	if (!ctx.cr6.eq) goto loc_8232CD94;
loc_8232CD88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8232CD94:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// bl 0x822d2858
	ctx.lr = 0x8232CDAC;
	sub_822D2858(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// bl 0x822d2700
	ctx.lr = 0x8232CDC4;
	sub_822D2700(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,3168
	ctx.r11.s64 = ctx.r11.s64 + 3168;
loc_8232CDD0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8232cdd0
	if (!ctx.cr6.eq) goto loc_8232CDD0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8232CDE4:
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
	// bne cr6,0x8232cde4
	if (!ctx.cr6.eq) goto loc_8232CDE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x8232CE08;
	sub_8210D3F0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r5,r30,13
	ctx.r5.s64 = ctx.r30.s64 + 13;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2736
	ctx.r3.s64 = ctx.r31.s64 + 2736;
	// bl 0x8210e1f0
	ctx.lr = 0x8232CE24;
	sub_8210E1F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// beq cr6,0x8232cd88
	if (ctx.cr6.eq) goto loc_8232CD88;
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
loc_8232CE34:
	// lbz r11,15(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 15);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,15(r30)
	PPC_STORE_U8(ctx.r30.u32 + 15, ctx.r7.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232CE4C"))) PPC_WEAK_FUNC(sub_8232CE4C);
PPC_FUNC_IMPL(__imp__sub_8232CE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232CE50"))) PPC_WEAK_FUNC(sub_8232CE50);
PPC_FUNC_IMPL(__imp__sub_8232CE50) {
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
	// lbz r11,15(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r11.u8);
	// bne cr6,0x8232cecc
	if (!ctx.cr6.eq) goto loc_8232CECC;
	// lbz r8,13(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8232ce9c
	if (!ctx.cr6.eq) goto loc_8232CE9C;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,2736
	ctx.r3.s64 = ctx.r11.s64 + 2736;
	// bl 0x821019e8
	ctx.lr = 0x8232CE9C;
	sub_821019E8(ctx, base);
loc_8232CE9C:
	// lbz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// bl 0x8210d230
	ctx.lr = 0x8232CEB4;
	sub_8210D230(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stb r11,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stb r11,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r11.u8);
loc_8232CECC:
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

__attribute__((alias("__imp__sub_8232CEE0"))) PPC_WEAK_FUNC(sub_8232CEE0);
PPC_FUNC_IMPL(__imp__sub_8232CEE0) {
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
	// lbz r11,15(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232cf40
	if (ctx.cr6.eq) goto loc_8232CF40;
	// lbz r10,13(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232cf40
	if (ctx.cr6.eq) goto loc_8232CF40;
	// lbz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8232cf28
	if (!ctx.cr6.eq) goto loc_8232CF28;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82173af8
	ctx.lr = 0x8232CF20;
	sub_82173AF8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r8.u8);
loc_8232CF28:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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
loc_8232CF40:
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

__attribute__((alias("__imp__sub_8232CF58"))) PPC_WEAK_FUNC(sub_8232CF58);
PPC_FUNC_IMPL(__imp__sub_8232CF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8232CF60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addis r31,r30,35
	ctx.r31.s64 = ctx.r30.s64 + 2293760;
	// addi r31,r31,-28572
	ctx.r31.s64 = ctx.r31.s64 + -28572;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8232d040
	if (ctx.cr6.gt) goto loc_8232D040;
	// lis r10,33
	ctx.r10.s64 = 2162688;
	// ori r29,r10,16944
	ctx.r29.u64 = ctx.r10.u64 | 16944;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// addi r12,r12,-12388
	ctx.r12.s64 = ctx.r12.s64 + -12388;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8232CFB0;
	case 1:
		goto loc_8232CFD0;
	case 2:
		goto loc_8232CFF4;
	case 3:
		goto loc_8232D018;
	case 4:
		goto loc_8232D02C;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-12368(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -12368);
	// lwz r17,-12336(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -12336);
	// lwz r17,-12300(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -12300);
	// lwz r17,-12264(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -12264);
	// lwz r17,-12244(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + -12244);
loc_8232CFB0:
	// add r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bl 0x820bc028
	ctx.lr = 0x8232CFB8;
	sub_820BC028(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8232d040
	if (ctx.cr6.eq) goto loc_8232D040;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_8232CFD0:
	// addis r3,r30,34
	ctx.r3.s64 = ctx.r30.s64 + 2228224;
	// addi r3,r3,-8768
	ctx.r3.s64 = ctx.r3.s64 + -8768;
	// bl 0x820bc8b0
	ctx.lr = 0x8232CFDC;
	sub_820BC8B0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8232d040
	if (ctx.cr6.eq) goto loc_8232D040;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
loc_8232CFF4:
	// addis r3,r30,34
	ctx.r3.s64 = ctx.r30.s64 + 2228224;
	// addi r3,r3,5472
	ctx.r3.s64 = ctx.r3.s64 + 5472;
	// bl 0x820d3488
	ctx.lr = 0x8232D000;
	sub_820D3488(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8232d040
	if (ctx.cr6.eq) goto loc_8232D040;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
loc_8232D018:
	// add r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bl 0x820e31f0
	ctx.lr = 0x8232D020;
	sub_820E31F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8232D02C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8232D040:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232D04C"))) PPC_WEAK_FUNC(sub_8232D04C);
PPC_FUNC_IMPL(__imp__sub_8232D04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232D050"))) PPC_WEAK_FUNC(sub_8232D050);
PPC_FUNC_IMPL(__imp__sub_8232D050) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,8984
	ctx.r3.s64 = ctx.r11.s64 + 8984;
	// bl 0x820c8d50
	ctx.lr = 0x8232D070;
	sub_820C8D50(ctx, base);
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// addi r3,r3,30560
	ctx.r3.s64 = ctx.r3.s64 + 30560;
	// bl 0x8228b5d8
	ctx.lr = 0x8232D07C;
	sub_8228B5D8(ctx, base);
	// addis r3,r31,33
	ctx.r3.s64 = ctx.r31.s64 + 2162688;
	// addi r3,r3,6592
	ctx.r3.s64 = ctx.r3.s64 + 6592;
	// bl 0x820b7490
	ctx.lr = 0x8232D088;
	sub_820B7490(ctx, base);
	// addis r3,r31,33
	ctx.r3.s64 = ctx.r31.s64 + 2162688;
	// addi r3,r3,8400
	ctx.r3.s64 = ctx.r3.s64 + 8400;
	// bl 0x8212bb98
	ctx.lr = 0x8232D094;
	sub_8212BB98(ctx, base);
	// addis r3,r31,33
	ctx.r3.s64 = ctx.r31.s64 + 2162688;
	// addi r3,r3,16944
	ctx.r3.s64 = ctx.r3.s64 + 16944;
	// bl 0x8212bb98
	ctx.lr = 0x8232D0A0;
	sub_8212BB98(ctx, base);
	// addis r3,r31,34
	ctx.r3.s64 = ctx.r31.s64 + 2228224;
	// addi r3,r3,-8768
	ctx.r3.s64 = ctx.r3.s64 + -8768;
	// bl 0x8212bb98
	ctx.lr = 0x8232D0AC;
	sub_8212BB98(ctx, base);
	// addis r3,r31,34
	ctx.r3.s64 = ctx.r31.s64 + 2228224;
	// addi r3,r3,5472
	ctx.r3.s64 = ctx.r3.s64 + 5472;
	// bl 0x8212bb98
	ctx.lr = 0x8232D0B8;
	sub_8212BB98(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-7552
	ctx.r3.s64 = ctx.r11.s64 + -7552;
	// bl 0x820b5ea8
	ctx.lr = 0x8232D0C4;
	sub_820B5EA8(ctx, base);
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// addi r3,r11,32208
	ctx.r3.s64 = ctx.r11.s64 + 32208;
	// bl 0x820ddeb0
	ctx.lr = 0x8232D0D0;
	sub_820DDEB0(ctx, base);
	// addis r3,r31,38
	ctx.r3.s64 = ctx.r31.s64 + 2490368;
	// addi r3,r3,-16280
	ctx.r3.s64 = ctx.r3.s64 + -16280;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232D0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,35
	ctx.r3.s64 = ctx.r31.s64 + 2293760;
	// addi r3,r3,-28660
	ctx.r3.s64 = ctx.r3.s64 + -28660;
	// bl 0x8212bb98
	ctx.lr = 0x8232D0F4;
	sub_8212BB98(ctx, base);
	// addis r3,r31,34
	ctx.r3.s64 = ctx.r31.s64 + 2228224;
	// addi r3,r3,21248
	ctx.r3.s64 = ctx.r3.s64 + 21248;
	// bl 0x822ebc18
	ctx.lr = 0x8232D100;
	sub_822EBC18(ctx, base);
	// addis r3,r31,34
	ctx.r3.s64 = ctx.r31.s64 + 2228224;
	// addi r3,r3,26688
	ctx.r3.s64 = ctx.r3.s64 + 26688;
	// bl 0x822ebc18
	ctx.lr = 0x8232D10C;
	sub_822EBC18(ctx, base);
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// ori r8,r9,36952
	ctx.r8.u64 = ctx.r9.u64 | 36952;
	// ori r6,r7,32136
	ctx.r6.u64 = ctx.r7.u64 | 32136;
	// li r11,57
	ctx.r11.s64 = 57;
	// ldx r5,r31,r8
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r8.u32);
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// beq cr6,0x8232d154
	if (ctx.cr6.eq) goto loc_8232D154;
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// ori r3,r4,32176
	ctx.r3.u64 = ctx.r4.u64 | 32176;
	// ori r9,r10,32880
	ctx.r9.u64 = ctx.r10.u64 | 32880;
	// ori r7,r8,33816
	ctx.r7.u64 = ctx.r8.u64 | 33816;
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
loc_8232D154:
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

__attribute__((alias("__imp__sub_8232D168"))) PPC_WEAK_FUNC(sub_8232D168);
PPC_FUNC_IMPL(__imp__sub_8232D168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bacc
	ctx.lr = 0x8232D170;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// addis r22,r31,35
	ctx.r22.s64 = ctx.r31.s64 + 2293760;
	// addis r8,r31,35
	ctx.r8.s64 = ctx.r31.s64 + 2293760;
	// addis r28,r31,35
	ctx.r28.s64 = ctx.r31.s64 + 2293760;
	// addis r29,r31,35
	ctx.r29.s64 = ctx.r31.s64 + 2293760;
	// addis r17,r31,35
	ctx.r17.s64 = ctx.r31.s64 + 2293760;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r22,r22,-28532
	ctx.r22.s64 = ctx.r22.s64 + -28532;
	// addi r8,r8,-28528
	ctx.r8.s64 = ctx.r8.s64 + -28528;
	// addi r28,r28,-28524
	ctx.r28.s64 = ctx.r28.s64 + -28524;
	// addi r29,r29,-28568
	ctx.r29.s64 = ctx.r29.s64 + -28568;
	// addi r17,r17,-28520
	ctx.r17.s64 = ctx.r17.s64 + -28520;
	// ori r10,r11,36976
	ctx.r10.u64 = ctx.r11.u64 | 36976;
	// stw r20,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r20.u32);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// stw r20,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r20.u32);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// stw r20,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r20.u32);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// stw r20,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r20.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r7,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r7.u32);
	// stwx r20,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r20.u32);
	// ori r30,r9,42013
	ctx.r30.u64 = ctx.r9.u64 | 42013;
	// ble cr6,0x8232d394
	if (!ctx.cr6.gt) goto loc_8232D394;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// add r10,r19,r6
	ctx.r10.u64 = ctx.r19.u64 + ctx.r6.u64;
	// addi r26,r11,26080
	ctx.r26.s64 = ctx.r11.s64 + 26080;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwzx r11,r26,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r7.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r9,r6,584
	ctx.r9.s64 = ctx.r6.s64 * 584;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r27,r11,16
	ctx.r27.s64 = ctx.r11.s64 + 16;
	// lwz r5,304(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 304);
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bne cr6,0x8232d2b8
	if (!ctx.cr6.eq) goto loc_8232D2B8;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8232d38c
	if (!ctx.cr6.gt) goto loc_8232D38C;
	// addis r27,r31,35
	ctx.r27.s64 = ctx.r31.s64 + 2293760;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r4,36
	ctx.r4.s64 = 2359296;
	// lis r3,34
	ctx.r3.s64 = 2228224;
	// addi r27,r27,-28556
	ctx.r27.s64 = ctx.r27.s64 + -28556;
	// addi r21,r11,26752
	ctx.r21.s64 = ctx.r11.s64 + 26752;
	// ori r23,r4,35808
	ctx.r23.u64 = ctx.r4.u64 | 35808;
	// ori r25,r3,37040
	ctx.r25.u64 = ctx.r3.u64 | 37040;
loc_8232D244:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r21,24
	ctx.r3.s64 = ctx.r21.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x8232D250;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232d27c
	if (ctx.cr6.eq) goto loc_8232D27C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mulli r11,r11,15744
	ctx.r11.s64 = ctx.r11.s64 * 15744;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r9,r10,r23
	ctx.r9.u64 = ctx.r10.u64 + ctx.r23.u64;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// b 0x8232d290
	goto loc_8232D290;
loc_8232D27C:
	// addis r10,r26,3
	ctx.r10.s64 = ctx.r26.s64 + 196608;
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// addi r7,r10,-11504
	ctx.r7.s64 = ctx.r10.s64 + -11504;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r7,18288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18288, ctx.r7.u32);
loc_8232D290:
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stb r6,15480(r5)
	PPC_STORE_U8(ctx.r5.u32 + 15480, ctx.r6.u8);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r24,r4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8232d244
	if (ctx.cr6.lt) goto loc_8232D244;
	// stw r19,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r19.u32);
	// b 0x8232d480
	goto loc_8232D480;
loc_8232D2B8:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365698
	ctx.lr = 0x8232D2C8;
	sub_82365698(ctx, base);
	// lwz r11,304(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 304);
	// addis r10,r31,35
	ctx.r10.s64 = ctx.r31.s64 + 2293760;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// addis r9,r31,35
	ctx.r9.s64 = ctx.r31.s64 + 2293760;
	// bge cr6,0x8232d338
	if (!ctx.cr6.lt) goto loc_8232D338;
	// addis r7,r26,3
	ctx.r7.s64 = ctx.r26.s64 + 196608;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addis r8,r31,35
	ctx.r8.s64 = ctx.r31.s64 + 2293760;
	// addi r5,r7,-11504
	ctx.r5.s64 = ctx.r7.s64 + -11504;
	// mulli r7,r11,15744
	ctx.r7.s64 = ctx.r11.s64 * 15744;
	// add r4,r7,r31
	ctx.r4.u64 = ctx.r7.u64 + ctx.r31.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addis r11,r4,37
	ctx.r11.s64 = ctx.r4.s64 + 2424832;
	// addi r10,r10,-28496
	ctx.r10.s64 = ctx.r10.s64 + -28496;
	// addi r9,r9,-28556
	ctx.r9.s64 = ctx.r9.s64 + -28556;
	// addi r8,r8,-28552
	ctx.r8.s64 = ctx.r8.s64 + -28552;
	// addi r11,r11,-29728
	ctx.r11.s64 = ctx.r11.s64 + -29728;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r5,18288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18288, ctx.r5.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stb r20,15480(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15480, ctx.r20.u8);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stb r6,15480(r9)
	PPC_STORE_U8(ctx.r9.u32 + 15480, ctx.r6.u8);
	// stw r19,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r19.u32);
	// b 0x8232d480
	goto loc_8232D480;
loc_8232D338:
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// addis r8,r26,3
	ctx.r8.s64 = ctx.r26.s64 + 196608;
	// addi r11,r11,-28496
	ctx.r11.s64 = ctx.r11.s64 + -28496;
	// addi r10,r10,-28556
	ctx.r10.s64 = ctx.r10.s64 + -28556;
	// addi r8,r8,-11504
	ctx.r8.s64 = ctx.r8.s64 + -11504;
	// addi r9,r9,-28552
	ctx.r9.s64 = ctx.r9.s64 + -28552;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,18288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 18288, ctx.r8.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mulli r10,r11,15744
	ctx.r10.s64 = ctx.r11.s64 * 15744;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addis r3,r5,37
	ctx.r3.s64 = ctx.r5.s64 + 2424832;
	// addi r3,r3,-29728
	ctx.r3.s64 = ctx.r3.s64 + -29728;
	// stw r4,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r4.u32);
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// stb r20,15480(r6)
	PPC_STORE_U8(ctx.r6.u32 + 15480, ctx.r20.u8);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stb r7,15480(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15480, ctx.r7.u8);
loc_8232D38C:
	// stw r19,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r19.u32);
	// b 0x8232d480
	goto loc_8232D480;
loc_8232D394:
	// add r5,r19,r18
	ctx.r5.u64 = ctx.r19.u64 + ctx.r18.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8232d480
	if (!ctx.cr6.gt) goto loc_8232D480;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// lis r9,35
	ctx.r9.s64 = 2293760;
	// addi r7,r11,26080
	ctx.r7.s64 = ctx.r11.s64 + 26080;
	// ori r25,r10,37040
	ctx.r25.u64 = ctx.r10.u64 | 37040;
	// ori r6,r9,9904
	ctx.r6.u64 = ctx.r9.u64 | 9904;
loc_8232D3B8:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// bge cr6,0x8232d420
	if (!ctx.cr6.lt) goto loc_8232D420;
	// mulli r11,r11,19200
	ctx.r11.s64 = ctx.r11.s64 * 19200;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r4,r30
	ctx.r11.u64 = ctx.r4.u64 + ctx.r30.u64;
	// add r9,r3,r25
	ctx.r9.u64 = ctx.r3.u64 + ctx.r25.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r10,r7,3
	ctx.r10.s64 = ctx.r7.s64 + 196608;
	// addi r10,r10,-11504
	ctx.r10.s64 = ctx.r10.s64 + -11504;
	// stwx r9,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,18288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 18288, ctx.r10.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// b 0x8232d454
	goto loc_8232D454;
loc_8232D420:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x8232d454
	if (!ctx.cr6.lt) goto loc_8232D454;
	// mulli r11,r11,18288
	ctx.r11.s64 = ctx.r11.s64 * 18288;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r4,r30
	ctx.r11.u64 = ctx.r4.u64 + ctx.r30.u64;
	// add r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 + ctx.r6.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
loc_8232D454:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stb r11,15480(r9)
	PPC_STORE_U8(ctx.r9.u32 + 15480, ctx.r11.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rotlwi r3,r4,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
	// blt cr6,0x8232d3b8
	if (ctx.cr6.lt) goto loc_8232D3B8;
loc_8232D480:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x8232d4b8
	if (!ctx.cr6.lt) goto loc_8232D4B8;
	// subfic r10,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r11.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x8232d4b8
	if (ctx.cr6.eq) goto loc_8232D4B8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8232D4AC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8232d4ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232D4AC;
loc_8232D4B8:
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// subf r11,r18,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r18.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8232d4cc
	if (ctx.cr6.gt) goto loc_8232D4CC;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8232D4CC:
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// ori r8,r9,37024
	ctx.r8.u64 = ctx.r9.u64 | 37024;
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232D4E0"))) PPC_WEAK_FUNC(sub_8232D4E0);
PPC_FUNC_IMPL(__imp__sub_8232D4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8232D4E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// addis r29,r30,35
	ctx.r29.s64 = ctx.r30.s64 + 2293760;
	// addi r29,r29,-28584
	ctx.r29.s64 = ctx.r29.s64 + -28584;
	// std r4,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r4.u64);
	// beq cr6,0x8232d564
	if (ctx.cr6.eq) goto loc_8232D564;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// bl 0x822d2b00
	ctx.lr = 0x8232D518;
	sub_822D2B00(ctx, base);
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// ori r9,r10,36961
	ctx.r9.u64 = ctx.r10.u64 | 36961;
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// addi r3,r10,20656
	ctx.r3.s64 = ctx.r10.s64 + 20656;
	// stbx r11,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u8);
	// bl 0x822d2b40
	ctx.lr = 0x8232D538;
	sub_822D2B40(ctx, base);
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r7,r8,36960
	ctx.r7.u64 = ctx.r8.u64 | 36960;
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// addi r3,r10,20656
	ctx.r3.s64 = ctx.r10.s64 + 20656;
	// stbx r11,r30,r7
	PPC_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u8);
	// bl 0x822d6538
	ctx.lr = 0x8232D558;
	sub_822D6538(ctx, base);
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// ori r5,r6,36962
	ctx.r5.u64 = ctx.r6.u64 | 36962;
	// stbx r3,r30,r5
	PPC_STORE_U8(ctx.r30.u32 + ctx.r5.u32, ctx.r3.u8);
loc_8232D564:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232D56C"))) PPC_WEAK_FUNC(sub_8232D56C);
PPC_FUNC_IMPL(__imp__sub_8232D56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232D570"))) PPC_WEAK_FUNC(sub_8232D570);
PPC_FUNC_IMPL(__imp__sub_8232D570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,-7824
	ctx.r3.s64 = ctx.r11.s64 + -7824;
	// b 0x822d0138
	sub_822D0138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232D584"))) PPC_WEAK_FUNC(sub_8232D584);
PPC_FUNC_IMPL(__imp__sub_8232D584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232D588"))) PPC_WEAK_FUNC(sub_8232D588);
PPC_FUNC_IMPL(__imp__sub_8232D588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232D5A4"))) PPC_WEAK_FUNC(sub_8232D5A4);
PPC_FUNC_IMPL(__imp__sub_8232D5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8232D5A8"))) PPC_WEAK_FUNC(sub_8232D5A8);
PPC_FUNC_IMPL(__imp__sub_8232D5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x8232D5B0;
	__savegprlr_23(ctx, base);
	// addis r11,r3,35
	ctx.r11.s64 = ctx.r3.s64 + 2293760;
	// addi r11,r11,-28680
	ctx.r11.s64 = ctx.r11.s64 + -28680;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8232d968
	if (!ctx.cr6.gt) goto loc_8232D968;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r9,r10,36840
	ctx.r9.u64 = ctx.r10.u64 | 36840;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
loc_8232D5D8:
	// lhz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8232d620
	if (!ctx.cr6.gt) goto loc_8232D620;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8232D5F0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x8232d600
	if (!ctx.cr6.gt) goto loc_8232D600;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_8232D600:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x8232d610
	if (!ctx.cr6.gt) goto loc_8232D610;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_8232D610:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8232d5f0
	if (!ctx.cr6.eq) goto loc_8232D5F0;
loc_8232D620:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8232d5d8
	if (!ctx.cr6.eq) goto loc_8232D5D8;
	// addis r23,r3,35
	ctx.r23.s64 = ctx.r3.s64 + 2293760;
	// addis r27,r3,38
	ctx.r27.s64 = ctx.r3.s64 + 2490368;
	// addi r23,r23,-28684
	ctx.r23.s64 = ctx.r23.s64 + -28684;
	// addi r27,r27,-16320
	ctx.r27.s64 = ctx.r27.s64 + -16320;
	// addis r26,r3,38
	ctx.r26.s64 = ctx.r3.s64 + 2490368;
	// lis r4,37
	ctx.r4.s64 = 2424832;
	// addi r26,r26,-16304
	ctx.r26.s64 = ctx.r26.s64 + -16304;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lis r10,37
	ctx.r10.s64 = 2424832;
	// lis r9,37
	ctx.r9.s64 = 2424832;
	// ori r29,r4,49236
	ctx.r29.u64 = ctx.r4.u64 | 49236;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ori r30,r10,49240
	ctx.r30.u64 = ctx.r10.u64 | 49240;
	// ori r31,r9,49220
	ctx.r31.u64 = ctx.r9.u64 | 49220;
	// std r8,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r8.u64);
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ori r4,r8,49224
	ctx.r4.u64 = ctx.r8.u64 | 49224;
	// std r7,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r7.u64);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r6,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r6.u64);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r5.u64);
	// blt cr6,0x8232d8b0
	if (ctx.cr6.lt) goto loc_8232D8B0;
	// rlwinm r24,r25,30,2,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r3,r29
	ctx.r8.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r7,r3,r30
	ctx.r7.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r6,r3,r31
	ctx.r6.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_8232D6BC:
	// lfs f13,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8232d6d0
	if (!ctx.cr6.gt) goto loc_8232D6D0;
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_8232D6D0:
	// lfs f12,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8232d6e4
	if (!ctx.cr6.gt) goto loc_8232D6E4;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_8232D6E4:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8232d6f8
	if (!ctx.cr6.gt) goto loc_8232D6F8;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_8232D6F8:
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x8232d70c
	if (!ctx.cr6.lt) goto loc_8232D70C;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_8232D70C:
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x8232d720
	if (!ctx.cr6.lt) goto loc_8232D720;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8232D720:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x8232d734
	if (!ctx.cr6.lt) goto loc_8232D734;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_8232D734:
	// lfs f7,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// ble cr6,0x8232d748
	if (!ctx.cr6.gt) goto loc_8232D748;
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_8232D748:
	// lfs f6,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// ble cr6,0x8232d75c
	if (!ctx.cr6.gt) goto loc_8232D75C;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_8232D75C:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// ble cr6,0x8232d770
	if (!ctx.cr6.gt) goto loc_8232D770;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_8232D770:
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// bge cr6,0x8232d784
	if (!ctx.cr6.lt) goto loc_8232D784;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_8232D784:
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// bge cr6,0x8232d798
	if (!ctx.cr6.lt) goto loc_8232D798;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8232D798:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x8232d7ac
	if (!ctx.cr6.lt) goto loc_8232D7AC;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_8232D7AC:
	// lfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x8232d7c0
	if (!ctx.cr6.gt) goto loc_8232D7C0;
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_8232D7C0:
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8232d7d4
	if (!ctx.cr6.gt) goto loc_8232D7D4;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_8232D7D4:
	// lfs f12,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8232d7e8
	if (!ctx.cr6.gt) goto loc_8232D7E8;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_8232D7E8:
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8232d7fc
	if (!ctx.cr6.lt) goto loc_8232D7FC;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_8232D7FC:
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x8232d810
	if (!ctx.cr6.lt) goto loc_8232D810;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8232D810:
	// lfs f0,16(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x8232d824
	if (!ctx.cr6.lt) goto loc_8232D824;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_8232D824:
	// lfs f8,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x8232d838
	if (!ctx.cr6.gt) goto loc_8232D838;
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_8232D838:
	// lfs f7,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// ble cr6,0x8232d84c
	if (!ctx.cr6.gt) goto loc_8232D84C;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_8232D84C:
	// lfs f6,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// ble cr6,0x8232d860
	if (!ctx.cr6.gt) goto loc_8232D860;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_8232D860:
	// lfs f0,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bge cr6,0x8232d874
	if (!ctx.cr6.lt) goto loc_8232D874;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_8232D874:
	// lfs f0,28(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// bge cr6,0x8232d888
	if (!ctx.cr6.lt) goto loc_8232D888;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8232D888:
	// lfs f0,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// bge cr6,0x8232d89c
	if (!ctx.cr6.lt) goto loc_8232D89C;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_8232D89C:
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8232d6bc
	if (!ctx.cr6.eq) goto loc_8232D6BC;
loc_8232D8B0:
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x8232d9a0
	if (ctx.cr6.gt) goto loc_8232D9A0;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r28,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r28.s64;
	// add r8,r3,r29
	ctx.r8.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r7,r3,r30
	ctx.r7.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r6,r3,r31
	ctx.r6.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8232D8DC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// ble cr6,0x8232d8f0
	if (!ctx.cr6.gt) goto loc_8232D8F0;
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_8232D8F0:
	// lfs f1,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x8232d904
	if (!ctx.cr6.gt) goto loc_8232D904;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_8232D904:
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8232d918
	if (!ctx.cr6.gt) goto loc_8232D918;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_8232D918:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8232d92c
	if (!ctx.cr6.lt) goto loc_8232D92C;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_8232D92C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8232d940
	if (!ctx.cr6.lt) goto loc_8232D940;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8232D940:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x8232d954
	if (!ctx.cr6.lt) goto loc_8232D954;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_8232D954:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8232d8dc
	if (!ctx.cr6.eq) goto loc_8232D8DC;
	// b 0x8232d9a0
	goto loc_8232D9A0;
loc_8232D968:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r27,r3,38
	ctx.r27.s64 = ctx.r3.s64 + 2490368;
	// addis r26,r3,38
	ctx.r26.s64 = ctx.r3.s64 + 2490368;
	// addi r27,r27,-16320
	ctx.r27.s64 = ctx.r27.s64 + -16320;
	// addi r26,r26,-16304
	ctx.r26.s64 = ctx.r26.s64 + -16304;
	// lfs f0,3096(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3096);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// lfs f13,21032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21032);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f13,4(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// stfs f13,8(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
loc_8232D9A0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f9,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f11,f8,f9
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lfs f6,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addis r10,r3,38
	ctx.r10.s64 = ctx.r3.s64 + 2490368;
	// lfs f5,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f10,f7,f6
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// lfd f0,-1544(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1544);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fres f13,f0
	ctx.f13.f64 = float(1.0 / ctx.f0.f64);
	// lfs f0,2868(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r10,-16336
	ctx.r10.s64 = ctx.r10.s64 + -16336;
	// fadds f9,f5,f4
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// lfs f12,20080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20080);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// fnmsubs f3,f13,f12,f0
	ctx.f3.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fnmsubs f1,f13,f12,f0
	ctx.f1.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,-96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f12,-92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fmuls f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f11,-88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8232DA30"))) PPC_WEAK_FUNC(sub_8232DA30);
PPC_FUNC_IMPL(__imp__sub_8232DA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r8,r11,28544
	ctx.r8.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r10,r11,36836
	ctx.r10.u64 = ctx.r11.u64 | 36836;
	// lwzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8232DA58:
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lis r5,34
	ctx.r5.s64 = 2228224;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ori r4,r5,36836
	ctx.r4.u64 = ctx.r5.u64 | 36836;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// clrlwi r6,r7,18
	ctx.r6.u64 = ctx.r7.u32 & 0x3FFF;
	// sth r6,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r6.u16);
	// lwzx r11,r8,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8232da58
	if (ctx.cr6.lt) goto loc_8232DA58;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232DA90"))) PPC_WEAK_FUNC(sub_8232DA90);
PPC_FUNC_IMPL(__imp__sub_8232DA90) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r4,9
	ctx.r11.s64 = ctx.r4.s64 + 589824;
	// addi r11,r11,-23523
	ctx.r11.s64 = ctx.r11.s64 + -23523;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8232DAA4"))) PPC_WEAK_FUNC(sub_8232DAA4);
PPC_FUNC_IMPL(__imp__sub_8232DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}


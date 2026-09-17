#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_820B99B8"))) PPC_WEAK_FUNC(sub_820B99B8);
PPC_FUNC_IMPL(__imp__sub_820B99B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bb88
	ctx.lr = 0x820B99C8;
	__savefpr_20(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,112
	ctx.r11.s64 = ctx.r4.s64 + 112;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,-1628(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820b9dac
	if (ctx.cr6.gt) goto loc_820B9DAC;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f13,-1572(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1572);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820b9dac
	if (ctx.cr6.lt) goto loc_820B9DAC;
	// lwz r9,144(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lwz r8,240(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	// lfs f4,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f26,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f26.f64 = double(temp.f32);
	// lfs f12,7488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7488);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,7496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7496);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,7472(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7472);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7480);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f29,f0,f12
	ctx.f29.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f25,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f25.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,7488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7488);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,7472(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7472);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,7496(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7496);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f31,f31,f2
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f2.f64));
	// lfs f30,7480(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7480);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f30,f30,f1
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfs f29,-128(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,-124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// ld r11,-128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfs f7,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f28,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f27.f64 = double(temp.f32);
	// std r11,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r11.u64);
	// lfs f13,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f12,-120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// lfs f12,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f11,-116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// ld r10,-120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// fmuls f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f11,-120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// stfs f0,-116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// ld r9,-120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// fmuls f21,f12,f12
	ctx.f21.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// std r10,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r10.u64);
	// lfs f0,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f31,f0,f9
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// std r9,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r9.u64);
	// fmr f24,f0
	ctx.f24.f64 = ctx.f0.f64;
	// lfs f0,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f10,f11
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmr f29,f11
	ctx.f29.f64 = ctx.f11.f64;
	// fadds f11,f0,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f11,-128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// lfs f11,-116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -116);
	ctx.f11.f64 = double(temp.f32);
	// fadds f2,f11,f1
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f2,-124(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// ld r8,-128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// fmuls f20,f11,f11
	ctx.f20.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// std r8,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r8.u64);
	// lfs f2,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f23,f2,f4
	ctx.f23.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f1,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f31,f29,f8,f31
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f8.f64 + ctx.f31.f64));
	// fmuls f22,f5,f1
	ctx.f22.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmadds f24,f24,f7,f30
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f7.f64 + ctx.f30.f64));
	// fmuls f30,f8,f13
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f29,f10,f13
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f23,f6,f1,f23
	ctx.f23.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f23.f64));
	// fadds f8,f31,f28
	ctx.f8.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
	// fmadds f22,f3,f2,f22
	ctx.f22.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f22.f64));
	// fadds f2,f24,f27
	ctx.f2.f64 = double(float(ctx.f24.f64 + ctx.f27.f64));
	// fmadds f28,f13,f13,f21
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f21.f64));
	// fmuls f1,f12,f9
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f31,f7,f12
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f27,f0,f0,f20
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f20.f64));
	// fadds f13,f23,f26
	ctx.f13.f64 = double(float(ctx.f23.f64 + ctx.f26.f64));
	// fadds f7,f22,f25
	ctx.f7.f64 = double(float(ctx.f22.f64 + ctx.f25.f64));
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmuls f10,f6,f0
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fsubs f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f0,-120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// fsqrts f8,f27
	ctx.f8.f64 = double(float(sqrt(ctx.f27.f64)));
	// fsubs f13,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fsqrts f6,f28
	ctx.f6.f64 = double(float(sqrt(ctx.f28.f64)));
	// fadds f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fmuls f12,f11,f4
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// stfs f13,-116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// ld r7,-120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r7,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r7.u64);
	// lfs f13,-116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f13,f13
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,8648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8648);
	ctx.f3.f64 = double(temp.f32);
	// fadds f4,f6,f3
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// fmadds f5,f0,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fsqrts f8,f5
	ctx.f8.f64 = double(float(sqrt(ctx.f5.f64)));
	// fcmpu cr6,f8,f4
	ctx.cr6.compare(ctx.f8.f64, ctx.f4.f64);
	// bgt cr6,0x820b9dac
	if (ctx.cr6.gt) goto loc_820B9DAC;
	// fmuls f2,f13,f29
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f8,f0,f30,f2
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f2.f64));
	// fcmpu cr6,f8,f4
	ctx.cr6.compare(ctx.f8.f64, ctx.f4.f64);
	// lfs f8,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f8.f64 = double(temp.f32);
	// bge cr6,0x820b9bcc
	if (!ctx.cr6.lt) goto loc_820B9BCC;
	// fmuls f30,f30,f8
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// fmuls f29,f29,f8
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
loc_820B9BCC:
	// fmuls f7,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmadds f6,f0,f1,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f4
	ctx.cr6.compare(ctx.f6.f64, ctx.f4.f64);
	// bge cr6,0x820b9be4
	if (!ctx.cr6.lt) goto loc_820B9BE4;
	// fmuls f1,f1,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmuls f31,f31,f8
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f8.f64));
loc_820B9BE4:
	// fmuls f5,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmadds f2,f0,f10,f5
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fcmpu cr6,f2,f4
	ctx.cr6.compare(ctx.f2.f64, ctx.f4.f64);
	// blt cr6,0x820b9c00
	if (ctx.cr6.lt) goto loc_820B9C00;
	// bso cr6,0x820b9c00
	if (ctx.cr6.so) goto loc_820B9C00;
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
loc_820B9C00:
	// fmuls f7,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmadds f6,f0,f12,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f4
	ctx.cr6.compare(ctx.f6.f64, ctx.f4.f64);
	// blt cr6,0x820b9c1c
	if (ctx.cr6.lt) goto loc_820B9C1C;
	// bso cr6,0x820b9c1c
	if (ctx.cr6.so) goto loc_820B9C1C;
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
loc_820B9C1C:
	// fadds f5,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f7,f31,f29
	ctx.f7.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// fadds f8,f1,f30
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// fadds f6,f12,f10
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fsubs f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fsubs f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fmuls f5,f13,f11
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f2,f13,f13
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f7,f0,f12,f5
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f8,f0,f0,f2
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fcmpu cr6,f7,f4
	ctx.cr6.compare(ctx.f7.f64, ctx.f4.f64);
	// blt cr6,0x820b9c98
	if (ctx.cr6.lt) goto loc_820B9C98;
	// bso cr6,0x820b9c98
	if (ctx.cr6.so) goto loc_820B9C98;
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fdivs f10,f7,f9
	ctx.f10.f64 = double(float(ctx.f7.f64 / ctx.f9.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fsubs f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f7,-120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// fsubs f6,f13,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f6,-116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// ld r6,-120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r6,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r6.u64);
	// lfs f11,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f11,f11
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f12,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f5.f64));
	// b 0x820b9ce8
	goto loc_820B9CE8;
loc_820B9C98:
	// fmuls f2,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmadds f12,f0,f10,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fcmpu cr6,f12,f4
	ctx.cr6.compare(ctx.f12.f64, ctx.f4.f64);
	// blt cr6,0x820b9cf4
	if (ctx.cr6.lt) goto loc_820B9CF4;
	// bso cr6,0x820b9cf4
	if (ctx.cr6.so) goto loc_820B9CF4;
	// fmuls f11,f9,f9
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f7,f10,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fdivs f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f7.f64));
	// fmuls f11,f10,f12
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fsubs f6,f0,f11
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f6,-120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// fsubs f5,f13,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f5,-116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// ld r5,-120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r5,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r5.u64);
	// lfs f11,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f11,f11
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f12,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f2.f64));
loc_820B9CE8:
	// fcmpu cr6,f12,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// bge cr6,0x820b9cf4
	if (!ctx.cr6.lt) goto loc_820B9CF4;
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
loc_820B9CF4:
	// fmuls f12,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmadds f12,f0,f1,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f4
	ctx.cr6.compare(ctx.f12.f64, ctx.f4.f64);
	// bge cr6,0x820b9d44
	if (!ctx.cr6.lt) goto loc_820B9D44;
	// fmuls f11,f31,f31
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f10,f1,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fdivs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f12,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f9,-120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// fsubs f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f7,-116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// ld r4,-120(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r4,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r4.u64);
	// lfs f13,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f13,f13
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// b 0x820b9d90
	goto loc_820B9D90;
loc_820B9D44:
	// fmuls f5,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmadds f12,f0,f30,f5
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f5.f64));
	// fcmpu cr6,f12,f4
	ctx.cr6.compare(ctx.f12.f64, ctx.f4.f64);
	// bge cr6,0x820b9d9c
	if (!ctx.cr6.lt) goto loc_820B9D9C;
	// fmuls f4,f29,f29
	ctx.f4.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// fmadds f2,f30,f30,f4
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f4.f64));
	// fdivs f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f2.f64));
	// fmuls f11,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// fmuls f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// fsubs f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f1,-120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f0,-116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// ld r3,-120(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// std r3,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r3.u64);
	// lfs f13,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
loc_820B9D90:
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x820b9d9c
	if (!ctx.cr6.lt) goto loc_820B9D9C;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
loc_820B9D9C:
	// fmuls f12,f3,f3
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// blt cr6,0x820b9db0
	if (ctx.cr6.lt) goto loc_820B9DB0;
loc_820B9DAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820B9DB0:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bbd4
	ctx.lr = 0x820B9DB8;
	__restfpr_20(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820B9DC4"))) PPC_WEAK_FUNC(sub_820B9DC4);
PPC_FUNC_IMPL(__imp__sub_820B9DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820B9DC8"))) PPC_WEAK_FUNC(sub_820B9DC8);
PPC_FUNC_IMPL(__imp__sub_820B9DC8) {
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
	// lbz r11,956(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 956);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b9f70
	if (ctx.cr6.eq) goto loc_820B9F70;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x820B9E00;
	sub_8210B3C8(ctx, base);
	// lfs f0,928(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,924
	ctx.r3.s64 = ctx.r31.s64 + 924;
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// bl 0x820b8000
	ctx.lr = 0x820B9E10;
	sub_820B8000(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x820B9E18;
	sub_8210B3C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lfs f0,9176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x820ac718
	ctx.lr = 0x820B9E30;
	sub_820AC718(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,952(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r9,956(r31)
	PPC_STORE_U8(ctx.r31.u32 + 956, ctx.r9.u8);
	// stb r8,944(r31)
	PPC_STORE_U8(ctx.r31.u32 + 944, ctx.r8.u8);
	// beq cr6,0x820b9ffc
	if (ctx.cr6.eq) goto loc_820B9FFC;
	// lbz r7,15219(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15219);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820b9ffc
	if (!ctx.cr6.eq) goto loc_820B9FFC;
	// lwz r6,15328(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15328);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x820b9ffc
	if (!ctx.cr6.eq) goto loc_820B9FFC;
	// lbz r5,947(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 947);
	// lbz r4,945(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 945);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x820b9ffc
	if (!ctx.cr6.eq) goto loc_820B9FFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,928(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820b9ffc
	if (ctx.cr6.lt) goto loc_820B9FFC;
	// bso cr6,0x820b9ffc
	if (ctx.cr6.so) goto loc_820B9FFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f12,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// lbz r9,15480(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15480);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f10,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// addis r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 262144;
	// addi r3,r9,30560
	ctx.r3.s64 = ctx.r9.s64 + 30560;
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f8,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f7,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmadds f2,f5,f13,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f31,f4,f12,f2
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f2.f64));
	// bl 0x8223d0b0
	ctx.lr = 0x820B9EF0;
	sub_8223D0B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r8,6336(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6336);
	// rlwinm r7,r8,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// beq cr6,0x820b9f0c
	if (ctx.cr6.eq) goto loc_820B9F0C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820B9F0C:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820b9ffc
	if (!ctx.cr6.eq) goto loc_820B9FFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// lfs f1,-1680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1680);
	ctx.f1.f64 = double(temp.f32);
	// blt cr6,0x820b9f40
	if (ctx.cr6.lt) goto loc_820B9F40;
	// li r4,8
	ctx.r4.s64 = 8;
loc_820B9F40:
	// bl 0x822620e0
	ctx.lr = 0x820B9F44;
	sub_822620E0(ctx, base);
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,28824
	ctx.r3.s64 = ctx.r11.s64 + 28824;
	// bl 0x8227fb28
	ctx.lr = 0x820B9F6C;
	sub_8227FB28(ctx, base);
	// b 0x820b9ffc
	goto loc_820B9FFC;
loc_820B9F70:
	// lbz r4,944(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 944);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820b9ffc
	if (ctx.cr6.eq) goto loc_820B9FFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,15328(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15328);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820b9fc0
	if (!ctx.cr6.eq) goto loc_820B9FC0;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r5,952(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lwz r4,19168(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19168);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// addi r6,r31,924
	ctx.r6.s64 = ctx.r31.s64 + 924;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820B9FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B9FC0:
	// addi r11,r31,924
	ctx.r11.s64 = ctx.r31.s64 + 924;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lbz r7,21(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stb r7,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r7.u8);
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stb r9,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r9.u8);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820B9FFC:
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

__attribute__((alias("__imp__sub_820BA018"))) PPC_WEAK_FUNC(sub_820BA018);
PPC_FUNC_IMPL(__imp__sub_820BA018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820BA020;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820ba0ec
	if (!ctx.cr6.gt) goto loc_820BA0EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,15328(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15328);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820ba0ec
	if (!ctx.cr6.eq) goto loc_820BA0EC;
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820ba0ec
	if (ctx.cr6.eq) goto loc_820BA0EC;
	// lwz r30,19168(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19168);
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lfs f1,8668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8668);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ac718
	ctx.lr = 0x820BA06C;
	sub_820AC718(ctx, base);
	// lwz r7,252(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r5,r31,224
	ctx.r5.s64 = ctx.r31.s64 + 224;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x820b8000
	ctx.lr = 0x820BA090;
	sub_820B8000(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// stb r4,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r4.u8);
	// bge cr6,0x820ba0ec
	if (!ctx.cr6.lt) goto loc_820BA0EC;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// lfs f13,8676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8676);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,260(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,120(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820BA0EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BA0EC:
	// lfs f11,260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bso cr6,0x820ba100
	if (ctx.cr6.so) goto loc_820BA100;
	// ble cr6,0x820ba11c
	if (!ctx.cr6.gt) goto loc_820BA11C;
loc_820BA100:
	// lbz r6,247(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 247);
	// lbz r5,245(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 245);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x820ba168
	if (ctx.cr6.lt) goto loc_820BA168;
loc_820BA11C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 + 224;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r9,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r9.u32);
	// lbz r7,21(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f13,-12136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f13.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r7,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r7.u8);
	// lfs f9,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stb r9,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r9.u8);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// stfs f13,260(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
loc_820BA168:
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820ba17c
	if (ctx.cr6.eq) goto loc_820BA17C;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
loc_820BA17C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BA184"))) PPC_WEAK_FUNC(sub_820BA184);
PPC_FUNC_IMPL(__imp__sub_820BA184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA188"))) PPC_WEAK_FUNC(sub_820BA188);
PPC_FUNC_IMPL(__imp__sub_820BA188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,13520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13520);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r6,r11,28544
	ctx.r6.s64 = ctx.r11.s64 + 28544;
	// ori r8,r9,36968
	ctx.r8.u64 = ctx.r9.u64 | 36968;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwzx r10,r6,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820ba20c
	if (!ctx.cr6.gt) goto loc_820BA20C;
	// addi r11,r3,700
	ctx.r11.s64 = ctx.r3.s64 + 700;
	// li r5,9
	ctx.r5.s64 = 9;
loc_820BA1CC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x820ba1fc
	if (ctx.cr6.eq) goto loc_820BA1FC;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x820ba1fc
	if (ctx.cr6.eq) goto loc_820BA1FC;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x820ba1fc
	if (ctx.cr6.eq) goto loc_820BA1FC;
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// stfs f0,-24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// ori r10,r4,36968
	ctx.r10.u64 = ctx.r4.u64 | 36968;
	// lwzx r10,r6,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
loc_820BA1FC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820ba1cc
	if (ctx.cr6.lt) goto loc_820BA1CC;
loc_820BA20C:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r8,730(r3)
	PPC_STORE_U8(ctx.r3.u32 + 730, ctx.r8.u8);
	// stb r8,13654(r9)
	PPC_STORE_U8(ctx.r9.u32 + 13654, ctx.r8.u8);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r8,13652(r7)
	PPC_STORE_U8(ctx.r7.u32 + 13652, ctx.r8.u8);
	// stfs f0,920(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 920, temp.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f0,660(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 660, temp.u32);
	// lwz r11,1072(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1072);
	// stfs f0,644(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 644, temp.u32);
	// stb r8,917(r3)
	PPC_STORE_U8(ctx.r3.u32 + 917, ctx.r8.u8);
	// stb r8,956(r3)
	PPC_STORE_U8(ctx.r3.u32 + 956, ctx.r8.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r8,957(r3)
	PPC_STORE_U8(ctx.r3.u32 + 957, ctx.r8.u8);
	// stb r8,958(r3)
	PPC_STORE_U8(ctx.r3.u32 + 958, ctx.r8.u8);
	// stb r8,728(r3)
	PPC_STORE_U8(ctx.r3.u32 + 728, ctx.r8.u8);
	// stb r8,729(r3)
	PPC_STORE_U8(ctx.r3.u32 + 729, ctx.r8.u8);
	// stw r8,732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 732, ctx.r8.u32);
	// lfs f13,13500(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 13500);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1064(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1064, temp.u32);
	// stw r8,1092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1092, ctx.r8.u32);
	// stfs f0,1096(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1096, temp.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,281(r11)
	PPC_STORE_U8(ctx.r11.u32 + 281, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA274"))) PPC_WEAK_FUNC(sub_820BA274);
PPC_FUNC_IMPL(__imp__sub_820BA274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA278"))) PPC_WEAK_FUNC(sub_820BA278);
PPC_FUNC_IMPL(__imp__sub_820BA278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,13520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13520);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r9,15219(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15219);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r7,15480(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15480);
	// li r8,1
	ctx.r8.s64 = 1;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r8,818(r6)
	PPC_STORE_U8(ctx.r6.u32 + 818, ctx.r8.u8);
	// lbz r5,15480(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15480);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// addi r11,r11,185
	ctx.r11.s64 = ctx.r11.s64 + 185;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,13500(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 13500);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA2C8"))) PPC_WEAK_FUNC(sub_820BA2C8);
PPC_FUNC_IMPL(__imp__sub_820BA2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r10,13520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13520);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r7,15219(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15219);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820ba2f8
	if (!ctx.cr6.eq) goto loc_820BA2F8;
	// lfs f0,13500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13500);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,868(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 868, temp.u32);
loc_820BA2F8:
	// lwz r5,15328(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15328);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// ori r3,r4,16216
	ctx.r3.u64 = ctx.r4.u64 | 16216;
	// lwz r4,19168(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19168);
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820BA334"))) PPC_WEAK_FUNC(sub_820BA334);
PPC_FUNC_IMPL(__imp__sub_820BA334) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA338"))) PPC_WEAK_FUNC(sub_820BA338);
PPC_FUNC_IMPL(__imp__sub_820BA338) {
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
	// lwz r10,13520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13520);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820ba3a8
	if (ctx.cr6.eq) goto loc_820BA3A8;
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lfs f1,8716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8716);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ac718
	ctx.lr = 0x820BA36C;
	sub_820AC718(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,15328(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15328);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820ba3a8
	if (!ctx.cr6.eq) goto loc_820BA3A8;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lwz r4,19168(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19168);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,164(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 164);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820BA3A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BA3A8:
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

__attribute__((alias("__imp__sub_820BA3BC"))) PPC_WEAK_FUNC(sub_820BA3BC);
PPC_FUNC_IMPL(__imp__sub_820BA3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA3C0"))) PPC_WEAK_FUNC(sub_820BA3C0);
PPC_FUNC_IMPL(__imp__sub_820BA3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,13520(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13520);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x820ba3dc
	if (!ctx.cr6.eq) goto loc_820BA3DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820BA3DC:
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// lfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// stfs f0,264(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 252, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA400"))) PPC_WEAK_FUNC(sub_820BA400);
PPC_FUNC_IMPL(__imp__sub_820BA400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,13520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13520);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r9,15219(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15219);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ba434
	if (ctx.cr6.eq) goto loc_820BA434;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x820ba434
	if (ctx.cr6.eq) goto loc_820BA434;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x820ba434
	if (ctx.cr6.eq) goto loc_820BA434;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820BA434:
	// lbz r8,15480(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15480);
	// lfs f0,13500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13500);
	ctx.f0.f64 = double(temp.f32);
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// addi r7,r11,169
	ctx.r7.s64 = ctx.r11.s64 + 169;
	// addi r6,r11,175
	ctx.r6.s64 = ctx.r11.s64 + 175;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r4,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, temp.u32);
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA45C"))) PPC_WEAK_FUNC(sub_820BA45C);
PPC_FUNC_IMPL(__imp__sub_820BA45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA460"))) PPC_WEAK_FUNC(sub_820BA460);
PPC_FUNC_IMPL(__imp__sub_820BA460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820BA468;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bba4
	ctx.lr = 0x820BA470;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r8,516(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// lwz r9,516(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// lfd f31,-4840(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// addi r7,r9,32
	ctx.r7.s64 = ctx.r9.s64 + 32;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lfd f29,-4816(r11)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4816);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// ld r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f11,f11
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f9,f9
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// lfd f30,-4832(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmadds f6,f12,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f5,f10,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f13.f64));
	// lfs f28,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f27,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f6,f8,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f5,f7,f7,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// frsqrte f0,f6
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f6.f64)));
	// frsqrte f13,f5
	ctx.f13.f64 = double(1.0f / sqrtf(float(ctx.f5.f64)));
	// fmul f4,f6,f0
	ctx.f4.f64 = ctx.f6.f64 * ctx.f0.f64;
	// fmul f2,f5,f13
	ctx.f2.f64 = ctx.f5.f64 * ctx.f13.f64;
	// fmul f3,f0,f30
	ctx.f3.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fmul f1,f13,f30
	ctx.f1.f64 = ctx.f13.f64 * ctx.f30.f64;
	// fnmsub f6,f4,f0,f31
	ctx.f6.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f31.f64);
	// fnmsub f5,f2,f13,f31
	ctx.f5.f64 = -(ctx.f2.f64 * ctx.f13.f64 - ctx.f31.f64);
	// fmadd f4,f6,f3,f0
	ctx.f4.f64 = ctx.f6.f64 * ctx.f3.f64 + ctx.f0.f64;
	// fmadd f3,f5,f1,f13
	ctx.f3.f64 = ctx.f5.f64 * ctx.f1.f64 + ctx.f13.f64;
	// frsp f0,f4
	ctx.f0.f64 = double(float(ctx.f4.f64));
	// frsp f13,f3
	ctx.f13.f64 = double(float(ctx.f3.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f2,f9,f11
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f1,f10,f12,f2
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmadds f0,f13,f0,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fsubs f12,f0,f27
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fsel f1,f12,f0,f29
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f29.f64;
	// bl 0x8259c108
	ctx.lr = 0x820BA57C;
	sub_8259C108(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r29,-32255
	ctx.r29.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-10916(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -10916);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820ba6c8
	if (!ctx.cr6.lt) goto loc_820BA6C8;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r10,516(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,32
	ctx.r6.s64 = ctx.r11.s64 + 32;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f7,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f7
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// lfs f9,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// ld r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// lfs f6,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f0,f9,f6
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// lfs f5,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f12,f8,f5
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// fmuls f3,f10,f10
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f13,f13
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r5,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// std r4,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
	// fmadds f1,f11,f11,f3
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmadds f2,f0,f0,f4
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f7,f9,f9,f1
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f8,f12,f12,f2
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f2.f64));
	// frsqrte f13,f7
	ctx.f13.f64 = double(1.0f / sqrtf(float(ctx.f7.f64)));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f5,f7,f13
	ctx.f5.f64 = ctx.f7.f64 * ctx.f13.f64;
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fmul f8,f8,f0
	ctx.f8.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f30
	ctx.f6.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fmul f4,f13,f30
	ctx.f4.f64 = ctx.f13.f64 * ctx.f30.f64;
	// fnmsub f2,f5,f13,f31
	ctx.f2.f64 = -(ctx.f5.f64 * ctx.f13.f64 - ctx.f31.f64);
	// fnmsub f3,f8,f0,f31
	ctx.f3.f64 = -(ctx.f8.f64 * ctx.f0.f64 - ctx.f31.f64);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fmadd f13,f2,f4,f13
	ctx.f13.f64 = ctx.f2.f64 * ctx.f4.f64 + ctx.f13.f64;
	// fmadd f1,f3,f6,f0
	ctx.f1.f64 = ctx.f3.f64 * ctx.f6.f64 + ctx.f0.f64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmadds f5,f12,f8,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f0,f13,f0,f5
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fsubs f4,f0,f28
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fsel f0,f4,f31,f0
	ctx.f0.f64 = ctx.f4.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fsubs f3,f0,f27
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fsel f1,f3,f0,f29
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f29.f64;
	// bl 0x8259c108
	ctx.lr = 0x820BA698;
	sub_8259C108(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,-10916(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -10916);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,-1632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1632);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x820ba74c
	if (!ctx.cr6.lt) goto loc_820BA74C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bbf0
	ctx.lr = 0x820BA6C4;
	__restfpr_27(ctx, base);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820BA6C8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,3064(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3064);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820ba74c
	if (!ctx.cr6.lt) goto loc_820BA74C;
	// lwz r11,516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// lwz r10,516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f11,f12,f1
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f1,f9,f10,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f0.f64));
	// bl 0x8259c108
	ctx.lr = 0x820BA708;
	sub_8259C108(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,-10916(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -10916);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,28072(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28072);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820ba738
	if (ctx.cr6.lt) goto loc_820BA738;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,3060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3060);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820ba74c
	if (!ctx.cr6.gt) goto loc_820BA74C;
loc_820BA738:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bbf0
	ctx.lr = 0x820BA748;
	__restfpr_27(ctx, base);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820BA74C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bbf0
	ctx.lr = 0x820BA75C;
	__restfpr_27(ctx, base);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BA760"))) PPC_WEAK_FUNC(sub_820BA760);
PPC_FUNC_IMPL(__imp__sub_820BA760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x820BA768;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r6,191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 191, ctx.r6.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r27,6912(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6912);
	// lwz r26,6912(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6912);
	// bl 0x820ba460
	ctx.lr = 0x820BA784;
	sub_820BA460(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// beq cr6,0x820ba794
	if (ctx.cr6.eq) goto loc_820BA794;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820BA794:
	// lwz r10,6912(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6912);
	// lwz r11,15328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ba7d8
	if (!ctx.cr6.eq) goto loc_820BA7D8;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r5,6912(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6912);
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lwz r4,19168(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19168);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BA7D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BA7D8:
	// lis r31,-32162
	ctx.r31.s64 = -2107768832;
	// lwz r11,6912(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6912);
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// lfs f1,8772(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8772);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ac718
	ctx.lr = 0x820BA7EC;
	sub_820AC718(ctx, base);
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820ba808
	if (!ctx.cr6.eq) goto loc_820BA808;
	// lwz r11,6912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6912);
	// lfs f1,8772(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8772);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// bl 0x820ac718
	ctx.lr = 0x820BA808;
	sub_820AC718(ctx, base);
loc_820BA808:
	// lfs f0,13500(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 13500);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stfs f0,14616(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 14616, temp.u32);
	// lfs f13,13500(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 13500);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,14616(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 14616, temp.u32);
	// bne cr6,0x820ba87c
	if (!ctx.cr6.eq) goto loc_820BA87C;
	// lwz r9,6912(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6912);
	// lwz r10,15328(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15328);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820ba858
	if (!ctx.cr6.eq) goto loc_820BA858;
	// lwz r11,6912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6912);
	// lwz r8,15328(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15328);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x820ba858
	if (!ctx.cr6.eq) goto loc_820BA858;
	// addi r3,r11,15920
	ctx.r3.s64 = ctx.r11.s64 + 15920;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820a6138
	ctx.lr = 0x820BA84C;
	sub_820A6138(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_820BA858:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820ba87c
	if (!ctx.cr6.eq) goto loc_820BA87C;
	// lwz r7,6912(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6912);
	// lwz r6,15328(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15328);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x820ba87c
	if (!ctx.cr6.eq) goto loc_820BA87C;
	// addi r3,r9,15920
	ctx.r3.s64 = ctx.r9.s64 + 15920;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820a6138
	ctx.lr = 0x820BA87C;
	sub_820A6138(ctx, base);
loc_820BA87C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BA888"))) PPC_WEAK_FUNC(sub_820BA888);
PPC_FUNC_IMPL(__imp__sub_820BA888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,1092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1092, ctx.r4.u32);
	// lfs f0,13500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13500);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1096(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1096, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA89C"))) PPC_WEAK_FUNC(sub_820BA89C);
PPC_FUNC_IMPL(__imp__sub_820BA89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA8A0"))) PPC_WEAK_FUNC(sub_820BA8A0);
PPC_FUNC_IMPL(__imp__sub_820BA8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,1096(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1096);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820ba8bc
	if (!ctx.cr6.eq) goto loc_820BA8BC;
loc_820BA8B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820BA8BC:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,13500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820ba8b4
	if (ctx.cr6.lt) goto loc_820BA8B4;
	// lwz r3,1092(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1092);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA8D8"))) PPC_WEAK_FUNC(sub_820BA8D8);
PPC_FUNC_IMPL(__imp__sub_820BA8D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,856(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 856);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x820ba8ec
	if (!ctx.cr6.eq) goto loc_820BA8EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820BA8EC:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// b 0x8232da90
	sub_8232DA90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BA8F8"))) PPC_WEAK_FUNC(sub_820BA8F8);
PPC_FUNC_IMPL(__imp__sub_820BA8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,660(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 660);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820ba914
	if (!ctx.cr6.lt) goto loc_820BA914;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820BA914:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,13500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA934"))) PPC_WEAK_FUNC(sub_820BA934);
PPC_FUNC_IMPL(__imp__sub_820BA934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA938"))) PPC_WEAK_FUNC(sub_820BA938);
PPC_FUNC_IMPL(__imp__sub_820BA938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,920(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 920);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820ba954
	if (!ctx.cr6.lt) goto loc_820BA954;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820BA954:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,13500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA974"))) PPC_WEAK_FUNC(sub_820BA974);
PPC_FUNC_IMPL(__imp__sub_820BA974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA978"))) PPC_WEAK_FUNC(sub_820BA978);
PPC_FUNC_IMPL(__imp__sub_820BA978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1064(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1064);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820ba994
	if (!ctx.cr6.lt) goto loc_820BA994;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820BA994:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,13500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BA9B4"))) PPC_WEAK_FUNC(sub_820BA9B4);
PPC_FUNC_IMPL(__imp__sub_820BA9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BA9B8"))) PPC_WEAK_FUNC(sub_820BA9B8);
PPC_FUNC_IMPL(__imp__sub_820BA9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x820BA9C0;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8259bba8
	ctx.lr = 0x820BA9C8;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r10,r11,36968
	ctx.r10.u64 = ctx.r11.u64 | 36968;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lfs f29,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f29.f64 = double(temp.f32);
	// addi r25,r11,26080
	ctx.r25.s64 = ctx.r11.s64 + 26080;
	// ble cr6,0x820babf0
	if (!ctx.cr6.gt) goto loc_820BABF0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r30,764
	ctx.r31.s64 = ctx.r30.s64 + 764;
	// addi r22,r30,818
	ctx.r22.s64 = ctx.r30.s64 + 818;
	// lfs f30,-12136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12136);
	ctx.f30.f64 = double(temp.f32);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lfd f31,-4832(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4832);
	// lis r23,-32162
	ctx.r23.s64 = -2107768832;
	// lfd f28,-1600(r11)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1600);
	// lis r24,-32162
	ctx.r24.s64 = -2107768832;
loc_820BAA30:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232da90
	ctx.lr = 0x820BAA3C;
	sub_8232DA90(ctx, base);
	// lbzx r9,r22,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820baba8
	if (ctx.cr6.eq) goto loc_820BABA8;
	// lfs f0,1096(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1096);
	ctx.f0.f64 = double(temp.f32);
	// fsel f13,f28,f31,f31
	ctx.f13.f64 = ctx.f28.f64 >= 0.0 ? ctx.f31.f64 : ctx.f31.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x820baa60
	if (!ctx.cr6.eq) goto loc_820BAA60;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x820baa7c
	goto loc_820BAA7C;
loc_820BAA60:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f12,13500(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13500);
	ctx.f12.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x820baa7c
	if (ctx.cr6.lt) goto loc_820BAA7C;
	// lwz r8,1092(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1092);
loc_820BAA7C:
	// lfs f0,14792(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 14792);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x820baaa4
	if (ctx.cr6.eq) goto loc_820BAAA4;
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lwz r7,13696(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13696);
	// lfs f10,13500(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 13500);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blt cr6,0x820baaa4
	if (ctx.cr6.lt) goto loc_820BAAA4;
	// lwz r11,14788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14788);
loc_820BAAA4:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f1,25556(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820bab24
	if (!ctx.cr6.eq) goto loc_820BAB24;
	// lfs f0,14356(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 14356);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x820baae0
	if (ctx.cr6.lt) goto loc_820BAAE0;
	// fadds f9,f0,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lwz r6,13696(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13696);
	// lfs f8,13500(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 13500);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bgt cr6,0x820baae0
	if (ctx.cr6.gt) goto loc_820BAAE0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820BAAE0:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820bab20
	if (!ctx.cr6.eq) goto loc_820BAB20;
	// lfs f0,14616(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 14616);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x820bab14
	if (ctx.cr6.lt) goto loc_820BAB14;
	// fadds f7,f0,f1
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lwz r4,13696(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13696);
	// lfs f6,13500(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 13500);
	ctx.f6.f64 = double(temp.f32);
	// fcmpu cr6,f6,f7
	ctx.cr6.compare(ctx.f6.f64, ctx.f7.f64);
	// bgt cr6,0x820bab14
	if (ctx.cr6.gt) goto loc_820BAB14;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820BAB14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bab24
	if (ctx.cr6.eq) goto loc_820BAB24;
loc_820BAB20:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820BAB24:
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x820bab58
	if (!ctx.cr6.eq) goto loc_820BAB58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ba8f8
	ctx.lr = 0x820BAB34;
	sub_820BA8F8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820bab54
	if (!ctx.cr6.eq) goto loc_820BAB54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ba938
	ctx.lr = 0x820BAB48;
	sub_820BA938(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820bab58
	if (ctx.cr6.eq) goto loc_820BAB58;
loc_820BAB54:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820BAB58:
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820babd0
	if (!ctx.cr6.eq) goto loc_820BABD0;
	// lfs f5,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f5,f29
	ctx.cr6.compare(ctx.f5.f64, ctx.f29.f64);
	// bne cr6,0x820bab78
	if (!ctx.cr6.eq) goto loc_820BAB78;
	// lfs f4,13500(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13500);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_820BAB78:
	// addi r3,r25,92
	ctx.r3.s64 = ctx.r25.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x820BAB80;
	sub_8210B3C8(ctx, base);
	// lfs f3,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f0,f3,f1
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,8708(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8708);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820babd4
	if (ctx.cr6.lt) goto loc_820BABD4;
	// bso cr6,0x820babd4
	if (ctx.cr6.so) goto loc_820BABD4;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r28,856(r30)
	PPC_STORE_U32(ctx.r30.u32 + 856, ctx.r28.u32);
	// b 0x820babd4
	goto loc_820BABD4;
loc_820BABA8:
	// lfs f2,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f29
	ctx.cr6.compare(ctx.f2.f64, ctx.f29.f64);
	// ble cr6,0x820babd4
	if (!ctx.cr6.gt) goto loc_820BABD4;
	// lfs f1,-24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,8736(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8736);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f13,13500(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 13500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820babd4
	if (!ctx.cr6.gt) goto loc_820BABD4;
loc_820BABD0:
	// stfs f29,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_820BABD4:
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// ori r3,r4,36968
	ctx.r3.u64 = ctx.r4.u64 | 36968;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwzx r11,r29,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820baa30
	if (ctx.cr6.lt) goto loc_820BAA30;
loc_820BABF0:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bac88
	if (ctx.cr6.eq) goto loc_820BAC88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x820BAC04;
	sub_8210B3C8(ctx, base);
	// lfs f12,832(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r30,828
	ctx.r3.s64 = ctx.r30.s64 + 828;
	// fadds f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// bl 0x820b8000
	ctx.lr = 0x820BAC14;
	sub_820B8000(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210b3c8
	ctx.lr = 0x820BAC1C;
	sub_8210B3C8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lfs f0,8712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8712);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x820ac718
	ctx.lr = 0x820BAC34;
	sub_820AC718(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,856(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,848(r30)
	PPC_STORE_U8(ctx.r30.u32 + 848, ctx.r10.u8);
	// bl 0x8232da90
	ctx.lr = 0x820BAC48;
	sub_8232DA90(ctx, base);
	// lwz r9,15328(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15328);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x820bad18
	if (!ctx.cr6.eq) goto loc_820BAD18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,856(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// bl 0x8232da90
	ctx.lr = 0x820BAC60;
	sub_8232DA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,856(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// bl 0x8232da90
	ctx.lr = 0x820BAC70;
	sub_8232DA90(ctx, base);
	// lfs f11,13500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 13500);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,14556(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 14556, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8259bbf4
	ctx.lr = 0x820BAC84;
	__restfpr_28(ctx, base);
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_820BAC88:
	// lbz r8,848(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 848);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820bad18
	if (ctx.cr6.eq) goto loc_820BAD18;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,15328(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15328);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820bace4
	if (!ctx.cr6.eq) goto loc_820BACE4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,19168(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19168);
	// lwz r4,856(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	// bl 0x8232da90
	ctx.lr = 0x820BACB4;
	sub_8232DA90(ctx, base);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r6,16216
	ctx.r5.u64 = ctx.r6.u64 | 16216;
	// addi r6,r30,828
	ctx.r6.s64 = ctx.r30.s64 + 828;
	// lwzx r11,r25,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r5.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820BACE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BACE4:
	// addi r11,r30,828
	ctx.r11.s64 = ctx.r30.s64 + 828;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r6,21(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lfs f10,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stb r6,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r6.u8);
	// lfs f9,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stb r5,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r5.u8);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r8,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r8.u8);
	// stfs f29,4(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820BAD18:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x8259bbf4
	ctx.lr = 0x820BAD24;
	__restfpr_28(ctx, base);
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BAD28"))) PPC_WEAK_FUNC(sub_820BAD28);
PPC_FUNC_IMPL(__imp__sub_820BAD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x820BAD30;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r23,r10,28544
	ctx.r23.s64 = ctx.r10.s64 + 28544;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r9,r10,15492
	ctx.r9.u64 = ctx.r10.u64 | 15492;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbzx r8,r23,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r9.u32);
	// lfs f13,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-10928(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10928);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x820bb1cc
	if (ctx.cr6.eq) goto loc_820BB1CC;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lbz r7,15480(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15480);
	// lis r6,3
	ctx.r6.s64 = 196608;
	// addi r10,r10,26752
	ctx.r10.s64 = ctx.r10.s64 + 26752;
	// ori r5,r6,51969
	ctx.r5.u64 = ctx.r6.u64 | 51969;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// lbzx r4,r10,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// addis r10,r23,4
	ctx.r10.s64 = ctx.r23.s64 + 262144;
	// addi r3,r10,15436
	ctx.r3.s64 = ctx.r10.s64 + 15436;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lbzx r25,r11,r3
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// beq cr6,0x820badb8
	if (ctx.cr6.eq) goto loc_820BADB8;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1264
	ctx.r10.s64 = ctx.r10.s64 + -1264;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lbz r7,21(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 21);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820bb1cc
	if (!ctx.cr6.eq) goto loc_820BB1CC;
loc_820BADB8:
	// li r24,0
	ctx.r24.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x820bafac
	if (!ctx.cr6.gt) goto loc_820BAFAC;
	// addis r10,r23,4
	ctx.r10.s64 = ctx.r23.s64 + 262144;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,15262
	ctx.r10.s64 = ctx.r10.s64 + 15262;
	// lis r26,-32162
	ctx.r26.s64 = -2107768832;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820BADE0:
	// addis r11,r23,2
	ctx.r11.s64 = ctx.r23.s64 + 131072;
	// lbzx r29,r27,r28
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-32320
	ctx.r10.s64 = ctx.r11.s64 + -32320;
	// rotlwi r11,r29,9
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 9);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820b99b8
	ctx.lr = 0x820BAE00;
	sub_820B99B8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820bafa0
	if (ctx.cr6.eq) goto loc_820BAFA0;
	// lwz r11,380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bae1c
	if (ctx.cr6.eq) goto loc_820BAE1C;
	// lbz r29,491(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 491);
loc_820BAE1C:
	// lfs f12,8652(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8652);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// blt cr6,0x820bafa0
	if (ctx.cr6.lt) goto loc_820BAFA0;
	// bso cr6,0x820bafa0
	if (ctx.cr6.so) goto loc_820BAFA0;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// addi r8,r31,148
	ctx.r8.s64 = ctx.r31.s64 + 148;
loc_820BAE3C:
	// lbzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820bae58
	if (ctx.cr6.eq) goto loc_820BAE58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x820bae3c
	if (ctx.cr6.lt) goto loc_820BAE3C;
	// b 0x820bae70
	goto loc_820BAE70;
loc_820BAE58:
	// addi r4,r11,39
	ctx.r4.s64 = ctx.r11.s64 + 39;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,13500(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13500);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
loc_820BAE70:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820bafa0
	if (!ctx.cr6.eq) goto loc_820BAFA0;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_820BAE84:
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x820baea0
	if (ctx.cr6.eq) goto loc_820BAEA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x820bae84
	if (ctx.cr6.lt) goto loc_820BAE84;
	// b 0x820baec4
	goto loc_820BAEC4;
loc_820BAEA0:
	// addi r7,r11,39
	ctx.r7.s64 = ctx.r11.s64 + 39;
	// stbx r29,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r29.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lfs f10,13500(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 13500);
	ctx.f10.f64 = double(temp.f32);
	// stfsx f10,r5,r31
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, temp.u32);
	// stb r22,188(r6)
	PPC_STORE_U8(ctx.r6.u32 + 188, ctx.r22.u8);
loc_820BAEC4:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bafa0
	if (!ctx.cr6.eq) goto loc_820BAFA0;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lfs f13,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820baeec
	if (!ctx.cr6.lt) goto loc_820BAEEC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_820BAEEC:
	// lfs f13,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820baf00
	if (!ctx.cr6.lt) goto loc_820BAF00;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_820BAF00:
	// lfs f13,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820baf14
	if (!ctx.cr6.lt) goto loc_820BAF14;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r11,2
	ctx.r11.s64 = 2;
loc_820BAF14:
	// lfs f13,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820baf28
	if (!ctx.cr6.lt) goto loc_820BAF28;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r11,3
	ctx.r11.s64 = 3;
loc_820BAF28:
	// lfs f13,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820baf3c
	if (!ctx.cr6.lt) goto loc_820BAF3C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r11,4
	ctx.r11.s64 = 4;
loc_820BAF3C:
	// lfs f13,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820baf50
	if (!ctx.cr6.lt) goto loc_820BAF50;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r11,5
	ctx.r11.s64 = 5;
loc_820BAF50:
	// lfs f13,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820baf64
	if (!ctx.cr6.lt) goto loc_820BAF64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r11,6
	ctx.r11.s64 = 6;
loc_820BAF64:
	// lfs f9,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x820baf78
	if (!ctx.cr6.lt) goto loc_820BAF78;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x820baf80
	goto loc_820BAF80;
loc_820BAF78:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820bafa0
	if (ctx.cr6.lt) goto loc_820BAFA0;
loc_820BAF80:
	// addi r10,r11,39
	ctx.r10.s64 = ctx.r11.s64 + 39;
	// stbx r29,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r29.u8);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,13500(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 13500);
	ctx.f8.f64 = double(temp.f32);
	// stfsx f8,r7,r31
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// stb r22,188(r9)
	PPC_STORE_U8(ctx.r9.u32 + 188, ctx.r22.u8);
loc_820BAFA0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x820bade0
	if (ctx.cr6.lt) goto loc_820BADE0;
loc_820BAFAC:
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820bb070
	if (ctx.cr6.eq) goto loc_820BB070;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lfs f7,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,8664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8664);
	ctx.f0.f64 = double(temp.f32);
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// lfs f13,13500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f6
	ctx.cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// bgt cr6,0x820bafe8
	if (ctx.cr6.gt) goto loc_820BAFE8;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lfs f0,8656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8656);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x820bb070
	if (!ctx.cr6.lt) goto loc_820BB070;
loc_820BAFE8:
	// lbz r4,217(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 217);
	// stfs f13,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stw r24,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r24.u32);
	// cmplwi cr6,r4,128
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 128, ctx.xer);
	// bge cr6,0x820bb038
	if (!ctx.cr6.lt) goto loc_820BB038;
	// lwz r3,15328(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15328);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820bb038
	if (!ctx.cr6.eq) goto loc_820BB038;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r5,19168(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19168);
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,108(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 108);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820BB038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BB038:
	// addi r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 + 196;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lbz r4,21(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lfs f5,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f5,12(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stb r4,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r4.u8);
	// lfs f4,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stb r24,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r24.u8);
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stb r3,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r3.u8);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820BB070:
	// addi r30,r31,148
	ctx.r30.s64 = ctx.r31.s64 + 148;
	// addi r28,r31,156
	ctx.r28.s64 = ctx.r31.s64 + 156;
	// subfic r29,r31,-148
	ctx.xer.ca = ctx.r31.u32 <= 4294967148;
	ctx.r29.s64 = -148 - ctx.r31.s64;
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// lis r27,-32162
	ctx.r27.s64 = -2107768832;
	// li r26,255
	ctx.r26.s64 = 255;
loc_820BB088:
	// addis r11,r23,2
	ctx.r11.s64 = ctx.r23.s64 + 131072;
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r10,r11,-32320
	ctx.r10.s64 = ctx.r11.s64 + -32320;
	// rotlwi r11,r8,9
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 9);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,488(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 488);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// bne cr6,0x820bb0b4
	if (!ctx.cr6.eq) goto loc_820BB0B4;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_820BB0B4:
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820bb19c
	if (!ctx.cr6.eq) goto loc_820BB19C;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820bb0dc
	if (ctx.cr6.eq) goto loc_820BB0DC;
	// lbz r5,500(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 500);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820bb0e0
	if (ctx.cr6.eq) goto loc_820BB0E0;
loc_820BB0DC:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_820BB0E0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bb19c
	if (ctx.cr6.eq) goto loc_820BB19C;
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// beq cr6,0x820bb174
	if (ctx.cr6.eq) goto loc_820BB174;
	// lfs f3,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f3,f2
	ctx.cr6.compare(ctx.f3.f64, ctx.f2.f64);
	// bge cr6,0x820bb174
	if (!ctx.cr6.lt) goto loc_820BB174;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 188);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bb174
	if (ctx.cr6.eq) goto loc_820BB174;
	// stb r24,188(r11)
	PPC_STORE_U8(ctx.r11.u32 + 188, ctx.r24.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r11,13280
	ctx.r3.s64 = ctx.r11.s64 + 13280;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// lfs f1,8660(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8660);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ac718
	ctx.lr = 0x820BB144;
	sub_820AC718(ctx, base);
	// lwz r7,124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// stb r22,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r22.u8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x820b8000
	ctx.lr = 0x820BB168;
	sub_820B8000(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,13500(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 13500);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
loc_820BB174:
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// beq cr6,0x820bb1ac
	if (ctx.cr6.eq) goto loc_820BB1AC;
	// lfs f12,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2868(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 2868);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f9,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bge cr6,0x820bb1ac
	if (!ctx.cr6.lt) goto loc_820BB1AC;
	// b 0x820bb1a8
	goto loc_820BB1A8;
loc_820BB19C:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r24,188(r3)
	PPC_STORE_U8(ctx.r3.u32 + 188, ctx.r24.u8);
loc_820BB1A8:
	// stb r26,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
loc_820BB1AC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x820bb088
	if (ctx.cr6.lt) goto loc_820BB088;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f8,13500(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13500);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,136(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
loc_820BB1CC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BB1D8"))) PPC_WEAK_FUNC(sub_820BB1D8);
PPC_FUNC_IMPL(__imp__sub_820BB1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r9,r10,36968
	ctx.r9.u64 = ctx.r10.u64 | 36968;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r11,r3,616
	ctx.r11.s64 = ctx.r3.s64 + 616;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,-12136(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
loc_820BB204:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r9,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820bb204
	if (!ctx.cr6.eq) goto loc_820BB204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB220"))) PPC_WEAK_FUNC(sub_820BB220);
PPC_FUNC_IMPL(__imp__sub_820BB220) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,15328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15328);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820bb23c
	if (!ctx.cr6.eq) goto loc_820BB23C;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, ctx.r10.u32);
	// blr 
	return;
loc_820BB23C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820bb250
	if (!ctx.cr6.eq) goto loc_820BB250;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, ctx.r9.u32);
	// blr 
	return;
loc_820BB250:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x820bb27c
	if (ctx.cr6.lt) goto loc_820BB27C;
	// beq cr6,0x820bb270
	if (ctx.cr6.eq) goto loc_820BB270;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, ctx.r8.u32);
	// blr 
	return;
loc_820BB270:
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, ctx.r7.u32);
	// blr 
	return;
loc_820BB27C:
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r6,612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 612, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB288"))) PPC_WEAK_FUNC(sub_820BB288);
PPC_FUNC_IMPL(__imp__sub_820BB288) {
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
	// addi r9,r4,147
	ctx.r9.s64 = ctx.r4.s64 + 147;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r3,r10,28544
	ctx.r3.s64 = ctx.r10.s64 + 28544;
	// lwzx r31,r8,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// bl 0x8232da90
	ctx.lr = 0x820BB2B4;
	sub_8232DA90(ctx, base);
	// lwz r3,14308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14308);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x820bb2c4
	if (ctx.cr6.lt) goto loc_820BB2C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820BB2C4:
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

__attribute__((alias("__imp__sub_820BB2D8"))) PPC_WEAK_FUNC(sub_820BB2D8);
PPC_FUNC_IMPL(__imp__sub_820BB2D8) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r10,905(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 905);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB2F4"))) PPC_WEAK_FUNC(sub_820BB2F4);
PPC_FUNC_IMPL(__imp__sub_820BB2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB2F8"))) PPC_WEAK_FUNC(sub_820BB2F8);
PPC_FUNC_IMPL(__imp__sub_820BB2F8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// stb r11,1079(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1079, ctx.r11.u8);
	// beq cr6,0x820bb3c0
	if (ctx.cr6.eq) goto loc_820BB3C0;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x820bb3c0
	if (ctx.cr6.eq) goto loc_820BB3C0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820bb3c0
	if (ctx.cr6.eq) goto loc_820BB3C0;
	// lbz r10,37(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 37);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bb3c0
	if (ctx.cr6.eq) goto loc_820BB3C0;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r8,r9,37004
	ctx.r8.u64 = ctx.r9.u64 | 37004;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x820bb374
	if (ctx.cr6.gt) goto loc_820BB374;
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// ori r6,r7,37012
	ctx.r6.u64 = ctx.r7.u64 | 37012;
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble cr6,0x820bb378
	if (!ctx.cr6.gt) goto loc_820BB378;
loc_820BB374:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_820BB378:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bb3c0
	if (!ctx.cr6.eq) goto loc_820BB3C0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,15328(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15328);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820bb3c0
	if (!ctx.cr6.eq) goto loc_820BB3C0;
	// addis r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 2162688;
	// addi r3,r11,6592
	ctx.r3.s64 = ctx.r11.s64 + 6592;
	// bl 0x820b7708
	ctx.lr = 0x820BB3A0;
	sub_820B7708(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x820bb3c0
	if (ctx.cr6.eq) goto loc_820BB3C0;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r8,1076(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1076);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820bb3c0
	if (!ctx.cr6.eq) goto loc_820BB3C0;
	// stb r30,1076(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1076, ctx.r30.u8);
	// stb r30,1079(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1079, ctx.r30.u8);
loc_820BB3C0:
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

__attribute__((alias("__imp__sub_820BB3D8"))) PPC_WEAK_FUNC(sub_820BB3D8);
PPC_FUNC_IMPL(__imp__sub_820BB3D8) {
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
	// lwz r11,15332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bb414
	if (!ctx.cr6.eq) goto loc_820BB414;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,-7792
	ctx.r3.s64 = ctx.r11.s64 + -7792;
	// bl 0x822a11a8
	ctx.lr = 0x820BB410;
	sub_822A11A8(ctx, base);
	// stw r3,15332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15332, ctx.r3.u32);
loc_820BB414:
	// lwz r3,15332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bb450
	if (ctx.cr6.eq) goto loc_820BB450;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,15480(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15480);
	// ld r4,15408(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 15408);
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820BB43C;
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
loc_820BB450:
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

__attribute__((alias("__imp__sub_820BB468"))) PPC_WEAK_FUNC(sub_820BB468);
PPC_FUNC_IMPL(__imp__sub_820BB468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,15332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820BB488"))) PPC_WEAK_FUNC(sub_820BB488);
PPC_FUNC_IMPL(__imp__sub_820BB488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB48C"))) PPC_WEAK_FUNC(sub_820BB48C);
PPC_FUNC_IMPL(__imp__sub_820BB48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB490"))) PPC_WEAK_FUNC(sub_820BB490);
PPC_FUNC_IMPL(__imp__sub_820BB490) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,19179(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19179);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bb4c0
	if (ctx.cr6.eq) goto loc_820BB4C0;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,37
	ctx.r10.s64 = 2424832;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,49248
	ctx.r9.u64 = ctx.r10.u64 | 49248;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820bb4c0
	if (!ctx.cr6.eq) goto loc_820BB4C0;
	// lwz r3,15208(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15208);
	// blr 
	return;
loc_820BB4C0:
	// lhz r3,15200(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 15200);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB4C8"))) PPC_WEAK_FUNC(sub_820BB4C8);
PPC_FUNC_IMPL(__imp__sub_820BB4C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16271
	ctx.r9.u64 = ctx.r10.u64 | 16271;
	// lbzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BB4E0"))) PPC_WEAK_FUNC(sub_820BB4E0);
PPC_FUNC_IMPL(__imp__sub_820BB4E0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// std r11,3448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3448, ctx.r11.u64);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,3456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3456, ctx.r11.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,3464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3464, ctx.r9.u32);
	// stw r10,3460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3460, ctx.r10.u32);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,3496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3496, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ld r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r8,3468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3468, ctx.r8.u32);
	// stw r7,3472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3472, ctx.r7.u32);
	// stb r6,3476(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3476, ctx.r6.u8);
	// stw r10,3500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3500, ctx.r10.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r9,3504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3504, ctx.r9.u32);
	// li r9,150
	ctx.r9.s64 = 150;
	// std r5,3480(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3480, ctx.r5.u64);
	// stw r4,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r4.u32);
	// stw r3,3492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3492, ctx.r3.u32);
	// stb r11,3508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3508, ctx.r11.u8);
	// std r11,3512(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3512, ctx.r11.u64);
	// stw r11,3520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3520, ctx.r11.u32);
	// stw r11,3524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3524, ctx.r11.u32);
	// stw r11,3528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3528, ctx.r11.u32);
	// stw r11,3532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3532, ctx.r11.u32);
	// stw r11,3536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3536, ctx.r11.u32);
	// stb r11,3540(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3540, ctx.r11.u8);
	// std r11,3544(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3544, ctx.r11.u64);
	// stw r11,3552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3552, ctx.r11.u32);
	// stw r11,3556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3556, ctx.r11.u32);
	// stw r11,3560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3560, ctx.r11.u32);
	// stw r11,3564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3564, ctx.r11.u32);
	// stw r11,3568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3568, ctx.r11.u32);
	// stb r11,3572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3572, ctx.r11.u8);
	// std r11,3576(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3576, ctx.r11.u64);
	// stw r11,3584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3584, ctx.r11.u32);
	// stw r11,3588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3588, ctx.r11.u32);
	// stw r11,3592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3592, ctx.r11.u32);
	// stw r11,3596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3596, ctx.r11.u32);
	// stw r11,3600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3600, ctx.r11.u32);
	// stb r11,3604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3604, ctx.r11.u8);
	// std r11,3608(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3608, ctx.r11.u64);
	// stw r11,3616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3616, ctx.r11.u32);
	// stw r11,3620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3620, ctx.r11.u32);
	// stw r11,3624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3624, ctx.r11.u32);
	// stw r11,3628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3628, ctx.r11.u32);
	// stw r11,3632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3632, ctx.r11.u32);
	// stb r11,3636(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3636, ctx.r11.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820BB610:
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x820bb610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BB610;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,3436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3436, ctx.r11.u32);
	// lis r10,-32134
	ctx.r10.s64 = -2105933824;
	// stb r11,3666(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3666, ctx.r11.u8);
	// addi r3,r31,1208
	ctx.r3.s64 = ctx.r31.s64 + 1208;
	// stw r8,3660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3660, ctx.r8.u32);
	// std r11,32112(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32112, ctx.r11.u64);
	// stb r11,3667(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3667, ctx.r11.u8);
	// bl 0x82101890
	ctx.lr = 0x820BB640;
	sub_82101890(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,3440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3440, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_820BB65C"))) PPC_WEAK_FUNC(sub_820BB65C);
PPC_FUNC_IMPL(__imp__sub_820BB65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB660"))) PPC_WEAK_FUNC(sub_820BB660);
PPC_FUNC_IMPL(__imp__sub_820BB660) {
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
	// lwz r11,3440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3440);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x820bb6e8
	if (!ctx.cr6.eq) goto loc_820BB6E8;
	// lwz r10,3656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3656);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bb6e8
	if (ctx.cr6.eq) goto loc_820BB6E8;
	// addi r3,r31,1208
	ctx.r3.s64 = ctx.r31.s64 + 1208;
	// bl 0x8210de48
	ctx.lr = 0x820BB698;
	sub_8210DE48(ctx, base);
	// lwz r11,3656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3656);
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bb6bc
	if (ctx.cr6.eq) goto loc_820BB6BC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820bb6c0
	if (!ctx.cr6.eq) goto loc_820BB6C0;
loc_820BB6BC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_820BB6C0:
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820bb6e0
	if (ctx.cr6.eq) goto loc_820BB6E0;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82173af8
	ctx.lr = 0x820BB6D4;
	sub_82173AF8(ctx, base);
	// lwz r5,3656(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3656);
	// stw r30,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r30.u32);
	// stw r30,3656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3656, ctx.r30.u32);
loc_820BB6E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820bb6ec
	goto loc_820BB6EC;
loc_820BB6E8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820BB6EC:
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

__attribute__((alias("__imp__sub_820BB704"))) PPC_WEAK_FUNC(sub_820BB704);
PPC_FUNC_IMPL(__imp__sub_820BB704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BB708"))) PPC_WEAK_FUNC(sub_820BB708);
PPC_FUNC_IMPL(__imp__sub_820BB708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bacc
	ctx.lr = 0x820BB710;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r18,r11,5168
	ctx.r18.s64 = ctx.r11.s64 + 5168;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r17,-32134
	ctx.r17.s64 = -2105933824;
	// lwz r19,328(r18)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r18.u32 + 328);
	// stw r11,3436(r23)
	PPC_STORE_U32(ctx.r23.u32 + 3436, ctx.r11.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x820bb748
	if (!ctx.cr6.gt) goto loc_820BB748;
	// rlwinm r10,r19,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r18,144
	ctx.r9.s64 = ctx.r18.s64 + 144;
	// ldx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// std r8,32112(r17)
	PPC_STORE_U64(ctx.r17.u32 + 32112, ctx.r8.u64);
loc_820BB748:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r20,r11,11600
	ctx.r20.s64 = ctx.r11.s64 + 11600;
	// lwz r11,552(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bb790
	if (ctx.cr6.eq) goto loc_820BB790;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x820bb790
	if (ctx.cr6.eq) goto loc_820BB790;
	// lwz r7,3436(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3436);
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r10,r6,r23
	PPC_STORE_U64(ctx.r6.u32 + ctx.r23.u32, ctx.r10.u64);
	// lwz r11,3436(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3436);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r11,3436(r23)
	PPC_STORE_U32(ctx.r23.u32 + 3436, ctx.r11.u32);
	// stw r5,3660(r23)
	PPC_STORE_U32(ctx.r23.u32 + 3660, ctx.r5.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
loc_820BB790:
	// li r21,1
	ctx.r21.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bb7b8
	if (ctx.cr6.eq) goto loc_820BB7B8;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x820faee8
	ctx.lr = 0x820BB7A4;
	sub_820FAEE8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,324(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 324);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820bb7e4
	if (ctx.cr6.eq) goto loc_820BB7E4;
	// b 0x820bb7e0
	goto loc_820BB7E0;
loc_820BB7B8:
	// lwz r3,316(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 316);
	// lwz r11,324(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 324);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820bb7e4
	if (!ctx.cr6.eq) goto loc_820BB7E4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820bb7e0
	if (ctx.cr6.eq) goto loc_820BB7E0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820bb7e0
	if (ctx.cr6.eq) goto loc_820BB7E0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820bb7e4
	if (!ctx.cr6.eq) goto loc_820BB7E4;
loc_820BB7E0:
	// li r21,3
	ctx.r21.s64 = 3;
loc_820BB7E4:
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r28,r10,26080
	ctx.r28.s64 = ctx.r10.s64 + 26080;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r9,r10,16271
	ctx.r9.u64 = ctx.r10.u64 | 16271;
	// lbzx r8,r28,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820bb928
	if (!ctx.cr6.eq) goto loc_820BB928;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820bb928
	if (ctx.cr6.eq) goto loc_820BB928;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// li r22,0
	ctx.r22.s64 = 0;
	// ori r6,r7,12448
	ctx.r6.u64 = ctx.r7.u64 | 12448;
	// lwzx r10,r28,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x820bb980
	if (!ctx.cr6.gt) goto loc_820BB980;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// ori r3,r4,12468
	ctx.r3.u64 = ctx.r4.u64 | 12468;
	// addi r24,r11,-1416
	ctx.r24.s64 = ctx.r11.s64 + -1416;
	// lwzx r11,r28,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
loc_820BB838:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820bb914
	if (!ctx.cr6.gt) goto loc_820BB914;
	// addis r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 196608;
	// addis r10,r28,3
	ctx.r10.s64 = ctx.r28.s64 + 196608;
	// addi r26,r11,12472
	ctx.r26.s64 = ctx.r11.s64 + 12472;
	// addi r27,r10,13672
	ctx.r27.s64 = ctx.r10.s64 + 13672;
loc_820BB854:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// ld r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820bb86c
	if (ctx.cr6.eq) goto loc_820BB86C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820BB86C:
	// addis r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 196608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// bl 0x822d2810
	ctx.lr = 0x820BB87C;
	sub_822D2810(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820fca90
	ctx.lr = 0x820BB88C;
	sub_820FCA90(ctx, base);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bb8e8
	if (ctx.cr6.eq) goto loc_820BB8E8;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820bb8e8
	if (ctx.cr6.eq) goto loc_820BB8E8;
	// cmpw cr6,r22,r29
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x820bb8e8
	if (!ctx.cr6.eq) goto loc_820BB8E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d2930
	ctx.lr = 0x820BB8B4;
	sub_822D2930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820fb1a8
	ctx.lr = 0x820BB8C4;
	sub_820FB1A8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820bb8e8
	if (ctx.cr6.eq) goto loc_820BB8E8;
	// lwz r6,3436(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3436);
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r31,r5,r23
	PPC_STORE_U64(ctx.r5.u32 + ctx.r23.u32, ctx.r31.u64);
	// lwz r11,3436(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3436);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,3436(r23)
	PPC_STORE_U32(ctx.r23.u32 + 3436, ctx.r4.u32);
loc_820BB8E8:
	// lis r3,3
	ctx.r3.s64 = 196608;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// ori r11,r3,12468
	ctx.r11.u64 = ctx.r3.u64 | 12468;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820bb854
	if (ctx.cr6.lt) goto loc_820BB854;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r9,r10,12448
	ctx.r9.u64 = ctx.r10.u64 | 12448;
	// lwzx r10,r28,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
loc_820BB914:
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpw cr6,r22,r8
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820bb838
	if (ctx.cr6.lt) goto loc_820BB838;
	// b 0x820bb980
	goto loc_820BB980;
loc_820BB928:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,-5928
	ctx.r28.s64 = ctx.r11.s64 + -5928;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r29,r11,-1416
	ctx.r29.s64 = ctx.r11.s64 + -1416;
loc_820BB93C:
	// ld r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820fca90
	ctx.lr = 0x820BB94C;
	sub_820FCA90(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820bb970
	if (ctx.cr6.eq) goto loc_820BB970;
	// lwz r6,3436(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3436);
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r31,r5,r23
	PPC_STORE_U64(ctx.r5.u32 + ctx.r23.u32, ctx.r31.u64);
	// lwz r11,3436(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3436);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,3436(r23)
	PPC_STORE_U32(ctx.r23.u32 + 3436, ctx.r4.u32);
loc_820BB970:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r3,r28,720
	ctx.r3.s64 = ctx.r28.s64 + 720;
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x820bb93c
	if (ctx.cr6.lt) goto loc_820BB93C;
loc_820BB980:
	// lwz r11,316(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 316);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820bb9a0
	if (!ctx.cr6.eq) goto loc_820BB9A0;
	// lwz r11,3436(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3436);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
loc_820BB994:
	// stw r10,3660(r23)
	PPC_STORE_U32(ctx.r23.u32 + 3660, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
loc_820BB9A0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x820bb9f8
	if (!ctx.cr6.gt) goto loc_820BB9F8;
	// lwz r8,3436(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3436);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x820bb9e8
	if (!ctx.cr6.gt) goto loc_820BB9E8;
	// rlwinm r9,r19,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r18,144
	ctx.r7.s64 = ctx.r18.s64 + 144;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// ldx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r7.u32);
loc_820BB9C8:
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r6
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r6.u64, ctx.xer);
	// beq cr6,0x820bb994
	if (ctx.cr6.eq) goto loc_820BB994;
	// lwz r5,3436(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3436);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820bb9c8
	if (ctx.cr6.lt) goto loc_820BB9C8;
loc_820BB9E8:
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// stw r4,3660(r23)
	PPC_STORE_U32(ctx.r23.u32 + 3660, ctx.r4.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
loc_820BB9F8:
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// bne cr6,0x820bba0c
	if (!ctx.cr6.eq) goto loc_820BBA0C;
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// ld r8,32120(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32120);
	// b 0x820bba10
	goto loc_820BBA10;
loc_820BBA0C:
	// ld r8,32112(r17)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r17.u32 + 32112);
loc_820BBA10:
	// lwz r9,3436(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3436);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x820bba44
	if (!ctx.cr6.gt) goto loc_820BBA44;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_820BBA24:
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r8,r3
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x820bba54
	if (ctx.cr6.eq) goto loc_820BBA54;
	// lwz r7,3436(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3436);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820bba24
	if (ctx.cr6.lt) goto loc_820BBA24;
loc_820BBA44:
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// stw r6,3660(r23)
	PPC_STORE_U32(ctx.r23.u32 + 3660, ctx.r6.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
loc_820BBA54:
	// stw r11,3660(r23)
	PPC_STORE_U32(ctx.r23.u32 + 3660, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BBA60"))) PPC_WEAK_FUNC(sub_820BBA60);
PPC_FUNC_IMPL(__imp__sub_820BBA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820BBA68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// bl 0x822d2810
	ctx.lr = 0x820BBA88;
	sub_822D2810(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// bl 0x822d2810
	ctx.lr = 0x820BBA9C;
	sub_822D2810(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// blt cr6,0x820bbaac
	if (ctx.cr6.lt) goto loc_820BBAAC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_820BBAAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BBAB4"))) PPC_WEAK_FUNC(sub_820BBAB4);
PPC_FUNC_IMPL(__imp__sub_820BBAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BBAB8"))) PPC_WEAK_FUNC(sub_820BBAB8);
PPC_FUNC_IMPL(__imp__sub_820BBAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259badc
	ctx.lr = 0x820BBAC0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r11,3436(r21)
	PPC_STORE_U32(ctx.r21.u32 + 3436, ctx.r11.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820bbb08
	if (!ctx.cr6.eq) goto loc_820BBB08;
	// lis r9,-32090
	ctx.r9.s64 = -2103050240;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r9,r9,26752
	ctx.r9.s64 = ctx.r9.s64 + 26752;
	// ori r7,r8,26457
	ctx.r7.u64 = ctx.r8.u64 | 26457;
	// lbzx r6,r9,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820bbb08
	if (ctx.cr6.eq) goto loc_820BBB08;
	// lwz r24,632(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	// b 0x820bbb14
	goto loc_820BBB14;
loc_820BBB08:
	// lwz r24,628(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bgt cr6,0x820bbc28
	if (ctx.cr6.gt) goto loc_820BBC28;
loc_820BBB14:
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// addi r12,r12,-17620
	ctx.r12.s64 = ctx.r12.s64 + -17620;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_820BBB44;
	case 1:
		goto loc_820BBB44;
	case 2:
		goto loc_820BBC34;
	case 3:
		goto loc_820BBC34;
	case 4:
		goto loc_820BBC34;
	case 5:
		goto loc_820BBB44;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-17596(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17596);
	// lwz r16,-17596(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17596);
	// lwz r16,-17356(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17356);
	// lwz r16,-17356(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17356);
	// lwz r16,-17356(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17356);
	// lwz r16,-17596(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17596);
loc_820BBB44:
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// bne cr6,0x820bbb58
	if (!ctx.cr6.eq) goto loc_820BBB58;
	// li r24,11
	ctx.r24.s64 = 11;
loc_820BBB58:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// ori r3,r4,12468
	ctx.r3.u64 = ctx.r4.u64 | 12468;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwzx r11,r29,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820bbde8
	if (!ctx.cr6.gt) goto loc_820BBDE8;
	// addis r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 196608;
	// addis r10,r29,3
	ctx.r10.s64 = ctx.r29.s64 + 196608;
	// addi r27,r11,12472
	ctx.r27.s64 = ctx.r11.s64 + 12472;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r10,13672
	ctx.r28.s64 = ctx.r10.s64 + 13672;
	// addi r25,r11,-5208
	ctx.r25.s64 = ctx.r11.s64 + -5208;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r26,r11,-1416
	ctx.r26.s64 = ctx.r11.s64 + -1416;
loc_820BBB98:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// ld r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820bbbb4
	if (!ctx.cr6.eq) goto loc_820BBBB4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820BBBB4:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820bbdc8
	if (ctx.cr6.eq) goto loc_820BBDC8;
	// addis r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 196608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// bl 0x822d2810
	ctx.lr = 0x820BBBD0;
	sub_822D2810(ctx, base);
	// cmpwi cr6,r24,11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 11, ctx.xer);
	// beq cr6,0x820bbbe0
	if (ctx.cr6.eq) goto loc_820BBBE0;
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x820bbdc8
	if (!ctx.cr6.eq) goto loc_820BBDC8;
loc_820BBBE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d2930
	ctx.lr = 0x820BBBE8;
	sub_822D2930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820fb1a8
	ctx.lr = 0x820BBBF8;
	sub_820FB1A8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820bbdc8
	if (ctx.cr6.eq) goto loc_820BBDC8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_820BBC08:
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r31,r6
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r6.u64, ctx.xer);
	// beq cr6,0x820bbd74
	if (ctx.cr6.eq) goto loc_820BBD74;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r5,r25,88
	ctx.r5.s64 = ctx.r25.s64 + 88;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820bbc08
	if (ctx.cr6.lt) goto loc_820BBC08;
	// b 0x820bbd84
	goto loc_820BBD84;
loc_820BBC28:
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 3, ctx.xer);
	// bne cr6,0x820bbb58
	if (!ctx.cr6.eq) goto loc_820BBB58;
loc_820BBC34:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r7,r11,-5208
	ctx.r7.s64 = ctx.r11.s64 + -5208;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r6,r7,-720
	ctx.r6.s64 = ctx.r7.s64 + -720;
	// addi r4,r11,28848
	ctx.r4.s64 = ctx.r11.s64 + 28848;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r8,5948(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5948);
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
loc_820BBC58:
	// ld r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_820BBC64:
	// ld r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r31
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r31.u64, ctx.xer);
	// beq cr6,0x820bbc84
	if (ctx.cr6.eq) goto loc_820BBC84;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r31,r7,88
	ctx.r31.s64 = ctx.r7.s64 + 88;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x820bbc64
	if (ctx.cr6.lt) goto loc_820BBC64;
	// b 0x820bbcc4
	goto loc_820BBCC4;
loc_820BBC84:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x820bbcbc
	if (!ctx.cr6.gt) goto loc_820BBCBC;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
loc_820BBC94:
	// lbz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x820bbcac
	if (!ctx.cr6.eq) goto loc_820BBCAC;
	// ld r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r31,r9
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x820bbd6c
	if (ctx.cr6.eq) goto loc_820BBD6C;
loc_820BBCAC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820bbc94
	if (ctx.cr6.lt) goto loc_820BBC94;
loc_820BBCBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820BBCC0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_820BBCC4:
	// lis r11,23970
	ctx.r11.s64 = 1570897920;
	// lis r31,-28735
	ctx.r31.s64 = -1883176960;
	// ori r11,r11,50781
	ctx.r11.u64 = ctx.r11.u64 | 50781;
	// ori r31,r31,60928
	ctx.r31.u64 = ctx.r31.u64 | 60928;
	// rldimi r11,r31,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x820bbce4
	if (!ctx.cr6.eq) goto loc_820BBCE4;
	// lbz r10,1242(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1242);
loc_820BBCE4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bbd0c
	if (ctx.cr6.eq) goto loc_820BBD0C;
	// lwz r8,3436(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 3436);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r9,r11,r21
	PPC_STORE_U64(ctx.r11.u32 + ctx.r21.u32, ctx.r9.u64);
	// lwz r11,3436(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 3436);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,3436(r21)
	PPC_STORE_U32(ctx.r21.u32 + 3436, ctx.r10.u32);
	// lwz r8,5948(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 5948);
loc_820BBD0C:
	// addi r11,r7,-720
	ctx.r11.s64 = ctx.r7.s64 + -720;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// addi r9,r11,720
	ctx.r9.s64 = ctx.r11.s64 + 720;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820bbc58
	if (ctx.cr6.lt) goto loc_820BBC58;
	// lwz r8,3436(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 3436);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x820bbd5c
	if (!ctx.cr6.gt) goto loc_820BBD5C;
	// lis r9,-32134
	ctx.r9.s64 = -2105933824;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// ld r9,32136(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32136);
loc_820BBD3C:
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r9,r7
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x820bbe54
	if (ctx.cr6.eq) goto loc_820BBE54;
	// lwz r6,3436(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 3436);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x820bbd3c
	if (ctx.cr6.lt) goto loc_820BBD3C;
loc_820BBD5C:
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// stw r5,3660(r21)
	PPC_STORE_U32(ctx.r21.u32 + 3660, ctx.r5.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_820BBD6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820bbcc0
	goto loc_820BBCC0;
loc_820BBD74:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820a5d98
	ctx.lr = 0x820BBD80;
	sub_820A5D98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_820BBD84:
	// lis r4,23970
	ctx.r4.s64 = 1570897920;
	// lis r11,-28735
	ctx.r11.s64 = -1883176960;
	// ori r3,r4,50781
	ctx.r3.u64 = ctx.r4.u64 | 50781;
	// ori r10,r11,60928
	ctx.r10.u64 = ctx.r11.u64 | 60928;
	// rldimi r3,r10,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// cmpld cr6,r31,r3
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r3.u64, ctx.xer);
	// bne cr6,0x820bbda4
	if (!ctx.cr6.eq) goto loc_820BBDA4;
	// lbz r30,1242(r26)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1242);
loc_820BBDA4:
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bbdc8
	if (ctx.cr6.eq) goto loc_820BBDC8;
	// lwz r8,3436(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 3436);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r31,r7,r21
	PPC_STORE_U64(ctx.r7.u32 + ctx.r21.u32, ctx.r31.u64);
	// lwz r11,3436(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 3436);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,3436(r21)
	PPC_STORE_U32(ctx.r21.u32 + 3436, ctx.r6.u32);
loc_820BBDC8:
	// lis r5,3
	ctx.r5.s64 = 196608;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// ori r4,r5,12468
	ctx.r4.u64 = ctx.r5.u64 | 12468;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwzx r3,r29,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// cmpw cr6,r23,r3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x820bbb98
	if (ctx.cr6.lt) goto loc_820BBB98;
loc_820BBDE8:
	// cmpwi cr6,r24,11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 11, ctx.xer);
	// bne cr6,0x820bbe08
	if (!ctx.cr6.eq) goto loc_820BBE08;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r4,3436(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 3436);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,-17824
	ctx.r6.s64 = ctx.r11.s64 + -17824;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8259cd88
	ctx.lr = 0x820BBE08;
	sub_8259CD88(ctx, base);
loc_820BBE08:
	// lwz r8,3436(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 3436);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x820bbd5c
	if (!ctx.cr6.gt) goto loc_820BBD5C;
	// lis r9,-32134
	ctx.r9.s64 = -2105933824;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// ld r9,32128(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32128);
loc_820BBE24:
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r9,r7
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x820bbe54
	if (ctx.cr6.eq) goto loc_820BBE54;
	// lwz r6,3436(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 3436);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x820bbe24
	if (ctx.cr6.lt) goto loc_820BBE24;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// stw r5,3660(r21)
	PPC_STORE_U32(ctx.r21.u32 + 3660, ctx.r5.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_820BBE54:
	// stw r11,3660(r21)
	PPC_STORE_U32(ctx.r21.u32 + 3660, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BBE60"))) PPC_WEAK_FUNC(sub_820BBE60);
PPC_FUNC_IMPL(__imp__sub_820BBE60) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,3436(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3436);
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r11,r9,r3
	PPC_STORE_U64(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u64);
	// lwz r11,3436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3436);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,3436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3436, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BBE80"))) PPC_WEAK_FUNC(sub_820BBE80);
PPC_FUNC_IMPL(__imp__sub_820BBE80) {
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
	// lwz r11,3648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3648);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82142f10
	ctx.lr = 0x820BBE98;
	sub_82142F10(ctx, base);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BBEAC"))) PPC_WEAK_FUNC(sub_820BBEAC);
PPC_FUNC_IMPL(__imp__sub_820BBEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BBEB0"))) PPC_WEAK_FUNC(sub_820BBEB0);
PPC_FUNC_IMPL(__imp__sub_820BBEB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3660(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3660);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BBEB8"))) PPC_WEAK_FUNC(sub_820BBEB8);
PPC_FUNC_IMPL(__imp__sub_820BBEB8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,3660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3660, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BBEC0"))) PPC_WEAK_FUNC(sub_820BBEC0);
PPC_FUNC_IMPL(__imp__sub_820BBEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820BBEC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d2930
	ctx.lr = 0x820BBED8;
	sub_822D2930(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x820bbef8
	if (ctx.cr6.eq) goto loc_820BBEF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820BBEF8:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820bbf20
	if (!ctx.cr6.eq) goto loc_820BBF20;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// bl 0x820fca90
	ctx.lr = 0x820BBF14;
	sub_820FCA90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bbf9c
	if (ctx.cr6.eq) goto loc_820BBF9C;
loc_820BBF20:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x820bbf9c
	if (ctx.cr6.gt) goto loc_820BBF9C;
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// addi r12,r12,-16572
	ctx.r12.s64 = ctx.r12.s64 + -16572;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_820BBF54;
	case 1:
		goto loc_820BBF54;
	case 2:
		goto loc_820BBF7C;
	case 3:
		goto loc_820BBF54;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-16556(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16556);
	// lwz r16,-16556(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16556);
	// lwz r16,-16516(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16516);
	// lwz r16,-16556(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16556);
loc_820BBF54:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820bbf6c
	if (ctx.cr6.eq) goto loc_820BBF6C;
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// std r31,32128(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32128, ctx.r31.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820BBF6C:
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// std r31,32112(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32112, ctx.r31.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820BBF7C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820bbf94
	if (ctx.cr6.eq) goto loc_820BBF94;
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// std r31,32136(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32136, ctx.r31.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820BBF94:
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// std r31,32120(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32120, ctx.r31.u64);
loc_820BBF9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BBFA4"))) PPC_WEAK_FUNC(sub_820BBFA4);
PPC_FUNC_IMPL(__imp__sub_820BBFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BBFA8"))) PPC_WEAK_FUNC(sub_820BBFA8);
PPC_FUNC_IMPL(__imp__sub_820BBFA8) {
	PPC_FUNC_PROLOGUE();
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
	// bne cr6,0x820bbfd4
	if (!ctx.cr6.eq) goto loc_820BBFD4;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x820bbfe8
	goto loc_820BBFE8;
loc_820BBFD4:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r6,r7,36968
	ctx.r6.u64 = ctx.r7.u64 | 36968;
	// lwzx r9,r11,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
loc_820BBFE8:
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// lbz r5,3664(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3664);
	// addi r4,r11,-3448
	ctx.r4.s64 = ctx.r11.s64 + -3448;
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// srawi r11,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 5;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820bc00c
	if (!ctx.cr6.eq) goto loc_820BC00C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820BC00C:
	// bge cr6,0x820bc018
	if (!ctx.cr6.lt) goto loc_820BC018;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
loc_820BC018:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC024"))) PPC_WEAK_FUNC(sub_820BC024);
PPC_FUNC_IMPL(__imp__sub_820BC024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC028"))) PPC_WEAK_FUNC(sub_820BC028);
PPC_FUNC_IMPL(__imp__sub_820BC028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x820BC030;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r26,r11,26080
	ctx.r26.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// lwzx r11,r26,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,432(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820BC060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820bc120
	if (!ctx.cr6.eq) goto loc_820BC120;
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r5,6800
	ctx.r5.s64 = 6800;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r3,r31,32752
	ctx.r3.s64 = ctx.r31.s64 + 32752;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// sth r30,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r30.u16);
	// sth r30,58(r31)
	PPC_STORE_U16(ctx.r31.u32 + 58, ctx.r30.u16);
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// bl 0x8259d300
	ctx.lr = 0x820BC0AC;
	sub_8259D300(ctx, base);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r11,-1520
	ctx.r3.s64 = ctx.r11.s64 + -1520;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8259d300
	ctx.lr = 0x820BC0C0;
	sub_8259D300(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,-25980
	ctx.r11.s64 = ctx.r11.s64 + -25980;
	// li r10,32
	ctx.r10.s64 = 32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820BC0D4:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820bc0d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BC0D4;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,-25852
	ctx.r11.s64 = ctx.r11.s64 + -25852;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820BC0F0:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x820bc0f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BC0F0;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lis r5,11
	ctx.r5.s64 = 720896;
	// addi r3,r11,16472
	ctx.r3.s64 = ctx.r11.s64 + 16472;
	// ori r5,r5,47104
	ctx.r5.u64 = ctx.r5.u64 | 47104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8259d300
	ctx.lr = 0x820BC114;
	sub_8259D300(ctx, base);
loc_820BC114:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_820BC120:
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r9,r31,580
	ctx.r9.s64 = ctx.r31.s64 + 580;
	// ori r4,r5,39812
	ctx.r4.u64 = ctx.r5.u64 | 39812;
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwx r30,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u32);
loc_820BC13C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r30,-128(r11)
	PPC_STORE_U8(ctx.r11.u32 + -128, ctx.r30.u8);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stb r30,128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 128, ctx.r30.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r30,256(r11)
	PPC_STORE_U8(ctx.r11.u32 + 256, ctx.r30.u8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne cr6,0x820bc13c
	if (!ctx.cr6.eq) goto loc_820BC13C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-21272
	ctx.r27.s64 = ctx.r11.s64 + -21272;
	// bne cr6,0x820bc190
	if (!ctx.cr6.eq) goto loc_820BC190;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8210cf48
	ctx.lr = 0x820BC18C;
	sub_8210CF48(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_820BC190:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bc4cc
	if (ctx.cr6.eq) goto loc_820BC4CC;
	// li r5,6800
	ctx.r5.s64 = 6800;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,32752
	ctx.r3.s64 = ctx.r31.s64 + 32752;
	// bl 0x8259d300
	ctx.lr = 0x820BC1AC;
	sub_8259D300(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addi r28,r11,28544
	ctx.r28.s64 = ctx.r11.s64 + 28544;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ori r9,r10,32132
	ctx.r9.u64 = ctx.r10.u64 | 32132;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// lwzx r29,r28,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// bgt cr6,0x820bc4cc
	if (ctx.cr6.gt) goto loc_820BC4CC;
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// addi r12,r12,-15896
	ctx.r12.s64 = ctx.r12.s64 + -15896;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_820BC37C;
	case 1:
		goto loc_820BC3A0;
	case 2:
		goto loc_820BC3FC;
	case 3:
		goto loc_820BC4D8;
	case 4:
		goto loc_820BC4F8;
	case 5:
		goto loc_820BC50C;
	case 6:
		goto loc_820BC4CC;
	case 7:
		goto loc_820BC4CC;
	case 8:
		goto loc_820BC4CC;
	case 9:
		goto loc_820BC4CC;
	case 10:
		goto loc_820BC4CC;
	case 11:
		goto loc_820BC4CC;
	case 12:
		goto loc_820BC4CC;
	case 13:
		goto loc_820BC4CC;
	case 14:
		goto loc_820BC4CC;
	case 15:
		goto loc_820BC4CC;
	case 16:
		goto loc_820BC4CC;
	case 17:
		goto loc_820BC4CC;
	case 18:
		goto loc_820BC4CC;
	case 19:
		goto loc_820BC4CC;
	case 20:
		goto loc_820BC4CC;
	case 21:
		goto loc_820BC4CC;
	case 22:
		goto loc_820BC4CC;
	case 23:
		goto loc_820BC4CC;
	case 24:
		goto loc_820BC4CC;
	case 25:
		goto loc_820BC4CC;
	case 26:
		goto loc_820BC4CC;
	case 27:
		goto loc_820BC2C8;
	case 28:
		goto loc_820BC4CC;
	case 29:
		goto loc_820BC4CC;
	case 30:
		goto loc_820BC4CC;
	case 31:
		goto loc_820BC4CC;
	case 32:
		goto loc_820BC4CC;
	case 33:
		goto loc_820BC4CC;
	case 34:
		goto loc_820BC4CC;
	case 35:
		goto loc_820BC4CC;
	case 36:
		goto loc_820BC4CC;
	case 37:
		goto loc_820BC4CC;
	case 38:
		goto loc_820BC4CC;
	case 39:
		goto loc_820BC4CC;
	case 40:
		goto loc_820BC4CC;
	case 41:
		goto loc_820BC4CC;
	case 42:
		goto loc_820BC4CC;
	case 43:
		goto loc_820BC4CC;
	case 44:
		goto loc_820BC4CC;
	case 45:
		goto loc_820BC4CC;
	case 46:
		goto loc_820BC4CC;
	case 47:
		goto loc_820BC4CC;
	case 48:
		goto loc_820BC4CC;
	case 49:
		goto loc_820BC4CC;
	case 50:
		goto loc_820BC4CC;
	case 51:
		goto loc_820BC4CC;
	case 52:
		goto loc_820BC4CC;
	case 53:
		goto loc_820BC4CC;
	case 54:
		goto loc_820BC4CC;
	case 55:
		goto loc_820BC37C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-15492(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15492);
	// lwz r16,-15456(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15456);
	// lwz r16,-15364(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15364);
	// lwz r16,-15144(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15144);
	// lwz r16,-15112(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15112);
	// lwz r16,-15092(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15092);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15672(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15672);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15156(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15156);
	// lwz r16,-15492(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15492);
loc_820BC2C8:
	// lhz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820bc348
	if (ctx.cr6.eq) goto loc_820BC348;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_820BC2E0:
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820BC2FC:
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x820bc2fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BC2FC;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r30,67(r4)
	PPC_STORE_U8(ctx.r4.u32 + 67, ctx.r30.u8);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82347cb0
	ctx.lr = 0x820BC330;
	sub_82347CB0(ctx, base);
	// lhz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r28,r28,80
	ctx.r28.s64 = ctx.r28.s64 + 80;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820bc2e0
	if (ctx.cr6.lt) goto loc_820BC2E0;
loc_820BC348:
	// addi r29,r31,752
	ctx.r29.s64 = ctx.r31.s64 + 752;
	// li r30,500
	ctx.r30.s64 = 500;
loc_820BC350:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82347cb0
	ctx.lr = 0x820BC358;
	sub_82347CB0(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820bc350
	if (!ctx.cr6.eq) goto loc_820BC350;
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x82347cd0
	ctx.lr = 0x820BC370;
	sub_82347CD0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_820BC37C:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bgt cr6,0x820bc114
	if (ctx.cr6.gt) goto loc_820BC114;
	// lbz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x820bc114
	if (ctx.cr6.eq) goto loc_820BC114;
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
loc_820BC3A0:
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x820BC3AC;
	sub_8210D3F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8234b6c0
	ctx.lr = 0x820BC3BC;
	sub_8234B6C0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823477a8
	ctx.lr = 0x820BC3C8;
	sub_823477A8(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x820BC3D4;
	sub_8210D3F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823477b0
	ctx.lr = 0x820BC3E0;
	sub_823477B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// beq cr6,0x820bc4cc
	if (ctx.cr6.eq) goto loc_820BC4CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234dcb0
	ctx.lr = 0x820BC3F4;
	sub_8234DCB0(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
loc_820BC3FC:
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// addis r11,r26,3
	ctx.r11.s64 = ctx.r26.s64 + 196608;
	// ori r5,r6,36952
	ctx.r5.u64 = ctx.r6.u64 | 36952;
	// ldx r4,r28,r5
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + ctx.r5.u32);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// bne cr6,0x820bc43c
	if (!ctx.cr6.eq) goto loc_820BC43C;
	// lis r3,-15171
	ctx.r3.s64 = -994246656;
	// lis r4,-28451
	ctx.r4.s64 = -1864564736;
	// ori r10,r3,47296
	ctx.r10.u64 = ctx.r3.u64 | 47296;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// bl 0x822d29d0
	ctx.lr = 0x820BC438;
	sub_822D29D0(ctx, base);
	// b 0x820bc45c
	goto loc_820BC45C;
loc_820BC43C:
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// bl 0x822d2ba0
	ctx.lr = 0x820BC444;
	sub_822D2BA0(ctx, base);
	// addis r11,r26,3
	ctx.r11.s64 = ctx.r26.s64 + 196608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// bl 0x822d2af0
	ctx.lr = 0x820BC45C;
	sub_822D2AF0(ctx, base);
loc_820BC45C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,3072
	ctx.r9.s64 = ctx.r11.s64 + 3072;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_820BC468:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820bc468
	if (!ctx.cr6.eq) goto loc_820BC468;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_820BC47C:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x820bc47c
	if (!ctx.cr6.eq) goto loc_820BC47C;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x820BC4A0;
	sub_8210D3F0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r31,36
	ctx.r5.s64 = ctx.r31.s64 + 36;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,2736
	ctx.r3.s64 = ctx.r26.s64 + 2736;
	// bl 0x8210e1f0
	ctx.lr = 0x820BC4BC;
	sub_8210E1F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
loc_820BC4CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_820BC4D8:
	// lbz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820bc4cc
	if (ctx.cr6.eq) goto loc_820BC4CC;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_820BC4F8:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x822d7250
	ctx.lr = 0x820BC504;
	sub_822D7250(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
loc_820BC50C:
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x82347cd0
	ctx.lr = 0x820BC514;
	sub_82347CD0(ctx, base);
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// ori r8,r9,39552
	ctx.r8.u64 = ctx.r9.u64 | 39552;
	// li r6,28
	ctx.r6.s64 = 28;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r10,15
	ctx.r5.s64 = ctx.r10.s64 + 15;
	// rlwinm r4,r5,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// lhz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// lhz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// sth r5,58(r31)
	PPC_STORE_U16(ctx.r31.u32 + 58, ctx.r5.u16);
	// lhz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// sth r30,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r30.u16);
	// stb r7,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r7.u8);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// sthx r11,r31,r8
	PPC_STORE_U16(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u16);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC574"))) PPC_WEAK_FUNC(sub_820BC574);
PPC_FUNC_IMPL(__imp__sub_820BC574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC578"))) PPC_WEAK_FUNC(sub_820BC578);
PPC_FUNC_IMPL(__imp__sub_820BC578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820BC580;
	__savegprlr_29(ctx, base);
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
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
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
	ctx.lr = 0x820BC5B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820bc5fc
	if (ctx.cr6.eq) goto loc_820BC5FC;
	// addi r31,r29,612
	ctx.r31.s64 = ctx.r29.s64 + 612;
	// li r30,3
	ctx.r30.s64 = 3;
loc_820BC5C4:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820bc5e4
	if (ctx.cr6.eq) goto loc_820BC5E4;
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BC5E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BC5E4:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x820bc5c4
	if (!ctx.cr6.eq) goto loc_820BC5C4;
	// addi r3,r29,640
	ctx.r3.s64 = ctx.r29.s64 + 640;
	// bl 0x8234ddd0
	ctx.lr = 0x820BC5FC;
	sub_8234DDD0(ctx, base);
loc_820BC5FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC604"))) PPC_WEAK_FUNC(sub_820BC604);
PPC_FUNC_IMPL(__imp__sub_820BC604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC608"))) PPC_WEAK_FUNC(sub_820BC608);
PPC_FUNC_IMPL(__imp__sub_820BC608) {
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
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820bc644
	if (ctx.cr6.eq) goto loc_820BC644;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,2736
	ctx.r3.s64 = ctx.r11.s64 + 2736;
	// bl 0x821019e8
	ctx.lr = 0x820BC640;
	sub_821019E8(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_820BC644:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8210d230
	ctx.lr = 0x820BC65C;
	sub_8210D230(ctx, base);
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// sth r30,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r30.u16);
	// sth r30,58(r31)
	PPC_STORE_U16(ctx.r31.u32 + 58, ctx.r30.u16);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_820BC690"))) PPC_WEAK_FUNC(sub_820BC690);
PPC_FUNC_IMPL(__imp__sub_820BC690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r9,-32149
	ctx.r9.s64 = -2106916864;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// addi r7,r9,16472
	ctx.r7.s64 = ctx.r9.s64 + 16472;
	// addi r10,r10,-1520
	ctx.r10.s64 = ctx.r10.s64 + -1520;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r9,66(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 66);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mulli r6,r9,1500
	ctx.r6.s64 = ctx.r9.s64 * 1500;
	// lhzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r5,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r5.u16);
	// stwx r11,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC6D0"))) PPC_WEAK_FUNC(sub_820BC6D0);
PPC_FUNC_IMPL(__imp__sub_820BC6D0) {
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
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r10,28544
	ctx.r30.s64 = ctx.r10.s64 + 28544;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// ori r9,r10,32132
	ctx.r9.u64 = ctx.r10.u64 | 32132;
	// lbz r11,66(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 66);
	// lwzx r10,r30,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// addi r7,r11,153
	ctx.r7.s64 = ctx.r11.s64 + 153;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820bc74c
	if (ctx.cr6.eq) goto loc_820BC74C;
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820BC740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bc778
	if (ctx.cr6.eq) goto loc_820BC778;
loc_820BC74C:
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x82277518
	ctx.lr = 0x820BC75C;
	sub_82277518(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bc778
	if (ctx.cr6.eq) goto loc_820BC778;
	// addis r11,r30,33
	ctx.r11.s64 = ctx.r30.s64 + 2162688;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,17584
	ctx.r3.s64 = ctx.r11.s64 + 17584;
	// bl 0x8234b730
	ctx.lr = 0x820BC778;
	sub_8234B730(ctx, base);
loc_820BC778:
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

__attribute__((alias("__imp__sub_820BC790"))) PPC_WEAK_FUNC(sub_820BC790);
PPC_FUNC_IMPL(__imp__sub_820BC790) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-25724
	ctx.r11.s64 = ctx.r11.s64 + -25724;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// blt cr6,0x820bc7b0
	if (ctx.cr6.lt) goto loc_820BC7B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820BC7B0:
	// addi r9,r9,9889
	ctx.r9.s64 = ctx.r9.s64 + 9889;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r9,9921
	ctx.r7.s64 = ctx.r9.s64 + 9921;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC7E0"))) PPC_WEAK_FUNC(sub_820BC7E0);
PPC_FUNC_IMPL(__imp__sub_820BC7E0) {
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
	// addi r30,r3,612
	ctx.r30.s64 = ctx.r3.s64 + 612;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addi r9,r3,624
	ctx.r9.s64 = ctx.r3.s64 + 624;
	// addis r10,r11,34
	ctx.r10.s64 = ctx.r11.s64 + 2228224;
	// addis r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 2228224;
	// addi r8,r10,-8768
	ctx.r8.s64 = ctx.r10.s64 + -8768;
	// addi r7,r11,5472
	ctx.r7.s64 = ctx.r11.s64 + 5472;
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 616, ctx.r8.u32);
	// stw r7,620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 620, ctx.r7.u32);
loc_820BC824:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820BC838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820bc824
	if (!ctx.cr6.eq) goto loc_820BC824;
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

__attribute__((alias("__imp__sub_820BC860"))) PPC_WEAK_FUNC(sub_820BC860);
PPC_FUNC_IMPL(__imp__sub_820BC860) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC874"))) PPC_WEAK_FUNC(sub_820BC874);
PPC_FUNC_IMPL(__imp__sub_820BC874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC878"))) PPC_WEAK_FUNC(sub_820BC878);
PPC_FUNC_IMPL(__imp__sub_820BC878) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,400
	ctx.r10.s64 = ctx.r3.s64 + 400;
	// addi r9,r3,8080
	ctx.r9.s64 = ctx.r3.s64 + 8080;
	// li r8,96
	ctx.r8.s64 = 96;
	// sth r11,14224(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14224, ctx.r11.u16);
	// sth r11,14226(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14226, ctx.r11.u16);
	// sth r11,14230(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14230, ctx.r11.u16);
	// sth r11,14232(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14232, ctx.r11.u16);
	// sth r11,14228(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14228, ctx.r11.u16);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC8AC"))) PPC_WEAK_FUNC(sub_820BC8AC);
PPC_FUNC_IMPL(__imp__sub_820BC8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC8B0"))) PPC_WEAK_FUNC(sub_820BC8B0);
PPC_FUNC_IMPL(__imp__sub_820BC8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x820BC8B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x820BC8E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820bc948
	if (!ctx.cr6.eq) goto loc_820BC948;
	// li r5,7680
	ctx.r5.s64 = 7680;
	// sth r30,14224(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14224, ctx.r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,14226(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14226, ctx.r30.u16);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// sth r30,14230(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14230, ctx.r30.u16);
	// sth r30,14232(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14232, ctx.r30.u16);
	// sth r30,14228(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14228, ctx.r30.u16);
	// bl 0x8259d300
	ctx.lr = 0x820BC91C;
	sub_8259D300(ctx, base);
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8259d300
	ctx.lr = 0x820BC92C;
	sub_8259D300(ctx, base);
	// li r5,6144
	ctx.r5.s64 = 6144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8080
	ctx.r3.s64 = ctx.r31.s64 + 8080;
	// bl 0x8259d300
	ctx.lr = 0x820BC93C;
	sub_8259D300(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_820BC948:
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// addi r28,r31,400
	ctx.r28.s64 = ctx.r31.s64 + 400;
	// li r29,96
	ctx.r29.s64 = 96;
loc_820BC954:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82347cb0
	ctx.lr = 0x820BC95C;
	sub_82347CB0(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// addi r28,r28,80
	ctx.r28.s64 = ctx.r28.s64 + 80;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820bc954
	if (!ctx.cr6.eq) goto loc_820BC954;
	// lis r5,34
	ctx.r5.s64 = 2228224;
	// sth r30,14224(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14224, ctx.r30.u16);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// sth r30,14226(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14226, ctx.r30.u16);
	// ori r4,r5,32132
	ctx.r4.u64 = ctx.r5.u64 | 32132;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r7,r8,32132
	ctx.r7.u64 = ctx.r8.u64 | 32132;
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// sth r10,14230(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14230, ctx.r10.u16);
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r6,72(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addis r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 65536;
	// ori r9,r10,32132
	ctx.r9.u64 = ctx.r10.u64 | 32132;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// sth r5,14232(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14232, ctx.r5.u16);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// sth r8,14228(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14228, ctx.r8.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BC9D4"))) PPC_WEAK_FUNC(sub_820BC9D4);
PPC_FUNC_IMPL(__imp__sub_820BC9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BC9D8"))) PPC_WEAK_FUNC(sub_820BC9D8);
PPC_FUNC_IMPL(__imp__sub_820BC9D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,14224(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14224, ctx.r11.u16);
	// sth r11,14226(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14226, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BC9E8"))) PPC_WEAK_FUNC(sub_820BC9E8);
PPC_FUNC_IMPL(__imp__sub_820BC9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x820BC9F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lbz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// lhz r11,14228(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14228);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x820bca20
	if (!ctx.cr6.lt) goto loc_820BCA20;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820BCA20:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820bccac
	if (ctx.cr6.eq) goto loc_820BCCAC;
	// lhz r8,14226(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14226);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r9,14224(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14224);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r9,96
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 96, ctx.xer);
	// bge cr6,0x820bca84
	if (!ctx.cr6.lt) goto loc_820BCA84;
loc_820BCA48:
	// cmpwi cr6,r30,96
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 96, ctx.xer);
	// blt cr6,0x820bca54
	if (ctx.cr6.lt) goto loc_820BCA54;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820BCA54:
	// addi r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 4;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820bca7c
	if (ctx.cr6.eq) goto loc_820BCA7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r11,96
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 96, ctx.xer);
	// blt cr6,0x820bca48
	if (ctx.cr6.lt) goto loc_820BCA48;
	// b 0x820bca88
	goto loc_820BCA88;
loc_820BCA7C:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x820bca88
	goto loc_820BCA88;
loc_820BCA84:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820BCA88:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r26,r11,28544
	ctx.r26.s64 = ctx.r11.s64 + 28544;
	// beq cr6,0x820bcaa8
	if (ctx.cr6.eq) goto loc_820BCAA8;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// sth r3,14224(r29)
	PPC_STORE_U16(ctx.r29.u32 + 14224, ctx.r3.u16);
	// b 0x820bcb08
	goto loc_820BCB08;
loc_820BCAA8:
	// lis r10,33
	ctx.r10.s64 = 2162688;
	// ori r9,r10,4440
	ctx.r9.u64 = ctx.r10.u64 | 4440;
	// lbzx r7,r26,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820bcac8
	if (ctx.cr6.eq) goto loc_820BCAC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_820BCAC8:
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmpwi cr6,r30,96
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 96, ctx.xer);
	// blt cr6,0x820bcad8
	if (ctx.cr6.lt) goto loc_820BCAD8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820BCAD8:
	// addis r10,r26,33
	ctx.r10.s64 = ctx.r26.s64 + 2162688;
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// addi r3,r10,16944
	ctx.r3.s64 = ctx.r10.s64 + 16944;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x820bc6d0
	ctx.lr = 0x820BCAF8;
	sub_820BC6D0(ctx, base);
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r4,r29
	PPC_STORE_U32(ctx.r4.u32 + ctx.r29.u32, ctx.r3.u32);
loc_820BCB08:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r25,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r25.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r30,464(r11)
	PPC_STORE_U16(ctx.r11.u32 + 464, ctx.r30.u16);
	// lbz r7,12(r25)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// stb r6,467(r11)
	PPC_STORE_U8(ctx.r11.u32 + 467, ctx.r6.u8);
	// stb r7,466(r11)
	PPC_STORE_U8(ctx.r11.u32 + 466, ctx.r7.u8);
	// lhz r9,14230(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14230);
	// lbz r5,12(r25)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x820bcb5c
	if (ctx.cr6.lt) goto loc_820BCB5C;
	// lhz r3,14232(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14232);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x820bcb60
	if (!ctx.cr6.gt) goto loc_820BCB60;
loc_820BCB5C:
	// stb r9,466(r11)
	PPC_STORE_U8(ctx.r11.u32 + 466, ctx.r9.u8);
loc_820BCB60:
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r8,r30,127
	ctx.r8.s64 = ctx.r30.s64 + 127;
	// addi r28,r11,8080
	ctx.r28.s64 = ctx.r11.s64 + 8080;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// lfs f0,25556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r30,5
	ctx.r9.s64 = ctx.r30.s64 + 5;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// stfs f12,4(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// ori r3,r4,32132
	ctx.r3.u64 = ctx.r4.u64 | 32132;
	// stfs f11,8(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8096(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8096, temp.u32);
	// add r27,r9,r29
	ctx.r27.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8100(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8100, temp.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stfs f8,8104(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8104, temp.u32);
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,8112(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8112, temp.u32);
	// lfs f6,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8116(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8116, temp.u32);
	// lfs f5,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,8120(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8120, temp.u32);
	// lfs f4,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f3,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f2,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,8(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,8092(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8092, temp.u32);
	// stfs f0,8108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8108, temp.u32);
	// stfs f0,8124(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8124, temp.u32);
	// stfs f0,8140(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8140, temp.u32);
	// lbz r6,12(r25)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// lwzx r10,r26,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r3.u32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// addis r11,r26,33
	ctx.r11.s64 = ctx.r26.s64 + 2162688;
	// addi r3,r11,17584
	ctx.r3.s64 = ctx.r11.s64 + 17584;
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f12,f9,f8
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmadds f7,f13,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsqrts f13,f6
	ctx.f13.f64 = double(float(sqrt(ctx.f6.f64)));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8234dd70
	ctx.lr = 0x820BCC7C;
	sub_8234DD70(ctx, base);
	// addis r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 262144;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x82276280
	ctx.lr = 0x820BCC90;
	sub_82276280(ctx, base);
	// addis r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 262144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x82280e98
	ctx.lr = 0x820BCCA4;
	sub_82280E98(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// sth r10,14226(r29)
	PPC_STORE_U16(ctx.r29.u32 + 14226, ctx.r10.u16);
loc_820BCCAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BCCB8"))) PPC_WEAK_FUNC(sub_820BCCB8);
PPC_FUNC_IMPL(__imp__sub_820BCCB8) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// lhz r6,14224(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14224);
	// addis r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// sth r5,14224(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14224, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BCCE8"))) PPC_WEAK_FUNC(sub_820BCCE8);
PPC_FUNC_IMPL(__imp__sub_820BCCE8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r3,7696
	ctx.r10.s64 = ctx.r3.s64 + 7696;
	// li r9,96
	ctx.r9.s64 = 96;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BCD04"))) PPC_WEAK_FUNC(sub_820BCD04);
PPC_FUNC_IMPL(__imp__sub_820BCD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BCD08"))) PPC_WEAK_FUNC(sub_820BCD08);
PPC_FUNC_IMPL(__imp__sub_820BCD08) {
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
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x820bcdac
	if (ctx.cr6.lt) goto loc_820BCDAC;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// clrldi r8,r4,58
	ctx.r8.u64 = ctx.r4.u64 & 0x3F;
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// li r3,1
	ctx.r3.s64 = 1;
	// addis r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 + 655360;
	// srawi r9,r4,6
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 6;
	// addi r11,r11,-14752
	ctx.r11.s64 = ctx.r11.s64 + -14752;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r11.u32);
	// sld r11,r3,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r3.u64 << (ctx.r8.u8 & 0x7F));
	// and r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 & ctx.r5.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x820bcd6c
	if (!ctx.cr6.eq) goto loc_820BCD6C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820BCD6C:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820bcdac
	if (ctx.cr6.eq) goto loc_820BCDAC;
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8223d050
	ctx.lr = 0x820BCD84;
	sub_8223D050(ctx, base);
	// bl 0x820a5ea8
	ctx.lr = 0x820BCD88;
	sub_820A5EA8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820bcdac
	if (ctx.cr6.eq) goto loc_820BCDAC;
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8223d050
	ctx.lr = 0x820BCDA4;
	sub_8223D050(ctx, base);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x820bcdb8
	goto loc_820BCDB8;
loc_820BCDAC:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
loc_820BCDB8:
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

__attribute__((alias("__imp__sub_820BCDD0"))) PPC_WEAK_FUNC(sub_820BCDD0);
PPC_FUNC_IMPL(__imp__sub_820BCDD0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,15472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 15472);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820bcef4
	if (!ctx.cr6.gt) goto loc_820BCEF4;
	// lwz r11,15328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820bcef4
	if (!ctx.cr6.eq) goto loc_820BCEF4;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r30,19168(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19168);
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x8210b3c8
	ctx.lr = 0x820BCE1C;
	sub_8210B3C8(ctx, base);
	// lfs f13,15472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 15472);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f0,15472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 15472, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820bcef4
	if (ctx.cr6.gt) goto loc_820BCEF4;
	// bso cr6,0x820bcef4
	if (ctx.cr6.so) goto loc_820BCEF4;
	// lbz r10,14613(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14613);
	// stfs f31,15472(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 15472, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bce84
	if (ctx.cr6.eq) goto loc_820BCE84;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mulli r11,r30,1104
	ctx.r11.s64 = ctx.r30.s64 * 1104;
	// addi r4,r10,4864
	ctx.r4.s64 = ctx.r10.s64 + 4864;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r4,540
	ctx.r31.s64 = ctx.r4.s64 + 540;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8219c750
	ctx.lr = 0x820BCE80;
	sub_8219C750(ctx, base);
	// b 0x820bcef4
	goto loc_820BCEF4;
loc_820BCE84:
	// lbz r7,14426(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14426);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820bcef4
	if (ctx.cr6.eq) goto loc_820BCEF4;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mulli r11,r30,1104
	ctx.r11.s64 = ctx.r30.s64 * 1104;
	// addi r3,r10,4864
	ctx.r3.s64 = ctx.r10.s64 + 4864;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r6,r3,240
	ctx.r6.s64 = ctx.r3.s64 + 240;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x820bcee0
	if (ctx.cr6.eq) goto loc_820BCEE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r4,123
	ctx.r4.s64 = 123;
	// bl 0x8219c750
	ctx.lr = 0x820BCEDC;
	sub_8219C750(ctx, base);
	// b 0x820bcef4
	goto loc_820BCEF4;
loc_820BCEE0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,122
	ctx.r4.s64 = 122;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8219c750
	ctx.lr = 0x820BCEF4;
	sub_8219C750(ctx, base);
loc_820BCEF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_820BCF10"))) PPC_WEAK_FUNC(sub_820BCF10);
PPC_FUNC_IMPL(__imp__sub_820BCF10) {
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
	// lbz r11,14360(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bcfe8
	if (ctx.cr6.eq) goto loc_820BCFE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,14340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// addi r30,r11,9192
	ctx.r30.s64 = ctx.r11.s64 + 9192;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x820bcf74
	if (ctx.cr6.lt) goto loc_820BCF74;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lwz r10,13696(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13696);
	// lfs f13,13500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820bcf74
	if (ctx.cr6.gt) goto loc_820BCF74;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820BCF74:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bcfe8
	if (ctx.cr6.eq) goto loc_820BCFE8;
	// lfs f11,13500(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 13500);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,14340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14340);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f31,f0,f9
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f0,-10920(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10920);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8259c328
	ctx.lr = 0x820BCFB4;
	sub_8259C328(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lfs f0,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f31,f7,f31
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c328
	ctx.lr = 0x820BCFCC;
	sub_8259C328(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f6,f0
	ctx.f6.f64 = double(float(ctx.f0.f64));
	// stfs f6,156(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// bl 0x8259c400
	ctx.lr = 0x820BCFE0;
	sub_8259C400(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,160(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
loc_820BCFE8:
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

__attribute__((alias("__imp__sub_820BD004"))) PPC_WEAK_FUNC(sub_820BD004);
PPC_FUNC_IMPL(__imp__sub_820BD004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD008"))) PPC_WEAK_FUNC(sub_820BD008);
PPC_FUNC_IMPL(__imp__sub_820BD008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f11,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lfs f6,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f5.f64 = double(temp.f32);
	// lwz r10,3204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3204);
	// lfs f13,108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f0,144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsubs f11,f5,f10
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// lfs f10,104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfd f9,-4840(r10)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4840);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmadds f3,f12,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfd f8,-1600(r10)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r10.u32 + -1600);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f11,f11,f3
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fnmsubs f1,f10,f10,f13
	ctx.f1.f64 = double(float(-(ctx.f10.f64 * ctx.f10.f64 - ctx.f13.f64)));
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 / ctx.f1.f64));
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsel f13,f12,f9,f13
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f9.f64 : ctx.f13.f64;
	// fsel f11,f13,f13,f8
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f8.f64;
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r10,3204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3204);
	// lfs f13,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x820bd0b4
	if (!ctx.cr6.gt) goto loc_820BD0B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820BD0B4:
	// lfs f13,108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x820bd0d0
	if (!ctx.cr6.gt) goto loc_820BD0D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820BD0D0:
	// lfs f13,104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BD0F0"))) PPC_WEAK_FUNC(sub_820BD0F0);
PPC_FUNC_IMPL(__imp__sub_820BD0F0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BD108"))) PPC_WEAK_FUNC(sub_820BD108);
PPC_FUNC_IMPL(__imp__sub_820BD108) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,15200(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 15200);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BD110"))) PPC_WEAK_FUNC(sub_820BD110);
PPC_FUNC_IMPL(__imp__sub_820BD110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stb r10,15459(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15459, ctx.r10.u8);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stb r9,15219(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15219, ctx.r9.u8);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,152(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f13,160(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BD144"))) PPC_WEAK_FUNC(sub_820BD144);
PPC_FUNC_IMPL(__imp__sub_820BD144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD148"))) PPC_WEAK_FUNC(sub_820BD148);
PPC_FUNC_IMPL(__imp__sub_820BD148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x820BD150;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r10,r11,36968
	ctx.r10.u64 = ctx.r11.u64 | 36968;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820bd1f8
	if (!ctx.cr6.gt) goto loc_820BD1F8;
loc_820BD180:
	// lbz r9,15480(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 15480);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x820bd1ec
	if (ctx.cr6.eq) goto loc_820BD1EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232da90
	ctx.lr = 0x820BD19C;
	sub_8232DA90(ctx, base);
	// addi r11,r3,15124
	ctx.r11.s64 = ctx.r3.s64 + 15124;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r6,41(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// rotlwi r10,r6,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x820bd1d0
	if (!ctx.cr6.eq) goto loc_820BD1D0;
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x820bd1d4
	if (ctx.cr6.eq) goto loc_820BD1D4;
loc_820BD1D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820BD1D4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820bd204
	if (!ctx.cr6.eq) goto loc_820BD204;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// ori r8,r9,36968
	ctx.r8.u64 = ctx.r9.u64 | 36968;
	// lwzx r11,r30,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
loc_820BD1EC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820bd180
	if (ctx.cr6.lt) goto loc_820BD180;
loc_820BD1F8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_820BD204:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD210"))) PPC_WEAK_FUNC(sub_820BD210);
PPC_FUNC_IMPL(__imp__sub_820BD210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259badc
	ctx.lr = 0x820BD218;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8259bb90
	ctx.lr = 0x820BD220;
	__savefpr_22(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// bl 0x820a8850
	ctx.lr = 0x820BD24C;
	sub_820A8850(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r10,r7,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lhzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// addi r30,r10,28544
	ctx.r30.s64 = ctx.r10.s64 + 28544;
	// ori r7,r8,36852
	ctx.r7.u64 = ctx.r8.u64 | 36852;
	// rotlwi r9,r9,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// lwzx r10,r30,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// bl 0x820a8850
	ctx.lr = 0x820BD2A4;
	sub_820A8850(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rotlwi r10,r6,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// ori r7,r8,36852
	ctx.r7.u64 = ctx.r8.u64 | 36852;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lwzx r10,r30,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// rotlwi r9,r9,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// bl 0x820aab50
	ctx.lr = 0x820BD2F4;
	sub_820AAB50(ctx, base);
	// lfs f11,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f7,f11,f11
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f6,f11
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fsubs f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fmadds f4,f0,f0,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f3,f13,f13,f7
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f0,f12,f12,f4
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f13,f11,f11,f3
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820bd3b0
	if (!ctx.cr6.lt) goto loc_820BD3B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f26,f0
	ctx.f26.f64 = ctx.f0.f64;
	// bl 0x820a8850
	ctx.lr = 0x820BD368;
	sub_820A8850(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// rotlwi r10,r3,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// ori r5,r6,36852
	ctx.r5.u64 = ctx.r6.u64 | 36852;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lhzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r10,r30,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// rotlwi r9,r7,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// b 0x820bd404
	goto loc_820BD404;
loc_820BD3B0:
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f26,f13
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f13.f64;
	// bl 0x820a8850
	ctx.lr = 0x820BD3BC;
	sub_820A8850(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// rotlwi r10,r8,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// ori r3,r4,36852
	ctx.r3.u64 = ctx.r4.u64 | 36852;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r10,r30,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// lhz r5,2(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// rotlwi r9,r5,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
loc_820BD404:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a8720
	ctx.lr = 0x820BD418;
	sub_820A8720(ctx, base);
	// lbz r7,86(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ld r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f30,-456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -456);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x820bd604
	if (ctx.cr6.eq) goto loc_820BD604;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f29,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f29.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f28,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f28.f64 = double(temp.f32);
	// addi r26,r11,-10520
	ctx.r26.s64 = ctx.r11.s64 + -10520;
	// lfs f27,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lfs f22,2864(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f22.f64 = double(temp.f32);
	// addi r24,r11,26080
	ctx.r24.s64 = ctx.r11.s64 + 26080;
	// lfs f25,-68(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -68);
	ctx.f25.f64 = double(temp.f32);
	// lfs f23,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// lfs f24,-27244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27244);
	ctx.f24.f64 = double(temp.f32);
loc_820BD46C:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820bd4a4
	if (!ctx.cr6.eq) goto loc_820BD4A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820BD4A4:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820bd5e0
	if (ctx.cr6.eq) goto loc_820BD5E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820bd148
	ctx.lr = 0x820BD4BC;
	sub_820BD148(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820bd5e0
	if (ctx.cr6.eq) goto loc_820BD5E0;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r3,3(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// clrlwi r10,r3,29
	ctx.r10.u64 = ctx.r3.u32 & 0x7;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x820bd4f0
	if (ctx.cr6.eq) goto loc_820BD4F0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820bd4f4
	if (!ctx.cr6.eq) goto loc_820BD4F4;
loc_820BD4F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820BD4F4:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820bd524
	if (ctx.cr6.eq) goto loc_820BD524;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// ori r7,r8,16273
	ctx.r7.u64 = ctx.r8.u64 | 16273;
	// lbzx r6,r24,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820bd51c
	if (ctx.cr6.eq) goto loc_820BD51C;
	// fmr f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f25.f64;
	// b 0x820bd580
	goto loc_820BD580;
loc_820BD51C:
	// fmr f31,f23
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f23.f64;
	// b 0x820bd580
	goto loc_820BD580;
loc_820BD524:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x820bd538
	if (ctx.cr6.eq) goto loc_820BD538;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820bd53c
	if (!ctx.cr6.eq) goto loc_820BD53C;
loc_820BD538:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820BD53C:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820bd550
	if (ctx.cr6.eq) goto loc_820BD550;
	// fmr f31,f24
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f24.f64;
	// b 0x820bd580
	goto loc_820BD580;
loc_820BD550:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x820bd564
	if (ctx.cr6.eq) goto loc_820BD564;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820bd568
	if (!ctx.cr6.eq) goto loc_820BD568;
loc_820BD564:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820BD568:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bd57c
	if (ctx.cr6.eq) goto loc_820BD57C;
	// fmr f31,f24
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f24.f64;
	// b 0x820bd580
	goto loc_820BD580;
loc_820BD57C:
	// fmr f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f22.f64;
loc_820BD580:
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x820bd58c
	if (!ctx.cr6.eq) goto loc_820BD58C;
	// fadds f31,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f25.f64));
loc_820BD58C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820aab50
	ctx.lr = 0x820BD598;
	sub_820AAB50(ctx, base);
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f1,f28
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f28.f64));
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f2,f29
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f29.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,5432(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 5432);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f13,f10,f27
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// fmadds f9,f0,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f8,f13,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fsubs f7,f8,f26
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f26.f64));
	// fabs f0,f7
	ctx.f0.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fnmsubs f0,f0,f12,f31
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f12.f64 - ctx.f31.f64)));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x820bd5e0
	if (!ctx.cr6.gt) goto loc_820BD5E0;
	// ld r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// li r25,1
	ctx.r25.s64 = 1;
loc_820BD5E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a8720
	ctx.lr = 0x820BD5F4;
	sub_820A8720(ctx, base);
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820bd46c
	if (!ctx.cr6.eq) goto loc_820BD46C;
loc_820BD604:
	// clrlwi r8,r25,24
	ctx.r8.u64 = ctx.r25.u32 & 0xFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820bd628
	if (ctx.cr6.eq) goto loc_820BD628;
	// std r23,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r23.u64);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8259bbdc
	ctx.lr = 0x820BD624;
	__restfpr_22(ctx, base);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_820BD628:
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x8259bbdc
	ctx.lr = 0x820BD644;
	__restfpr_22(ctx, base);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD648"))) PPC_WEAK_FUNC(sub_820BD648);
PPC_FUNC_IMPL(__imp__sub_820BD648) {
	PPC_FUNC_PROLOGUE();
	// std r4,15408(r3)
	PPC_STORE_U64(ctx.r3.u32 + 15408, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BD650"))) PPC_WEAK_FUNC(sub_820BD650);
PPC_FUNC_IMPL(__imp__sub_820BD650) {
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
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21272
	ctx.r31.s64 = ctx.r11.s64 + -21272;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210d390
	ctx.lr = 0x820BD680;
	sub_8210D390(ctx, base);
	// lwz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x8210d3f0
	ctx.lr = 0x820BD698;
	sub_8210D3F0(ctx, base);
	// rotlwi r11,r31,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// divw r3,r31,r9
	ctx.r3.s32 = ctx.r31.s32 / ctx.r9.s32;
	// andc r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// twlgei r7,-1
	if (ctx.r7.u32 >= 4294967295) __builtin_debugtrap();
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

__attribute__((alias("__imp__sub_820BD6CC"))) PPC_WEAK_FUNC(sub_820BD6CC);
PPC_FUNC_IMPL(__imp__sub_820BD6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD6D0"))) PPC_WEAK_FUNC(sub_820BD6D0);
PPC_FUNC_IMPL(__imp__sub_820BD6D0) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,15456(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15456);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r4,15456(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15456, ctx.r4.u8);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_820BD6F4"))) PPC_WEAK_FUNC(sub_820BD6F4);
PPC_FUNC_IMPL(__imp__sub_820BD6F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BD6F8"))) PPC_WEAK_FUNC(sub_820BD6F8);
PPC_FUNC_IMPL(__imp__sub_820BD6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820BD700;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// lbz r11,15480(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 15480);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8223d0b0
	ctx.lr = 0x820BD728;
	sub_8223D0B0(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bd780
	if (ctx.cr6.eq) goto loc_820BD780;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// ori r8,r9,52520
	ctx.r8.u64 = ctx.r9.u64 | 52520;
	// lbzx r11,r30,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8223d0b0
	ctx.lr = 0x820BD754;
	sub_8223D0B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r11,6824(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6824, ctx.r11.u8);
	// stb r11,6827(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6827, ctx.r11.u8);
	// stb r11,6825(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6825, ctx.r11.u8);
	// stb r11,6826(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6826, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,14804(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14804, ctx.r7.u32);
	// bl 0x82235458
	ctx.lr = 0x820BD778;
	sub_82235458(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820BD780:
	// lbz r6,6336(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6336);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,352
	ctx.r10.s64 = ctx.r31.s64 + 352;
	// ori r5,r6,60
	ctx.r5.u64 = ctx.r6.u64 | 60;
	// li r8,12
	ctx.r8.s64 = 12;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r11,601(r31)
	PPC_STORE_U8(ctx.r31.u32 + 601, ctx.r11.u8);
	// stb r5,6336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6336, ctx.r5.u8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820BD7A4:
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x820bd7a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BD7A4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r4,3
	ctx.r4.s64 = 3;
	// lfs f0,2864(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// stfs f0,372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// stfs f0,376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// sth r11,400(r31)
	PPC_STORE_U16(ctx.r31.u32 + 400, ctx.r11.u16);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// lwz r3,13496(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13496);
	// stw r4,14804(r29)
	PPC_STORE_U32(ctx.r29.u32 + 14804, ctx.r4.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x820bd838
	if (!ctx.cr6.eq) goto loc_820BD838;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820BD800:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x820bd800
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BD800;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3096(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3096);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x820a5940
	ctx.lr = 0x820BD82C;
	sub_820A5940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// bl 0x82234d58
	ctx.lr = 0x820BD838;
	sub_82234D58(ctx, base);
loc_820BD838:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82235458
	ctx.lr = 0x820BD840;
	sub_82235458(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BD848"))) PPC_WEAK_FUNC(sub_820BD848);
PPC_FUNC_IMPL(__imp__sub_820BD848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,15240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15240);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,3812
	ctx.r11.s64 = ctx.r11.s64 + 3812;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f11,f0,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fsqrts f0,f10
	ctx.f0.f64 = double(float(sqrt(ctx.f10.f64)));
	// stfsx f0,r10,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// lwz r11,15240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15240);
	// lfs f0,15248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 15248);
	ctx.f0.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stw r6,15240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 15240, ctx.r6.u32);
	// lfs f13,15252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 15252);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820bd8ac
	if (!ctx.cr6.lt) goto loc_820BD8AC;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x820bd8b8
	goto loc_820BD8B8;
loc_820BD8AC:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820bd8b8
	if (!ctx.cr6.gt) goto loc_820BD8B8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820BD8B8:
	// lfs f13,15256(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 15256);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x820bd8cc
	if (!ctx.cr6.lt) goto loc_820BD8CC;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x820bd8d8
	goto loc_820BD8D8;
loc_820BD8CC:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820bd8d8
	if (!ctx.cr6.gt) goto loc_820BD8D8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820BD8D8:
	// lfs f13,15260(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 15260);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x820bd8f0
	if (!ctx.cr6.lt) goto loc_820BD8F0;
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f9,15244(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 15244, temp.u32);
	// blr 
	return;
loc_820BD8F0:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820bd904
	if (!ctx.cr6.gt) goto loc_820BD904;
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f8,15244(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 15244, temp.u32);
	// blr 
	return;
loc_820BD904:
	// fsubs f7,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f7,15244(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 15244, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BD910"))) PPC_WEAK_FUNC(sub_820BD910);
PPC_FUNC_IMPL(__imp__sub_820BD910) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,15480(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15480);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addi r11,r11,-1264
	ctx.r11.s64 = ctx.r11.s64 + -1264;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lbz r6,21(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 21);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820bd93c
	if (ctx.cr6.eq) goto loc_820BD93C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820BD93C:
	// lwz r5,15328(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15328);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x820bd964
	if (!ctx.cr6.eq) goto loc_820BD964;
	// lwz r4,15724(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15724);
	// lbz r3,1354(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1354);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820BD964:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BD96C"))) PPC_WEAK_FUNC(sub_820BD96C);
PPC_FUNC_IMPL(__imp__sub_820BD96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BD970"))) PPC_WEAK_FUNC(sub_820BD970);
PPC_FUNC_IMPL(__imp__sub_820BD970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lhz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lis r5,34
	ctx.r5.s64 = 2228224;
	// ori r4,r5,36852
	ctx.r4.u64 = ctx.r5.u64 | 36852;
	// lfd f0,-4840(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfd f12,-1600(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + -1600);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r11,r8,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// fsubs f11,f2,f13
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// fsubs f10,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rotlwi r6,r10,4
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsel f13,f11,f0,f2
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// rotlwi r10,r9,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// fsel f0,f10,f0,f3
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f3.f64;
	// rotlwi r9,r8,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// add r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r10,r7,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// fsel f13,f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fsel f11,f0,f0,f12
	ctx.f11.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fmadds f0,f7,f13,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f5,f6,f13,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsubs f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// fmadds f3,f4,f11,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fsubs f1,f1,f3
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BDA2C"))) PPC_WEAK_FUNC(sub_820BDA2C);
PPC_FUNC_IMPL(__imp__sub_820BDA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BDA30"))) PPC_WEAK_FUNC(sub_820BDA30);
PPC_FUNC_IMPL(__imp__sub_820BDA30) {
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
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lbz r10,15480(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15480);
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8223d0b0
	ctx.lr = 0x820BDA60;
	sub_8223D0B0(ctx, base);
	// lbz r9,599(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 599);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820bda80
	if (!ctx.cr6.eq) goto loc_820BDA80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,14776(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 14776);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x8228e708
	ctx.lr = 0x820BDA80;
	sub_8228E708(ctx, base);
loc_820BDA80:
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

__attribute__((alias("__imp__sub_820BDA94"))) PPC_WEAK_FUNC(sub_820BDA94);
PPC_FUNC_IMPL(__imp__sub_820BDA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BDA98"))) PPC_WEAK_FUNC(sub_820BDA98);
PPC_FUNC_IMPL(__imp__sub_820BDA98) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f31,13524(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	ctx.f31.f64 = double(temp.f32);
	// std r4,15408(r31)
	PPC_STORE_U64(ctx.r31.u32 + 15408, ctx.r4.u64);
	// stw r11,15416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15416, ctx.r11.u32);
	// stw r5,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r5.u32);
loc_820BDACC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820BDAE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820bdacc
	if (ctx.cr6.eq) goto loc_820BDACC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820bdaf8
	if (ctx.cr6.eq) goto loc_820BDAF8;
	// stfs f31,13524(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 13524, temp.u32);
loc_820BDAF8:
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

__attribute__((alias("__imp__sub_820BDB14"))) PPC_WEAK_FUNC(sub_820BDB14);
PPC_FUNC_IMPL(__imp__sub_820BDB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BDB18"))) PPC_WEAK_FUNC(sub_820BDB18);
PPC_FUNC_IMPL(__imp__sub_820BDB18) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r10,13488
	ctx.r4.s64 = ctx.r10.s64 + 13488;
	// addi r3,r11,13488
	ctx.r3.s64 = ctx.r11.s64 + 13488;
	// bl 0x820b7ab0
	ctx.lr = 0x820BDB38;
	sub_820B7AB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bdb4c
	if (!ctx.cr6.eq) goto loc_820BDB4C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_820BDB4C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BDB5C"))) PPC_WEAK_FUNC(sub_820BDB5C);
PPC_FUNC_IMPL(__imp__sub_820BDB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BDB60"))) PPC_WEAK_FUNC(sub_820BDB60);
PPC_FUNC_IMPL(__imp__sub_820BDB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x820BDB68;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820bdda8
	if (!ctx.cr6.eq) goto loc_820BDDA8;
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
	// beq cr6,0x820bdc14
	if (ctx.cr6.eq) goto loc_820BDC14;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820bdc14
	if (!ctx.cr6.eq) goto loc_820BDC14;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// ori r6,r7,36968
	ctx.r6.u64 = ctx.r7.u64 | 36968;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r11,r31,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820bdc58
	if (!ctx.cr6.gt) goto loc_820BDC58;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
loc_820BDBD4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232da90
	ctx.lr = 0x820BDBE0;
	sub_8232DA90(ctx, base);
	// lbz r5,15225(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15225);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820bdbf8
	if (!ctx.cr6.eq) goto loc_820BDBF8;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_820BDBF8:
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r3,r4,36968
	ctx.r3.u64 = ctx.r4.u64 | 36968;
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820bdbd4
	if (ctx.cr6.lt) goto loc_820BDBD4;
	// b 0x820bdc58
	goto loc_820BDC58;
loc_820BDC14:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r10,r11,36968
	ctx.r10.u64 = ctx.r11.u64 | 36968;
	// lwzx r30,r31,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x820bdc58
	if (!ctx.cr6.gt) goto loc_820BDC58;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
loc_820BDC38:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232da90
	ctx.lr = 0x820BDC44;
	sub_8232DA90(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x820bdc38
	if (ctx.cr6.lt) goto loc_820BDC38;
loc_820BDC58:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-9448
	ctx.r6.s64 = ctx.r11.s64 + -9448;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cd88
	ctx.lr = 0x820BDC70;
	sub_8259CD88(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// lwz r4,-4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// lhz r8,13680(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 13680);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x820bdcb8
	if (ctx.cr6.eq) goto loc_820BDCB8;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r5,r6,16216
	ctx.r5.u64 = ctx.r6.u64 | 16216;
	// lwzx r11,r29,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,488(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BDCB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BDCB8:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r9,13680(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 13680);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x820bdce8
	if (ctx.cr6.eq) goto loc_820BDCE8;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// lwzx r11,r29,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,484(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 484);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820BDCE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BDCE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x820bdd40
	if (!ctx.cr6.gt) goto loc_820BDD40;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_820BDCF8:
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// ori r3,r4,37024
	ctx.r3.u64 = ctx.r4.u64 | 37024;
	// ori r5,r6,37024
	ctx.r5.u64 = ctx.r6.u64 | 37024;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwzx r8,r31,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// sth r8,13680(r9)
	PPC_STORE_U16(ctx.r9.u32 + 13680, ctx.r8.u16);
	// lwzx r8,r31,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// subf r4,r8,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r8.s64;
	// sth r4,13682(r9)
	PPC_STORE_U16(ctx.r9.u32 + 13682, ctx.r4.u16);
	// blt cr6,0x820bdcf8
	if (ctx.cr6.lt) goto loc_820BDCF8;
loc_820BDD40:
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,36968
	ctx.r10.u64 = ctx.r11.u64 | 36968;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820bdda8
	if (!ctx.cr6.gt) goto loc_820BDDA8;
loc_820BDD5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232da90
	ctx.lr = 0x820BDD68;
	sub_8232DA90(ctx, base);
	// lwz r9,15328(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15328);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820bdd90
	if (!ctx.cr6.eq) goto loc_820BDD90;
	// lhz r8,13682(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 13682);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x820bdd90
	if (!ctx.cr6.lt) goto loc_820BDD90;
	// stw r30,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r30.u32);
	// lhz r6,13682(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 13682);
	// extsh r29,r6
	ctx.r29.s64 = ctx.r6.s16;
loc_820BDD90:
	// lis r5,34
	ctx.r5.s64 = 2228224;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r4,r5,36968
	ctx.r4.u64 = ctx.r5.u64 | 36968;
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820bdd5c
	if (ctx.cr6.lt) goto loc_820BDD5C;
loc_820BDDA8:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
	// blt cr6,0x820bddc4
	if (ctx.cr6.lt) goto loc_820BDDC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r3.u32);
loc_820BDDC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BDDCC"))) PPC_WEAK_FUNC(sub_820BDDCC);
PPC_FUNC_IMPL(__imp__sub_820BDDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BDDD0"))) PPC_WEAK_FUNC(sub_820BDDD0);
PPC_FUNC_IMPL(__imp__sub_820BDDD0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,-15112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15112);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f9,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82356420
	ctx.lr = 0x820BDE84;
	sub_82356420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235aa30
	ctx.lr = 0x820BDE8C;
	sub_8235AA30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82356890
	ctx.lr = 0x820BDE94;
	sub_82356890(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235add0
	ctx.lr = 0x820BDEAC;
	sub_8235ADD0(ctx, base);
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

__attribute__((alias("__imp__sub_820BDEC4"))) PPC_WEAK_FUNC(sub_820BDEC4);
PPC_FUNC_IMPL(__imp__sub_820BDEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BDEC8"))) PPC_WEAK_FUNC(sub_820BDEC8);
PPC_FUNC_IMPL(__imp__sub_820BDEC8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f10,-1528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f2,f10
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f0,f1,f10,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fadds f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82356420
	ctx.lr = 0x820BDF88;
	sub_82356420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235aa30
	ctx.lr = 0x820BDF90;
	sub_8235AA30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82356890
	ctx.lr = 0x820BDF98;
	sub_82356890(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235add0
	ctx.lr = 0x820BDFB0;
	sub_8235ADD0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_820BDFC8"))) PPC_WEAK_FUNC(sub_820BDFC8);
PPC_FUNC_IMPL(__imp__sub_820BDFC8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,-15112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15112);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fadds f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// bl 0x82356420
	ctx.lr = 0x820BE07C;
	sub_82356420(ctx, base);
	// lwz r3,8508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8508);
	// bl 0x8235aa30
	ctx.lr = 0x820BE084;
	sub_8235AA30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82356890
	ctx.lr = 0x820BE08C;
	sub_82356890(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235add0
	ctx.lr = 0x820BE0A4;
	sub_8235ADD0(ctx, base);
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

__attribute__((alias("__imp__sub_820BE0BC"))) PPC_WEAK_FUNC(sub_820BE0BC);
PPC_FUNC_IMPL(__imp__sub_820BE0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE0C0"))) PPC_WEAK_FUNC(sub_820BE0C0);
PPC_FUNC_IMPL(__imp__sub_820BE0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lfs f0,-1676(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1676);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x820be0e8
	if (!ctx.cr6.lt) goto loc_820BE0E8;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
loc_820BE0E8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-27244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,3108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3108);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// lfs f0,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// beq cr6,0x820be138
	if (ctx.cr6.eq) goto loc_820BE138;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-10120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10120);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820be140
	goto loc_820BE140;
loc_820BE138:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,3104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3104);
	ctx.f0.f64 = double(temp.f32);
loc_820BE140:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lfs f0,2864(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r8,r8,23504
	ctx.r8.s64 = ctx.r8.s64 + 23504;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r8,28(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// bl 0x82352780
	ctx.lr = 0x820BE184;
	sub_82352780(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// ld r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lwz r9,204(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820BE1C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE1D0"))) PPC_WEAK_FUNC(sub_820BE1D0);
PPC_FUNC_IMPL(__imp__sub_820BE1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x820BE1D8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8259bb9c
	ctx.lr = 0x820BE1E0;
	__savefpr_25(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// fmr f25,f2
	ctx.f25.f64 = ctx.f2.f64;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r11,3204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3204);
	// ld r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// ld r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820BE220:
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x820be220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BE220;
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lfs f2,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lfs f3,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lfs f9,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f6,f13
	ctx.f6.f64 = double(float(ctx.f13.f64));
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// fdivs f10,f5,f6
	ctx.f10.f64 = double(float(ctx.f5.f64 / ctx.f6.f64));
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f4,f8,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// beq cr6,0x820be2a0
	if (ctx.cr6.eq) goto loc_820BE2A0;
	// lbz r6,15456(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 15456);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820be6ec
	if (ctx.cr6.eq) goto loc_820BE6EC;
	// lwz r5,13520(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13520);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820be6ec
	if (ctx.cr6.eq) goto loc_820BE6EC;
loc_820BE2A0:
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f10,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f9,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f8,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f8,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f8,f1,f13
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f1,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// lfs f1,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f1,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// fadds f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// fadds f10,f1,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfs f9,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// fadds f11,f8,f10
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// lfs f10,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fadds f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f1,f9,f11
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bso cr6,0x820be36c
	if (ctx.cr6.so) goto loc_820BE36C;
	// ble cr6,0x820be6ec
	if (!ctx.cr6.gt) goto loc_820BE6EC;
loc_820BE36C:
	// fcmpu cr6,f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// bso cr6,0x820be378
	if (ctx.cr6.so) goto loc_820BE378;
	// bge cr6,0x820be6ec
	if (!ctx.cr6.lt) goto loc_820BE6EC;
loc_820BE378:
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lfs f8,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,2868(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fdivs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f0,3116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3116);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f9,f11,f0,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f10,f13
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f1,f9,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f27,f12,f6
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f11,f10,f7
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f9,f0,f6
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f0,-1528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r11,-10152
	ctx.r31.s64 = ctx.r11.s64 + -10152;
	// lfs f12,5144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5144);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820be3dc
	if (!ctx.cr6.gt) goto loc_820BE3DC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_820BE3DC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmuls f8,f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lfs f12,-15136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15136);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f4,f0,f12
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f13,3112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3112);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// fmuls f28,f8,f13
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f13,8500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8500);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f13,25556(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 25556);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f27,f4
	ctx.cr6.compare(ctx.f27.f64, ctx.f4.f64);
	// fsubs f31,f11,f28
	ctx.f31.f64 = double(float(ctx.f11.f64 - ctx.f28.f64));
	// fmuls f10,f1,f7
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmuls f26,f10,f13
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// blt cr6,0x820be6ec
	if (ctx.cr6.lt) goto loc_820BE6EC;
	// fmuls f9,f28,f12
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f12.f64));
	// fcmpu cr6,f31,f9
	ctx.cr6.compare(ctx.f31.f64, ctx.f9.f64);
	// blt cr6,0x820be6ec
	if (ctx.cr6.lt) goto loc_820BE6EC;
	// fmadds f8,f0,f13,f6
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fcmpu cr6,f27,f8
	ctx.cr6.compare(ctx.f27.f64, ctx.f8.f64);
	// bgt cr6,0x820be6ec
	if (ctx.cr6.gt) goto loc_820BE6EC;
	// fmadds f7,f28,f13,f7
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fcmpu cr6,f31,f7
	ctx.cr6.compare(ctx.f31.f64, ctx.f7.f64);
	// bgt cr6,0x820be6ec
	if (ctx.cr6.gt) goto loc_820BE6EC;
	// lfs f1,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823567f0
	ctx.lr = 0x820BE450;
	sub_823567F0(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lfs f0,2868(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r30,2500
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2500, ctx.xer);
	// addi r10,r11,27376
	ctx.r10.s64 = ctx.r11.s64 + 27376;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// bgt cr6,0x820be47c
	if (ctx.cr6.gt) goto loc_820BE47C;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// b 0x820be4a8
	goto loc_820BE4A8;
loc_820BE47C:
	// cmpwi cr6,r30,10000
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10000, ctx.xer);
	// bgt cr6,0x820be498
	if (ctx.cr6.gt) goto loc_820BE498;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// b 0x820be4a8
	goto loc_820BE4A8;
loc_820BE498:
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
loc_820BE4A8:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lfs f12,-520(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -520);
	ctx.f12.f64 = double(temp.f32);
	// lis r28,-32255
	ctx.r28.s64 = -2113863680;
	// fcmpu cr6,f30,f12
	ctx.cr6.compare(ctx.f30.f64, ctx.f12.f64);
	// addi r10,r11,27408
	ctx.r10.s64 = ctx.r11.s64 + 27408;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lfs f13,-27244(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -27244);
	ctx.f13.f64 = double(temp.f32);
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f29.f64 = double(temp.f32);
	// bge cr6,0x820be518
	if (!ctx.cr6.lt) goto loc_820BE518;
	// lfs f11,25556(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 25556);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f30,f11
	ctx.cr6.compare(ctx.f30.f64, ctx.f11.f64);
	// bge cr6,0x820be4f0
	if (!ctx.cr6.lt) goto loc_820BE4F0;
	// fmuls f0,f30,f13
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
loc_820BE4F0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,3100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f30,f11
	ctx.cr6.compare(ctx.f30.f64, ctx.f11.f64);
	// ble cr6,0x820be508
	if (!ctx.cr6.gt) goto loc_820BE508;
	// fsubs f6,f12,f30
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// fmuls f0,f6,f13
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
loc_820BE508:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,-4736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820be51c
	if (!ctx.cr6.lt) goto loc_820BE51C;
loc_820BE518:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_820BE51C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f0,-1676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1676);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bge cr6,0x820be538
	if (!ctx.cr6.lt) goto loc_820BE538;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
loc_820BE538:
	// fsubs f30,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fmuls f31,f28,f13
	ctx.f31.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r30,r11,23504
	ctx.r30.s64 = ctx.r11.s64 + 23504;
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f27,104(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stfs f25,160(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82352fc8
	ctx.lr = 0x820BE590;
	sub_82352FC8(ctx, base);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// lwz r9,316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r6,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r6.u64);
	// std r5,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r5.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820BE5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r11,-1960
	ctx.r9.s64 = ctx.r11.s64 + -1960;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lfs f0,2868(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stfs f27,104(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82352fc8
	ctx.lr = 0x820BE618;
	sub_82352FC8(ctx, base);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwz r9,316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r6,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r6.u64);
	// std r5,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r5.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820BE654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f5,f31,f26
	ctx.f5.f64 = double(float(ctx.f31.f64 + ctx.f26.f64));
	// lfs f0,-1648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1648);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f27,f0
	ctx.f12.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// lfs f0,-27244(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f13,f31,f13,f30
	ctx.f13.f64 = double(float(-(ctx.f31.f64 * ctx.f13.f64 - ctx.f30.f64)));
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// fsubs f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fadds f3,f5,f28
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f28.f64));
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f29,116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f3,132(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f2,108(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8235fa78
	ctx.lr = 0x820BE6B0;
	sub_8235FA78(ctx, base);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwz r9,316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r6,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r6.u64);
	// std r5,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r5.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820BE6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820BE6EC:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8259bbe8
	ctx.lr = 0x820BE6F8;
	__restfpr_25(ctx, base);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BE6FC"))) PPC_WEAK_FUNC(sub_820BE6FC);
PPC_FUNC_IMPL(__imp__sub_820BE6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE700"))) PPC_WEAK_FUNC(sub_820BE700);
PPC_FUNC_IMPL(__imp__sub_820BE700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r10,r3,136
	ctx.r10.s64 = ctx.r3.s64 + 136;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,-1548(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1548);
	ctx.f13.f64 = double(temp.f32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820BE7A0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x820be7a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BE7A0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,180(r3)
	PPC_STORE_U8(ctx.r3.u32 + 180, ctx.r11.u8);
	// stw r10,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r10.u32);
	// stw r7,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r7.u32);
	// stw r10,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r10.u32);
	// stb r11,181(r3)
	PPC_STORE_U8(ctx.r3.u32 + 181, ctx.r11.u8);
	// stb r11,182(r3)
	PPC_STORE_U8(ctx.r3.u32 + 182, ctx.r11.u8);
	// stb r11,183(r3)
	PPC_STORE_U8(ctx.r3.u32 + 183, ctx.r11.u8);
	// stb r11,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r11.u8);
	// stb r11,185(r3)
	PPC_STORE_U8(ctx.r3.u32 + 185, ctx.r11.u8);
	// stb r11,186(r3)
	PPC_STORE_U8(ctx.r3.u32 + 186, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE7F0"))) PPC_WEAK_FUNC(sub_820BE7F0);
PPC_FUNC_IMPL(__imp__sub_820BE7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x820BE7F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x820be840
	if (!ctx.cr6.eq) goto loc_820BE840;
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// lis r6,35
	ctx.r6.s64 = 2293760;
	// ori r7,r8,52520
	ctx.r7.u64 = ctx.r8.u64 | 52520;
	// ori r5,r6,6184
	ctx.r5.u64 = ctx.r6.u64 | 6184;
	// lbzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lbzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// extsb r29,r10
	ctx.r29.s64 = ctx.r10.s8;
	// extsb r28,r11
	ctx.r28.s64 = ctx.r11.s8;
	// b 0x820be854
	goto loc_820BE854;
loc_820BE840:
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// li r28,-1
	ctx.r28.s64 = -1;
	// ori r3,r4,52520
	ctx.r3.u64 = ctx.r4.u64 | 52520;
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_820BE854:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r6,r30,436
	ctx.r6.s64 = ctx.r30.s64 + 436;
	// lfs f12,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f12.f64 = double(temp.f32);
loc_820BE86C:
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x820be884
	if (!ctx.cr6.eq) goto loc_820BE884;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// bl 0x820be700
	ctx.lr = 0x820BE880;
	sub_820BE700(ctx, base);
	// b 0x820be8bc
	goto loc_820BE8BC;
loc_820BE884:
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x820be89c
	if (!ctx.cr6.eq) goto loc_820BE89C;
	// addi r3,r30,224
	ctx.r3.s64 = ctx.r30.s64 + 224;
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// bl 0x820be700
	ctx.lr = 0x820BE898;
	sub_820BE700(ctx, base);
	// b 0x820be8bc
	goto loc_820BE8BC;
loc_820BE89C:
	// addi r11,r6,-12
	ctx.r11.s64 = ctx.r6.s64 + -12;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stfs f12,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stw r4,-8(r6)
	PPC_STORE_U32(ctx.r6.u32 + -8, ctx.r4.u32);
	// stb r4,8(r6)
	PPC_STORE_U8(ctx.r6.u32 + 8, ctx.r4.u8);
	// stb r4,9(r6)
	PPC_STORE_U8(ctx.r6.u32 + 9, ctx.r4.u8);
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
loc_820BE8BC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x820be86c
	if (ctx.cr6.lt) goto loc_820BE86C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BE8D8"))) PPC_WEAK_FUNC(sub_820BE8D8);
PPC_FUNC_IMPL(__imp__sub_820BE8D8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,200
	ctx.r11.s64 = ctx.r4.s64 * 200;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stb r5,210(r11)
	PPC_STORE_U8(ctx.r11.u32 + 210, ctx.r5.u8);
	// stw r4,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE90C"))) PPC_WEAK_FUNC(sub_820BE90C);
PPC_FUNC_IMPL(__imp__sub_820BE90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE910"))) PPC_WEAK_FUNC(sub_820BE910);
PPC_FUNC_IMPL(__imp__sub_820BE910) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,200
	ctx.r11.s64 = ctx.r4.s64 * 200;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r5,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r5.u32);
	// stw r4,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE948"))) PPC_WEAK_FUNC(sub_820BE948);
PPC_FUNC_IMPL(__imp__sub_820BE948) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,200
	ctx.r11.s64 = ctx.r4.s64 * 200;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE974"))) PPC_WEAK_FUNC(sub_820BE974);
PPC_FUNC_IMPL(__imp__sub_820BE974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE978"))) PPC_WEAK_FUNC(sub_820BE978);
PPC_FUNC_IMPL(__imp__sub_820BE978) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stb r11,264(r3)
	PPC_STORE_U8(ctx.r3.u32 + 264, ctx.r11.u8);
	// li r9,28
	ctx.r9.s64 = 28;
	// stb r11,265(r3)
	PPC_STORE_U8(ctx.r3.u32 + 265, ctx.r11.u8);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// sth r7,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r7.u16);
	// stb r6,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r6.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820BE9BC:
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x820be9bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BE9BC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BE9CC"))) PPC_WEAK_FUNC(sub_820BE9CC);
PPC_FUNC_IMPL(__imp__sub_820BE9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BE9D0"))) PPC_WEAK_FUNC(sub_820BE9D0);
PPC_FUNC_IMPL(__imp__sub_820BE9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r6,265(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 265);
	// rlwinm r8,r5,6,18,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x3FC0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 | 1;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// lfs f0,-4760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4760);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r5,265(r3)
	PPC_STORE_U8(ctx.r3.u32 + 265, ctx.r5.u8);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f11.u32);
	// lfs f13,-1676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1676);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stb r7,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r7.u8);
	// lfs f10,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f8.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// rlwinm r7,r10,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stb r10,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r10.u8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,-4768(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4768);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfiwx f5,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f5.u32);
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// subf r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
	// stb r9,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r9.u8);
	// lwz r6,32(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lfs f4,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfiwx f2,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f2.u32);
	// lwz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stb r5,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r5.u8);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BEA9C"))) PPC_WEAK_FUNC(sub_820BEA9C);
PPC_FUNC_IMPL(__imp__sub_820BEA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BEAA0"))) PPC_WEAK_FUNC(sub_820BEAA0);
PPC_FUNC_IMPL(__imp__sub_820BEAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,265(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 265);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820beab8
	if (!ctx.cr6.eq) goto loc_820BEAB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820BEAB8:
	// lbz r8,2(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,3128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3128);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,3124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3124);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,16(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lbz r5,3(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// clrlwi r10,r5,27
	ctx.r10.u64 = ctx.r5.u32 & 0x1F;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f6,28(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lbz r9,3(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lfs f13,3120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3120);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r8,r9,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f2,12(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r5,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r5.u32);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// stfs f10,20(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,24(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lbz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// clrlwi r7,r8,26
	ctx.r7.u64 = ctx.r8.u32 & 0x3F;
	// stb r7,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r7.u8);
	// lbz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// rlwinm r3,r6,26,6,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BEB7C"))) PPC_WEAK_FUNC(sub_820BEB7C);
PPC_FUNC_IMPL(__imp__sub_820BEB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BEB80"))) PPC_WEAK_FUNC(sub_820BEB80);
PPC_FUNC_IMPL(__imp__sub_820BEB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r7,r6,6,18,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0x3FC0;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// lbz r7,265(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 265);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// slw r6,r9,r4
	ctx.r6.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 | ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stb r6,265(r3)
	PPC_STORE_U8(ctx.r3.u32 + 265, ctx.r6.u8);
	// lfs f13,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-4760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4760);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f11.u32);
	// lfs f0,-1676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1676);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r4,r1,-16
	ctx.r4.s64 = ctx.r1.s64 + -16;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lfs f10,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f8.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// rlwinm r6,r9,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f7,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// lfs f0,-4768(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4768);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfiwx f5,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f5.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// clrlwi r6,r8,26
	ctx.r6.u64 = ctx.r8.u32 & 0x3F;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stb r5,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BEC44"))) PPC_WEAK_FUNC(sub_820BEC44);
PPC_FUNC_IMPL(__imp__sub_820BEC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BEC48"))) PPC_WEAK_FUNC(sub_820BEC48);
PPC_FUNC_IMPL(__imp__sub_820BEC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// lbz r10,265(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 265);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// slw r8,r11,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820bec6c
	if (!ctx.cr6.eq) goto loc_820BEC6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820BEC6C:
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,3128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3128);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,16(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfs f0,3124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3124);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,28(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lfs f0,3120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3120);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r6,r7,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,12(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r3,r8,26,6,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3FFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BED10"))) PPC_WEAK_FUNC(sub_820BED10);
PPC_FUNC_IMPL(__imp__sub_820BED10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820bed30
	if (!ctx.cr6.eq) goto loc_820BED30;
	// lbz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 264);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stb r10,264(r3)
	PPC_STORE_U8(ctx.r3.u32 + 264, ctx.r10.u8);
	// b 0x820bed48
	goto loc_820BED48;
loc_820BED30:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lbz r10,264(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 264);
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r4,r8,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// stb r9,264(r3)
	PPC_STORE_U8(ctx.r3.u32 + 264, ctx.r9.u8);
loc_820BED48:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// ld r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// ld r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BED80"))) PPC_WEAK_FUNC(sub_820BED80);
PPC_FUNC_IMPL(__imp__sub_820BED80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820beda8
	if (!ctx.cr6.eq) goto loc_820BEDA8;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r9.u32);
	// b 0x820bedc4
	goto loc_820BEDC4;
loc_820BEDA8:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r4,r7,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// and r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 & ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820BEDC4:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r7.u64);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BEDFC"))) PPC_WEAK_FUNC(sub_820BEDFC);
PPC_FUNC_IMPL(__imp__sub_820BEDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BEE00"))) PPC_WEAK_FUNC(sub_820BEE00);
PPC_FUNC_IMPL(__imp__sub_820BEE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x820BEE08;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// sth r26,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r26.u16);
	// stb r26,14(r30)
	PPC_STORE_U8(ctx.r30.u32 + 14, ctx.r26.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820BEE44:
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x820bee44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820BEE44;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823475c0
	ctx.lr = 0x820BEE58;
	sub_823475C0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823476e0
	ctx.lr = 0x820BEE6C;
	sub_823476E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820bee7c
	if (!ctx.cr6.eq) goto loc_820BEE7C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_820BEE7C:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820beec0
	if (ctx.cr6.eq) goto loc_820BEEC0;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820beeb8
	if (ctx.cr6.eq) goto loc_820BEEB8;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823476e0
	ctx.lr = 0x820BEEAC;
	sub_823476E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820beebc
	if (!ctx.cr6.eq) goto loc_820BEEBC;
loc_820BEEB8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_820BEEBC:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
loc_820BEEC0:
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x820bef00
	if (!ctx.cr6.gt) goto loc_820BEF00;
	// clrlwi r6,r28,24
	ctx.r6.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820beef8
	if (ctx.cr6.eq) goto loc_820BEEF8;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823476e0
	ctx.lr = 0x820BEEEC;
	sub_823476E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820beefc
	if (!ctx.cr6.eq) goto loc_820BEEFC;
loc_820BEEF8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_820BEEFC:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
loc_820BEF00:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r27,r31,96
	ctx.r27.s64 = ctx.r31.s64 + 96;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r24,4
	ctx.r24.s64 = 4;
loc_820BEF10:
	// lbz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// slw r4,r23,r29
	ctx.r4.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r29.u8 & 0x3F));
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bef54
	if (ctx.cr6.eq) goto loc_820BEF54;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bef4c
	if (ctx.cr6.eq) goto loc_820BEF4C;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823476e0
	ctx.lr = 0x820BEF40;
	sub_823476E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820bef50
	if (!ctx.cr6.eq) goto loc_820BEF50;
loc_820BEF4C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_820BEF50:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
loc_820BEF54:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// slw r9,r24,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r29.u8 & 0x3F));
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820bef98
	if (ctx.cr6.eq) goto loc_820BEF98;
	// clrlwi r7,r28,24
	ctx.r7.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820bef90
	if (ctx.cr6.eq) goto loc_820BEF90;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823476e0
	ctx.lr = 0x820BEF84;
	sub_823476E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820bef94
	if (!ctx.cr6.eq) goto loc_820BEF94;
loc_820BEF90:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_820BEF94:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
loc_820BEF98:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// blt cr6,0x820bef10
	if (ctx.cr6.lt) goto loc_820BEF10;
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r5,1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r6,265(r31)
	PPC_STORE_U8(ctx.r31.u32 + 265, ctx.r6.u8);
	// stb r5,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r5.u8);
	// bl 0x823475c0
	ctx.lr = 0x820BEFC4;
	sub_823475C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r26,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subf r4,r22,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r22.s64;
	// stw r4,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r4.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BEFE0"))) PPC_WEAK_FUNC(sub_820BEFE0);
PPC_FUNC_IMPL(__imp__sub_820BEFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x820BEFE8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r11,265(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 265);
	// lbz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 264);
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// bne cr6,0x820bf018
	if (!ctx.cr6.eq) goto loc_820BF018;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r8.u8);
loc_820BF018:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r7,r10,28,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r8,r10,29,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r10,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r8,r11,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// rlwinm r7,r11,28,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r6,r11,29,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r11,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// rlwinm r9,r11,5,25,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x60;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x823475f0
	ctx.lr = 0x820BF08C;
	sub_823475F0(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x820bf0a0
	if (!ctx.cr6.lt) goto loc_820BF0A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_820BF0A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823475c0
	ctx.lr = 0x820BF0A8;
	sub_823475C0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82347618
	ctx.lr = 0x820BF0BC;
	sub_82347618(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820bf0d0
	if (!ctx.cr6.eq) goto loc_820BF0D0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_820BF0D0:
	// lbz r6,1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r5,r6,30
	ctx.r5.u64 = ctx.r6.u32 & 0x3;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820bf114
	if (ctx.cr6.eq) goto loc_820BF114;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820bf10c
	if (ctx.cr6.eq) goto loc_820BF10C;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82347618
	ctx.lr = 0x820BF100;
	sub_82347618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820bf110
	if (!ctx.cr6.eq) goto loc_820BF110;
loc_820BF10C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_820BF110:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
loc_820BF114:
	// lbz r3,1(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x820bf154
	if (!ctx.cr6.gt) goto loc_820BF154;
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bf14c
	if (ctx.cr6.eq) goto loc_820BF14C;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82347618
	ctx.lr = 0x820BF140;
	sub_82347618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820bf150
	if (!ctx.cr6.eq) goto loc_820BF150;
loc_820BF14C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_820BF150:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
loc_820BF154:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r26,r30,96
	ctx.r26.s64 = ctx.r30.s64 + 96;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r24,4
	ctx.r24.s64 = 4;
loc_820BF168:
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// slw r8,r23,r29
	ctx.r8.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r29.u8 & 0x3F));
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x820bf1ac
	if (ctx.cr6.eq) goto loc_820BF1AC;
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820bf1a4
	if (ctx.cr6.eq) goto loc_820BF1A4;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82347618
	ctx.lr = 0x820BF198;
	sub_82347618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820bf1a8
	if (!ctx.cr6.eq) goto loc_820BF1A8;
loc_820BF1A4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_820BF1A8:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
loc_820BF1AC:
	// lbz r5,1(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// slw r4,r24,r29
	ctx.r4.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r29.u8 & 0x3F));
	// and r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 & ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820bf1f0
	if (ctx.cr6.eq) goto loc_820BF1F0;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf1e8
	if (ctx.cr6.eq) goto loc_820BF1E8;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82347618
	ctx.lr = 0x820BF1DC;
	sub_82347618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820bf1ec
	if (!ctx.cr6.eq) goto loc_820BF1EC;
loc_820BF1E8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_820BF1EC:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
loc_820BF1F0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,3
	ctx.r27.s64 = ctx.r27.s64 + 3;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// blt cr6,0x820bf168
	if (ctx.cr6.lt) goto loc_820BF168;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823475c0
	ctx.lr = 0x820BF20C;
	sub_823475C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,265(r30)
	PPC_STORE_U8(ctx.r30.u32 + 265, ctx.r25.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r10,r22,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r22.s64;
	// stb r25,264(r30)
	PPC_STORE_U8(ctx.r30.u32 + 264, ctx.r25.u8);
	// stw r10,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r10.u32);
	// std r25,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r25.u64);
	// stw r25,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r25.u32);
	// stw r25,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BF238"))) PPC_WEAK_FUNC(sub_820BF238);
PPC_FUNC_IMPL(__imp__sub_820BF238) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BF274"))) PPC_WEAK_FUNC(sub_820BF274);
PPC_FUNC_IMPL(__imp__sub_820BF274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF278"))) PPC_WEAK_FUNC(sub_820BF278);
PPC_FUNC_IMPL(__imp__sub_820BF278) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r6,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// stw r7,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BF2B4"))) PPC_WEAK_FUNC(sub_820BF2B4);
PPC_FUNC_IMPL(__imp__sub_820BF2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF2B8"))) PPC_WEAK_FUNC(sub_820BF2B8);
PPC_FUNC_IMPL(__imp__sub_820BF2B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BF2D4"))) PPC_WEAK_FUNC(sub_820BF2D4);
PPC_FUNC_IMPL(__imp__sub_820BF2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF2D8"))) PPC_WEAK_FUNC(sub_820BF2D8);
PPC_FUNC_IMPL(__imp__sub_820BF2D8) {
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
	// rlwinm r11,r6,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820bf30c
	if (!ctx.cr6.eq) goto loc_820BF30C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_820BF30C:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820bf3f8
	if (!ctx.cr6.eq) goto loc_820BF3F8;
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// and r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 & ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820bf3f8
	if (ctx.cr6.eq) goto loc_820BF3F8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x820bf348
	if (!ctx.cr6.gt) goto loc_820BF348;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x820bf3f8
	goto loc_820BF3F8;
loc_820BF348:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x820bf3cc
	if (ctx.cr6.lt) goto loc_820BF3CC;
	// beq cr6,0x820bf3c0
	if (ctx.cr6.eq) goto loc_820BF3C0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x820bf3e0
	if (!ctx.cr6.lt) goto loc_820BF3E0;
	// rlwinm r10,r6,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820bf3e0
	if (!ctx.cr6.eq) goto loc_820BF3E0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820bf3a8
	if (ctx.cr6.eq) goto loc_820BF3A8;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_820BF388:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x820bf3a8
	if (!ctx.cr0.eq) goto loc_820BF3A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820bf388
	if (!ctx.cr6.eq) goto loc_820BF388;
loc_820BF3A8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820bf3e0
	if (!ctx.cr6.eq) goto loc_820BF3E0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// b 0x820bf3e0
	goto loc_820BF3E0;
loc_820BF3C0:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x820bf3d8
	goto loc_820BF3D8;
loc_820BF3CC:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_820BF3D8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x820BF3E0;
	sub_8259D3A0(ctx, base);
loc_820BF3E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
loc_820BF3F8:
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

__attribute__((alias("__imp__sub_820BF410"))) PPC_WEAK_FUNC(sub_820BF410);
PPC_FUNC_IMPL(__imp__sub_820BF410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfd f11,-4840(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-1600(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1600);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lfs f10,-6852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6852);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f10,28092(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28092);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f10,28088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28088);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f9,28084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28084);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fsel f8,f7,f13,f12
	ctx.f8.f64 = ctx.f7.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsel f12,f6,f11,f10
	ctx.f12.f64 = ctx.f6.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// fsel f10,f5,f11,f9
	ctx.f10.f64 = ctx.f5.f64 >= 0.0 ? ctx.f11.f64 : ctx.f9.f64;
	// fsel f12,f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fsel f10,f10,f10,f0
	ctx.f10.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// fadds f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// fmuls f9,f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// bge cr6,0x820bf498
	if (!ctx.cr6.lt) goto loc_820BF498;
	// fadds f10,f9,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// b 0x820bf49c
	goto loc_820BF49C;
loc_820BF498:
	// fadds f10,f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
loc_820BF49C:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lfs f12,28080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28080);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f10,28076(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28076);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fsubs f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsel f12,f4,f11,f12
	ctx.f12.f64 = ctx.f4.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fsel f12,f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsel f13,f3,f13,f10
	ctx.f13.f64 = ctx.f3.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fsel f2,f13,f13,f0
	ctx.f2.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f2,0(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820BF4DC"))) PPC_WEAK_FUNC(sub_820BF4DC);
PPC_FUNC_IMPL(__imp__sub_820BF4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BF4E0"))) PPC_WEAK_FUNC(sub_820BF4E0);
PPC_FUNC_IMPL(__imp__sub_820BF4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac0
	ctx.lr = 0x820BF4E8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8259bb78
	ctx.lr = 0x820BF4F0;
	__savefpr_16(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r16,r11,28544
	ctx.r16.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// ori r10,r11,32132
	ctx.r10.u64 = ctx.r11.u64 | 32132;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwzx r19,r16,r10
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r10.u32);
	// lwz r7,44(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r25,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r25.u32);
	// lwz r30,60(r19)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r19.u32 + 60);
	// lwz r14,12(r7)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,432(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 432);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820BF544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820bfe70
	if (ctx.cr6.eq) goto loc_820BFE70;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r31,r11,-1520
	ctx.r31.s64 = ctx.r11.s64 + -1520;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d300
	ctx.lr = 0x820BF568;
	sub_8259D300(ctx, base);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,-14704
	ctx.r5.s64 = ctx.r10.s64 + -14704;
	// addi r4,r11,3344
	ctx.r4.s64 = ctx.r11.s64 + 3344;
	// addi r3,r25,640
	ctx.r3.s64 = ctx.r25.s64 + 640;
	// bl 0x8234bd58
	ctx.lr = 0x820BF588;
	sub_8234BD58(ctx, base);
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r3,60(r25)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r25.u32 + 60);
	// addi r11,r11,32208
	ctx.r11.s64 = ctx.r11.s64 + 32208;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
	// lfs f21,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f21.f64 = double(temp.f32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r27,r11,-26320
	ctx.r27.s64 = ctx.r11.s64 + -26320;
	// beq cr6,0x820bfa50
	if (ctx.cr6.eq) goto loc_820BFA50;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// addi r11,r11,16472
	ctx.r11.s64 = ctx.r11.s64 + 16472;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r29,r11,5296
	ctx.r29.s64 = ctx.r11.s64 + 5296;
	// b 0x820bf5f0
	goto loc_820BF5F0;
loc_820BF5EC:
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_820BF5F0:
	// lwz r11,80(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 80);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lfs f0,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fmuls f31,f0,f0
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f30,f13,f13
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// beq cr6,0x820bfa04
	if (ctx.cr6.eq) goto loc_820BFA04;
	// lhz r7,68(r22)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r22.u32 + 68);
	// lwz r9,60(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 60);
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lwz r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// add r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r4,79(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 79);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// add r21,r11,r10
	ctx.r21.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x820bf658
	if (ctx.cr6.eq) goto loc_820BF658;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// b 0x820bf65c
	goto loc_820BF65C;
loc_820BF658:
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
loc_820BF65C:
	// extsh r18,r8
	ctx.r18.s64 = ctx.r8.s16;
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
	// stw r18,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
loc_820BF668:
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// cmplwi cr6,r17,1
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 1, ctx.xer);
	// blt cr6,0x820bf6d8
	if (ctx.cr6.lt) goto loc_820BF6D8;
	// cmplwi cr6,r17,3
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 3, ctx.xer);
	// blt cr6,0x820bf688
	if (ctx.cr6.lt) goto loc_820BF688;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// b 0x820bf704
	goto loc_820BF704;
loc_820BF688:
	// lhz r10,76(r22)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r22.u32 + 76);
	// rlwinm r8,r10,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820bf6a8
	if (ctx.cr6.eq) goto loc_820BF6A8;
	// lwz r11,52(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 52);
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r26,r11,52
	ctx.r26.s64 = ctx.r11.s64 + 52;
	// b 0x820bf6b0
	goto loc_820BF6B0;
loc_820BF6A8:
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_820BF6B0:
	// lwz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x822d4e40
	ctx.lr = 0x820BF6C0;
	sub_822D4E40(ctx, base);
	// bl 0x822d4e08
	ctx.lr = 0x820BF6C4;
	sub_822D4E08(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820bf700
	if (ctx.cr6.eq) goto loc_820BF700;
	// lwz r24,52(r22)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r22.u32 + 52);
	// b 0x820bf704
	goto loc_820BF704;
loc_820BF6D8:
	// lhz r6,74(r22)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r22.u32 + 74);
	// rlwinm r4,r6,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x820bf6f8
	if (ctx.cr6.eq) goto loc_820BF6F8;
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r26,r11,52
	ctx.r26.s64 = ctx.r11.s64 + 52;
	// b 0x820bf700
	goto loc_820BF700;
loc_820BF6F8:
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_820BF700:
	// lwz r24,48(r22)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
loc_820BF704:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x820bf8e8
	if (!ctx.cr6.gt) goto loc_820BF8E8;
	// lwz r25,120(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_820BF714:
	// lwz r28,0(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lbz r3,67(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 67);
	// cmplw cr6,r3,r17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x820bf8cc
	if (!ctx.cr6.eq) goto loc_820BF8CC;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// blt cr6,0x820bf7e8
	if (ctx.cr6.lt) goto loc_820BF7E8;
	// addi r30,r22,16
	ctx.r30.s64 = ctx.r22.s64 + 16;
	// fmr f5,f21
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f21.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f4,f21
	ctx.f4.f64 = ctx.f21.f64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r20,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r20.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82166278
	ctx.lr = 0x820BF768;
	sub_82166278(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82174b48
	ctx.lr = 0x820BF780;
	sub_82174B48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8212bb98
	ctx.lr = 0x820BF788;
	sub_8212BB98(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820bf7e4
	if (ctx.cr6.eq) goto loc_820BF7E4;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f5,f21
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f21.f64;
	// li r9,2
	ctx.r9.s64 = 2;
	// fmr f4,f21
	ctx.f4.f64 = ctx.f21.f64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r20,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r20.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82166278
	ctx.lr = 0x820BF7C4;
	sub_82166278(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82174b48
	ctx.lr = 0x820BF7DC;
	sub_82174B48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8212bb98
	ctx.lr = 0x820BF7E4;
	sub_8212BB98(ctx, base);
loc_820BF7E4:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_820BF7E8:
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// ori r9,r10,21232
	ctx.r9.u64 = ctx.r10.u64 | 21232;
	// lhzx r8,r16,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r16.u32 + ctx.r9.u32);
	// cmplw cr6,r15,r8
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x820bf814
	if (ctx.cr6.lt) goto loc_820BF814;
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r6,r7,21234
	ctx.r6.u64 = ctx.r7.u64 | 21234;
	// lhzx r5,r16,r6
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r16.u32 + ctx.r6.u32);
	// cmplw cr6,r15,r5
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x820bf818
	if (!ctx.cr6.gt) goto loc_820BF818;
loc_820BF814:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_820BF818:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820bf85c
	if (ctx.cr6.eq) goto loc_820BF85C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addis r10,r16,34
	ctx.r10.s64 = ctx.r16.s64 + 2228224;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// addi r10,r10,13168
	ctx.r10.s64 = ctx.r10.s64 + 13168;
	// li r5,64
	ctx.r5.s64 = 64;
	// lhz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 64);
	// rotlwi r11,r9,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ae948
	ctx.lr = 0x820BF850;
	sub_825AE948(ctx, base);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r8,24
	ctx.r31.u64 = ctx.r8.u32 & 0xFF;
	// b 0x820bf8cc
	goto loc_820BF8CC;
loc_820BF85C:
	// addis r11,r16,34
	ctx.r11.s64 = ctx.r16.s64 + 2228224;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r11,-8768
	ctx.r3.s64 = ctx.r11.s64 + -8768;
	// bl 0x820a5f60
	ctx.lr = 0x820BF86C;
	sub_820A5F60(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// li r5,64
	ctx.r5.s64 = 64;
	// beq cr6,0x820bf8ac
	if (ctx.cr6.eq) goto loc_820BF8AC;
	// lhz r6,64(r28)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + 64);
	// addis r10,r16,34
	ctx.r10.s64 = ctx.r16.s64 + 2228224;
	// rotlwi r11,r6,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 6);
	// addi r10,r10,-688
	ctx.r10.s64 = ctx.r10.s64 + -688;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ae948
	ctx.lr = 0x820BF8A0;
	sub_825AE948(ctx, base);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r5,24
	ctx.r31.u64 = ctx.r5.u32 & 0xFF;
	// b 0x820bf8cc
	goto loc_820BF8CC;
loc_820BF8AC:
	// lhz r4,64(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 64);
	// rotlwi r11,r4,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 6);
	// add r4,r11,r14
	ctx.r4.u64 = ctx.r11.u64 + ctx.r14.u64;
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x825ae948
	ctx.lr = 0x820BF8C4;
	sub_825AE948(ctx, base);
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
loc_820BF8CC:
	// addi r18,r18,-1
	ctx.r18.s64 = ctx.r18.s64 + -1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x820bf714
	if (!ctx.cr6.eq) goto loc_820BF714;
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r18,140(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r25,532(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
loc_820BF8E8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf9a8
	if (ctx.cr6.eq) goto loc_820BF9A8;
	// addi r30,r22,16
	ctx.r30.s64 = ctx.r22.s64 + 16;
	// fmr f5,f21
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f21.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f4,f21
	ctx.f4.f64 = ctx.f21.f64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r20,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r20.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82166278
	ctx.lr = 0x820BF92C;
	sub_82166278(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82174b48
	ctx.lr = 0x820BF944;
	sub_82174B48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8212bb98
	ctx.lr = 0x820BF94C;
	sub_8212BB98(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820bf9a8
	if (ctx.cr6.eq) goto loc_820BF9A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f5,f21
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f21.f64;
	// li r9,2
	ctx.r9.s64 = 2;
	// fmr f4,f21
	ctx.f4.f64 = ctx.f21.f64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r20,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r20.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82166278
	ctx.lr = 0x820BF988;
	sub_82166278(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82174b48
	ctx.lr = 0x820BF9A0;
	sub_82174B48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8212bb98
	ctx.lr = 0x820BF9A8;
	sub_8212BB98(ctx, base);
loc_820BF9A8:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// cmplwi cr6,r17,3
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 3, ctx.xer);
	// blt cr6,0x820bf668
	if (ctx.cr6.lt) goto loc_820BF668;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x820bfa04
	if (!ctx.cr6.gt) goto loc_820BFA04;
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_820BF9C4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820bf9f8
	if (ctx.cr6.eq) goto loc_820BF9F8;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lhz r4,64(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 64);
	// rotlwi r11,r4,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 6);
	// add r4,r11,r14
	ctx.r4.u64 = ctx.r11.u64 + ctx.r14.u64;
	// bl 0x820b0d40
	ctx.lr = 0x820BF9F8;
	sub_820B0D40(ctx, base);
loc_820BF9F8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r18
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x820bf9c4
	if (ctx.cr6.lt) goto loc_820BF9C4;
loc_820BFA04:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r9,r28,192
	ctx.r9.s64 = ctx.r28.s64 + 192;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r7,r8,6000
	ctx.r7.s64 = ctx.r8.s64 + 6000;
	// addi r5,r6,80
	ctx.r5.s64 = ctx.r6.s64 + 80;
	// lbz r3,60(r25)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r25.u32 + 60);
	// addi r11,r4,1500
	ctx.r11.s64 = ctx.r4.s64 + 1500;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r22,r22,80
	ctx.r22.s64 = ctx.r22.s64 + 80;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// cmpw cr6,r15,r3
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r3.s32, ctx.xer);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// blt cr6,0x820bf5ec
	if (ctx.cr6.lt) goto loc_820BF5EC;
loc_820BFA50:
	// addis r21,r25,1
	ctx.r21.s64 = ctx.r25.s64 + 65536;
	// addi r21,r21,-25724
	ctx.r21.s64 = ctx.r21.s64 + -25724;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bfe54
	if (ctx.cr6.eq) goto loc_820BFE54;
	// addis r26,r25,1
	ctx.r26.s64 = ctx.r25.s64 + 65536;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// addi r26,r26,-25980
	ctx.r26.s64 = ctx.r26.s64 + -25980;
	// lis r24,-32256
	ctx.r24.s64 = -2113929216;
loc_820BFA74:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x820bfe3c
	if (!ctx.cr6.gt) goto loc_820BFE3C;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
loc_820BFA90:
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// ori r5,r6,5460
	ctx.r5.u64 = ctx.r6.u64 | 5460;
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lhzx r3,r16,r5
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r16.u32 + ctx.r5.u32);
	// lbz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x820bfac0
	if (!ctx.cr6.lt) goto loc_820BFAC0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820BFAC0:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820bfe20
	if (ctx.cr6.eq) goto loc_820BFE20;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820bfe20
	if (!ctx.cr6.eq) goto loc_820BFE20;
	// rlwinm r6,r11,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820bfe20
	if (!ctx.cr6.eq) goto loc_820BFE20;
	// lwz r11,128(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 128);
	// lfs f11,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f10
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f27,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f1,f13,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f26,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f27,f11,f27
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f26,f26,f11
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f11.f64));
	// lfs f25,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f11,f25,f11
	ctx.f11.f64 = double(float(ctx.f25.f64 * ctx.f11.f64));
	// lfs f24,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f25,f24,f9
	ctx.f25.f64 = double(float(ctx.f24.f64 * ctx.f9.f64));
	// lfs f22,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f24,f23,f9
	ctx.f24.f64 = double(float(ctx.f23.f64 * ctx.f9.f64));
	// fmuls f31,f0,f8
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f23,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f30,f13,f8
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f20,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f6,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f9,f22,f9
	ctx.f9.f64 = double(float(ctx.f22.f64 * ctx.f9.f64));
	// lfs f22,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f23,f23,f7
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f7.f64));
	// lfs f19,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f22,f22,f7
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f7.f64));
	// lfs f18,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f7,f20,f7
	ctx.f7.f64 = double(float(ctx.f20.f64 * ctx.f7.f64));
	// lfs f20,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f20.f64 = double(temp.f32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f5,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f10,f19,f6
	ctx.f10.f64 = double(float(ctx.f19.f64 * ctx.f6.f64));
	// lfs f4,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fadds f2,f2,f27
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f27.f64));
	// lfs f16,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f16.f64 = double(temp.f32);
	// fmr f17,f19
	ctx.f17.f64 = ctx.f19.f64;
	// lfs f3,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f27,f20,f6
	ctx.f27.f64 = double(float(ctx.f20.f64 * ctx.f6.f64));
	// fmr f19,f20
	ctx.f19.f64 = ctx.f20.f64;
	// fadds f1,f1,f26
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f26.f64));
	// lfs f26,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f26.f64 = double(temp.f32);
	// fmr f20,f18
	ctx.f20.f64 = ctx.f18.f64;
	// fmuls f6,f18,f6
	ctx.f6.f64 = double(float(ctx.f18.f64 * ctx.f6.f64));
	// lfs f18,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f18.f64 = double(temp.f32);
	// fadds f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fadds f31,f31,f25
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f25.f64));
	// fadds f30,f30,f24
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f24.f64));
	// fmuls f8,f26,f5
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f5.f64));
	// fmuls f29,f0,f4
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f25,f18,f5
	ctx.f25.f64 = double(float(ctx.f18.f64 * ctx.f5.f64));
	// fmuls f28,f13,f4
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f4,f12,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f5,f16,f5
	ctx.f5.f64 = double(float(ctx.f16.f64 * ctx.f5.f64));
	// fmuls f26,f19,f3
	ctx.f26.f64 = double(float(ctx.f19.f64 * ctx.f3.f64));
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// lfs f11,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fadds f31,f31,f10
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f10.f64));
	// lfs f10,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// fadds f30,f30,f27
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f27.f64));
	// fmuls f27,f17,f3
	ctx.f27.f64 = double(float(ctx.f17.f64 * ctx.f3.f64));
	// fadds f8,f29,f8
	ctx.f8.f64 = double(float(ctx.f29.f64 + ctx.f8.f64));
	// fmuls f3,f20,f3
	ctx.f3.f64 = double(float(ctx.f20.f64 * ctx.f3.f64));
	// fadds f29,f28,f25
	ctx.f29.f64 = double(float(ctx.f28.f64 + ctx.f25.f64));
	// fadds f6,f9,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// lfs f9,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// fadds f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fadds f2,f2,f23
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f23.f64));
	// fadds f1,f1,f22
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f22.f64));
	// fadds f8,f8,f27
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f27.f64));
	// fadds f4,f29,f26
	ctx.f4.f64 = double(float(ctx.f29.f64 + ctx.f26.f64));
	// fmr f29,f18
	ctx.f29.f64 = ctx.f18.f64;
	// fadds f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmr f28,f16
	ctx.f28.f64 = ctx.f16.f64;
	// lfs f25,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f3,f11,f3
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// lfs f24,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f29,f29,f11
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmr f27,f17
	ctx.f27.f64 = ctx.f17.f64;
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmr f26,f20
	ctx.f26.f64 = ctx.f20.f64;
	// fmuls f11,f28,f11
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f11.f64));
	// fmr f28,f19
	ctx.f28.f64 = ctx.f19.f64;
	// fadds f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// fmuls f10,f9,f27
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// lfs f27,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f27.f64 = double(temp.f32);
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// stfs f2,160(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f7,168(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f30,180(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f6,184(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmuls f28,f28,f9
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f9.f64));
	// stfs f8,192(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fmuls f9,f26,f9
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f9.f64));
	// stfs f4,196(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f5,200(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lfs f0,25556(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fadds f13,f24,f13
	ctx.f13.f64 = double(float(ctx.f24.f64 + ctx.f13.f64));
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fadds f12,f27,f12
	ctx.f12.f64 = double(float(ctx.f27.f64 + ctx.f12.f64));
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lbz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// lwz r10,60(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 60);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r31,r4,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lhz r3,74(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 74);
	// lhz r8,68(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 68);
	// rlwinm r9,r3,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// bne cr6,0x820bfd0c
	if (!ctx.cr6.eq) goto loc_820BFD0C;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
loc_820BFD0C:
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,80(r19)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r19.u32 + 80);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lwz r10,60(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 60);
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r6,8(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f5,f21
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f21.f64;
	// rlwinm r30,r5,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// fmr f4,f21
	ctx.f4.f64 = ctx.f21.f64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stb r20,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r20.u8);
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r7,16
	ctx.r5.s64 = ctx.r7.s64 + 16;
	// lwz r4,48(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
	// lfs f0,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f0
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f1,f13,f13
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// bl 0x82166278
	ctx.lr = 0x820BFD74;
	sub_82166278(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82174b48
	ctx.lr = 0x820BFD8C;
	sub_82174B48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8212bb98
	ctx.lr = 0x820BFD94;
	sub_8212BB98(ctx, base);
	// lwz r11,60(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 60);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lhz r9,74(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 74);
	// rlwinm r7,r9,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x820bfe20
	if (ctx.cr6.eq) goto loc_820BFE20;
	// lwz r11,80(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 80);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r10,60(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 60);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r7,8(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// fmr f5,f21
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f21.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f4,f21
	ctx.f4.f64 = ctx.f21.f64;
	// add r6,r29,r7
	ctx.r6.u64 = ctx.r29.u64 + ctx.r7.u64;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// addi r5,r8,16
	ctx.r5.s64 = ctx.r8.s64 + 16;
	// stb r20,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r20.u8);
	// lfs f0,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// fmuls f2,f0,f0
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// fmuls f1,f13,f13
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// bl 0x82166278
	ctx.lr = 0x820BFE00;
	sub_82166278(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82174b48
	ctx.lr = 0x820BFE18;
	sub_82174B48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8212bb98
	ctx.lr = 0x820BFE20;
	sub_8212BB98(ctx, base);
loc_820BFE20:
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,80
	ctx.r25.s64 = ctx.r25.s64 + 80;
	// lbz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// cmpw cr6,r23,r4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x820bfa90
	if (ctx.cr6.lt) goto loc_820BFA90;
loc_820BFE3C:
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r22,r3
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x820bfa74
	if (ctx.cr6.lt) goto loc_820BFA74;
	// stw r20,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r20.u32);
loc_820BFE54:
	// lwz r31,136(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8217e8f0
	ctx.lr = 0x820BFE64;
	sub_8217E8F0(ctx, base);
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// addi r3,r11,25312
	ctx.r3.s64 = ctx.r11.s64 + 25312;
	// bl 0x82174040
	ctx.lr = 0x820BFE70;
	sub_82174040(ctx, base);
loc_820BFE70:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8259bbc4
	ctx.lr = 0x820BFE7C;
	__restfpr_16(ctx, base);
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BFE80"))) PPC_WEAK_FUNC(sub_820BFE80);
PPC_FUNC_IMPL(__imp__sub_820BFE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x820BFE88;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r10,r10,28928
	ctx.r10.s64 = ctx.r10.s64 + 28928;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3568
	ctx.r4.s64 = ctx.r11.s64 + 3568;
	// lwz r26,196(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// bl 0x8215a880
	ctx.lr = 0x820BFEB4;
	sub_8215A880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820bff74
	if (ctx.cr6.lt) goto loc_820BFF74;
	// li r7,28
	ctx.r7.s64 = 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8237d790
	ctx.lr = 0x820BFED4;
	sub_8237D790(ctx, base);
	// lhz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 96);
	// li r27,0
	ctx.r27.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820bff74
	if (!ctx.cr6.gt) goto loc_820BFF74;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r11,-26320
	ctx.r25.s64 = ctx.r11.s64 + -26320;
loc_820BFEF8:
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r8,4(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lhzx r7,r29,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r9.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82164800
	ctx.lr = 0x820BFF2C;
	sub_82164800(ctx, base);
	// bl 0x8212bb98
	ctx.lr = 0x820BFF30;
	sub_8212BB98(ctx, base);
	// addi r4,r28,128
	ctx.r4.s64 = ctx.r28.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8237d890
	ctx.lr = 0x820BFF3C;
	sub_8237D890(ctx, base);
	// lhz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 152);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82380a48
	ctx.lr = 0x820BFF58;
	sub_82380A48(ctx, base);
	// lhz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 96);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpw cr6,r27,r4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x820bfef8
	if (ctx.cr6.lt) goto loc_820BFEF8;
loc_820BFF74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820BFF7C"))) PPC_WEAK_FUNC(sub_820BFF7C);
PPC_FUNC_IMPL(__imp__sub_820BFF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820BFF80"))) PPC_WEAK_FUNC(sub_820BFF80);
PPC_FUNC_IMPL(__imp__sub_820BFF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac4
	ctx.lr = 0x820BFF88;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// clrlwi r16,r6,24
	ctx.r16.u64 = ctx.r6.u32 & 0xFF;
	// addi r18,r11,-26320
	ctx.r18.s64 = ctx.r11.s64 + -26320;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// beq cr6,0x820bffb4
	if (ctx.cr6.eq) goto loc_820BFFB4;
	// bl 0x8214e558
	ctx.lr = 0x820BFFB0;
	sub_8214E558(ctx, base);
	// b 0x820bffb8
	goto loc_820BFFB8;
loc_820BFFB4:
	// bl 0x8214e290
	ctx.lr = 0x820BFFB8;
	sub_8214E290(ctx, base);
loc_820BFFB8:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x820bfff0
	if (ctx.cr6.lt) goto loc_820BFFF0;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// beq cr6,0x820bffdc
	if (ctx.cr6.eq) goto loc_820BFFDC;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lhz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// b 0x820c0000
	goto loc_820C0000;
loc_820BFFDC:
	// lbz r7,21(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lbz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// b 0x820c0000
	goto loc_820C0000;
loc_820BFFF0:
	// lwz r6,4(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 20);
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
loc_820C0000:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820c015c
	if (!ctx.cr6.lt) goto loc_820C015C;
	// rlwinm r17,r11,3,0,28
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r15,r11,r10
	ctx.r15.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r23,r11,-16688
	ctx.r23.s64 = ctx.r11.s64 + -16688;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r19,r11,28928
	ctx.r19.s64 = ctx.r11.s64 + 28928;
loc_820C0020:
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// add r22,r11,r17
	ctx.r22.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lhz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820c014c
	if (!ctx.cr6.gt) goto loc_820C014C;
	// li r21,0
	ctx.r21.s64 = 0;
loc_820C0044:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// li r7,28
	ctx.r7.s64 = 28;
	// lwz r26,196(r19)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r19.u32 + 196);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r29,r21,r11
	ctx.r29.u64 = ctx.r21.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r29,64
	ctx.r5.s64 = ctx.r29.s64 + 64;
	// bl 0x8237d790
	ctx.lr = 0x820C0068;
	sub_8237D790(ctx, base);
	// lhz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 96);
	// li r25,0
	ctx.r25.s64 = 0;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x820c0134
	if (!ctx.cr6.gt) goto loc_820C0134;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_820C0084:
	// lwz r8,100(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// lwz r7,4(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhzx r6,r8,r27
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r27.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x820c0118
	if (ctx.cr6.eq) goto loc_820C0118;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8237d890
	ctx.lr = 0x820C00C8;
	sub_8237D890(ctx, base);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// beq cr6,0x820c00e0
	if (ctx.cr6.eq) goto loc_820C00E0;
	// bl 0x82165568
	ctx.lr = 0x820C00DC;
	sub_82165568(ctx, base);
	// b 0x820c00e4
	goto loc_820C00E4;
loc_820C00E0:
	// bl 0x82164800
	ctx.lr = 0x820C00E4;
	sub_82164800(ctx, base);
loc_820C00E4:
	// bl 0x8212bb98
	ctx.lr = 0x820C00E8;
	sub_8212BB98(ctx, base);
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r8,r23,4
	ctx.r8.s64 = ctx.r23.s64 + 4;
	// lhz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 152);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r7,r11,r23
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82380a48
	ctx.lr = 0x820C0118;
	sub_82380A48(ctx, base);
loc_820C0118:
	// lhz r6,96(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 96);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,176
	ctx.r28.s64 = ctx.r28.s64 + 176;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmpw cr6,r25,r5
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820c0084
	if (ctx.cr6.lt) goto loc_820C0084;
loc_820C0134:
	// lhz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r21,r21,112
	ctx.r21.s64 = ctx.r21.s64 + 112;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpw cr6,r20,r3
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x820c0044
	if (ctx.cr6.lt) goto loc_820C0044;
loc_820C014C:
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// addi r17,r17,8
	ctx.r17.s64 = ctx.r17.s64 + 8;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x820c0020
	if (!ctx.cr6.eq) goto loc_820C0020;
loc_820C015C:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82164768
	ctx.lr = 0x820C0164;
	sub_82164768(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb14
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C016C"))) PPC_WEAK_FUNC(sub_820C016C);
PPC_FUNC_IMPL(__imp__sub_820C016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0170"))) PPC_WEAK_FUNC(sub_820C0170);
PPC_FUNC_IMPL(__imp__sub_820C0170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x820C0178;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c0208
	if (ctx.cr6.eq) goto loc_820C0208;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x820c01a8
	if (!ctx.cr6.lt) goto loc_820C01A8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_820C01A8:
	// addi r27,r31,9
	ctx.r27.s64 = ctx.r31.s64 + 9;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x820c0208
	if (!ctx.cr6.lt) goto loc_820C0208;
loc_820C01B4:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rotlwi r11,r31,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// divw r9,r31,r10
	ctx.r9.s32 = ctx.r31.s32 / ctx.r10.s32;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mullw r7,r9,r10
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r29,r7,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r7.s64;
	// andc r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// addi r5,r29,152
	ctx.r5.s64 = ctx.r29.s64 + 152;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r6,-1
	if (ctx.r6.u32 >= 4294967295) __builtin_debugtrap();
	// lwzx r11,r3,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x823272f0
	ctx.lr = 0x820C01F0;
	sub_823272F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c0214
	if (!ctx.cr6.eq) goto loc_820C0214;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x820c01b4
	if (ctx.cr6.lt) goto loc_820C01B4;
loc_820C0208:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_820C0214:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C0220"))) PPC_WEAK_FUNC(sub_820C0220);
PPC_FUNC_IMPL(__imp__sub_820C0220) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c028c
	if (ctx.cr6.eq) goto loc_820C028C;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x820c023c
	if (!ctx.cr6.eq) goto loc_820C023C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C023C:
	// addi r9,r4,152
	ctx.r9.s64 = ctx.r4.s64 + 152;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r3,424
	ctx.r11.s64 = ctx.r3.s64 + 424;
	// lwzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
loc_820C0250:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820c0274
	if (ctx.cr6.eq) goto loc_820C0274;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// blt cr6,0x820c0250
	if (ctx.cr6.lt) goto loc_820C0250;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820C0274:
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r11,r5,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820C028C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0294"))) PPC_WEAK_FUNC(sub_820C0294);
PPC_FUNC_IMPL(__imp__sub_820C0294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0298"))) PPC_WEAK_FUNC(sub_820C0298);
PPC_FUNC_IMPL(__imp__sub_820C0298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x820C02A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r11,680(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 680);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r11,449(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 449);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820c038c
	if (ctx.cr6.lt) goto loc_820C038C;
	// addi r8,r4,106
	ctx.r8.s64 = ctx.r4.s64 + 106;
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// lhz r7,112(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 112);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x820c038c
	if (!ctx.cr6.lt) goto loc_820C038C;
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// mulli r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 * 176;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820c0320
	if (!ctx.cr6.eq) goto loc_820C0320;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// addi r4,r11,3568
	ctx.r4.s64 = ctx.r11.s64 + 3568;
	// bl 0x8215a9a0
	ctx.lr = 0x820C0318;
	sub_8215A9A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820c038c
	if (ctx.cr6.lt) goto loc_820C038C;
loc_820C0320:
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r7,28
	ctx.r7.s64 = 28;
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,196(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// bl 0x8237d790
	ctx.lr = 0x820C0348;
	sub_8237D790(ctx, base);
	// addi r4,r30,128
	ctx.r4.s64 = ctx.r30.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237d890
	ctx.lr = 0x820C0354;
	sub_8237D890(ctx, base);
	// lwz r4,156(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lhz r9,152(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 152);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-16688
	ctx.r11.s64 = ctx.r11.s64 + -16688;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82380a48
	ctx.lr = 0x820C038C;
	sub_82380A48(ctx, base);
loc_820C038C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C0394"))) PPC_WEAK_FUNC(sub_820C0394);
PPC_FUNC_IMPL(__imp__sub_820C0394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0398"))) PPC_WEAK_FUNC(sub_820C0398);
PPC_FUNC_IMPL(__imp__sub_820C0398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bacc
	ctx.lr = 0x820C03A0;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// lbz r10,92(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r28,196(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// beq cr6,0x820c05e4
	if (ctx.cr6.eq) goto loc_820C05E4;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r18,r11,12656
	ctx.r18.s64 = ctx.r11.s64 + 12656;
	// lbz r9,87(r18)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r18.u32 + 87);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820c05e4
	if (ctx.cr6.eq) goto loc_820C05E4;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,-32560
	ctx.r11.s64 = ctx.r11.s64 + -32560;
	// lbz r8,2599(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2599);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x820c05e4
	if (ctx.cr6.eq) goto loc_820C05E4;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r17,r11,-26320
	ctx.r17.s64 = ctx.r11.s64 + -26320;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8214e290
	ctx.lr = 0x820C03F8;
	sub_8214E290(ctx, base);
	// lwz r11,680(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 680);
	// lbz r7,130(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 130);
	// lbz r6,129(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 129);
	// extsb r19,r7
	ctx.r19.s64 = ctx.r7.s8;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpw cr6,r19,r5
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x820c0554
	if (!ctx.cr6.lt) goto loc_820C0554;
	// addi r10,r19,9
	ctx.r10.s64 = ctx.r19.s64 + 9;
	// addi r4,r19,74
	ctx.r4.s64 = ctx.r19.s64 + 74;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r21,r25,352
	ctx.r21.s64 = ctx.r25.s64 + 352;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r20,r25,128
	ctx.r20.s64 = ctx.r25.s64 + 128;
	// addi r26,r10,-16688
	ctx.r26.s64 = ctx.r10.s64 + -16688;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// rlwinm r24,r4,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r3,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r22,r10,28544
	ctx.r22.s64 = ctx.r10.s64 + 28544;
loc_820C0444:
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// lhzx r9,r24,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r24.u32 + ctx.r11.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// ori r7,r8,32132
	ctx.r7.u64 = ctx.r8.u64 | 32132;
	// lwzx r11,r22,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r7.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82164800
	ctx.lr = 0x820C0474;
	sub_82164800(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_820C0480:
	// lwz r11,680(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 680);
	// add r5,r23,r11
	ctx.r5.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lbzx r11,r5,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r29.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820c0520
	if (ctx.cr6.lt) goto loc_820C0520;
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c0520
	if (ctx.cr6.eq) goto loc_820C0520;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r10,r11,176
	ctx.r10.s64 = ctx.r11.s64 * 176;
	// addi r4,r18,3568
	ctx.r4.s64 = ctx.r18.s64 + 3568;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215a9a0
	ctx.lr = 0x820C04C0;
	sub_8215A9A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820c0520
	if (ctx.cr6.lt) goto loc_820C0520;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,28
	ctx.r7.s64 = 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237d790
	ctx.lr = 0x820C04E4;
	sub_8237D790(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8237d890
	ctx.lr = 0x820C04F0;
	sub_8237D890(ctx, base);
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r8,r26,4
	ctx.r8.s64 = ctx.r26.s64 + 4;
	// lhz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 152);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r7,r11,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82380a48
	ctx.lr = 0x820C0520;
	sub_82380A48(ctx, base);
loc_820C0520:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,17
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 17, ctx.xer);
	// blt cr6,0x820c0480
	if (ctx.cr6.lt) goto loc_820C0480;
	// lwz r11,680(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 680);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// addi r23,r23,48
	ctx.r23.s64 = ctx.r23.s64 + 48;
	// lbz r6,129(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 129);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpw cr6,r19,r5
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820c0444
	if (ctx.cr6.lt) goto loc_820C0444;
loc_820C0554:
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// lbz r5,87(r18)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r18.u32 + 87);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// addi r11,r11,32208
	ctx.r11.s64 = ctx.r11.s64 + 32208;
	// ori r3,r4,25412
	ctx.r3.u64 = ctx.r4.u64 | 25412;
	// addi r7,r25,424
	ctx.r7.s64 = ctx.r25.s64 + 424;
	// addi r8,r25,128
	ctx.r8.s64 = ctx.r25.s64 + 128;
	// li r6,17
	ctx.r6.s64 = 17;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
loc_820C0578:
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820c05c8
	if (ctx.cr6.eq) goto loc_820C05C8;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820c05c8
	if (ctx.cr6.eq) goto loc_820C05C8;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820c05c8
	if (ctx.cr6.eq) goto loc_820C05C8;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 458752;
	// addi r10,r10,25344
	ctx.r10.s64 = ctx.r10.s64 + 25344;
	// stwx r9,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u32);
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// ori r4,r9,25412
	ctx.r4.u64 = ctx.r9.u64 | 25412;
	// ori r9,r3,25412
	ctx.r9.u64 = ctx.r3.u64 | 25412;
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_820C05C8:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820c0578
	if (!ctx.cr6.eq) goto loc_820C0578;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82164768
	ctx.lr = 0x820C05E4;
	sub_82164768(ctx, base);
loc_820C05E4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C05EC"))) PPC_WEAK_FUNC(sub_820C05EC);
PPC_FUNC_IMPL(__imp__sub_820C05EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C05F0"))) PPC_WEAK_FUNC(sub_820C05F0);
PPC_FUNC_IMPL(__imp__sub_820C05F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac0
	ctx.lr = 0x820C05F8;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// ori r8,r9,32132
	ctx.r8.u64 = ctx.r9.u64 | 32132;
	// lbz r10,92(r16)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r16.u32 + 92);
	// lwz r30,196(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r14,r11,28544
	ctx.r14.s64 = ctx.r11.s64 + 28544;
	// lwzx r26,r14,r8
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r14.u32 + ctx.r8.u32);
	// beq cr6,0x820c0acc
	if (ctx.cr6.eq) goto loc_820C0ACC;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,-32560
	ctx.r11.s64 = ctx.r11.s64 + -32560;
	// lbz r7,2599(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2599);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x820c0acc
	if (ctx.cr6.eq) goto loc_820C0ACC;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r27,r11,-26320
	ctx.r27.s64 = ctx.r11.s64 + -26320;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8214e290
	ctx.lr = 0x820C0650;
	sub_8214E290(ctx, base);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r15,r11,12656
	ctx.r15.s64 = ctx.r11.s64 + 12656;
	// lbz r6,89(r15)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r15.u32 + 89);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820c08fc
	if (ctx.cr6.eq) goto loc_820C08FC;
	// lhz r5,52(r26)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r26.u32 + 52);
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x820c08b4
	if (!ctx.cr6.gt) goto loc_820C08B4;
	// addi r18,r16,496
	ctx.r18.s64 = ctx.r16.s64 + 496;
	// addi r17,r16,128
	ctx.r17.s64 = ctx.r16.s64 + 128;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
loc_820C068C:
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// li r23,1
	ctx.r23.s64 = 1;
	// add r31,r11,r20
	ctx.r31.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lbz r3,194(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 194);
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820c06ac
	if (!ctx.cr6.eq) goto loc_820C06AC;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
loc_820C06AC:
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
	// li r21,17
	ctx.r21.s64 = 17;
loc_820C06B8:
	// lbz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// extsb r29,r9
	ctx.r29.s64 = ctx.r9.s8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x820c0884
	if (ctx.cr6.eq) goto loc_820C0884;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbzx r6,r7,r25
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r25.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820c0884
	if (ctx.cr6.eq) goto loc_820C0884;
	// lwz r11,500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C06F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,504(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C070C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,508(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820C0724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r8,188(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 188);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lfs f5,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f5.f64 = double(temp.f32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// lwz r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f4,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f3,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lfs f2,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r10,195(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 195);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r19,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r19.u8);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x82166278
	ctx.lr = 0x820C0770;
	sub_82166278(ctx, base);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// beq cr6,0x820c0780
	if (ctx.cr6.eq) goto loc_820C0780;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
loc_820C0780:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r6,r6,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r24.u32);
	// lbzx r4,r25,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r5.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82174b48
	ctx.lr = 0x820C07A0;
	sub_82174B48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8212bb98
	ctx.lr = 0x820C07A8;
	sub_8212BB98(ctx, base);
	// lbz r4,194(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 194);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820c0884
	if (ctx.cr6.eq) goto loc_820C0884;
	// lwz r10,500(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C07D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,504(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820C07E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,508(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820C0800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r7,190(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 190);
	// lwz r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r9,2
	ctx.r9.s64 = 2;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lfs f5,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f5.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f4,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f3,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// lbz r10,195(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 195);
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lfs f2,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r19,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r19.u8);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x82166278
	ctx.lr = 0x820C084C;
	sub_82166278(ctx, base);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// beq cr6,0x820c085c
	if (ctx.cr6.eq) goto loc_820C085C;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
loc_820C085C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r6,r5,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r24.u32);
	// lbzx r4,r4,r25
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82174b48
	ctx.lr = 0x820C087C;
	sub_82174B48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8212bb98
	ctx.lr = 0x820C0884;
	sub_8212BB98(ctx, base);
loc_820C0884:
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
	// addi r22,r22,8
	ctx.r22.s64 = ctx.r22.s64 + 8;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x820c06b8
	if (!ctx.cr6.eq) goto loc_820C06B8;
	// lhz r3,52(r26)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r26.u32 + 52);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r20,r20,224
	ctx.r20.s64 = ctx.r20.s64 + 224;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820c068c
	if (ctx.cr6.lt) goto loc_820C068C;
loc_820C08B4:
	// lwz r10,500(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C08CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,504(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820C08E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,508(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820C08FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820C08FC:
	// lwz r11,680(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 680);
	// lbz r7,129(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 129);
	// lbz r6,128(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 128);
	// extsb r20,r7
	ctx.r20.s64 = ctx.r7.s8;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpw cr6,r20,r5
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x820c0a50
	if (!ctx.cr6.lt) goto loc_820C0A50;
	// addi r10,r20,9
	ctx.r10.s64 = ctx.r20.s64 + 9;
	// addi r4,r20,74
	ctx.r4.s64 = ctx.r20.s64 + 74;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r22,r16,352
	ctx.r22.s64 = ctx.r16.s64 + 352;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r21,r16,128
	ctx.r21.s64 = ctx.r16.s64 + 128;
	// rlwinm r24,r4,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r3,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r25,r10,-16688
	ctx.r25.s64 = ctx.r10.s64 + -16688;
loc_820C0940:
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// lhzx r9,r11,r24
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r24.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r7,r8,32132
	ctx.r7.u64 = ctx.r8.u64 | 32132;
	// lwzx r11,r14,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + ctx.r7.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82164800
	ctx.lr = 0x820C0970;
	sub_82164800(ctx, base);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
loc_820C097C:
	// lwz r11,680(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 680);
	// add r5,r23,r11
	ctx.r5.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lbzx r11,r5,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r28.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820c0a1c
	if (ctx.cr6.lt) goto loc_820C0A1C;
	// lbz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c0a1c
	if (ctx.cr6.eq) goto loc_820C0A1C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 * 176;
	// addi r4,r15,3568
	ctx.r4.s64 = ctx.r15.s64 + 3568;
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215a9a0
	ctx.lr = 0x820C09BC;
	sub_8215A9A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820c0a1c
	if (ctx.cr6.lt) goto loc_820C0A1C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,28
	ctx.r7.s64 = 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d790
	ctx.lr = 0x820C09E0;
	sub_8237D790(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237d890
	ctx.lr = 0x820C09EC;
	sub_8237D890(ctx, base);
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r8,r25,4
	ctx.r8.s64 = ctx.r25.s64 + 4;
	// lhz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 152);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r7,r11,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82380a48
	ctx.lr = 0x820C0A1C;
	sub_82380A48(ctx, base);
loc_820C0A1C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r28,17
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 17, ctx.xer);
	// blt cr6,0x820c097c
	if (ctx.cr6.lt) goto loc_820C097C;
	// lwz r11,680(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 680);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// addi r23,r23,48
	ctx.r23.s64 = ctx.r23.s64 + 48;
	// lbz r6,128(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 128);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpw cr6,r20,r5
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820c0940
	if (ctx.cr6.lt) goto loc_820C0940;
loc_820C0A50:
	// lbz r4,91(r15)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r15.u32 + 91);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820c0ac4
	if (ctx.cr6.eq) goto loc_820C0AC4;
	// lwz r11,504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,500(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820C0A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,508(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820C0AA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,684(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 684);
	// addis r11,r14,33
	ctx.r11.s64 = ctx.r14.s64 + 2162688;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r3,r11,16944
	ctx.r3.s64 = ctx.r11.s64 + 16944;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// bl 0x820bf4e0
	ctx.lr = 0x820C0AC4;
	sub_820BF4E0(ctx, base);
loc_820C0AC4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82164768
	ctx.lr = 0x820C0ACC;
	sub_82164768(ctx, base);
loc_820C0ACC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C0AD4"))) PPC_WEAK_FUNC(sub_820C0AD4);
PPC_FUNC_IMPL(__imp__sub_820C0AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0AD8"))) PPC_WEAK_FUNC(sub_820C0AD8);
PPC_FUNC_IMPL(__imp__sub_820C0AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x820C0AE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c0c24
	if (ctx.cr6.eq) goto loc_820C0C24;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,32132
	ctx.r9.u64 = ctx.r10.u64 | 32132;
	// lwzx r28,r30,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x82326cc8
	ctx.lr = 0x820C0B0C;
	sub_82326CC8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820c0c24
	if (ctx.cr6.eq) goto loc_820C0C24;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r26,r11,-26320
	ctx.r26.s64 = ctx.r11.s64 + -26320;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8214e290
	ctx.lr = 0x820C0B28;
	sub_8214E290(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,196(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,504(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820C0B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,500(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820C0B64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C0B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,684(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 684);
	// addis r11,r30,34
	ctx.r11.s64 = ctx.r30.s64 + 2228224;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r3,r11,32128
	ctx.r3.s64 = ctx.r11.s64 + 32128;
	// lbz r8,140(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 140);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82325a68
	ctx.lr = 0x820C0BA0;
	sub_82325A68(ctx, base);
	// lwz r11,684(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 684);
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r6,388(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 388);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x820c0c1c
	if (!ctx.cr6.gt) goto loc_820C0C1C;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r25,r10,28380
	ctx.r25.s64 = ctx.r10.s64 + 28380;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r27,r10,8304
	ctx.r27.s64 = ctx.r10.s64 + 8304;
loc_820C0BC8:
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,389(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 389);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0c04
	if (ctx.cr6.eq) goto loc_820C0C04;
	// lbzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c0c04
	if (ctx.cr6.eq) goto loc_820C0C04;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r11,r30,34
	ctx.r11.s64 = ctx.r30.s64 + 2228224;
	// addi r3,r11,32128
	ctx.r3.s64 = ctx.r11.s64 + 32128;
	// bl 0x82325a68
	ctx.lr = 0x820C0C04;
	sub_82325A68(ctx, base);
loc_820C0C04:
	// lwz r11,684(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 684);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r9,388(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 388);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820c0bc8
	if (ctx.cr6.lt) goto loc_820C0BC8;
loc_820C0C1C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82164768
	ctx.lr = 0x820C0C24;
	sub_82164768(ctx, base);
loc_820C0C24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C0C2C"))) PPC_WEAK_FUNC(sub_820C0C2C);
PPC_FUNC_IMPL(__imp__sub_820C0C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0C30"))) PPC_WEAK_FUNC(sub_820C0C30);
PPC_FUNC_IMPL(__imp__sub_820C0C30) {
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
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r31,r11,12656
	ctx.r31.s64 = ctx.r11.s64 + 12656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217ea50
	ctx.lr = 0x820C0C54;
	sub_8217EA50(ctx, base);
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// addi r3,r11,32208
	ctx.r3.s64 = ctx.r11.s64 + 32208;
	// bl 0x820b4bc0
	ctx.lr = 0x820C0C60;
	sub_820B4BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150858
	ctx.lr = 0x820C0C68;
	sub_82150858(ctx, base);
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

__attribute__((alias("__imp__sub_820C0C7C"))) PPC_WEAK_FUNC(sub_820C0C7C);
PPC_FUNC_IMPL(__imp__sub_820C0C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0C80"))) PPC_WEAK_FUNC(sub_820C0C80);
PPC_FUNC_IMPL(__imp__sub_820C0C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r11,18240(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c0c98
	if (ctx.cr6.eq) goto loc_820C0C98;
	// lbz r11,14657(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14657);
	// b 0x820c0c9c
	goto loc_820C0C9C;
loc_820C0C98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C0C9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c0cb0
	if (!ctx.cr6.eq) goto loc_820C0CB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820C0CB0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,14356(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14356);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820c0cd8
	if (!ctx.cr6.lt) goto loc_820C0CD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_820C0CD8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,13696(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13696);
	// lfs f13,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,13500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820c0cfc
	if (ctx.cr6.gt) goto loc_820C0CFC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820C0CFC:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0D0C"))) PPC_WEAK_FUNC(sub_820C0D0C);
PPC_FUNC_IMPL(__imp__sub_820C0D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0D10"))) PPC_WEAK_FUNC(sub_820C0D10);
PPC_FUNC_IMPL(__imp__sub_820C0D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stb r10,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r10.u8);
	// beq cr6,0x820c0d34
	if (ctx.cr6.eq) goto loc_820C0D34;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820c0d34
	if (ctx.cr6.eq) goto loc_820C0D34;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820C0D34:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// lwz r9,13460(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13460);
	// lfs f0,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,15328(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15328);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x820c0d5c
	if (!ctx.cr6.eq) goto loc_820C0D5C;
	// lbz r10,13467(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13467);
	// b 0x820c0d60
	goto loc_820C0D60;
loc_820C0D5C:
	// lbz r10,13466(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13466);
loc_820C0D60:
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c0d94
	if (ctx.cr6.eq) goto loc_820C0D94;
	// lfs f13,13360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13360);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x820c0db4
	if (ctx.cr6.gt) goto loc_820C0DB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r11.u8);
	// blr 
	return;
loc_820C0D94:
	// lfs f11,13364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13364);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x820c0db4
	if (ctx.cr6.lt) goto loc_820C0DB4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C0DB4:
	// stb r11,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C0DBC"))) PPC_WEAK_FUNC(sub_820C0DBC);
PPC_FUNC_IMPL(__imp__sub_820C0DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0DC0"))) PPC_WEAK_FUNC(sub_820C0DC0);
PPC_FUNC_IMPL(__imp__sub_820C0DC0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// ori r9,r10,37004
	ctx.r9.u64 = ctx.r10.u64 | 37004;
	// stw r11,2000(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2000, ctx.r11.u32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820c0ed4
	if (ctx.cr6.eq) goto loc_820C0ED4;
	// lbz r8,401(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 401);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820c0ed4
	if (ctx.cr6.eq) goto loc_820C0ED4;
	// lwz r31,440(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820c0ed4
	if (ctx.cr6.eq) goto loc_820C0ED4;
	// lbz r7,15480(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15480);
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// bl 0x8223d0b0
	ctx.lr = 0x820C0E28;
	sub_8223D0B0(ctx, base);
	// lwz r11,1952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	// lwz r9,18256(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18256);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820c0e60
	if (!ctx.cr6.eq) goto loc_820C0E60;
	// lwz r6,13460(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13460);
	// lwz r5,15328(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 15328);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x820c0e50
	if (!ctx.cr6.eq) goto loc_820C0E50;
	// lbz r10,13467(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13467);
	// b 0x820c0e54
	goto loc_820C0E54;
loc_820C0E50:
	// lbz r10,13466(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13466);
loc_820C0E54:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820c0ed4
	if (!ctx.cr6.eq) goto loc_820C0ED4;
loc_820C0E60:
	// lbz r10,15480(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15480);
	// lwz r8,14552(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14552);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x820c0eb0
	if (ctx.cr6.eq) goto loc_820C0EB0;
	// lbz r6,15480(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15480);
	// lwz r5,14552(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14552);
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x820c0eb0
	if (ctx.cr6.eq) goto loc_820C0EB0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820c0eb0
	if (!ctx.cr6.eq) goto loc_820C0EB0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,188(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-10928
	ctx.r11.s64 = ctx.r11.s64 + -10928;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x820c0ed4
	if (ctx.cr6.lt) goto loc_820C0ED4;
loc_820C0EB0:
	// lbz r3,402(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 402);
	// stw r31,2004(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2004, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c0ecc
	if (ctx.cr6.eq) goto loc_820C0ECC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,2000(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2000, ctx.r11.u32);
	// b 0x820c0ed4
	goto loc_820C0ED4;
loc_820C0ECC:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,2000(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2000, ctx.r10.u32);
loc_820C0ED4:
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

__attribute__((alias("__imp__sub_820C0EEC"))) PPC_WEAK_FUNC(sub_820C0EEC);
PPC_FUNC_IMPL(__imp__sub_820C0EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C0EF0"))) PPC_WEAK_FUNC(sub_820C0EF0);
PPC_FUNC_IMPL(__imp__sub_820C0EF0) {
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
	// lwz r4,1188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// bl 0x820a75d0
	ctx.lr = 0x820C0F0C;
	sub_820A75D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// lis r8,21845
	ctx.r8.s64 = 1431633920;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,1120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1120, temp.u32);
	// ori r7,r8,21846
	ctx.r7.u64 = ctx.r8.u64 | 21846;
	// stfs f0,1124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1124, temp.u32);
	// stfs f0,1128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1128, temp.u32);
	// stfs f0,1136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1136, temp.u32);
	// stfs f0,1140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1140, temp.u32);
	// stfs f0,1144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// lwz r6,1188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// stb r10,1197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1197, ctx.r10.u8);
	// stb r10,1198(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1198, ctx.r10.u8);
	// stfs f13,1156(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1156, temp.u32);
	// stb r9,1196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1196, ctx.r9.u8);
	// stfs f0,1152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// stfs f0,1160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1160, temp.u32);
	// stfs f0,1168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1168, temp.u32);
	// stfs f0,1172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1172, temp.u32);
	// stfs f0,1176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1176, temp.u32);
	// stfs f0,1180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1180, temp.u32);
	// stfs f0,1164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1164, temp.u32);
	// lbz r5,15480(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 15480);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// mulhw r10,r11,r7
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// stb r11,1199(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1199, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_820C0FB0"))) PPC_WEAK_FUNC(sub_820C0FB0);
PPC_FUNC_IMPL(__imp__sub_820C0FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820C0FB8;
	__savegprlr_29(ctx, base);
	// lwz r11,1188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,16060(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16060);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820c0fe4
	if (!ctx.cr6.eq) goto loc_820C0FE4;
	// lwz r10,16056(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16056);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x820c0fe0
	if (ctx.cr6.eq) goto loc_820C0FE0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x820c0fe4
	if (!ctx.cr6.eq) goto loc_820C0FE4;
loc_820C0FE0:
	// lwz r29,16052(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16052);
loc_820C0FE4:
	// li r9,16
	ctx.r9.s64 = 16;
	// lbz r5,1109(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1109);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r6,1110(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1110);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stb r9,1196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1196, ctx.r9.u8);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lfs f8,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r9,298
	ctx.r7.s64 = ctx.r9.s64 + 298;
	// stfs f8,1172(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1172, temp.u32);
	// add r4,r9,r3
	ctx.r4.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stfs f8,1168(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1168, temp.u32);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// lbz r7,340(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 340);
	// lhzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// std r10,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r10.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r4,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r4.u64);
	// lfd f0,-80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f12,-72(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f11,-4808(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4808);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f3,-4800(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4800);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f5,f9,f3
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// bgt cr6,0x820c10d4
	if (ctx.cr6.gt) goto loc_820C10D4;
	// addi r10,r11,298
	ctx.r10.s64 = ctx.r11.s64 + 298;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,340
	ctx.r8.s64 = ctx.r3.s64 + 340;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_820C1080:
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbzx r31,r8,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// std r31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r31.u64);
	// std r4,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r4.u64);
	// lfd f7,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f6,-80(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f4,f7
	ctx.f4.f64 = double(ctx.f7.s64);
	// fcfid f2,f6
	ctx.f2.f64 = double(ctx.f6.s64);
	// frsp f1,f4
	ctx.f1.f64 = double(float(ctx.f4.f64));
	// frsp f13,f2
	ctx.f13.f64 = double(float(ctx.f2.f64));
	// fmuls f0,f1,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f9,f5,f13
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fsel f12,f10,f0,f12
	ctx.f12.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsel f5,f9,f13,f5
	ctx.f5.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// ble cr6,0x820c1080
	if (!ctx.cr6.gt) goto loc_820C1080;
loc_820C10D4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f12.f64;
	// lfs f4,-15120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15120);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f9,f12,f4
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// bge cr6,0x820c10f4
	if (!ctx.cr6.lt) goto loc_820C10F4;
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
loc_820C10F4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x820c1148
	if (!ctx.cr6.gt) goto loc_820C1148;
	// addi r11,r3,340
	ctx.r11.s64 = ctx.r3.s64 + 340;
loc_820C1100:
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// std r8,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r8.u64);
	// lfd f7,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f0,f2,f11
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820c1144
	if (ctx.cr6.lt) goto loc_820C1144;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x820c1130
	if (ctx.cr6.lt) goto loc_820C1130;
	// bso cr6,0x820c1130
	if (ctx.cr6.so) goto loc_820C1130;
	// fsubs f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
loc_820C1130:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f0.f64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x820c1100
	if (ctx.cr6.gt) goto loc_820C1100;
	// b 0x820c1148
	goto loc_820C1148;
loc_820C1144:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_820C1148:
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x820c1194
	if (!ctx.cr6.lt) goto loc_820C1194;
	// addi r8,r3,340
	ctx.r8.s64 = ctx.r3.s64 + 340;
loc_820C115C:
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// std r10,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r10.u64);
	// lfd f1,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// blt cr6,0x820c1190
	if (ctx.cr6.lt) goto loc_820C1190;
	// lbz r7,1110(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1110);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820c115c
	if (ctx.cr6.lt) goto loc_820C115C;
	// b 0x820c1194
	goto loc_820C1194;
loc_820C1190:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_820C1194:
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x820c11b0
	if (ctx.cr6.gt) goto loc_820C11B0;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x820c11c0
	goto loc_820C11C0;
loc_820C11B0:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// li r30,255
	ctx.r30.s64 = 255;
	// bge cr6,0x820c11c0
	if (!ctx.cr6.lt) goto loc_820C11C0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_820C11C0:
	// fmr f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f9.f64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// bge cr6,0x820c11d8
	if (!ctx.cr6.lt) goto loc_820C11D8;
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
loc_820C11D8:
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// bge cr6,0x820c122c
	if (!ctx.cr6.lt) goto loc_820C122C;
	// addi r10,r3,340
	ctx.r10.s64 = ctx.r3.s64 + 340;
loc_820C11E4:
	// lbzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// std r7,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r7.u64);
	// lfd f6,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f2,f6
	ctx.f2.f64 = double(ctx.f6.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f0,f1,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820c1228
	if (ctx.cr6.lt) goto loc_820C1228;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x820c1214
	if (ctx.cr6.lt) goto loc_820C1214;
	// bso cr6,0x820c1214
	if (ctx.cr6.so) goto loc_820C1214;
	// fsubs f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
loc_820C1214:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
	// cmpwi cr6,r8,255
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 255, ctx.xer);
	// blt cr6,0x820c11e4
	if (ctx.cr6.lt) goto loc_820C11E4;
	// b 0x820c122c
	goto loc_820C122C;
loc_820C1228:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_820C122C:
	// clrlwi r6,r5,24
	ctx.r6.u64 = ctx.r5.u32 & 0xFF;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x820c1278
	if (!ctx.cr6.gt) goto loc_820C1278;
	// addi r7,r3,340
	ctx.r7.s64 = ctx.r3.s64 + 340;
loc_820C1240:
	// lbzx r9,r7,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// std r9,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r9.u64);
	// lfd f0,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// blt cr6,0x820c1274
	if (ctx.cr6.lt) goto loc_820C1274;
	// lbz r6,1109(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1109);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x820c1240
	if (ctx.cr6.gt) goto loc_820C1240;
	// b 0x820c1278
	goto loc_820C1278;
loc_820C1274:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_820C1278:
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x820c1294
	if (ctx.cr6.gt) goto loc_820C1294;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820c12a4
	goto loc_820C12A4;
loc_820C1294:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// li r31,255
	ctx.r31.s64 = 255;
	// bge cr6,0x820c12a4
	if (!ctx.cr6.lt) goto loc_820C12A4;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_820C12A4:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lbz r7,1108(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1108);
	// stfs f8,1168(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1168, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r9,-10860
	ctx.r4.s64 = ctx.r9.s64 + -10860;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f10,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// beq cr6,0x820c1300
	if (ctx.cr6.eq) goto loc_820C1300;
	// add r9,r30,r3
	ctx.r9.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r8,r9,340
	ctx.r8.s64 = ctx.r9.s64 + 340;
loc_820C12CC:
	// lbzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lfs f7,1168(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1168);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r9,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r9.u64);
	// lfd f6,-72(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f2,f6
	ctx.f2.f64 = double(ctx.f6.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fnmsubs f0,f1,f11,f10
	ctx.f0.f64 = double(float(-(ctx.f1.f64 * ctx.f11.f64 - ctx.f10.f64)));
	// fadds f13,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f13,1168(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1168, temp.u32);
	// lbz r6,1108(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1108);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x820c12cc
	if (ctx.cr6.lt) goto loc_820C12CC;
loc_820C1300:
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// lfs f12,1168(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1168);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f8,1176(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1176, temp.u32);
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// std r9,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r9.u64);
	// lfd f9,-72(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfs f9,-27244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27244);
	ctx.f9.f64 = double(temp.f32);
	// frsp f13,f7
	ctx.f13.f64 = double(float(ctx.f7.f64));
	// fdivs f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// stfs f6,1168(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1168, temp.u32);
	// bgt cr6,0x820c1388
	if (ctx.cr6.gt) goto loc_820C1388;
	// add r10,r30,r3
	ctx.r10.u64 = ctx.r30.u64 + ctx.r3.u64;
	// subfic r8,r3,-340
	ctx.xer.ca = ctx.r3.u32 <= 4294966956;
	ctx.r8.s64 = -340 - ctx.r3.s64;
	// addi r10,r10,340
	ctx.r10.s64 = ctx.r10.s64 + 340;
loc_820C1344:
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// std r5,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r5.u64);
	// lfd f2,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x820c1374
	if (!ctx.cr6.lt) goto loc_820C1374;
	// fsubs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f7,1176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f6,1176(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1176, temp.u32);
loc_820C1374:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r5,1109(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1109);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x820c1344
	if (!ctx.cr6.gt) goto loc_820C1344;
loc_820C1388:
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// stfs f8,1172(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1172, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c13dc
	if (ctx.cr6.eq) goto loc_820C13DC;
	// add r10,r31,r3
	ctx.r10.u64 = ctx.r31.u64 + ctx.r3.u64;
	// addi r10,r10,340
	ctx.r10.s64 = ctx.r10.s64 + 340;
loc_820C13A4:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lfs f2,1172(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1172);
	ctx.f2.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// std r7,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r7.u64);
	// lfd f1,-72(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// fnmsubs f7,f12,f11,f10
	ctx.f7.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f10.f64)));
	// fadds f6,f7,f2
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f6,1172(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1172, temp.u32);
	// lbz r6,1108(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1108);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x820c13a4
	if (ctx.cr6.lt) goto loc_820C13A4;
loc_820C13DC:
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// lfs f2,1172(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1172);
	ctx.f2.f64 = double(temp.f32);
	// fdivs f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f13.f64));
	// stfs f8,1180(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1180, temp.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stfs f1,1172(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1172, temp.u32);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x820c14ec
	if (ctx.cr6.lt) goto loc_820C14EC;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r8,r9,-3
	ctx.r8.s64 = ctx.r9.s64 + -3;
	// addi r9,r10,341
	ctx.r9.s64 = ctx.r10.s64 + 341;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820C141C:
	// lbz r6,-1(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// std r6,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r6.u64);
	// lfd f0,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x820c144c
	if (!ctx.cr6.lt) goto loc_820C144C;
	// fsubs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f6,1180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1180);
	ctx.f6.f64 = double(temp.f32);
	// fadds f2,f7,f6
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f2,1180(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1180, temp.u32);
loc_820C144C:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// std r10,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r10.u64);
	// lfd f1,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x820c147c
	if (!ctx.cr6.lt) goto loc_820C147C;
	// fsubs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f7,1180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1180);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f6,1180(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1180, temp.u32);
loc_820C147C:
	// lbz r6,1(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// std r6,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r6.u64);
	// lfd f2,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x820c14ac
	if (!ctx.cr6.lt) goto loc_820C14AC;
	// fsubs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f12,1180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1180);
	ctx.f12.f64 = double(temp.f32);
	// fadds f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f7,1180(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1180, temp.u32);
loc_820C14AC:
	// lbz r10,2(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// std r10,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r10.u64);
	// lfd f6,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f2,f6
	ctx.f2.f64 = double(ctx.f6.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f0,f1,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x820c14dc
	if (!ctx.cr6.lt) goto loc_820C14DC;
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f13,1180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1180);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,1180(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1180, temp.u32);
loc_820C14DC:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820c141c
	if (!ctx.cr6.eq) goto loc_820C141C;
loc_820C14EC:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x820c1534
	if (ctx.cr6.gt) goto loc_820C1534;
	// addi r10,r3,340
	ctx.r10.s64 = ctx.r3.s64 + 340;
loc_820C14F8:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// std r8,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// lfd f7,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f0,f2,f11
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x820c1528
	if (!ctx.cr6.lt) goto loc_820C1528;
	// fsubs f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f0,1180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1180);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,1180(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1180, temp.u32);
loc_820C1528:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x820c14f8
	if (!ctx.cr6.gt) goto loc_820C14F8;
loc_820C1534:
	// lbz r7,1108(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1108);
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
	// lfs f12,1168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1168);
	ctx.f12.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,1172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1172);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f8,1176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1180);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fadds f7,f13,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// beq cr6,0x820c15b4
	if (ctx.cr6.eq) goto loc_820C15B4;
	// lbz r11,1109(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1109);
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
loc_820C1570:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x820c15a4
	if (!ctx.cr6.gt) goto loc_820C15A4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bge cr6,0x820c15a4
	if (!ctx.cr6.lt) goto loc_820C15A4;
	// lbz r6,256(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 256);
	// std r6,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r6.u64);
	// lfd f6,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f2,f6
	ctx.f2.f64 = double(ctx.f6.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fnmsubs f6,f1,f11,f10
	ctx.f6.f64 = double(float(-(ctx.f1.f64 * ctx.f11.f64 - ctx.f10.f64)));
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
loc_820C15A4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820c1570
	if (ctx.cr6.lt) goto loc_820C1570;
loc_820C15B4:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// fcmpu cr6,f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// std r11,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r11.u64);
	// lfd f2,-48(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fmuls f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fdivs f6,f0,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// beq cr6,0x820c15e8
	if (ctx.cr6.eq) goto loc_820C15E8;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// beq cr6,0x820c15f4
	if (ctx.cr6.eq) goto loc_820C15F4;
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// beq cr6,0x820c15f4
	if (ctx.cr6.eq) goto loc_820C15F4;
loc_820C15E8:
	// lbz r10,1110(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1110);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x820c15fc
	if (!ctx.cr6.eq) goto loc_820C15FC;
loc_820C15F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820c163c
	goto loc_820C163C;
loc_820C15FC:
	// fcmpu cr6,f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// beq cr6,0x820c1614
	if (ctx.cr6.eq) goto loc_820C1614;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x820c1620
	if (ctx.cr6.eq) goto loc_820C1620;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// beq cr6,0x820c1620
	if (ctx.cr6.eq) goto loc_820C1620;
loc_820C1614:
	// lbz r9,1109(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1109);
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x820c1628
	if (!ctx.cr6.eq) goto loc_820C1628;
loc_820C1620:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820c163c
	goto loc_820C163C;
loc_820C1628:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x820c1638
	if (ctx.cr6.lt) goto loc_820C1638;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C1638:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_820C163C:
	// lwz r10,1188(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r3,1120
	ctx.r11.s64 = ctx.r3.s64 + 1120;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// lfs f13,15776(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15776);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,15780(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15780);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,15784(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15784);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x820c16b4
	if (ctx.cr6.eq) goto loc_820C16B4;
	// lbz r7,1110(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1110);
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r6,r30,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r30.s64;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// stb r8,1196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1196, ctx.r8.u8);
	// std r5,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r5.u64);
	// lfd f2,-48(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,-48(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f8,-44(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f7,-40(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// b 0x820c1704
	goto loc_820C1704;
loc_820C16B4:
	// lbz r5,1109(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1109);
	// li r7,2
	ctx.r7.s64 = 2;
	// subf r8,r31,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r31.s64;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// stb r7,1196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1196, ctx.r7.u8);
	// std r6,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r6.u64);
	// lfd f2,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,-48(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f8,-44(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f7,-40(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_820C1704:
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// lfs f2,15760(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15760);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,15764(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15764);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,18240(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18240);
	// addi r7,r9,-1816
	ctx.r7.s64 = ctx.r9.s64 + -1816;
	// lfs f10,15768(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15768);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lwz r8,516(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 516);
	// lfs f13,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,112(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 / ctx.f0.f64));
	// lfs f11,-1608(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1608);
	ctx.f11.f64 = double(temp.f32);
	// lfd f12,3136(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3136);
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// fmuls f0,f5,f9
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// lfs f5,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsel f0,f9,f12,f0
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fmuls f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f2,-44(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f1,-40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fadds f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fadds f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f10,f0,f7
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lbz r10,1109(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1109);
	// lbz r9,1110(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1110);
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// addze r8,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r8.s64 = temp.s64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x820c1884
	if (!ctx.cr6.lt) goto loc_820C1884;
	// addi r8,r10,298
	ctx.r8.s64 = ctx.r10.s64 + 298;
	// lfs f11,1164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lfs f12,-1660(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -1660);
	ctx.f12.f64 = double(temp.f32);
loc_820C17E4:
	// fcmpu cr6,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x820c17fc
	if (ctx.cr6.lt) goto loc_820C17FC;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r5,84(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 84);
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// beq cr6,0x820c1820
	if (ctx.cr6.eq) goto loc_820C1820;
loc_820C17FC:
	// lhz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// std r6,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r6.u64);
	// lfd f9,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f0,f7,f3
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fsubs f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f13,f5,f0,f13
	ctx.f13.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_820C1820:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820c17e4
	if (ctx.cr6.lt) goto loc_820C17E4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-1648(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1648);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820c184c
	if (!ctx.cr6.lt) goto loc_820C184C;
	// lfs f0,92(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1160, temp.u32);
	// b 0x820c18c4
	goto loc_820C18C4;
loc_820C184C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-1624(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1624);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820c1868
	if (!ctx.cr6.lt) goto loc_820C1868;
	// lfs f0,96(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1160, temp.u32);
	// b 0x820c18c4
	goto loc_820C18C4;
loc_820C1868:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-1632(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1632);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820c1884
	if (!ctx.cr6.lt) goto loc_820C1884;
	// lfs f0,100(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1160, temp.u32);
	// b 0x820c18c4
	goto loc_820C18C4;
loc_820C1884:
	// lfs f0,740(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 740);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x820c18b8
	if (!ctx.cr6.gt) goto loc_820C18B8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-1664(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1664);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x820c18ac
	if (!ctx.cr6.gt) goto loc_820C18AC;
	// lfs f0,104(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1160, temp.u32);
	// b 0x820c18c4
	goto loc_820C18C4;
loc_820C18AC:
	// lfs f0,108(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1160, temp.u32);
	// b 0x820c18c4
	goto loc_820C18C4;
loc_820C18B8:
	// lwz r5,1184(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1184);
	// lfs f4,464(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 464);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,1160(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1160, temp.u32);
loc_820C18C4:
	// lwz r7,1188(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// addi r10,r3,1136
	ctx.r10.s64 = ctx.r3.s64 + 1136;
	// lwz r6,18240(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18240);
	// lwz r11,516(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 516);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// lfs f0,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-44(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// lfs f10,-40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -40);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fsubs f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f11,-60(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f9,-56(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// blt cr6,0x820c195c
	if (ctx.cr6.lt) goto loc_820C195C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C195C:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820c1984
	if (ctx.cr6.eq) goto loc_820C1984;
	// lwz r6,18240(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18240);
	// lwz r11,516(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 516);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r4,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
loc_820C1984:
	// lwz r11,18240(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18240);
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x820c19c4
	if (!ctx.cr6.gt) goto loc_820C19C4;
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f4,f0,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f3,f12,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fsqrts f0,f3
	ctx.f0.f64 = double(float(sqrt(ctx.f3.f64)));
	// fdivs f2,f0,f11
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f2,1156(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1156, temp.u32);
	// b 0x820c19d8
	goto loc_820C19D8;
loc_820C19C4:
	// fmuls f1,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f13,f12,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f13
	ctx.f0.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f0,1156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1156, temp.u32);
loc_820C19D8:
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f10,f11,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// lfd f9,-4832(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f8,-4840(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// frsqrte f0,f10
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f10.f64)));
	// fmul f7,f10,f0
	ctx.f7.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fmul f6,f0,f9
	ctx.f6.f64 = ctx.f0.f64 * ctx.f9.f64;
	// fnmsub f5,f7,f0,f8
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f8.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f10,f0
	ctx.f4.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fmul f3,f0,f9
	ctx.f3.f64 = ctx.f0.f64 * ctx.f9.f64;
	// fnmsub f2,f4,f0,f8
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f8.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stb r30,1198(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1198, ctx.r30.u8);
	// stb r31,1197(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1197, ctx.r31.u8);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C1A4C"))) PPC_WEAK_FUNC(sub_820C1A4C);
PPC_FUNC_IMPL(__imp__sub_820C1A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1A50"))) PPC_WEAK_FUNC(sub_820C1A50);
PPC_FUNC_IMPL(__imp__sub_820C1A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x820C1A58;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8259bb88
	ctx.lr = 0x820C1A60;
	__savefpr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a8720
	ctx.lr = 0x820C1A80;
	sub_820A8720(ctx, base);
	// lbz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// li r25,2
	ctx.r25.s64 = 2;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820c1ac0
	if (!ctx.cr6.eq) goto loc_820C1AC0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a8720
	ctx.lr = 0x820C1AAC;
	sub_820A8720(ctx, base);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// not r7,r8
	ctx.r7.u64 = ~ctx.r8.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820c1ac4
	if (ctx.cr6.eq) goto loc_820C1AC4;
loc_820C1AC0:
	// li r25,1
	ctx.r25.s64 = 1;
loc_820C1AC4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lhz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// lfs f25,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f24.f64 = double(temp.f32);
	// fmr f22,f25
	ctx.f22.f64 = ctx.f25.f64;
	// lfd f12,-1600(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + -1600);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfd f13,-4840(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// rotlwi r11,r4,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lfs f0,15168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 15168);
	ctx.f0.f64 = double(temp.f32);
	// ori r5,r6,36852
	ctx.r5.u64 = ctx.r6.u64 | 36852;
	// lfs f23,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f23.f64 = double(temp.f32);
	// fmr f21,f24
	ctx.f21.f64 = ctx.f24.f64;
	// fmr f20,f23
	ctx.f20.f64 = ctx.f23.f64;
	// lfs f7,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f6,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lfs f11,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f11.f64 = double(temp.f32);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// rotlwi r9,r9,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// rotlwi r8,r8,4
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// rotlwi r7,r7,4
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// lwzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// fsel f0,f11,f13,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f31,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fsel f0,f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f30,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f31,f31,f13
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// lfs f29,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f30,f30,f12
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// lfs f28,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f29,f29,f11
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f11.f64));
	// lfs f27,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f28,f28,f10
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f10.f64));
	// lfs f8,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f27,f27,f9
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f9.f64));
	// lfs f26,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f26,f26,f8
	ctx.f26.f64 = double(float(ctx.f26.f64 - ctx.f8.f64));
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fmuls f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fadds f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// fadds f10,f10,f28
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f28.f64));
	// fadds f9,f9,f27
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f27.f64));
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fsubs f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f25.f64));
	// fsubs f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f24.f64));
	// fsubs f11,f11,f23
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f23.f64));
	// fsubs f10,f10,f22
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f22.f64));
	// fsubs f9,f9,f21
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f21.f64));
	// fsubs f8,f0,f20
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f20.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmr f31,f5
	ctx.f31.f64 = ctx.f5.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmadds f12,f5,f11,f6
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f6,f31,f8,f3
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f11,f7,f13,f12
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,9424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9424);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f4,f4,f10,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fctiwz f5,f7
	ctx.f5.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfiwx f5,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f5.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stfiwx f13,0,r3
	PPC_STORE_U32(ctx.r3.u32, ctx.f13.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820c1c80
	if (!ctx.cr6.eq) goto loc_820C1C80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820c1dc0
	if (ctx.cr6.lt) goto loc_820C1DC0;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x820c1dc0
	if (!ctx.cr6.lt) goto loc_820C1DC0;
loc_820C1C80:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x820c1c90
	if (ctx.cr6.gt) goto loc_820C1C90;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820c1c9c
	goto loc_820C1C9C;
loc_820C1C90:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x820c1c9c
	if (ctx.cr6.lt) goto loc_820C1C9C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_820C1C9C:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x820c1cb0
	if (ctx.cr6.gt) goto loc_820C1CB0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820c1cbc
	goto loc_820C1CBC;
loc_820C1CB0:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// blt cr6,0x820c1cbc
	if (ctx.cr6.lt) goto loc_820C1CBC;
	// li r10,255
	ctx.r10.s64 = 255;
loc_820C1CBC:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x820c1dc0
	if (ctx.cr6.gt) goto loc_820C1DC0;
	// addi r11,r11,298
	ctx.r11.s64 = ctx.r11.s64 + 298;
	// lis r29,-32255
	ctx.r29.s64 = -2113863680;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f13,-10764(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -10764);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f8,-4796(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4796);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f9,-4792(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -4792);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f10,-4784(r4)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r4.u32 + -4784);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,-4788(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4788);
	ctx.f11.f64 = double(temp.f32);
	// lfd f12,-4776(r6)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r6.u32 + -4776);
	// addi r26,r31,340
	ctx.r26.s64 = ctx.r31.s64 + 340;
	// lfs f4,-4800(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4800);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,25560(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25560);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,-4804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4804);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,-4808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4808);
	ctx.f5.f64 = double(temp.f32);
loc_820C1D24:
	// lbzx r8,r26,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r28.u32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f3,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f3
	ctx.f0.f64 = double(ctx.f3.s64);
	// frsp f3,f0
	ctx.f3.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f3,f5
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820c1d64
	if (!ctx.cr6.lt) goto loc_820C1D64;
	// fmuls f3,f1,f7
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// add r6,r28,r31
	ctx.r6.u64 = ctx.r28.u64 + ctx.r31.u64;
	// stb r25,84(r6)
	PPC_STORE_U8(ctx.r6.u32 + 84, ctx.r25.u8);
	// fmuls f0,f3,f6
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fctidz f3,f0
	ctx.f3.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lbz r5,95(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// stbx r5,r26,r28
	PPC_STORE_U8(ctx.r26.u32 + ctx.r28.u32, ctx.r5.u8);
loc_820C1D64:
	// lhz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f3,f0
	ctx.f3.f64 = double(ctx.f0.s64);
	// frsp f0,f3
	ctx.f0.f64 = double(float(ctx.f3.f64));
	// fmuls f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fcmpu cr6,f2,f3
	ctx.cr6.compare(ctx.f2.f64, ctx.f3.f64);
	// bge cr6,0x820c1db0
	if (!ctx.cr6.lt) goto loc_820C1DB0;
	// fsubs f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// fsel f0,f0,f12,f2
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f12.f64 : ctx.f2.f64;
	// fsubs f3,f0,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f0,f3,f0,f10
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f3,f0,f8
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fctiwz f0,f3
	ctx.f0.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r9,94(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r9,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r9.u16);
loc_820C1DB0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x820c1d24
	if (!ctx.cr6.gt) goto loc_820C1D24;
loc_820C1DC0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8259bbd4
	ctx.lr = 0x820C1DCC;
	__restfpr_20(ctx, base);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C1DD0"))) PPC_WEAK_FUNC(sub_820C1DD0);
PPC_FUNC_IMPL(__imp__sub_820C1DD0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820a8720
	ctx.lr = 0x820C1E00;
	sub_820A8720(ctx, base);
	// lbz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c1e8c
	if (ctx.cr6.eq) goto loc_820C1E8C;
loc_820C1E10:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
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
	// beq cr6,0x820c1e4c
	if (ctx.cr6.eq) goto loc_820C1E4C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820c1e50
	if (!ctx.cr6.eq) goto loc_820C1E50;
loc_820C1E4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C1E50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c1e68
	if (!ctx.cr6.eq) goto loc_820C1E68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c1a50
	ctx.lr = 0x820C1E68;
	sub_820C1A50(ctx, base);
loc_820C1E68:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a8720
	ctx.lr = 0x820C1E7C;
	sub_820A8720(ctx, base);
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820c1e10
	if (!ctx.cr6.eq) goto loc_820C1E10;
loc_820C1E8C:
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

__attribute__((alias("__imp__sub_820C1EA4"))) PPC_WEAK_FUNC(sub_820C1EA4);
PPC_FUNC_IMPL(__imp__sub_820C1EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C1EA8"))) PPC_WEAK_FUNC(sub_820C1EA8);
PPC_FUNC_IMPL(__imp__sub_820C1EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x820C1EB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,80(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r30,r28,15124
	ctx.r30.s64 = ctx.r28.s64 + 15124;
	// lbz r11,41(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 41);
	// rotlwi r8,r11,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// ldx r10,r8,r30
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r30.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
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
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// beq cr6,0x820c1f04
	if (ctx.cr6.eq) goto loc_820C1F04;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C1F04:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c1f28
	if (ctx.cr6.eq) goto loc_820C1F28;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a8720
	ctx.lr = 0x820C1F24;
	sub_820A8720(ctx, base);
	// b 0x820c1f3c
	goto loc_820C1F3C;
loc_820C1F28:
	// ldx r9,r8,r30
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r30.u32);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lbz r8,102(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r7,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r7.u8);
loc_820C1F3C:
	// lbz r6,102(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// not r5,r6
	ctx.r5.u64 = ~ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x820c1f68
	if (ctx.cr6.eq) goto loc_820C1F68;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a8850
	ctx.lr = 0x820C1F64;
	sub_820A8850(ctx, base);
	// b 0x820c1f7c
	goto loc_820C1F7C;
loc_820C1F68:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820a8850
	ctx.lr = 0x820C1F74;
	sub_820A8850(ctx, base);
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
loc_820C1F7C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r8,41(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 41);
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// rotlwi r7,r8,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r11,r9,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// ldx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r30.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x820c1fe0
	if (ctx.cr6.eq) goto loc_820C1FE0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C1FE0:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c2004
	if (ctx.cr6.eq) goto loc_820C2004;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a8720
	ctx.lr = 0x820C2000;
	sub_820A8720(ctx, base);
	// b 0x820c2010
	goto loc_820C2010;
loc_820C2004:
	// lbz r6,102(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// rlwinm r5,r6,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r5,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r5.u8);
loc_820C2010:
	// lbz r4,102(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// li r6,1
	ctx.r6.s64 = 1;
	// not r3,r4
	ctx.r3.u64 = ~ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c203c
	if (ctx.cr6.eq) goto loc_820C203C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a8850
	ctx.lr = 0x820C2038;
	sub_820A8850(ctx, base);
	// b 0x820c2050
	goto loc_820C2050;
loc_820C203C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820a8850
	ctx.lr = 0x820C2048;
	sub_820A8850(ctx, base);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_820C2050:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// lhz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lfs f0,15168(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 15168);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r10,r7,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r5,6(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f7,2864(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f7.f64 = double(temp.f32);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// lfs f6,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f6.f64 = double(temp.f32);
	// bne cr6,0x820c2098
	if (!ctx.cr6.eq) goto loc_820C2098;
	// fmr f0,f6
	ctx.f0.f64 = ctx.f6.f64;
	// b 0x820c20ac
	goto loc_820C20AC;
loc_820C2098:
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x820c20ac
	if (!ctx.cr6.eq) goto loc_820C20AC;
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_820C20AC:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// rlwinm r9,r30,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFF0;
	// addi r8,r11,28544
	ctx.r8.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// rlwinm r3,r6,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r7,r11,36852
	ctx.r7.u64 = ctx.r11.u64 | 36852;
	// rlwinm r4,r5,4,12,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFF0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lfs f10,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f4,f12,f9
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f3,f11,f8
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// lis r7,34
	ctx.r7.s64 = 2228224;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// ori r10,r7,36852
	ctx.r10.u64 = ctx.r7.u64 | 36852;
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lwzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r10,r3,r9
	ctx.r10.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f4,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// lfs f8,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f4,f13,f10
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// std r8,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r8.u64);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f2,f13
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f1,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fsubs f8,f5,f10
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// ld r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f7,52(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f5,f0,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f7.f64));
	// lfs f0,-10860(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10860);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fmadds f4,f13,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// blt cr6,0x820c2220
	if (ctx.cr6.lt) goto loc_820C2220;
	// li r10,0
	ctx.r10.s64 = 0;
loc_820C2220:
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820c2290
	if (ctx.cr6.eq) goto loc_820C2290;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// lfs f10,15188(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 15188);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,15184(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 15184);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,-6672
	ctx.r10.s64 = ctx.r10.s64 + -6672;
	// lfs f11,15192(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 15192);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f11,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmsubs f0,f11,f0,f3
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f3.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f0,f9,f13,f2
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f2.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f0,f10,f12,f1
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f1.f64));
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// std r3,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
loc_820C2290:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f10,f9
	ctx.f10.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f11,f6,f10
	ctx.f11.f64 = double(float(ctx.f6.f64 / ctx.f10.f64));
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stfs f10,64(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lwz r10,18240(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18240);
	// lwz r10,516(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 516);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r9.u64);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r8.u64);
	// lfs f2,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f0,f10,f8
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fmadds f2,f7,f13,f9
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f1,f0,f6,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f2.f64));
	// stfs f1,72(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fsubs f0,f11,f3
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fnmadds f6,f8,f0,f7
	ctx.f6.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 + ctx.f7.f64)));
	// stfs f6,68(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C2374"))) PPC_WEAK_FUNC(sub_820C2374);
PPC_FUNC_IMPL(__imp__sub_820C2374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2378"))) PPC_WEAK_FUNC(sub_820C2378);
PPC_FUNC_IMPL(__imp__sub_820C2378) {
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
	// ori r9,r10,36952
	ctx.r9.u64 = ctx.r10.u64 | 36952;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ldx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x820c240c
	if (ctx.cr6.eq) goto loc_820C240C;
	// lwz r8,15332(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15332);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820c23d0
	if (!ctx.cr6.eq) goto loc_820C23D0;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 524288;
	// addi r3,r11,-7792
	ctx.r3.s64 = ctx.r11.s64 + -7792;
	// bl 0x822a11a8
	ctx.lr = 0x820C23CC;
	sub_822A11A8(ctx, base);
	// stw r3,15332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15332, ctx.r3.u32);
loc_820C23D0:
	// lwz r3,15332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c240c
	if (ctx.cr6.eq) goto loc_820C240C;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r6,15480(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15480);
	// ld r4,15408(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 15408);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C23F8;
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
loc_820C240C:
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

__attribute__((alias("__imp__sub_820C2424"))) PPC_WEAK_FUNC(sub_820C2424);
PPC_FUNC_IMPL(__imp__sub_820C2424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2428"))) PPC_WEAK_FUNC(sub_820C2428);
PPC_FUNC_IMPL(__imp__sub_820C2428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lfs f0,64(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f13,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f6,f11,f13
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f9,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f8,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f9,f9
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f13,f8,f8
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lfs f10,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f10,-12(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f12,-10860(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10860);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fadds f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f5,f12
	ctx.cr6.compare(ctx.f5.f64, ctx.f12.f64);
	// blt cr6,0x820c2490
	if (ctx.cr6.lt) goto loc_820C2490;
	// li r10,0
	ctx.r10.s64 = 0;
loc_820C2490:
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820c24f8
	if (!ctx.cr6.eq) goto loc_820C24F8;
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f12,-4832(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsqrte f0,f13
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f13.f64)));
	// lfd f11,-4840(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// fmul f4,f13,f0
	ctx.f4.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f3,f0,f12
	ctx.f3.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fnmsub f2,f4,f0,f11
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f11.f64);
	// fmadd f0,f2,f3,f0
	ctx.f0.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f13,f0,f12
	ctx.f13.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fnmsub f12,f1,f0,f11
	ctx.f12.f64 = -(ctx.f1.f64 * ctx.f0.f64 - ctx.f11.f64);
	// fmadd f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64;
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f8,f0,f6,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f7,f13,f10,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fabs f1,f7
	ctx.f1.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// blr 
	return;
loc_820C24F8:
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f0,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f0,f6,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f7,f13,f10,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fabs f1,f7
	ctx.f1.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C252C"))) PPC_WEAK_FUNC(sub_820C252C);
PPC_FUNC_IMPL(__imp__sub_820C252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2530"))) PPC_WEAK_FUNC(sub_820C2530);
PPC_FUNC_IMPL(__imp__sub_820C2530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r10,r3,15184
	ctx.r10.s64 = ctx.r3.s64 + 15184;
	// lfs f12,64(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f11,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f7,48(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f6,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// lfs f9,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f8,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f9,f9
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f13,f8,f8
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lfs f10,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f10,-12(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f12,-10860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10860);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fadds f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f5,f12
	ctx.cr6.compare(ctx.f5.f64, ctx.f12.f64);
	// blt cr6,0x820c259c
	if (ctx.cr6.lt) goto loc_820C259C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C259C:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820c2600
	if (!ctx.cr6.eq) goto loc_820C2600;
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f12,-4832(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsqrte f0,f13
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f13.f64)));
	// lfd f11,-4840(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// fmul f4,f13,f0
	ctx.f4.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f3,f0,f12
	ctx.f3.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fnmsub f2,f4,f0,f11
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f11.f64);
	// fmadd f0,f2,f3,f0
	ctx.f0.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f13,f0,f12
	ctx.f13.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fnmsub f12,f1,f0,f11
	ctx.f12.f64 = -(ctx.f1.f64 * ctx.f0.f64 - ctx.f11.f64);
	// fmadd f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64;
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f8,f0,f6,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fnmadds f1,f13,f10,f8
	ctx.f1.f64 = double(float(-(ctx.f13.f64 * ctx.f10.f64 + ctx.f8.f64)));
	// blr 
	return;
loc_820C2600:
	// addi r10,r9,32
	ctx.r10.s64 = ctx.r9.s64 + 32;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f0,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f0,f6,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fnmadds f1,f13,f10,f8
	ctx.f1.f64 = double(float(-(ctx.f13.f64 * ctx.f10.f64 + ctx.f8.f64)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C2634"))) PPC_WEAK_FUNC(sub_820C2634);
PPC_FUNC_IMPL(__imp__sub_820C2634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2638"))) PPC_WEAK_FUNC(sub_820C2638);
PPC_FUNC_IMPL(__imp__sub_820C2638) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8259bb90
	ctx.lr = 0x820C2650;
	__savefpr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f25,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f25.f64 = double(temp.f32);
	// lwz r11,2016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2016);
	// stfs f25,2580(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2580, temp.u32);
	// lwz r10,18240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c267c
	if (ctx.cr6.eq) goto loc_820C267C;
	// lbz r10,14657(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14657);
	// b 0x820c2680
	goto loc_820C2680;
loc_820C267C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820C2680:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r30,r10,-10928
	ctx.r30.s64 = ctx.r10.s64 + -10928;
	// beq cr6,0x820c2b30
	if (ctx.cr6.eq) goto loc_820C2B30;
	// lwz r10,18240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18240);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,6444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6444);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bso cr6,0x820c26b4
	if (ctx.cr6.so) goto loc_820C26B4;
	// ble cr6,0x820c26cc
	if (!ctx.cr6.gt) goto loc_820C26CC;
loc_820C26B4:
	// lwz r9,18240(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18240);
	// lwz r10,6820(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6820);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x820c26cc
	if (ctx.cr6.eq) goto loc_820C26CC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820c2b30
	if (!ctx.cr6.eq) goto loc_820C2B30;
loc_820C26CC:
	// lwz r11,18240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18240);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r8,504(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lwz r8,516(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// ld r5,192(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 192);
	// ld r4,200(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// ld r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 32);
	// ld r6,40(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 40);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// std r4,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// lfs f24,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f22.f64 = double(temp.f32);
	// beq cr6,0x820c2754
	if (ctx.cr6.eq) goto loc_820C2754;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f22,f10
	ctx.f9.f64 = double(float(ctx.f22.f64 + ctx.f10.f64));
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f23,f8
	ctx.f7.f64 = double(float(ctx.f23.f64 + ctx.f8.f64));
	// fadds f5,f24,f6
	ctx.f5.f64 = double(float(ctx.f24.f64 + ctx.f6.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f5,136(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r3,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r3.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// b 0x820c2764
	goto loc_820C2764;
loc_820C2754:
	// ld r9,192(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 192);
	// ld r7,200(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 200);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
loc_820C2764:
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f13,f11,f11
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f26,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f26.f64 = double(temp.f32);
	// fadds f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// fcmpu cr6,f3,f26
	ctx.cr6.compare(ctx.f3.f64, ctx.f26.f64);
	// blt cr6,0x820c2798
	if (ctx.cr6.lt) goto loc_820C2798;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C2798:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfd f27,-4832(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4832);
	// lfd f28,-4840(r11)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// beq cr6,0x820c27d8
	if (ctx.cr6.eq) goto loc_820C27D8;
	// ld r5,32(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ld r4,40(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 40);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820c2814
	goto loc_820C2814;
loc_820C27D8:
	// fadds f2,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f2,f9
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// frsqrte f0,f13
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f13.f64)));
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f9,f0,f27
	ctx.f9.f64 = ctx.f0.f64 * ctx.f27.f64;
	// fnmsub f8,f1,f0,f28
	ctx.f8.f64 = -(ctx.f1.f64 * ctx.f0.f64 - ctx.f28.f64);
	// fmadd f0,f8,f9,f0
	ctx.f0.f64 = ctx.f8.f64 * ctx.f9.f64 + ctx.f0.f64;
	// fmul f7,f13,f0
	ctx.f7.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f6,f0,f27
	ctx.f6.f64 = ctx.f0.f64 * ctx.f27.f64;
	// fnmsub f5,f7,f0,f28
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f28.f64);
	// fmadd f4,f5,f6,f0
	ctx.f4.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// frsp f0,f4
	ctx.f0.f64 = double(float(ctx.f4.f64));
	// fmuls f31,f0,f10
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f30,f11,f0
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_820C2814:
	// lfs f3,2036(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	ctx.f3.f64 = double(temp.f32);
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// fmuls f2,f3,f30
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// lfs f1,2040(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2040);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,2032(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,-4816(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4816);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f12,f1,f29,f2
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f29.f64 + ctx.f2.f64));
	// fmadds f0,f0,f31,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f12.f64));
	// lfs f12,2868(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f12,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f11,f28,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f28.f64 : ctx.f0.f64;
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f1,f10,f0,f13
	ctx.f1.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// bl 0x8259c108
	ctx.lr = 0x820C2858;
	sub_8259C108(ctx, base);
	// lwz r7,2016(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2016);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// lwz r8,18240(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18240);
	// lwz r11,516(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 516);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f12,f30
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f29
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f0,f31
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmsubs f13,f13,f31,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 - ctx.f8.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmsubs f0,f0,f30,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 - ctx.f9.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmsubs f13,f12,f29,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 - ctx.f6.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r3,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r3.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmadds f4,f0,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f3,f13,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f26
	ctx.cr6.compare(ctx.f3.f64, ctx.f26.f64);
	// blt cr6,0x820c28cc
	if (ctx.cr6.lt) goto loc_820C28CC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C28CC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c2914
	if (ctx.cr6.eq) goto loc_820C2914;
	// fmuls f2,f29,f23
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f23.f64));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// fmuls f1,f24,f31
	ctx.f1.f64 = double(float(ctx.f24.f64 * ctx.f31.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmuls f0,f30,f22
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f22.f64));
	// fmsubs f13,f30,f24,f2
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f24.f64 - ctx.f2.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmsubs f12,f29,f22,f1
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f22.f64 - ctx.f1.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmsubs f11,f23,f31,f0
	ctx.f11.f64 = double(float(ctx.f23.f64 * ctx.f31.f64 - ctx.f0.f64));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
loc_820C2914:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// fmuls f10,f29,f13
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f0,f30
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f11,2036(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f0,f0,f31,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f10.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f10,2040(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2040);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmsubs f0,f30,f13,f9
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f13.f64 - ctx.f9.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmsubs f13,f12,f29,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 - ctx.f8.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f9,2032(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	ctx.f9.f64 = double(temp.f32);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// std r4,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// fmadds f5,f0,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f12,f13,f13,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f3,f0,f27
	ctx.f3.f64 = ctx.f0.f64 * ctx.f27.f64;
	// fnmsub f2,f4,f0,f28
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f28.f64);
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// fmadd f0,f2,f3,f0
	ctx.f0.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// fmul f1,f12,f0
	ctx.f1.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f12,f0,f27
	ctx.f12.f64 = ctx.f0.f64 * ctx.f27.f64;
	// fnmsub f8,f1,f0,f28
	ctx.f8.f64 = -(ctx.f1.f64 * ctx.f0.f64 - ctx.f28.f64);
	// fmadd f6,f8,f12,f0
	ctx.f6.f64 = ctx.f8.f64 * ctx.f12.f64 + ctx.f0.f64;
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f2,f10,f8,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f1,f9,f0,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f25
	ctx.cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// bge cr6,0x820c29c8
	if (!ctx.cr6.lt) goto loc_820C29C8;
	// fneg f7,f7
	ctx.f7.u64 = ctx.f7.u64 ^ 0x8000000000000000;
loc_820C29C8:
	// lfs f0,2568(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2568);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r8,208
	ctx.r10.s64 = ctx.r8.s64 + 208;
	// fdivs f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 / ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f12,2868(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// li r9,127
	ctx.r9.s64 = 127;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r9,23,1,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 23) & 0x7FFFFFFF) | (ctx.r3.u64 & 0xFFFFFFFF80000000);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r5,r9,23,1,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 23) & 0x7FFFFFFF) | (ctx.r5.u64 & 0xFFFFFFFF80000000);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beq cr6,0x820c2a2c
	if (ctx.cr6.eq) goto loc_820C2A2C;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lfs f12,28104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28104);
	ctx.f12.f64 = double(temp.f32);
loc_820C2A2C:
	// fsubs f9,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f9,2580(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2580, temp.u32);
	// fcmpu cr6,f13,f25
	ctx.cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// ble cr6,0x820c2a9c
	if (!ctx.cr6.gt) goto loc_820C2A9C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820c2a70
	if (!ctx.cr6.gt) goto loc_820C2A70;
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r4,18240(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18240);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lfs f0,188(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f0,28100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f4,2560(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2560, temp.u32);
	// b 0x820c2af8
	goto loc_820C2AF8;
loc_820C2A70:
	// fsubs f3,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r3,18240(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18240);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lfs f0,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,28096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28096);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f13,2560(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2560, temp.u32);
	// b 0x820c2af8
	goto loc_820C2AF8;
loc_820C2A9C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820c2ad0
	if (!ctx.cr6.gt) goto loc_820C2AD0;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r11,18240(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18240);
	// lfs f0,188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f0,28096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28096);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f7,2560(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2560, temp.u32);
	// b 0x820c2af8
	goto loc_820C2AF8;
loc_820C2AD0:
	// fsubs f6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r10,18240(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18240);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lfs f0,188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f0,28100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f2,f3,f12
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfs f2,2560(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2560, temp.u32);
loc_820C2AF8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,2560(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2560);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,3148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3148);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820c2b10
	if (!ctx.cr6.gt) goto loc_820C2B10;
	// stfs f0,2560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2560, temp.u32);
loc_820C2B10:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,2560(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2560);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820c2b28
	if (!ctx.cr6.lt) goto loc_820C2B28;
	// stfs f0,2560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2560, temp.u32);
loc_820C2B28:
	// stfs f25,2572(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2572, temp.u32);
	// b 0x820c2d64
	goto loc_820C2D64;
loc_820C2B30:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r7,18240(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18240);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f11,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r7,192
	ctx.r7.s64 = ctx.r7.s64 + 192;
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f5,2036(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,2868(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2868);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32137
	ctx.r9.s64 = -2106130432;
	// lfd f6,-4816(r6)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r6.u32 + -4816);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r9,-1816
	ctx.r9.s64 = ctx.r9.s64 + -1816;
	// ld r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// lfs f4,2040(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2040);
	ctx.f4.f64 = double(temp.f32);
	// lfd f12,-4840(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4840);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f3,2032(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// fsubs f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f2,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f2,f13
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfs f2,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f7,f1,f13
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// std r3,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r3.u64);
	// fadds f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fadds f10,f0,f7
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// lfd f7,-4832(r11)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f2,f13,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f9,f10,f10,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f2.f64));
	// frsqrte f0,f9
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f9.f64)));
	// fmul f1,f9,f0
	ctx.f1.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fmul f2,f0,f7
	ctx.f2.f64 = ctx.f0.f64 * ctx.f7.f64;
	// fnmsub f1,f1,f0,f12
	ctx.f1.f64 = -(ctx.f1.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f1,f2,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f2.f64 + ctx.f0.f64;
	// fmul f9,f9,f0
	ctx.f9.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fmul f7,f0,f7
	ctx.f7.f64 = ctx.f0.f64 * ctx.f7.f64;
	// fnmsub f2,f9,f0,f12
	ctx.f2.f64 = -(ctx.f9.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f7,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f7.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmadds f9,f4,f11,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f0,f3,f0,f9
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,2560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2560, temp.u32);
	// fsubs f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsel f0,f8,f12,f0
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fsubs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f1,f7,f0,f6
	ctx.f1.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f6.f64;
	// bl 0x8259c108
	ctx.lr = 0x820C2C5C;
	sub_8259C108(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,2016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2016);
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f0,2560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2560, temp.u32);
	// lfs f13,2036(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f13,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,2040(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2040);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,2032(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f4,f10,f11,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f3,f8,f9,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f25
	ctx.cr6.compare(ctx.f3.f64, ctx.f25.f64);
	// bge cr6,0x820c2ca4
	if (!ctx.cr6.lt) goto loc_820C2CA4;
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f2,2560(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2560, temp.u32);
loc_820C2CA4:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r11,-6840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6840);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// bne cr6,0x820c2cd0
	if (!ctx.cr6.eq) goto loc_820C2CD0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lfs f11,376(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-6844(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + -6844, temp.u32);
	// stw r11,-6840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6840, ctx.r11.u32);
	// b 0x820c2cd4
	goto loc_820C2CD4;
loc_820C2CD0:
	// lfs f11,-6844(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -6844);
	ctx.f11.f64 = double(temp.f32);
loc_820C2CD4:
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820c2cf8
	if (!ctx.cr6.eq) goto loc_820C2CF8;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lfs f12,380(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-6848(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + -6848, temp.u32);
	// stw r11,-6840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6840, ctx.r11.u32);
	// b 0x820c2cfc
	goto loc_820C2CFC;
loc_820C2CF8:
	// lfs f12,-6848(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -6848);
	ctx.f12.f64 = double(temp.f32);
loc_820C2CFC:
	// lfs f0,2572(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2572);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,2560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2560);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// ble cr6,0x820c2d38
	if (!ctx.cr6.gt) goto loc_820C2D38;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x820c2d20
	if (!ctx.cr6.gt) goto loc_820C2D20;
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,2560(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2560, temp.u32);
loc_820C2D20:
	// fneg f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x820c2d5c
	if (!ctx.cr6.lt) goto loc_820C2D5C;
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f9,2560(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2560, temp.u32);
	// b 0x820c2d5c
	goto loc_820C2D5C;
loc_820C2D38:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x820c2d48
	if (!ctx.cr6.gt) goto loc_820C2D48;
	// fadds f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f8,2560(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2560, temp.u32);
loc_820C2D48:
	// fneg f7,f11
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bge cr6,0x820c2d5c
	if (!ctx.cr6.lt) goto loc_820C2D5C;
	// fsubs f6,f0,f11
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f6,2560(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2560, temp.u32);
loc_820C2D5C:
	// lfs f5,2560(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2560);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,2572(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2572, temp.u32);
loc_820C2D64:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8259bbdc
	ctx.lr = 0x820C2D70;
	__restfpr_22(ctx, base);
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

__attribute__((alias("__imp__sub_820C2D84"))) PPC_WEAK_FUNC(sub_820C2D84);
PPC_FUNC_IMPL(__imp__sub_820C2D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C2D88"))) PPC_WEAK_FUNC(sub_820C2D88);
PPC_FUNC_IMPL(__imp__sub_820C2D88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2016(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2016);
	// stw r4,2672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2672, ctx.r4.u32);
	// lwz r10,13696(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13696);
	// lwz r10,15328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15328);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x820c2dac
	if (!ctx.cr6.eq) goto loc_820C2DAC;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,14308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14308, ctx.r9.u32);
	// blr 
	return;
loc_820C2DAC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820c2dc0
	if (!ctx.cr6.eq) goto loc_820C2DC0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,14308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14308, ctx.r8.u32);
	// blr 
	return;
loc_820C2DC0:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x820c2dec
	if (ctx.cr6.lt) goto loc_820C2DEC;
	// beq cr6,0x820c2de0
	if (ctx.cr6.eq) goto loc_820C2DE0;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,14308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14308, ctx.r7.u32);
	// blr 
	return;
loc_820C2DE0:
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r6,14308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14308, ctx.r6.u32);
	// blr 
	return;
loc_820C2DEC:
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,14308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14308, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C2DF8"))) PPC_WEAK_FUNC(sub_820C2DF8);
PPC_FUNC_IMPL(__imp__sub_820C2DF8) {
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
	// fmr f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f1.f64;
	// bl 0x820a85f8
	ctx.lr = 0x820C2E14;
	sub_820A85F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f1.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x820a85f8
	ctx.lr = 0x820C2E24;
	sub_820A85F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fsubs f6,f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c2e78
	if (ctx.cr6.eq) goto loc_820C2E78;
	// fcmpu cr6,f7,f2
	ctx.cr6.compare(ctx.f7.f64, ctx.f2.f64);
	// bge cr6,0x820c2e78
	if (!ctx.cr6.lt) goto loc_820C2E78;
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x820a85f8
	ctx.lr = 0x820C2E60;
	sub_820A85F8(ctx, base);
	// fadds f1,f1,f6
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
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
loc_820C2E78:
	// fmr f1,f6
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f6.f64;
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

__attribute__((alias("__imp__sub_820C2E90"))) PPC_WEAK_FUNC(sub_820C2E90);
PPC_FUNC_IMPL(__imp__sub_820C2E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rotlwi r10,r8,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r10,2(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// lhz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x820c3024
	if (ctx.cr6.eq) goto loc_820C3024;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r6,34
	ctx.r6.s64 = 2228224;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lhz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// ori r5,r6,36852
	ctx.r5.u64 = ctx.r6.u64 | 36852;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r6,r3,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// lwzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f0,f6,f3
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// lfs f5,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lhz r9,2(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// rotlwi r9,r9,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// fsubs f12,f5,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// rotlwi r6,r6,4
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// fsubs f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fmr f6,f3
	ctx.f6.f64 = ctx.f3.f64;
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f4,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// ld r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// fsubs f0,f3,f4
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f4,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// std r5,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// std r3,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r3.u64);
	// fmadds f5,f12,f12,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f0,f2,f11
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fsubs f11,f8,f4
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// fmadds f12,f13,f13,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f0,f0,f10
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmadds f2,f11,f11,f3
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f3.f64));
	// lfd f11,-4832(r10)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4832);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f10,-4840(r10)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4840);
	// fmul f5,f12,f0
	ctx.f5.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f4,f0,f11
	ctx.f4.f64 = ctx.f0.f64 * ctx.f11.f64;
	// fsqrts f8,f2
	ctx.f8.f64 = double(float(sqrt(ctx.f2.f64)));
	// fnmsub f3,f5,f0,f10
	ctx.f3.f64 = -(ctx.f5.f64 * ctx.f0.f64 - ctx.f10.f64);
	// lfs f5,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f5.f64 = double(temp.f32);
	// fmadd f0,f3,f4,f0
	ctx.f0.f64 = ctx.f3.f64 * ctx.f4.f64 + ctx.f0.f64;
	// lfs f4,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f12,f0,f11
	ctx.f12.f64 = ctx.f0.f64 * ctx.f11.f64;
	// fnmsub f11,f2,f0,f10
	ctx.f11.f64 = -(ctx.f2.f64 * ctx.f0.f64 - ctx.f10.f64);
	// fmadd f10,f11,f12,f0
	ctx.f10.f64 = ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64;
	// fsubs f11,f7,f6
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f10,f3,f2
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f0,-27244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f6,f1,f0,f8
	ctx.f6.f64 = double(float(-(ctx.f1.f64 * ctx.f0.f64 - ctx.f8.f64)));
	// fmadds f7,f11,f12,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f5,f9,f13,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fsubs f4,f5,f1
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// fdivs f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 / ctx.f6.f64));
	// blr 
	return;
loc_820C3024:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,25556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C3030"))) PPC_WEAK_FUNC(sub_820C3030);
PPC_FUNC_IMPL(__imp__sub_820C3030) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820a8850
	ctx.lr = 0x820C3058;
	sub_820A8850(ctx, base);
	// lbz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c3108
	if (ctx.cr6.eq) goto loc_820C3108;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r8,r9,36852
	ctx.r8.u64 = ctx.r9.u64 | 36852;
	// lwzx r31,r11,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
loc_820C307C:
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// rotlwi r11,r9,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r10,r7,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// rotlwi r11,r8,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmadds f7,f0,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f6,f13,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fsqrts f0,f6
	ctx.f0.f64 = double(float(sqrt(ctx.f6.f64)));
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// bl 0x820a8720
	ctx.lr = 0x820C30F8;
	sub_820A8720(ctx, base);
	// lbz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820c307c
	if (!ctx.cr6.eq) goto loc_820C307C;
loc_820C3108:
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

__attribute__((alias("__imp__sub_820C311C"))) PPC_WEAK_FUNC(sub_820C311C);
PPC_FUNC_IMPL(__imp__sub_820C311C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3120"))) PPC_WEAK_FUNC(sub_820C3120);
PPC_FUNC_IMPL(__imp__sub_820C3120) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820a8850
	ctx.lr = 0x820C3148;
	sub_820A8850(ctx, base);
	// lbz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c31f8
	if (ctx.cr6.eq) goto loc_820C31F8;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r8,r9,36852
	ctx.r8.u64 = ctx.r9.u64 | 36852;
	// lwzx r31,r11,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
loc_820C316C:
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// rotlwi r11,r9,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r10,r7,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// rotlwi r11,r8,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmadds f7,f0,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f6,f13,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fsqrts f0,f6
	ctx.f0.f64 = double(float(sqrt(ctx.f6.f64)));
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// bl 0x820a8720
	ctx.lr = 0x820C31E8;
	sub_820A8720(ctx, base);
	// lbz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820c316c
	if (!ctx.cr6.eq) goto loc_820C316C;
loc_820C31F8:
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

__attribute__((alias("__imp__sub_820C320C"))) PPC_WEAK_FUNC(sub_820C320C);
PPC_FUNC_IMPL(__imp__sub_820C320C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3210"))) PPC_WEAK_FUNC(sub_820C3210);
PPC_FUNC_IMPL(__imp__sub_820C3210) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// sth r4,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, ctx.r4.u16);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stb r6,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r6.u8);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lhz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// lhz r7,142(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 142);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x820a8a60
	ctx.lr = 0x820C325C;
	sub_820A8A60(ctx, base);
	// stb r3,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r3.u8);
	// lbz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x820c32b0
	if (ctx.cr6.eq) goto loc_820C32B0;
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x820a5e90
	ctx.lr = 0x820C3288;
	sub_820A5E90(ctx, base);
	// lbz r10,159(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820c32ac
	if (ctx.cr6.eq) goto loc_820C32AC;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x820a5df0
	ctx.lr = 0x820C329C;
	sub_820A5DF0(ctx, base);
	// stb r3,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r3.u8);
	// lbz r9,101(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820c32b0
	if (ctx.cr6.eq) goto loc_820C32B0;
loc_820C32AC:
	// b 0x820c32cc
	goto loc_820C32CC;
loc_820C32B0:
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x820a5e80
	ctx.lr = 0x820C32CC;
	sub_820A5E80(ctx, base);
loc_820C32CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C32DC"))) PPC_WEAK_FUNC(sub_820C32DC);
PPC_FUNC_IMPL(__imp__sub_820C32DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C32E0"))) PPC_WEAK_FUNC(sub_820C32E0);
PPC_FUNC_IMPL(__imp__sub_820C32E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x820C32E8;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r8,r9,36852
	ctx.r8.u64 = ctx.r9.u64 | 36852;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// rotlwi r11,r30,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 2);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rotlwi r10,r11,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f31,f0,f11
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f30,f13,f10
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f29,f12,f9
	ctx.f29.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// bl 0x820a8b20
	ctx.lr = 0x820C3360;
	sub_820A8B20(ctx, base);
	// lfs f11,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfd f9,-4832(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// lfd f8,-4840(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// fmadds f13,f10,f10,f7
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// frsqrte f0,f13
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f13.f64)));
	// fmul f6,f13,f0
	ctx.f6.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f5,f0,f9
	ctx.f5.f64 = ctx.f0.f64 * ctx.f9.f64;
	// fnmsub f4,f6,f0,f8
	ctx.f4.f64 = -(ctx.f6.f64 * ctx.f0.f64 - ctx.f8.f64);
	// fmadd f0,f4,f5,f0
	ctx.f0.f64 = ctx.f4.f64 * ctx.f5.f64 + ctx.f0.f64;
	// fmul f3,f13,f0
	ctx.f3.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f2,f0,f9
	ctx.f2.f64 = ctx.f0.f64 * ctx.f9.f64;
	// fnmsub f1,f3,f0,f8
	ctx.f1.f64 = -(ctx.f3.f64 * ctx.f0.f64 - ctx.f8.f64);
	// fmadd f0,f1,f2,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f2.f64 + ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmadds f12,f12,f29,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmadds f0,f31,f0,f12
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f12.f64));
	// bne cr6,0x820c33dc
	if (!ctx.cr6.eq) goto loc_820C33DC;
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// b 0x820c33fc
	goto loc_820C33FC;
loc_820C33DC:
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rotlwi r11,r5,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
loc_820C33FC:
	// fsubs f9,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f1,f9,f13,f0
	ctx.f1.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C3418"))) PPC_WEAK_FUNC(sub_820C3418);
PPC_FUNC_IMPL(__imp__sub_820C3418) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x820c3210
	ctx.lr = 0x820C344C;
	sub_820C3210(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820aab50
	ctx.lr = 0x820C3458;
	sub_820AAB50(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,14(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820c3574
	if (!ctx.cr6.eq) goto loc_820C3574;
	// lhz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x820c3574
	if (!ctx.cr6.eq) goto loc_820C3574;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r3,34
	ctx.r3.s64 = 2228224;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfs f4,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f3,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lhz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r11,r6,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r10,r3,36852
	ctx.r10.u64 = ctx.r3.u64 | 36852;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// rotlwi r6,r4,4
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 4);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// rotlwi r5,r5,4
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 4);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r5,r10
	ctx.r11.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f7,136(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// lfs f6,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fsubs f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fsubs f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fsubs f11,f0,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// lfs f0,-27244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r4,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// std r3,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r3.u64);
	// b 0x820c35c4
	goto loc_820C35C4;
loc_820C3574:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820aab50
	ctx.lr = 0x820C3580;
	sub_820AAB50(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
loc_820C35C4:
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

__attribute__((alias("__imp__sub_820C35DC"))) PPC_WEAK_FUNC(sub_820C35DC);
PPC_FUNC_IMPL(__imp__sub_820C35DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C35E0"))) PPC_WEAK_FUNC(sub_820C35E0);
PPC_FUNC_IMPL(__imp__sub_820C35E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x820C35E8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// bl 0x820a9700
	ctx.lr = 0x820C3630;
	sub_820A9700(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820c37c0
	if (ctx.cr6.eq) goto loc_820C37C0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_820C3640:
	// clrlwi r7,r29,24
	ctx.r7.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c36f0
	if (ctx.cr6.eq) goto loc_820C36F0;
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// li r4,2
	ctx.r4.s64 = 2;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820c3668
	if (ctx.cr6.eq) goto loc_820C3668;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x820c3684
	goto loc_820C3684;
loc_820C3668:
	// rlwinm r5,r30,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820c3680
	if (ctx.cr6.eq) goto loc_820C3680;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x820c3684
	goto loc_820C3684;
loc_820C3680:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C3684:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c36dc
	if (ctx.cr6.eq) goto loc_820C36DC;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a8720
	ctx.lr = 0x820C36A0;
	sub_820A8720(ctx, base);
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820c36d4
	if (ctx.cr6.eq) goto loc_820C36D4;
	// clrlwi r8,r26,24
	ctx.r8.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820c37bc
	if (!ctx.cr6.eq) goto loc_820C37BC;
	// rlwimi r11,r28,0,31,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r11.u64 & 0xFE);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// b 0x820c3778
	goto loc_820C3778;
loc_820C36D4:
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x820c3778
	goto loc_820C3778;
loc_820C36DC:
	// clrlwi r7,r26,24
	ctx.r7.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820c3798
	if (!ctx.cr6.eq) goto loc_820C3798;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x820c3778
	goto loc_820C3778;
loc_820C36F0:
	// rlwinm r6,r30,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820c3704
	if (ctx.cr6.eq) goto loc_820C3704;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x820c3710
	goto loc_820C3710;
loc_820C3704:
	// rlwinm r5,r30,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// subfic r4,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r5.s64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820C3710:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820c3768
	if (ctx.cr6.eq) goto loc_820C3768;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c3210
	ctx.lr = 0x820C3730;
	sub_820C3210(ctx, base);
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820c3760
	if (ctx.cr6.eq) goto loc_820C3760;
	// clrlwi r8,r27,24
	ctx.r8.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820c37bc
	if (!ctx.cr6.eq) goto loc_820C37BC;
	// rlwimi r11,r28,0,31,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r11.u64 & 0xFE);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// b 0x820c3774
	goto loc_820C3774;
loc_820C3760:
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x820c3778
	goto loc_820C3778;
loc_820C3768:
	// clrlwi r7,r27,24
	ctx.r7.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820c37b0
	if (!ctx.cr6.eq) goto loc_820C37B0;
loc_820C3774:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_820C3778:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a9700
	ctx.lr = 0x820C3784;
	sub_820A9700(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x820c3640
	if (!ctx.cr6.eq) goto loc_820C3640;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_820C3798:
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// lbz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r5,r6,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r5,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r5.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_820C37B0:
	// lbz r4,6(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r3,r4,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r3,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r3.u8);
loc_820C37BC:
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
loc_820C37C0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C37C8"))) PPC_WEAK_FUNC(sub_820C37C8);
PPC_FUNC_IMPL(__imp__sub_820C37C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x820C37D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x820c3974
	if (ctx.cr6.eq) goto loc_820C3974;
	// li r28,1
	ctx.r28.s64 = 1;
loc_820C380C:
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bge cr6,0x820c390c
	if (!ctx.cr6.lt) goto loc_820C390C;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820c38b0
	if (ctx.cr6.eq) goto loc_820C38B0;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x820c383c
	if (!ctx.cr6.gt) goto loc_820C383C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x820c3848
	goto loc_820C3848;
loc_820C383C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820C3848:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a8720
	ctx.lr = 0x820C3858;
	sub_820A8720(ctx, base);
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c38a4
	if (ctx.cr6.eq) goto loc_820C38A4;
	// rlwimi r11,r28,0,31,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r11.u64 & 0xFE);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// bl 0x820a8720
	ctx.lr = 0x820C3884;
	sub_820A8720(ctx, base);
	// lbz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// not r5,r6
	ctx.r5.u64 = ~ctx.r6.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820c390c
	if (!ctx.cr6.eq) goto loc_820C390C;
	// subf r26,r29,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r29.s64;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x820c3904
	goto loc_820C3904;
loc_820C38A4:
	// add r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 + ctx.r26.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x820c3904
	goto loc_820C3904;
loc_820C38B0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bgt cr6,0x820c38c0
	if (ctx.cr6.gt) goto loc_820C38C0;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_820C38C0:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// extsb r4,r30
	ctx.r4.s64 = ctx.r30.s8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c3210
	ctx.lr = 0x820C38D4;
	sub_820C3210(ctx, base);
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c38f8
	if (ctx.cr6.eq) goto loc_820C38F8;
	// rlwimi r11,r28,0,31,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r11.u64 & 0xFE);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// b 0x820c3904
	goto loc_820C3904;
loc_820C38F8:
	// extsb r9,r30
	ctx.r9.s64 = ctx.r30.s8;
	// li r25,0
	ctx.r25.s64 = 0;
	// subf r27,r9,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r9.s64;
loc_820C3904:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x820c380c
	if (!ctx.cr6.eq) goto loc_820C380C;
loc_820C390C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x820c3974
	if (ctx.cr6.eq) goto loc_820C3974;
	// ble cr6,0x820c3924
	if (!ctx.cr6.gt) goto loc_820C3924;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,-1
	ctx.r29.s64 = -1;
	// b 0x820c392c
	goto loc_820C392C;
loc_820C3924:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_820C392C:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a8720
	ctx.lr = 0x820C3940;
	sub_820A8720(ctx, base);
	// lbz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// not r7,r8
	ctx.r7.u64 = ~ctx.r8.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820c3968
	if (!ctx.cr6.eq) goto loc_820C3968;
	// add r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 + ctx.r26.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x820c392c
	if (!ctx.cr6.eq) goto loc_820C392C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_820C3968:
	// lbz r5,6(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// ori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 | 1;
	// stb r4,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r4.u8);
loc_820C3974:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C397C"))) PPC_WEAK_FUNC(sub_820C397C);
PPC_FUNC_IMPL(__imp__sub_820C397C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3980"))) PPC_WEAK_FUNC(sub_820C3980);
PPC_FUNC_IMPL(__imp__sub_820C3980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820C3988;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r31,r4
	ctx.r31.s64 = ctx.r4.s16;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// beq cr6,0x820c3aa0
	if (ctx.cr6.eq) goto loc_820C3AA0;
loc_820C39A8:
	// lbz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820c3aac
	if (!ctx.cr6.eq) goto loc_820C3AAC;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x820c39f8
	if (ctx.cr6.eq) goto loc_820C39F8;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820c39fc
	if (!ctx.cr6.eq) goto loc_820C39FC;
loc_820C39F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C39FC:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820c3ad0
	if (ctx.cr6.eq) goto loc_820C3AD0;
	// clrlwi r7,r29,31
	ctx.r7.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820c3a48
	if (!ctx.cr6.eq) goto loc_820C3A48;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x820c3a28
	if (ctx.cr6.eq) goto loc_820C3A28;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820c3a2c
	if (!ctx.cr6.eq) goto loc_820C3A2C;
loc_820C3A28:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820C3A2C:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820c3a48
	if (ctx.cr6.eq) goto loc_820C3A48;
	// rlwinm r4,r29,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820c3ad0
	if (!ctx.cr6.eq) goto loc_820C3AD0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_820C3A48:
	// rlwinm r3,r29,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c3a7c
	if (!ctx.cr6.eq) goto loc_820C3A7C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x820c3a68
	if (ctx.cr6.eq) goto loc_820C3A68;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820c3a6c
	if (!ctx.cr6.eq) goto loc_820C3A6C;
loc_820C3A68:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820C3A6C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c3a7c
	if (ctx.cr6.eq) goto loc_820C3A7C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_820C3A7C:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c3210
	ctx.lr = 0x820C3A90;
	sub_820C3210(ctx, base);
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x820c39a8
	if (!ctx.cr6.eq) goto loc_820C39A8;
loc_820C3AA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820C3AAC:
	// rlwinm r8,r29,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820c3ac4
	if (ctx.cr6.eq) goto loc_820C3AC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820C3AC4:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820C3AD0:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C3ADC"))) PPC_WEAK_FUNC(sub_820C3ADC);
PPC_FUNC_IMPL(__imp__sub_820C3ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3AE0"))) PPC_WEAK_FUNC(sub_820C3AE0);
PPC_FUNC_IMPL(__imp__sub_820C3AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x820C3AE8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
loc_820C3B2C:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c3b4c
	if (ctx.cr6.eq) goto loc_820C3B4C;
	// clrlwi r7,r26,24
	ctx.r7.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820c3c48
	if (!ctx.cr6.eq) goto loc_820C3C48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c3bc0
	if (!ctx.cr6.eq) goto loc_820C3BC0;
loc_820C3B4C:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a8720
	ctx.lr = 0x820C3B60;
	sub_820A8720(ctx, base);
	// lbz r6,86(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// not r5,r6
	ctx.r5.u64 = ~ctx.r6.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820c3b7c
	if (ctx.cr6.eq) goto loc_820C3B7C;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x820c3c40
	goto loc_820C3C40;
loc_820C3B7C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c3980
	ctx.lr = 0x820C3B8C;
	sub_820C3980(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c3b9c
	if (!ctx.cr6.eq) goto loc_820C3B9C;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x820c3bac
	goto loc_820C3BAC;
loc_820C3B9C:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r11,5
	ctx.r11.s64 = 5;
	// beq cr6,0x820c3bac
	if (ctx.cr6.eq) goto loc_820C3BAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C3BAC:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x820c3bc0
	if (!ctx.cr6.gt) goto loc_820C3BC0;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// std r3,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r3.u64);
loc_820C3BC0:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c3c40
	if (!ctx.cr6.eq) goto loc_820C3C40;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820a8720
	ctx.lr = 0x820C3BE0;
	sub_820A8720(ctx, base);
	// lbz r10,94(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 94);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820c3bfc
	if (ctx.cr6.eq) goto loc_820C3BFC;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x820c3c40
	goto loc_820C3C40;
loc_820C3BFC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c3980
	ctx.lr = 0x820C3C0C;
	sub_820C3980(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c3c1c
	if (!ctx.cr6.eq) goto loc_820C3C1C;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x820c3c2c
	goto loc_820C3C2C;
loc_820C3C1C:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r11,5
	ctx.r11.s64 = 5;
	// beq cr6,0x820c3c2c
	if (ctx.cr6.eq) goto loc_820C3C2C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C3C2C:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x820c3c40
	if (!ctx.cr6.gt) goto loc_820C3C40;
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// std r7,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r7.u64);
loc_820C3C40:
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// bne cr6,0x820c3b2c
	if (!ctx.cr6.eq) goto loc_820C3B2C;
loc_820C3C48:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x820c3c5c
	if (!ctx.cr6.eq) goto loc_820C3C5C;
	// lbz r6,6(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// rlwinm r5,r6,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r5,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r5.u8);
loc_820C3C5C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C3C64"))) PPC_WEAK_FUNC(sub_820C3C64);
PPC_FUNC_IMPL(__imp__sub_820C3C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C3C68"))) PPC_WEAK_FUNC(sub_820C3C68);
PPC_FUNC_IMPL(__imp__sub_820C3C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad4
	ctx.lr = 0x820C3C70;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8259bb9c
	ctx.lr = 0x820C3C78;
	__savefpr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f30,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// li r22,-1
	ctx.r22.s64 = -1;
	// lfs f26,-1548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1548);
	ctx.f26.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r21,40(r24)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r24.u32 + 40);
	// fmr f27,f26
	ctx.f27.f64 = ctx.f26.f64;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f28,-10176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10176);
	ctx.f28.f64 = double(temp.f32);
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// ble cr6,0x820c3edc
	if (!ctx.cr6.gt) goto loc_820C3EDC;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// lhz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 4);
	// addi r31,r24,8
	ctx.r31.s64 = ctx.r24.s64 + 8;
	// ori r3,r4,36836
	ctx.r3.u64 = ctx.r4.u64 | 36836;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lhzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// lwzx r29,r11,r3
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// extsh r26,r5
	ctx.r26.s64 = ctx.r5.s16;
loc_820C3D00:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820ab130
	ctx.lr = 0x820C3D18;
	sub_820AB130(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c3ec8
	if (ctx.cr6.eq) goto loc_820C3EC8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r24
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r24.u32);
	// rotlwi r11,r8,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820c3d54
	if (!ctx.cr6.eq) goto loc_820C3D54;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_820C3D54:
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820c3d68
	if (ctx.cr6.eq) goto loc_820C3D68;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x820c3d90
	goto loc_820C3D90;
loc_820C3D68:
	// rlwinm r5,r11,0,17,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820c3d7c
	if (!ctx.cr6.eq) goto loc_820C3D7C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_820C3D7C:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820c3d90
	if (!ctx.cr6.eq) goto loc_820C3D90;
	// li r11,2
	ctx.r11.s64 = 2;
loc_820C3D90:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820c3ea8
	if (!ctx.cr6.eq) goto loc_820C3EA8;
	// lbz r3,6(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c3ec8
	if (ctx.cr6.eq) goto loc_820C3EC8;
	// clrlwi r10,r19,24
	ctx.r10.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c3e08
	if (ctx.cr6.eq) goto loc_820C3E08;
	// lbz r9,41(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 41);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r4,3(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// rlwinm r3,r4,0,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c3dfc
	if (!ctx.cr6.eq) goto loc_820C3DFC;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_820C3DFC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c3ec8
	if (ctx.cr6.eq) goto loc_820C3EC8;
loc_820C3E08:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820aab50
	ctx.lr = 0x820C3E14;
	sub_820AAB50(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, ctx.f28.f64);
	// bgt cr6,0x820c3e2c
	if (ctx.cr6.gt) goto loc_820C3E2C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_820C3E2C:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820c3ec8
	if (ctx.cr6.eq) goto loc_820C3EC8;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// blt cr6,0x820c3e90
	if (ctx.cr6.lt) goto loc_820C3E90;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
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
	// beq cr6,0x820c3e80
	if (ctx.cr6.eq) goto loc_820C3E80;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820c3e84
	if (!ctx.cr6.eq) goto loc_820C3E84;
loc_820C3E80:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_820C3E84:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c3ec8
	if (ctx.cr6.eq) goto loc_820C3EC8;
loc_820C3E90:
	// stb r30,41(r24)
	PPC_STORE_U8(ctx.r24.u32 + 41, ctx.r30.u8);
loc_820C3E94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8259bbe8
	ctx.lr = 0x820C3EA4;
	__restfpr_25(ctx, base);
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
loc_820C3EA8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820c3ec8
	if (!ctx.cr6.eq) goto loc_820C3EC8;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// bge cr6,0x820c3ec8
	if (!ctx.cr6.lt) goto loc_820C3EC8;
	// li r25,1
	ctx.r25.s64 = 1;
loc_820C3EC8:
	// lbz r8,40(r24)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r24.u32 + 40);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820c3d00
	if (ctx.cr6.lt) goto loc_820C3D00;
loc_820C3EDC:
	// clrlwi r5,r28,24
	ctx.r5.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820c3fbc
	if (!ctx.cr6.eq) goto loc_820C3FBC;
	// addi r4,r21,-1
	ctx.r4.s64 = ctx.r21.s64 + -1;
	// cmpw cr6,r27,r4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820c3fbc
	if (!ctx.cr6.eq) goto loc_820C3FBC;
	// lbz r3,6(r24)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r24.u32 + 6);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c3fbc
	if (ctx.cr6.eq) goto loc_820C3FBC;
	// clrlwi r10,r19,24
	ctx.r10.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c3f54
	if (ctx.cr6.eq) goto loc_820C3F54;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lhz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r5,3(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// rlwinm r4,r5,0,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820c3f48
	if (!ctx.cr6.eq) goto loc_820C3F48;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_820C3F48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c3fbc
	if (ctx.cr6.eq) goto loc_820C3FBC;
loc_820C3F54:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820aab50
	ctx.lr = 0x820C3F60;
	sub_820AAB50(ctx, base);
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f11,f28
	ctx.cr6.compare(ctx.f11.f64, ctx.f28.f64);
	// bgt cr6,0x820c3f78
	if (ctx.cr6.gt) goto loc_820C3F78;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_820C3F78:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c3fbc
	if (ctx.cr6.eq) goto loc_820C3FBC;
	// clrlwi r9,r25,24
	ctx.r9.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820c3fa8
	if (ctx.cr6.eq) goto loc_820C3FA8;
loc_820C3F90:
	// stb r20,41(r24)
	PPC_STORE_U8(ctx.r24.u32 + 41, ctx.r20.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8259bbe8
	ctx.lr = 0x820C3FA4;
	__restfpr_25(ctx, base);
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
loc_820C3FA8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820a5df0
	ctx.lr = 0x820C3FB0;
	sub_820A5DF0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820c3f90
	if (!ctx.cr6.eq) goto loc_820C3F90;
loc_820C3FBC:
	// lbz r7,41(r24)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + 41);
	// rotlwi r11,r7,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// add r28,r11,r24
	ctx.r28.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r6,6(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6);
	// lfs f25,-1608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1608);
	ctx.f25.f64 = double(temp.f32);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820c4104
	if (ctx.cr6.eq) goto loc_820C4104;
	// clrlwi r4,r19,24
	ctx.r4.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820c4030
	if (ctx.cr6.eq) goto loc_820C4030;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r7,3(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// rlwinm r6,r7,0,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820c4024
	if (!ctx.cr6.eq) goto loc_820C4024;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_820C4024:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820c4104
	if (ctx.cr6.eq) goto loc_820C4104;
loc_820C4030:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820aab50
	ctx.lr = 0x820C403C;
	sub_820AAB50(ctx, base);
	// lfs f10,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f30,f10
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bgt cr6,0x820c4054
	if (ctx.cr6.gt) goto loc_820C4054;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_820C4054:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4104
	if (ctx.cr6.eq) goto loc_820C4104;
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x820c4104
	if (!ctx.cr6.lt) goto loc_820C4104;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r23,1
	ctx.r23.s64 = 1;
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r6,3(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820c40a8
	if (ctx.cr6.eq) goto loc_820C40A8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x820c40ac
	if (!ctx.cr6.eq) goto loc_820C40AC;
loc_820C40A8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820C40AC:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820c4104
	if (!ctx.cr6.eq) goto loc_820C4104;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,3(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// clrlwi r11,r7,29
	ctx.r11.u64 = ctx.r7.u32 & 0x7;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820c40f4
	if (ctx.cr6.eq) goto loc_820C40F4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820c40f8
	if (!ctx.cr6.eq) goto loc_820C40F8;
loc_820C40F4:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_820C40F8:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820c3e94
	if (!ctx.cr6.eq) goto loc_820C3E94;
loc_820C4104:
	// clrlwi r4,r23,24
	ctx.r4.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820c433c
	if (!ctx.cr6.eq) goto loc_820C433C;
	// li r26,-1
	ctx.r26.s64 = -1;
	// fmr f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f26.f64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// fmr f29,f26
	ctx.f29.f64 = ctx.f26.f64;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x820c4268
	if (!ctx.cr6.gt) goto loc_820C4268;
	// lbz r29,40(r24)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r24.u32 + 40);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_820C4134:
	// lbz r3,6(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c4248
	if (ctx.cr6.eq) goto loc_820C4248;
	// clrlwi r10,r19,24
	ctx.r10.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c4194
	if (ctx.cr6.eq) goto loc_820C4194;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r5,3(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// rlwinm r4,r5,0,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820c4188
	if (!ctx.cr6.eq) goto loc_820C4188;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_820C4188:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c4248
	if (ctx.cr6.eq) goto loc_820C4248;
loc_820C4194:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820aab50
	ctx.lr = 0x820C41A0;
	sub_820AAB50(ctx, base);
	// lfs f9,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f30,f9
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f9.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bgt cr6,0x820c41b8
	if (ctx.cr6.gt) goto loc_820C41B8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_820C41B8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c41d8
	if (ctx.cr6.eq) goto loc_820C41D8;
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x820c4248
	if (!ctx.cr6.lt) goto loc_820C4248;
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// b 0x820c4248
	goto loc_820C4248;
loc_820C41D8:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820c41ec
	if (!ctx.cr6.lt) goto loc_820C41EC;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_820C41EC:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r5,3(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820c4228
	if (ctx.cr6.eq) goto loc_820C4228;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820c422c
	if (!ctx.cr6.eq) goto loc_820C422C;
loc_820C4228:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_820C422C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c4248
	if (ctx.cr6.eq) goto loc_820C4248;
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x820c4248
	if (!ctx.cr6.lt) goto loc_820C4248;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_820C4248:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x820c4134
	if (ctx.cr6.lt) goto loc_820C4134;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// bne cr6,0x820c42e0
	if (!ctx.cr6.eq) goto loc_820C42E0;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x820c4288
	if (!ctx.cr6.eq) goto loc_820C4288;
loc_820C4268:
	// lbz r11,6(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 6);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,6(r28)
	PPC_STORE_U8(ctx.r28.u32 + 6, ctx.r10.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8259bbe8
	ctx.lr = 0x820C4284;
	__restfpr_25(ctx, base);
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
loc_820C4288:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1672);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x820c42ac
	if (!ctx.cr6.lt) goto loc_820C42AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8259bbe8
	ctx.lr = 0x820C42A8;
	__restfpr_25(ctx, base);
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
loc_820C42AC:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x820c42cc
	if (ctx.cr6.eq) goto loc_820C42CC;
	// stb r27,41(r24)
	PPC_STORE_U8(ctx.r24.u32 + 41, ctx.r27.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8259bbe8
	ctx.lr = 0x820C42C8;
	__restfpr_25(ctx, base);
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
loc_820C42CC:
	// stb r26,41(r24)
	PPC_STORE_U8(ctx.r24.u32 + 41, ctx.r26.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8259bbe8
	ctx.lr = 0x820C42DC;
	__restfpr_25(ctx, base);
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
loc_820C42E0:
	// rlwinm r11,r22,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r22,41(r24)
	PPC_STORE_U8(ctx.r24.u32 + 41, ctx.r22.u8);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820c4328
	if (ctx.cr6.eq) goto loc_820C4328;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x820c432c
	if (!ctx.cr6.eq) goto loc_820C432C;
loc_820C4328:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820C432C:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820c3e94
	if (ctx.cr6.eq) goto loc_820C3E94;
	// fmr f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f26.f64;
loc_820C433C:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x820c3e94
	if (!ctx.cr6.gt) goto loc_820C3E94;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_820C434C:
	// lbz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c4454
	if (ctx.cr6.eq) goto loc_820C4454;
	// clrlwi r6,r19,24
	ctx.r6.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820c43ac
	if (ctx.cr6.eq) goto loc_820C43AC;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820c43a0
	if (!ctx.cr6.eq) goto loc_820C43A0;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_820C43A0:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c4454
	if (ctx.cr6.eq) goto loc_820C4454;
loc_820C43AC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820aab50
	ctx.lr = 0x820C43B8;
	sub_820AAB50(ctx, base);
	// lfs f8,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f30,f8
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f8.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bgt cr6,0x820c43d0
	if (ctx.cr6.gt) goto loc_820C43D0;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_820C43D0:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820c4454
	if (ctx.cr6.eq) goto loc_820C4454;
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x820c4454
	if (!ctx.cr6.lt) goto loc_820C4454;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820c4420
	if (ctx.cr6.eq) goto loc_820C4420;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// bne cr6,0x820c4424
	if (!ctx.cr6.eq) goto loc_820C4424;
loc_820C4420:
	// li r10,1
	ctx.r10.s64 = 1;
loc_820C4424:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820c4454
	if (!ctx.cr6.eq) goto loc_820C4454;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820c4444
	if (ctx.cr6.eq) goto loc_820C4444;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820c4448
	if (!ctx.cr6.eq) goto loc_820C4448;
loc_820C4444:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_820C4448:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820c3e90
	if (!ctx.cr6.eq) goto loc_820C3E90;
loc_820C4454:
	// lbz r5,40(r24)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r24.u32 + 40);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820c434c
	if (ctx.cr6.lt) goto loc_820C434C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8259bbe8
	ctx.lr = 0x820C4478;
	__restfpr_25(ctx, base);
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C447C"))) PPC_WEAK_FUNC(sub_820C447C);
PPC_FUNC_IMPL(__imp__sub_820C447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4480"))) PPC_WEAK_FUNC(sub_820C4480);
PPC_FUNC_IMPL(__imp__sub_820C4480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x820C4488;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f31,-1548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1548);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// sth r29,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r29.u16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r28,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r28.u8);
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x820a8850
	ctx.lr = 0x820C44D4;
	sub_820A8850(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820c4560
	if (ctx.cr6.eq) goto loc_820C4560;
loc_820C44E8:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r29,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r29.u16);
	// stb r28,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r28.u8);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x820aab50
	ctx.lr = 0x820C4504;
	sub_820AAB50(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f0,f8,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fmadds f7,f13,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f0,f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x820c4548
	if (!ctx.cr6.lt) goto loc_820C4548;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// std r5,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
loc_820C4548:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820c44e8
	if (ctx.cr6.lt) goto loc_820C44E8;
loc_820C4560:
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
	// bl 0x820c35e0
	ctx.lr = 0x820C4588;
	sub_820C35E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C4594"))) PPC_WEAK_FUNC(sub_820C4594);
PPC_FUNC_IMPL(__imp__sub_820C4594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4598"))) PPC_WEAK_FUNC(sub_820C4598);
PPC_FUNC_IMPL(__imp__sub_820C4598) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// li r31,1
	ctx.r31.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x820c4674
	if (!ctx.cr6.gt) goto loc_820C4674;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,21845
	ctx.r10.s64 = 1431633920;
	// addi r6,r3,34
	ctx.r6.s64 = ctx.r3.s64 + 34;
	// addi r5,r11,28544
	ctx.r5.s64 = ctx.r11.s64 + 28544;
	// ori r7,r10,21846
	ctx.r7.u64 = ctx.r10.u64 | 21846;
loc_820C45C4:
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// ori r8,r9,36836
	ctx.r8.u64 = ctx.r9.u64 | 36836;
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lwzx r9,r5,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mulhw r10,r8,r7
	ctx.r10.s64 = (int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32)) >> 32;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x820c4660
	if (!ctx.cr6.gt) goto loc_820C4660;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820c4660
	if (!ctx.cr6.lt) goto loc_820C4660;
	// lbz r9,41(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x820c4654
	if (!ctx.cr6.eq) goto loc_820C4654;
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// clrlwi r10,r8,18
	ctx.r10.u64 = ctx.r8.u32 & 0x3FFF;
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// b 0x820c4660
	goto loc_820C4660;
loc_820C4654:
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwimi r8,r31,14,0,17
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r31.u32, 14) & 0xFFFFC000) | (ctx.r8.u64 & 0xFFFFFFFF00003FFF);
	// sth r8,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r8.u16);
loc_820C4660:
	// lbz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820c45c4
	if (ctx.cr6.lt) goto loc_820C45C4;
loc_820C4674:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C467C"))) PPC_WEAK_FUNC(sub_820C467C);
PPC_FUNC_IMPL(__imp__sub_820C467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4680"))) PPC_WEAK_FUNC(sub_820C4680);
PPC_FUNC_IMPL(__imp__sub_820C4680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820C4688;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r31,560
	ctx.r11.s64 = ctx.r31.s64 + 560;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r9,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r9.u32);
	// stw r9,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r9.u32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r8,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r8.u32);
	// stb r7,499(r31)
	PPC_STORE_U8(ctx.r31.u32 + 499, ctx.r7.u8);
	// lfs f31,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// addi r10,r31,592
	ctx.r10.s64 = ctx.r31.s64 + 592;
	// lbz r6,6(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// rlwinm r5,r6,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r5,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r5.u8);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lbz r4,6(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// rlwinm r3,r4,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r3,6(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6, ctx.r3.u8);
	// stfs f31,0(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f31,4(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f31,8(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lbz r11,474(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 474);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c4754
	if (ctx.cr6.eq) goto loc_820C4754;
	// addi r30,r31,468
	ctx.r30.s64 = ctx.r31.s64 + 468;
	// addi r4,r31,624
	ctx.r4.s64 = ctx.r31.s64 + 624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820aab50
	ctx.lr = 0x820C4718;
	sub_820AAB50(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// addi r29,r31,656
	ctx.r29.s64 = ctx.r31.s64 + 656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// bl 0x820aab50
	ctx.lr = 0x820C473C;
	sub_820AAB50(ctx, base);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r29,16
	ctx.r5.s64 = ctx.r29.s64 + 16;
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// b 0x820c4794
	goto loc_820C4794;
loc_820C4754:
	// addi r11,r31,624
	ctx.r11.s64 = ctx.r31.s64 + 624;
	// addi r10,r31,656
	ctx.r10.s64 = ctx.r31.s64 + 656;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lbz r3,6(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// rlwinm r7,r3,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r7,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r7.u8);
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lbz r6,6(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// rlwinm r5,r6,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r5,6(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6, ctx.r5.u8);
	// stfs f31,0(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f31,4(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f31,8(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_820C4794:
	// addi r11,r31,724
	ctx.r11.s64 = ctx.r31.s64 + 724;
	// addi r10,r31,732
	ctx.r10.s64 = ctx.r31.s64 + 732;
	// li r9,16
	ctx.r9.s64 = 16;
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// rlwinm r3,r4,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r3,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r3.u8);
	// lbz r11,6(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r8,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r8.u8);
	// stw r9,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r9.u32);
	// stw r9,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r9.u32);
	// stw r9,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r9.u32);
	// stfs f31,528(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// stfs f31,532(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// stfs f31,536(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C47DC"))) PPC_WEAK_FUNC(sub_820C47DC);
PPC_FUNC_IMPL(__imp__sub_820C47DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C47E0"))) PPC_WEAK_FUNC(sub_820C47E0);
PPC_FUNC_IMPL(__imp__sub_820C47E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820C47E8;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820c48d0
	if (!ctx.cr6.eq) goto loc_820C48D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,712(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820c48d0
	if (!ctx.cr6.gt) goto loc_820C48D0;
	// lbz r10,513(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 513);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c4830
	if (ctx.cr6.eq) goto loc_820C4830;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-10536(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10536);
	ctx.f13.f64 = double(temp.f32);
	// b 0x820c4838
	goto loc_820C4838;
loc_820C4830:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,11268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11268);
	ctx.f13.f64 = double(temp.f32);
loc_820C4838:
	// lwz r9,504(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// fmuls f31,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820c48c8
	if (!ctx.cr6.eq) goto loc_820C48C8;
	// addi r30,r31,468
	ctx.r30.s64 = ctx.r31.s64 + 468;
	// addi r29,r31,576
	ctx.r29.s64 = ctx.r31.s64 + 576;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bl 0x820a8968
	ctx.lr = 0x820C486C;
	sub_820A8968(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820ab040
	ctx.lr = 0x820C4878;
	sub_820AB040(ctx, base);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,18240(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18240);
	// lwz r10,516(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 516);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// bl 0x820c32e0
	ctx.lr = 0x820C48AC;
	sub_820C32E0(ctx, base);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// fsubs f13,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
	// addi r11,r11,-1816
	ctx.r11.s64 = ctx.r11.s64 + -1816;
	// lfs f0,140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f13,f0,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f31.f64));
	// stfs f12,464(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// b 0x820c48dc
	goto loc_820C48DC;
loc_820C48C8:
	// stfs f31,464(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// b 0x820c48dc
	goto loc_820C48DC;
loc_820C48D0:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f11,18180(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 18180);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,464(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
loc_820C48DC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,18180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 18180);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f9,f10,f13,f0
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f9,464(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C4904"))) PPC_WEAK_FUNC(sub_820C4904);
PPC_FUNC_IMPL(__imp__sub_820C4904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4908"))) PPC_WEAK_FUNC(sub_820C4908);
PPC_FUNC_IMPL(__imp__sub_820C4908) {
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
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x820c3ae0
	ctx.lr = 0x820C493C;
	sub_820C3AE0(ctx, base);
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c49bc
	if (ctx.cr6.eq) goto loc_820C49BC;
loc_820C4954:
	// lbz r4,6(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r11,r4,1
	ctx.r11.u64 = ctx.r4.u64 | 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// bl 0x820c3210
	ctx.lr = 0x820C4974;
	sub_820C3210(ctx, base);
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820c49a4
	if (ctx.cr6.eq) goto loc_820C49A4;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c3ae0
	ctx.lr = 0x820C49A4;
	sub_820C3AE0(ctx, base);
loc_820C49A4:
	// lbz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c4954
	if (!ctx.cr6.eq) goto loc_820C4954;
loc_820C49BC:
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

__attribute__((alias("__imp__sub_820C49D4"))) PPC_WEAK_FUNC(sub_820C49D4);
PPC_FUNC_IMPL(__imp__sub_820C49D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C49D8"))) PPC_WEAK_FUNC(sub_820C49D8);
PPC_FUNC_IMPL(__imp__sub_820C49D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x820C49E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
	// beq cr6,0x820c4a08
	if (ctx.cr6.eq) goto loc_820C4A08;
	// li r30,1
	ctx.r30.s64 = 1;
loc_820C4A08:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820a8720
	ctx.lr = 0x820C4A1C;
	sub_820A8720(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c3980
	ctx.lr = 0x820C4A2C;
	sub_820C3980(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c4a70
	if (!ctx.cr6.eq) goto loc_820C4A70;
loc_820C4A38:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a8720
	ctx.lr = 0x820C4A4C;
	sub_820A8720(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c3980
	ctx.lr = 0x820C4A5C;
	sub_820C3980(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c4a6c
	if (!ctx.cr6.eq) goto loc_820C4A6C;
	// ld r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x820c4a38
	goto loc_820C4A38;
loc_820C4A6C:
	// std r31,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r31.u64);
loc_820C4A70:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x820c4aa4
	if (!ctx.cr6.eq) goto loc_820C4AA4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r11,r9,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// lhz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// lhz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// b 0x820c4acc
	goto loc_820C4ACC;
loc_820C4AA4:
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// rotlwi r11,r6,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// lhz r10,6(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
loc_820C4ACC:
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,712(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 712);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// lis r5,34
	ctx.r5.s64 = 2228224;
	// addi r11,r11,-1816
	ctx.r11.s64 = ctx.r11.s64 + -1816;
	// ori r4,r5,36852
	ctx.r4.u64 = ctx.r5.u64 | 36852;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fdivs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f0,2868(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfd f12,-4840(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f8,-1600(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1600);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsubs f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f0,25556(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fsel f11,f3,f12,f11
	ctx.f11.f64 = ctx.f3.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f1,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fsel f8,f11,f11,f8
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f8.f64;
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fadds f10,f2,f1
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f13,f7,f6
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// lfs f6,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// std r31,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r31.u64);
	// fadds f6,f2,f1
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsubs f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fsubs f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f10,f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fsubs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r3,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r3.u64);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,-10860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10860);
	ctx.f11.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fadds f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fcmpu cr6,f3,f11
	ctx.cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// blt cr6,0x820c4c00
	if (ctx.cr6.lt) goto loc_820C4C00;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C4C00:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c4c20
	if (ctx.cr6.eq) goto loc_820C4C20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x820c4c84
	goto loc_820C4C84;
loc_820C4C20:
	// fadds f2,f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,18244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18244);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f1,f8
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// lfd f9,-4832(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// fadds f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// frsqrte f0,f10
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f10.f64)));
	// fmul f8,f10,f0
	ctx.f8.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fmul f6,f0,f9
	ctx.f6.f64 = ctx.f0.f64 * ctx.f9.f64;
	// fnmsub f3,f8,f0,f12
	ctx.f3.f64 = -(ctx.f8.f64 * ctx.f0.f64 - ctx.f12.f64);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmadd f0,f3,f6,f0
	ctx.f0.f64 = ctx.f3.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f2,f10,f0
	ctx.f2.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fmul f1,f0,f9
	ctx.f1.f64 = ctx.f0.f64 * ctx.f9.f64;
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fnmsub f12,f2,f0,f12
	ctx.f12.f64 = -(ctx.f2.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f10,f12,f1,f0
	ctx.f10.f64 = ctx.f12.f64 * ctx.f1.f64 + ctx.f0.f64;
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
loc_820C4C84:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fadds f6,f13,f5
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fadds f5,f12,f4
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f4,f0,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x820c35e0
	ctx.lr = 0x820C4CD0;
	sub_820C35E0(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,16(r27)
	PPC_STORE_U64(ctx.r27.u32 + 16, ctx.r10.u64);
	// std r9,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r9.u64);
	// std r8,8(r27)
	PPC_STORE_U64(ctx.r27.u32 + 8, ctx.r8.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C4CF4"))) PPC_WEAK_FUNC(sub_820C4CF4);
PPC_FUNC_IMPL(__imp__sub_820C4CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4CF8"))) PPC_WEAK_FUNC(sub_820C4CF8);
PPC_FUNC_IMPL(__imp__sub_820C4CF8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r31,656
	ctx.r10.s64 = ctx.r31.s64 + 656;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// bl 0x820c2e90
	ctx.lr = 0x820C4D38;
	sub_820C2E90(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-4840(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,-1600(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1600);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fsel f0,f12,f0,f1
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fsel f11,f0,f0,f13
	ctx.f11.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f11,476(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
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

__attribute__((alias("__imp__sub_820C4D74"))) PPC_WEAK_FUNC(sub_820C4D74);
PPC_FUNC_IMPL(__imp__sub_820C4D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C4D78"))) PPC_WEAK_FUNC(sub_820C4D78);
PPC_FUNC_IMPL(__imp__sub_820C4D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x820C4D80;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// clrlwi r29,r6,16
	ctx.r29.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// beq cr6,0x820c4f90
	if (ctx.cr6.eq) goto loc_820C4F90;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
loc_820C4DA8:
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r31,0
	ctx.r31.s64 = 0;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// bl 0x820a8720
	ctx.lr = 0x820C4DC8;
	sub_820A8720(ctx, base);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c4e74
	if (ctx.cr6.eq) goto loc_820C4E74;
loc_820C4DD8:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820c4e14
	if (ctx.cr6.eq) goto loc_820C4E14;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820c4e18
	if (!ctx.cr6.eq) goto loc_820C4E18;
loc_820C4E14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C4E18:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820c4e74
	if (ctx.cr6.eq) goto loc_820C4E74;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// beq cr6,0x820c4e40
	if (ctx.cr6.eq) goto loc_820C4E40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C4E40:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820c4e70
	if (!ctx.cr6.eq) goto loc_820C4E70;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820a8720
	ctx.lr = 0x820C4E5C;
	sub_820A8720(ctx, base);
	// lbz r3,86(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c4dd8
	if (!ctx.cr6.eq) goto loc_820C4DD8;
	// b 0x820c4e74
	goto loc_820C4E74;
loc_820C4E70:
	// li r31,1
	ctx.r31.s64 = 1;
loc_820C4E74:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c4f4c
	if (!ctx.cr6.eq) goto loc_820C4F4C;
	// ld r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// bl 0x820a8720
	ctx.lr = 0x820C4E9C;
	sub_820A8720(ctx, base);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c4f4c
	if (ctx.cr6.eq) goto loc_820C4F4C;
loc_820C4EAC:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820c4ee8
	if (ctx.cr6.eq) goto loc_820C4EE8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820c4eec
	if (!ctx.cr6.eq) goto loc_820C4EEC;
loc_820C4EE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C4EEC:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820c4f4c
	if (ctx.cr6.eq) goto loc_820C4F4C;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// beq cr6,0x820c4f14
	if (ctx.cr6.eq) goto loc_820C4F14;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C4F14:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820c4f48
	if (!ctx.cr6.eq) goto loc_820C4F48;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820a8720
	ctx.lr = 0x820C4F34;
	sub_820A8720(ctx, base);
	// lbz r3,86(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c4eac
	if (!ctx.cr6.eq) goto loc_820C4EAC;
	// b 0x820c4f4c
	goto loc_820C4F4C;
loc_820C4F48:
	// li r31,1
	ctx.r31.s64 = 1;
loc_820C4F4C:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c4f9c
	if (ctx.cr6.eq) goto loc_820C4F9C;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820c3210
	ctx.lr = 0x820C4F6C;
	sub_820C3210(ctx, base);
	// lbz r9,102(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820c4f90
	if (!ctx.cr6.eq) goto loc_820C4F90;
	// add r6,r29,r28
	ctx.r6.u64 = ctx.r29.u64 + ctx.r28.u64;
	// clrlwi r29,r6,16
	ctx.r29.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820c4da8
	if (!ctx.cr6.eq) goto loc_820C4DA8;
loc_820C4F90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_820C4F9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C4FA8"))) PPC_WEAK_FUNC(sub_820C4FA8);
PPC_FUNC_IMPL(__imp__sub_820C4FA8) {
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
	// lbz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c5074
	if (ctx.cr6.eq) goto loc_820C5074;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,384(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,388(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,392(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f8,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f9,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f9.f64 = double(temp.f32);
	// std r9,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r9.u64);
	// std r8,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r8.u64);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f4,f0,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f3,f12,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fsqrts f10,f3
	ctx.f10.f64 = double(float(sqrt(ctx.f3.f64)));
	// fdivs f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmuls f2,f0,f11
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f2,0(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,18240(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18240);
	// lfs f0,188(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x820c507c
	if (!ctx.cr6.gt) goto loc_820C507C;
	// fdivs f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820C5074:
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x820ab640
	ctx.lr = 0x820C507C;
	sub_820AB640(ctx, base);
loc_820C507C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C508C"))) PPC_WEAK_FUNC(sub_820C508C);
PPC_FUNC_IMPL(__imp__sub_820C508C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5090"))) PPC_WEAK_FUNC(sub_820C5090);
PPC_FUNC_IMPL(__imp__sub_820C5090) {
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
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x820a9700
	ctx.lr = 0x820C50BC;
	sub_820A9700(ctx, base);
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820c50d0
	if (ctx.cr6.eq) goto loc_820C50D0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820c50e0
	goto loc_820C50E0;
loc_820C50D0:
	// rlwinm r9,r3,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820c5158
	if (ctx.cr6.eq) goto loc_820C5158;
	// li r31,1
	ctx.r31.s64 = 1;
loc_820C50E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a8720
	ctx.lr = 0x820C50F4;
	sub_820A8720(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820c3980
	ctx.lr = 0x820C5104;
	sub_820C3980(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x820c5168
	if (ctx.cr6.eq) goto loc_820C5168;
loc_820C510C:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820c5120
	if (!ctx.cr6.eq) goto loc_820C5120;
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// b 0x820c5128
	goto loc_820C5128;
loc_820C5120:
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
loc_820C5128:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820a8720
	ctx.lr = 0x820C513C;
	sub_820A8720(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820c3980
	ctx.lr = 0x820C514C;
	sub_820C3980(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820c510c
	if (!ctx.cr6.eq) goto loc_820C510C;
	// b 0x820c5168
	goto loc_820C5168;
loc_820C5158:
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r6,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r6.u64);
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r5,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r5.u64);
loc_820C5168:
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

__attribute__((alias("__imp__sub_820C5180"))) PPC_WEAK_FUNC(sub_820C5180);
PPC_FUNC_IMPL(__imp__sub_820C5180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820C5188;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// bge cr6,0x820c51b4
	if (!ctx.cr6.lt) goto loc_820C51B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820C51B4:
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c530c
	if (ctx.cr6.eq) goto loc_820C530C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c3210
	ctx.lr = 0x820C51D4;
	sub_820C3210(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// bl 0x820c3210
	ctx.lr = 0x820C51FC;
	sub_820C3210(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,24
	ctx.r5.s64 = ctx.r30.s64 + 24;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c3210
	ctx.lr = 0x820C5210;
	sub_820C3210(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c3210
	ctx.lr = 0x820C5224;
	sub_820C3210(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,40
	ctx.r5.s64 = ctx.r30.s64 + 40;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c3210
	ctx.lr = 0x820C5238;
	sub_820C3210(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r6,r29,-4
	ctx.r6.s64 = ctx.r29.s64 + -4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x820c525c
	if (!ctx.cr6.eq) goto loc_820C525C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r5,44(r30)
	PPC_STORE_U16(ctx.r30.u32 + 44, ctx.r5.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820C525C:
	// addi r4,r29,-3
	ctx.r4.s64 = ctx.r29.s64 + -3;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820c5284
	if (!ctx.cr6.eq) goto loc_820C5284;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r3,36(r30)
	PPC_STORE_U16(ctx.r30.u32 + 36, ctx.r3.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,44(r30)
	PPC_STORE_U16(ctx.r30.u32 + 44, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820C5284:
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820c52b4
	if (!ctx.cr6.eq) goto loc_820C52B4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r9,28(r30)
	PPC_STORE_U16(ctx.r30.u32 + 28, ctx.r9.u16);
	// sth r8,36(r30)
	PPC_STORE_U16(ctx.r30.u32 + 36, ctx.r8.u16);
	// sth r7,44(r30)
	PPC_STORE_U16(ctx.r30.u32 + 44, ctx.r7.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820C52B4:
	// addi r6,r29,-1
	ctx.r6.s64 = ctx.r29.s64 + -1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x820c52ec
	if (!ctx.cr6.eq) goto loc_820C52EC;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r3,36(r30)
	PPC_STORE_U16(ctx.r30.u32 + 36, ctx.r3.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r5,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r5.u16);
	// sth r4,28(r30)
	PPC_STORE_U16(ctx.r30.u32 + 28, ctx.r4.u16);
	// sth r11,44(r30)
	PPC_STORE_U16(ctx.r30.u32 + 44, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820C52EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c53a8
	if (!ctx.cr6.eq) goto loc_820C53A8;
	// addis r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 65536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820C530C:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r10,r29,-5
	ctx.r10.s64 = ctx.r29.s64 + -5;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x820c5324
	if (ctx.cr6.gt) goto loc_820C5324;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820c5330
	goto loc_820C5330;
loc_820C5324:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820c5330
	if (ctx.cr6.lt) goto loc_820C5330;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_820C5330:
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// bl 0x820c3210
	ctx.lr = 0x820C5350;
	sub_820C3210(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
	// bl 0x820c3210
	ctx.lr = 0x820C536C;
	sub_820C3210(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,24
	ctx.r5.s64 = ctx.r30.s64 + 24;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c3210
	ctx.lr = 0x820C5380;
	sub_820C3210(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c3210
	ctx.lr = 0x820C5394;
	sub_820C3210(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r30,40
	ctx.r5.s64 = ctx.r30.s64 + 40;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820c3210
	ctx.lr = 0x820C53A8;
	sub_820C3210(ctx, base);
loc_820C53A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C53B4"))) PPC_WEAK_FUNC(sub_820C53B4);
PPC_FUNC_IMPL(__imp__sub_820C53B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C53B8"))) PPC_WEAK_FUNC(sub_820C53B8);
PPC_FUNC_IMPL(__imp__sub_820C53B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x820C53C0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8259bba4
	ctx.lr = 0x820C53C8;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lbz r10,15480(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 15480);
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8223d0b0
	ctx.lr = 0x820C53F0;
	sub_8223D0B0(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x820C5404;
	sub_8210B3C8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,2664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2664);
	// lfs f12,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r29,r11,-10928
	ctx.r29.s64 = ctx.r11.s64 + -10928;
	// lfs f0,6484(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f27,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lbz r31,12943(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12943);
	// fmuls f30,f0,f27
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// fmuls f28,f12,f13
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f13,-15112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// beq cr6,0x820c5460
	if (ctx.cr6.eq) goto loc_820C5460;
	// lfs f11,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f27
	ctx.cr6.compare(ctx.f11.f64, ctx.f27.f64);
	// bne cr6,0x820c5460
	if (!ctx.cr6.eq) goto loc_820C5460;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ab968
	ctx.lr = 0x820C5460;
	sub_820AB968(ctx, base);
loc_820C5460:
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfd f10,-1600(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r8.u32 + -1600);
	// lfs f9,-27244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27244);
	ctx.f9.f64 = double(temp.f32);
	// lfd f12,-4840(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4840);
	// lfs f8,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f8.f64 = double(temp.f32);
	// bne cr6,0x820c54c8
	if (!ctx.cr6.eq) goto loc_820C54C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,180(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r7,15328(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15328);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x820c54a4
	if (!ctx.cr6.eq) goto loc_820C54A4;
	// lbz r11,187(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 187);
	// b 0x820c54a8
	goto loc_820C54A8;
loc_820C54A4:
	// lbz r11,186(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 186);
loc_820C54A8:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820c54c8
	if (!ctx.cr6.eq) goto loc_820C54C8;
	// lfs f7,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f0,f31,f9,f7
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f9.f64 - ctx.f7.f64)));
	// fsel f6,f0,f0,f10
	ctx.f6.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// stfs f6,20(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// b 0x820c54e4
	goto loc_820C54E4;
loc_820C54C8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f5,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,-15116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15116);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f31,f0,f5
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f0.f64 - ctx.f5.f64)));
	// fsubs f4,f0,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsel f3,f4,f0,f12
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// stfs f3,20(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
loc_820C54E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// addi r10,r10,7996
	ctx.r10.s64 = ctx.r10.s64 + 7996;
	// lwz r5,180(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// lfs f2,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 / ctx.f0.f64));
	// lwz r4,15328(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 15328);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x820c5514
	if (!ctx.cr6.eq) goto loc_820C5514;
	// lbz r11,187(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 187);
	// b 0x820c5518
	goto loc_820C5518;
loc_820C5514:
	// lbz r11,186(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 186);
loc_820C5518:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c55b4
	if (ctx.cr6.eq) goto loc_820C55B4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820c55b4
	if (!ctx.cr6.gt) goto loc_820C55B4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,3156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3156);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmadds f0,f31,f0,f1
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// fsubs f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsel f13,f13,f12,f0
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,16(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820c5578
	if (!ctx.cr6.gt) goto loc_820C5578;
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f11,f31,f0,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fsubs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsel f6,f7,f12,f11
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// stfs f6,12(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_820C5578:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820c5594
	if (!ctx.cr6.gt) goto loc_820C5594;
	// lfs f5,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fnmsubs f0,f31,f9,f5
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f9.f64 - ctx.f5.f64)));
	// fsel f4,f0,f0,f10
	ctx.f4.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// stfs f4,32(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// b 0x820c55f8
	goto loc_820C55F8;
loc_820C5594:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f3,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,-1648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1648);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f31,f0,f3
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fsubs f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsel f1,f2,f12,f0
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// stfs f1,32(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// b 0x820c55f8
	goto loc_820C55F8;
loc_820C55B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f7,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// stfs f6,24(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// lfs f13,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f13,f31,f13,f12
	ctx.f13.f64 = double(float(-(ctx.f31.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fnmsubs f12,f31,f9,f11
	ctx.f12.f64 = double(float(-(ctx.f31.f64 * ctx.f9.f64 - ctx.f11.f64)));
	// fsel f5,f0,f0,f10
	ctx.f5.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// stfs f5,16(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// fsel f4,f13,f13,f10
	ctx.f4.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// stfs f4,12(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// fsel f3,f12,f12,f10
	ctx.f3.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f10.f64;
	// stfs f3,32(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
loc_820C55F8:
	// fcmpu cr6,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f30.f64);
	// ble cr6,0x820c5624
	if (!ctx.cr6.gt) goto loc_820C5624;
	// fcmpu cr6,f28,f29
	ctx.cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// blt cr6,0x820c5614
	if (ctx.cr6.lt) goto loc_820C5614;
	// bso cr6,0x820c5614
	if (ctx.cr6.so) goto loc_820C5614;
	// fmr f0,f8
	ctx.f0.f64 = ctx.f8.f64;
	// b 0x820c5628
	goto loc_820C5628;
loc_820C5614:
	// fsubs f2,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f28.f64 - ctx.f30.f64));
	// fsubs f1,f29,f30
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// fdivs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 / ctx.f1.f64));
	// b 0x820c5628
	goto loc_820C5628;
loc_820C5624:
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f27.f64;
loc_820C5628:
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f31,f9
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820c564c
	if (!ctx.cr6.gt) goto loc_820C564C;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f10,f11,f0,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// b 0x820c5660
	goto loc_820C5660;
loc_820C564C:
	// lfs f9,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f6,f7,f13,f0
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_820C5660:
	// lfs f0,340(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// ble cr6,0x820c5698
	if (!ctx.cr6.gt) goto loc_820C5698;
	// lfs f13,816(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 816);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f28,f13
	ctx.cr6.compare(ctx.f28.f64, ctx.f13.f64);
	// blt cr6,0x820c5684
	if (ctx.cr6.lt) goto loc_820C5684;
	// bso cr6,0x820c5684
	if (ctx.cr6.so) goto loc_820C5684;
	// fmr f0,f8
	ctx.f0.f64 = ctx.f8.f64;
	// b 0x820c569c
	goto loc_820C569C;
loc_820C5684:
	// fsubs f5,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,3152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// b 0x820c569c
	goto loc_820C569C;
loc_820C5698:
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f27.f64;
loc_820C569C:
	// lfs f4,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// ble cr6,0x820c56c0
	if (!ctx.cr6.gt) goto loc_820C56C0;
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f13,f12,f3
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f1,f2,f0,f13
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f1,8(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x820c56d4
	goto loc_820C56D4;
loc_820C56C0:
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f11,8(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_820C56D4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ab790
	ctx.lr = 0x820C56E0;
	sub_820AB790(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8259bbf0
	ctx.lr = 0x820C56EC;
	__restfpr_27(ctx, base);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C56F0"))) PPC_WEAK_FUNC(sub_820C56F0);
PPC_FUNC_IMPL(__imp__sub_820C56F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x820C56F8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,36952
	ctx.r9.u64 = ctx.r10.u64 | 36952;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// ldx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x820c5730
	if (!ctx.cr6.eq) goto loc_820C5730;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// b 0x820c575c
	goto loc_820C575C;
loc_820C5730:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,388(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 388);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820C5758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
loc_820C575C:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// addi r9,r11,7996
	ctx.r9.s64 = ctx.r11.s64 + 7996;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lfs f12,-15112(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -15112);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lfsx f9,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r11,8028
	ctx.r8.s64 = ctx.r11.s64 + 8028;
	// stfs f9,92(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,-1528(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -1528);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,25556(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 25556);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f8,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stfs f8,104(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// addi r7,r11,8012
	ctx.r7.s64 = ctx.r11.s64 + 8012;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-6176
	ctx.r11.s64 = ctx.r11.s64 + -6176;
	// lfsx f7,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f7,112(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f31,116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f9,7984(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7984);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// fmuls f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// stfs f31,96(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// addi r10,r10,-32560
	ctx.r10.s64 = ctx.r10.s64 + -32560;
	// stfs f5,108(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stb r30,186(r31)
	PPC_STORE_U8(ctx.r31.u32 + 186, ctx.r30.u8);
	// stb r30,187(r31)
	PPC_STORE_U8(ctx.r31.u32 + 187, ctx.r30.u8);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r30.u8);
	// stb r30,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r30.u8);
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stb r30,189(r31)
	PPC_STORE_U8(ctx.r31.u32 + 189, ctx.r30.u8);
	// lfs f0,-3868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3868);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,190(r31)
	PPC_STORE_U8(ctx.r31.u32 + 190, ctx.r30.u8);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stb r30,191(r31)
	PPC_STORE_U8(ctx.r31.u32 + 191, ctx.r30.u8);
	// lfs f0,-3860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3860);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r30.u8);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stb r10,185(r31)
	PPC_STORE_U8(ctx.r31.u32 + 185, ctx.r10.u8);
	// lfs f0,-3852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3852);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,194(r31)
	PPC_STORE_U8(ctx.r31.u32 + 194, ctx.r30.u8);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stb r30,195(r31)
	PPC_STORE_U8(ctx.r31.u32 + 195, ctx.r30.u8);
	// lfs f0,-3848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3848);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r28.u32);
	// stfs f31,128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f12,156(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f11,168(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stfs f10,172(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// bl 0x820acb98
	ctx.lr = 0x820C587C;
	sub_820ACB98(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ac9f0
	ctx.lr = 0x820C5888;
	sub_820AC9F0(ctx, base);
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f13,25556(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 25556);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,16468(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16468, temp.u32);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// stfs f31,-1824(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -1824, temp.u32);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// stfs f31,-1820(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -1820, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,17976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17976);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f0,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C58FC"))) PPC_WEAK_FUNC(sub_820C58FC);
PPC_FUNC_IMPL(__imp__sub_820C58FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5900"))) PPC_WEAK_FUNC(sub_820C5900);
PPC_FUNC_IMPL(__imp__sub_820C5900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r10,185(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 185);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lfs f13,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f0,f1,f13
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f1.f64 - ctx.f13.f64)));
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// bsolr cr6
	if (ctx.cr6.so) return;
	// lwz r9,180(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// stfs f13,96(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lwz r8,15328(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15328);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x820c5958
	if (!ctx.cr6.eq) goto loc_820C5958;
	// lbz r11,187(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 187);
	// b 0x820c595c
	goto loc_820C595C;
loc_820C5958:
	// lbz r11,186(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 186);
loc_820C595C:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r6,190(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 190);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,188(r3)
	PPC_STORE_U8(ctx.r3.u32 + 188, ctx.r5.u8);
	// b 0x820aba98
	sub_820ABA98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C5980"))) PPC_WEAK_FUNC(sub_820C5980);
PPC_FUNC_IMPL(__imp__sub_820C5980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5984"))) PPC_WEAK_FUNC(sub_820C5984);
PPC_FUNC_IMPL(__imp__sub_820C5984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5988"))) PPC_WEAK_FUNC(sub_820C5988);
PPC_FUNC_IMPL(__imp__sub_820C5988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r9,r11,7996
	ctx.r9.s64 = ctx.r11.s64 + 7996;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// addi r8,r11,8028
	ctx.r8.s64 = ctx.r11.s64 + 8028;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r7,r11,8012
	ctx.r7.s64 = ctx.r11.s64 + 8012;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfsx f13,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// stfs f13,104(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfsx f12,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stfs f12,112(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,7984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7984);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f10,108(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C59E8"))) PPC_WEAK_FUNC(sub_820C59E8);
PPC_FUNC_IMPL(__imp__sub_820C59E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lfs f12,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r9,r11,7996
	ctx.r9.s64 = ctx.r11.s64 + 7996;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// addi r8,r11,8028
	ctx.r8.s64 = ctx.r11.s64 + 8028;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r7,r11,8012
	ctx.r7.s64 = ctx.r11.s64 + 8012;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,92(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// lfsx f10,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// stfs f10,104(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// lfsx f9,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// stfs f9,112(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f13,7984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7984);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// fmuls f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f7,108(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C5A5C"))) PPC_WEAK_FUNC(sub_820C5A5C);
PPC_FUNC_IMPL(__imp__sub_820C5A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5A60"))) PPC_WEAK_FUNC(sub_820C5A60);
PPC_FUNC_IMPL(__imp__sub_820C5A60) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,84(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stb r11,186(r31)
	PPC_STORE_U8(ctx.r31.u32 + 186, ctx.r11.u8);
	// stb r11,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r11.u8);
	// bl 0x820aba98
	ctx.lr = 0x820C5A8C;
	sub_820ABA98(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r10,15328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15328);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820c5b5c
	if (!ctx.cr6.eq) goto loc_820C5B5C;
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// lwz r11,19168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19168);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,-1264
	ctx.r10.s64 = ctx.r10.s64 + -1264;
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// mulli r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 * 200;
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820c5af4
	if (ctx.cr6.eq) goto loc_820C5AF4;
	// addi r9,r10,72
	ctx.r9.s64 = ctx.r10.s64 + 72;
	// lfsx f12,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// ble cr6,0x820c5ae4
	if (!ctx.cr6.gt) goto loc_820C5AE4;
	// stfsx f31,r11,r9
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
loc_820C5AE4:
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// lfsx f11,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// stfsx f10,r11,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_820C5AF4:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16271
	ctx.r10.u64 = ctx.r11.u64 | 16271;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820c5b5c
	if (!ctx.cr6.eq) goto loc_820C5B5C;
	// bl 0x821041a8
	ctx.lr = 0x820C5B14;
	sub_821041A8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820c5b5c
	if (!ctx.cr6.eq) goto loc_820C5B5C;
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
	// bne cr6,0x820c5b5c
	if (!ctx.cr6.eq) goto loc_820C5B5C;
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r3,13496(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 13496);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820c5b5c
	if (!ctx.cr6.eq) goto loc_820C5B5C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,-6648
	ctx.r3.s64 = ctx.r11.s64 + -6648;
	// bl 0x820fb468
	ctx.lr = 0x820C5B5C;
	sub_820FB468(ctx, base);
loc_820C5B5C:
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

__attribute__((alias("__imp__sub_820C5B74"))) PPC_WEAK_FUNC(sub_820C5B74);
PPC_FUNC_IMPL(__imp__sub_820C5B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5B78"))) PPC_WEAK_FUNC(sub_820C5B78);
PPC_FUNC_IMPL(__imp__sub_820C5B78) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// stb r9,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r9.u8);
	// stb r8,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r8.u8);
	// bl 0x82360f70
	ctx.lr = 0x820C5BBC;
	sub_82360F70(ctx, base);
	// lhz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lis r7,697
	ctx.r7.s64 = 45678592;
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lis r5,-698
	ctx.r5.s64 = -45744128;
	// mulli r10,r6,60
	ctx.r10.s64 = ctx.r6.s64 * 60;
	// lhz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mulli r10,r4,60
	ctx.r10.s64 = ctx.r4.s64 * 60;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ori r6,r7,55032
	ctx.r6.u64 = ctx.r7.u64 | 55032;
	// mulli r10,r8,60
	ctx.r10.s64 = ctx.r8.s64 * 60;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r4,r5,10503
	ctx.r4.u64 = ctx.r5.u64 | 10503;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// lis r3,-17874
	ctx.r3.s64 = -1171390464;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// ori r8,r3,35747
	ctx.r8.u64 = ctx.r3.u64 | 35747;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// rlwinm r9,r6,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mulhwu r3,r10,r8
	ctx.r3.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// rlwinm r11,r3,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r9,r11,11
	ctx.r9.s64 = ctx.r11.s64 * 11;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stb r8,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_820C5C68"))) PPC_WEAK_FUNC(sub_820C5C68);
PPC_FUNC_IMPL(__imp__sub_820C5C68) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r10,22016
	ctx.r3.s64 = ctx.r10.s64 + 22016;
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// ld r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// b 0x820ad830
	sub_820AD830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C5C88"))) PPC_WEAK_FUNC(sub_820C5C88);
PPC_FUNC_IMPL(__imp__sub_820C5C88) {
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
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lbz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820c5d34
	if (!ctx.cr6.eq) goto loc_820C5D34;
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C5CC0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820c5cc0
	if (!ctx.cr6.eq) goto loc_820C5CC0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_820C5CF4:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r11,-24(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820c5cf4
	if (!ctx.cr6.eq) goto loc_820C5CF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 154, ctx.r11.u8);
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
	// stb r11,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r11.u8);
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
loc_820C5D34:
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lwzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// ldx r4,r4,r31
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + ctx.r31.u32);
	// bl 0x820a38e8
	ctx.lr = 0x820C5D5C;
	sub_820A38E8(ctx, base);
	// lbz r11,154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 154);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 154, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_820C5D80"))) PPC_WEAK_FUNC(sub_820C5D80);
PPC_FUNC_IMPL(__imp__sub_820C5D80) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,255
	ctx.r9.s64 = 255;
	// lfs f0,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f0,452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// std r30,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r30.u64);
	// stfs f0,456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// stw r10,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r10.u32);
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// stb r9,465(r31)
	PPC_STORE_U8(ctx.r31.u32 + 465, ctx.r9.u8);
	// stb r11,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r11.u8);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stb r30,472(r31)
	PPC_STORE_U8(ctx.r31.u32 + 472, ctx.r30.u8);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820C5DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820C5E00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c5b78
	ctx.lr = 0x820C5E08;
	sub_820C5B78(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r31,416
	ctx.r9.s64 = ctx.r31.s64 + 416;
	// addi r8,r31,432
	ctx.r8.s64 = ctx.r31.s64 + 432;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// std r3,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r3.u64);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_820C5E74"))) PPC_WEAK_FUNC(sub_820C5E74);
PPC_FUNC_IMPL(__imp__sub_820C5E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5E78"))) PPC_WEAK_FUNC(sub_820C5E78);
PPC_FUNC_IMPL(__imp__sub_820C5E78) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// stb r11,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r11.u8);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// std r11,384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 384, ctx.r11.u64);
	// lfs f13,-10768(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10768);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,452(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stb r11,465(r31)
	PPC_STORE_U8(ctx.r31.u32 + 465, ctx.r11.u8);
	// stb r11,472(r31)
	PPC_STORE_U8(ctx.r31.u32 + 472, ctx.r11.u8);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// stb r11,480(r31)
	PPC_STORE_U8(ctx.r31.u32 + 480, ctx.r11.u8);
	// lfs f12,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,481(r31)
	PPC_STORE_U8(ctx.r31.u32 + 481, ctx.r11.u8);
	// stfs f12,456(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// bl 0x820ad420
	ctx.lr = 0x820C5EE4;
	sub_820AD420(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r9,r31,432
	ctx.r9.s64 = ctx.r31.s64 + 432;
	// addi r11,r11,26832
	ctx.r11.s64 = ctx.r11.s64 + 26832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,416(r31)
	PPC_STORE_U64(ctx.r31.u32 + 416, ctx.r8.u64);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,424(r31)
	PPC_STORE_U64(ctx.r31.u32 + 424, ctx.r7.u64);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// bl 0x820acc40
	ctx.lr = 0x820C5F20;
	sub_820ACC40(ctx, base);
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C5F38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r6,r31,304
	ctx.r6.s64 = ctx.r31.s64 + 304;
	// addi r3,r11,12656
	ctx.r3.s64 = ctx.r11.s64 + 12656;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f0,3068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// bl 0x82142b00
	ctx.lr = 0x820C5F5C;
	sub_82142B00(ctx, base);
	// ld r10,416(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 416);
	// addi r11,r31,400
	ctx.r11.s64 = ctx.r31.s64 + 400;
	// ld r9,424(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 424);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
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

__attribute__((alias("__imp__sub_820C5F8C"))) PPC_WEAK_FUNC(sub_820C5F8C);
PPC_FUNC_IMPL(__imp__sub_820C5F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C5F90"))) PPC_WEAK_FUNC(sub_820C5F90);
PPC_FUNC_IMPL(__imp__sub_820C5F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x820C5F98;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8259bb70
	ctx.lr = 0x820C5FA0;
	__savefpr_14(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-10892
	ctx.r29.s64 = ctx.r11.s64 + -10892;
	// lfs f13,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1320(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1320);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820c6044
	if (!ctx.cr6.gt) goto loc_820C6044;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r3,r11,22016
	ctx.r3.s64 = ctx.r11.s64 + 22016;
	// stw r27,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r27.u32);
	// bl 0x820c5c88
	ctx.lr = 0x820C5FD4;
	sub_820C5C88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r27,472(r31)
	PPC_STORE_U8(ctx.r31.u32 + 472, ctx.r27.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c6028
	if (!ctx.cr6.eq) goto loc_820C6028;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,27800
	ctx.r10.s64 = 1821900800;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r9,-27583
	ctx.r9.s64 = -1807679488;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r4,r10,53512
	ctx.r4.u64 = ctx.r10.u64 | 53512;
	// ori r8,r9,3966
	ctx.r8.u64 = ctx.r9.u64 | 3966;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// bl 0x820a38e8
	ctx.lr = 0x820C6018;
	sub_820A38E8(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8259bbbc
	ctx.lr = 0x820C6024;
	__restfpr_14(ctx, base);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_820C6028:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8259bbbc
	ctx.lr = 0x820C6040;
	__restfpr_14(ctx, base);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_820C6044:
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x820c6108
	if (ctx.cr6.lt) goto loc_820C6108;
	// beq cr6,0x820c60b4
	if (ctx.cr6.eq) goto loc_820C60B4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x820c6164
	if (!ctx.cr6.lt) goto loc_820C6164;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,-28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,64(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c328
	ctx.lr = 0x820C6078;
	sub_8259C328(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c400
	ctx.lr = 0x820C6080;
	sub_8259C400(ctx, base);
	// lwz r6,476(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lfs f0,-28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,68(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c328
	ctx.lr = 0x820C6098;
	sub_8259C328(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c400
	ctx.lr = 0x820C60A0;
	sub_8259C400(ctx, base);
	// lwz r5,476(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lfs f0,-28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,72(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// b 0x820c6154
	goto loc_820C6154;
loc_820C60B4:
	// lwz r4,476(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lfs f0,-28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f31,f9,f0
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c328
	ctx.lr = 0x820C60CC;
	sub_8259C328(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c400
	ctx.lr = 0x820C60D4;
	sub_8259C400(ctx, base);
	// lwz r3,476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lfs f0,-28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f31,f8,f0
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c328
	ctx.lr = 0x820C60EC;
	sub_8259C328(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c400
	ctx.lr = 0x820C60F4;
	sub_8259C400(ctx, base);
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lfs f0,-28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f31,f7,f0
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// b 0x820c6154
	goto loc_820C6154;
loc_820C6108:
	// lfs f6,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,-28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f6,f0
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c328
	ctx.lr = 0x820C611C;
	sub_8259C328(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c400
	ctx.lr = 0x820C6124;
	sub_8259C400(ctx, base);
	// lwz r10,476(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lfs f0,-28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f31,f5,f0
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c328
	ctx.lr = 0x820C613C;
	sub_8259C328(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c400
	ctx.lr = 0x820C6144;
	sub_8259C400(ctx, base);
	// lwz r9,476(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lfs f0,-28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,72(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f31,f4,f0
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
loc_820C6154:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c328
	ctx.lr = 0x820C615C;
	sub_8259C328(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c400
	ctx.lr = 0x820C6164;
	sub_8259C400(ctx, base);
loc_820C6164:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lwz r8,476(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lfs f12,-28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r11,26816
	ctx.r30.s64 = ctx.r11.s64 + 26816;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lfs f2,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f29,f2,f12
	ctx.f29.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f13,f13
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f1,f0,f0,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f3.f64));
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// lfd f28,-4832(r11)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f27,-4840(r11)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// fmadds f12,f13,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f10,f0,f28
	ctx.f10.f64 = ctx.f0.f64 * ctx.f28.f64;
	// fnmsub f9,f11,f0,f27
	ctx.f9.f64 = -(ctx.f11.f64 * ctx.f0.f64 - ctx.f27.f64);
	// fmadd f0,f9,f10,f0
	ctx.f0.f64 = ctx.f9.f64 * ctx.f10.f64 + ctx.f0.f64;
	// fmul f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f7,f0,f28
	ctx.f7.f64 = ctx.f0.f64 * ctx.f28.f64;
	// fnmsub f6,f8,f0,f27
	ctx.f6.f64 = -(ctx.f8.f64 * ctx.f0.f64 - ctx.f27.f64);
	// fmadd f5,f6,f7,f0
	ctx.f5.f64 = ctx.f6.f64 * ctx.f7.f64 + ctx.f0.f64;
	// frsp f0,f5
	ctx.f0.f64 = double(float(ctx.f5.f64));
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f30,f0,f4
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f25,f0,f3
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// bl 0x8259c328
	ctx.lr = 0x820C6200;
	sub_8259C328(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// frsp f24,f0
	ctx.f24.f64 = double(float(ctx.f0.f64));
	// bl 0x8259c400
	ctx.lr = 0x820C6210;
	sub_8259C400(ctx, base);
	// fmuls f13,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// fmuls f0,f31,f31
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmuls f12,f25,f25
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f25.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// frsp f7,f1
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmuls f10,f31,f25
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f25.f64));
	// fmuls f9,f31,f30
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// fmuls f11,f30,f25
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f25.f64));
	// fneg f2,f13
	ctx.f2.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fneg f13,f12
	ctx.f13.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmuls f13,f31,f24
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f24.f64));
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// fmuls f12,f24,f30
	ctx.f12.f64 = double(float(ctx.f24.f64 * ctx.f30.f64));
	// std r3,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r3.u64);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// lfs f6,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// fadds f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fsubs f0,f31,f7
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f7.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// fadds f7,f6,f31
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// lwz r9,476(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// fadds f6,f5,f31
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f3,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f26,f10,f12
	ctx.f26.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f26,152(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f7,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f6,f0,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fsubs f29,f31,f8
	ctx.f29.f64 = double(float(ctx.f31.f64 - ctx.f8.f64));
	// lfs f8,-28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f24,f25
	ctx.f9.f64 = double(float(ctx.f24.f64 * ctx.f25.f64));
	// stfs f29,144(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f20,f13,f11
	ctx.f20.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f20,168(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f18,f11,f13
	ctx.f18.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f18,180(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f19,f12,f10
	ctx.f19.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f19,176(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmuls f16,f3,f8
	ctx.f16.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmuls f4,f26,f26
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f26.f64));
	// fsubs f21,f31,f7
	ctx.f21.f64 = double(float(ctx.f31.f64 - ctx.f7.f64));
	// stfs f21,164(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f17,f31,f6
	ctx.f17.f64 = double(float(ctx.f31.f64 - ctx.f6.f64));
	// stfs f17,184(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f25,f9,f0
	ctx.f25.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f25,148(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f22,f0,f9
	ctx.f22.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// stfs f22,160(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmr f1,f16
	ctx.f1.f64 = ctx.f16.f64;
	// fmadds f2,f29,f29,f4
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f4.f64));
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f13,f25,f25,f2
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f25.f64 + ctx.f2.f64));
	// frsqrte f0,f13
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f13.f64)));
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f11,f0,f28
	ctx.f11.f64 = ctx.f0.f64 * ctx.f28.f64;
	// fnmsub f10,f12,f0,f27
	ctx.f10.f64 = -(ctx.f12.f64 * ctx.f0.f64 - ctx.f27.f64);
	// fmadd f0,f10,f11,f0
	ctx.f0.f64 = ctx.f10.f64 * ctx.f11.f64 + ctx.f0.f64;
	// fmul f9,f13,f0
	ctx.f9.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f8,f0,f28
	ctx.f8.f64 = ctx.f0.f64 * ctx.f28.f64;
	// fnmsub f7,f9,f0,f27
	ctx.f7.f64 = -(ctx.f9.f64 * ctx.f0.f64 - ctx.f27.f64);
	// fmadd f6,f7,f8,f0
	ctx.f6.f64 = ctx.f7.f64 * ctx.f8.f64 + ctx.f0.f64;
	// frsp f0,f6
	ctx.f0.f64 = double(float(ctx.f6.f64));
	// fmuls f30,f0,f29
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f24,f0,f5
	ctx.f24.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f23,f0,f4
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// bl 0x8259c328
	ctx.lr = 0x820C6384;
	sub_8259C328(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f16
	ctx.f1.f64 = ctx.f16.f64;
	// frsp f16,f0
	ctx.f16.f64 = double(float(ctx.f0.f64));
	// bl 0x8259c400
	ctx.lr = 0x820C6394;
	sub_8259C400(ctx, base);
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmuls f13,f24,f24
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f24.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f12,f23,f23
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f23.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fneg f3,f13
	ctx.f3.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fneg f2,f12
	ctx.f2.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fsubs f0,f31,f1
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f9,f24,f30
	ctx.f9.f64 = double(float(ctx.f24.f64 * ctx.f30.f64));
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// fmuls f6,f16,f30
	ctx.f6.f64 = double(float(ctx.f16.f64 * ctx.f30.f64));
	// fmuls f5,f16,f24
	ctx.f5.f64 = double(float(ctx.f16.f64 * ctx.f24.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// std r3,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r3.u64);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fadds f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f12,f24,f23
	ctx.f12.f64 = double(float(ctx.f24.f64 * ctx.f23.f64));
	// fmuls f11,f23,f30
	ctx.f11.f64 = double(float(ctx.f23.f64 * ctx.f30.f64));
	// lfs f30,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f1,f20,f30
	ctx.f1.f64 = double(float(ctx.f20.f64 * ctx.f30.f64));
	// fmuls f24,f29,f30
	ctx.f24.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// fmuls f3,f22,f30
	ctx.f3.f64 = double(float(ctx.f22.f64 * ctx.f30.f64));
	// fmuls f2,f21,f30
	ctx.f2.f64 = double(float(ctx.f21.f64 * ctx.f30.f64));
	// fmuls f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f12,f0,f9
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f11,f16,f23
	ctx.f11.f64 = double(float(ctx.f16.f64 * ctx.f23.f64));
	// fsubs f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fmuls f16,f26,f30
	ctx.f16.f64 = double(float(ctx.f26.f64 * ctx.f30.f64));
	// fmuls f23,f25,f30
	ctx.f23.f64 = double(float(ctx.f25.f64 * ctx.f30.f64));
	// fadds f3,f24,f3
	ctx.f3.f64 = double(float(ctx.f24.f64 + ctx.f3.f64));
	// fsubs f9,f7,f6
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fadds f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fsubs f6,f31,f4
	ctx.f6.f64 = double(float(ctx.f31.f64 - ctx.f4.f64));
	// fadds f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f11,f31,f10
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fadds f10,f5,f8
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fmuls f15,f29,f0
	ctx.f15.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f14,f25,f0
	ctx.f14.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fmuls f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f1,f16,f1
	ctx.f1.f64 = double(float(ctx.f16.f64 + ctx.f1.f64));
	// lfs f16,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f16.f64 = double(temp.f32);
	// fadds f2,f23,f2
	ctx.f2.f64 = double(float(ctx.f23.f64 + ctx.f2.f64));
	// fmuls f5,f13,f22
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// fmuls f4,f21,f13
	ctx.f4.f64 = double(float(ctx.f21.f64 * ctx.f13.f64));
	// fmuls f13,f20,f13
	ctx.f13.f64 = double(float(ctx.f20.f64 * ctx.f13.f64));
	// fmuls f0,f11,f22
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f22.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f11,f21
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f21.f64));
	// fmuls f11,f11,f20
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f20.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f11,f29,f12
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f22,f9,f22
	ctx.f22.f64 = double(float(ctx.f9.f64 * ctx.f22.f64));
	// fmuls f21,f9,f21
	ctx.f21.f64 = double(float(ctx.f9.f64 * ctx.f21.f64));
	// fmuls f11,f12,f25
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// fmuls f9,f9,f20
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f20.f64));
	// fmuls f20,f18,f30
	ctx.f20.f64 = double(float(ctx.f18.f64 * ctx.f30.f64));
	// stfs f20,212(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmuls f29,f29,f10
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f10.f64));
	// fmuls f25,f10,f25
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f25.f64));
	// fmuls f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// fmuls f10,f10,f26
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// fmuls f24,f8,f19
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f19.f64));
	// fmuls f23,f18,f8
	ctx.f23.f64 = double(float(ctx.f18.f64 * ctx.f8.f64));
	// fadds f13,f16,f13
	ctx.f13.f64 = double(float(ctx.f16.f64 + ctx.f13.f64));
	// fmuls f26,f19,f30
	ctx.f26.f64 = double(float(ctx.f19.f64 * ctx.f30.f64));
	// fmuls f20,f17,f30
	ctx.f20.f64 = double(float(ctx.f17.f64 * ctx.f30.f64));
	// fmuls f8,f17,f8
	ctx.f8.f64 = double(float(ctx.f17.f64 * ctx.f8.f64));
	// fadds f5,f15,f5
	ctx.f5.f64 = double(float(ctx.f15.f64 + ctx.f5.f64));
	// fadds f4,f14,f4
	ctx.f4.f64 = double(float(ctx.f14.f64 + ctx.f4.f64));
	// fmuls f16,f7,f19
	ctx.f16.f64 = double(float(ctx.f7.f64 * ctx.f19.f64));
	// fmuls f15,f7,f18
	ctx.f15.f64 = double(float(ctx.f7.f64 * ctx.f18.f64));
	// lfs f14,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f7,f7,f17
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f17.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f7,f14,f7
	ctx.f7.f64 = double(float(ctx.f14.f64 + ctx.f7.f64));
	// lwz r9,476(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// fmuls f11,f6,f19
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f19.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmuls f14,f6,f18
	ctx.f14.f64 = double(float(ctx.f6.f64 * ctx.f18.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fadds f25,f25,f21
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f21.f64));
	// fadds f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fmuls f6,f6,f17
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f17.f64));
	// fadds f9,f3,f26
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f26.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f29,f29,f22
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f22.f64));
	// lfs f3,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f3.f64 = double(temp.f32);
	// fadds f19,f13,f8
	ctx.f19.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fadds f17,f0,f15
	ctx.f17.f64 = double(float(ctx.f0.f64 + ctx.f15.f64));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f18,f7,f16
	ctx.f18.f64 = double(float(ctx.f7.f64 + ctx.f16.f64));
	// fadds f16,f12,f0
	ctx.f16.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f12,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// fadds f21,f5,f24
	ctx.f21.f64 = double(float(ctx.f5.f64 + ctx.f24.f64));
	// fadds f26,f25,f14
	ctx.f26.f64 = double(float(ctx.f25.f64 + ctx.f14.f64));
	// stfs f26,100(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f15,f12,f0
	ctx.f15.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f25,f10,f6
	ctx.f25.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// stfs f25,104(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f1,f1,f20
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f20.f64));
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f29,f29,f11
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f11.f64));
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f20,f4,f23
	ctx.f20.f64 = double(float(ctx.f4.f64 + ctx.f23.f64));
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fadds f2,f2,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// fmuls f13,f25,f25
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f25.f64));
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f15
	ctx.f1.f64 = ctx.f15.f64;
	// fmadds f11,f29,f29,f13
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmadds f13,f26,f26,f11
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f11.f64));
	// frsqrte f0,f13
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f13.f64)));
	// fmul f10,f13,f0
	ctx.f10.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f9,f0,f28
	ctx.f9.f64 = ctx.f0.f64 * ctx.f28.f64;
	// fnmsub f8,f10,f0,f27
	ctx.f8.f64 = -(ctx.f10.f64 * ctx.f0.f64 - ctx.f27.f64);
	// fmadd f0,f8,f9,f0
	ctx.f0.f64 = ctx.f8.f64 * ctx.f9.f64 + ctx.f0.f64;
	// fmul f7,f13,f0
	ctx.f7.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f6,f0,f28
	ctx.f6.f64 = ctx.f0.f64 * ctx.f28.f64;
	// fnmsub f5,f7,f0,f27
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f27.f64);
	// fmadd f4,f5,f6,f0
	ctx.f4.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// frsp f0,f4
	ctx.f0.f64 = double(float(ctx.f4.f64));
	// fmuls f24,f0,f29
	ctx.f24.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f23,f0,f3
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f22,f0,f2
	ctx.f22.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// bl 0x8259c328
	ctx.lr = 0x820C661C;
	sub_8259C328(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f15
	ctx.f1.f64 = ctx.f15.f64;
	// frsp f15,f0
	ctx.f15.f64 = double(float(ctx.f0.f64));
	// bl 0x8259c400
	ctx.lr = 0x820C662C;
	sub_8259C400(ctx, base);
	// fmuls f0,f24,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f24.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f23,f23
	ctx.f13.f64 = double(float(ctx.f23.f64 * ctx.f23.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmuls f12,f22,f22
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f22.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// frsp f7,f1
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f6,f24,f23
	ctx.f6.f64 = double(float(ctx.f24.f64 * ctx.f23.f64));
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// fmuls f13,f23,f22
	ctx.f13.f64 = double(float(ctx.f23.f64 * ctx.f22.f64));
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// fmuls f12,f24,f22
	ctx.f12.f64 = double(float(ctx.f24.f64 * ctx.f22.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// fmuls f9,f15,f22
	ctx.f9.f64 = double(float(ctx.f15.f64 * ctx.f22.f64));
	// fsubs f0,f31,f7
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f7.f64));
	// std r3,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r3.u64);
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fadds f7,f5,f31
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// fadds f5,f4,f31
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmuls f10,f15,f23
	ctx.f10.f64 = double(float(ctx.f15.f64 * ctx.f23.f64));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// fmuls f11,f24,f15
	ctx.f11.f64 = double(float(ctx.f24.f64 * ctx.f15.f64));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// fmuls f6,f0,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f3,f0,f7
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fadds f13,f9,f6
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fsubs f0,f31,f4
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f4.f64));
	// fsubs f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fmuls f4,f18,f13
	ctx.f4.f64 = double(float(ctx.f18.f64 * ctx.f13.f64));
	// fmuls f1,f0,f21
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f21.f64));
	// fmuls f2,f13,f17
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f17.f64));
	// fmuls f24,f0,f20
	ctx.f24.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// fmuls f13,f13,f16
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f16.f64));
	// fmuls f0,f0,f19
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f19.f64));
	// fmuls f23,f29,f12
	ctx.f23.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// fmuls f22,f12,f26
	ctx.f22.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// fmuls f12,f12,f25
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// fadds f4,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fadds f2,f24,f2
	ctx.f2.f64 = double(float(ctx.f24.f64 + ctx.f2.f64));
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fsubs f0,f6,f9
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fsubs f13,f31,f3
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f3.f64));
	// fadds f3,f4,f23
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f23.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f2,f2,f22
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f22.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fmuls f4,f21,f0
	ctx.f4.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// fmuls f9,f13,f18
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f18.f64));
	// fmuls f6,f13,f17
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f17.f64));
	// fmuls f3,f0,f20
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// fmuls f13,f13,f16
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f16.f64));
	// fmuls f0,f0,f19
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f19.f64));
	// fmuls f2,f29,f12
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// fmuls f1,f12,f26
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// fadds f9,f4,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// fmuls f12,f12,f25
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// fadds f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fadds f4,f0,f13
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fsubs f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fadds f0,f10,f7
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fadds f11,f9,f2
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f10,f6,f1
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// fadds f9,f4,f12
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f9,f21,f0
	ctx.f9.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// fsubs f12,f31,f5
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f5.f64));
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmuls f11,f13,f18
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f18.f64));
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmuls f8,f0,f20
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmuls f10,f13,f17
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f17.f64));
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f0,f0,f19
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f19.f64));
	// lfs f5,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f13,f16
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f16.f64));
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// std r3,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// lfs f3,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f3.f64 = double(temp.f32);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f1,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f7,f29,f12
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fmuls f6,f12,f26
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fmuls f12,f12,f25
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f9,f16,f30
	ctx.f9.f64 = double(float(ctx.f16.f64 * ctx.f30.f64));
	// fmuls f13,f26,f30
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f30.f64));
	// fadds f8,f11,f7
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f11,f18,f30
	ctx.f11.f64 = double(float(ctx.f18.f64 * ctx.f30.f64));
	// fadds f7,f10,f6
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f8,f21,f30
	ctx.f8.f64 = double(float(ctx.f21.f64 * ctx.f30.f64));
	// fadds f6,f0,f12
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f10,f17,f30
	ctx.f10.f64 = double(float(ctx.f17.f64 * ctx.f30.f64));
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// fmuls f7,f20,f30
	ctx.f7.f64 = double(float(ctx.f20.f64 * ctx.f30.f64));
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// fmuls f6,f19,f30
	ctx.f6.f64 = double(float(ctx.f19.f64 * ctx.f30.f64));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fmuls f0,f29,f30
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// fmuls f12,f25,f30
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f30.f64));
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// li r9,8
	ctx.r9.s64 = 8;
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fadds f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fadds f9,f6,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f2,f13,f3
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f12,f1
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
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
loc_820C68A4:
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// std r4,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// bdnz 0x820c68a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C68A4;
	// lwz r10,460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,26
	ctx.r3.s64 = ctx.r10.s64 + 26;
	// lfs f10,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// ld r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// lfs f6,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// lfs f7,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// lfs f4,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f4.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f0,f8,f4
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r3,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// fmadds f3,f13,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f12,f0,f0,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f3.f64));
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f1,f0,f28
	ctx.f1.f64 = ctx.f0.f64 * ctx.f28.f64;
	// fnmsub f8,f2,f0,f27
	ctx.f8.f64 = -(ctx.f2.f64 * ctx.f0.f64 - ctx.f27.f64);
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// fmadd f0,f8,f1,f0
	ctx.f0.f64 = ctx.f8.f64 * ctx.f1.f64 + ctx.f0.f64;
	// fmul f7,f12,f0
	ctx.f7.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f6,f0,f28
	ctx.f6.f64 = ctx.f0.f64 * ctx.f28.f64;
	// fnmsub f5,f7,f0,f27
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f27.f64);
	// fmadd f4,f5,f6,f0
	ctx.f4.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// frsp f0,f4
	ctx.f0.f64 = double(float(ctx.f4.f64));
	// fmuls f29,f0,f2
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f26,f13,f0
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f25,f0,f3
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f1,f29,f10
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f10.f64));
	// fmuls f13,f26,f9
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f9.f64));
	// fmuls f12,f25,f11
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f11.f64));
	// fmsubs f0,f26,f11,f1
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f11.f64 - ctx.f1.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmsubs f0,f25,f10,f13
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f10.f64 - ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmsubs f13,f29,f9,f12
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f9.f64 - ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// lfs f9,468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	ctx.f9.f64 = double(temp.f32);
	// ld r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r9,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r8,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r8.u64);
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f11,1320(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1320);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f1,11268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11268);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f10
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsubs f11,f1,f7
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f6,f12,f0
	ctx.f6.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f8,f0,f28
	ctx.f8.f64 = ctx.f0.f64 * ctx.f28.f64;
	// fnmsub f5,f6,f0,f27
	ctx.f5.f64 = -(ctx.f6.f64 * ctx.f0.f64 - ctx.f27.f64);
	// fmadd f0,f5,f8,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f8.f64 + ctx.f0.f64;
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// ld r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// fmul f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 * ctx.f0.f64;
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fmul f3,f0,f28
	ctx.f3.f64 = ctx.f0.f64 * ctx.f28.f64;
	// fnmsub f2,f4,f0,f27
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f27.f64);
	// fmadd f0,f2,f3,f0
	ctx.f0.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// fmuls f7,f13,f25
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// fmuls f9,f12,f29
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f8,f26,f0
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmsubs f24,f26,f12,f7
	ctx.f24.f64 = double(float(ctx.f26.f64 * ctx.f12.f64 - ctx.f7.f64));
	// fmsubs f27,f0,f25,f9
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f25.f64 - ctx.f9.f64));
	// fmsubs f28,f13,f29,f8
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 - ctx.f8.f64));
	// bgt cr6,0x820c6a7c
	if (ctx.cr6.gt) goto loc_820C6A7C;
	// bso cr6,0x820c6a7c
	if (ctx.cr6.so) goto loc_820C6A7C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4824);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blt cr6,0x820c6a7c
	if (ctx.cr6.lt) goto loc_820C6A7C;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x820c6a80
	if (!ctx.cr6.so) goto loc_820C6A80;
loc_820C6A7C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_820C6A80:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820c6a98
	if (ctx.cr6.eq) goto loc_820C6A98;
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// addi r3,r11,32208
	ctx.r3.s64 = ctx.r11.s64 + 32208;
	// bl 0x820b4b30
	ctx.lr = 0x820C6A98;
	sub_820B4B30(ctx, base);
loc_820C6A98:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// addi r3,r29,92
	ctx.r3.s64 = ctx.r29.s64 + 92;
	// lfs f6,84(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,240(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// bl 0x8210b3c8
	ctx.lr = 0x820C6AB4;
	sub_8210B3C8(ctx, base);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lfs f5,468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	ctx.f5.f64 = double(temp.f32);
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
	// fadds f4,f1,f5
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// addi r28,r11,12656
	ctx.r28.s64 = ctx.r11.s64 + 12656;
	// stfs f4,468(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// addi r6,r31,304
	ctx.r6.s64 = ctx.r31.s64 + 304;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82142b00
	ctx.lr = 0x820C6AE0;
	sub_82142B00(ctx, base);
	// fadds f12,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x820c6b68
	if (!ctx.cr6.gt) goto loc_820C6B68;
	// fadds f3,f13,f31
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f2,f24,f25
	ctx.f2.f64 = double(float(ctx.f24.f64 - ctx.f25.f64));
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f26,f1
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f1.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f9,f10,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,25556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25556);
	ctx.f12.f64 = double(temp.f32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsqrts f13,f3
	ctx.f13.f64 = double(float(sqrt(ctx.f3.f64)));
	// fdivs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// b 0x820c6ca0
	goto loc_820C6CA0;
loc_820C6B68:
	// fcmpu cr6,f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// ble cr6,0x820c6b88
	if (!ctx.cr6.gt) goto loc_820C6B88;
	// fcmpu cr6,f29,f28
	ctx.cr6.compare(ctx.f29.f64, ctx.f28.f64);
	// ble cr6,0x820c6b80
	if (!ctx.cr6.gt) goto loc_820C6B80;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x820c6b98
	goto loc_820C6B98;
loc_820C6B80:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x820c6b98
	goto loc_820C6B98;
loc_820C6B88:
	// fcmpu cr6,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// li r10,2
	ctx.r10.s64 = 2;
	// bgt cr6,0x820c6b98
	if (ctx.cr6.gt) goto loc_820C6B98;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_820C6B98:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x820c6c54
	if (ctx.cr6.lt) goto loc_820C6C54;
	// beq cr6,0x820c6c00
	if (ctx.cr6.eq) goto loc_820C6C00;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x820c6ca0
	if (!ctx.cr6.lt) goto loc_820C6CA0;
	// fadds f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f27
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f24,f25
	ctx.f8.f64 = double(float(ctx.f24.f64 + ctx.f25.f64));
	// fadds f9,f26,f10
	ctx.f9.f64 = double(float(ctx.f26.f64 + ctx.f10.f64));
	// lfs f12,25556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25556);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f29,f0
	ctx.f7.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fadds f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// fsqrts f13,f6
	ctx.f13.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f5,f13,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x820c6ca0
	goto loc_820C6CA0;
loc_820C6C00:
	// fadds f1,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f24,f25
	ctx.f10.f64 = double(float(ctx.f24.f64 + ctx.f25.f64));
	// fsubs f11,f26,f0
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f27,f9
	ctx.f8.f64 = double(float(ctx.f27.f64 + ctx.f9.f64));
	// lfs f12,25556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25556);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f28,f1
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f1.f64));
	// fadds f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// fsqrts f13,f6
	ctx.f13.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f5,f13,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x820c6ca0
	goto loc_820C6CA0;
loc_820C6C54:
	// fsubs f1,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f24,f25
	ctx.f11.f64 = double(float(ctx.f24.f64 - ctx.f25.f64));
	// lfs f8,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f27,f10
	ctx.f9.f64 = double(float(ctx.f27.f64 + ctx.f10.f64));
	// fadds f7,f26,f8
	ctx.f7.f64 = double(float(ctx.f26.f64 + ctx.f8.f64));
	// lfs f12,25556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25556);
	ctx.f12.f64 = double(temp.f32);
	// fadds f6,f1,f31
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// fsqrts f13,f6
	ctx.f13.f64 = double(float(sqrt(ctx.f6.f64)));
	// fdivs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f5,f13,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_820C6CA0:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r3,r29,92
	ctx.r3.s64 = ctx.r29.s64 + 92;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// bl 0x8210b3c8
	ctx.lr = 0x820C6CC0;
	sub_8210B3C8(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820C6CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82173950
	ctx.lr = 0x820C6CE0;
	sub_82173950(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8259bbbc
	ctx.lr = 0x820C6CEC;
	__restfpr_14(ctx, base);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C6CF0"))) PPC_WEAK_FUNC(sub_820C6CF0);
PPC_FUNC_IMPL(__imp__sub_820C6CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820C6CF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x820c6d30
	if (!ctx.cr6.eq) goto loc_820C6D30;
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820c6d28
	if (ctx.cr6.eq) goto loc_820C6D28;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820c6d30
	if (!ctx.cr6.eq) goto loc_820C6D30;
loc_820C6D28:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820c6d3c
	goto loc_820C6D3C;
loc_820C6D30:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r11,r11,22016
	ctx.r11.s64 = ctx.r11.s64 + 22016;
	// lwz r11,4720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4720);
loc_820C6D3C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820c6db8
	if (ctx.cr6.lt) goto loc_820C6DB8;
	// bne cr6,0x820c6dd8
	if (!ctx.cr6.eq) goto loc_820C6DD8;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,26080
	ctx.r31.s64 = ctx.r11.s64 + 26080;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x820C6D5C;
	sub_82104600(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820c6dac
	if (!ctx.cr6.eq) goto loc_820C6DAC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x821156b8
	ctx.lr = 0x820C6D74;
	sub_821156B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// lbz r30,2584(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2584);
	// bl 0x82104600
	ctx.lr = 0x820C6D84;
	sub_82104600(ctx, base);
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820c6dd8
	if (ctx.cr6.eq) goto loc_820C6DD8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820c6dd8
	if (ctx.cr6.eq) goto loc_820C6DD8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x821045e8
	ctx.lr = 0x820C6DAC;
	sub_821045E8(ctx, base);
loc_820C6DAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820C6DB8:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x820C6DCC;
	sub_82104600(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820C6DD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C6DE4"))) PPC_WEAK_FUNC(sub_820C6DE4);
PPC_FUNC_IMPL(__imp__sub_820C6DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C6DE8"))) PPC_WEAK_FUNC(sub_820C6DE8);
PPC_FUNC_IMPL(__imp__sub_820C6DE8) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwz r9,4484(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4484);
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,12464
	ctx.r3.s64 = ctx.r11.s64 + 12464;
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// ld r4,544(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 544);
	// stfs f0,1024(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1024, temp.u32);
	// stfs f0,1028(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1028, temp.u32);
	// stb r9,1040(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1040, ctx.r9.u8);
	// stw r8,1016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1016, ctx.r8.u32);
	// bl 0x822d2810
	ctx.lr = 0x820C6E34;
	sub_822D2810(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1042(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1042, ctx.r11.u8);
	// bl 0x820ad618
	ctx.lr = 0x820C6E44;
	sub_820AD618(ctx, base);
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

__attribute__((alias("__imp__sub_820C6E58"))) PPC_WEAK_FUNC(sub_820C6E58);
PPC_FUNC_IMPL(__imp__sub_820C6E58) {
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
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820c6e90
	if (!ctx.cr6.eq) goto loc_820C6E90;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r11,r11,22016
	ctx.r11.s64 = ctx.r11.s64 + 22016;
	// addi r3,r11,1048
	ctx.r3.s64 = ctx.r11.s64 + 1048;
	// ld r4,544(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 544);
	// bl 0x820bbec0
	ctx.lr = 0x820C6E88;
	sub_820BBEC0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
loc_820C6E90:
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

__attribute__((alias("__imp__sub_820C6EA4"))) PPC_WEAK_FUNC(sub_820C6EA4);
PPC_FUNC_IMPL(__imp__sub_820C6EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C6EA8"))) PPC_WEAK_FUNC(sub_820C6EA8);
PPC_FUNC_IMPL(__imp__sub_820C6EA8) {
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
	ctx.lr = 0x820C6EE0;
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
	ctx.lr = 0x820C6EF8;
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
	ctx.lr = 0x820C6F10;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x820C6F28;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x820C6F40;
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
	ctx.lr = 0x820C6F58;
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
	ctx.lr = 0x820C6F70;
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
	ctx.lr = 0x820C6F88;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x820C6FA0;
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

__attribute__((alias("__imp__sub_820C6FB8"))) PPC_WEAK_FUNC(sub_820C6FB8);
PPC_FUNC_IMPL(__imp__sub_820C6FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x820C6FC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r31,516(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 516);
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ad948
	ctx.lr = 0x820C6FE0;
	sub_820AD948(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c7050
	if (ctx.cr6.eq) goto loc_820C7050;
	// lfs f0,164(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,15328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15328);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_820C7050:
	// lbz r7,54(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 54);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c7278
	if (ctx.cr6.eq) goto loc_820C7278;
	// lbz r8,53(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// lfs f12,188(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820c70b4
	if (ctx.cr6.eq) goto loc_820C70B4;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// lfs f4,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-29292(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29292);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f0,f4
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// b 0x820c70f8
	goto loc_820C70F8;
loc_820C70B4:
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-29292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29292);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmuls f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
loc_820C70F8:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lis r8,3
	ctx.r8.s64 = 196608;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r7,r8,51969
	ctx.r7.u64 = ctx.r8.u64 | 51969;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// stb r10,53(r30)
	PPC_STORE_U8(ctx.r30.u32 + 53, ctx.r10.u8);
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820c7144
	if (ctx.cr6.eq) goto loc_820C7144;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-29280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29280);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f13,-29284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29284);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f4,f0,f13
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// b 0x820c71d4
	goto loc_820C71D4;
loc_820C7144:
	// lis r5,4
	ctx.r5.s64 = 262144;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r4,r5,29128
	ctx.r4.u64 = ctx.r5.u64 | 29128;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// ori r6,r7,29128
	ctx.r6.u64 = ctx.r7.u64 | 29128;
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lis r4,4
	ctx.r4.s64 = 262144;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lfs f13,-29280(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29280);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lfs f0,-29284(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29284);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r3,29128
	ctx.r10.u64 = ctx.r3.u64 | 29128;
	// ori r3,r4,29132
	ctx.r3.u64 = ctx.r4.u64 | 29132;
	// fsubs f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lhzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r8,r9,29132
	ctx.r8.u64 = ctx.r9.u64 | 29132;
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrldi r5,r10,32
	ctx.r5.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-10860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10860);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f1,f3,f13,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f0.f64));
loc_820C71D4:
	// lfs f10,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f8,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f7,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// lfs f5,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// fadds f11,f7,f4
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// fadds f10,f6,f3
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// fadds f9,f5,f2
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820C7278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820C7278:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_820C7280"))) PPC_WEAK_FUNC(sub_820C7280);
PPC_FUNC_IMPL(__imp__sub_820C7280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f9,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmsubs f12,f12,f10,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f7.f64));
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmsubs f13,f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f8.f64));
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmsubs f0,f0,f11,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// fmadds f4,f13,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f0,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// lfs f0,-10860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10860);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// blt cr6,0x820c72f8
	if (ctx.cr6.lt) goto loc_820C72F8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C72F8:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820c7358
	if (ctx.cr6.eq) goto loc_820C7358;
	// lfs f0,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f13,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lfs f12,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f11,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f9,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f1,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmsubs f7,f0,f13,f2
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f2.f64));
	// stfs f7,-16(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmsubs f5,f11,f9,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 - ctx.f8.f64));
	// stfs f5,-8(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmsubs f6,f10,f12,f1
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f1.f64));
	// stfs f6,-12(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
loc_820C7358:
	// lfs f10,-32(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// fmuls f4,f0,f10
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f9,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f13,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f13,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f12,f12,f11,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f4.f64));
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmsubs f11,f13,f10,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f3.f64));
	// stfs f11,-8(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmsubs f13,f0,f9,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f2.f64));
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f1,f12,f12
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// fmadds f0,f11,f11,f1
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfd f11,-4832(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f10,-4840(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmadds f12,f13,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// frsqrte f0,f12
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f12.f64)));
	// fmul f9,f12,f0
	ctx.f9.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f5,f0,f11
	ctx.f5.f64 = ctx.f0.f64 * ctx.f11.f64;
	// fnmsub f4,f9,f0,f10
	ctx.f4.f64 = -(ctx.f9.f64 * ctx.f0.f64 - ctx.f10.f64);
	// fmadd f0,f4,f5,f0
	ctx.f0.f64 = ctx.f4.f64 * ctx.f5.f64 + ctx.f0.f64;
	// fmul f3,f12,f0
	ctx.f3.f64 = ctx.f12.f64 * ctx.f0.f64;
	// lfs f12,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f12.f64 = double(temp.f32);
	// fmul f2,f0,f11
	ctx.f2.f64 = ctx.f0.f64 * ctx.f11.f64;
	// lfs f11,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f11.f64 = double(temp.f32);
	// fnmsub f1,f3,f0,f10
	ctx.f1.f64 = -(ctx.f3.f64 * ctx.f0.f64 - ctx.f10.f64);
	// fmadd f0,f1,f2,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f2.f64 + ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f8,f12
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmadds f9,f7,f11,f10
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmadds f8,f6,f0,f9
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f9.f64));
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x820c7434
	if (ctx.cr6.lt) goto loc_820C7434;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820C7434:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_820C743C"))) PPC_WEAK_FUNC(sub_820C743C);
PPC_FUNC_IMPL(__imp__sub_820C743C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_820C7440"))) PPC_WEAK_FUNC(sub_820C7440);
PPC_FUNC_IMPL(__imp__sub_820C7440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x820C7448;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// addis r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 393216;
	// addi r3,r11,-368
	ctx.r3.s64 = ctx.r11.s64 + -368;
	// bl 0x822327a8
	ctx.lr = 0x820C7460;
	sub_822327A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820c7594
	if (!ctx.cr6.gt) goto loc_820C7594;
	// addis r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 + 655360;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,-27040
	ctx.r28.s64 = ctx.r11.s64 + -27040;
loc_820C7474:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c7584
	if (ctx.cr6.eq) goto loc_820C7584;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x820c74ac
	if (ctx.cr6.eq) goto loc_820C74AC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820c74ac
	if (ctx.cr6.eq) goto loc_820C74AC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820c74b0
	if (!ctx.cr6.eq) goto loc_820C74B0;
loc_820C74AC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820C74B0:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820c74d0
	if (!ctx.cr6.eq) goto loc_820C74D0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x820c74d0
	if (ctx.cr6.eq) goto loc_820C74D0;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820c74d4
	if (!ctx.cr6.eq) goto loc_820C74D4;
loc_820C74D0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820C74D4:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820c7584
	if (ctx.cr6.eq) goto loc_820C7584;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lbz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x820c7508
	if (ctx.cr6.eq) goto loc_820C7508;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820c7508
	if (ctx.cr6.eq) goto loc_820C7508;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820c750c
	if (!ctx.cr6.eq) goto loc_820C750C;
loc_820C7508:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820C750C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820c752c
	if (!ctx.cr6.eq) goto loc_820C752C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x820c752c
	if (ctx.cr6.eq) goto loc_820C752C;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x820c7530
	if (!ctx.cr6.eq) goto loc_820C7530;
loc_820C752C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820C7530:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820c7584
	if (ctx.cr6.eq) goto loc_820C7584;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r31,8(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x820c7564
	if (!ctx.cr6.eq) goto loc_820C7564;
	// lwz r11,6912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6912);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,18304
	ctx.r3.s64 = ctx.r11.s64 + 18304;
	// bl 0x820adca8
	ctx.lr = 0x820C7564;
	sub_820ADCA8(ctx, base);
loc_820C7564:
	// lwz r8,40(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lbz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x820c7584
	if (!ctx.cr6.eq) goto loc_820C7584;
	// lwz r11,6912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,18304
	ctx.r3.s64 = ctx.r11.s64 + 18304;
	// bl 0x820adca8
	ctx.lr = 0x820C7584;
	sub_820ADCA8(ctx, base);
loc_820C7584:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x820c7474
	if (!ctx.cr6.eq) goto loc_820C7474;
loc_820C7594:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}


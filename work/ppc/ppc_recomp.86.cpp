#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825C1C98"))) PPC_WEAK_FUNC(sub_825C1C98);
PPC_FUNC_IMPL(__imp__sub_825C1C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19316);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2872);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,7900(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7900, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1CB8"))) PPC_WEAK_FUNC(sub_825C1CB8);
PPC_FUNC_IMPL(__imp__sub_825C1CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-17372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17372);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,8368(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8368, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1CD8"))) PPC_WEAK_FUNC(sub_825C1CD8);
PPC_FUNC_IMPL(__imp__sub_825C1CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-17584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17584);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,3520(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3520, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1CF8"))) PPC_WEAK_FUNC(sub_825C1CF8);
PPC_FUNC_IMPL(__imp__sub_825C1CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19356);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,584(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 584, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1D0C"))) PPC_WEAK_FUNC(sub_825C1D0C);
PPC_FUNC_IMPL(__imp__sub_825C1D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1D10"))) PPC_WEAK_FUNC(sub_825C1D10);
PPC_FUNC_IMPL(__imp__sub_825C1D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,25560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25560);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,7124(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7124, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1D30"))) PPC_WEAK_FUNC(sub_825C1D30);
PPC_FUNC_IMPL(__imp__sub_825C1D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -632);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4196(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4196, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1D50"))) PPC_WEAK_FUNC(sub_825C1D50);
PPC_FUNC_IMPL(__imp__sub_825C1D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,4196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4196);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,196(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1D70"))) PPC_WEAK_FUNC(sub_825C1D70);
PPC_FUNC_IMPL(__imp__sub_825C1D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,19364(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19364);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,3504(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3504, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1D90"))) PPC_WEAK_FUNC(sub_825C1D90);
PPC_FUNC_IMPL(__imp__sub_825C1D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f12,-17372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17372);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmsubs f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64));
	// stfs f0,320(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 320, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1DB8"))) PPC_WEAK_FUNC(sub_825C1DB8);
PPC_FUNC_IMPL(__imp__sub_825C1DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stfs f0,19368(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 19368, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1DCC"))) PPC_WEAK_FUNC(sub_825C1DCC);
PPC_FUNC_IMPL(__imp__sub_825C1DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1DD0"))) PPC_WEAK_FUNC(sub_825C1DD0);
PPC_FUNC_IMPL(__imp__sub_825C1DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,19376(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 19376, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1DF0"))) PPC_WEAK_FUNC(sub_825C1DF0);
PPC_FUNC_IMPL(__imp__sub_825C1DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-1680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1680);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4216(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4216, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1E10"))) PPC_WEAK_FUNC(sub_825C1E10);
PPC_FUNC_IMPL(__imp__sub_825C1E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-17492(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17492);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,7128(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7128, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1E30"))) PPC_WEAK_FUNC(sub_825C1E30);
PPC_FUNC_IMPL(__imp__sub_825C1E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,1576(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1576, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1E50"))) PPC_WEAK_FUNC(sub_825C1E50);
PPC_FUNC_IMPL(__imp__sub_825C1E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15464);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,3748(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3748, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1E70"))) PPC_WEAK_FUNC(sub_825C1E70);
PPC_FUNC_IMPL(__imp__sub_825C1E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-27244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,3528(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3528, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1E90"))) PPC_WEAK_FUNC(sub_825C1E90);
PPC_FUNC_IMPL(__imp__sub_825C1E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1572);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,588(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1EB0"))) PPC_WEAK_FUNC(sub_825C1EB0);
PPC_FUNC_IMPL(__imp__sub_825C1EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15824);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,8160(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8160, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1ED0"))) PPC_WEAK_FUNC(sub_825C1ED0);
PPC_FUNC_IMPL(__imp__sub_825C1ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-16616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16616);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,1192(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1192, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1EF0"))) PPC_WEAK_FUNC(sub_825C1EF0);
PPC_FUNC_IMPL(__imp__sub_825C1EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1628);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-3884(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -3884, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1F10"))) PPC_WEAK_FUNC(sub_825C1F10);
PPC_FUNC_IMPL(__imp__sub_825C1F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1628);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,7860(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7860, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1F30"))) PPC_WEAK_FUNC(sub_825C1F30);
PPC_FUNC_IMPL(__imp__sub_825C1F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,13356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13356);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,764(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 764, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1F50"))) PPC_WEAK_FUNC(sub_825C1F50);
PPC_FUNC_IMPL(__imp__sub_825C1F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-17280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17280);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,760(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 760, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1F70"))) PPC_WEAK_FUNC(sub_825C1F70);
PPC_FUNC_IMPL(__imp__sub_825C1F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -576);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,7884(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7884, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1F90"))) PPC_WEAK_FUNC(sub_825C1F90);
PPC_FUNC_IMPL(__imp__sub_825C1F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,7904(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7904, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1FB0"))) PPC_WEAK_FUNC(sub_825C1FB0);
PPC_FUNC_IMPL(__imp__sub_825C1FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,25556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,1188(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1188, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1FD0"))) PPC_WEAK_FUNC(sub_825C1FD0);
PPC_FUNC_IMPL(__imp__sub_825C1FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15148);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,4208(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4208, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1FF0"))) PPC_WEAK_FUNC(sub_825C1FF0);
PPC_FUNC_IMPL(__imp__sub_825C1FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15256);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,516(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 516, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2010"))) PPC_WEAK_FUNC(sub_825C2010);
PPC_FUNC_IMPL(__imp__sub_825C2010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-17252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17252);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,7088(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7088, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2030"))) PPC_WEAK_FUNC(sub_825C2030);
PPC_FUNC_IMPL(__imp__sub_825C2030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-14412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14412);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-3872(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -3872, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2050"))) PPC_WEAK_FUNC(sub_825C2050);
PPC_FUNC_IMPL(__imp__sub_825C2050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15360);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,520(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 520, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2070"))) PPC_WEAK_FUNC(sub_825C2070);
PPC_FUNC_IMPL(__imp__sub_825C2070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15800);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,3524(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3524, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2090"))) PPC_WEAK_FUNC(sub_825C2090);
PPC_FUNC_IMPL(__imp__sub_825C2090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15824);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,3840(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3840, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C20B0"))) PPC_WEAK_FUNC(sub_825C20B0);
PPC_FUNC_IMPL(__imp__sub_825C20B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,19816
	ctx.r11.s64 = ctx.r11.s64 + 19816;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-15148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15148);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,512(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 512, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C20D4"))) PPC_WEAK_FUNC(sub_825C20D4);
PPC_FUNC_IMPL(__imp__sub_825C20D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C20D8"))) PPC_WEAK_FUNC(sub_825C20D8);
PPC_FUNC_IMPL(__imp__sub_825C20D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19824);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,7896(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7896, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C20EC"))) PPC_WEAK_FUNC(sub_825C20EC);
PPC_FUNC_IMPL(__imp__sub_825C20EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C20F0"))) PPC_WEAK_FUNC(sub_825C20F0);
PPC_FUNC_IMPL(__imp__sub_825C20F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r10,r10,1568
	ctx.r10.s64 = ctx.r10.s64 + 1568;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,19856
	ctx.r11.s64 = ctx.r11.s64 + 19856;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2124"))) PPC_WEAK_FUNC(sub_825C2124);
PPC_FUNC_IMPL(__imp__sub_825C2124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2128"))) PPC_WEAK_FUNC(sub_825C2128);
PPC_FUNC_IMPL(__imp__sub_825C2128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,-3916(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -3916, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C213C"))) PPC_WEAK_FUNC(sub_825C213C);
PPC_FUNC_IMPL(__imp__sub_825C213C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2140"))) PPC_WEAK_FUNC(sub_825C2140);
PPC_FUNC_IMPL(__imp__sub_825C2140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,19880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19880);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4168(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4168, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C216C"))) PPC_WEAK_FUNC(sub_825C216C);
PPC_FUNC_IMPL(__imp__sub_825C216C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2170"))) PPC_WEAK_FUNC(sub_825C2170);
PPC_FUNC_IMPL(__imp__sub_825C2170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,4168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4168);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,1620(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1620, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2190"))) PPC_WEAK_FUNC(sub_825C2190);
PPC_FUNC_IMPL(__imp__sub_825C2190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,19884(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19884);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,200(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C21BC"))) PPC_WEAK_FUNC(sub_825C21BC);
PPC_FUNC_IMPL(__imp__sub_825C21BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C21C0"))) PPC_WEAK_FUNC(sub_825C21C0);
PPC_FUNC_IMPL(__imp__sub_825C21C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,3512(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3512, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C21E0"))) PPC_WEAK_FUNC(sub_825C21E0);
PPC_FUNC_IMPL(__imp__sub_825C21E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,1368(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1368, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2200"))) PPC_WEAK_FUNC(sub_825C2200);
PPC_FUNC_IMPL(__imp__sub_825C2200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15284);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,19952(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 19952, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2220"))) PPC_WEAK_FUNC(sub_825C2220);
PPC_FUNC_IMPL(__imp__sub_825C2220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-17304(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17304);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,19960(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 19960, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C224C"))) PPC_WEAK_FUNC(sub_825C224C);
PPC_FUNC_IMPL(__imp__sub_825C224C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2250"))) PPC_WEAK_FUNC(sub_825C2250);
PPC_FUNC_IMPL(__imp__sub_825C2250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// ld r10,-4000(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4000);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,-3912
	ctx.r11.s64 = ctx.r11.s64 + -3912;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// ld r10,20064(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 20064);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2274"))) PPC_WEAK_FUNC(sub_825C2274);
PPC_FUNC_IMPL(__imp__sub_825C2274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2278"))) PPC_WEAK_FUNC(sub_825C2278);
PPC_FUNC_IMPL(__imp__sub_825C2278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,20244
	ctx.r11.s64 = ctx.r11.s64 + 20244;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,-17352
	ctx.r11.s64 = ctx.r11.s64 + -17352;
	// lfs f0,732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 732);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 736);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fdivs f0,f8,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// stfs f0,-3396(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -3396, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C22C8"))) PPC_WEAK_FUNC(sub_825C22C8);
PPC_FUNC_IMPL(__imp__sub_825C22C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,20256(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20256);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,4188(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4188, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C22E8"))) PPC_WEAK_FUNC(sub_825C22E8);
PPC_FUNC_IMPL(__imp__sub_825C22E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,-3396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3396);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,4188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4188);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,-516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -516);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,984(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 984, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2314"))) PPC_WEAK_FUNC(sub_825C2314);
PPC_FUNC_IMPL(__imp__sub_825C2314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2318"))) PPC_WEAK_FUNC(sub_825C2318);
PPC_FUNC_IMPL(__imp__sub_825C2318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,3532(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3532, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C232C"))) PPC_WEAK_FUNC(sub_825C232C);
PPC_FUNC_IMPL(__imp__sub_825C232C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2330"))) PPC_WEAK_FUNC(sub_825C2330);
PPC_FUNC_IMPL(__imp__sub_825C2330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,7852(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7852, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2344"))) PPC_WEAK_FUNC(sub_825C2344);
PPC_FUNC_IMPL(__imp__sub_825C2344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2348"))) PPC_WEAK_FUNC(sub_825C2348);
PPC_FUNC_IMPL(__imp__sub_825C2348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,4188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4188);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,7868(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7868, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C235C"))) PPC_WEAK_FUNC(sub_825C235C);
PPC_FUNC_IMPL(__imp__sub_825C235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2360"))) PPC_WEAK_FUNC(sub_825C2360);
PPC_FUNC_IMPL(__imp__sub_825C2360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fnmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// stfs f0,7692(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7692, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C238C"))) PPC_WEAK_FUNC(sub_825C238C);
PPC_FUNC_IMPL(__imp__sub_825C238C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2390"))) PPC_WEAK_FUNC(sub_825C2390);
PPC_FUNC_IMPL(__imp__sub_825C2390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,-15136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15136);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fnmsubs f0,f12,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// stfs f0,4192(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4192, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C23BC"))) PPC_WEAK_FUNC(sub_825C23BC);
PPC_FUNC_IMPL(__imp__sub_825C23BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C23C0"))) PPC_WEAK_FUNC(sub_825C23C0);
PPC_FUNC_IMPL(__imp__sub_825C23C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,20372
	ctx.r11.s64 = ctx.r11.s64 + 20372;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,-16432(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16432);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,7092(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7092, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C23EC"))) PPC_WEAK_FUNC(sub_825C23EC);
PPC_FUNC_IMPL(__imp__sub_825C23EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C23F0"))) PPC_WEAK_FUNC(sub_825C23F0);
PPC_FUNC_IMPL(__imp__sub_825C23F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r9,-32091
	ctx.r9.s64 = -2103115776;
	// addi r10,r11,20372
	ctx.r10.s64 = ctx.r11.s64 + 20372;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,528
	ctx.r11.s64 = ctx.r11.s64 + 528;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f13,7092(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7092);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f13,36(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2454"))) PPC_WEAK_FUNC(sub_825C2454);
PPC_FUNC_IMPL(__imp__sub_825C2454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2458"))) PPC_WEAK_FUNC(sub_825C2458);
PPC_FUNC_IMPL(__imp__sub_825C2458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,20468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20468);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,508(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 508, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2478"))) PPC_WEAK_FUNC(sub_825C2478);
PPC_FUNC_IMPL(__imp__sub_825C2478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,20464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20464);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,25560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25560);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,3516(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3516, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2498"))) PPC_WEAK_FUNC(sub_825C2498);
PPC_FUNC_IMPL(__imp__sub_825C2498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,20464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20464);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-14408(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14408);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,972(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 972, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C24B8"))) PPC_WEAK_FUNC(sub_825C24B8);
PPC_FUNC_IMPL(__imp__sub_825C24B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,3116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3116);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-3876(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -3876, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C24D8"))) PPC_WEAK_FUNC(sub_825C24D8);
PPC_FUNC_IMPL(__imp__sub_825C24D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stfs f0,20488(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20488, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C24EC"))) PPC_WEAK_FUNC(sub_825C24EC);
PPC_FUNC_IMPL(__imp__sub_825C24EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C24F0"))) PPC_WEAK_FUNC(sub_825C24F0);
PPC_FUNC_IMPL(__imp__sub_825C24F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-16328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16328);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,-3960
	ctx.r11.s64 = ctx.r11.s64 + -3960;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2514"))) PPC_WEAK_FUNC(sub_825C2514);
PPC_FUNC_IMPL(__imp__sub_825C2514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2518"))) PPC_WEAK_FUNC(sub_825C2518);
PPC_FUNC_IMPL(__imp__sub_825C2518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,20112
	ctx.r11.s64 = ctx.r11.s64 + 20112;
	// addi r10,r10,7104
	ctx.r10.s64 = ctx.r10.s64 + 7104;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C253C"))) PPC_WEAK_FUNC(sub_825C253C);
PPC_FUNC_IMPL(__imp__sub_825C253C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2540"))) PPC_WEAK_FUNC(sub_825C2540);
PPC_FUNC_IMPL(__imp__sub_825C2540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,20496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20496);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,4860(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4860, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2560"))) PPC_WEAK_FUNC(sub_825C2560);
PPC_FUNC_IMPL(__imp__sub_825C2560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,20584(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20584);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,1196(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1196, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2578"))) PPC_WEAK_FUNC(sub_825C2578);
PPC_FUNC_IMPL(__imp__sub_825C2578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,20600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20600);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4184(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4184, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2598"))) PPC_WEAK_FUNC(sub_825C2598);
PPC_FUNC_IMPL(__imp__sub_825C2598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,4184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4184);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,3508(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3508, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C25B8"))) PPC_WEAK_FUNC(sub_825C25B8);
PPC_FUNC_IMPL(__imp__sub_825C25B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,3508(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3508);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-1680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1680);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,-3892(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -3892, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C25D8"))) PPC_WEAK_FUNC(sub_825C25D8);
PPC_FUNC_IMPL(__imp__sub_825C25D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-14660
	ctx.r11.s64 = ctx.r11.s64 + -14660;
	// addi r10,r10,776
	ctx.r10.s64 = ctx.r10.s64 + 776;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C25F4"))) PPC_WEAK_FUNC(sub_825C25F4);
PPC_FUNC_IMPL(__imp__sub_825C25F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C25F8"))) PPC_WEAK_FUNC(sub_825C25F8);
PPC_FUNC_IMPL(__imp__sub_825C25F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-15092
	ctx.r11.s64 = ctx.r11.s64 + -15092;
	// addi r10,r10,324
	ctx.r10.s64 = ctx.r10.s64 + 324;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2614"))) PPC_WEAK_FUNC(sub_825C2614);
PPC_FUNC_IMPL(__imp__sub_825C2614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2618"))) PPC_WEAK_FUNC(sub_825C2618);
PPC_FUNC_IMPL(__imp__sub_825C2618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-14552
	ctx.r11.s64 = ctx.r11.s64 + -14552;
	// addi r10,r10,-3392
	ctx.r10.s64 = ctx.r10.s64 + -3392;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,1792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1792, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2634"))) PPC_WEAK_FUNC(sub_825C2634);
PPC_FUNC_IMPL(__imp__sub_825C2634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2638"))) PPC_WEAK_FUNC(sub_825C2638);
PPC_FUNC_IMPL(__imp__sub_825C2638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-15080
	ctx.r11.s64 = ctx.r11.s64 + -15080;
	// addi r10,r10,3536
	ctx.r10.s64 = ctx.r10.s64 + 3536;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2654"))) PPC_WEAK_FUNC(sub_825C2654);
PPC_FUNC_IMPL(__imp__sub_825C2654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2658"))) PPC_WEAK_FUNC(sub_825C2658);
PPC_FUNC_IMPL(__imp__sub_825C2658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-15068
	ctx.r11.s64 = ctx.r11.s64 + -15068;
	// addi r10,r10,7132
	ctx.r10.s64 = ctx.r10.s64 + 7132;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2674"))) PPC_WEAK_FUNC(sub_825C2674);
PPC_FUNC_IMPL(__imp__sub_825C2674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2678"))) PPC_WEAK_FUNC(sub_825C2678);
PPC_FUNC_IMPL(__imp__sub_825C2678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-15056
	ctx.r11.s64 = ctx.r11.s64 + -15056;
	// addi r10,r10,7936
	ctx.r10.s64 = ctx.r10.s64 + 7936;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2694"))) PPC_WEAK_FUNC(sub_825C2694);
PPC_FUNC_IMPL(__imp__sub_825C2694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2698"))) PPC_WEAK_FUNC(sub_825C2698);
PPC_FUNC_IMPL(__imp__sub_825C2698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x825C26A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r11,3024
	ctx.r31.s64 = ctx.r11.s64 + 3024;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,-14648
	ctx.r29.s64 = ctx.r11.s64 + -14648;
loc_825C26B8:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,-17512
	ctx.r6.s64 = ctx.r11.s64 + -17512;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82097220
	ctx.lr = 0x825C26D4;
	sub_82097220(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,240
	ctx.r31.s64 = ctx.r31.s64 + 240;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x825c26b8
	if (!ctx.cr6.lt) goto loc_825C26B8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C26EC"))) PPC_WEAK_FUNC(sub_825C26EC);
PPC_FUNC_IMPL(__imp__sub_825C26EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C26F0"))) PPC_WEAK_FUNC(sub_825C26F0);
PPC_FUNC_IMPL(__imp__sub_825C26F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-15044
	ctx.r11.s64 = ctx.r11.s64 + -15044;
	// addi r10,r10,4220
	ctx.r10.s64 = ctx.r10.s64 + 4220;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 316, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C270C"))) PPC_WEAK_FUNC(sub_825C270C);
PPC_FUNC_IMPL(__imp__sub_825C270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2710"))) PPC_WEAK_FUNC(sub_825C2710);
PPC_FUNC_IMPL(__imp__sub_825C2710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-15032
	ctx.r11.s64 = ctx.r11.s64 + -15032;
	// addi r10,r10,992
	ctx.r10.s64 = ctx.r10.s64 + 992;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C272C"))) PPC_WEAK_FUNC(sub_825C272C);
PPC_FUNC_IMPL(__imp__sub_825C272C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2730"))) PPC_WEAK_FUNC(sub_825C2730);
PPC_FUNC_IMPL(__imp__sub_825C2730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-15020
	ctx.r11.s64 = ctx.r11.s64 + -15020;
	// addi r10,r10,7264
	ctx.r10.s64 = ctx.r10.s64 + 7264;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C274C"))) PPC_WEAK_FUNC(sub_825C274C);
PPC_FUNC_IMPL(__imp__sub_825C274C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2750"))) PPC_WEAK_FUNC(sub_825C2750);
PPC_FUNC_IMPL(__imp__sub_825C2750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-15008
	ctx.r11.s64 = ctx.r11.s64 + -15008;
	// addi r10,r10,1208
	ctx.r10.s64 = ctx.r10.s64 + 1208;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C276C"))) PPC_WEAK_FUNC(sub_825C276C);
PPC_FUNC_IMPL(__imp__sub_825C276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2770"))) PPC_WEAK_FUNC(sub_825C2770);
PPC_FUNC_IMPL(__imp__sub_825C2770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-14996
	ctx.r11.s64 = ctx.r11.s64 + -14996;
	// addi r10,r10,1632
	ctx.r10.s64 = ctx.r10.s64 + 1632;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 696, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C278C"))) PPC_WEAK_FUNC(sub_825C278C);
PPC_FUNC_IMPL(__imp__sub_825C278C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2790"))) PPC_WEAK_FUNC(sub_825C2790);
PPC_FUNC_IMPL(__imp__sub_825C2790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-14984
	ctx.r11.s64 = ctx.r11.s64 + -14984;
	// addi r10,r10,3848
	ctx.r10.s64 = ctx.r10.s64 + 3848;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C27AC"))) PPC_WEAK_FUNC(sub_825C27AC);
PPC_FUNC_IMPL(__imp__sub_825C27AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C27B0"))) PPC_WEAK_FUNC(sub_825C27B0);
PPC_FUNC_IMPL(__imp__sub_825C27B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-14972
	ctx.r11.s64 = ctx.r11.s64 + -14972;
	// addi r10,r10,4024
	ctx.r10.s64 = ctx.r10.s64 + 4024;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C27CC"))) PPC_WEAK_FUNC(sub_825C27CC);
PPC_FUNC_IMPL(__imp__sub_825C27CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C27D0"))) PPC_WEAK_FUNC(sub_825C27D0);
PPC_FUNC_IMPL(__imp__sub_825C27D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-14960
	ctx.r11.s64 = ctx.r11.s64 + -14960;
	// addi r10,r10,8176
	ctx.r10.s64 = ctx.r10.s64 + 8176;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C27EC"))) PPC_WEAK_FUNC(sub_825C27EC);
PPC_FUNC_IMPL(__imp__sub_825C27EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C27F0"))) PPC_WEAK_FUNC(sub_825C27F0);
PPC_FUNC_IMPL(__imp__sub_825C27F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-14948
	ctx.r11.s64 = ctx.r11.s64 + -14948;
	// addi r10,r10,592
	ctx.r10.s64 = ctx.r10.s64 + 592;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C280C"))) PPC_WEAK_FUNC(sub_825C280C);
PPC_FUNC_IMPL(__imp__sub_825C280C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2810"))) PPC_WEAK_FUNC(sub_825C2810);
PPC_FUNC_IMPL(__imp__sub_825C2810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-14936
	ctx.r11.s64 = ctx.r11.s64 + -14936;
	// addi r10,r10,-3732
	ctx.r10.s64 = ctx.r10.s64 + -3732;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C282C"))) PPC_WEAK_FUNC(sub_825C282C);
PPC_FUNC_IMPL(__imp__sub_825C282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2830"))) PPC_WEAK_FUNC(sub_825C2830);
PPC_FUNC_IMPL(__imp__sub_825C2830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-14924
	ctx.r11.s64 = ctx.r11.s64 + -14924;
	// addi r10,r10,7712
	ctx.r10.s64 = ctx.r10.s64 + 7712;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C284C"))) PPC_WEAK_FUNC(sub_825C284C);
PPC_FUNC_IMPL(__imp__sub_825C284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2850"))) PPC_WEAK_FUNC(sub_825C2850);
PPC_FUNC_IMPL(__imp__sub_825C2850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-14912
	ctx.r11.s64 = ctx.r11.s64 + -14912;
	// addi r10,r10,7536
	ctx.r10.s64 = ctx.r10.s64 + 7536;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C286C"))) PPC_WEAK_FUNC(sub_825C286C);
PPC_FUNC_IMPL(__imp__sub_825C286C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2870"))) PPC_WEAK_FUNC(sub_825C2870);
PPC_FUNC_IMPL(__imp__sub_825C2870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-14900
	ctx.r11.s64 = ctx.r11.s64 + -14900;
	// addi r10,r10,-3868
	ctx.r10.s64 = ctx.r10.s64 + -3868;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C288C"))) PPC_WEAK_FUNC(sub_825C288C);
PPC_FUNC_IMPL(__imp__sub_825C288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2890"))) PPC_WEAK_FUNC(sub_825C2890);
PPC_FUNC_IMPL(__imp__sub_825C2890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-14888
	ctx.r11.s64 = ctx.r11.s64 + -14888;
	// addi r10,r10,3752
	ctx.r10.s64 = ctx.r10.s64 + 3752;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C28AC"))) PPC_WEAK_FUNC(sub_825C28AC);
PPC_FUNC_IMPL(__imp__sub_825C28AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C28B0"))) PPC_WEAK_FUNC(sub_825C28B0);
PPC_FUNC_IMPL(__imp__sub_825C28B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23228);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-1608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1608);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-3896(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -3896, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C28D0"))) PPC_WEAK_FUNC(sub_825C28D0);
PPC_FUNC_IMPL(__imp__sub_825C28D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23236);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-15672
	ctx.r11.s64 = ctx.r11.s64 + -15672;
	// lfs f13,-184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -184);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-1608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1608);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,7120(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7120, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2908"))) PPC_WEAK_FUNC(sub_825C2908);
PPC_FUNC_IMPL(__imp__sub_825C2908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-17436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17436);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,23236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23236);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,3148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3148);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,8372(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8372, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2934"))) PPC_WEAK_FUNC(sub_825C2934);
PPC_FUNC_IMPL(__imp__sub_825C2934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2938"))) PPC_WEAK_FUNC(sub_825C2938);
PPC_FUNC_IMPL(__imp__sub_825C2938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,8372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8372);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,7916(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7916, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2958"))) PPC_WEAK_FUNC(sub_825C2958);
PPC_FUNC_IMPL(__imp__sub_825C2958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23304(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23304);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,772(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 772, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C296C"))) PPC_WEAK_FUNC(sub_825C296C);
PPC_FUNC_IMPL(__imp__sub_825C296C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2970"))) PPC_WEAK_FUNC(sub_825C2970);
PPC_FUNC_IMPL(__imp__sub_825C2970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23308);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,772(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 772);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4180(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4180, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2990"))) PPC_WEAK_FUNC(sub_825C2990);
PPC_FUNC_IMPL(__imp__sub_825C2990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23312);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,4180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4180);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,1608(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1608, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C29B0"))) PPC_WEAK_FUNC(sub_825C29B0);
PPC_FUNC_IMPL(__imp__sub_825C29B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23316);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,1608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,7680(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7680, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C29D0"))) PPC_WEAK_FUNC(sub_825C29D0);
PPC_FUNC_IMPL(__imp__sub_825C29D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,1608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,8364(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8364, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C29E4"))) PPC_WEAK_FUNC(sub_825C29E4);
PPC_FUNC_IMPL(__imp__sub_825C29E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C29E8"))) PPC_WEAK_FUNC(sub_825C29E8);
PPC_FUNC_IMPL(__imp__sub_825C29E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23320);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,1588(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1588, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C29FC"))) PPC_WEAK_FUNC(sub_825C29FC);
PPC_FUNC_IMPL(__imp__sub_825C29FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2A00"))) PPC_WEAK_FUNC(sub_825C2A00);
PPC_FUNC_IMPL(__imp__sub_825C2A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23324);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,1588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,1584(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1584, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2A20"))) PPC_WEAK_FUNC(sub_825C2A20);
PPC_FUNC_IMPL(__imp__sub_825C2A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23328);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,1584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,1616(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1616, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2A40"))) PPC_WEAK_FUNC(sub_825C2A40);
PPC_FUNC_IMPL(__imp__sub_825C2A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23332);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,1616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1616);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,7100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7100, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2A60"))) PPC_WEAK_FUNC(sub_825C2A60);
PPC_FUNC_IMPL(__imp__sub_825C2A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,7680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7680);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,23336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23336);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,1600(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1600, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2A80"))) PPC_WEAK_FUNC(sub_825C2A80);
PPC_FUNC_IMPL(__imp__sub_825C2A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,7680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7680);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,4856(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4856, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2A94"))) PPC_WEAK_FUNC(sub_825C2A94);
PPC_FUNC_IMPL(__imp__sub_825C2A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2A98"))) PPC_WEAK_FUNC(sub_825C2A98);
PPC_FUNC_IMPL(__imp__sub_825C2A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-15136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15136);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,968(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 968, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2AB8"))) PPC_WEAK_FUNC(sub_825C2AB8);
PPC_FUNC_IMPL(__imp__sub_825C2AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23340);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-15804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15804);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-3880(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -3880, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2AE4"))) PPC_WEAK_FUNC(sub_825C2AE4);
PPC_FUNC_IMPL(__imp__sub_825C2AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2AE8"))) PPC_WEAK_FUNC(sub_825C2AE8);
PPC_FUNC_IMPL(__imp__sub_825C2AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,4212(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4212, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2AFC"))) PPC_WEAK_FUNC(sub_825C2AFC);
PPC_FUNC_IMPL(__imp__sub_825C2AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2B00"))) PPC_WEAK_FUNC(sub_825C2B00);
PPC_FUNC_IMPL(__imp__sub_825C2B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,988(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 988, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2B14"))) PPC_WEAK_FUNC(sub_825C2B14);
PPC_FUNC_IMPL(__imp__sub_825C2B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2B18"))) PPC_WEAK_FUNC(sub_825C2B18);
PPC_FUNC_IMPL(__imp__sub_825C2B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,7680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7680);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,4212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4212);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,1596(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1596, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2B38"))) PPC_WEAK_FUNC(sub_825C2B38);
PPC_FUNC_IMPL(__imp__sub_825C2B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,7680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7680);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,1612(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1612, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2B4C"))) PPC_WEAK_FUNC(sub_825C2B4C);
PPC_FUNC_IMPL(__imp__sub_825C2B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2B50"))) PPC_WEAK_FUNC(sub_825C2B50);
PPC_FUNC_IMPL(__imp__sub_825C2B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,3844(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3844, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2B64"))) PPC_WEAK_FUNC(sub_825C2B64);
PPC_FUNC_IMPL(__imp__sub_825C2B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2B68"))) PPC_WEAK_FUNC(sub_825C2B68);
PPC_FUNC_IMPL(__imp__sub_825C2B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23352);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,3844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,1592(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1592, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2B88"))) PPC_WEAK_FUNC(sub_825C2B88);
PPC_FUNC_IMPL(__imp__sub_825C2B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23356);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,1592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1592);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,7700(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7700, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2BA8"))) PPC_WEAK_FUNC(sub_825C2BA8);
PPC_FUNC_IMPL(__imp__sub_825C2BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23360);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,7700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7700);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,1604(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1604, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2BC8"))) PPC_WEAK_FUNC(sub_825C2BC8);
PPC_FUNC_IMPL(__imp__sub_825C2BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,7700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7700);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,7096(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7096, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2BDC"))) PPC_WEAK_FUNC(sub_825C2BDC);
PPC_FUNC_IMPL(__imp__sub_825C2BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2BE0"))) PPC_WEAK_FUNC(sub_825C2BE0);
PPC_FUNC_IMPL(__imp__sub_825C2BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23364);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,7260(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7260, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2BF4"))) PPC_WEAK_FUNC(sub_825C2BF4);
PPC_FUNC_IMPL(__imp__sub_825C2BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2BF8"))) PPC_WEAK_FUNC(sub_825C2BF8);
PPC_FUNC_IMPL(__imp__sub_825C2BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,1604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1604);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,23368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23368);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,4200(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4200, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2C18"))) PPC_WEAK_FUNC(sub_825C2C18);
PPC_FUNC_IMPL(__imp__sub_825C2C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,1604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1604);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,1364(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1364, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2C2C"))) PPC_WEAK_FUNC(sub_825C2C2C);
PPC_FUNC_IMPL(__imp__sub_825C2C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2C30"))) PPC_WEAK_FUNC(sub_825C2C30);
PPC_FUNC_IMPL(__imp__sub_825C2C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23384);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-1528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,7880(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7880, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2C50"))) PPC_WEAK_FUNC(sub_825C2C50);
PPC_FUNC_IMPL(__imp__sub_825C2C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 772);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,1628(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1628, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2C70"))) PPC_WEAK_FUNC(sub_825C2C70);
PPC_FUNC_IMPL(__imp__sub_825C2C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,1628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-14404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14404);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8360(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8360, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2C90"))) PPC_WEAK_FUNC(sub_825C2C90);
PPC_FUNC_IMPL(__imp__sub_825C2C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23552);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f12,-15148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15148);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,7876(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7876, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2CB8"))) PPC_WEAK_FUNC(sub_825C2CB8);
PPC_FUNC_IMPL(__imp__sub_825C2CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23552);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-1680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1680);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,3744(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3744, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2CD8"))) PPC_WEAK_FUNC(sub_825C2CD8);
PPC_FUNC_IMPL(__imp__sub_825C2CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23608);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,-3936(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -3936, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2CEC"))) PPC_WEAK_FUNC(sub_825C2CEC);
PPC_FUNC_IMPL(__imp__sub_825C2CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2CF0"))) PPC_WEAK_FUNC(sub_825C2CF0);
PPC_FUNC_IMPL(__imp__sub_825C2CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23608);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-15148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15148);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,-576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -576);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,23616(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 23616, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2D18"))) PPC_WEAK_FUNC(sub_825C2D18);
PPC_FUNC_IMPL(__imp__sub_825C2D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23632);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,1200(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1200, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2D2C"))) PPC_WEAK_FUNC(sub_825C2D2C);
PPC_FUNC_IMPL(__imp__sub_825C2D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2D30"))) PPC_WEAK_FUNC(sub_825C2D30);
PPC_FUNC_IMPL(__imp__sub_825C2D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23636(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23636);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,1200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,7872(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7872, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2D50"))) PPC_WEAK_FUNC(sub_825C2D50);
PPC_FUNC_IMPL(__imp__sub_825C2D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23640);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,7872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7872);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,4176(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4176, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2D70"))) PPC_WEAK_FUNC(sub_825C2D70);
PPC_FUNC_IMPL(__imp__sub_825C2D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,23640
	ctx.r11.s64 = ctx.r11.s64 + 23640;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,7696(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7696, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2D90"))) PPC_WEAK_FUNC(sub_825C2D90);
PPC_FUNC_IMPL(__imp__sub_825C2D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,1200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,524(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 524, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2DA4"))) PPC_WEAK_FUNC(sub_825C2DA4);
PPC_FUNC_IMPL(__imp__sub_825C2DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2DA8"))) PPC_WEAK_FUNC(sub_825C2DA8);
PPC_FUNC_IMPL(__imp__sub_825C2DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,23688
	ctx.r11.s64 = ctx.r11.s64 + 23688;
	// addi r10,r10,7888
	ctx.r10.s64 = ctx.r10.s64 + 7888;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2DCC"))) PPC_WEAK_FUNC(sub_825C2DCC);
PPC_FUNC_IMPL(__imp__sub_825C2DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2DD0"))) PPC_WEAK_FUNC(sub_825C2DD0);
PPC_FUNC_IMPL(__imp__sub_825C2DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// ld r11,23704(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 23704);
	// std r11,976(r10)
	PPC_STORE_U64(ctx.r10.u32 + 976, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2DE4"))) PPC_WEAK_FUNC(sub_825C2DE4);
PPC_FUNC_IMPL(__imp__sub_825C2DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2DE8"))) PPC_WEAK_FUNC(sub_825C2DE8);
PPC_FUNC_IMPL(__imp__sub_825C2DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23712);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,4852(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4852, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2DFC"))) PPC_WEAK_FUNC(sub_825C2DFC);
PPC_FUNC_IMPL(__imp__sub_825C2DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2E00"))) PPC_WEAK_FUNC(sub_825C2E00);
PPC_FUNC_IMPL(__imp__sub_825C2E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23712);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,1360(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1360, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2E14"))) PPC_WEAK_FUNC(sub_825C2E14);
PPC_FUNC_IMPL(__imp__sub_825C2E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2E18"))) PPC_WEAK_FUNC(sub_825C2E18);
PPC_FUNC_IMPL(__imp__sub_825C2E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,23716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23716);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,1360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,7856(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7856, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2E38"))) PPC_WEAK_FUNC(sub_825C2E38);
PPC_FUNC_IMPL(__imp__sub_825C2E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,4852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4852);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,7856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7856);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8376(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8376, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2E58"))) PPC_WEAK_FUNC(sub_825C2E58);
PPC_FUNC_IMPL(__imp__sub_825C2E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,7684(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7684, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2E78"))) PPC_WEAK_FUNC(sub_825C2E78);
PPC_FUNC_IMPL(__imp__sub_825C2E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,19344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,7864(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7864, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2E8C"))) PPC_WEAK_FUNC(sub_825C2E8C);
PPC_FUNC_IMPL(__imp__sub_825C2E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2E90"))) PPC_WEAK_FUNC(sub_825C2E90);
PPC_FUNC_IMPL(__imp__sub_825C2E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,7684(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7684);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stfs f0,23720(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 23720, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2EA4"))) PPC_WEAK_FUNC(sub_825C2EA4);
PPC_FUNC_IMPL(__imp__sub_825C2EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2EA8"))) PPC_WEAK_FUNC(sub_825C2EA8);
PPC_FUNC_IMPL(__imp__sub_825C2EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-16616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16616);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,23736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23736);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,7688(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7688, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2EC8"))) PPC_WEAK_FUNC(sub_825C2EC8);
PPC_FUNC_IMPL(__imp__sub_825C2EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15464);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,23740(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23740);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,204(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2EE8"))) PPC_WEAK_FUNC(sub_825C2EE8);
PPC_FUNC_IMPL(__imp__sub_825C2EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,13356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13356);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,23736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23736);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,768(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 768, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2F08"))) PPC_WEAK_FUNC(sub_825C2F08);
PPC_FUNC_IMPL(__imp__sub_825C2F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15824);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,23740(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23740);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,7708(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7708, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2F28"))) PPC_WEAK_FUNC(sub_825C2F28);
PPC_FUNC_IMPL(__imp__sub_825C2F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-17352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17352);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,23736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23736);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,8168(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8168, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2F48"))) PPC_WEAK_FUNC(sub_825C2F48);
PPC_FUNC_IMPL(__imp__sub_825C2F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,8168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8168);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,7688(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7688);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r11,r11,23744
	ctx.r11.s64 = ctx.r11.s64 + 23744;
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f13,36(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2F78"))) PPC_WEAK_FUNC(sub_825C2F78);
PPC_FUNC_IMPL(__imp__sub_825C2F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15464);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,23808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23808);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-3888(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -3888, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2F98"))) PPC_WEAK_FUNC(sub_825C2F98);
PPC_FUNC_IMPL(__imp__sub_825C2F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15464);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,23808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23808);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,1372(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1372, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2FB8"))) PPC_WEAK_FUNC(sub_825C2FB8);
PPC_FUNC_IMPL(__imp__sub_825C2FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15464);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,23808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23808);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-3920(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -3920, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2FD8"))) PPC_WEAK_FUNC(sub_825C2FD8);
PPC_FUNC_IMPL(__imp__sub_825C2FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-16616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16616);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,23976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23976);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,1624(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1624, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2FF8"))) PPC_WEAK_FUNC(sub_825C2FF8);
PPC_FUNC_IMPL(__imp__sub_825C2FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15464);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,23980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23980);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,1184(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1184, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3018"))) PPC_WEAK_FUNC(sub_825C3018);
PPC_FUNC_IMPL(__imp__sub_825C3018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15464);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,23980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23980);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,4204(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4204, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3038"))) PPC_WEAK_FUNC(sub_825C3038);
PPC_FUNC_IMPL(__imp__sub_825C3038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,13356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13356);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,23976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23976);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,4172(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4172, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3058"))) PPC_WEAK_FUNC(sub_825C3058);
PPC_FUNC_IMPL(__imp__sub_825C3058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-17352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17352);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,23976(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23976);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,7912(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7912, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3078"))) PPC_WEAK_FUNC(sub_825C3078);
PPC_FUNC_IMPL(__imp__sub_825C3078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,7912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7912);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,1624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1624);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r11,r11,23984
	ctx.r11.s64 = ctx.r11.s64 + 23984;
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f13,36(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C30A8"))) PPC_WEAK_FUNC(sub_825C30A8);
PPC_FUNC_IMPL(__imp__sub_825C30A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r8,r11,20080
	ctx.r8.s64 = ctx.r11.s64 + 20080;
	// addi r9,r10,24384
	ctx.r9.s64 = ctx.r10.s64 + 24384;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,24432
	ctx.r11.s64 = ctx.r11.s64 + 24432;
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C30F0"))) PPC_WEAK_FUNC(sub_825C30F0);
PPC_FUNC_IMPL(__imp__sub_825C30F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,24544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24544);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,7908(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7908, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3110"))) PPC_WEAK_FUNC(sub_825C3110);
PPC_FUNC_IMPL(__imp__sub_825C3110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,24664(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24664);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -576);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,1204(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1204, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3130"))) PPC_WEAK_FUNC(sub_825C3130);
PPC_FUNC_IMPL(__imp__sub_825C3130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f0,1204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1204);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stfs f0,24672(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24672, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3144"))) PPC_WEAK_FUNC(sub_825C3144);
PPC_FUNC_IMPL(__imp__sub_825C3144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3148"))) PPC_WEAK_FUNC(sub_825C3148);
PPC_FUNC_IMPL(__imp__sub_825C3148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,-23608
	ctx.r11.s64 = ctx.r11.s64 + -23608;
	// addi r10,r10,8380
	ctx.r10.s64 = ctx.r10.s64 + 8380;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C318C"))) PPC_WEAK_FUNC(sub_825C318C);
PPC_FUNC_IMPL(__imp__sub_825C318C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3190"))) PPC_WEAK_FUNC(sub_825C3190);
PPC_FUNC_IMPL(__imp__sub_825C3190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1528(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,24796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24796);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,8172(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8172, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C31B0"))) PPC_WEAK_FUNC(sub_825C31B0);
PPC_FUNC_IMPL(__imp__sub_825C31B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,24796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24796);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C31C4"))) PPC_WEAK_FUNC(sub_825C31C4);
PPC_FUNC_IMPL(__imp__sub_825C31C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C31C8"))) PPC_WEAK_FUNC(sub_825C31C8);
PPC_FUNC_IMPL(__imp__sub_825C31C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,24792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24792);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-14604(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14604);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r11,r11,24808
	ctx.r11.s64 = ctx.r11.s64 + 24808;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C31EC"))) PPC_WEAK_FUNC(sub_825C31EC);
PPC_FUNC_IMPL(__imp__sub_825C31EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C31F0"))) PPC_WEAK_FUNC(sub_825C31F0);
PPC_FUNC_IMPL(__imp__sub_825C31F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,24800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24800);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-1528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1528);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,1580(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1580, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3210"))) PPC_WEAK_FUNC(sub_825C3210);
PPC_FUNC_IMPL(__imp__sub_825C3210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,24792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24792);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-15284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15284);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,7848(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7848, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3230"))) PPC_WEAK_FUNC(sub_825C3230);
PPC_FUNC_IMPL(__imp__sub_825C3230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,26712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26712);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,10160(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10160, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3250"))) PPC_WEAK_FUNC(sub_825C3250);
PPC_FUNC_IMPL(__imp__sub_825C3250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,26712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26712);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-15100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,10152(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10152, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3270"))) PPC_WEAK_FUNC(sub_825C3270);
PPC_FUNC_IMPL(__imp__sub_825C3270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,26772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26772);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2872);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,10156(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10156, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3290"))) PPC_WEAK_FUNC(sub_825C3290);
PPC_FUNC_IMPL(__imp__sub_825C3290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,26784(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26784);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,10136(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10136, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C32B0"))) PPC_WEAK_FUNC(sub_825C32B0);
PPC_FUNC_IMPL(__imp__sub_825C32B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,26804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-10672(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10672);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,10164(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10164, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C32D0"))) PPC_WEAK_FUNC(sub_825C32D0);
PPC_FUNC_IMPL(__imp__sub_825C32D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,26808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26808);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-10644(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10644);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,10140(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10140, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C32F0"))) PPC_WEAK_FUNC(sub_825C32F0);
PPC_FUNC_IMPL(__imp__sub_825C32F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,26816(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26816);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,10132(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10132, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3304"))) PPC_WEAK_FUNC(sub_825C3304);
PPC_FUNC_IMPL(__imp__sub_825C3304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3308"))) PPC_WEAK_FUNC(sub_825C3308);
PPC_FUNC_IMPL(__imp__sub_825C3308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,26808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26808);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-10632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10632);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,10148(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10148, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3328"))) PPC_WEAK_FUNC(sub_825C3328);
PPC_FUNC_IMPL(__imp__sub_825C3328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,26808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26808);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-10628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10628);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,10144(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10144, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3348"))) PPC_WEAK_FUNC(sub_825C3348);
PPC_FUNC_IMPL(__imp__sub_825C3348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,26808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26808);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,10144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10144);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,10128(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10128, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3368"))) PPC_WEAK_FUNC(sub_825C3368);
PPC_FUNC_IMPL(__imp__sub_825C3368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,28856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28856);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,8952(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8952);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,10240(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10240, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3388"))) PPC_WEAK_FUNC(sub_825C3388);
PPC_FUNC_IMPL(__imp__sub_825C3388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,28856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28856);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-15100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,10232(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10232, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C33A8"))) PPC_WEAK_FUNC(sub_825C33A8);
PPC_FUNC_IMPL(__imp__sub_825C33A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,28916(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28916);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2872);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,10236(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10236, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C33C8"))) PPC_WEAK_FUNC(sub_825C33C8);
PPC_FUNC_IMPL(__imp__sub_825C33C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,28940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28940);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,9088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9088);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,10244(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10244, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C33E8"))) PPC_WEAK_FUNC(sub_825C33E8);
PPC_FUNC_IMPL(__imp__sub_825C33E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,28944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28944);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,9116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9116);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,10220(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10220, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3408"))) PPC_WEAK_FUNC(sub_825C3408);
PPC_FUNC_IMPL(__imp__sub_825C3408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,28952(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28952);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f0,10212(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10212, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C341C"))) PPC_WEAK_FUNC(sub_825C341C);
PPC_FUNC_IMPL(__imp__sub_825C341C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3420"))) PPC_WEAK_FUNC(sub_825C3420);
PPC_FUNC_IMPL(__imp__sub_825C3420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,28944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28944);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,9128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9128);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,10228(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10228, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3440"))) PPC_WEAK_FUNC(sub_825C3440);
PPC_FUNC_IMPL(__imp__sub_825C3440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,28944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28944);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,9132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9132);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,10224(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10224, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3460"))) PPC_WEAK_FUNC(sub_825C3460);
PPC_FUNC_IMPL(__imp__sub_825C3460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,28944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28944);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lfs f13,10224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10224);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,10208(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10208, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3480"))) PPC_WEAK_FUNC(sub_825C3480);
PPC_FUNC_IMPL(__imp__sub_825C3480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,14632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14632);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f13,28964(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28964);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,10216(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10216, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C34A0"))) PPC_WEAK_FUNC(sub_825C34A0);
PPC_FUNC_IMPL(__imp__sub_825C34A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,31144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31144);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,31416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31416);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-27284(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27284, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C34C0"))) PPC_WEAK_FUNC(sub_825C34C0);
PPC_FUNC_IMPL(__imp__sub_825C34C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,31144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31144);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-15100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-27292(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27292, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C34E0"))) PPC_WEAK_FUNC(sub_825C34E0);
PPC_FUNC_IMPL(__imp__sub_825C34E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,31204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31204);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2872);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,-27288(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27288, temp.u32);
	// blr 
	return;
}


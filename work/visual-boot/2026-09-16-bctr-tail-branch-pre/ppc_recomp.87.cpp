#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825C3500"))) PPC_WEAK_FUNC(sub_825C3500);
PPC_FUNC_IMPL(__imp__sub_825C3500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,31232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31232);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-1632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1632);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,-25040(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -25040, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3520"))) PPC_WEAK_FUNC(sub_825C3520);
PPC_FUNC_IMPL(__imp__sub_825C3520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,31236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31236);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,26640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26640);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,-28072(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28072, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3540"))) PPC_WEAK_FUNC(sub_825C3540);
PPC_FUNC_IMPL(__imp__sub_825C3540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,31244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31244);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// stfs f0,-28592(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28592, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3554"))) PPC_WEAK_FUNC(sub_825C3554);
PPC_FUNC_IMPL(__imp__sub_825C3554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3558"))) PPC_WEAK_FUNC(sub_825C3558);
PPC_FUNC_IMPL(__imp__sub_825C3558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,31236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31236);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,26652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26652);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-27296(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -27296, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3578"))) PPC_WEAK_FUNC(sub_825C3578);
PPC_FUNC_IMPL(__imp__sub_825C3578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,31236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31236);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,26656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26656);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-28068(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28068, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3598"))) PPC_WEAK_FUNC(sub_825C3598);
PPC_FUNC_IMPL(__imp__sub_825C3598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,31236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31236);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lfs f13,-28068(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28068);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,12992(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12992, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C35B8"))) PPC_WEAK_FUNC(sub_825C35B8);
PPC_FUNC_IMPL(__imp__sub_825C35B8) {
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
	// lfs f13,31252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31252);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-28588(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28588, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C35D8"))) PPC_WEAK_FUNC(sub_825C35D8);
PPC_FUNC_IMPL(__imp__sub_825C35D8) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,6136
	ctx.r3.s64 = ctx.r11.s64 + 6136;
	// bl 0x82400230
	ctx.lr = 0x825C360C;
	sub_82400230(ctx, base);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r3,r11,26888
	ctx.r3.s64 = ctx.r11.s64 + 26888;
	// bl 0x8259e020
	ctx.lr = 0x825C3618;
	sub_8259E020(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3628"))) PPC_WEAK_FUNC(sub_825C3628);
PPC_FUNC_IMPL(__imp__sub_825C3628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// addi r11,r11,31948
	ctx.r11.s64 = ctx.r11.s64 + 31948;
	// addi r10,r10,-28064
	ctx.r10.s64 = ctx.r10.s64 + -28064;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 192, ctx.r11.u32);
	// stw r11,384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 384, ctx.r11.u32);
	// stw r11,576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 576, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C364C"))) PPC_WEAK_FUNC(sub_825C364C);
PPC_FUNC_IMPL(__imp__sub_825C364C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3650"))) PPC_WEAK_FUNC(sub_825C3650);
PPC_FUNC_IMPL(__imp__sub_825C3650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// addi r11,r11,31612
	ctx.r11.s64 = ctx.r11.s64 + 31612;
	// addi r10,r10,-28584
	ctx.r10.s64 = ctx.r10.s64 + -28584;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// stw r11,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r11.u32);
	// stw r11,192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 192, ctx.r11.u32);
	// stw r11,256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 256, ctx.r11.u32);
	// stw r11,320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 320, ctx.r11.u32);
	// stw r11,384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 384, ctx.r11.u32);
	// stw r11,448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 448, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3684"))) PPC_WEAK_FUNC(sub_825C3684);
PPC_FUNC_IMPL(__imp__sub_825C3684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3688"))) PPC_WEAK_FUNC(sub_825C3688);
PPC_FUNC_IMPL(__imp__sub_825C3688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// addi r11,r11,32108
	ctx.r11.s64 = ctx.r11.s64 + 32108;
	// addi r10,r10,-27280
	ctx.r10.s64 = ctx.r10.s64 + -27280;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 448, ctx.r11.u32);
	// stw r11,896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 896, ctx.r11.u32);
	// stw r11,1344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1344, ctx.r11.u32);
	// stw r11,1792(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1792, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C36B0"))) PPC_WEAK_FUNC(sub_825C36B0);
PPC_FUNC_IMPL(__imp__sub_825C36B0) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,13000
	ctx.r11.s64 = ctx.r11.s64 + 13000;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,204
	ctx.r3.s64 = ctx.r11.s64 + 204;
	// bl 0x82400230
	ctx.lr = 0x825C36E4;
	sub_82400230(ctx, base);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r3,r11,26872
	ctx.r3.s64 = ctx.r11.s64 + 26872;
	// bl 0x8259e020
	ctx.lr = 0x825C36F0;
	sub_8259E020(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3700"))) PPC_WEAK_FUNC(sub_825C3700);
PPC_FUNC_IMPL(__imp__sub_825C3700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r11,r11,31568
	ctx.r11.s64 = ctx.r11.s64 + 31568;
	// addi r10,r10,31584
	ctx.r10.s64 = ctx.r10.s64 + 31584;
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
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C372C"))) PPC_WEAK_FUNC(sub_825C372C);
PPC_FUNC_IMPL(__imp__sub_825C372C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3730"))) PPC_WEAK_FUNC(sub_825C3730);
PPC_FUNC_IMPL(__imp__sub_825C3730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,31568
	ctx.r11.s64 = ctx.r11.s64 + 31568;
	// addi r10,r10,12928
	ctx.r10.s64 = ctx.r10.s64 + 12928;
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
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C375C"))) PPC_WEAK_FUNC(sub_825C375C);
PPC_FUNC_IMPL(__imp__sub_825C375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3760"))) PPC_WEAK_FUNC(sub_825C3760);
PPC_FUNC_IMPL(__imp__sub_825C3760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r11,r11,31600
	ctx.r11.s64 = ctx.r11.s64 + 31600;
	// addi r10,r10,31616
	ctx.r10.s64 = ctx.r10.s64 + 31616;
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
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C378C"))) PPC_WEAK_FUNC(sub_825C378C);
PPC_FUNC_IMPL(__imp__sub_825C378C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3790"))) PPC_WEAK_FUNC(sub_825C3790);
PPC_FUNC_IMPL(__imp__sub_825C3790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r11,r11,31632
	ctx.r11.s64 = ctx.r11.s64 + 31632;
	// addi r10,r10,31648
	ctx.r10.s64 = ctx.r10.s64 + 31648;
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
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C37BC"))) PPC_WEAK_FUNC(sub_825C37BC);
PPC_FUNC_IMPL(__imp__sub_825C37BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C37C0"))) PPC_WEAK_FUNC(sub_825C37C0);
PPC_FUNC_IMPL(__imp__sub_825C37C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,31632
	ctx.r11.s64 = ctx.r11.s64 + 31632;
	// addi r10,r10,12944
	ctx.r10.s64 = ctx.r10.s64 + 12944;
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
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C37EC"))) PPC_WEAK_FUNC(sub_825C37EC);
PPC_FUNC_IMPL(__imp__sub_825C37EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C37F0"))) PPC_WEAK_FUNC(sub_825C37F0);
PPC_FUNC_IMPL(__imp__sub_825C37F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r11,r11,31632
	ctx.r11.s64 = ctx.r11.s64 + 31632;
	// addi r10,r10,31664
	ctx.r10.s64 = ctx.r10.s64 + 31664;
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
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C381C"))) PPC_WEAK_FUNC(sub_825C381C);
PPC_FUNC_IMPL(__imp__sub_825C381C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3820"))) PPC_WEAK_FUNC(sub_825C3820);
PPC_FUNC_IMPL(__imp__sub_825C3820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r11,r11,31680
	ctx.r11.s64 = ctx.r11.s64 + 31680;
	// addi r10,r10,31696
	ctx.r10.s64 = ctx.r10.s64 + 31696;
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
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C384C"))) PPC_WEAK_FUNC(sub_825C384C);
PPC_FUNC_IMPL(__imp__sub_825C384C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3850"))) PPC_WEAK_FUNC(sub_825C3850);
PPC_FUNC_IMPL(__imp__sub_825C3850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r11,r11,31680
	ctx.r11.s64 = ctx.r11.s64 + 31680;
	// addi r10,r10,12960
	ctx.r10.s64 = ctx.r10.s64 + 12960;
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
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C387C"))) PPC_WEAK_FUNC(sub_825C387C);
PPC_FUNC_IMPL(__imp__sub_825C387C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3880"))) PPC_WEAK_FUNC(sub_825C3880);
PPC_FUNC_IMPL(__imp__sub_825C3880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,31712
	ctx.r11.s64 = ctx.r11.s64 + 31712;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,12996(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12996, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C38A0"))) PPC_WEAK_FUNC(sub_825C38A0);
PPC_FUNC_IMPL(__imp__sub_825C38A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-32696(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32696);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-31600(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31600);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-14328(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -14328, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C38C0"))) PPC_WEAK_FUNC(sub_825C38C0);
PPC_FUNC_IMPL(__imp__sub_825C38C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-32696(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32696);
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
	// stfs f0,-14336(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -14336, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C38E0"))) PPC_WEAK_FUNC(sub_825C38E0);
PPC_FUNC_IMPL(__imp__sub_825C38E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-32636(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32636);
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
	// stfs f0,-14332(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -14332, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3900"))) PPC_WEAK_FUNC(sub_825C3900);
PPC_FUNC_IMPL(__imp__sub_825C3900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-32608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32608);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-31444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31444);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,-14324(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -14324, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3920"))) PPC_WEAK_FUNC(sub_825C3920);
PPC_FUNC_IMPL(__imp__sub_825C3920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-32604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32604);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-31356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31356);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,-14348(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -14348, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3940"))) PPC_WEAK_FUNC(sub_825C3940);
PPC_FUNC_IMPL(__imp__sub_825C3940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-32596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32596);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// stfs f0,-24940(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24940, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3954"))) PPC_WEAK_FUNC(sub_825C3954);
PPC_FUNC_IMPL(__imp__sub_825C3954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3958"))) PPC_WEAK_FUNC(sub_825C3958);
PPC_FUNC_IMPL(__imp__sub_825C3958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-32604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32604);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-31344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31344);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-14340(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -14340, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3978"))) PPC_WEAK_FUNC(sub_825C3978);
PPC_FUNC_IMPL(__imp__sub_825C3978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-32604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32604);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-31340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31340);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-14344(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -14344, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3998"))) PPC_WEAK_FUNC(sub_825C3998);
PPC_FUNC_IMPL(__imp__sub_825C3998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-32604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32604);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lfs f13,-14344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14344);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,-24944(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -24944, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C39B8"))) PPC_WEAK_FUNC(sub_825C39B8);
PPC_FUNC_IMPL(__imp__sub_825C39B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f13,-32588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32588);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-14352(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -14352, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C39D8"))) PPC_WEAK_FUNC(sub_825C39D8);
PPC_FUNC_IMPL(__imp__sub_825C39D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// b 0x822146e0
	sub_822146E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C39E4"))) PPC_WEAK_FUNC(sub_825C39E4);
PPC_FUNC_IMPL(__imp__sub_825C39E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C39E8"))) PPC_WEAK_FUNC(sub_825C39E8);
PPC_FUNC_IMPL(__imp__sub_825C39E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-31976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31976);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-25688(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25688);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-14196(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -14196, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3A08"))) PPC_WEAK_FUNC(sub_825C3A08);
PPC_FUNC_IMPL(__imp__sub_825C3A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-31976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31976);
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
	// stfs f0,-14204(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -14204, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3A28"))) PPC_WEAK_FUNC(sub_825C3A28);
PPC_FUNC_IMPL(__imp__sub_825C3A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f13,-31968(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31968);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-14208(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -14208, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3A48"))) PPC_WEAK_FUNC(sub_825C3A48);
PPC_FUNC_IMPL(__imp__sub_825C3A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-31892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31892);
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
	// stfs f0,-14200(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -14200, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3A68"))) PPC_WEAK_FUNC(sub_825C3A68);
PPC_FUNC_IMPL(__imp__sub_825C3A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-30712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30712);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-24888(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24888);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,13268(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 13268, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3A88"))) PPC_WEAK_FUNC(sub_825C3A88);
PPC_FUNC_IMPL(__imp__sub_825C3A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-30712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30712);
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
	// stfs f0,26668(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 26668, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3AA8"))) PPC_WEAK_FUNC(sub_825C3AA8);
PPC_FUNC_IMPL(__imp__sub_825C3AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-30652(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30652);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2872);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,13264(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 13264, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3AC8"))) PPC_WEAK_FUNC(sub_825C3AC8);
PPC_FUNC_IMPL(__imp__sub_825C3AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-30624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30624);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-24680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24680);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,13272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 13272, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3AE8"))) PPC_WEAK_FUNC(sub_825C3AE8);
PPC_FUNC_IMPL(__imp__sub_825C3AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-30620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30620);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-24708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24708);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,26656(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 26656, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3B08"))) PPC_WEAK_FUNC(sub_825C3B08);
PPC_FUNC_IMPL(__imp__sub_825C3B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-30612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30612);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// stfs f0,26644(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 26644, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3B1C"))) PPC_WEAK_FUNC(sub_825C3B1C);
PPC_FUNC_IMPL(__imp__sub_825C3B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3B20"))) PPC_WEAK_FUNC(sub_825C3B20);
PPC_FUNC_IMPL(__imp__sub_825C3B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-30620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30620);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-24696(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24696);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,26664(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 26664, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3B40"))) PPC_WEAK_FUNC(sub_825C3B40);
PPC_FUNC_IMPL(__imp__sub_825C3B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-30620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30620);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-24692(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24692);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,26660(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 26660, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3B60"))) PPC_WEAK_FUNC(sub_825C3B60);
PPC_FUNC_IMPL(__imp__sub_825C3B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-30620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30620);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lfs f13,26660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26660);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,26640(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 26640, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3B80"))) PPC_WEAK_FUNC(sub_825C3B80);
PPC_FUNC_IMPL(__imp__sub_825C3B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f13,-30604(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30604);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,26652(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 26652, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3BA0"))) PPC_WEAK_FUNC(sub_825C3BA0);
PPC_FUNC_IMPL(__imp__sub_825C3BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// b 0x8222cdd0
	sub_8222CDD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C3BAC"))) PPC_WEAK_FUNC(sub_825C3BAC);
PPC_FUNC_IMPL(__imp__sub_825C3BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3BB0"))) PPC_WEAK_FUNC(sub_825C3BB0);
PPC_FUNC_IMPL(__imp__sub_825C3BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lwz r11,-30844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30844);
	// stw r11,26648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26648, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3BC4"))) PPC_WEAK_FUNC(sub_825C3BC4);
PPC_FUNC_IMPL(__imp__sub_825C3BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3BC8"))) PPC_WEAK_FUNC(sub_825C3BC8);
PPC_FUNC_IMPL(__imp__sub_825C3BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28376(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28376);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-29672(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -29672, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3BE8"))) PPC_WEAK_FUNC(sub_825C3BE8);
PPC_FUNC_IMPL(__imp__sub_825C3BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28376(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28376);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16668);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-29704(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -29704, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3C08"))) PPC_WEAK_FUNC(sub_825C3C08);
PPC_FUNC_IMPL(__imp__sub_825C3C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28308);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2872);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,-29676(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -29676, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3C28"))) PPC_WEAK_FUNC(sub_825C3C28);
PPC_FUNC_IMPL(__imp__sub_825C3C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28288);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-14344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14344);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,-29668(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -29668, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3C48"))) PPC_WEAK_FUNC(sub_825C3C48);
PPC_FUNC_IMPL(__imp__sub_825C3C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28284);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-4040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4040);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,21724(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 21724, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3C68"))) PPC_WEAK_FUNC(sub_825C3C68);
PPC_FUNC_IMPL(__imp__sub_825C3C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28276);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// stfs f0,21700(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 21700, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3C7C"))) PPC_WEAK_FUNC(sub_825C3C7C);
PPC_FUNC_IMPL(__imp__sub_825C3C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3C80"))) PPC_WEAK_FUNC(sub_825C3C80);
PPC_FUNC_IMPL(__imp__sub_825C3C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28284);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,25560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25560);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-29708(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -29708, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3CA0"))) PPC_WEAK_FUNC(sub_825C3CA0);
PPC_FUNC_IMPL(__imp__sub_825C3CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28284);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -632);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-29712(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -29712, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3CC0"))) PPC_WEAK_FUNC(sub_825C3CC0);
PPC_FUNC_IMPL(__imp__sub_825C3CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28284(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28284);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f13,-29712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29712);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,21696(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 21696, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3CE0"))) PPC_WEAK_FUNC(sub_825C3CE0);
PPC_FUNC_IMPL(__imp__sub_825C3CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f13,-28268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28268);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,21716(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 21716, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3D00"))) PPC_WEAK_FUNC(sub_825C3D00);
PPC_FUNC_IMPL(__imp__sub_825C3D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28928);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-27736
	ctx.r11.s64 = ctx.r11.s64 + -27736;
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3D18"))) PPC_WEAK_FUNC(sub_825C3D18);
PPC_FUNC_IMPL(__imp__sub_825C3D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28928);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-27824
	ctx.r11.s64 = ctx.r11.s64 + -27824;
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3D30"))) PPC_WEAK_FUNC(sub_825C3D30);
PPC_FUNC_IMPL(__imp__sub_825C3D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28668);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f13,-28664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28664);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,21720(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 21720, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3D50"))) PPC_WEAK_FUNC(sub_825C3D50);
PPC_FUNC_IMPL(__imp__sub_825C3D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28660);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f13,-28656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28656);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,21712(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 21712, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3D70"))) PPC_WEAK_FUNC(sub_825C3D70);
PPC_FUNC_IMPL(__imp__sub_825C3D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28668);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,21708(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 21708, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3D88"))) PPC_WEAK_FUNC(sub_825C3D88);
PPC_FUNC_IMPL(__imp__sub_825C3D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28664(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28664);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,-29680(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -29680, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3DA0"))) PPC_WEAK_FUNC(sub_825C3DA0);
PPC_FUNC_IMPL(__imp__sub_825C3DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28660);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,21704(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 21704, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3DB8"))) PPC_WEAK_FUNC(sub_825C3DB8);
PPC_FUNC_IMPL(__imp__sub_825C3DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-28656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28656);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,-29700(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -29700, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3DD0"))) PPC_WEAK_FUNC(sub_825C3DD0);
PPC_FUNC_IMPL(__imp__sub_825C3DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-18680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18680);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,7100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7100, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3DF0"))) PPC_WEAK_FUNC(sub_825C3DF0);
PPC_FUNC_IMPL(__imp__sub_825C3DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-18680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18680);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-15100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,6752(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6752, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3E10"))) PPC_WEAK_FUNC(sub_825C3E10);
PPC_FUNC_IMPL(__imp__sub_825C3E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-18620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18620);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2872);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,7096(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7096, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3E30"))) PPC_WEAK_FUNC(sub_825C3E30);
PPC_FUNC_IMPL(__imp__sub_825C3E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-18596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18596);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-1632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1632);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,7104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7104, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3E50"))) PPC_WEAK_FUNC(sub_825C3E50);
PPC_FUNC_IMPL(__imp__sub_825C3E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-18592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18592);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,1432(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1432);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,4628(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4628, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3E70"))) PPC_WEAK_FUNC(sub_825C3E70);
PPC_FUNC_IMPL(__imp__sub_825C3E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-18584(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18584);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stfs f0,1156(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1156, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3E84"))) PPC_WEAK_FUNC(sub_825C3E84);
PPC_FUNC_IMPL(__imp__sub_825C3E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3E88"))) PPC_WEAK_FUNC(sub_825C3E88);
PPC_FUNC_IMPL(__imp__sub_825C3E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-18592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18592);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,25560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25560);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,6748(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6748, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3EA8"))) PPC_WEAK_FUNC(sub_825C3EA8);
PPC_FUNC_IMPL(__imp__sub_825C3EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-18592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18592);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,1448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1448);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,6744(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6744, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3EC8"))) PPC_WEAK_FUNC(sub_825C3EC8);
PPC_FUNC_IMPL(__imp__sub_825C3EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f0,-18592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18592);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f13,6744(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6744);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,-1648(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -1648, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3EE8"))) PPC_WEAK_FUNC(sub_825C3EE8);
PPC_FUNC_IMPL(__imp__sub_825C3EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f13,-18572(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18572);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,4560(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4560, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3F08"))) PPC_WEAK_FUNC(sub_825C3F08);
PPC_FUNC_IMPL(__imp__sub_825C3F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r11,r11,12812
	ctx.r11.s64 = ctx.r11.s64 + 12812;
	// addi r10,r10,4176
	ctx.r10.s64 = ctx.r10.s64 + 4176;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 192, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C3F24"))) PPC_WEAK_FUNC(sub_825C3F24);
PPC_FUNC_IMPL(__imp__sub_825C3F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3F28"))) PPC_WEAK_FUNC(sub_825C3F28);
PPC_FUNC_IMPL(__imp__sub_825C3F28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r5,448
	ctx.r5.s64 = 448;
	// addi r11,r11,7112
	ctx.r11.s64 = ctx.r11.s64 + 7112;
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r10,1472(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 1472);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// std r10,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// std r10,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r10.u64);
	// std r10,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r10.u64);
	// b 0x8259d300
	sub_8259D300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C3F68"))) PPC_WEAK_FUNC(sub_825C3F68);
PPC_FUNC_IMPL(__imp__sub_825C3F68) {
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
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r31,r11,-18560
	ctx.r31.s64 = ctx.r11.s64 + -18560;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x822cbe40
	ctx.lr = 0x825C3F88;
	sub_822CBE40(ctx, base);
	// addis r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 327680;
	// addi r3,r11,7240
	ctx.r3.s64 = ctx.r11.s64 + 7240;
	// bl 0x822d08b0
	ctx.lr = 0x825C3F94;
	sub_822D08B0(ctx, base);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,9028
	ctx.r11.s64 = ctx.r11.s64 + 9028;
	// ori r7,r8,57540
	ctx.r7.u64 = ctx.r8.u64 | 57540;
	// addi r10,r10,14440
	ctx.r10.s64 = ctx.r10.s64 + 14440;
	// addis r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 524288;
	// addi r3,r9,-7824
	ctx.r3.s64 = ctx.r9.s64 + -7824;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x822d0960
	ctx.lr = 0x825C3FC0;
	sub_822D0960(ctx, base);
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

__attribute__((alias("__imp__sub_825C3FD4"))) PPC_WEAK_FUNC(sub_825C3FD4);
PPC_FUNC_IMPL(__imp__sub_825C3FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C3FD8"))) PPC_WEAK_FUNC(sub_825C3FD8);
PPC_FUNC_IMPL(__imp__sub_825C3FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x825C3FE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r11,r11,2432
	ctx.r11.s64 = ctx.r11.s64 + 2432;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,268
	ctx.r31.s64 = ctx.r11.s64 + 268;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r28,r11,9104
	ctx.r28.s64 = ctx.r11.s64 + 9104;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r11,4780
	ctx.r27.s64 = ctx.r11.s64 + 4780;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r26,r11,9140
	ctx.r26.s64 = ctx.r11.s64 + 9140;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r25,r11,9148
	ctx.r25.s64 = ctx.r11.s64 + 9148;
loc_825C401C:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r6,r11,-600
	ctx.r6.s64 = ctx.r11.s64 + -600;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// stb r30,-260(r31)
	PPC_STORE_U8(ctx.r31.u32 + -260, ctx.r30.u8);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// stw r25,-268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -268, ctx.r25.u32);
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// bl 0x82097220
	ctx.lr = 0x825C4060;
	sub_82097220(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r31,r31,496
	ctx.r31.s64 = ctx.r31.s64 + 496;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x825c401c
	if (!ctx.cr6.lt) goto loc_825C401C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C4078"))) PPC_WEAK_FUNC(sub_825C4078);
PPC_FUNC_IMPL(__imp__sub_825C4078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4632
	ctx.r11.s64 = ctx.r11.s64 + 4632;
	// stb r10,340(r11)
	PPC_STORE_U8(ctx.r11.u32 + 340, ctx.r10.u8);
	// stb r10,692(r11)
	PPC_STORE_U8(ctx.r11.u32 + 692, ctx.r10.u8);
	// stb r10,1044(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1044, ctx.r10.u8);
	// stb r10,1396(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1396, ctx.r10.u8);
	// stb r10,1748(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1748, ctx.r10.u8);
	// stb r10,2100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2100, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C40A0"))) PPC_WEAK_FUNC(sub_825C40A0);
PPC_FUNC_IMPL(__imp__sub_825C40A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-4756
	ctx.r10.s64 = ctx.r11.s64 + -4756;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,4564
	ctx.r11.s64 = ctx.r11.s64 + 4564;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r9,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r9.u8);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stb r9,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r9.u8);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stb r9,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r9.u8);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,60(r11)
	PPC_STORE_U8(ctx.r11.u32 + 60, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C40DC"))) PPC_WEAK_FUNC(sub_825C40DC);
PPC_FUNC_IMPL(__imp__sub_825C40DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C40E0"))) PPC_WEAK_FUNC(sub_825C40E0);
PPC_FUNC_IMPL(__imp__sub_825C40E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,1160
	ctx.r11.s64 = ctx.r11.s64 + 1160;
	// stfs f0,132(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// stfs f0,136(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// stfs f0,140(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// stfs f0,144(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stfs f0,184(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// stfs f0,188(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// stfs f0,196(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// stfs f0,200(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// stfs f0,344(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 344, temp.u32);
	// stfs f0,348(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 348, temp.u32);
	// stfs f0,352(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 352, temp.u32);
	// stfs f0,356(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 356, temp.u32);
	// stfs f0,396(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 396, temp.u32);
	// stfs f0,400(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 400, temp.u32);
	// stfs f0,408(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 408, temp.u32);
	// stfs f0,412(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 412, temp.u32);
	// stfs f0,556(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 556, temp.u32);
	// stfs f0,560(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 560, temp.u32);
	// stfs f0,564(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 564, temp.u32);
	// stfs f0,568(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 568, temp.u32);
	// stfs f0,608(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 608, temp.u32);
	// stfs f0,612(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 612, temp.u32);
	// stfs f0,620(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 620, temp.u32);
	// stfs f0,624(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 624, temp.u32);
	// stfs f0,768(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 768, temp.u32);
	// stfs f0,772(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 772, temp.u32);
	// stfs f0,776(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 776, temp.u32);
	// stfs f0,780(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 780, temp.u32);
	// stfs f0,820(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 820, temp.u32);
	// stfs f0,824(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 824, temp.u32);
	// stfs f0,832(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 832, temp.u32);
	// stfs f0,836(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 836, temp.u32);
	// stfs f0,980(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 980, temp.u32);
	// stfs f0,984(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 984, temp.u32);
	// stfs f0,988(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 988, temp.u32);
	// stfs f0,992(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 992, temp.u32);
	// stfs f0,1032(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1032, temp.u32);
	// stfs f0,1036(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1036, temp.u32);
	// stfs f0,1044(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1044, temp.u32);
	// stfs f0,1048(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1048, temp.u32);
	// stfs f0,1192(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1192, temp.u32);
	// stfs f0,1196(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1196, temp.u32);
	// stfs f0,1200(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1200, temp.u32);
	// stfs f0,1204(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1204, temp.u32);
	// stfs f0,1244(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1244, temp.u32);
	// stfs f0,1248(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1248, temp.u32);
	// stfs f0,1256(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1256, temp.u32);
	// stfs f0,1260(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1260, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C41B4"))) PPC_WEAK_FUNC(sub_825C41B4);
PPC_FUNC_IMPL(__imp__sub_825C41B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C41B8"))) PPC_WEAK_FUNC(sub_825C41B8);
PPC_FUNC_IMPL(__imp__sub_825C41B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,-1644
	ctx.r11.s64 = ctx.r11.s64 + -1644;
	// li r10,99
	ctx.r10.s64 = 99;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r9,-4756
	ctx.r9.s64 = ctx.r9.s64 + -4756;
	// li r8,0
	ctx.r8.s64 = 0;
loc_825C41D4:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x825c41d4
	if (!ctx.cr6.lt) goto loc_825C41D4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C41F0"))) PPC_WEAK_FUNC(sub_825C41F0);
PPC_FUNC_IMPL(__imp__sub_825C41F0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x825C41F8;
	__savegprlr_27(ctx, base);
	// lis r30,-32214
	ctx.r30.s64 = -2111176704;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// addi r10,r11,-9024
	ctx.r10.s64 = ctx.r11.s64 + -9024;
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r30,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r30.u32);
	// lis r30,-32214
	ctx.r30.s64 = -2111176704;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r11,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,-96
	ctx.r6.s64 = ctx.r1.s64 + -96;
	// addi r5,r10,40
	ctx.r5.s64 = ctx.r10.s64 + 40;
	// stw r30,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r30.u32);
	// lis r30,-32214
	ctx.r30.s64 = -2111176704;
	// addi r4,r1,-80
	ctx.r4.s64 = ctx.r1.s64 + -80;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// stw r11,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r11.u32);
	// stw r11,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r11.u32);
	// addi r3,r10,80
	ctx.r3.s64 = ctx.r10.s64 + 80;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r11.u32);
	// addi r31,r10,120
	ctx.r31.s64 = ctx.r10.s64 + 120;
	// stw r11,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r11.u32);
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// stw r11,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r11.u32);
	// stw r30,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r30.u32);
	// lis r30,-32214
	ctx.r30.s64 = -2111176704;
	// stw r11,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r11.u32);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r11.u32);
	// stw r11,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r11.u32);
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// stw r11,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r11.u32);
	// stw r11,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r11.u32);
	// stw r11,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r11.u32);
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// stw r11,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r11.u32);
	// stw r11,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r30,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r30.u32);
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r29,8(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r28,0(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r27,4(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r30,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r30.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r29,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r29.u32);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r9,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r9.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r27,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r27.u32);
	// lwz r30,8(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r8,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r4,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r4.u32);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C4348"))) PPC_WEAK_FUNC(sub_825C4348);
PPC_FUNC_IMPL(__imp__sub_825C4348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x825C4350;
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,6756
	ctx.r11.s64 = ctx.r11.s64 + 6756;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r31,r11,60
	ctx.r31.s64 = ctx.r11.s64 + 60;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-4756
	ctx.r29.s64 = ctx.r11.s64 + -4756;
loc_825C437C:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// stb r28,-48(r31)
	PPC_STORE_U8(ctx.r31.u32 + -48, ctx.r28.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r29,-60(r31)
	PPC_STORE_U32(ctx.r31.u32 + -60, ctx.r29.u32);
	// addi r6,r11,0
	ctx.r6.s64 = ctx.r11.s64 + 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,-40
	ctx.r3.s64 = ctx.r31.s64 + -40;
	// bl 0x82097220
	ctx.lr = 0x825C439C;
	sub_82097220(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stfs f31,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// bge cr6,0x825c437c
	if (!ctx.cr6.lt) goto loc_825C437C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C43C8"))) PPC_WEAK_FUNC(sub_825C43C8);
PPC_FUNC_IMPL(__imp__sub_825C43C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,-6920(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6920);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,7716(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7716, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C43E8"))) PPC_WEAK_FUNC(sub_825C43E8);
PPC_FUNC_IMPL(__imp__sub_825C43E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,-6920(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6920);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-15100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,7708(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7708, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C4408"))) PPC_WEAK_FUNC(sub_825C4408);
PPC_FUNC_IMPL(__imp__sub_825C4408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,-6852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6852);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2872);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,7712(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7712, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C4428"))) PPC_WEAK_FUNC(sub_825C4428);
PPC_FUNC_IMPL(__imp__sub_825C4428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,-6832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6832);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,14780(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14780);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,7720(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7720, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C4448"))) PPC_WEAK_FUNC(sub_825C4448);
PPC_FUNC_IMPL(__imp__sub_825C4448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,-6828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6828);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,14840(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14840);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,7692(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7692, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C4468"))) PPC_WEAK_FUNC(sub_825C4468);
PPC_FUNC_IMPL(__imp__sub_825C4468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,-6820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6820);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stfs f0,7684(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7684, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C447C"))) PPC_WEAK_FUNC(sub_825C447C);
PPC_FUNC_IMPL(__imp__sub_825C447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C4480"))) PPC_WEAK_FUNC(sub_825C4480);
PPC_FUNC_IMPL(__imp__sub_825C4480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,-6828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6828);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,14852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14852);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,7704(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7704, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C44A0"))) PPC_WEAK_FUNC(sub_825C44A0);
PPC_FUNC_IMPL(__imp__sub_825C44A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,-6828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6828);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,14856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14856);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,7700(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7700, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C44C0"))) PPC_WEAK_FUNC(sub_825C44C0);
PPC_FUNC_IMPL(__imp__sub_825C44C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,-6828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6828);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f13,7700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7700);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,7680(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7680, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C44E0"))) PPC_WEAK_FUNC(sub_825C44E0);
PPC_FUNC_IMPL(__imp__sub_825C44E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f13,-6812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6812);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,7688(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7688, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C4500"))) PPC_WEAK_FUNC(sub_825C4500);
PPC_FUNC_IMPL(__imp__sub_825C4500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lwz r11,-6808(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6808);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,7696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7696, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C4518"))) PPC_WEAK_FUNC(sub_825C4518);
PPC_FUNC_IMPL(__imp__sub_825C4518) {
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
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,10432
	ctx.r31.s64 = ctx.r11.s64 + 10432;
	// li r5,420
	ctx.r5.s64 = 420;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2268
	ctx.r3.s64 = ctx.r31.s64 + 2268;
	// std r30,2240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2240, ctx.r30.u64);
	// std r30,2248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2248, ctx.r30.u64);
	// std r30,2256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2256, ctx.r30.u64);
	// stw r30,2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2264, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C4558;
	sub_8259D300(ctx, base);
	// std r30,2688(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2688, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,2696(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2696, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,2704(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2704, ctx.r30.u64);
	// addi r3,r31,2716
	ctx.r3.s64 = ctx.r31.s64 + 2716;
	// stw r30,2712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2712, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C4578;
	sub_8259D300(ctx, base);
	// std r30,3136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3136, ctx.r30.u64);
	// std r30,3144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3144, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,3152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3152, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3164
	ctx.r3.s64 = ctx.r31.s64 + 3164;
	// stw r30,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C4598;
	sub_8259D300(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-5892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5892);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f13,3584(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3584, temp.u32);
	// stfs f13,3588(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3588, temp.u32);
	// stfs f13,3592(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3592, temp.u32);
	// stfs f13,3596(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3596, temp.u32);
	// lfs f0,17264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17264);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f13,3600(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3600, temp.u32);
	// stfs f13,3604(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3604, temp.u32);
	// stfs f13,3608(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3608, temp.u32);
	// stfs f0,3612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3612, temp.u32);
	// lfs f12,17260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17260);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f12,3616(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3616, temp.u32);
	// stfs f12,3620(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3620, temp.u32);
	// stfs f12,3624(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3624, temp.u32);
	// stfs f12,3628(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3628, temp.u32);
	// stfs f12,3632(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3632, temp.u32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f12,3636(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3636, temp.u32);
	// stfs f0,3640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3640, temp.u32);
	// stfs f0,3644(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3644, temp.u32);
	// stfs f0,3648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3648, temp.u32);
	// stfs f0,3652(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3652, temp.u32);
	// stfs f0,3656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3656, temp.u32);
	// stfs f0,3660(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3660, temp.u32);
	// stfs f0,3664(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3664, temp.u32);
	// lfs f10,3268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3268);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f10,3668(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3668, temp.u32);
	// stfs f0,3672(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3672, temp.u32);
	// stfs f0,3676(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3676, temp.u32);
	// stfs f0,3680(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3680, temp.u32);
	// stfs f0,3684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3684, temp.u32);
	// stfs f0,3688(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3688, temp.u32);
	// stfs f0,3692(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3692, temp.u32);
	// stfs f0,3696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3696, temp.u32);
	// stfs f0,3700(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3700, temp.u32);
	// stfs f0,3704(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3704, temp.u32);
	// stfs f0,3708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3708, temp.u32);
	// stfs f0,3712(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3712, temp.u32);
	// stfs f0,3716(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3716, temp.u32);
	// lfs f11,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,3720(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3720, temp.u32);
	// stfs f11,3724(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3724, temp.u32);
	// stfs f0,3728(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3728, temp.u32);
	// stfs f0,3732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3732, temp.u32);
	// stfs f0,3736(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3736, temp.u32);
	// stfs f0,3740(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3740, temp.u32);
	// stfs f0,3744(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3744, temp.u32);
	// stfs f0,3748(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3748, temp.u32);
	// stfs f0,3752(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3752, temp.u32);
	// stfs f0,3756(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3756, temp.u32);
	// stfs f0,3760(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3760, temp.u32);
	// stfs f0,3764(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3764, temp.u32);
	// stfs f0,3768(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3768, temp.u32);
	// stfs f0,3772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3772, temp.u32);
	// stfs f0,3776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3776, temp.u32);
	// stfs f0,3780(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3780, temp.u32);
	// stfs f0,3784(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3784, temp.u32);
	// stfs f0,3788(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3788, temp.u32);
	// stfs f0,3792(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3792, temp.u32);
	// stfs f0,3796(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3796, temp.u32);
	// stfs f0,3800(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3800, temp.u32);
	// stfs f0,3804(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3804, temp.u32);
	// stfs f0,3808(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3808, temp.u32);
	// stfs f0,3812(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3812, temp.u32);
	// stfs f0,3816(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3816, temp.u32);
	// stfs f0,3820(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3820, temp.u32);
	// stfs f0,3824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3824, temp.u32);
	// stfs f0,3828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3828, temp.u32);
	// stfs f0,3832(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3832, temp.u32);
	// stfs f0,3836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3836, temp.u32);
	// stfs f0,3840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3840, temp.u32);
	// stfs f0,3844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3844, temp.u32);
	// stfs f0,3848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3848, temp.u32);
	// stfs f0,3852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3852, temp.u32);
	// stfs f0,3856(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3856, temp.u32);
	// stfs f0,3860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3860, temp.u32);
	// stfs f0,3864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3864, temp.u32);
	// stfs f0,3868(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3868, temp.u32);
	// stfs f0,3872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3872, temp.u32);
	// stfs f0,3876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3876, temp.u32);
	// stfs f0,3880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3880, temp.u32);
	// stfs f0,3884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3884, temp.u32);
	// stfs f0,3888(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3888, temp.u32);
	// stfs f11,3892(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3892, temp.u32);
	// stfs f0,3896(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3896, temp.u32);
	// stfs f0,3900(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3900, temp.u32);
	// stfs f0,3904(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3904, temp.u32);
	// stfs f0,3908(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3908, temp.u32);
	// stfs f0,3912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3912, temp.u32);
	// stfs f0,3916(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3916, temp.u32);
	// stfs f0,3920(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3920, temp.u32);
	// stfs f0,3924(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3924, temp.u32);
	// stfs f0,3928(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3928, temp.u32);
	// stfs f0,3932(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3932, temp.u32);
	// stfs f0,3936(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3936, temp.u32);
	// stfs f0,3940(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3940, temp.u32);
	// stfs f0,3944(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3944, temp.u32);
	// stfs f0,3948(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3948, temp.u32);
	// stfs f0,3952(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3952, temp.u32);
	// stfs f0,3956(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3956, temp.u32);
	// stfs f0,3960(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3960, temp.u32);
	// stfs f0,3964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3964, temp.u32);
	// stfs f0,3968(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3968, temp.u32);
	// stfs f0,3972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3972, temp.u32);
	// stfs f0,3976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3976, temp.u32);
	// stfs f0,3980(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3980, temp.u32);
	// stfs f0,3984(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3984, temp.u32);
	// stfs f0,3988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3988, temp.u32);
	// stfs f0,3992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3992, temp.u32);
	// stfs f0,3996(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3996, temp.u32);
	// stfs f0,4000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4000, temp.u32);
	// stfs f0,4004(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4004, temp.u32);
	// stfs f0,4008(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4008, temp.u32);
	// stfs f0,4012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4012, temp.u32);
	// stfs f0,4016(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4016, temp.u32);
	// stfs f0,4020(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4020, temp.u32);
	// stfs f0,4024(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4024, temp.u32);
	// stfs f0,4028(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4028, temp.u32);
	// stfs f13,4032(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4032, temp.u32);
	// stfs f13,4036(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4036, temp.u32);
	// stfs f13,4040(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4040, temp.u32);
	// stfs f13,4044(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4044, temp.u32);
	// stfs f13,4048(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4048, temp.u32);
	// stfs f13,4052(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4052, temp.u32);
	// stfs f13,4056(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4056, temp.u32);
	// stfs f12,4060(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4060, temp.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f12,4064(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4064, temp.u32);
	// stfs f12,4068(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4068, temp.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f12,4072(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4072, temp.u32);
	// stfs f12,4076(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4076, temp.u32);
	// stfs f12,4080(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4080, temp.u32);
	// lfs f9,-15128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15128);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f12,4084(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4084, temp.u32);
	// stfs f0,4088(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4088, temp.u32);
	// addi r11,r11,14816
	ctx.r11.s64 = ctx.r11.s64 + 14816;
	// stfs f0,4092(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4092, temp.u32);
	// stfs f0,4096(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4096, temp.u32);
	// stfs f9,4100(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4100, temp.u32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4104(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4104, temp.u32);
	// stfs f9,4108(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4108, temp.u32);
	// stfs f0,4112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4112, temp.u32);
	// stfs f0,4116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4116, temp.u32);
	// stfs f0,4120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4120, temp.u32);
	// stfs f0,4124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4124, temp.u32);
	// stfs f0,4128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4128, temp.u32);
	// stfs f10,4132(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4132, temp.u32);
	// stfs f10,4136(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4136, temp.u32);
	// stfs f0,4140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4140, temp.u32);
	// stfs f0,4144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4144, temp.u32);
	// stfs f0,4148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4148, temp.u32);
	// stfs f0,4152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4152, temp.u32);
	// stfs f0,4156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4156, temp.u32);
	// stfs f11,4160(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4160, temp.u32);
	// lfs f9,-15148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15148);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,4164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4164, temp.u32);
	// stfs f9,4168(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4168, temp.u32);
	// stfs f0,4172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4172, temp.u32);
	// stfs f0,4176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4176, temp.u32);
	// stfs f0,4180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4180, temp.u32);
	// stfs f0,4184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4184, temp.u32);
	// lfs f10,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4188(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4188, temp.u32);
	// stfs f0,4192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4192, temp.u32);
	// stfs f9,4196(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4196, temp.u32);
	// stfs f0,4200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4200, temp.u32);
	// stfs f0,4204(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4204, temp.u32);
	// stfs f0,4208(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4208, temp.u32);
	// stfs f0,4212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4212, temp.u32);
	// stfs f0,4216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4216, temp.u32);
	// stfs f0,4220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4220, temp.u32);
	// stfs f0,4224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4224, temp.u32);
	// stfs f0,4228(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4228, temp.u32);
	// stfs f0,4232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4232, temp.u32);
	// stfs f0,4236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4236, temp.u32);
	// stfs f0,4240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4240, temp.u32);
	// stfs f0,4244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4244, temp.u32);
	// stfs f0,4248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4248, temp.u32);
	// stfs f0,4252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4252, temp.u32);
	// stfs f0,4256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4256, temp.u32);
	// stfs f0,4260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4260, temp.u32);
	// stfs f0,4264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4264, temp.u32);
	// stfs f0,4268(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4268, temp.u32);
	// stfs f0,4272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4272, temp.u32);
	// stfs f0,4276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4276, temp.u32);
	// stfs f0,4280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4280, temp.u32);
	// stfs f0,4284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4284, temp.u32);
	// stfs f0,4288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4288, temp.u32);
	// stfs f0,4292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4292, temp.u32);
	// stfs f0,4296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4296, temp.u32);
	// stfs f0,4300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4300, temp.u32);
	// stfs f0,4304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4304, temp.u32);
	// stfs f0,4308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4308, temp.u32);
	// stfs f0,4312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4312, temp.u32);
	// stfs f0,4316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4316, temp.u32);
	// stfs f0,4320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4320, temp.u32);
	// stfs f0,4324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4324, temp.u32);
	// stfs f10,4328(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4328, temp.u32);
	// stfs f0,4332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4332, temp.u32);
	// stfs f0,4336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4336, temp.u32);
	// stfs f0,4340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4340, temp.u32);
	// stfs f0,4344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4344, temp.u32);
	// stfs f0,4348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4348, temp.u32);
	// stfs f0,4352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4352, temp.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f11,4356(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4356, temp.u32);
	// stfs f0,4360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4360, temp.u32);
	// stfs f0,4364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4364, temp.u32);
	// stfs f0,4368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4368, temp.u32);
	// stfs f0,4372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4372, temp.u32);
	// stfs f0,4376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4376, temp.u32);
	// stfs f10,4380(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4380, temp.u32);
	// stfs f0,4384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4384, temp.u32);
	// stfs f0,4388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4388, temp.u32);
	// stfs f0,4392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4392, temp.u32);
	// stfs f0,4396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4396, temp.u32);
	// stfs f0,4400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4400, temp.u32);
	// stfs f0,4404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4404, temp.u32);
	// stfs f11,4408(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4408, temp.u32);
	// stfs f0,4412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4412, temp.u32);
	// stfs f0,4416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4416, temp.u32);
	// stfs f0,4420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4420, temp.u32);
	// stfs f0,4424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4424, temp.u32);
	// stfs f0,4428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4428, temp.u32);
	// stfs f0,4432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4432, temp.u32);
	// stfs f0,4436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4436, temp.u32);
	// stfs f0,4440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4440, temp.u32);
	// stfs f0,4444(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4444, temp.u32);
	// stfs f0,4448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4448, temp.u32);
	// stfs f0,4452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4452, temp.u32);
	// stfs f0,4456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4456, temp.u32);
	// stfs f0,4460(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4460, temp.u32);
	// stfs f0,4464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4464, temp.u32);
	// stfs f0,4468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4468, temp.u32);
	// stfs f0,4472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4472, temp.u32);
	// stfs f0,4476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4476, temp.u32);
	// stfs f13,4480(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4480, temp.u32);
	// stfs f13,4484(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4484, temp.u32);
	// stfs f13,4488(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4488, temp.u32);
	// stfs f13,4492(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4492, temp.u32);
	// stfs f13,4496(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4496, temp.u32);
	// stfs f13,4500(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4500, temp.u32);
	// stfs f13,4504(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4504, temp.u32);
	// stfs f12,4508(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4508, temp.u32);
	// stfs f12,4512(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4512, temp.u32);
	// stfs f12,4516(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4516, temp.u32);
	// lfs f9,17256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17256);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4520(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4520, temp.u32);
	// stfs f12,4524(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4524, temp.u32);
	// stfs f12,4528(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4528, temp.u32);
	// stfs f12,4532(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4532, temp.u32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,4536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4536, temp.u32);
	// stfs f0,4540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4540, temp.u32);
	// stfs f0,4544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4544, temp.u32);
	// stfs f9,4548(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4548, temp.u32);
	// stfs f9,4552(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4552, temp.u32);
	// stfs f9,4556(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4556, temp.u32);
	// lfs f9,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f9,4560(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4560, temp.u32);
	// stfs f0,4564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4564, temp.u32);
	// stfs f0,4568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4568, temp.u32);
	// stfs f0,4572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4572, temp.u32);
	// stfs f0,4576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4576, temp.u32);
	// lfs f9,4192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4192);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4580(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4580, temp.u32);
	// stfs f9,4584(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4584, temp.u32);
	// stfs f0,4588(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4588, temp.u32);
	// stfs f0,4592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4592, temp.u32);
	// stfs f0,4596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4596, temp.u32);
	// stfs f0,4600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4600, temp.u32);
	// stfs f0,4604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4604, temp.u32);
	// stfs f0,4608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4608, temp.u32);
	// stfs f0,4612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4612, temp.u32);
	// stfs f0,4616(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4616, temp.u32);
	// stfs f0,4620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4620, temp.u32);
	// stfs f0,4624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4624, temp.u32);
	// stfs f0,4628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4628, temp.u32);
	// stfs f0,4632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4632, temp.u32);
	// stfs f0,4636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4636, temp.u32);
	// stfs f0,4640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4640, temp.u32);
	// stfs f0,4644(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4644, temp.u32);
	// stfs f0,4648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4648, temp.u32);
	// stfs f0,4652(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4652, temp.u32);
	// stfs f0,4656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4656, temp.u32);
	// stfs f0,4660(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4660, temp.u32);
	// stfs f0,4664(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4664, temp.u32);
	// stfs f0,4668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4668, temp.u32);
	// stfs f0,4672(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4672, temp.u32);
	// stfs f0,4676(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4676, temp.u32);
	// stfs f0,4680(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4680, temp.u32);
	// stfs f0,4684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4684, temp.u32);
	// stfs f0,4688(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4688, temp.u32);
	// stfs f0,4692(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4692, temp.u32);
	// stfs f0,4696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4696, temp.u32);
	// stfs f0,4700(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4700, temp.u32);
	// stfs f0,4704(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4704, temp.u32);
	// stfs f0,4708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4708, temp.u32);
	// stfs f0,4712(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4712, temp.u32);
	// stfs f0,4716(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4716, temp.u32);
	// stfs f0,4720(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4720, temp.u32);
	// stfs f0,4724(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4724, temp.u32);
	// stfs f0,4728(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4728, temp.u32);
	// stfs f0,4732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4732, temp.u32);
	// stfs f0,4736(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4736, temp.u32);
	// stfs f0,4740(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4740, temp.u32);
	// stfs f0,4744(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4744, temp.u32);
	// stfs f0,4748(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4748, temp.u32);
	// stfs f0,4752(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4752, temp.u32);
	// stfs f0,4756(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4756, temp.u32);
	// stfs f0,4760(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4760, temp.u32);
	// stfs f0,4764(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4764, temp.u32);
	// stfs f0,4768(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4768, temp.u32);
	// stfs f0,4772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4772, temp.u32);
	// stfs f10,4776(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4776, temp.u32);
	// stfs f0,4780(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4780, temp.u32);
	// stfs f0,4784(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4784, temp.u32);
	// stfs f0,4788(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4788, temp.u32);
	// stfs f0,4792(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4792, temp.u32);
	// stfs f0,4796(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4796, temp.u32);
	// stfs f0,4800(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4800, temp.u32);
	// stfs f11,4804(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4804, temp.u32);
	// stfs f0,4808(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4808, temp.u32);
	// stfs f0,4812(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4812, temp.u32);
	// stfs f0,4816(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4816, temp.u32);
	// stfs f0,4820(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4820, temp.u32);
	// stfs f0,4824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4824, temp.u32);
	// stfs f10,4828(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4828, temp.u32);
	// stfs f0,4832(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4832, temp.u32);
	// stfs f0,4836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4836, temp.u32);
	// stfs f0,4840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4840, temp.u32);
	// stfs f0,4844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4844, temp.u32);
	// stfs f0,4848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4848, temp.u32);
	// stfs f0,4852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4852, temp.u32);
	// stfs f11,4856(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4856, temp.u32);
	// stfs f0,4860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4860, temp.u32);
	// stfs f0,4864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4864, temp.u32);
	// stfs f0,4868(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4868, temp.u32);
	// stfs f0,4872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4872, temp.u32);
	// stfs f0,4876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4876, temp.u32);
	// stfs f0,4880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4880, temp.u32);
	// stfs f0,4884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4884, temp.u32);
	// stfs f0,4888(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4888, temp.u32);
	// stfs f0,4892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4892, temp.u32);
	// stfs f10,4896(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4896, temp.u32);
	// stfs f0,4900(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4900, temp.u32);
	// stfs f0,4904(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4904, temp.u32);
	// stfs f0,4908(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4908, temp.u32);
	// stfs f0,4912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4912, temp.u32);
	// stfs f0,4916(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4916, temp.u32);
	// stfs f0,4920(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4920, temp.u32);
	// stfs f10,4924(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4924, temp.u32);
	// stfs f13,4928(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4928, temp.u32);
	// stfs f13,4932(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4932, temp.u32);
	// stfs f13,4936(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4936, temp.u32);
	// stfs f13,4940(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4940, temp.u32);
	// stfs f13,4944(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4944, temp.u32);
	// stfs f13,4948(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4948, temp.u32);
	// stfs f13,4952(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4952, temp.u32);
	// stfs f12,4956(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4956, temp.u32);
	// stfs f12,4960(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4960, temp.u32);
	// stfs f12,4964(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4964, temp.u32);
	// stfs f12,4968(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4968, temp.u32);
	// stfs f12,4972(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4972, temp.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f12,4976(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4976, temp.u32);
	// stfs f12,4980(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4980, temp.u32);
	// stfs f0,4984(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4984, temp.u32);
	// stfs f0,4988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4988, temp.u32);
	// stfs f0,4992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4992, temp.u32);
	// lfs f13,17252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17252);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f13,4996(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4996, temp.u32);
	// stfs f0,5000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5000, temp.u32);
	// stfs f0,5004(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5004, temp.u32);
	// stfs f0,5008(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5008, temp.u32);
	// stfs f0,5012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5012, temp.u32);
	// stfs f0,5016(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5016, temp.u32);
	// stfs f0,5020(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5020, temp.u32);
	// lfs f13,17248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17248);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,5024(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5024, temp.u32);
	// stfs f0,5028(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5028, temp.u32);
	// stfs f0,5032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5032, temp.u32);
	// stfs f0,5036(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5036, temp.u32);
	// stfs f0,5040(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5040, temp.u32);
	// stfs f0,5044(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5044, temp.u32);
	// stfs f0,5048(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5048, temp.u32);
	// stfs f0,5052(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5052, temp.u32);
	// stfs f0,5056(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5056, temp.u32);
	// stfs f0,5060(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5060, temp.u32);
	// stfs f0,5064(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5064, temp.u32);
	// stfs f0,5068(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5068, temp.u32);
	// stfs f0,5072(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5072, temp.u32);
	// stfs f0,5076(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5076, temp.u32);
	// stfs f0,5080(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5080, temp.u32);
	// stfs f0,5084(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5084, temp.u32);
	// stfs f0,5088(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5088, temp.u32);
	// stfs f0,5092(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5092, temp.u32);
	// stfs f0,5096(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5096, temp.u32);
	// stfs f0,5100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5100, temp.u32);
	// stfs f0,5104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5104, temp.u32);
	// stfs f11,5108(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5108, temp.u32);
	// stfs f0,5112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5112, temp.u32);
	// stfs f0,5116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5116, temp.u32);
	// stfs f0,5120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5120, temp.u32);
	// stfs f0,5124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5124, temp.u32);
	// stfs f0,5128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5128, temp.u32);
	// stfs f0,5132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5132, temp.u32);
	// stfs f11,5136(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5136, temp.u32);
	// stfs f0,5140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5140, temp.u32);
	// stfs f0,5144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5144, temp.u32);
	// stfs f0,5148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5148, temp.u32);
	// stfs f0,5152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5152, temp.u32);
	// stfs f0,5156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5156, temp.u32);
	// stfs f0,5160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5160, temp.u32);
	// stfs f0,5164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5164, temp.u32);
	// stfs f0,5168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5168, temp.u32);
	// stfs f0,5172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5172, temp.u32);
	// stfs f0,5176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5176, temp.u32);
	// stfs f0,5180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5180, temp.u32);
	// stfs f0,5184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5184, temp.u32);
	// stfs f0,5188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5188, temp.u32);
	// stfs f0,5192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5192, temp.u32);
	// stfs f0,5196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5196, temp.u32);
	// stfs f0,5200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5200, temp.u32);
	// stfs f0,5204(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5204, temp.u32);
	// stfs f0,5208(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5208, temp.u32);
	// stfs f0,5212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5212, temp.u32);
	// stfs f0,5216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5216, temp.u32);
	// stfs f0,5220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5220, temp.u32);
	// stfs f0,5224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5224, temp.u32);
	// stfs f0,5228(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5228, temp.u32);
	// stfs f0,5232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5232, temp.u32);
	// stfs f0,5236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5236, temp.u32);
	// stfs f0,5240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5240, temp.u32);
	// stfs f0,5244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5244, temp.u32);
	// stfs f0,5248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5248, temp.u32);
	// stfs f0,5252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5252, temp.u32);
	// stfs f0,5256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5256, temp.u32);
	// stfs f0,5260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5260, temp.u32);
	// stfs f0,5264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5264, temp.u32);
	// stfs f0,5268(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5268, temp.u32);
	// stfs f0,5272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5272, temp.u32);
	// stfs f11,5276(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5276, temp.u32);
	// stfs f0,5280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5280, temp.u32);
	// li r5,420
	ctx.r5.s64 = 420;
	// stfs f0,5284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5284, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,5288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5288, temp.u32);
	// addi r3,r31,5404
	ctx.r3.s64 = ctx.r31.s64 + 5404;
	// stfs f0,5292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5292, temp.u32);
	// stfs f0,5296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5296, temp.u32);
	// stfs f0,5300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5300, temp.u32);
	// stfs f11,5304(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5304, temp.u32);
	// stfs f0,5308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5308, temp.u32);
	// stfs f0,5312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5312, temp.u32);
	// stfs f0,5316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5316, temp.u32);
	// stfs f0,5320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5320, temp.u32);
	// stfs f0,5324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5324, temp.u32);
	// stfs f0,5328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5328, temp.u32);
	// stfs f0,5332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5332, temp.u32);
	// stfs f0,5336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5336, temp.u32);
	// stfs f0,5340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5340, temp.u32);
	// stfs f0,5344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5344, temp.u32);
	// stfs f0,5348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5348, temp.u32);
	// stfs f0,5352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5352, temp.u32);
	// stfs f0,5356(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5356, temp.u32);
	// stfs f0,5360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5360, temp.u32);
	// stfs f0,5364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5364, temp.u32);
	// stfs f0,5368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5368, temp.u32);
	// stfs f0,5372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5372, temp.u32);
	// std r30,5376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5376, ctx.r30.u64);
	// std r30,5384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5384, ctx.r30.u64);
	// std r30,5392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5392, ctx.r30.u64);
	// stw r30,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C4D38;
	sub_8259D300(ctx, base);
	// std r30,5824(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5824, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,5832(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5832, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,5840(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5840, ctx.r30.u64);
	// addi r3,r31,5852
	ctx.r3.s64 = ctx.r31.s64 + 5852;
	// stw r30,5848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5848, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C4D58;
	sub_8259D300(ctx, base);
	// std r30,6272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6272, ctx.r30.u64);
	// std r30,6280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6280, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,6288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6288, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,6300
	ctx.r3.s64 = ctx.r31.s64 + 6300;
	// stw r30,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C4D78;
	sub_8259D300(ctx, base);
	// std r30,6720(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6720, ctx.r30.u64);
	// std r30,6728(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6728, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,6736(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6736, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,6748
	ctx.r3.s64 = ctx.r31.s64 + 6748;
	// stw r30,6744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6744, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C4D98;
	sub_8259D300(ctx, base);
	// std r30,7168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7168, ctx.r30.u64);
	// std r30,7176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7176, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,7184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7184, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,7196
	ctx.r3.s64 = ctx.r31.s64 + 7196;
	// stw r30,7192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7192, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C4DB8;
	sub_8259D300(ctx, base);
	// std r30,7616(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7616, ctx.r30.u64);
	// std r30,7624(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7624, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,7632(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7632, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,7644
	ctx.r3.s64 = ctx.r31.s64 + 7644;
	// stw r30,7640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7640, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C4DD8;
	sub_8259D300(ctx, base);
	// li r5,420
	ctx.r5.s64 = 420;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8092
	ctx.r3.s64 = ctx.r31.s64 + 8092;
	// std r30,8064(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8064, ctx.r30.u64);
	// std r30,8072(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8072, ctx.r30.u64);
	// std r30,8080(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8080, ctx.r30.u64);
	// stw r30,8088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8088, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C4DF8;
	sub_8259D300(ctx, base);
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

__attribute__((alias("__imp__sub_825C4E10"))) PPC_WEAK_FUNC(sub_825C4E10);
PPC_FUNC_IMPL(__imp__sub_825C4E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x825C4E18;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bba4
	ctx.lr = 0x825C4E20;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,1920
	ctx.r31.s64 = ctx.r11.s64 + 1920;
	// li r5,420
	ctx.r5.s64 = 420;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2268
	ctx.r3.s64 = ctx.r31.s64 + 2268;
	// std r30,2240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2240, ctx.r30.u64);
	// std r30,2248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2248, ctx.r30.u64);
	// std r30,2256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2256, ctx.r30.u64);
	// stw r30,2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2264, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C4E50;
	sub_8259D300(ctx, base);
	// std r30,2688(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2688, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,2696(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2696, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,2704(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2704, ctx.r30.u64);
	// addi r3,r31,2716
	ctx.r3.s64 = ctx.r31.s64 + 2716;
	// stw r30,2712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2712, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C4E70;
	sub_8259D300(ctx, base);
	// std r30,3136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3136, ctx.r30.u64);
	// std r30,3144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3144, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,3152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3152, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3164
	ctx.r3.s64 = ctx.r31.s64 + 3164;
	// stw r30,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C4E90;
	sub_8259D300(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f30,17288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17288);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f30,3584(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3584, temp.u32);
	// stfs f30,3588(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3588, temp.u32);
	// stfs f30,3592(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3592, temp.u32);
	// stfs f30,3596(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3596, temp.u32);
	// lfs f29,17284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17284);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,3600(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3600, temp.u32);
	// stfs f30,3604(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3604, temp.u32);
	// stfs f30,3608(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3608, temp.u32);
	// stfs f29,3612(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3612, temp.u32);
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f29,3616(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3616, temp.u32);
	// stfs f29,3620(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3620, temp.u32);
	// stfs f29,3624(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3624, temp.u32);
	// stfs f29,3628(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3628, temp.u32);
	// lfs f0,-15128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15128);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f29,3632(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3632, temp.u32);
	// addi r29,r11,14816
	ctx.r29.s64 = ctx.r11.s64 + 14816;
	// stfs f29,3636(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3636, temp.u32);
	// stfs f31,3640(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3640, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,3644(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3644, temp.u32);
	// stfs f31,3648(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3648, temp.u32);
	// stfs f0,3652(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3652, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3656, temp.u32);
	// stfs f0,3660(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3660, temp.u32);
	// lfs f0,3268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3268);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,3664(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3664, temp.u32);
	// stfs f31,3668(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3668, temp.u32);
	// stfs f31,3672(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3672, temp.u32);
	// stfs f31,3676(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3676, temp.u32);
	// stfs f31,3680(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3680, temp.u32);
	// stfs f0,3684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3684, temp.u32);
	// stfs f0,3688(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3688, temp.u32);
	// lfs f27,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f31,3692(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3692, temp.u32);
	// stfs f31,3696(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3696, temp.u32);
	// stfs f31,3700(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3700, temp.u32);
	// stfs f31,3704(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3704, temp.u32);
	// stfs f31,3708(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3708, temp.u32);
	// stfs f27,3712(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3712, temp.u32);
	// lfs f0,-15148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,3716(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3716, temp.u32);
	// stfs f0,3720(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3720, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,3724(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3724, temp.u32);
	// stfs f31,3728(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3728, temp.u32);
	// stfs f31,3732(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3732, temp.u32);
	// stfs f31,3736(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3736, temp.u32);
	// lfs f28,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f28.f64 = double(temp.f32);
	// stfs f28,3740(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3740, temp.u32);
	// stfs f31,3744(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3744, temp.u32);
	// stfs f0,3748(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3748, temp.u32);
	// stfs f31,3752(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3752, temp.u32);
	// stfs f31,3756(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3756, temp.u32);
	// stfs f31,3760(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3760, temp.u32);
	// stfs f31,3764(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3764, temp.u32);
	// stfs f31,3768(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3768, temp.u32);
	// stfs f31,3772(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3772, temp.u32);
	// stfs f31,3776(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3776, temp.u32);
	// stfs f31,3780(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3780, temp.u32);
	// stfs f31,3784(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3784, temp.u32);
	// stfs f31,3788(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3788, temp.u32);
	// stfs f31,3792(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3792, temp.u32);
	// stfs f31,3796(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3796, temp.u32);
	// stfs f31,3800(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3800, temp.u32);
	// stfs f31,3804(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3804, temp.u32);
	// stfs f31,3808(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3808, temp.u32);
	// stfs f31,3812(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3812, temp.u32);
	// stfs f31,3816(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3816, temp.u32);
	// stfs f31,3820(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3820, temp.u32);
	// stfs f31,3824(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3824, temp.u32);
	// stfs f31,3828(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3828, temp.u32);
	// stfs f31,3832(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3832, temp.u32);
	// stfs f31,3836(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3836, temp.u32);
	// stfs f31,3840(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3840, temp.u32);
	// stfs f31,3844(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3844, temp.u32);
	// stfs f31,3848(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3848, temp.u32);
	// stfs f31,3852(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3852, temp.u32);
	// stfs f31,3856(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3856, temp.u32);
	// stfs f31,3860(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3860, temp.u32);
	// stfs f31,3864(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3864, temp.u32);
	// stfs f31,3868(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3868, temp.u32);
	// stfs f31,3872(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3872, temp.u32);
	// stfs f31,3876(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3876, temp.u32);
	// stfs f28,3880(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3880, temp.u32);
	// stfs f31,3884(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3884, temp.u32);
	// stfs f31,3888(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3888, temp.u32);
	// stfs f31,3892(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3892, temp.u32);
	// stfs f31,3896(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3896, temp.u32);
	// stfs f31,3900(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3900, temp.u32);
	// stfs f31,3904(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3904, temp.u32);
	// stfs f27,3908(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3908, temp.u32);
	// stfs f31,3912(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3912, temp.u32);
	// stfs f31,3916(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3916, temp.u32);
	// stfs f31,3920(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3920, temp.u32);
	// stfs f31,3924(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3924, temp.u32);
	// stfs f31,3928(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3928, temp.u32);
	// stfs f28,3932(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3932, temp.u32);
	// stfs f31,3936(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3936, temp.u32);
	// stfs f31,3940(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3940, temp.u32);
	// stfs f31,3944(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3944, temp.u32);
	// stfs f31,3948(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3948, temp.u32);
	// stfs f31,3952(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3952, temp.u32);
	// stfs f31,3956(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3956, temp.u32);
	// stfs f27,3960(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3960, temp.u32);
	// stfs f31,3964(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3964, temp.u32);
	// stfs f31,3968(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3968, temp.u32);
	// stfs f31,3972(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3972, temp.u32);
	// stfs f31,3976(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3976, temp.u32);
	// stfs f31,3980(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3980, temp.u32);
	// stfs f31,3984(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3984, temp.u32);
	// stfs f31,3988(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3988, temp.u32);
	// stfs f31,3992(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3992, temp.u32);
	// stfs f31,3996(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3996, temp.u32);
	// stfs f31,4000(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4000, temp.u32);
	// stfs f31,4004(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4004, temp.u32);
	// stfs f31,4008(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4008, temp.u32);
	// stfs f31,4012(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4012, temp.u32);
	// stfs f31,4016(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4016, temp.u32);
	// stfs f31,4020(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4020, temp.u32);
	// stfs f31,4024(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4024, temp.u32);
	// stfs f31,4028(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4028, temp.u32);
	// stfs f30,4032(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4032, temp.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f30,4036(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4036, temp.u32);
	// stfs f30,4040(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4040, temp.u32);
	// stfs f30,4044(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4044, temp.u32);
	// stfs f30,4048(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4048, temp.u32);
	// stfs f30,4052(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4052, temp.u32);
	// lfs f0,17280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17280);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f30,4056(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4056, temp.u32);
	// stfs f0,4060(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4060, temp.u32);
	// stfs f29,4064(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4064, temp.u32);
	// stfs f29,4068(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4068, temp.u32);
	// lfs f0,17276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17276);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f29,4072(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4072, temp.u32);
	// stfs f29,4076(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4076, temp.u32);
	// stfs f29,4080(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4080, temp.u32);
	// stfs f0,4084(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4084, temp.u32);
	// lfs f0,-15132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15132);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f31,4088(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4088, temp.u32);
	// stfs f31,4092(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4092, temp.u32);
	// stfs f31,4096(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4096, temp.u32);
	// stfs f0,4100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4100, temp.u32);
	// stfs f0,4104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4104, temp.u32);
	// lfs f0,-15136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15136);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,4108(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4108, temp.u32);
	// stfs f31,4112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4112, temp.u32);
	// stfs f0,4116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4116, temp.u32);
	// stfs f31,4120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4120, temp.u32);
	// stfs f31,4124(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4124, temp.u32);
	// lfs f0,17272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4128, temp.u32);
	// stfs f0,4132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4132, temp.u32);
	// stfs f31,4136(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4136, temp.u32);
	// stfs f31,4140(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4140, temp.u32);
	// stfs f31,4144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4144, temp.u32);
	// stfs f31,4148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4148, temp.u32);
	// stfs f31,4152(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4152, temp.u32);
	// stfs f31,4156(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4156, temp.u32);
	// stfs f31,4160(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4160, temp.u32);
	// stfs f31,4164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4164, temp.u32);
	// stfs f31,4168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4168, temp.u32);
	// stfs f27,4172(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4172, temp.u32);
	// stfs f31,4176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4176, temp.u32);
	// stfs f31,4180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4180, temp.u32);
	// stfs f31,4184(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4184, temp.u32);
	// stfs f31,4188(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4188, temp.u32);
	// stfs f31,4192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4192, temp.u32);
	// stfs f31,4196(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4196, temp.u32);
	// stfs f31,4200(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4200, temp.u32);
	// stfs f31,4204(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4204, temp.u32);
	// stfs f31,4208(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4208, temp.u32);
	// stfs f31,4212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4212, temp.u32);
	// stfs f31,4216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4216, temp.u32);
	// stfs f31,4220(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4220, temp.u32);
	// stfs f31,4224(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4224, temp.u32);
	// stfs f31,4228(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4228, temp.u32);
	// stfs f31,4232(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4232, temp.u32);
	// stfs f31,4236(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4236, temp.u32);
	// stfs f31,4240(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4240, temp.u32);
	// stfs f31,4244(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4244, temp.u32);
	// stfs f31,4248(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4248, temp.u32);
	// stfs f31,4252(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4252, temp.u32);
	// stfs f31,4256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4256, temp.u32);
	// stfs f31,4260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4260, temp.u32);
	// stfs f31,4264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4264, temp.u32);
	// stfs f31,4268(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4268, temp.u32);
	// stfs f31,4272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4272, temp.u32);
	// stfs f31,4276(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4276, temp.u32);
	// stfs f31,4280(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4280, temp.u32);
	// stfs f31,4284(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4284, temp.u32);
	// stfs f31,4288(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4288, temp.u32);
	// stfs f31,4292(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4292, temp.u32);
	// stfs f31,4296(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4296, temp.u32);
	// stfs f31,4300(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4300, temp.u32);
	// stfs f31,4304(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4304, temp.u32);
	// stfs f31,4308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4308, temp.u32);
	// stfs f31,4312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4312, temp.u32);
	// stfs f31,4316(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4316, temp.u32);
	// stfs f31,4320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4320, temp.u32);
	// li r5,420
	ctx.r5.s64 = 420;
	// stfs f31,4324(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4324, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,4328(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4328, temp.u32);
	// addi r3,r31,4508
	ctx.r3.s64 = ctx.r31.s64 + 4508;
	// stfs f31,4332(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4332, temp.u32);
	// stfs f31,4336(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4336, temp.u32);
	// stfs f27,4340(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4340, temp.u32);
	// stfs f31,4344(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4344, temp.u32);
	// stfs f31,4348(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4348, temp.u32);
	// stfs f31,4352(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4352, temp.u32);
	// stfs f31,4356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4356, temp.u32);
	// stfs f31,4360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4360, temp.u32);
	// stfs f31,4364(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4364, temp.u32);
	// stfs f31,4368(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4368, temp.u32);
	// stfs f31,4372(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4372, temp.u32);
	// stfs f31,4376(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4376, temp.u32);
	// stfs f31,4380(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4380, temp.u32);
	// stfs f31,4384(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4384, temp.u32);
	// stfs f31,4388(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4388, temp.u32);
	// stfs f31,4392(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4392, temp.u32);
	// stfs f31,4396(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4396, temp.u32);
	// stfs f31,4400(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4400, temp.u32);
	// stfs f31,4404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4404, temp.u32);
	// stfs f31,4408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4408, temp.u32);
	// stfs f31,4412(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4412, temp.u32);
	// stfs f31,4416(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4416, temp.u32);
	// stfs f31,4420(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4420, temp.u32);
	// stfs f31,4424(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4424, temp.u32);
	// stfs f31,4428(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4428, temp.u32);
	// stfs f31,4432(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4432, temp.u32);
	// stfs f31,4436(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4436, temp.u32);
	// stfs f31,4440(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4440, temp.u32);
	// stfs f31,4444(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4444, temp.u32);
	// stfs f31,4448(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4448, temp.u32);
	// stfs f31,4452(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4452, temp.u32);
	// stfs f31,4456(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4456, temp.u32);
	// stfs f31,4460(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4460, temp.u32);
	// stfs f31,4464(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4464, temp.u32);
	// stfs f31,4468(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4468, temp.u32);
	// stfs f31,4472(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4472, temp.u32);
	// stfs f28,4476(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4476, temp.u32);
	// std r30,4480(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4480, ctx.r30.u64);
	// std r30,4488(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4488, ctx.r30.u64);
	// std r30,4496(r31)
	PPC_STORE_U64(ctx.r31.u32 + 4496, ctx.r30.u64);
	// stw r30,4504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4504, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C52A4;
	sub_8259D300(ctx, base);
	// stfs f30,4928(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4928, temp.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f30,4932(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4932, temp.u32);
	// stfs f30,4936(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4936, temp.u32);
	// stfs f30,4940(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4940, temp.u32);
	// stfs f30,4944(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4944, temp.u32);
	// stfs f30,4948(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4948, temp.u32);
	// stfs f30,4952(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4952, temp.u32);
	// stfs f29,4956(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4956, temp.u32);
	// stfs f29,4960(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4960, temp.u32);
	// stfs f29,4964(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4964, temp.u32);
	// lfs f0,17268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17268);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,4968(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4968, temp.u32);
	// stfs f0,4972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4972, temp.u32);
	// stfs f0,4976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4976, temp.u32);
	// stfs f0,4980(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4980, temp.u32);
	// stfs f31,4984(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4984, temp.u32);
	// stfs f31,4988(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4988, temp.u32);
	// stfs f31,4992(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4992, temp.u32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4996(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4996, temp.u32);
	// stfs f0,5000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5000, temp.u32);
	// stfs f31,5004(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5004, temp.u32);
	// stfs f0,5008(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5008, temp.u32);
	// stfs f31,5012(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5012, temp.u32);
	// stfs f31,5016(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5016, temp.u32);
	// stfs f31,5020(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5020, temp.u32);
	// lfs f0,4192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4192);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,5024(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5024, temp.u32);
	// stfs f0,5028(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5028, temp.u32);
	// lfs f0,-624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5032, temp.u32);
	// stfs f31,5036(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5036, temp.u32);
	// stfs f31,5040(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5040, temp.u32);
	// stfs f31,5044(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5044, temp.u32);
	// stfs f31,5048(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5048, temp.u32);
	// stfs f31,5052(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5052, temp.u32);
	// stfs f31,5056(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5056, temp.u32);
	// stfs f31,5060(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5060, temp.u32);
	// stfs f31,5064(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5064, temp.u32);
	// stfs f31,5068(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5068, temp.u32);
	// stfs f31,5072(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5072, temp.u32);
	// stfs f31,5076(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5076, temp.u32);
	// stfs f31,5080(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5080, temp.u32);
	// stfs f31,5084(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5084, temp.u32);
	// stfs f31,5088(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5088, temp.u32);
	// stfs f31,5092(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5092, temp.u32);
	// stfs f31,5096(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5096, temp.u32);
	// stfs f31,5100(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5100, temp.u32);
	// stfs f31,5104(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5104, temp.u32);
	// stfs f31,5108(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5108, temp.u32);
	// stfs f31,5112(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5112, temp.u32);
	// stfs f31,5116(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5116, temp.u32);
	// stfs f31,5120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5120, temp.u32);
	// stfs f31,5124(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5124, temp.u32);
	// stfs f31,5128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5128, temp.u32);
	// stfs f31,5132(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5132, temp.u32);
	// stfs f31,5136(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5136, temp.u32);
	// stfs f31,5140(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5140, temp.u32);
	// stfs f31,5144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5144, temp.u32);
	// stfs f31,5148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5148, temp.u32);
	// stfs f31,5152(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5152, temp.u32);
	// stfs f31,5156(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5156, temp.u32);
	// stfs f31,5160(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5160, temp.u32);
	// stfs f31,5164(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5164, temp.u32);
	// stfs f31,5168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5168, temp.u32);
	// stfs f31,5172(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5172, temp.u32);
	// stfs f31,5176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5176, temp.u32);
	// stfs f31,5180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5180, temp.u32);
	// stfs f31,5184(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5184, temp.u32);
	// stfs f31,5188(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5188, temp.u32);
	// stfs f31,5192(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5192, temp.u32);
	// stfs f31,5196(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5196, temp.u32);
	// stfs f31,5200(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5200, temp.u32);
	// stfs f31,5204(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5204, temp.u32);
	// stfs f31,5208(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5208, temp.u32);
	// stfs f31,5212(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5212, temp.u32);
	// stfs f31,5216(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5216, temp.u32);
	// stfs f31,5220(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5220, temp.u32);
	// stfs f28,5224(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5224, temp.u32);
	// stfs f31,5228(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5228, temp.u32);
	// stfs f31,5232(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5232, temp.u32);
	// stfs f31,5236(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5236, temp.u32);
	// stfs f31,5240(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5240, temp.u32);
	// stfs f31,5244(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5244, temp.u32);
	// stfs f31,5248(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5248, temp.u32);
	// stfs f27,5252(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5252, temp.u32);
	// stfs f31,5256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5256, temp.u32);
	// stfs f31,5260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5260, temp.u32);
	// stfs f31,5264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5264, temp.u32);
	// stfs f31,5268(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5268, temp.u32);
	// stfs f31,5272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5272, temp.u32);
	// stfs f28,5276(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5276, temp.u32);
	// stfs f31,5280(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5280, temp.u32);
	// stfs f31,5284(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5284, temp.u32);
	// stfs f31,5288(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5288, temp.u32);
	// stfs f31,5292(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5292, temp.u32);
	// stfs f31,5296(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5296, temp.u32);
	// stfs f31,5300(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5300, temp.u32);
	// stfs f27,5304(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5304, temp.u32);
	// stfs f31,5308(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5308, temp.u32);
	// stfs f31,5312(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5312, temp.u32);
	// stfs f31,5316(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5316, temp.u32);
	// stfs f31,5320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5320, temp.u32);
	// stfs f31,5324(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5324, temp.u32);
	// stfs f31,5328(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5328, temp.u32);
	// stfs f31,5332(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5332, temp.u32);
	// stfs f31,5336(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5336, temp.u32);
	// stfs f31,5340(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5340, temp.u32);
	// stfs f28,5344(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5344, temp.u32);
	// stfs f31,5348(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5348, temp.u32);
	// stfs f31,5352(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5352, temp.u32);
	// li r5,420
	ctx.r5.s64 = 420;
	// stfs f31,5356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5356, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,5360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5360, temp.u32);
	// addi r3,r31,5404
	ctx.r3.s64 = ctx.r31.s64 + 5404;
	// stfs f31,5364(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5364, temp.u32);
	// stfs f31,5368(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5368, temp.u32);
	// stfs f28,5372(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5372, temp.u32);
	// std r30,5376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5376, ctx.r30.u64);
	// std r30,5384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5384, ctx.r30.u64);
	// std r30,5392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5392, ctx.r30.u64);
	// stw r30,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C54A0;
	sub_8259D300(ctx, base);
	// std r30,5824(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5824, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,5832(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5832, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,5840(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5840, ctx.r30.u64);
	// addi r3,r31,5852
	ctx.r3.s64 = ctx.r31.s64 + 5852;
	// stw r30,5848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5848, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C54C0;
	sub_8259D300(ctx, base);
	// std r30,6272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6272, ctx.r30.u64);
	// std r30,6280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6280, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,6288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6288, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,6300
	ctx.r3.s64 = ctx.r31.s64 + 6300;
	// stw r30,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C54E0;
	sub_8259D300(ctx, base);
	// std r30,6720(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6720, ctx.r30.u64);
	// std r30,6728(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6728, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,6736(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6736, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,6748
	ctx.r3.s64 = ctx.r31.s64 + 6748;
	// stw r30,6744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6744, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C5500;
	sub_8259D300(ctx, base);
	// std r30,7168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7168, ctx.r30.u64);
	// std r30,7176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7176, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,7184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7184, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,7196
	ctx.r3.s64 = ctx.r31.s64 + 7196;
	// stw r30,7192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7192, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C5520;
	sub_8259D300(ctx, base);
	// li r5,896
	ctx.r5.s64 = 896;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,7616
	ctx.r3.s64 = ctx.r31.s64 + 7616;
	// bl 0x8259d300
	ctx.lr = 0x825C5530;
	sub_8259D300(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8259bbf0
	ctx.lr = 0x825C553C;
	__restfpr_27(ctx, base);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C5540"))) PPC_WEAK_FUNC(sub_825C5540);
PPC_FUNC_IMPL(__imp__sub_825C5540) {
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
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,-6592
	ctx.r31.s64 = ctx.r11.s64 + -6592;
	// li r5,420
	ctx.r5.s64 = 420;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2268
	ctx.r3.s64 = ctx.r31.s64 + 2268;
	// std r30,2240(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2240, ctx.r30.u64);
	// std r30,2248(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2248, ctx.r30.u64);
	// std r30,2256(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2256, ctx.r30.u64);
	// stw r30,2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2264, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C5580;
	sub_8259D300(ctx, base);
	// std r30,2688(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2688, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,2696(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2696, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,2704(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2704, ctx.r30.u64);
	// addi r3,r31,2716
	ctx.r3.s64 = ctx.r31.s64 + 2716;
	// stw r30,2712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2712, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C55A0;
	sub_8259D300(ctx, base);
	// std r30,3136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3136, ctx.r30.u64);
	// std r30,3144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3144, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,3152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 3152, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3164
	ctx.r3.s64 = ctx.r31.s64 + 3164;
	// stw r30,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C55C0;
	sub_8259D300(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,-5892(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5892);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f13,3584(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3584, temp.u32);
	// stfs f13,3588(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3588, temp.u32);
	// stfs f13,3592(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3592, temp.u32);
	// stfs f13,3596(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3596, temp.u32);
	// stfs f13,3600(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3600, temp.u32);
	// stfs f13,3604(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3604, temp.u32);
	// stfs f13,3608(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3608, temp.u32);
	// lfs f12,17260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17260);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f12,3612(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3612, temp.u32);
	// stfs f12,3616(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3616, temp.u32);
	// stfs f12,3620(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3620, temp.u32);
	// stfs f12,3624(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3624, temp.u32);
	// stfs f12,3628(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3628, temp.u32);
	// stfs f12,3632(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3632, temp.u32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f12,3636(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3636, temp.u32);
	// stfs f0,3640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3640, temp.u32);
	// stfs f0,3644(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3644, temp.u32);
	// stfs f0,3648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3648, temp.u32);
	// stfs f0,3652(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3652, temp.u32);
	// stfs f0,3656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3656, temp.u32);
	// stfs f0,3660(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3660, temp.u32);
	// stfs f0,3664(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3664, temp.u32);
	// lfs f11,-488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -488);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f11,3668(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3668, temp.u32);
	// stfs f0,3672(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3672, temp.u32);
	// stfs f0,3676(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3676, temp.u32);
	// stfs f0,3680(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3680, temp.u32);
	// stfs f0,3684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3684, temp.u32);
	// stfs f0,3688(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3688, temp.u32);
	// stfs f0,3692(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3692, temp.u32);
	// stfs f0,3696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3696, temp.u32);
	// stfs f0,3700(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3700, temp.u32);
	// stfs f0,3704(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3704, temp.u32);
	// stfs f0,3708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3708, temp.u32);
	// stfs f0,3712(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3712, temp.u32);
	// stfs f0,3716(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3716, temp.u32);
	// stfs f0,3720(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3720, temp.u32);
	// lfs f11,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,3724(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3724, temp.u32);
	// stfs f0,3728(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3728, temp.u32);
	// stfs f0,3732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3732, temp.u32);
	// stfs f0,3736(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3736, temp.u32);
	// stfs f0,3740(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3740, temp.u32);
	// stfs f0,3744(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3744, temp.u32);
	// stfs f0,3748(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3748, temp.u32);
	// stfs f0,3752(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3752, temp.u32);
	// stfs f0,3756(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3756, temp.u32);
	// stfs f0,3760(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3760, temp.u32);
	// stfs f0,3764(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3764, temp.u32);
	// stfs f0,3768(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3768, temp.u32);
	// stfs f0,3772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3772, temp.u32);
	// stfs f0,3776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3776, temp.u32);
	// stfs f0,3780(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3780, temp.u32);
	// stfs f0,3784(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3784, temp.u32);
	// stfs f0,3788(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3788, temp.u32);
	// stfs f0,3792(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3792, temp.u32);
	// stfs f0,3796(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3796, temp.u32);
	// stfs f0,3800(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3800, temp.u32);
	// stfs f0,3804(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3804, temp.u32);
	// stfs f0,3808(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3808, temp.u32);
	// stfs f0,3812(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3812, temp.u32);
	// stfs f0,3816(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3816, temp.u32);
	// stfs f0,3820(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3820, temp.u32);
	// stfs f0,3824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3824, temp.u32);
	// stfs f0,3828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3828, temp.u32);
	// stfs f0,3832(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3832, temp.u32);
	// stfs f0,3836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3836, temp.u32);
	// stfs f0,3840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3840, temp.u32);
	// stfs f0,3844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3844, temp.u32);
	// stfs f0,3848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3848, temp.u32);
	// stfs f0,3852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3852, temp.u32);
	// stfs f0,3856(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3856, temp.u32);
	// stfs f0,3860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3860, temp.u32);
	// stfs f0,3864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3864, temp.u32);
	// stfs f0,3868(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3868, temp.u32);
	// stfs f0,3872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3872, temp.u32);
	// stfs f0,3876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3876, temp.u32);
	// stfs f0,3880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3880, temp.u32);
	// stfs f0,3884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3884, temp.u32);
	// stfs f0,3888(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3888, temp.u32);
	// stfs f11,3892(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3892, temp.u32);
	// stfs f0,3896(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3896, temp.u32);
	// stfs f0,3900(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3900, temp.u32);
	// stfs f0,3904(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3904, temp.u32);
	// stfs f0,3908(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3908, temp.u32);
	// stfs f0,3912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3912, temp.u32);
	// stfs f0,3916(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3916, temp.u32);
	// stfs f0,3920(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3920, temp.u32);
	// stfs f0,3924(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3924, temp.u32);
	// stfs f0,3928(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3928, temp.u32);
	// stfs f0,3932(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3932, temp.u32);
	// stfs f0,3936(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3936, temp.u32);
	// stfs f0,3940(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3940, temp.u32);
	// stfs f0,3944(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3944, temp.u32);
	// stfs f0,3948(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3948, temp.u32);
	// stfs f0,3952(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3952, temp.u32);
	// stfs f0,3956(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3956, temp.u32);
	// stfs f0,3960(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3960, temp.u32);
	// stfs f0,3964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3964, temp.u32);
	// stfs f0,3968(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3968, temp.u32);
	// stfs f0,3972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3972, temp.u32);
	// stfs f0,3976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3976, temp.u32);
	// stfs f0,3980(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3980, temp.u32);
	// stfs f0,3984(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3984, temp.u32);
	// stfs f0,3988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3988, temp.u32);
	// stfs f0,3992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3992, temp.u32);
	// stfs f0,3996(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3996, temp.u32);
	// stfs f0,4000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4000, temp.u32);
	// stfs f0,4004(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4004, temp.u32);
	// stfs f0,4008(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4008, temp.u32);
	// stfs f0,4012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4012, temp.u32);
	// stfs f0,4016(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4016, temp.u32);
	// stfs f0,4020(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4020, temp.u32);
	// stfs f0,4024(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4024, temp.u32);
	// stfs f0,4028(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4028, temp.u32);
	// stfs f13,4032(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4032, temp.u32);
	// stfs f13,4036(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4036, temp.u32);
	// stfs f13,4040(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4040, temp.u32);
	// stfs f13,4044(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4044, temp.u32);
	// stfs f13,4048(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4048, temp.u32);
	// stfs f13,4052(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4052, temp.u32);
	// stfs f13,4056(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4056, temp.u32);
	// stfs f12,4060(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4060, temp.u32);
	// stfs f12,4064(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4064, temp.u32);
	// stfs f12,4068(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4068, temp.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f12,4072(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4072, temp.u32);
	// stfs f12,4076(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4076, temp.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stfs f12,4080(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4080, temp.u32);
	// stfs f12,4084(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4084, temp.u32);
	// stfs f0,4088(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4088, temp.u32);
	// lfs f10,-15128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15128);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,4092(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4092, temp.u32);
	// stfs f0,4096(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4096, temp.u32);
	// stfs f10,4100(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4100, temp.u32);
	// lfs f10,17292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17292);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f10,4104(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4104, temp.u32);
	// addi r11,r11,14816
	ctx.r11.s64 = ctx.r11.s64 + 14816;
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4108(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4108, temp.u32);
	// stfs f0,4112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4112, temp.u32);
	// lfs f10,17296(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17296);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f0,4116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4116, temp.u32);
	// stfs f0,4120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4120, temp.u32);
	// stfs f0,4124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4124, temp.u32);
	// stfs f0,4128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4128, temp.u32);
	// stfs f10,4132(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4132, temp.u32);
	// lfs f10,3268(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3268);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4136(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4136, temp.u32);
	// stfs f0,4140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4140, temp.u32);
	// stfs f0,4144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4144, temp.u32);
	// stfs f0,4148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4148, temp.u32);
	// stfs f0,4152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4152, temp.u32);
	// stfs f0,4156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4156, temp.u32);
	// stfs f0,4160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4160, temp.u32);
	// stfs f0,4164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4164, temp.u32);
	// stfs f0,4168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4168, temp.u32);
	// stfs f0,4172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4172, temp.u32);
	// stfs f0,4176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4176, temp.u32);
	// stfs f0,4180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4180, temp.u32);
	// stfs f0,4184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4184, temp.u32);
	// stfs f0,4188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4188, temp.u32);
	// stfs f0,4192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4192, temp.u32);
	// stfs f0,4196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4196, temp.u32);
	// stfs f0,4200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4200, temp.u32);
	// stfs f0,4204(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4204, temp.u32);
	// stfs f0,4208(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4208, temp.u32);
	// stfs f0,4212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4212, temp.u32);
	// stfs f0,4216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4216, temp.u32);
	// stfs f0,4220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4220, temp.u32);
	// stfs f0,4224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4224, temp.u32);
	// stfs f0,4228(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4228, temp.u32);
	// stfs f0,4232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4232, temp.u32);
	// stfs f0,4236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4236, temp.u32);
	// stfs f0,4240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4240, temp.u32);
	// stfs f0,4244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4244, temp.u32);
	// stfs f0,4248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4248, temp.u32);
	// stfs f0,4252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4252, temp.u32);
	// stfs f0,4256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4256, temp.u32);
	// stfs f0,4260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4260, temp.u32);
	// stfs f0,4264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4264, temp.u32);
	// stfs f0,4268(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4268, temp.u32);
	// stfs f0,4272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4272, temp.u32);
	// stfs f0,4276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4276, temp.u32);
	// stfs f0,4280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4280, temp.u32);
	// stfs f0,4284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4284, temp.u32);
	// stfs f0,4288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4288, temp.u32);
	// stfs f0,4292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4292, temp.u32);
	// stfs f0,4296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4296, temp.u32);
	// stfs f0,4300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4300, temp.u32);
	// stfs f0,4304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4304, temp.u32);
	// stfs f0,4308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4308, temp.u32);
	// stfs f0,4312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4312, temp.u32);
	// stfs f0,4316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4316, temp.u32);
	// stfs f0,4320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4320, temp.u32);
	// stfs f0,4324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4324, temp.u32);
	// stfs f0,4328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4328, temp.u32);
	// stfs f0,4332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4332, temp.u32);
	// stfs f0,4336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4336, temp.u32);
	// stfs f0,4340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4340, temp.u32);
	// stfs f0,4344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4344, temp.u32);
	// stfs f0,4348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4348, temp.u32);
	// stfs f0,4352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4352, temp.u32);
	// stfs f0,4356(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4356, temp.u32);
	// stfs f0,4360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4360, temp.u32);
	// stfs f0,4364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4364, temp.u32);
	// stfs f0,4368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4368, temp.u32);
	// stfs f0,4372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4372, temp.u32);
	// stfs f0,4376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4376, temp.u32);
	// stfs f0,4380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4380, temp.u32);
	// stfs f0,4384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4384, temp.u32);
	// stfs f0,4388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4388, temp.u32);
	// stfs f0,4392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4392, temp.u32);
	// stfs f0,4396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4396, temp.u32);
	// stfs f0,4400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4400, temp.u32);
	// stfs f0,4404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4404, temp.u32);
	// stfs f0,4408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4408, temp.u32);
	// stfs f0,4412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4412, temp.u32);
	// stfs f0,4416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4416, temp.u32);
	// stfs f0,4420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4420, temp.u32);
	// stfs f0,4424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4424, temp.u32);
	// stfs f0,4428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4428, temp.u32);
	// stfs f0,4432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4432, temp.u32);
	// stfs f0,4436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4436, temp.u32);
	// stfs f0,4440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4440, temp.u32);
	// stfs f0,4444(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4444, temp.u32);
	// stfs f0,4448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4448, temp.u32);
	// stfs f0,4452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4452, temp.u32);
	// stfs f0,4456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4456, temp.u32);
	// stfs f0,4460(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4460, temp.u32);
	// stfs f0,4464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4464, temp.u32);
	// stfs f0,4468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4468, temp.u32);
	// stfs f0,4472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4472, temp.u32);
	// stfs f0,4476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4476, temp.u32);
	// stfs f13,4480(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4480, temp.u32);
	// stfs f13,4484(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4484, temp.u32);
	// stfs f13,4488(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4488, temp.u32);
	// stfs f13,4492(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4492, temp.u32);
	// stfs f13,4496(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4496, temp.u32);
	// stfs f13,4500(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4500, temp.u32);
	// stfs f13,4504(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4504, temp.u32);
	// stfs f12,4508(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4508, temp.u32);
	// stfs f12,4512(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4512, temp.u32);
	// stfs f12,4516(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4516, temp.u32);
	// stfs f12,4520(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4520, temp.u32);
	// stfs f12,4524(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4524, temp.u32);
	// stfs f12,4528(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4528, temp.u32);
	// stfs f12,4532(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4532, temp.u32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,4536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4536, temp.u32);
	// stfs f0,4540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4540, temp.u32);
	// stfs f0,4544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4544, temp.u32);
	// stfs f10,4548(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4548, temp.u32);
	// stfs f10,4552(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4552, temp.u32);
	// stfs f10,4556(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4556, temp.u32);
	// lfs f10,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f10,4560(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4560, temp.u32);
	// stfs f0,4564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4564, temp.u32);
	// stfs f0,4568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4568, temp.u32);
	// stfs f0,4572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4572, temp.u32);
	// stfs f0,4576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4576, temp.u32);
	// lfs f10,4192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4192);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4580(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4580, temp.u32);
	// stfs f10,4584(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4584, temp.u32);
	// stfs f0,4588(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4588, temp.u32);
	// stfs f0,4592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4592, temp.u32);
	// stfs f0,4596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4596, temp.u32);
	// stfs f0,4600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4600, temp.u32);
	// stfs f0,4604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4604, temp.u32);
	// stfs f0,4608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4608, temp.u32);
	// stfs f0,4612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4612, temp.u32);
	// stfs f0,4616(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4616, temp.u32);
	// stfs f0,4620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4620, temp.u32);
	// stfs f0,4624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4624, temp.u32);
	// stfs f0,4628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4628, temp.u32);
	// stfs f0,4632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4632, temp.u32);
	// stfs f0,4636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4636, temp.u32);
	// stfs f0,4640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4640, temp.u32);
	// stfs f0,4644(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4644, temp.u32);
	// stfs f0,4648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4648, temp.u32);
	// stfs f0,4652(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4652, temp.u32);
	// stfs f0,4656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4656, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,4660(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4660, temp.u32);
	// stfs f0,4664(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4664, temp.u32);
	// stfs f0,4668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4668, temp.u32);
	// stfs f0,4672(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4672, temp.u32);
	// stfs f0,4676(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4676, temp.u32);
	// stfs f0,4680(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4680, temp.u32);
	// stfs f0,4684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4684, temp.u32);
	// stfs f0,4688(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4688, temp.u32);
	// stfs f0,4692(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4692, temp.u32);
	// stfs f0,4696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4696, temp.u32);
	// stfs f0,4700(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4700, temp.u32);
	// stfs f0,4704(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4704, temp.u32);
	// stfs f0,4708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4708, temp.u32);
	// stfs f0,4712(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4712, temp.u32);
	// stfs f0,4716(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4716, temp.u32);
	// stfs f0,4720(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4720, temp.u32);
	// stfs f0,4724(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4724, temp.u32);
	// stfs f0,4728(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4728, temp.u32);
	// stfs f0,4732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4732, temp.u32);
	// stfs f0,4736(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4736, temp.u32);
	// stfs f0,4740(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4740, temp.u32);
	// stfs f0,4744(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4744, temp.u32);
	// stfs f0,4748(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4748, temp.u32);
	// stfs f0,4752(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4752, temp.u32);
	// stfs f0,4756(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4756, temp.u32);
	// stfs f0,4760(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4760, temp.u32);
	// stfs f0,4764(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4764, temp.u32);
	// stfs f0,4768(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4768, temp.u32);
	// stfs f0,4772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4772, temp.u32);
	// lfs f10,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4776(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4776, temp.u32);
	// stfs f0,4780(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4780, temp.u32);
	// stfs f0,4784(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4784, temp.u32);
	// stfs f0,4788(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4788, temp.u32);
	// stfs f0,4792(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4792, temp.u32);
	// stfs f0,4796(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4796, temp.u32);
	// stfs f0,4800(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4800, temp.u32);
	// stfs f11,4804(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4804, temp.u32);
	// stfs f0,4808(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4808, temp.u32);
	// stfs f0,4812(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4812, temp.u32);
	// stfs f0,4816(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4816, temp.u32);
	// stfs f0,4820(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4820, temp.u32);
	// stfs f0,4824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4824, temp.u32);
	// stfs f0,4828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4828, temp.u32);
	// stfs f0,4832(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4832, temp.u32);
	// stfs f0,4836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4836, temp.u32);
	// stfs f0,4840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4840, temp.u32);
	// stfs f0,4844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4844, temp.u32);
	// stfs f0,4848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4848, temp.u32);
	// stfs f0,4852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4852, temp.u32);
	// stfs f0,4856(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4856, temp.u32);
	// stfs f0,4860(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4860, temp.u32);
	// stfs f0,4864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4864, temp.u32);
	// stfs f0,4868(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4868, temp.u32);
	// stfs f0,4872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4872, temp.u32);
	// stfs f0,4876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4876, temp.u32);
	// stfs f0,4880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4880, temp.u32);
	// stfs f0,4884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4884, temp.u32);
	// stfs f0,4888(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4888, temp.u32);
	// stfs f0,4892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4892, temp.u32);
	// stfs f10,4896(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4896, temp.u32);
	// stfs f0,4900(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4900, temp.u32);
	// stfs f0,4904(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4904, temp.u32);
	// stfs f0,4908(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4908, temp.u32);
	// stfs f0,4912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4912, temp.u32);
	// stfs f0,4916(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4916, temp.u32);
	// stfs f0,4920(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4920, temp.u32);
	// stfs f10,4924(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4924, temp.u32);
	// stfs f13,4928(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4928, temp.u32);
	// stfs f13,4932(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4932, temp.u32);
	// stfs f13,4936(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4936, temp.u32);
	// stfs f13,4940(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4940, temp.u32);
	// stfs f13,4944(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4944, temp.u32);
	// stfs f13,4948(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4948, temp.u32);
	// stfs f13,4952(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4952, temp.u32);
	// stfs f12,4956(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4956, temp.u32);
	// stfs f12,4960(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4960, temp.u32);
	// stfs f12,4964(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4964, temp.u32);
	// stfs f12,4968(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4968, temp.u32);
	// stfs f12,4972(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4972, temp.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f12,4976(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4976, temp.u32);
	// stfs f12,4980(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4980, temp.u32);
	// stfs f0,4984(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4984, temp.u32);
	// stfs f0,4988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4988, temp.u32);
	// stfs f0,4992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4992, temp.u32);
	// lfs f13,17252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17252);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f13,4996(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4996, temp.u32);
	// stfs f0,5000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5000, temp.u32);
	// stfs f0,5004(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5004, temp.u32);
	// stfs f0,5008(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5008, temp.u32);
	// stfs f0,5012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5012, temp.u32);
	// stfs f0,5016(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5016, temp.u32);
	// stfs f0,5020(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5020, temp.u32);
	// lfs f13,17248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17248);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,5024(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5024, temp.u32);
	// stfs f0,5028(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5028, temp.u32);
	// stfs f0,5032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5032, temp.u32);
	// stfs f0,5036(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5036, temp.u32);
	// stfs f0,5040(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5040, temp.u32);
	// stfs f0,5044(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5044, temp.u32);
	// stfs f0,5048(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5048, temp.u32);
	// stfs f0,5052(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5052, temp.u32);
	// stfs f0,5056(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5056, temp.u32);
	// stfs f0,5060(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5060, temp.u32);
	// stfs f0,5064(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5064, temp.u32);
	// stfs f0,5068(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5068, temp.u32);
	// stfs f0,5072(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5072, temp.u32);
	// stfs f0,5076(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5076, temp.u32);
	// stfs f0,5080(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5080, temp.u32);
	// stfs f0,5084(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5084, temp.u32);
	// stfs f0,5088(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5088, temp.u32);
	// stfs f0,5092(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5092, temp.u32);
	// stfs f0,5096(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5096, temp.u32);
	// stfs f0,5100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5100, temp.u32);
	// stfs f0,5104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5104, temp.u32);
	// stfs f11,5108(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5108, temp.u32);
	// stfs f0,5112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5112, temp.u32);
	// stfs f0,5116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5116, temp.u32);
	// stfs f0,5120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5120, temp.u32);
	// stfs f0,5124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5124, temp.u32);
	// stfs f0,5128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5128, temp.u32);
	// stfs f0,5132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5132, temp.u32);
	// stfs f11,5136(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5136, temp.u32);
	// stfs f0,5140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5140, temp.u32);
	// stfs f0,5144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5144, temp.u32);
	// stfs f0,5148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5148, temp.u32);
	// stfs f0,5152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5152, temp.u32);
	// stfs f0,5156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5156, temp.u32);
	// stfs f0,5160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5160, temp.u32);
	// stfs f0,5164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5164, temp.u32);
	// stfs f0,5168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5168, temp.u32);
	// stfs f0,5172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5172, temp.u32);
	// stfs f0,5176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5176, temp.u32);
	// stfs f0,5180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5180, temp.u32);
	// stfs f0,5184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5184, temp.u32);
	// stfs f0,5188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5188, temp.u32);
	// stfs f0,5192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5192, temp.u32);
	// stfs f0,5196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5196, temp.u32);
	// stfs f0,5200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5200, temp.u32);
	// stfs f0,5204(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5204, temp.u32);
	// stfs f0,5208(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5208, temp.u32);
	// stfs f0,5212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5212, temp.u32);
	// stfs f0,5216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5216, temp.u32);
	// stfs f0,5220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5220, temp.u32);
	// stfs f0,5224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5224, temp.u32);
	// stfs f0,5228(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5228, temp.u32);
	// stfs f0,5232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5232, temp.u32);
	// stfs f0,5236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5236, temp.u32);
	// stfs f0,5240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5240, temp.u32);
	// stfs f0,5244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5244, temp.u32);
	// stfs f0,5248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5248, temp.u32);
	// stfs f0,5252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5252, temp.u32);
	// stfs f0,5256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5256, temp.u32);
	// stfs f0,5260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5260, temp.u32);
	// stfs f0,5264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5264, temp.u32);
	// stfs f0,5268(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5268, temp.u32);
	// stfs f0,5272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5272, temp.u32);
	// stfs f11,5276(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5276, temp.u32);
	// stfs f0,5280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5280, temp.u32);
	// li r5,420
	ctx.r5.s64 = 420;
	// stfs f0,5284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5284, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,5288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5288, temp.u32);
	// addi r3,r31,5404
	ctx.r3.s64 = ctx.r31.s64 + 5404;
	// stfs f0,5292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5292, temp.u32);
	// stfs f0,5296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5296, temp.u32);
	// stfs f0,5300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5300, temp.u32);
	// stfs f11,5304(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5304, temp.u32);
	// stfs f0,5308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5308, temp.u32);
	// stfs f0,5312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5312, temp.u32);
	// stfs f0,5316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5316, temp.u32);
	// stfs f0,5320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5320, temp.u32);
	// stfs f0,5324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5324, temp.u32);
	// stfs f0,5328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5328, temp.u32);
	// stfs f0,5332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5332, temp.u32);
	// stfs f0,5336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5336, temp.u32);
	// stfs f0,5340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5340, temp.u32);
	// stfs f0,5344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5344, temp.u32);
	// stfs f0,5348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5348, temp.u32);
	// stfs f0,5352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5352, temp.u32);
	// stfs f0,5356(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5356, temp.u32);
	// stfs f0,5360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5360, temp.u32);
	// stfs f0,5364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5364, temp.u32);
	// stfs f0,5368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5368, temp.u32);
	// stfs f0,5372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5372, temp.u32);
	// std r30,5376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5376, ctx.r30.u64);
	// std r30,5384(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5384, ctx.r30.u64);
	// std r30,5392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5392, ctx.r30.u64);
	// stw r30,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C5D60;
	sub_8259D300(ctx, base);
	// std r30,5824(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5824, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,5832(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5832, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,5840(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5840, ctx.r30.u64);
	// addi r3,r31,5852
	ctx.r3.s64 = ctx.r31.s64 + 5852;
	// stw r30,5848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5848, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C5D80;
	sub_8259D300(ctx, base);
	// std r30,6272(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6272, ctx.r30.u64);
	// std r30,6280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6280, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,6288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6288, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,6300
	ctx.r3.s64 = ctx.r31.s64 + 6300;
	// stw r30,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C5DA0;
	sub_8259D300(ctx, base);
	// std r30,6720(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6720, ctx.r30.u64);
	// std r30,6728(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6728, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,6736(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6736, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,6748
	ctx.r3.s64 = ctx.r31.s64 + 6748;
	// stw r30,6744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6744, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C5DC0;
	sub_8259D300(ctx, base);
	// std r30,7168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7168, ctx.r30.u64);
	// std r30,7176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7176, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,7184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7184, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,7196
	ctx.r3.s64 = ctx.r31.s64 + 7196;
	// stw r30,7192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7192, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C5DE0;
	sub_8259D300(ctx, base);
	// std r30,7616(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7616, ctx.r30.u64);
	// std r30,7624(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7624, ctx.r30.u64);
	// li r5,420
	ctx.r5.s64 = 420;
	// std r30,7632(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7632, ctx.r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,7644
	ctx.r3.s64 = ctx.r31.s64 + 7644;
	// stw r30,7640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7640, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C5E00;
	sub_8259D300(ctx, base);
	// li r5,420
	ctx.r5.s64 = 420;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8092
	ctx.r3.s64 = ctx.r31.s64 + 8092;
	// std r30,8064(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8064, ctx.r30.u64);
	// std r30,8072(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8072, ctx.r30.u64);
	// std r30,8080(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8080, ctx.r30.u64);
	// stw r30,8088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8088, ctx.r30.u32);
	// bl 0x8259d300
	ctx.lr = 0x825C5E20;
	sub_8259D300(ctx, base);
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

__attribute__((alias("__imp__sub_825C5E38"))) PPC_WEAK_FUNC(sub_825C5E38);
PPC_FUNC_IMPL(__imp__sub_825C5E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,20712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20712);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8272(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8272, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5E58"))) PPC_WEAK_FUNC(sub_825C5E58);
PPC_FUNC_IMPL(__imp__sub_825C5E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,20712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20712);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,17560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17560);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8252(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8252, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5E78"))) PPC_WEAK_FUNC(sub_825C5E78);
PPC_FUNC_IMPL(__imp__sub_825C5E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,20772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20772);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2872);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8264(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8264, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5E98"))) PPC_WEAK_FUNC(sub_825C5E98);
PPC_FUNC_IMPL(__imp__sub_825C5E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,20800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20800);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-1632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1632);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,8276(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8276, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5EB8"))) PPC_WEAK_FUNC(sub_825C5EB8);
PPC_FUNC_IMPL(__imp__sub_825C5EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,20804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,17572(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17572);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,8236(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8236, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5ED8"))) PPC_WEAK_FUNC(sub_825C5ED8);
PPC_FUNC_IMPL(__imp__sub_825C5ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,20812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20812);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stfs f0,8216(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8216, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5EEC"))) PPC_WEAK_FUNC(sub_825C5EEC);
PPC_FUNC_IMPL(__imp__sub_825C5EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C5EF0"))) PPC_WEAK_FUNC(sub_825C5EF0);
PPC_FUNC_IMPL(__imp__sub_825C5EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,20804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,25560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25560);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8248(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8248, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5F10"))) PPC_WEAK_FUNC(sub_825C5F10);
PPC_FUNC_IMPL(__imp__sub_825C5F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,20804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,17588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17588);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8244(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8244, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5F30"))) PPC_WEAK_FUNC(sub_825C5F30);
PPC_FUNC_IMPL(__imp__sub_825C5F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,20804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20804);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f13,8244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8244);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,8208(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8208, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5F50"))) PPC_WEAK_FUNC(sub_825C5F50);
PPC_FUNC_IMPL(__imp__sub_825C5F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f13,20820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20820);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,8232(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8232, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5F70"))) PPC_WEAK_FUNC(sub_825C5F70);
PPC_FUNC_IMPL(__imp__sub_825C5F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f13,20916(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20916);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,8256(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8256, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5F90"))) PPC_WEAK_FUNC(sub_825C5F90);
PPC_FUNC_IMPL(__imp__sub_825C5F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,20052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20052);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,8228(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8228, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5FA8"))) PPC_WEAK_FUNC(sub_825C5FA8);
PPC_FUNC_IMPL(__imp__sub_825C5FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,30988(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30988);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-15116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15116);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8224(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8224, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5FC8"))) PPC_WEAK_FUNC(sub_825C5FC8);
PPC_FUNC_IMPL(__imp__sub_825C5FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f0,8224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8224);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stfs f0,8260(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8260, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5FDC"))) PPC_WEAK_FUNC(sub_825C5FDC);
PPC_FUNC_IMPL(__imp__sub_825C5FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C5FE0"))) PPC_WEAK_FUNC(sub_825C5FE0);
PPC_FUNC_IMPL(__imp__sub_825C5FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lfs f0,8224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8224);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stfs f0,8212(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8212, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C5FF4"))) PPC_WEAK_FUNC(sub_825C5FF4);
PPC_FUNC_IMPL(__imp__sub_825C5FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C5FF8"))) PPC_WEAK_FUNC(sub_825C5FF8);
PPC_FUNC_IMPL(__imp__sub_825C5FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,22560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22560);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stfs f0,8240(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8240, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C600C"))) PPC_WEAK_FUNC(sub_825C600C);
PPC_FUNC_IMPL(__imp__sub_825C600C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6010"))) PPC_WEAK_FUNC(sub_825C6010);
PPC_FUNC_IMPL(__imp__sub_825C6010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r11,r11,22560
	ctx.r11.s64 = ctx.r11.s64 + 22560;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,8268(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8268, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6030"))) PPC_WEAK_FUNC(sub_825C6030);
PPC_FUNC_IMPL(__imp__sub_825C6030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r11,r11,22560
	ctx.r11.s64 = ctx.r11.s64 + 22560;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,8220(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8220, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6050"))) PPC_WEAK_FUNC(sub_825C6050);
PPC_FUNC_IMPL(__imp__sub_825C6050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,23256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23256);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-4736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,12400(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12400, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6070"))) PPC_WEAK_FUNC(sub_825C6070);
PPC_FUNC_IMPL(__imp__sub_825C6070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,23256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23256);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-15100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,12392(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12392, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6090"))) PPC_WEAK_FUNC(sub_825C6090);
PPC_FUNC_IMPL(__imp__sub_825C6090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,23324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23324);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2872);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,12396(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12396, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C60B0"))) PPC_WEAK_FUNC(sub_825C60B0);
PPC_FUNC_IMPL(__imp__sub_825C60B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,23344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23344);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-1632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1632);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,12404(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12404, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C60D0"))) PPC_WEAK_FUNC(sub_825C60D0);
PPC_FUNC_IMPL(__imp__sub_825C60D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,23348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,20208(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20208);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,28540(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28540, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C60F0"))) PPC_WEAK_FUNC(sub_825C60F0);
PPC_FUNC_IMPL(__imp__sub_825C60F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,23356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23356);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stfs f0,28532(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28532, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6104"))) PPC_WEAK_FUNC(sub_825C6104);
PPC_FUNC_IMPL(__imp__sub_825C6104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6108"))) PPC_WEAK_FUNC(sub_825C6108);
PPC_FUNC_IMPL(__imp__sub_825C6108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,23348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,25560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25560);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,12388(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12388, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6128"))) PPC_WEAK_FUNC(sub_825C6128);
PPC_FUNC_IMPL(__imp__sub_825C6128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,23348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,20224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20224);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,12384(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12384, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6148"))) PPC_WEAK_FUNC(sub_825C6148);
PPC_FUNC_IMPL(__imp__sub_825C6148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,23348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23348);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// lfs f13,12384(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12384);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,28528(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28528, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6168"))) PPC_WEAK_FUNC(sub_825C6168);
PPC_FUNC_IMPL(__imp__sub_825C6168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f13,23364(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23364);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,28536(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28536, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6188"))) PPC_WEAK_FUNC(sub_825C6188);
PPC_FUNC_IMPL(__imp__sub_825C6188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lis r10,-32047
	ctx.r10.s64 = -2100232192;
	// lfs f0,23260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23260);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,20436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20436);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lbz r11,-9(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// stb r11,12408(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12408, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C61B4"))) PPC_WEAK_FUNC(sub_825C61B4);
PPC_FUNC_IMPL(__imp__sub_825C61B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C61B8"))) PPC_WEAK_FUNC(sub_825C61B8);
PPC_FUNC_IMPL(__imp__sub_825C61B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// b 0x823470a8
	sub_823470A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C61C4"))) PPC_WEAK_FUNC(sub_825C61C4);
PPC_FUNC_IMPL(__imp__sub_825C61C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C61C8"))) PPC_WEAK_FUNC(sub_825C61C8);
PPC_FUNC_IMPL(__imp__sub_825C61C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,13424
	ctx.r11.s64 = ctx.r11.s64 + 13424;
	// stb r10,384(r11)
	PPC_STORE_U8(ctx.r11.u32 + 384, ctx.r10.u8);
	// stb r10,784(r11)
	PPC_STORE_U8(ctx.r11.u32 + 784, ctx.r10.u8);
	// stb r10,1184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1184, ctx.r10.u8);
	// stb r10,1584(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1584, ctx.r10.u8);
	// stb r10,1984(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1984, ctx.r10.u8);
	// stb r10,2384(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2384, ctx.r10.u8);
	// stb r10,2784(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2784, ctx.r10.u8);
	// stb r10,3184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3184, ctx.r10.u8);
	// stb r10,3584(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3584, ctx.r10.u8);
	// stb r10,3984(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3984, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6200"))) PPC_WEAK_FUNC(sub_825C6200);
PPC_FUNC_IMPL(__imp__sub_825C6200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,17424
	ctx.r11.s64 = ctx.r11.s64 + 17424;
	// stb r10,144(r11)
	PPC_STORE_U8(ctx.r11.u32 + 144, ctx.r10.u8);
	// stb r10,304(r11)
	PPC_STORE_U8(ctx.r11.u32 + 304, ctx.r10.u8);
	// stb r10,464(r11)
	PPC_STORE_U8(ctx.r11.u32 + 464, ctx.r10.u8);
	// stb r10,624(r11)
	PPC_STORE_U8(ctx.r11.u32 + 624, ctx.r10.u8);
	// stb r10,784(r11)
	PPC_STORE_U8(ctx.r11.u32 + 784, ctx.r10.u8);
	// stb r10,944(r11)
	PPC_STORE_U8(ctx.r11.u32 + 944, ctx.r10.u8);
	// stb r10,1104(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1104, ctx.r10.u8);
	// stb r10,1264(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1264, ctx.r10.u8);
	// stb r10,1424(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1424, ctx.r10.u8);
	// stb r10,1584(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1584, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6238"))) PPC_WEAK_FUNC(sub_825C6238);
PPC_FUNC_IMPL(__imp__sub_825C6238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,19024
	ctx.r11.s64 = ctx.r11.s64 + 19024;
	// stb r10,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
	// stb r10,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r10.u8);
	// stb r10,164(r11)
	PPC_STORE_U8(ctx.r11.u32 + 164, ctx.r10.u8);
	// stb r10,220(r11)
	PPC_STORE_U8(ctx.r11.u32 + 220, ctx.r10.u8);
	// stb r10,276(r11)
	PPC_STORE_U8(ctx.r11.u32 + 276, ctx.r10.u8);
	// stb r10,332(r11)
	PPC_STORE_U8(ctx.r11.u32 + 332, ctx.r10.u8);
	// stb r10,388(r11)
	PPC_STORE_U8(ctx.r11.u32 + 388, ctx.r10.u8);
	// stb r10,444(r11)
	PPC_STORE_U8(ctx.r11.u32 + 444, ctx.r10.u8);
	// stb r10,500(r11)
	PPC_STORE_U8(ctx.r11.u32 + 500, ctx.r10.u8);
	// stb r10,556(r11)
	PPC_STORE_U8(ctx.r11.u32 + 556, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6270"))) PPC_WEAK_FUNC(sub_825C6270);
PPC_FUNC_IMPL(__imp__sub_825C6270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r3,r11,-18244
	ctx.r3.s64 = ctx.r11.s64 + -18244;
	// b 0x821163c0
	sub_821163C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C627C"))) PPC_WEAK_FUNC(sub_825C627C);
PPC_FUNC_IMPL(__imp__sub_825C627C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6280"))) PPC_WEAK_FUNC(sub_825C6280);
PPC_FUNC_IMPL(__imp__sub_825C6280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,31416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31416);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,26296(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26296);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-31364(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -31364, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C62A0"))) PPC_WEAK_FUNC(sub_825C62A0);
PPC_FUNC_IMPL(__imp__sub_825C62A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,31416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31416);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,26292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26292);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-31372(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -31372, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C62C0"))) PPC_WEAK_FUNC(sub_825C62C0);
PPC_FUNC_IMPL(__imp__sub_825C62C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,31588(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31588);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2872);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,-31368(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -31368, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C62E0"))) PPC_WEAK_FUNC(sub_825C62E0);
PPC_FUNC_IMPL(__imp__sub_825C62E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,31616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31616);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,26380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26380);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,-31360(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -31360, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6300"))) PPC_WEAK_FUNC(sub_825C6300);
PPC_FUNC_IMPL(__imp__sub_825C6300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,31620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31620);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,26908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26908);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,-18248(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -18248, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6320"))) PPC_WEAK_FUNC(sub_825C6320);
PPC_FUNC_IMPL(__imp__sub_825C6320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,31628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31628);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stfs f0,-20860(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -20860, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6334"))) PPC_WEAK_FUNC(sub_825C6334);
PPC_FUNC_IMPL(__imp__sub_825C6334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6338"))) PPC_WEAK_FUNC(sub_825C6338);
PPC_FUNC_IMPL(__imp__sub_825C6338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,31620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31620);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,26920(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26920);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-31376(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -31376, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6358"))) PPC_WEAK_FUNC(sub_825C6358);
PPC_FUNC_IMPL(__imp__sub_825C6358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,31620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31620);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,26924(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26924);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,-31380(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -31380, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6378"))) PPC_WEAK_FUNC(sub_825C6378);
PPC_FUNC_IMPL(__imp__sub_825C6378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f0,31620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31620);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lfs f13,-31380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31380);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,-20864(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -20864, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6398"))) PPC_WEAK_FUNC(sub_825C6398);
PPC_FUNC_IMPL(__imp__sub_825C6398) {
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
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,31636
	ctx.r31.s64 = ctx.r11.s64 + 31636;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82400230
	ctx.lr = 0x825C63D0;
	sub_82400230(ctx, base);
	// lis r11,-32046
	ctx.r11.s64 = -2100166656;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-11680
	ctx.r4.s64 = ctx.r11.s64 + -11680;
	// ori r5,r5,55000
	ctx.r5.u64 = ctx.r5.u64 | 55000;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82347808
	ctx.lr = 0x825C63E8;
	sub_82347808(ctx, base);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r3,r11,26936
	ctx.r3.s64 = ctx.r11.s64 + 26936;
	// bl 0x8259e020
	ctx.lr = 0x825C63F4;
	sub_8259E020(ctx, base);
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

__attribute__((alias("__imp__sub_825C6408"))) PPC_WEAK_FUNC(sub_825C6408);
PPC_FUNC_IMPL(__imp__sub_825C6408) {
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
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-32592
	ctx.r11.s64 = ctx.r11.s64 + -32592;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825C642C:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825c642c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825C642C;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825C6450:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825c6450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825C6450;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x824239c8
	ctx.lr = 0x825C6464;
	sub_824239C8(ctx, base);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r3,r11,26904
	ctx.r3.s64 = ctx.r11.s64 + 26904;
	// bl 0x8259e020
	ctx.lr = 0x825C6470;
	sub_8259E020(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6480"))) PPC_WEAK_FUNC(sub_825C6480);
PPC_FUNC_IMPL(__imp__sub_825C6480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32552
	ctx.r11.s64 = ctx.r11.s64 + -32552;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// addi r3,r9,27024
	ctx.r3.s64 = ctx.r9.s64 + 27024;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stb r10,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// b 0x8259e020
	sub_8259E020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C64AC"))) PPC_WEAK_FUNC(sub_825C64AC);
PPC_FUNC_IMPL(__imp__sub_825C64AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C64B0"))) PPC_WEAK_FUNC(sub_825C64B0);
PPC_FUNC_IMPL(__imp__sub_825C64B0) {
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
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r11,-20856
	ctx.r11.s64 = ctx.r11.s64 + -20856;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_825C64D4:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400230
	ctx.lr = 0x825C64F4;
	sub_82400230(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,1304
	ctx.r30.s64 = ctx.r30.s64 + 1304;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x825c64d4
	if (!ctx.cr6.lt) goto loc_825C64D4;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r3,r11,27040
	ctx.r3.s64 = ctx.r11.s64 + 27040;
	// bl 0x8259e020
	ctx.lr = 0x825C6510;
	sub_8259E020(ctx, base);
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

__attribute__((alias("__imp__sub_825C6528"))) PPC_WEAK_FUNC(sub_825C6528);
PPC_FUNC_IMPL(__imp__sub_825C6528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-27176
	ctx.r11.s64 = ctx.r11.s64 + -27176;
	// li r10,11
	ctx.r10.s64 = 11;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825C653C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825c653c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825C653C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C654C"))) PPC_WEAK_FUNC(sub_825C654C);
PPC_FUNC_IMPL(__imp__sub_825C654C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6550"))) PPC_WEAK_FUNC(sub_825C6550);
PPC_FUNC_IMPL(__imp__sub_825C6550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// addi r3,r9,27128
	ctx.r3.s64 = ctx.r9.s64 + 27128;
	// lhz r10,8344(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8344);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,8344(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8344, ctx.r10.u16);
	// b 0x8259e020
	sub_8259E020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C656C"))) PPC_WEAK_FUNC(sub_825C656C);
PPC_FUNC_IMPL(__imp__sub_825C656C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6570"))) PPC_WEAK_FUNC(sub_825C6570);
PPC_FUNC_IMPL(__imp__sub_825C6570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r3,r11,27192
	ctx.r3.s64 = ctx.r11.s64 + 27192;
	// b 0x8259e020
	sub_8259E020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C657C"))) PPC_WEAK_FUNC(sub_825C657C);
PPC_FUNC_IMPL(__imp__sub_825C657C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6580"))) PPC_WEAK_FUNC(sub_825C6580);
PPC_FUNC_IMPL(__imp__sub_825C6580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// addi r3,r9,27208
	ctx.r3.s64 = ctx.r9.s64 + 27208;
	// lhz r10,8344(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8344);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,8344(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8344, ctx.r10.u16);
	// b 0x8259e020
	sub_8259E020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C659C"))) PPC_WEAK_FUNC(sub_825C659C);
PPC_FUNC_IMPL(__imp__sub_825C659C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C65A0"))) PPC_WEAK_FUNC(sub_825C65A0);
PPC_FUNC_IMPL(__imp__sub_825C65A0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r9,r9,8344
	ctx.r9.s64 = ctx.r9.s64 + 8344;
	// addi r11,r11,-23976
	ctx.r11.s64 = ctx.r11.s64 + -23976;
	// li r10,89
	ctx.r10.s64 = 89;
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
loc_825C65B8:
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// bne cr6,0x825c65b8
	if (!ctx.cr6.eq) goto loc_825C65B8;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// addi r3,r11,27272
	ctx.r3.s64 = ctx.r11.s64 + 27272;
	// b 0x8259e020
	sub_8259E020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C65F8"))) PPC_WEAK_FUNC(sub_825C65F8);
PPC_FUNC_IMPL(__imp__sub_825C65F8) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,-7536
	ctx.r11.s64 = ctx.r11.s64 + -7536;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825c71ac
	ctx.lr = 0x825C6614;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r3,r11,27384
	ctx.r3.s64 = ctx.r11.s64 + 27384;
	// bl 0x8259e020
	ctx.lr = 0x825C6620;
	sub_8259E020(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6630"))) PPC_WEAK_FUNC(sub_825C6630);
PPC_FUNC_IMPL(__imp__sub_825C6630) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,-7504
	ctx.r11.s64 = ctx.r11.s64 + -7504;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825c71ac
	ctx.lr = 0x825C664C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r3,r11,27408
	ctx.r3.s64 = ctx.r11.s64 + 27408;
	// bl 0x8259e020
	ctx.lr = 0x825C6658;
	sub_8259E020(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6668"))) PPC_WEAK_FUNC(sub_825C6668);
PPC_FUNC_IMPL(__imp__sub_825C6668) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r11,r11,-6408
	ctx.r11.s64 = ctx.r11.s64 + -6408;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825c71ac
	ctx.lr = 0x825C6684;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// addi r3,r11,27432
	ctx.r3.s64 = ctx.r11.s64 + 27432;
	// bl 0x8259e020
	ctx.lr = 0x825C6690;
	sub_8259E020(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C66A0"))) PPC_WEAK_FUNC(sub_825C66A0);
PPC_FUNC_IMPL(__imp__sub_825C66A0) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r11,-14352
	ctx.r3.s64 = ctx.r11.s64 + -14352;
	// bl 0x8259e020
	ctx.lr = 0x825C66B8;
	sub_8259E020(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r11,-14544
	ctx.r3.s64 = ctx.r11.s64 + -14544;
	// bl 0x825aeff8
	ctx.lr = 0x825C66C4;
	sub_825AEFF8(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,-7900(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7900, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C66DC"))) PPC_WEAK_FUNC(sub_825C66DC);
PPC_FUNC_IMPL(__imp__sub_825C66DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C66E0"))) PPC_WEAK_FUNC(sub_825C66E0);
PPC_FUNC_IMPL(__imp__sub_825C66E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// addi r11,r11,-16476
	ctx.r11.s64 = ctx.r11.s64 + -16476;
	// stw r11,1728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1728, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C66F4"))) PPC_WEAK_FUNC(sub_825C66F4);
PPC_FUNC_IMPL(__imp__sub_825C66F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C66F8"))) PPC_WEAK_FUNC(sub_825C66F8);
PPC_FUNC_IMPL(__imp__sub_825C66F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C66FC"))) PPC_WEAK_FUNC(sub_825C66FC);
PPC_FUNC_IMPL(__imp__sub_825C66FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6700"))) PPC_WEAK_FUNC(sub_825C6700);
PPC_FUNC_IMPL(__imp__sub_825C6700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// addi r11,r11,-16472
	ctx.r11.s64 = ctx.r11.s64 + -16472;
	// stw r11,2144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6714"))) PPC_WEAK_FUNC(sub_825C6714);
PPC_FUNC_IMPL(__imp__sub_825C6714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6718"))) PPC_WEAK_FUNC(sub_825C6718);
PPC_FUNC_IMPL(__imp__sub_825C6718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-16476
	ctx.r11.s64 = ctx.r11.s64 + -16476;
	// stw r11,3892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3892, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C672C"))) PPC_WEAK_FUNC(sub_825C672C);
PPC_FUNC_IMPL(__imp__sub_825C672C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6730"))) PPC_WEAK_FUNC(sub_825C6730);
PPC_FUNC_IMPL(__imp__sub_825C6730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// addi r11,r11,-16476
	ctx.r11.s64 = ctx.r11.s64 + -16476;
	// stw r11,4464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4464, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6744"))) PPC_WEAK_FUNC(sub_825C6744);
PPC_FUNC_IMPL(__imp__sub_825C6744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6748"))) PPC_WEAK_FUNC(sub_825C6748);
PPC_FUNC_IMPL(__imp__sub_825C6748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,20444
	ctx.r3.s64 = ctx.r11.s64 + 20444;
	// b 0x82401918
	sub_82401918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C6758"))) PPC_WEAK_FUNC(sub_825C6758);
PPC_FUNC_IMPL(__imp__sub_825C6758) {
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
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-30396
	ctx.r31.s64 = ctx.r11.s64 + -30396;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821fe818
	ctx.lr = 0x825C677C;
	sub_821FE818(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821fe818
	ctx.lr = 0x825C6788;
	sub_821FE818(ctx, base);
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

__attribute__((alias("__imp__sub_825C679C"))) PPC_WEAK_FUNC(sub_825C679C);
PPC_FUNC_IMPL(__imp__sub_825C679C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C67A0"))) PPC_WEAK_FUNC(sub_825C67A0);
PPC_FUNC_IMPL(__imp__sub_825C67A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r3,r11,-1420
	ctx.r3.s64 = ctx.r11.s64 + -1420;
	// b 0x82152908
	sub_82152908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825C67AC"))) PPC_WEAK_FUNC(sub_825C67AC);
PPC_FUNC_IMPL(__imp__sub_825C67AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C67B0"))) PPC_WEAK_FUNC(sub_825C67B0);
PPC_FUNC_IMPL(__imp__sub_825C67B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r11,r11,-26540
	ctx.r11.s64 = ctx.r11.s64 + -26540;
	// stw r11,3944(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3944, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C67C4"))) PPC_WEAK_FUNC(sub_825C67C4);
PPC_FUNC_IMPL(__imp__sub_825C67C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C67C8"))) PPC_WEAK_FUNC(sub_825C67C8);
PPC_FUNC_IMPL(__imp__sub_825C67C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C67CC"))) PPC_WEAK_FUNC(sub_825C67CC);
PPC_FUNC_IMPL(__imp__sub_825C67CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C67D0"))) PPC_WEAK_FUNC(sub_825C67D0);
PPC_FUNC_IMPL(__imp__sub_825C67D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C67D4"))) PPC_WEAK_FUNC(sub_825C67D4);
PPC_FUNC_IMPL(__imp__sub_825C67D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C67D8"))) PPC_WEAK_FUNC(sub_825C67D8);
PPC_FUNC_IMPL(__imp__sub_825C67D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C67DC"))) PPC_WEAK_FUNC(sub_825C67DC);
PPC_FUNC_IMPL(__imp__sub_825C67DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C67E0"))) PPC_WEAK_FUNC(sub_825C67E0);
PPC_FUNC_IMPL(__imp__sub_825C67E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C67E4"))) PPC_WEAK_FUNC(sub_825C67E4);
PPC_FUNC_IMPL(__imp__sub_825C67E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C67E8"))) PPC_WEAK_FUNC(sub_825C67E8);
PPC_FUNC_IMPL(__imp__sub_825C67E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C67EC"))) PPC_WEAK_FUNC(sub_825C67EC);
PPC_FUNC_IMPL(__imp__sub_825C67EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C67F0"))) PPC_WEAK_FUNC(sub_825C67F0);
PPC_FUNC_IMPL(__imp__sub_825C67F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C67F4"))) PPC_WEAK_FUNC(sub_825C67F4);
PPC_FUNC_IMPL(__imp__sub_825C67F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C67F8"))) PPC_WEAK_FUNC(sub_825C67F8);
PPC_FUNC_IMPL(__imp__sub_825C67F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C67FC"))) PPC_WEAK_FUNC(sub_825C67FC);
PPC_FUNC_IMPL(__imp__sub_825C67FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6800"))) PPC_WEAK_FUNC(sub_825C6800);
PPC_FUNC_IMPL(__imp__sub_825C6800) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6804"))) PPC_WEAK_FUNC(sub_825C6804);
PPC_FUNC_IMPL(__imp__sub_825C6804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6808"))) PPC_WEAK_FUNC(sub_825C6808);
PPC_FUNC_IMPL(__imp__sub_825C6808) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C680C"))) PPC_WEAK_FUNC(sub_825C680C);
PPC_FUNC_IMPL(__imp__sub_825C680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6810"))) PPC_WEAK_FUNC(sub_825C6810);
PPC_FUNC_IMPL(__imp__sub_825C6810) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6814"))) PPC_WEAK_FUNC(sub_825C6814);
PPC_FUNC_IMPL(__imp__sub_825C6814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6818"))) PPC_WEAK_FUNC(sub_825C6818);
PPC_FUNC_IMPL(__imp__sub_825C6818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C681C"))) PPC_WEAK_FUNC(sub_825C681C);
PPC_FUNC_IMPL(__imp__sub_825C681C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6820"))) PPC_WEAK_FUNC(sub_825C6820);
PPC_FUNC_IMPL(__imp__sub_825C6820) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6824"))) PPC_WEAK_FUNC(sub_825C6824);
PPC_FUNC_IMPL(__imp__sub_825C6824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6828"))) PPC_WEAK_FUNC(sub_825C6828);
PPC_FUNC_IMPL(__imp__sub_825C6828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C682C"))) PPC_WEAK_FUNC(sub_825C682C);
PPC_FUNC_IMPL(__imp__sub_825C682C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6830"))) PPC_WEAK_FUNC(sub_825C6830);
PPC_FUNC_IMPL(__imp__sub_825C6830) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6834"))) PPC_WEAK_FUNC(sub_825C6834);
PPC_FUNC_IMPL(__imp__sub_825C6834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6838"))) PPC_WEAK_FUNC(sub_825C6838);
PPC_FUNC_IMPL(__imp__sub_825C6838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C683C"))) PPC_WEAK_FUNC(sub_825C683C);
PPC_FUNC_IMPL(__imp__sub_825C683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6840"))) PPC_WEAK_FUNC(sub_825C6840);
PPC_FUNC_IMPL(__imp__sub_825C6840) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6844"))) PPC_WEAK_FUNC(sub_825C6844);
PPC_FUNC_IMPL(__imp__sub_825C6844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6848"))) PPC_WEAK_FUNC(sub_825C6848);
PPC_FUNC_IMPL(__imp__sub_825C6848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C684C"))) PPC_WEAK_FUNC(sub_825C684C);
PPC_FUNC_IMPL(__imp__sub_825C684C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6850"))) PPC_WEAK_FUNC(sub_825C6850);
PPC_FUNC_IMPL(__imp__sub_825C6850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6854"))) PPC_WEAK_FUNC(sub_825C6854);
PPC_FUNC_IMPL(__imp__sub_825C6854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6858"))) PPC_WEAK_FUNC(sub_825C6858);
PPC_FUNC_IMPL(__imp__sub_825C6858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r11,r11,-26604
	ctx.r11.s64 = ctx.r11.s64 + -26604;
	// stw r11,4520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C686C"))) PPC_WEAK_FUNC(sub_825C686C);
PPC_FUNC_IMPL(__imp__sub_825C686C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6870"))) PPC_WEAK_FUNC(sub_825C6870);
PPC_FUNC_IMPL(__imp__sub_825C6870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r11,r11,-26604
	ctx.r11.s64 = ctx.r11.s64 + -26604;
	// stw r11,4528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4528, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6884"))) PPC_WEAK_FUNC(sub_825C6884);
PPC_FUNC_IMPL(__imp__sub_825C6884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6888"))) PPC_WEAK_FUNC(sub_825C6888);
PPC_FUNC_IMPL(__imp__sub_825C6888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C688C"))) PPC_WEAK_FUNC(sub_825C688C);
PPC_FUNC_IMPL(__imp__sub_825C688C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6890"))) PPC_WEAK_FUNC(sub_825C6890);
PPC_FUNC_IMPL(__imp__sub_825C6890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C6894"))) PPC_WEAK_FUNC(sub_825C6894);
PPC_FUNC_IMPL(__imp__sub_825C6894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C6898"))) PPC_WEAK_FUNC(sub_825C6898);
PPC_FUNC_IMPL(__imp__sub_825C6898) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}


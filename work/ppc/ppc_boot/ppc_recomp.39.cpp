#include "graphics_dispatch.h"
#include "ppc_recomp_shared.h"
__attribute__((alias("__imp__sub_822FB290"))) PPC_WEAK_FUNC(sub_822FB290);
__attribute__((alias("__imp__sub_822FB958"))) PPC_WEAK_FUNC(sub_822FB958);
__attribute__((alias("__imp__sub_823011C8"))) PPC_WEAK_FUNC(sub_823011C8);
__attribute__((alias("__imp__sub_82301460"))) PPC_WEAK_FUNC(sub_82301460);
__attribute__((alias("__imp__sub_82301558"))) PPC_WEAK_FUNC(sub_82301558);
__attribute__((alias("__imp__sub_82301AC8"))) PPC_WEAK_FUNC(sub_82301AC8);
__attribute__((alias("__imp__sub_82301CC0"))) PPC_WEAK_FUNC(sub_82301CC0);
__attribute__((alias("__imp__sub_82301F00"))) PPC_WEAK_FUNC(sub_82301F00);
__attribute__((alias("__imp__sub_82302EF8"))) PPC_WEAK_FUNC(sub_82302EF8);
__attribute__((alias("__imp__sub_82303028"))) PPC_WEAK_FUNC(sub_82303028);
__attribute__((alias("__imp__sub_82304F18"))) PPC_WEAK_FUNC(sub_82304F18);
__attribute__((alias("__imp__sub_82305378"))) PPC_WEAK_FUNC(sub_82305378);
__attribute__((alias("__imp__sub_823056D8"))) PPC_WEAK_FUNC(sub_823056D8);
__attribute__((alias("__imp__sub_82305918"))) PPC_WEAK_FUNC(sub_82305918);
__attribute__((alias("__imp__sub_823143A0"))) PPC_WEAK_FUNC(sub_823143A0);
__attribute__((alias("__imp__sub_82314788"))) PPC_WEAK_FUNC(sub_82314788);
__attribute__((alias("__imp__sub_823147E8"))) PPC_WEAK_FUNC(sub_823147E8);
__attribute__((alias("__imp__sub_82314B10"))) PPC_WEAK_FUNC(sub_82314B10);
__attribute__((alias("__imp__sub_82316F78"))) PPC_WEAK_FUNC(sub_82316F78);
__attribute__((alias("__imp__sub_823176E0"))) PPC_WEAK_FUNC(sub_823176E0);
__attribute__((alias("__imp__sub_82317748"))) PPC_WEAK_FUNC(sub_82317748);
__attribute__((alias("__imp__sub_8231C690"))) PPC_WEAK_FUNC(sub_8231C690);
PPC_FUNC_IMPL(__imp__sub_822FB290) {
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
	// bl 0x822e6a78
	ctx.lr = 0x822FB2A8;
	sub_822E6A78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
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
PPC_FUNC_IMPL(__imp__sub_822FB958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822FB960;
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
	// bl 0x822e6a78
	ctx.lr = 0x822FB974;
	sub_822E6A78(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// lwz r9,11896(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11896);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lwz r8,11892(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11892);
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// bl 0x8232da90
	ctx.lr = 0x822FB998;
	sub_8232DA90(ctx, base);
	// ld r3,15408(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 15408);
	// std r3,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r3.u64);
	// bl 0x822ef408
	ctx.lr = 0x822FB9A4;
	sub_822EF408(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r29.u8);
	// addi r5,r3,96
	ctx.r5.s64 = ctx.r3.s64 + 96;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f13,18292(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18292);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stb r7,111(r31)
	PPC_STORE_U8(ctx.r31.u32 + 111, ctx.r7.u8);
	// lfs f13,11268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11268);
	ctx.f13.f64 = double(temp.f32);
	// stb r6,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r6.u8);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_823011C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x823011D0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,604(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 604);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82301208
	if (ctx.cr6.eq) goto loc_82301208;
loc_823011F0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4736);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82301208:
	// lwz r9,2664(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2664);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r8,12894(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12894);
	// rlwinm r7,r8,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82301224
	if (!ctx.cr6.eq) goto loc_82301224;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82301224:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r11,17304
	ctx.r28.s64 = ctx.r11.s64 + 17304;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f31,-27244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27244);
	ctx.f31.f64 = double(temp.f32);
	// lfs f13,216(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8230129c
	if (ctx.cr6.eq) goto loc_8230129C;
	// lbz r4,12893(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12893);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r3,r4,0,27,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230125c
	if (!ctx.cr6.eq) goto loc_8230125C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230125C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230129c
	if (!ctx.cr6.eq) goto loc_8230129C;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f12,4504(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4504);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x82301288
	if (ctx.cr6.gt) goto loc_82301288;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82301288:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8230129c
	if (ctx.cr6.eq) goto loc_8230129C;
	// fadds f11,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_8230129C:
	// lwz r7,2664(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2664);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r6,12894(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 12894);
	// rlwinm r5,r6,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823012b8
	if (!ctx.cr6.eq) goto loc_823012B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823012B8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823012d4
	if (ctx.cr6.eq) goto loc_823012D4;
	// lbz r11,4524(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823012d8
	if (!ctx.cr6.eq) goto loc_823012D8;
loc_823012D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823012D8:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lis r29,-32255
	ctx.r29.s64 = -2113863680;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8230133c
	if (ctx.cr6.eq) goto loc_8230133C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,4520(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4520);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x8230133c
	if (!ctx.cr6.lt) goto loc_8230133C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f9,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-1612(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1612);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f8,4504(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4504);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// bgt cr6,0x82301324
	if (ctx.cr6.gt) goto loc_82301324;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82301324:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8230133c
	if (ctx.cr6.eq) goto loc_8230133C;
	// lfs f13,-1648(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -1648);
	ctx.f13.f64 = double(temp.f32);
	// fadds f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f7,68(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_8230133C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82243b50
	ctx.lr = 0x82301344;
	sub_82243B50(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lfs f13,216(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823013c0
	if (ctx.cr6.eq) goto loc_823013C0;
	// lwz r10,516(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r4,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,-4788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4788);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// blt cr6,0x823011f0
	if (ctx.cr6.lt) goto loc_823011F0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f5,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,-15148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15148);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fadds f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f4,4504(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4504);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f4,f13
	ctx.cr6.compare(ctx.f4.f64, ctx.f13.f64);
	// bgt cr6,0x823013ac
	if (ctx.cr6.gt) goto loc_823013AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823013AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823013c0
	if (ctx.cr6.eq) goto loc_823013C0;
	// fadds f3,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f3,68(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_823013C0:
	// lfs f2,4504(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4504);
	ctx.f2.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bgt cr6,0x823013d4
	if (ctx.cr6.gt) goto loc_823013D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823013D4:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,-1648(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -1648);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfd f13,9912(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9912);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,-1632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1632);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// beq cr6,0x8230142c
	if (ctx.cr6.eq) goto loc_8230142C;
	// lfs f1,188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f10,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f0,f9,f13,f0
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f13,9920(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9920);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f7,f8,f12,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f7,68(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8230142C:
	// lfs f6,188(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f5,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f0,f4,f13,f0
	ctx.f0.f64 = ctx.f4.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f13,9920(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9920);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f2,f3,f12,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f2,68(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82301460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82301468;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,19660(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19660);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8230148c
	if (!ctx.cr6.eq) goto loc_8230148C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230148C:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8230154c
	if (ctx.cr6.eq) goto loc_8230154C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-1608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1608);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,68(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 68, temp.u32);
	// lfs f12,4504(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4504);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,17520(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17520);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x823014c8
	if (ctx.cr6.gt) goto loc_823014C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823014C8:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823014e4
	if (ctx.cr6.eq) goto loc_823014E4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,13356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13356);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,68(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 68, temp.u32);
loc_823014E4:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r4,34
	ctx.r4.s64 = 2228224;
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// ori r3,r4,37004
	ctx.r3.u64 = ctx.r4.u64 | 37004;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r11,r29,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230154c
	if (!ctx.cr6.gt) goto loc_8230154C;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r31,r11,-11424
	ctx.r31.s64 = ctx.r11.s64 + -11424;
loc_82301514:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82301530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r8,r9,37004
	ctx.r8.u64 = ctx.r9.u64 | 37004;
	// addi r31,r31,11920
	ctx.r31.s64 = ctx.r31.s64 + 11920;
	// lwzx r11,r29,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82301514
	if (ctx.cr6.lt) goto loc_82301514;
loc_8230154C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82301558) {
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
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x82301590;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x823015A8;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x823015C0;
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
	ctx.lr = 0x823015D8;
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
	ctx.lr = 0x823015F0;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x82301608;
	sub_820BF2D8(ctx, base);
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r10,r11,36928
	ctx.r10.u64 = ctx.r11.u64 | 36928;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82301624
	if (!ctx.cr6.eq) goto loc_82301624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82347cb0
	ctx.lr = 0x82301624;
	sub_82347CB0(ctx, base);
loc_82301624:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-12851
	ctx.r10.s64 = -842203136;
	// addi r4,r11,17148
	ctx.r4.s64 = ctx.r11.s64 + 17148;
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// ori r10,r10,52685
	ctx.r10.u64 = ctx.r10.u64 | 52685;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820d5a38
	ctx.lr = 0x82301654;
	sub_820D5A38(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8230166C;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x82301684;
	sub_820BF2D8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addis r8,r30,6
	ctx.r8.s64 = ctx.r30.s64 + 393216;
	// addi r4,r11,19836
	ctx.r4.s64 = ctx.r11.s64 + 19836;
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// lis r10,-12851
	ctx.r10.s64 = -842203136;
	// li r9,32128
	ctx.r9.s64 = 32128;
	// ori r10,r10,52685
	ctx.r10.u64 = ctx.r10.u64 | 52685;
	// addi r8,r8,-368
	ctx.r8.s64 = ctx.r8.s64 + -368;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820d5a38
	ctx.lr = 0x823016B8;
	sub_820D5A38(ctx, base);
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
PPC_FUNC_IMPL(__imp__sub_82301AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82301AD0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r11,r29,752
	ctx.r11.s64 = ctx.r29.s64 + 752;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82301afc
	if (ctx.cr6.lt) goto loc_82301AFC;
	// addi r10,r29,5264
	ctx.r10.s64 = ctx.r29.s64 + 5264;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82301b00
	if (!ctx.cr6.gt) goto loc_82301B00;
loc_82301AFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82301B00:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82301b20
	if (ctx.cr6.eq) goto loc_82301B20;
	// lwz r7,52(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lfs f1,68(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82301B20:
	// addi r30,r28,40
	ctx.r30.s64 = ctx.r28.s64 + 40;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82301b54
	if (ctx.cr6.eq) goto loc_82301B54;
loc_82301B38:
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82301ac8
	ctx.lr = 0x82301B48;
	sub_82301AC8(ctx, base);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// bne cr6,0x82301b38
	if (!ctx.cr6.eq) goto loc_82301B38;
loc_82301B54:
	// lwz r6,52(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stfs f31,0(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82301CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82301CC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,5408(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82301d50
	if (!ctx.cr6.gt) goto loc_82301D50;
	// addi r10,r28,832
	ctx.r10.s64 = ctx.r28.s64 + 832;
loc_82301CE8:
	// lbz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82301d10
	if (!ctx.cr6.eq) goto loc_82301D10;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82301d10
	if (ctx.cr6.eq) goto loc_82301D10;
	// lbz r7,14(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82301d14
	if (ctx.cr6.eq) goto loc_82301D14;
loc_82301D10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82301D14:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82301d3c
	if (ctx.cr6.eq) goto loc_82301D3C;
	// addi r29,r10,-80
	ctx.r29.s64 = ctx.r10.s64 + -80;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82301d3c
	if (ctx.cr6.eq) goto loc_82301D3C;
	// lwz r4,80(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82301d5c
	if (ctx.cr6.eq) goto loc_82301D5C;
loc_82301D3C:
	// lwz r11,5408(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5408);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82301ce8
	if (ctx.cr6.lt) goto loc_82301CE8;
loc_82301D50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82301D5C:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// ori r9,r10,37004
	ctx.r9.u64 = ctx.r10.u64 | 37004;
	// lwzx r30,r11,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82301db4
	if (!ctx.cr6.gt) goto loc_82301DB4;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r31,r11,-11424
	ctx.r31.s64 = ctx.r11.s64 + -11424;
loc_82301D88:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82301DA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,11920
	ctx.r31.s64 = ctx.r31.s64 + 11920;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82301d88
	if (!ctx.cr6.eq) goto loc_82301D88;
loc_82301DB4:
	// lbz r6,76(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 76);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82301df8
	if (!ctx.cr6.eq) goto loc_82301DF8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8234b730
	ctx.lr = 0x82301DCC;
	sub_8234B730(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r5,77(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 77);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 68, temp.u32);
	// stb r4,76(r29)
	PPC_STORE_U8(ctx.r29.u32 + 76, ctx.r4.u8);
	// beq cr6,0x82301df8
	if (ctx.cr6.eq) goto loc_82301DF8;
	// lwz r11,5424(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5424);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,5424(r28)
	PPC_STORE_U32(ctx.r28.u32 + 5424, ctx.r3.u32);
loc_82301DF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82301F00) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,28544
	ctx.r31.s64 = ctx.r11.s64 + 28544;
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// li r9,4608
	ctx.r9.s64 = 4608;
	// ori r10,r11,36928
	ctx.r10.u64 = ctx.r11.u64 | 36928;
	// addi r8,r30,752
	ctx.r8.s64 = ctx.r30.s64 + 752;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lis r10,-12851
	ctx.r10.s64 = -842203136;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ori r10,r10,52685
	ctx.r10.u64 = ctx.r10.u64 | 52685;
	// addi r4,r11,3984
	ctx.r4.s64 = ctx.r11.s64 + 3984;
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bne cr6,0x82301fd8
	if (!ctx.cr6.eq) goto loc_82301FD8;
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// bl 0x820d5a38
	ctx.lr = 0x82301F68;
	sub_820D5A38(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r7,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// bl 0x820bf2d8
	ctx.lr = 0x82301FBC;
	sub_820BF2D8(ctx, base);
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x82301FD4;
	sub_820BF2D8(ctx, base);
	// b 0x82302028
	goto loc_82302028;
loc_82301FD8:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// bl 0x820d5a38
	ctx.lr = 0x82301FE0;
	sub_820D5A38(ctx, base);
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x82301FF8;
	sub_820BF2D8(ctx, base);
	// addis r11,r31,35
	ctx.r11.s64 = ctx.r31.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x82302010;
	sub_820BF2D8(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,52(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// bl 0x8234dd70
	ctx.lr = 0x82302028;
	sub_8234DD70(ctx, base);
loc_82302028:
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
PPC_FUNC_IMPL(__imp__sub_82302EF8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82302F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82302f38
	if (!ctx.cr6.eq) goto loc_82302F38;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82302F38:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82302f4c
	if (!ctx.cr6.eq) goto loc_82302F4C;
loc_82302F44:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230300c
	goto loc_8230300C;
loc_82302F4C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82302f68
	if (ctx.cr6.eq) goto loc_82302F68;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82302fc8
	if (ctx.cr6.eq) goto loc_82302FC8;
	// cmpwi cr6,r11,56
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 56, ctx.xer);
	// bne cr6,0x82303008
	if (!ctx.cr6.eq) goto loc_82303008;
loc_82302F68:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82302F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82302f8c
	if (!ctx.cr6.eq) goto loc_82302F8C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82302F8C:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82302f44
	if (ctx.cr6.eq) goto loc_82302F44;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r5,30720
	ctx.r5.s64 = 30720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,7744(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7744);
	// addi r4,r11,6144
	ctx.r4.s64 = ctx.r11.s64 + 6144;
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82302FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
loc_82302FC8:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82302FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82302fec
	if (!ctx.cr6.eq) goto loc_82302FEC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82302FEC:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82302f44
	if (ctx.cr6.eq) goto loc_82302F44;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822d71c8
	ctx.lr = 0x82303000;
	sub_822D71C8(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r5,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r5.u32);
loc_82303008:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8230300C:
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
PPC_FUNC_IMPL(__imp__sub_82303028) {
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
	// lwz r7,276(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 276);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8230306C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r6,37(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// beq cr6,0x8230329c
	if (ctx.cr6.eq) goto loc_8230329C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,8880
	ctx.r3.s64 = ctx.r11.s64 + 8880;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r5,r9,-2
	ctx.r5.s64 = ctx.r9.s64 + -2;
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// bl 0x822e35c0
	ctx.lr = 0x823030B4;
	sub_822E35C0(ctx, base);
	// li r4,25
	ctx.r4.s64 = 25;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822efbc0
	ctx.lr = 0x823030C0;
	sub_822EFBC0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x822d4dc0
	ctx.lr = 0x823030DC;
	sub_822D4DC0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4dc0
	ctx.lr = 0x823030FC;
	sub_822D4DC0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fsubs f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x822d46b0
	ctx.lr = 0x8230311C;
	sub_822D46B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// beq cr6,0x8230312c
	if (ctx.cr6.eq) goto loc_8230312C;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8230312C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82303160
	if (ctx.cr6.eq) goto loc_82303160;
	// lis r7,-27127
	ctx.r7.s64 = -1777795072;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lis r5,-17864
	ctx.r5.s64 = -1170735104;
	// ori r6,r7,40895
	ctx.r6.u64 = ctx.r7.u64 | 40895;
	// ori r4,r5,58938
	ctx.r4.u64 = ctx.r5.u64 | 58938;
	// li r7,2
	ctx.r7.s64 = 2;
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// cmpld cr6,r10,r6
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r6.u64, ctx.xer);
	// beq cr6,0x82303164
	if (ctx.cr6.eq) goto loc_82303164;
loc_82303160:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82303164:
	// lwz r4,11900(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11900);
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bne cr6,0x8230318c
	if (!ctx.cr6.eq) goto loc_8230318C;
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// addi r3,r11,32208
	ctx.r3.s64 = ctx.r11.s64 + 32208;
	// bl 0x820b4b78
	ctx.lr = 0x8230317C;
	sub_820B4B78(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822efbc0
	ctx.lr = 0x82303188;
	sub_822EFBC0(ctx, base);
	// b 0x8230329c
	goto loc_8230329C;
loc_8230318C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,7920
	ctx.r11.s64 = ctx.r11.s64 + 7920;
	// addi r9,r10,17352
	ctx.r9.s64 = ctx.r10.s64 + 17352;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// lfs f0,-16(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4824(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4824);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x823031d8
	if (ctx.cr6.eq) goto loc_823031D8;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x823031c8
	if (ctx.cr6.gt) goto loc_823031C8;
	// bso cr6,0x823031c8
	if (ctx.cr6.so) goto loc_823031C8;
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// blt cr6,0x823031c8
	if (ctx.cr6.lt) goto loc_823031C8;
	// li r10,1
	ctx.r10.s64 = 1;
	// bns cr6,0x823031cc
	if (!ctx.cr6.so) goto loc_823031CC;
loc_823031C8:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_823031CC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82303294
	if (!ctx.cr6.eq) goto loc_82303294;
loc_823031D8:
	// cmpwi cr6,r4,25
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 25, ctx.xer);
	// beq cr6,0x8230329c
	if (ctx.cr6.eq) goto loc_8230329C;
	// li r6,25
	ctx.r6.s64 = 25;
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// stw r4,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r4.u32);
	// stw r8,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r8.u32);
	// stw r7,464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 464, ctx.r7.u32);
	// stw r6,440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 440, ctx.r6.u32);
	// bgt cr6,0x82303210
	if (ctx.cr6.gt) goto loc_82303210;
	// bso cr6,0x82303210
	if (ctx.cr6.so) goto loc_82303210;
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// blt cr6,0x82303210
	if (ctx.cr6.lt) goto loc_82303210;
	// li r10,1
	ctx.r10.s64 = 1;
	// bns cr6,0x82303214
	if (!ctx.cr6.so) goto loc_82303214;
loc_82303210:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82303214:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82303224
	if (ctx.cr6.eq) goto loc_82303224;
	// lfs f31,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
loc_82303224:
	// stfs f31,428(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 428, temp.u32);
	// stb r30,468(r11)
	PPC_STORE_U8(ctx.r11.u32 + 468, ctx.r30.u8);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x82303264
	if (ctx.cr6.lt) goto loc_82303264;
	// beq cr6,0x82303254
	if (ctx.cr6.eq) goto loc_82303254;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bge cr6,0x82303270
	if (!ctx.cr6.lt) goto loc_82303270;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,424(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 424, temp.u32);
	// stfs f0,432(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 432, temp.u32);
	// b 0x82303270
	goto loc_82303270;
loc_82303254:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,11876(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11876);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,424(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 424, temp.u32);
	// b 0x82303270
	goto loc_82303270;
loc_82303264:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f13,11872(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11872);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,424(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 424, temp.u32);
loc_82303270:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r12,-513
	ctx.r12.s64 = -33619968;
	// lfs f12,424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,436(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 436, temp.u32);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// ld r9,11856(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11856);
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// std r8,11856(r10)
	PPC_STORE_U64(ctx.r10.u32 + 11856, ctx.r8.u64);
	// lwz r4,456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 456);
loc_82303294:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822ef9d0
	ctx.lr = 0x8230329C;
	sub_822EF9D0(ctx, base);
loc_8230329C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823032c0
	if (ctx.cr6.eq) goto loc_823032C0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823032B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_823032C0:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// lwz r6,11892(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11892);
	// addi r10,r11,-28496
	ctx.r10.s64 = ctx.r11.s64 + -28496;
	// mulli r11,r6,19200
	ctx.r11.s64 = ctx.r6.s64 * 19200;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820ed7a0
	ctx.lr = 0x823032E8;
	sub_820ED7A0(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
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
PPC_FUNC_IMPL(__imp__sub_82304F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82304F20;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,3280
	ctx.r3.s64 = ctx.r31.s64 + 3280;
	// bl 0x822f65b8
	ctx.lr = 0x82304F3C;
	sub_822F65B8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,3056
	ctx.r3.s64 = ctx.r31.s64 + 3056;
	// bl 0x822f65b8
	ctx.lr = 0x82304F4C;
	sub_822F65B8(ctx, base);
	// addi r3,r31,3504
	ctx.r3.s64 = ctx.r31.s64 + 3504;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82304F64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,3648
	ctx.r3.s64 = ctx.r31.s64 + 3648;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82304F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,3904
	ctx.r3.s64 = ctx.r31.s64 + 3904;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82304F94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4080
	ctx.r3.s64 = ctx.r31.s64 + 4080;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82304FAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4512
	ctx.r3.s64 = ctx.r31.s64 + 4512;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82304FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4768
	ctx.r3.s64 = ctx.r31.s64 + 4768;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82304FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,5040
	ctx.r3.s64 = ctx.r31.s64 + 5040;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82304FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,5184
	ctx.r3.s64 = ctx.r31.s64 + 5184;
	// bl 0x822fb958
	ctx.lr = 0x82305004;
	sub_822FB958(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,5328
	ctx.r3.s64 = ctx.r31.s64 + 5328;
	// bl 0x822fb958
	ctx.lr = 0x82305014;
	sub_822FB958(ctx, base);
	// addi r30,r31,5472
	ctx.r30.s64 = ctx.r31.s64 + 5472;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e6a78
	ctx.lr = 0x82305024;
	sub_822E6A78(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r27,r11,28544
	ctx.r27.s64 = ctx.r11.s64 + 28544;
	// stb r28,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r28.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r28,68(r30)
	PPC_STORE_U8(ctx.r30.u32 + 68, ctx.r28.u8);
	// lwz r4,11896(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 11896);
	// stw r4,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r4.u32);
	// bl 0x8232da90
	ctx.lr = 0x8230504C;
	sub_8232DA90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ld r3,15408(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 15408);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r28,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r28.u32);
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// std r3,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r3.u64);
	// stfs f31,72(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// stw r26,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r26.u32);
	// bl 0x822ef408
	ctx.lr = 0x82305070;
	sub_822EF408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r31,5568
	ctx.r29.s64 = ctx.r31.s64 + 5568;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x822e6a78
	ctx.lr = 0x82305088;
	sub_822E6A78(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r28,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r28.u8);
	// stb r26,68(r29)
	PPC_STORE_U8(ctx.r29.u32 + 68, ctx.r26.u8);
	// lwz r4,11896(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11896);
	// stw r4,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r4.u32);
	// bl 0x8232da90
	ctx.lr = 0x823050A4;
	sub_8232DA90(ctx, base);
	// ld r10,15408(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 15408);
	// stfs f31,72(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 72, temp.u32);
	// stw r28,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r28.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r28,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r28.u32);
	// std r10,48(r29)
	PPC_STORE_U64(ctx.r29.u32 + 48, ctx.r10.u64);
	// bl 0x822ef408
	ctx.lr = 0x823050C0;
	sub_822EF408(ctx, base);
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// addi r11,r31,5664
	ctx.r11.s64 = ctx.r31.s64 + 5664;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r9,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823050E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,5744
	ctx.r3.s64 = ctx.r31.s64 + 5744;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823050FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,5968
	ctx.r3.s64 = ctx.r31.s64 + 5968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82305114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,6240
	ctx.r3.s64 = ctx.r31.s64 + 6240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8230512C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,6320
	ctx.r3.s64 = ctx.r31.s64 + 6320;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82305144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,6848
	ctx.r3.s64 = ctx.r31.s64 + 6848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230515C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,6944
	ctx.r3.s64 = ctx.r31.s64 + 6944;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82305174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,7104
	ctx.r3.s64 = ctx.r31.s64 + 7104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8230518C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,7248
	ctx.r3.s64 = ctx.r31.s64 + 7248;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823051A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,7392
	ctx.r3.s64 = ctx.r31.s64 + 7392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823051BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r31,7920
	ctx.r30.s64 = ctx.r31.s64 + 7920;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e6a78
	ctx.lr = 0x823051CC;
	sub_822E6A78(ctx, base);
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r29,r31,8400
	ctx.r29.s64 = ctx.r31.s64 + 8400;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 456, ctx.r9.u32);
	// stfs f31,352(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 352, temp.u32);
	// stfs f31,356(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 356, temp.u32);
	// stfs f31,360(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 360, temp.u32);
	// stb r28,468(r30)
	PPC_STORE_U8(ctx.r30.u32 + 468, ctx.r28.u8);
	// bl 0x822e6a78
	ctx.lr = 0x823051F4;
	sub_822E6A78(ctx, base);
	// li r8,24
	ctx.r8.s64 = 24;
	// addi r3,r31,8880
	ctx.r3.s64 = ctx.r31.s64 + 8880;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r8,456(r29)
	PPC_STORE_U32(ctx.r29.u32 + 456, ctx.r8.u32);
	// stfs f31,352(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 352, temp.u32);
	// stfs f31,356(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 356, temp.u32);
	// stfs f31,360(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 360, temp.u32);
	// stb r28,468(r29)
	PPC_STORE_U8(ctx.r29.u32 + 468, ctx.r28.u8);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82305224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,8908
	ctx.r3.s64 = ctx.r31.s64 + 8908;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230523C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,8936
	ctx.r3.s64 = ctx.r31.s64 + 8936;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82305254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,8964
	ctx.r3.s64 = ctx.r31.s64 + 8964;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8230526C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,8992
	ctx.r3.s64 = ctx.r31.s64 + 8992;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82305284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,9184
	ctx.r3.s64 = ctx.r31.s64 + 9184;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8230529C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,9616
	ctx.r3.s64 = ctx.r31.s64 + 9616;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823052B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,10048
	ctx.r3.s64 = ctx.r31.s64 + 10048;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823052CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,10336
	ctx.r3.s64 = ctx.r31.s64 + 10336;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823052E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,10624
	ctx.r3.s64 = ctx.r31.s64 + 10624;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823052FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r31,9020
	ctx.r30.s64 = ctx.r31.s64 + 9020;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e6a78
	ctx.lr = 0x8230530C;
	sub_822E6A78(ctx, base);
	// li r8,32
	ctx.r8.s64 = 32;
	// li r27,2
	ctx.r27.s64 = 2;
	// stfs f31,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// addi r29,r31,9072
	ctx.r29.s64 = ctx.r31.s64 + 9072;
	// stw r28,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r8,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r8.u32);
	// stw r27,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r27.u32);
	// bl 0x822e6a78
	ctx.lr = 0x82305334;
	sub_822E6A78(ctx, base);
	// li r7,33
	ctx.r7.s64 = 33;
	// stfs f31,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// addi r30,r31,9124
	ctx.r30.s64 = ctx.r31.s64 + 9124;
	// stw r27,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r7.u32);
	// bl 0x822e6a78
	ctx.lr = 0x82305358;
	sub_822E6A78(ctx, base);
	// li r6,34
	ctx.r6.s64 = 34;
	// stfs f31,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// stw r27,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r27.u32);
	// stw r28,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r28.u32);
	// stw r6,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82305378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x82305380;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r26,r11,7748
	ctx.r26.s64 = ctx.r11.s64 + 7748;
	// stfs f31,11876(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11876, temp.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stfs f31,11872(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11872, temp.u32);
	// stw r27,11864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11864, ctx.r27.u32);
	// stb r11,4(r26)
	PPC_STORE_U8(ctx.r26.u32 + 4, ctx.r11.u8);
	// stb r11,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r11.u8);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stfs f31,11884(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11884, temp.u32);
	// std r27,11856(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11856, ctx.r27.u64);
	// addi r28,r11,28544
	ctx.r28.s64 = ctx.r11.s64 + 28544;
	// stfs f31,11880(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11880, temp.u32);
	// lis r11,37
	ctx.r11.s64 = 2424832;
	// ori r10,r11,49146
	ctx.r10.u64 = ctx.r11.u64 | 49146;
	// lbzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82305420
	if (!ctx.cr6.eq) goto loc_82305420;
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// ori r7,r8,49147
	ctx.r7.u64 = ctx.r8.u64 | 49147;
	// lbzx r6,r28,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82305420
	if (!ctx.cr6.eq) goto loc_82305420;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r5,11892(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// li r11,9
	ctx.r11.s64 = 9;
	// lbzx r3,r5,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82305424
	if (!ctx.cr6.eq) goto loc_82305424;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82305424
	goto loc_82305424;
loc_82305420:
	// li r11,9
	ctx.r11.s64 = 9;
loc_82305424:
	// stw r11,11904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11904, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,11900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11900, ctx.r11.u32);
	// addis r11,r28,35
	ctx.r11.s64 = ctx.r28.s64 + 2293760;
	// lwz r10,11892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// addi r11,r11,-13016
	ctx.r11.s64 = ctx.r11.s64 + -13016;
	// mulli r9,r10,19200
	ctx.r9.s64 = ctx.r10.s64 * 19200;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// stw r7,11896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11896, ctx.r7.u32);
	// bl 0x82304f18
	ctx.lr = 0x82305450;
	sub_82304F18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9d48
	ctx.lr = 0x82305458;
	sub_822D9D48(ctx, base);
	// addi r11,r31,932
	ctx.r11.s64 = ctx.r31.s64 + 932;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// lfs f30,2868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82305494
	if (!ctx.cr6.eq) goto loc_82305494;
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stfs f30,24(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stfs f30,20(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stb r29,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r29.u8);
loc_82305494:
	// lwz r5,11892(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// addi r30,r31,2736
	ctx.r30.s64 = ctx.r31.s64 + 2736;
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r6,r31,2816
	ctx.r6.s64 = ctx.r31.s64 + 2816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,12656
	ctx.r3.s64 = ctx.r11.s64 + 12656;
	// li r4,2
	ctx.r4.s64 = 2;
	// beq cr6,0x823054bc
	if (ctx.cr6.eq) goto loc_823054BC;
	// li r4,3
	ctx.r4.s64 = 3;
loc_823054BC:
	// bl 0x82142b00
	ctx.lr = 0x823054C0;
	sub_82142B00(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,3148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfs f0,2752(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2752, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823054E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r29,11913(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11913, ctx.r29.u8);
	// stb r29,11911(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11911, ctx.r29.u8);
	// stb r27,11914(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11914, ctx.r27.u8);
	// stb r29,11916(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11916, ctx.r29.u8);
	// stb r27,11917(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11917, ctx.r27.u8);
	// lfs f31,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f31,11888(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11888, temp.u32);
	// stb r29,11915(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11915, ctx.r29.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230554c
	if (ctx.cr6.eq) goto loc_8230554C;
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r8,-17864
	ctx.r8.s64 = -1170735104;
	// ori r9,r10,14497
	ctx.r9.u64 = ctx.r10.u64 | 14497;
	// ori r7,r8,59100
	ctx.r7.u64 = ctx.r8.u64 | 59100;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x8230554c
	if (!ctx.cr6.eq) goto loc_8230554C;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230554C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8230554C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230558c
	if (ctx.cr6.eq) goto loc_8230558C;
	// lis r10,-27127
	ctx.r10.s64 = -1777795072;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r8,-17864
	ctx.r8.s64 = -1170735104;
	// ori r9,r10,40895
	ctx.r9.u64 = ctx.r10.u64 | 40895;
	// ori r7,r8,58938
	ctx.r7.u64 = ctx.r8.u64 | 58938;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x8230558c
	if (!ctx.cr6.eq) goto loc_8230558C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8230558c
	if (!ctx.cr6.eq) goto loc_8230558C;
	// addi r3,r31,864
	ctx.r3.s64 = ctx.r31.s64 + 864;
	// bl 0x822eb400
	ctx.lr = 0x8230558C;
	sub_822EB400(ctx, base);
loc_8230558C:
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r11,20592
	ctx.r11.s64 = ctx.r11.s64 + 20592;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r10,20608
	ctx.r9.s64 = ctx.r10.s64 + 20608;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r31,1312
	ctx.r5.s64 = ctx.r31.s64 + 1312;
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lis r8,-32085
	ctx.r8.s64 = -2102722560;
	// ld r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r4,r11,20624
	ctx.r4.s64 = ctx.r11.s64 + 20624;
	// addi r7,r8,8192
	ctx.r7.s64 = ctx.r8.s64 + 8192;
	// ld r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// ld r24,8(r3)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r3,r5,16
	ctx.r3.s64 = ctx.r5.s64 + 16;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// std r26,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r26.u64);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// addi r29,r5,48
	ctx.r29.s64 = ctx.r5.s64 + 48;
	// ld r23,0(r30)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r11,r31,1360
	ctx.r11.s64 = ctx.r31.s64 + 1360;
	// ld r22,8(r30)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r30,r5,32
	ctx.r30.s64 = ctx.r5.s64 + 32;
	// addi r6,r31,1392
	ctx.r6.s64 = ctx.r31.s64 + 1392;
	// addi r7,r31,1376
	ctx.r7.s64 = ctx.r31.s64 + 1376;
	// std r10,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r3,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r3.u64);
	// ld r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
	// ld r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r9,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r9.u64);
	// ld r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lis r4,33
	ctx.r4.s64 = 2162688;
	// ori r3,r4,7632
	ctx.r3.u64 = ctx.r4.u64 | 7632;
	// std r8,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r8.u64);
	// lwzx r10,r28,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17856(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17856);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// std r25,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r25.u64);
	// std r23,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r23.u64);
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// std r24,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r24.u64);
	// std r22,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r22.u64);
	// lwz r4,11892(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// stw r27,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r27.u32);
	// bl 0x82280be8
	ctx.lr = 0x823056AC;
	sub_82280BE8(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lwz r10,19272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19272);
	// stw r3,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r3.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x823056c8
	if (!ctx.cr6.eq) goto loc_823056C8;
	// stw r27,19272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19272, ctx.r27.u32);
loc_823056C8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_823056D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x823056E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r4,1300(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1300);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82305710
	if (ctx.cr6.eq) goto loc_82305710;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x82280c80
	ctx.lr = 0x8230570C;
	sub_82280C80(ctx, base);
	// stw r24,1300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1300, ctx.r24.u32);
loc_82305710:
	// addi r30,r29,2896
	ctx.r30.s64 = ctx.r29.s64 + 2896;
	// stw r24,1304(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1304, ctx.r24.u32);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// li r26,38
	ctx.r26.s64 = 38;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82305728:
	// ld r11,11856(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 11856);
	// sld r31,r25,r27
	ctx.r31.u64 = ctx.r27.u8 & 0x40 ? 0 : (ctx.r25.u64 << (ctx.r27.u8 & 0x7F));
	// and r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 & ctx.r11.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x82305744
	if (!ctx.cr6.eq) goto loc_82305744;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82305744:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82305774
	if (ctx.cr6.eq) goto loc_82305774;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82305768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r5,11856(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 11856);
	// andc r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r31.u64;
	// std r4,11856(r29)
	PPC_STORE_U64(ctx.r29.u32 + 11856, ctx.r4.u64);
loc_82305774:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82305728
	if (!ctx.cr6.eq) goto loc_82305728;
	// addi r28,r29,2736
	ctx.r28.s64 = ctx.r29.s64 + 2736;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823057A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,38
	ctx.r31.s64 = 38;
loc_823057A4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823057B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823057a4
	if (!ctx.cr6.eq) goto loc_823057A4;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823057DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32118
	ctx.r5.s64 = -2104885248;
	// lis r3,-17864
	ctx.r3.s64 = -1170735104;
	// ori r4,r5,14497
	ctx.r4.u64 = ctx.r5.u64 | 14497;
	// ori r11,r3,59100
	ctx.r11.u64 = ctx.r3.u64 | 59100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x82362b10
	ctx.lr = 0x823057F8;
	sub_82362B10(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82305868
	if (ctx.cr6.eq) goto loc_82305868;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82305824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82305850
	if (ctx.cr6.eq) goto loc_82305850;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// beq cr6,0x82305850
	if (ctx.cr6.eq) goto loc_82305850;
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82305850:
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82305868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82305868:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// stw r24,936(r29)
	PPC_STORE_U32(ctx.r29.u32 + 936, ctx.r24.u32);
	// stb r24,968(r29)
	PPC_STORE_U8(ctx.r29.u32 + 968, ctx.r24.u8);
	// lis r30,-32047
	ctx.r30.s64 = -2100232192;
	// lis r27,-32085
	ctx.r27.s64 = -2102722560;
loc_8230587C:
	// lwz r11,7744(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7744);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// ld r5,160(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 160);
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// beq cr6,0x823058f4
	if (ctx.cr6.eq) goto loc_823058F4;
	// std r24,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r24.u64);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x823058A4;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x823058B4;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x823058C4;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x823058D4;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x823058E4;
	sub_82350C88(ctx, base);
	// lwz r11,20160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20160);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82350c88
	ctx.lr = 0x823058F4;
	sub_82350C88(ctx, base);
loc_823058F4:
	// addi r28,r28,432
	ctx.r28.s64 = ctx.r28.s64 + 432;
	// cmpwi cr6,r28,2592
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2592, ctx.xer);
	// blt cr6,0x8230587c
	if (ctx.cr6.lt) goto loc_8230587C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822efb38
	ctx.lr = 0x82305908;
	sub_822EFB38(ctx, base);
	// stb r24,11911(r29)
	PPC_STORE_U8(ctx.r29.u32 + 11911, ctx.r24.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82305918) {
	PPC_FUNC_PROLOGUE();
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r9,r10,36932
	ctx.r9.u64 = ctx.r10.u64 | 36932;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r8,r10,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r4,r3,848
	ctx.r4.s64 = ctx.r3.s64 + 848;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// b 0x820bf2d8
	sub_820BF2D8(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_823143A0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lfs f0,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x823144cc
	if (ctx.cr6.gt) goto loc_823144CC;
	// lis r12,-32207
	ctx.r12.s64 = -2110717952;
	// addi r12,r12,17388
	ctx.r12.s64 = ctx.r12.s64 + 17388;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82314410;
	case 1:
		goto loc_82314410;
	case 2:
		goto loc_82314410;
	case 3:
		goto loc_823144CC;
	case 4:
		goto loc_82314468;
	case 5:
		goto loc_82314498;
	case 6:
		goto loc_823144CC;
	case 7:
		goto loc_823144C0;
	case 8:
		goto loc_823144C0;
	default:
		__builtin_unreachable();
	}
	// lwz r17,17424(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17424);
	// lwz r17,17424(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17424);
	// lwz r17,17424(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17424);
	// lwz r17,17612(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17612);
	// lwz r17,17512(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17512);
	// lwz r17,17560(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17560);
	// lwz r17,17612(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17612);
	// lwz r17,17600(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17600);
	// lwz r17,17600(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + 17600);
loc_82314410:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,6912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6912);
	// lfs f0,13376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,13372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13372);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,17560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17560);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8231444c
	if (!ctx.cr6.gt) goto loc_8231444C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -576);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_8231444C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823011c8
	ctx.lr = 0x82314454;
	sub_823011C8(ctx, base);
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
loc_82314468:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// bl 0x82301460
	ctx.lr = 0x8231447C;
	sub_82301460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823011c8
	ctx.lr = 0x82314484;
	sub_823011C8(ctx, base);
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
loc_82314498:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// bl 0x823011c8
	ctx.lr = 0x823144AC;
	sub_823011C8(ctx, base);
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
loc_823144C0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,18460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18460);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_823144CC:
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
PPC_FUNC_IMPL(__imp__sub_82314788) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r5,5360
	ctx.r11.s64 = ctx.r5.s64 + 5360;
	// li r10,10
	ctx.r10.s64 = 10;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823147A8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823147a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823147A8;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823147d8
	if (ctx.cr6.eq) goto loc_823147D8;
loc_823147C0:
	// addi r4,r9,-20
	ctx.r4.s64 = ctx.r9.s64 + -20;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82301ac8
	ctx.lr = 0x823147CC;
	sub_82301AC8(ctx, base);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x823147c0
	if (!ctx.cr6.eq) goto loc_823147C0;
loc_823147D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_823147E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x823147F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,5430(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5430);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823148f8
	if (ctx.cr6.eq) goto loc_823148F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,5408(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5408);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r10,5429(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5429, ctx.r10.u8);
	// ble cr6,0x823148e8
	if (!ctx.cr6.gt) goto loc_823148E8;
	// addi r28,r29,832
	ctx.r28.s64 = ctx.r29.s64 + 832;
loc_82314820:
	// lbz r8,-4(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + -4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82314848
	if (!ctx.cr6.eq) goto loc_82314848;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314848
	if (ctx.cr6.eq) goto loc_82314848;
	// lbz r7,14(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8231484c
	if (ctx.cr6.eq) goto loc_8231484C;
loc_82314848:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231484C:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823148d4
	if (ctx.cr6.eq) goto loc_823148D4;
	// addi r31,r28,-80
	ctx.r31.s64 = ctx.r28.s64 + -80;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823148d4
	if (ctx.cr6.eq) goto loc_823148D4;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,5404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5404);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// lwz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// beq cr6,0x823148ac
	if (ctx.cr6.eq) goto loc_823148AC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82314890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823148ac
	if (ctx.cr6.eq) goto loc_823148AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ebba8
	ctx.lr = 0x823148A8;
	sub_822EBBA8(ctx, base);
	// b 0x823148d4
	goto loc_823148D4;
loc_823148AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823143a0
	ctx.lr = 0x823148B4;
	sub_823143A0(ctx, base);
	// lbz r7,597(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 597);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823148d4
	if (!ctx.cr6.eq) goto loc_823148D4;
	// lwz r11,516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// bl 0x82231788
	ctx.lr = 0x823148D4;
	sub_82231788(ctx, base);
loc_823148D4:
	// lwz r6,5408(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5408);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,96
	ctx.r28.s64 = ctx.r28.s64 + 96;
	// cmpw cr6,r27,r6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82314820
	if (ctx.cr6.lt) goto loc_82314820;
loc_823148E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234ddd0
	ctx.lr = 0x823148F0;
	sub_8234DDD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82314788
	ctx.lr = 0x823148F8;
	sub_82314788(ctx, base);
loc_823148F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82314B10) {
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
	// bl 0x822ebc28
	ctx.lr = 0x82314B30;
	sub_822EBC28(ctx, base);
	// addi r7,r30,2736
	ctx.r7.s64 = ctx.r30.s64 + 2736;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r9,r31,128
	ctx.r9.s64 = ctx.r31.s64 + 128;
	// addi r8,r11,28544
	ctx.r8.s64 = ctx.r11.s64 + 28544;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addis r8,r8,34
	ctx.r8.s64 = ctx.r8.s64 + 2228224;
	// lwz r3,11892(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11892);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r8,21248
	ctx.r5.s64 = ctx.r8.s64 + 21248;
	// mulli r6,r3,5440
	ctx.r6.s64 = ctx.r3.s64 * 5440;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lis r8,-32085
	ctx.r8.s64 = -2102722560;
	// addi r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 + 176;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r8,r8,7736
	ctx.r8.s64 = ctx.r8.s64 + 7736;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lis r6,-32085
	ctx.r6.s64 = -2102722560;
	// lwz r5,11892(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11892);
	// stw r5,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r5.u32);
	// stw r11,7728(r6)
	PPC_STORE_U32(ctx.r6.u32 + 7728, ctx.r11.u32);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// stb r11,512(r31)
	PPC_STORE_U8(ctx.r31.u32 + 512, ctx.r11.u8);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// lwz r3,532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r11.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// stb r7,28(r9)
	PPC_STORE_U8(ctx.r9.u32 + 28, ctx.r7.u8);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// stb r7,28(r9)
	PPC_STORE_U8(ctx.r9.u32 + 28, ctx.r7.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// lwz r5,532(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u32);
	// stw r11,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r11.u32);
	// stw r4,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r4.u32);
	// stw r11,156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 156, ctx.r11.u32);
	// stw r11,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r11.u32);
	// stw r11,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r11.u32);
	// stb r11,177(r10)
	PPC_STORE_U8(ctx.r10.u32 + 177, ctx.r11.u8);
	// stw r11,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, ctx.r11.u32);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stb r7,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, ctx.r7.u8);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// stb r7,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, ctx.r7.u8);
	// stw r9,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r9.u32);
	// stw r31,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r31.u32);
	// lwz r5,532(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r11.u32);
	// stw r6,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r6.u32);
	// stw r31,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r31.u32);
	// lwz r3,532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
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
PPC_FUNC_IMPL(__imp__sub_82316F78) {
	PPC_FUNC_PROLOGUE();
	// b 0x82303028
	sub_82303028(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_823176E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x823176E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r11,3592
	ctx.r27.s64 = ctx.r11.s64 + 3592;
loc_82317704:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d1b0
	ctx.lr = 0x82317714;
	sub_8259D1B0(ctx, base);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// and r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231772c
	if (ctx.cr6.eq) goto loc_8231772C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82301558
	ctx.lr = 0x8231772C;
	sub_82301558(ctx, base);
loc_8231772C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// cmplwi cr6,r31,48
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 48, ctx.xer);
	// blt cr6,0x82317704
	if (ctx.cr6.lt) goto loc_82317704;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_82317748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82317750;
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
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r31,2896
	ctx.r11.s64 = ctx.r31.s64 + 2896;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r9,38
	ctx.r9.s64 = 38;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82317774:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82317774
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82317774;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r29,11910(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11910, ctx.r29.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,11864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11864, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,11892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11892, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stfs f31,11872(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11872, temp.u32);
	// stw r9,11896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11896, ctx.r9.u32);
	// addi r27,r11,28544
	ctx.r27.s64 = ctx.r11.s64 + 28544;
	// stfs f31,11876(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11876, temp.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,11884(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11884, temp.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stfs f31,11880(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11880, temp.u32);
	// addi r5,r11,17632
	ctx.r5.s64 = ctx.r11.s64 + 17632;
	// bl 0x82362980
	ctx.lr = 0x823177CC;
	sub_82362980(ctx, base);
	// addi r28,r31,2736
	ctx.r28.s64 = ctx.r31.s64 + 2736;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823177E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,2816
	ctx.r3.s64 = ctx.r31.s64 + 2816;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823177F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// addis r11,r27,34
	ctx.r11.s64 = ctx.r27.s64 + 2228224;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r10,r11,21248
	ctx.r10.s64 = ctx.r11.s64 + 21248;
	// addi r4,r31,6320
	ctx.r4.s64 = ctx.r31.s64 + 6320;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r11,11892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,5440
	ctx.r11.s64 = ctx.r11.s64 * 5440;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// stw r4,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r4.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82317838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stb r29,112(r30)
	PPC_STORE_U8(ctx.r30.u32 + 112, ctx.r29.u8);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// stb r29,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r29.u8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 240, ctx.r29.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,11892(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11892);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// stb r29,258(r30)
	PPC_STORE_U8(ctx.r30.u32 + 258, ctx.r29.u8);
	// stb r29,259(r30)
	PPC_STORE_U8(ctx.r30.u32 + 259, ctx.r29.u8);
	// stw r29,248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 248, ctx.r29.u32);
	// stb r29,261(r30)
	PPC_STORE_U8(ctx.r30.u32 + 261, ctx.r29.u8);
	// stw r5,252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 252, ctx.r5.u32);
	// stb r29,263(r30)
	PPC_STORE_U8(ctx.r30.u32 + 263, ctx.r29.u8);
	// stw r29,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r29.u32);
	// stw r29,244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 244, ctx.r29.u32);
	// stb r29,260(r30)
	PPC_STORE_U8(ctx.r30.u32 + 260, ctx.r29.u8);
	// stw r11,7728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7728, ctx.r11.u32);
	// stw r29,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r29.u32);
	// stb r28,216(r30)
	PPC_STORE_U8(ctx.r30.u32 + 216, ctx.r28.u8);
	// stw r29,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r29.u32);
	// bl 0x82314b10
	ctx.lr = 0x82317898;
	sub_82314B10(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,11892(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11892);
	// stb r29,11911(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11911, ctx.r29.u8);
	// stb r29,11912(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11912, ctx.r29.u8);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stb r29,11913(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11913, ctx.r29.u8);
	// stb r29,11914(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11914, ctx.r29.u8);
	// lfs f0,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// stb r28,11916(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11916, ctx.r28.u8);
	// stfs f0,11888(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11888, temp.u32);
	// li r11,9
	ctx.r11.s64 = 9;
	// stb r29,11917(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11917, ctx.r29.u8);
	// std r29,11856(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11856, ctx.r29.u64);
	// stw r11,11900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11900, ctx.r11.u32);
	// stw r11,11904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11904, ctx.r11.u32);
	// bne cr6,0x823178e4
	if (!ctx.cr6.eq) goto loc_823178E4;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r11,7744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7744, ctx.r11.u32);
loc_823178E4:
	// lis r3,-32118
	ctx.r3.s64 = -2104885248;
	// stfs f31,964(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// lis r11,-17864
	ctx.r11.s64 = -1170735104;
	// stw r31,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r31.u32);
	// ori r4,r3,14497
	ctx.r4.u64 = ctx.r3.u64 | 14497;
	// stw r29,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r29.u32);
	// ori r10,r11,59100
	ctx.r10.u64 = ctx.r11.u64 | 59100;
	// stw r29,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,968(r31)
	PPC_STORE_U8(ctx.r31.u32 + 968, ctx.r29.u8);
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// stfs f31,908(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 908, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r31.u32);
	// bl 0x820a38e8
	ctx.lr = 0x82317928;
	sub_820A38E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_8231C690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8231C698;
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
	// addi r4,r31,5404
	ctx.r4.s64 = ctx.r31.s64 + 5404;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8231C6C4;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,5408
	ctx.r4.s64 = ctx.r31.s64 + 5408;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8231C6DC;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,5412
	ctx.r4.s64 = ctx.r31.s64 + 5412;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8231C6F4;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,5416
	ctx.r4.s64 = ctx.r31.s64 + 5416;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8231C70C;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,5420
	ctx.r4.s64 = ctx.r31.s64 + 5420;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8231C724;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,5424
	ctx.r4.s64 = ctx.r31.s64 + 5424;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8231C73C;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,5428
	ctx.r4.s64 = ctx.r31.s64 + 5428;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8231C754;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,5429
	ctx.r4.s64 = ctx.r31.s64 + 5429;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8231C76C;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,5430
	ctx.r4.s64 = ctx.r31.s64 + 5430;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8231C784;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// addi r29,r31,112
	ctx.r29.s64 = ctx.r31.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,640
	ctx.r5.s64 = 640;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820bf2d8
	ctx.lr = 0x8231C7A0;
	sub_820BF2D8(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// addi r28,r31,5360
	ctx.r28.s64 = ctx.r31.s64 + 5360;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820bf2d8
	ctx.lr = 0x8231C7BC;
	sub_820BF2D8(ctx, base);
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r10,r11,36928
	ctx.r10.u64 = ctx.r11.u64 | 36928;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231c7fc
	if (!ctx.cr6.eq) goto loc_8231C7FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,10
	ctx.r27.s64 = 10;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
loc_8231C7DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82347cb0
	ctx.lr = 0x8231C7E4;
	sub_82347CB0(ctx, base);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// stfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8231c7dc
	if (!ctx.cr6.eq) goto loc_8231C7DC;
loc_8231C7FC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r4,r11,19884
	ctx.r4.s64 = ctx.r11.s64 + 19884;
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// addi r6,r31,752
	ctx.r6.s64 = ctx.r31.s64 + 752;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x823176e0
	ctx.lr = 0x8231C81C;
	sub_823176E0(ctx, base);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x8231C834;
	sub_820BF2D8(ctx, base);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x820bf2d8
	ctx.lr = 0x8231C854;
	sub_820BF2D8(ctx, base);
	// lis r8,34
	ctx.r8.s64 = 2228224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r7,r8,36928
	ctx.r7.u64 = ctx.r8.u64 | 36928;
	// lwzx r11,r30,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8231c880
	if (!ctx.cr6.eq) goto loc_8231C880;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,7936
	ctx.r4.s64 = ctx.r11.s64 + 7936;
	// bl 0x8234bca0
	ctx.lr = 0x8231C87C;
	sub_8234BCA0(ctx, base);
	// b 0x8231c8b0
	goto loc_8231C8B0;
loc_8231C880:
	// bl 0x82347cd0
	ctx.lr = 0x8231C884;
	sub_82347CD0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8231c8b0
	if (ctx.cr6.eq) goto loc_8231C8B0;
loc_8231C894:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82301f00
	ctx.lr = 0x8231C8A0;
	sub_82301F00(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8231c894
	if (ctx.cr6.lt) goto loc_8231C894;
loc_8231C8B0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r8,r30,10
	ctx.r8.s64 = ctx.r30.s64 + 655360;
	// addi r4,r11,4676
	ctx.r4.s64 = ctx.r11.s64 + 4676;
	// addis r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 2293760;
	// lis r10,-12851
	ctx.r10.s64 = -842203136;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r10,r10,52685
	ctx.r10.u64 = ctx.r10.u64 | 52685;
	// ori r9,r9,9152
	ctx.r9.u64 = ctx.r9.u64 | 9152;
	// addi r8,r8,-7344
	ctx.r8.s64 = ctx.r8.s64 + -7344;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r31,5400
	ctx.r6.s64 = ctx.r31.s64 + 5400;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820d5a38
	ctx.lr = 0x8231C8E8;
	sub_820D5A38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

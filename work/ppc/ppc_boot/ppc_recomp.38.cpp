#include "graphics_dispatch.h"
#include "ppc_recomp_shared.h"
__attribute__((alias("__imp__sub_822E35C0"))) PPC_WEAK_FUNC(sub_822E35C0);
__attribute__((alias("__imp__sub_822E6A78"))) PPC_WEAK_FUNC(sub_822E6A78);
__attribute__((alias("__imp__sub_822EB400"))) PPC_WEAK_FUNC(sub_822EB400);
__attribute__((alias("__imp__sub_822EB4C8"))) PPC_WEAK_FUNC(sub_822EB4C8);
__attribute__((alias("__imp__sub_822EBBA8"))) PPC_WEAK_FUNC(sub_822EBBA8);
__attribute__((alias("__imp__sub_822EBC18"))) PPC_WEAK_FUNC(sub_822EBC18);
__attribute__((alias("__imp__sub_822EBC28"))) PPC_WEAK_FUNC(sub_822EBC28);
__attribute__((alias("__imp__sub_822EBFD0"))) PPC_WEAK_FUNC(sub_822EBFD0);
__attribute__((alias("__imp__sub_822EBFE8"))) PPC_WEAK_FUNC(sub_822EBFE8);
__attribute__((alias("__imp__sub_822EC010"))) PPC_WEAK_FUNC(sub_822EC010);
__attribute__((alias("__imp__sub_822EC028"))) PPC_WEAK_FUNC(sub_822EC028);
__attribute__((alias("__imp__sub_822EC298"))) PPC_WEAK_FUNC(sub_822EC298);
__attribute__((alias("__imp__sub_822EF370"))) PPC_WEAK_FUNC(sub_822EF370);
__attribute__((alias("__imp__sub_822EF408"))) PPC_WEAK_FUNC(sub_822EF408);
__attribute__((alias("__imp__sub_822EF4A8"))) PPC_WEAK_FUNC(sub_822EF4A8);
__attribute__((alias("__imp__sub_822EF9D0"))) PPC_WEAK_FUNC(sub_822EF9D0);
__attribute__((alias("__imp__sub_822EFB38"))) PPC_WEAK_FUNC(sub_822EFB38);
__attribute__((alias("__imp__sub_822EFBC0"))) PPC_WEAK_FUNC(sub_822EFBC0);
__attribute__((alias("__imp__sub_822F65B8"))) PPC_WEAK_FUNC(sub_822F65B8);
PPC_FUNC_IMPL(__imp__sub_822E35C0) {
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
	// lis r10,34
	ctx.r10.s64 = 2228224;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// ori r9,r10,37004
	ctx.r9.u64 = ctx.r10.u64 | 37004;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x822e362c
	if (!ctx.cr6.gt) goto loc_822E362C;
	// lis r8,35
	ctx.r8.s64 = 2293760;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r7,r8,6184
	ctx.r7.u64 = ctx.r8.u64 | 6184;
	// lwz r5,11896(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11896);
	// lbzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x822e362c
	if (!ctx.cr6.eq) goto loc_822E362C;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822d4698
	ctx.lr = 0x822E361C;
	sub_822D4698(ctx, base);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x822e362c
	if (ctx.cr6.eq) goto loc_822E362C;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// b 0x822e3638
	goto loc_822E3638;
loc_822E362C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x822d4698
	ctx.lr = 0x822E3634;
	sub_822D4698(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_822E3638:
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
PPC_FUNC_IMPL(__imp__sub_822E6A78) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8212bb98
	ctx.lr = 0x822E6A98;
	sub_8212BB98(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stb r10,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r10.u8);
	// lwz r11,11892(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e6ad8
	if (!ctx.cr6.eq) goto loc_822E6AD8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822E6AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E6AD8:
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
PPC_FUNC_IMPL(__imp__sub_822EB400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822EB408;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822eb49c
	if (ctx.cr6.eq) goto loc_822EB49C;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f0,11872(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11872);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// ble cr6,0x822eb490
	if (!ctx.cr6.gt) goto loc_822EB490;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822EB448:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822d4650
	ctx.lr = 0x822EB454;
	sub_822D4650(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822eb490
	if (ctx.cr6.eq) goto loc_822EB490;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822d4dc0
	ctx.lr = 0x822EB46C;
	sub_822D4DC0(ctx, base);
	// lfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bso cr6,0x822eb47c
	if (ctx.cr6.so) goto loc_822EB47C;
	// bge cr6,0x822eb490
	if (!ctx.cr6.lt) goto loc_822EB490;
loc_822EB47C:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822eb448
	if (ctx.cr6.lt) goto loc_822EB448;
loc_822EB490:
	// addi r5,r29,-1
	ctx.r5.s64 = ctx.r29.s64 + -1;
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// b 0x822eb4b0
	goto loc_822EB4B0;
loc_822EB49C:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r4,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r4.u32);
	// bl 0x822d4dc0
	ctx.lr = 0x822EB4AC;
	sub_822D4DC0(ctx, base);
	// stfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_822EB4B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f12,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stb r3,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r3.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822EB4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x822EB4D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r6,r31,112
	ctx.r6.s64 = ctx.r31.s64 + 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,25556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234b6e8
	ctx.lr = 0x822EB4F0;
	sub_8234B6E8(ctx, base);
	// addi r29,r31,752
	ctx.r29.s64 = ctx.r31.s64 + 752;
	// li r30,48
	ctx.r30.s64 = 48;
loc_822EB4F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82347cb0
	ctx.lr = 0x822EB500;
	sub_82347CB0(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,96
	ctx.r29.s64 = ctx.r29.s64 + 96;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822eb4f8
	if (!ctx.cr6.eq) goto loc_822EB4F8;
	// addi r30,r31,164
	ctx.r30.s64 = ctx.r31.s64 + 164;
	// addi r28,r31,5360
	ctx.r28.s64 = ctx.r31.s64 + 5360;
	// li r29,10
	ctx.r29.s64 = 10;
loc_822EB51C:
	// addi r3,r30,-52
	ctx.r3.s64 = ctx.r30.s64 + -52;
	// bl 0x82347cb0
	ctx.lr = 0x822EB524;
	sub_82347CB0(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// bne cr6,0x822eb51c
	if (!ctx.cr6.eq) goto loc_822EB51C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,18224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18224);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82347d78
	ctx.lr = 0x822EB554;
	sub_82347D78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5430(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5430, ctx.r11.u8);
	// stw r11,5408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5408, ctx.r11.u32);
	// stw r11,5424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5424, ctx.r11.u32);
	// stw r11,5412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5412, ctx.r11.u32);
	// stw r11,5420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5420, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822EBBA8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ebc00
	if (!ctx.cr6.eq) goto loc_822EBC00;
	// bl 0x8234b730
	ctx.lr = 0x822EBBD4;
	sub_8234B730(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,77(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 77);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stb r10,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r10.u8);
	// beq cr6,0x822ebc00
	if (ctx.cr6.eq) goto loc_822EBC00;
	// lwz r11,5424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5424);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,5424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5424, ctx.r8.u32);
loc_822EBC00:
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
PPC_FUNC_IMPL(__imp__sub_822EBC18) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5430(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5430, ctx.r11.u8);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822EBC28) {
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
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addi r9,r4,2736
	ctx.r9.s64 = ctx.r4.s64 + 2736;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// addis r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 2228224;
	// lwz r7,11892(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 11892);
	// addi r8,r4,6320
	ctx.r8.s64 = ctx.r4.s64 + 6320;
	// addi r10,r11,21248
	ctx.r10.s64 = ctx.r11.s64 + 21248;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r7,5440
	ctx.r11.s64 = ctx.r7.s64 * 5440;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x822EBC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
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
PPC_FUNC_IMPL(__imp__sub_822EBFD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822EBFE8) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r9,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822EBFFC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822ebffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EBFFC;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822EC010) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,56
	ctx.r10.s64 = 56;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822EC028) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,57
	ctx.r10.s64 = 57;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822EC298) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822ec2ac
	if (!ctx.cr6.eq) goto loc_822EC2AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EC2AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_822EF370) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-28660
	ctx.r3.s64 = ctx.r11.s64 + -28660;
	// bl 0x820bf2d8
	ctx.lr = 0x822EF3A8;
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
	ctx.lr = 0x822EF3C0;
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
	ctx.lr = 0x822EF3D8;
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
	ctx.lr = 0x822EF3F0;
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
PPC_FUNC_IMPL(__imp__sub_822EF408) {
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
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,7744(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_822EF42C:
	// ld r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// beq cr6,0x822ef46c
	if (ctx.cr6.eq) goto loc_822EF46C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,432
	ctx.r3.s64 = ctx.r3.s64 + 432;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x822ef42c
	if (ctx.cr6.lt) goto loc_822EF42C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EF44C:
	// ld r8,160(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 160);
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x822ef480
	if (ctx.cr6.eq) goto loc_822EF480;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,432
	ctx.r31.s64 = ctx.r31.s64 + 432;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x822ef44c
	if (ctx.cr6.lt) goto loc_822EF44C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EF46C:
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
loc_822EF480:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r9,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r9.u64);
	// bl 0x822d9010
	ctx.lr = 0x822EF48C;
	sub_822D9010(ctx, base);
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
PPC_FUNC_IMPL(__imp__sub_822EF4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x822EF4B0;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lbz r11,11911(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11911);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ef86c
	if (ctx.cr6.eq) goto loc_822EF86C;
	// lbz r10,11910(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11910);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ef86c
	if (!ctx.cr6.eq) goto loc_822EF86C;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821040d8
	ctx.lr = 0x822EF4E8;
	sub_821040D8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822ef518
	if (ctx.cr6.eq) goto loc_822EF518;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82335640
	ctx.lr = 0x822EF504;
	sub_82335640(ctx, base);
	// lis r8,37
	ctx.r8.s64 = 2424832;
	// ori r7,r8,49145
	ctx.r7.u64 = ctx.r8.u64 | 49145;
	// lbzx r6,r30,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822ef86c
	if (!ctx.cr6.eq) goto loc_822EF86C;
loc_822EF518:
	// lbz r5,11910(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11910);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822ef584
	if (!ctx.cr6.eq) goto loc_822EF584;
	// addi r11,r31,2736
	ctx.r11.s64 = ctx.r31.s64 + 2736;
	// addi r10,r31,2816
	ctx.r10.s64 = ctx.r31.s64 + 2816;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// ld r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r3,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r3.u64);
	// ld r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// std r7,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r7.u64);
	// ld r6,24(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// std r6,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r6.u64);
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r5,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r5.u32);
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r4,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r4.u32);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r3,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r3.u32);
	// lbz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// stb r11,76(r10)
	PPC_STORE_U8(ctx.r10.u32 + 76, ctx.r11.u8);
loc_822EF584:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r10,11915(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11915);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,11916(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11916, ctx.r10.u8);
	// stfs f0,11888(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11888, temp.u32);
	// stb r9,11917(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11917, ctx.r9.u8);
	// bl 0x82362aa0
	ctx.lr = 0x822EF5A8;
	sub_82362AA0(ctx, base);
	// ld r11,11856(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r8,r11,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x822ef5c0
	if (!ctx.cr6.eq) goto loc_822EF5C0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822EF5C0:
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822ef5e8
	if (ctx.cr6.eq) goto loc_822EF5E8;
	// lwz r3,2988(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2988);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r31,2736
	ctx.r4.s64 = ctx.r31.s64 + 2736;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x822ef674
	goto loc_822EF674;
loc_822EF5E8:
	// lwz r10,11904(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11904);
	// li r8,1
	ctx.r8.s64 = 1;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// sld r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// bne cr6,0x822ef60c
	if (!ctx.cr6.eq) goto loc_822EF60C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EF60C:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ef678
	if (ctx.cr6.eq) goto loc_822EF678;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x822ef64c
	if (ctx.cr6.eq) goto loc_822EF64C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822ef64c
	if (ctx.cr6.eq) goto loc_822EF64C;
	// addi r3,r10,724
	ctx.r3.s64 = ctx.r10.s64 + 724;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r31,2736
	ctx.r4.s64 = ctx.r31.s64 + 2736;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x822ef674
	goto loc_822EF674;
loc_822EF64C:
	// addi r3,r29,92
	ctx.r3.s64 = ctx.r29.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x822EF654;
	sub_8210B3C8(ctx, base);
	// lwz r11,11904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11904);
	// addi r4,r31,2736
	ctx.r4.s64 = ctx.r31.s64 + 2736;
	// addi r8,r11,724
	ctx.r8.s64 = ctx.r11.s64 + 724;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_822EF674:
	// bctrl 
	ctx.lr = 0x822EF678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EF678:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r4,11856(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// li r11,1
	ctx.r11.s64 = 1;
	// rldicr r12,r12,32,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// and r3,r4,r12
	ctx.r3.u64 = ctx.r4.u64 & ctx.r12.u64;
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// bne cr6,0x822ef698
	if (!ctx.cr6.eq) goto loc_822EF698;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EF698:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ef6c4
	if (ctx.cr6.eq) goto loc_822EF6C4;
	// addi r3,r29,92
	ctx.r3.s64 = ctx.r29.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x822EF6AC;
	sub_8210B3C8(ctx, base);
	// lwz r3,3024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3024);
	// addi r4,r31,2736
	ctx.r4.s64 = ctx.r31.s64 + 2736;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EF6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EF6C4:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r7,11856(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// li r11,1
	ctx.r11.s64 = 1;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r6,r7,r12
	ctx.r6.u64 = ctx.r7.u64 & ctx.r12.u64;
	// cmpldi cr6,r6,0
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, 0, ctx.xer);
	// bne cr6,0x822ef6e4
	if (!ctx.cr6.eq) goto loc_822EF6E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EF6E4:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822ef710
	if (ctx.cr6.eq) goto loc_822EF710;
	// addi r3,r29,92
	ctx.r3.s64 = ctx.r29.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x822EF6F8;
	sub_8210B3C8(ctx, base);
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3032);
	// addi r4,r31,2736
	ctx.r4.s64 = ctx.r31.s64 + 2736;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EF710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EF710:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r9,11856(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// li r11,1
	ctx.r11.s64 = 1;
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x822ef730
	if (!ctx.cr6.eq) goto loc_822EF730;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EF730:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822ef75c
	if (ctx.cr6.eq) goto loc_822EF75C;
	// addi r3,r29,92
	ctx.r3.s64 = ctx.r29.s64 + 92;
	// bl 0x8210b3c8
	ctx.lr = 0x822EF744;
	sub_8210B3C8(ctx, base);
	// lwz r3,3028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3028);
	// addi r4,r31,2736
	ctx.r4.s64 = ctx.r31.s64 + 2736;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EF75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EF75C:
	// lbz r10,11912(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11912);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822ef774
	if (ctx.cr6.eq) goto loc_822EF774;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,3148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2752(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2752, temp.u32);
loc_822EF774:
	// addi r30,r31,2736
	ctx.r30.s64 = ctx.r31.s64 + 2736;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EF790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lbz r7,-32560(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -32560);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822ef7c4
	if (ctx.cr6.eq) goto loc_822EF7C4;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// lfs f12,11876(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 11876);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,11872(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 11872);
	ctx.f11.f64 = double(temp.f32);
	// ori r5,r6,16280
	ctx.r5.u64 = ctx.r6.u64 | 16280;
	// fadds f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// lfsx f0,r29,r5
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f9,11872(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11872, temp.u32);
	// stfs f10,11876(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11876, temp.u32);
loc_822EF7C4:
	// lis r4,7
	ctx.r4.s64 = 458752;
	// ori r3,r4,16271
	ctx.r3.u64 = ctx.r4.u64 | 16271;
	// lbzx r11,r29,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ef7fc
	if (ctx.cr6.eq) goto loc_822EF7FC;
	// lwz r10,936(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ef7ec
	if (!ctx.cr6.eq) goto loc_822EF7EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EF7EC:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822ef800
	if (!ctx.cr6.eq) goto loc_822EF800;
loc_822EF7FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EF800:
	// lbz r6,11910(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11910);
	// stb r11,11914(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11914, ctx.r11.u8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822ef86c
	if (ctx.cr6.eq) goto loc_822EF86C;
	// addi r11,r31,2816
	ctx.r11.s64 = ctx.r31.s64 + 2816;
	// addi r9,r30,32
	ctx.r9.s64 = ctx.r30.s64 + 32;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lfs f8,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,16(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,20(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// ld r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r3,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r3.u64);
	// ld r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// std r10,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r10.u64);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r9,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r9.u32);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r8,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r8.u32);
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r7,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r7.u32);
	// lbz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// stb r6,76(r30)
	PPC_STORE_U8(ctx.r30.u32 + 76, ctx.r6.u8);
loc_822EF86C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822EF9D0) {
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
	// addi r11,r30,724
	ctx.r11.s64 = ctx.r30.s64 + 724;
	// addi r4,r31,2736
	ctx.r4.s64 = ctx.r31.s64 + 2736;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EFA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r7,r30
	ctx.r7.s64 = ctx.r30.s32;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r4,11856(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// sld r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r7.u8 & 0x7F));
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// std r3,11856(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11856, ctx.r3.u64);
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
PPC_FUNC_IMPL(__imp__sub_822EFB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x822EFB40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,2896
	ctx.r29.s64 = ctx.r31.s64 + 2896;
	// li r27,38
	ctx.r27.s64 = 38;
	// li r26,1
	ctx.r26.s64 = 1;
loc_822EFB58:
	// ld r11,11856(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// sld r30,r26,r28
	ctx.r30.u64 = ctx.r28.u8 & 0x40 ? 0 : (ctx.r26.u64 << (ctx.r28.u8 & 0x7F));
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ctx.r30.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x822efb74
	if (!ctx.cr6.eq) goto loc_822EFB74;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EFB74:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822efba4
	if (ctx.cr6.eq) goto loc_822EFBA4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822EFB98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r5,11856(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// andc r4,r5,r30
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r30.u64;
	// std r4,11856(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11856, ctx.r4.u64);
loc_822EFBA4:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822efb58
	if (!ctx.cr6.eq) goto loc_822EFB58;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822EFBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x822EFBC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,2896
	ctx.r29.s64 = ctx.r31.s64 + 2896;
	// li r26,1
	ctx.r26.s64 = 1;
loc_822EFBE4:
	// ld r11,11856(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// sld r30,r26,r28
	ctx.r30.u64 = ctx.r28.u8 & 0x40 ? 0 : (ctx.r26.u64 << (ctx.r28.u8 & 0x7F));
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ctx.r30.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x822efc00
	if (!ctx.cr6.eq) goto loc_822EFC00;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EFC00:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822efc38
	if (ctx.cr6.eq) goto loc_822EFC38;
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x822efc38
	if (ctx.cr6.eq) goto loc_822EFC38;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822EFC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r5,11856(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// andc r4,r5,r30
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r30.u64;
	// std r4,11856(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11856, ctx.r4.u64);
loc_822EFC38:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r27,38
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 38, ctx.xer);
	// blt cr6,0x822efbe4
	if (ctx.cr6.lt) goto loc_822EFBE4;
	// addi r3,r25,724
	ctx.r3.s64 = ctx.r25.s64 + 724;
	// addi r4,r31,2736
	ctx.r4.s64 = ctx.r31.s64 + 2736;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822EFC6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r8,r25
	ctx.r8.s64 = ctx.r25.s32;
	// ld r7,11856(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11856);
	// stw r25,11904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11904, ctx.r25.u32);
	// stb r26,11913(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11913, ctx.r26.u8);
	// sld r6,r26,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r26.u64 << (ctx.r8.u8 & 0x7F));
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// std r5,11856(r31)
	PPC_STORE_U64(ctx.r31.u32 + 11856, ctx.r5.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_822F65B8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822e6a78
	ctx.lr = 0x822F65D8;
	sub_822E6A78(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,11892(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11892);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// lwz r9,11896(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11896);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r9,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r9.u32);
	// bne cr6,0x822f6620
	if (!ctx.cr6.eq) goto loc_822F6620;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,21116
	ctx.r11.s64 = ctx.r11.s64 + 21116;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r6.u32);
	// lbz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r5,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r5.u8);
	// b 0x822f6640
	goto loc_822F6640;
loc_822F6620:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,21104
	ctx.r11.s64 = ctx.r11.s64 + 21104;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r4.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r11,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r11.u8);
loc_822F6640:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stb r11,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r11.u8);
	// stb r11,217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 217, ctx.r11.u8);
	// stb r11,218(r31)
	PPC_STORE_U8(ctx.r31.u32 + 218, ctx.r11.u8);
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

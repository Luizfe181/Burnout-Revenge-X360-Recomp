#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8234DCAC"))) PPC_WEAK_FUNC(sub_8234DCAC);
PPC_FUNC_IMPL(__imp__sub_8234DCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234DCB0"))) PPC_WEAK_FUNC(sub_8234DCB0);
PPC_FUNC_IMPL(__imp__sub_8234DCB0) {
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
	// lis r7,-32047
	ctx.r7.s64 = -2100232192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,13164(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13164);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8234dce4
	if (ctx.cr6.eq) goto loc_8234DCE4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8234DCE4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r8,r11,12592
	ctx.r8.s64 = ctx.r11.s64 + 12592;
	// beq cr6,0x8234dd2c
	if (ctx.cr6.eq) goto loc_8234DD2C;
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,12560
	ctx.r11.s64 = ctx.r11.s64 + 12560;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r9,13164(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13164, ctx.r9.u32);
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
loc_8234DD2C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234dd48
	if (ctx.cr6.eq) goto loc_8234DD48;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234DD44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8234DD48:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_8234DD70"))) PPC_WEAK_FUNC(sub_8234DD70);
PPC_FUNC_IMPL(__imp__sub_8234DD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r7.u32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// stfs f1,12(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stw r9,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r9,64(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r7,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234DDCC"))) PPC_WEAK_FUNC(sub_8234DDCC);
PPC_FUNC_IMPL(__imp__sub_8234DDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234DDD0"))) PPC_WEAK_FUNC(sub_8234DDD0);
PPC_FUNC_IMPL(__imp__sub_8234DDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8234DDD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8234de5c
	if (ctx.cr6.eq) goto loc_8234DE5C;
loc_8234DDF0:
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r6,r31,-20
	ctx.r6.s64 = ctx.r31.s64 + -20;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfsx f13,r7,r30
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8234de54
	if (!ctx.cr6.lt) goto loc_8234DE54;
	// lwz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8234de5c
	if (ctx.cr6.lt) goto loc_8234DE5C;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bl 0x8234b7b8
	ctx.lr = 0x8234DE54;
	sub_8234B7B8(ctx, base);
loc_8234DE54:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8234ddf0
	if (!ctx.cr6.eq) goto loc_8234DDF0;
loc_8234DE5C:
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8234dea8
	if (ctx.cr6.eq) goto loc_8234DEA8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8234DE70:
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234ba38
	ctx.lr = 0x8234DE7C;
	sub_8234BA38(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r31,20(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8234de70
	if (!ctx.cr6.eq) goto loc_8234DE70;
loc_8234DEA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234DEB0"))) PPC_WEAK_FUNC(sub_8234DEB0);
PPC_FUNC_IMPL(__imp__sub_8234DEB0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,5160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234df54
	if (ctx.cr6.eq) goto loc_8234DF54;
loc_8234DEC0:
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x8234df48
	if (ctx.cr0.eq) goto loc_8234DF48;
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
loc_8234DED4:
	// ld r6,-8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// ld r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// cmpld cr6,r6,r5
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r5.u64, ctx.xer);
	// ble cr6,0x8234df30
	if (!ctx.cr6.gt) goto loc_8234DF30;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// std r5,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r5.u64);
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// std r6,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r6.u64);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// stw r7,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
loc_8234DF30:
	// lwz r10,5160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5160);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8234ded4
	if (ctx.cr6.lt) goto loc_8234DED4;
loc_8234DF48:
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234dec0
	if (ctx.cr6.eq) goto loc_8234DEC0;
loc_8234DF54:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234DF5C"))) PPC_WEAK_FUNC(sub_8234DF5C);
PPC_FUNC_IMPL(__imp__sub_8234DF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234DF60"))) PPC_WEAK_FUNC(sub_8234DF60);
PPC_FUNC_IMPL(__imp__sub_8234DF60) {
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
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234dfec
	if (ctx.cr6.eq) goto loc_8234DFEC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234dfec
	if (ctx.cr6.eq) goto loc_8234DFEC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8234dfec
	if (!ctx.cr6.eq) goto loc_8234DFEC;
	// bl 0x8234cb38
	ctx.lr = 0x8234DFA0;
	sub_8234CB38(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8234dfd4
	if (!ctx.cr6.eq) goto loc_8234DFD4;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r6,46(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 46);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8234dfc8
	if (!ctx.cr6.eq) goto loc_8234DFC8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234DFC8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234dfec
	if (ctx.cr6.eq) goto loc_8234DFEC;
loc_8234DFD4:
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
loc_8234DFEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8234E00C"))) PPC_WEAK_FUNC(sub_8234E00C);
PPC_FUNC_IMPL(__imp__sub_8234E00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234E010"))) PPC_WEAK_FUNC(sub_8234E010);
PPC_FUNC_IMPL(__imp__sub_8234E010) {
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
	// bl 0x8234df60
	ctx.lr = 0x8234E02C;
	sub_8234DF60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e044
	if (ctx.cr6.eq) goto loc_8234E044;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8234ca90
	ctx.lr = 0x8234E044;
	sub_8234CA90(ctx, base);
loc_8234E044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8234E060"))) PPC_WEAK_FUNC(sub_8234E060);
PPC_FUNC_IMPL(__imp__sub_8234E060) {
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
	// bl 0x8234df60
	ctx.lr = 0x8234E078;
	sub_8234DF60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e0a0
	if (ctx.cr6.eq) goto loc_8234E0A0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8234cb38
	ctx.lr = 0x8234E08C;
	sub_8234CB38(ctx, base);
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
loc_8234E0A0:
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

__attribute__((alias("__imp__sub_8234E0B8"))) PPC_WEAK_FUNC(sub_8234E0B8);
PPC_FUNC_IMPL(__imp__sub_8234E0B8) {
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
	// addi r31,r3,404
	ctx.r31.s64 = ctx.r3.s64 + 404;
	// li r30,192
	ctx.r30.s64 = 192;
loc_8234E0D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234E0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234e13c
	if (!ctx.cr6.eq) goto loc_8234E13C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e13c
	if (ctx.cr6.eq) goto loc_8234E13C;
	// lis r8,24351
	ctx.r8.s64 = 1595867136;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r6,-18687
	ctx.r6.s64 = -1224671232;
	// ori r7,r8,40100
	ctx.r7.u64 = ctx.r8.u64 | 40100;
	// ori r5,r6,21204
	ctx.r5.u64 = ctx.r6.u64 | 21204;
	// rldimi r7,r5,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x8234e144
	if (ctx.cr6.eq) goto loc_8234E144;
	// lis r4,24351
	ctx.r4.s64 = 1595867136;
	// lis r10,-18687
	ctx.r10.s64 = -1224671232;
	// ori r3,r4,49700
	ctx.r3.u64 = ctx.r4.u64 | 49700;
	// ori r9,r10,21204
	ctx.r9.u64 = ctx.r10.u64 | 21204;
	// rldimi r3,r9,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r3
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x8234e144
	if (ctx.cr6.eq) goto loc_8234E144;
loc_8234E13C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234ca90
	ctx.lr = 0x8234E144;
	sub_8234CA90(ctx, base);
loc_8234E144:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,696
	ctx.r31.s64 = ctx.r31.s64 + 696;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8234e0d4
	if (!ctx.cr6.eq) goto loc_8234E0D4;
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

__attribute__((alias("__imp__sub_8234E16C"))) PPC_WEAK_FUNC(sub_8234E16C);
PPC_FUNC_IMPL(__imp__sub_8234E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234E170"))) PPC_WEAK_FUNC(sub_8234E170);
PPC_FUNC_IMPL(__imp__sub_8234E170) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234ca90
	ctx.lr = 0x8234E18C;
	sub_8234CA90(ctx, base);
	// lhz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r10,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r10.u16);
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

__attribute__((alias("__imp__sub_8234E1AC"))) PPC_WEAK_FUNC(sub_8234E1AC);
PPC_FUNC_IMPL(__imp__sub_8234E1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234E1B0"))) PPC_WEAK_FUNC(sub_8234E1B0);
PPC_FUNC_IMPL(__imp__sub_8234E1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8234E1B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,5228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5228);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8234e430
	if (ctx.cr6.gt) goto loc_8234E430;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// addi r12,r12,-7696
	ctx.r12.s64 = ctx.r12.s64 + -7696;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8234E210;
	case 1:
		goto loc_8234E240;
	case 2:
		goto loc_8234E2E8;
	case 3:
		goto loc_8234E328;
	case 4:
		goto loc_8234E350;
	case 5:
		goto loc_8234E390;
	case 6:
		goto loc_8234E424;
	case 7:
		goto loc_8234E210;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-7664(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7664);
	// lwz r17,-7616(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7616);
	// lwz r17,-7448(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7448);
	// lwz r17,-7384(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7384);
	// lwz r17,-7344(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7344);
	// lwz r17,-7280(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7280);
	// lwz r17,-7132(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7132);
	// lwz r17,-7664(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -7664);
loc_8234E210:
	// li r5,50
	ctx.r5.s64 = 50;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,5104
	ctx.r3.s64 = ctx.r31.s64 + 5104;
	// bl 0x8259d2a0
	ctx.lr = 0x8234E220;
	sub_8259D2A0(ctx, base);
	// addi r3,r31,5168
	ctx.r3.s64 = ctx.r31.s64 + 5168;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234E238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,5228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5228, ctx.r9.u32);
loc_8234E240:
	// addi r29,r31,5168
	ctx.r29.s64 = ctx.r31.s64 + 5168;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8234E258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234e444
	if (ctx.cr6.eq) goto loc_8234E444;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8234E278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r8,r3,2047
	ctx.r8.s64 = ctx.r3.s64 + 2047;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r8,0,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFF800;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// andc r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// ble cr6,0x8234e2b8
	if (!ctx.cr6.gt) goto loc_8234E2B8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// b 0x8234e2c0
	goto loc_8234E2C0;
loc_8234E2B8:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
loc_8234E2C0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r4,5200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5200, ctx.r4.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234E2E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,5228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5228, ctx.r10.u32);
loc_8234E2E8:
	// addi r30,r31,5168
	ctx.r30.s64 = ctx.r31.s64 + 5168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8234E300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8234e444
	if (ctx.cr6.eq) goto loc_8234E444;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8234E320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r4,5228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5228, ctx.r4.u32);
loc_8234E328:
	// addi r3,r31,5168
	ctx.r3.s64 = ctx.r31.s64 + 5168;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234E33C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234e444
	if (ctx.cr6.eq) goto loc_8234E444;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r8,5228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5228, ctx.r8.u32);
loc_8234E350:
	// lwz r11,5200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5200);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,5208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5208, ctx.r11.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,5204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5204, ctx.r6.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,5212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5212, ctx.r5.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,5220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5220, ctx.r4.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r7,5228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5228, ctx.r7.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r3,5216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5216, ctx.r3.u32);
loc_8234E390:
	// lwz r11,5204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5204);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,5160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5160, ctx.r11.u32);
	// beq cr6,0x8234e414
	if (ctx.cr6.eq) goto loc_8234E414;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// subfic r27,r31,-40
	ctx.xer.ca = ctx.r31.u32 <= 4294967256;
	ctx.r27.s64 = -40 - ctx.r31.s64;
loc_8234E3B4:
	// lwz r11,5216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5216);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x8234E3C8;
	sub_8259D3A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// bl 0x823471d8
	ctx.lr = 0x8234E3D4;
	sub_823471D8(ctx, base);
	// lwz r11,5212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5212);
	// lwz r9,5220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5220);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r3,-8(r30)
	PPC_STORE_U64(ctx.r30.u32 + -8, ctx.r3.u64);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// lwz r10,5160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5160);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8234e3b4
	if (ctx.cr6.lt) goto loc_8234E3B4;
loc_8234E414:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234deb0
	ctx.lr = 0x8234E41C;
	sub_8234DEB0(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r9,5228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5228, ctx.r9.u32);
loc_8234E424:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8234E430:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8234E444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234E444:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234E450"))) PPC_WEAK_FUNC(sub_8234E450);
PPC_FUNC_IMPL(__imp__sub_8234E450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8234E458;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r26,r11,1
	ctx.r26.u64 = ctx.r11.u64 | 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82565408
	ctx.lr = 0x8234E47C;
	sub_82565408(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r31,212
	ctx.r10.s64 = ctx.r31.s64 + 212;
	// li r9,14
	ctx.r9.s64 = 14;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8234E48C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8234e48c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234E48C;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r31,268
	ctx.r11.s64 = ctx.r31.s64 + 268;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8234E4B8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8234e4b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234E4B8;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r31,356
	ctx.r11.s64 = ctx.r31.s64 + 356;
	// addi r9,r31,372
	ctx.r9.s64 = ctx.r31.s64 + 372;
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r8.u32);
	// li r8,6
	ctx.r8.s64 = 6;
loc_8234E4E0:
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r11,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x8234e4e0
	if (!ctx.cr6.eq) goto loc_8234E4E0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82565408
	ctx.lr = 0x8234E50C;
	sub_82565408(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r28,r6,3
	ctx.r28.u64 = ctx.r6.u64 | 3;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f31,64(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f13,-624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -624);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f30,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,60(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// bl 0x82565408
	ctx.lr = 0x8234E554;
	sub_82565408(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,668(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 668, temp.u32);
	// stfs f30,672(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// bl 0x82349b90
	ctx.lr = 0x8234E564;
	sub_82349B90(ctx, base);
	// addi r11,r31,636
	ctx.r11.s64 = ctx.r31.s64 + 636;
	// addi r29,r31,172
	ctx.r29.s64 = ctx.r31.s64 + 172;
	// stfs f31,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// li r27,4
	ctx.r27.s64 = 4;
	// stfs f30,136(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// bl 0x82565408
	ctx.lr = 0x8234E5A0;
	sub_82565408(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lfs f0,23008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23008);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// addi r10,r10,29456
	ctx.r10.s64 = ctx.r10.s64 + 29456;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8234E5C4:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x8234e5c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234E5C4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r27,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r27.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82565408
	ctx.lr = 0x8234E5E8;
	sub_82565408(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8234ce28
	ctx.lr = 0x8234E5F4;
	sub_8234CE28(ctx, base);
	// lis r11,16256
	ctx.r11.s64 = 1065353216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// lfs f0,13828(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13828);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stb r30,664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 664, ctx.r30.u8);
	// stfs f30,16(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stb r30,665(r31)
	PPC_STORE_U8(ctx.r31.u32 + 665, ctx.r30.u8);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r30,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
	// stfs f30,24(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stb r30,666(r31)
	PPC_STORE_U8(ctx.r31.u32 + 666, ctx.r30.u8);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// sth r30,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r30.u16);
	// bl 0x82565408
	ctx.lr = 0x8234E650;
	sub_82565408(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234E660"))) PPC_WEAK_FUNC(sub_8234E660);
PPC_FUNC_IMPL(__imp__sub_8234E660) {
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
	// lis r3,2
	ctx.r3.s64 = 131072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// bl 0x82565408
	ctx.lr = 0x8234E688;
	sub_82565408(ctx, base);
	// lbz r10,666(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 666);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234e754
	if (ctx.cr6.eq) goto loc_8234E754;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234e70c
	if (!ctx.cr6.eq) goto loc_8234E70C;
	// lhz r9,46(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234e750
	if (ctx.cr6.eq) goto loc_8234E750;
	// lbz r7,212(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// beq cr6,0x8234e6c8
	if (ctx.cr6.eq) goto loc_8234E6C8;
	// addi r4,r31,492
	ctx.r4.s64 = ctx.r31.s64 + 492;
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// bl 0x82564f08
	ctx.lr = 0x8234E6C8;
	sub_82564F08(ctx, base);
loc_8234E6C8:
	// lwz r6,660(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234e6f0
	if (ctx.cr6.eq) goto loc_8234E6F0;
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// bl 0x82564d48
	ctx.lr = 0x8234E6DC;
	sub_82564D48(ctx, base);
	// lwz r3,660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8234E6F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234E6F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// bl 0x82564da0
	ctx.lr = 0x8234E6FC;
	sub_82564DA0(ctx, base);
	// lhz r3,46(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// andi. r11,r3,65527
	ctx.r11.u64 = ctx.r3.u64 & 65527;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r11.u16);
	// b 0x8234e750
	goto loc_8234E750;
loc_8234E70C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234cb38
	ctx.lr = 0x8234E714;
	sub_8234CB38(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234e750
	if (ctx.cr6.eq) goto loc_8234E750;
	// lhz r8,46(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// lbz r9,212(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// ori r7,r8,8
	ctx.r7.u64 = ctx.r8.u64 | 8;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// sth r7,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r7.u16);
	// beq cr6,0x8234e744
	if (ctx.cr6.eq) goto loc_8234E744;
	// addi r4,r31,492
	ctx.r4.s64 = ctx.r31.s64 + 492;
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// bl 0x82564eb0
	ctx.lr = 0x8234E744;
	sub_82564EB0(ctx, base);
loc_8234E744:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// bl 0x82564df0
	ctx.lr = 0x8234E750;
	sub_82564DF0(ctx, base);
loc_8234E750:
	// stb r30,666(r31)
	PPC_STORE_U8(ctx.r31.u32 + 666, ctx.r30.u8);
loc_8234E754:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// bl 0x82565408
	ctx.lr = 0x8234E760;
	sub_82565408(ctx, base);
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

__attribute__((alias("__imp__sub_8234E778"))) PPC_WEAK_FUNC(sub_8234E778);
PPC_FUNC_IMPL(__imp__sub_8234E778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8234E780;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8259bb9c
	ctx.lr = 0x8234E788;
	__savefpr_25(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// fmr f26,f4
	ctx.f26.f64 = ctx.f4.f64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// fmr f31,f5
	ctx.f31.f64 = ctx.f5.f64;
	// addi r11,r1,276
	ctx.r11.s64 = ctx.r1.s64 + 276;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r25,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r25.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8234E7BC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8234e7bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234E7BC;
	// lis r24,-32256
	ctx.r24.s64 = -2113929216;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,2864(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fmr f25,f0
	ctx.f25.f64 = ctx.f0.f64;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f25,96(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq cr6,0x8234ede8
	if (ctx.cr6.eq) goto loc_8234EDE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234cb38
	ctx.lr = 0x8234E7F4;
	sub_8234CB38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// bl 0x82565408
	ctx.lr = 0x8234E804;
	sub_82565408(ctx, base);
	// lbz r10,666(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 666);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234eddc
	if (!ctx.cr6.eq) goto loc_8234EDDC;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234e840
	if (ctx.cr6.eq) goto loc_8234E840;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348bb8
	ctx.lr = 0x8234E828;
	sub_82348BB8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82349c50
	ctx.lr = 0x8234E83C;
	sub_82349C50(ctx, base);
	// lfs f25,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f25.f64 = double(temp.f32);
loc_8234E840:
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lhz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f12,2868(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f13,f9,f31
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// beq cr6,0x8234e884
	if (ctx.cr6.eq) goto loc_8234E884;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x8234e888
	goto loc_8234E888;
loc_8234E884:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_8234E888:
	// rlwinm r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// fmuls f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234e8a0
	if (ctx.cr6.eq) goto loc_8234E8A0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x8234e8a4
	goto loc_8234E8A4;
loc_8234E8A0:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_8234E8A4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fsubs f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// rlwinm r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfd f11,23112(r10)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 23112);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f30,-4840(r10)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4840);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsel f13,f7,f30,f13
	ctx.f13.f64 = ctx.f7.f64 >= 0.0 ? ctx.f30.f64 : ctx.f13.f64;
	// lfd f29,-1600(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -1600);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f10,22936(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22936);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsel f28,f13,f13,f29
	ctx.f28.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f29.f64;
	// fsel f0,f6,f11,f0
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fsubs f5,f0,f12
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f27,f5,f0,f30
	ctx.f27.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
	// beq cr6,0x8234e934
	if (ctx.cr6.eq) goto loc_8234E934;
	// lfs f4,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f0,f4,f26
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f26.f64));
	// lfs f3,2864(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 2864);
	ctx.f3.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// bge cr6,0x8234e934
	if (!ctx.cr6.lt) goto loc_8234E934;
	// rlwinm r6,r11,0,16,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r6,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r6.u16);
	// bl 0x8234cb38
	ctx.lr = 0x8234E918;
	sub_8234CB38(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8234e930
	if (!ctx.cr6.eq) goto loc_8234E930;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// bl 0x82564da0
	ctx.lr = 0x8234E930;
	sub_82564DA0(ctx, base);
loc_8234E930:
	// lfs f12,2868(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
loc_8234E934:
	// lhz r4,46(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// rlwinm r3,r4,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234e99c
	if (ctx.cr6.eq) goto loc_8234E99C;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,2864(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 2864);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// ble cr6,0x8234e984
	if (!ctx.cr6.gt) goto loc_8234E984;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234e974
	if (ctx.cr6.eq) goto loc_8234E974;
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f11,f0,f26
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// fdivs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmuls f28,f13,f28
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// b 0x8234e99c
	goto loc_8234E99C;
loc_8234E974:
	// lhz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// andi. r10,r11,65531
	ctx.r10.u64 = ctx.r11.u64 & 65531;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r10,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r10.u16);
	// b 0x8234e99c
	goto loc_8234E99C;
loc_8234E984:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234ca90
	ctx.lr = 0x8234E98C;
	sub_8234CA90(ctx, base);
	// lhz r9,46(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// lfs f12,2868(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// andi. r8,r9,65531
	ctx.r8.u64 = ctx.r9.u64 & 65531;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r8,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r8.u16);
loc_8234E99C:
	// li r6,2
	ctx.r6.s64 = 2;
	// lbz r7,212(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 212);
	// lis r28,-32047
	ctx.r28.s64 = -2100232192;
	// lwz r26,220(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// fmr f31,f12
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f12.f64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r25.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r6,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r6.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r6,13096(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 13096);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stw r4,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stb r11,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r11.u8);
	// stb r6,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r6.u8);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stb r6,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r6.u8);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// bne cr6,0x8234ea04
	if (!ctx.cr6.eq) goto loc_8234EA04;
	// lbz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 224);
	// b 0x8234ea08
	goto loc_8234EA08;
loc_8234EA04:
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
loc_8234EA08:
	// lbz r8,665(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 665);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234ec4c
	if (ctx.cr6.eq) goto loc_8234EC4C;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// addi r5,r31,540
	ctx.r5.s64 = ctx.r31.s64 + 540;
	// lhz r7,46(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r4,r7,0,21,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x400;
	// stw r5,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// beq cr6,0x8234ea70
	if (ctx.cr6.eq) goto loc_8234EA70;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234ea58
	if (ctx.cr6.eq) goto loc_8234EA58;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x8234eaac
	goto loc_8234EAAC;
loc_8234EA58:
	// lhz r8,46(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// rlwinm r7,r8,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8234eaa8
	if (ctx.cr6.eq) goto loc_8234EAA8;
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x8234eaac
	goto loc_8234EAAC;
loc_8234EA70:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8234EA88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234EAA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8234eaac
	goto loc_8234EAAC;
loc_8234EAA8:
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8234EAAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348590
	ctx.lr = 0x8234EAB4;
	sub_82348590(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234eb18
	if (ctx.cr6.eq) goto loc_8234EB18;
	// lfs f10,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f9,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f7,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f5,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f3,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// fneg f6,f9
	ctx.f6.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfs f1,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fneg f4,f7
	ctx.f4.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fneg f2,f5
	ctx.f2.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f0,f3
	ctx.f0.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8234c648
	ctx.lr = 0x8234EB18;
	sub_8234C648(ctx, base);
loc_8234EB18:
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// li r5,33
	ctx.r5.s64 = 33;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x825861e8
	ctx.lr = 0x8234EB2C;
	sub_825861E8(ctx, base);
	// lbz r6,13096(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 13096);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234eb84
	if (ctx.cr6.eq) goto loc_8234EB84;
	// lbz r7,216(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234EB48:
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r11,135
	ctx.r3.s64 = ctx.r11.s64 + 135;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,180
	ctx.r30.s64 = ctx.r1.s64 + 180;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stbx r4,r9,r5
	PPC_STORE_U8(ctx.r9.u32 + ctx.r5.u32, ctx.r4.u8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lfsx f12,r3,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r30
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, temp.u32);
	// blt cr6,0x8234eb48
	if (ctx.cr6.lt) goto loc_8234EB48;
loc_8234EB84:
	// cmplwi cr6,r8,6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 6, ctx.xer);
	// bne cr6,0x8234ec44
	if (!ctx.cr6.eq) goto loc_8234EC44;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,688(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,22904
	ctx.r10.s64 = ctx.r11.s64 + 22904;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8234ebc0
	if (ctx.cr6.gt) goto loc_8234EBC0;
	// bso cr6,0x8234ebc0
	if (ctx.cr6.so) goto loc_8234EBC0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4824);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8234ebc0
	if (ctx.cr6.lt) goto loc_8234EBC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x8234ebc4
	if (!ctx.cr6.so) goto loc_8234EBC4;
loc_8234EBC0:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234EBC4:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234ec30
	if (!ctx.cr6.eq) goto loc_8234EC30;
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8259c328
	ctx.lr = 0x8234EBE0;
	sub_8259C328(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f10,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f8,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f6.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,23104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f7,180(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f5,188(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x8259c400
	ctx.lr = 0x8234EC1C;
	sub_8259C400(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// lfs f3,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f3.f64 = double(temp.f32);
	// lbz r6,13096(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 13096);
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// stfs f2,196(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
loc_8234EC30:
	// lfs f0,2868(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f25,f0
	ctx.f1.f64 = double(float(ctx.f25.f64 - ctx.f0.f64));
	// fsel f0,f1,f30,f25
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f30.f64 : ctx.f25.f64;
	// fsel f0,f0,f0,f29
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f29.f64;
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
loc_8234EC44:
	// lfs f31,300(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8234eca8
	goto loc_8234ECA8;
loc_8234EC4C:
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234ec90
	if (ctx.cr6.eq) goto loc_8234EC90;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234EC60:
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lfs f13,2864(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// stbx r5,r9,r4
	PPC_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r5.u8);
	// stfsx f13,r9,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// blt cr6,0x8234ec60
	if (ctx.cr6.lt) goto loc_8234EC60;
loc_8234EC90:
	// lfs f0,680(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,684(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f13,236(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
loc_8234ECA8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stb r6,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r6.u8);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// ori r8,r11,49928
	ctx.r8.u64 = ctx.r11.u64 | 49928;
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,13144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13144);
	// lfsx f13,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8234ed08
	if (ctx.cr6.eq) goto loc_8234ED08;
	// lfs f0,676(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,180
	ctx.r11.s64 = ctx.r1.s64 + 180;
loc_8234ECE0:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stb r6,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r6.u8);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,48(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// blt cr6,0x8234ece0
	if (ctx.cr6.lt) goto loc_8234ECE0;
loc_8234ED08:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// bl 0x82564be0
	ctx.lr = 0x8234ED14;
	sub_82564BE0(ctx, base);
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82564f60
	ctx.lr = 0x8234ED20;
	sub_82564F60(ctx, base);
	// clrldi r5,r26,32
	ctx.r5.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// fmuls f9,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// lfs f0,2864(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f0,-1536(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1536);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f13,23096(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 23096);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fdivs f5,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 / ctx.f6.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vlogefp v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	ctx.v13.f32[0] = log2f(ctx.v0.f32[0]);
	ctx.v13.f32[1] = log2f(ctx.v0.f32[1]);
	ctx.v13.f32[2] = log2f(ctx.v0.f32[2]);
	ctx.v13.f32[3] = log2f(ctx.v0.f32[3]);
	// stvx v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-15148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15148);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsel f0,f4,f0,f12
	ctx.f0.f64 = ctx.f4.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// lfs f12,23088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23088);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f3,f0,f12
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f1,f3,f0,f13
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// bl 0x82564fd8
	ctx.lr = 0x8234EDA0;
	sub_82564FD8(ctx, base);
	// lhz r10,46(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234eddc
	if (ctx.cr6.eq) goto loc_8234EDDC;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r7,r8,17
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFF;
	// sth r7,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r7.u16);
	// bl 0x8234cb38
	ctx.lr = 0x8234EDC4;
	sub_8234CB38(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8234eddc
	if (!ctx.cr6.eq) goto loc_8234EDDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// bl 0x82564da0
	ctx.lr = 0x8234EDDC;
	sub_82564DA0(ctx, base);
loc_8234EDDC:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// bl 0x82565408
	ctx.lr = 0x8234EDE8;
	sub_82565408(ctx, base);
loc_8234EDE8:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8259bbe8
	ctx.lr = 0x8234EDF4;
	__restfpr_25(ctx, base);
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234EDF8"))) PPC_WEAK_FUNC(sub_8234EDF8);
PPC_FUNC_IMPL(__imp__sub_8234EDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8234EE00;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 | 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82565408
	ctx.lr = 0x8234EE20;
	sub_82565408(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234cb38
	ctx.lr = 0x8234EE28;
	sub_8234CB38(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ori r28,r9,3
	ctx.r28.u64 = ctx.r9.u64 | 3;
	// beq cr6,0x8234f120
	if (ctx.cr6.eq) goto loc_8234F120;
	// lwz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8234ee54
	if (!ctx.cr6.eq) goto loc_8234EE54;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234EE54:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8234ee68
	if (ctx.cr6.eq) goto loc_8234EE68;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
loc_8234EE68:
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r3,r4,0,26,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234ee80
	if (!ctx.cr6.eq) goto loc_8234EE80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234EE80:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234ee94
	if (ctx.cr6.eq) goto loc_8234EE94;
	// lfs f13,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
loc_8234EE94:
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r8,r9,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8234eeac
	if (!ctx.cr6.eq) goto loc_8234EEAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234EEAC:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234eec0
	if (ctx.cr6.eq) goto loc_8234EEC0;
	// lfs f12,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
loc_8234EEC0:
	// lwz r5,140(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r4,r5,0,14,14
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234eed8
	if (!ctx.cr6.eq) goto loc_8234EED8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234EED8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234ef24
	if (ctx.cr6.eq) goto loc_8234EF24;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f11,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8234c648
	ctx.lr = 0x8234EF24;
	sub_8234C648(ctx, base);
loc_8234EF24:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234ef3c
	if (!ctx.cr6.eq) goto loc_8234EF3C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234EF3C:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8234ef60
	if (ctx.cr6.eq) goto loc_8234EF60;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8234EF60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234EF60:
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r3,r4,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234ef78
	if (!ctx.cr6.eq) goto loc_8234EF78;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234EF78:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234ef90
	if (ctx.cr6.eq) goto loc_8234EF90;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234c6b8
	ctx.lr = 0x8234EF90;
	sub_8234C6B8(ctx, base);
loc_8234EF90:
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r8,r9,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8234efa8
	if (!ctx.cr6.eq) goto loc_8234EFA8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234EFA8:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234efc0
	if (ctx.cr6.eq) goto loc_8234EFC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234cf30
	ctx.lr = 0x8234EFC0;
	sub_8234CF30(ctx, base);
loc_8234EFC0:
	// lwz r5,140(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r4,r5,0,22,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234efd8
	if (!ctx.cr6.eq) goto loc_8234EFD8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234EFD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234eff0
	if (ctx.cr6.eq) goto loc_8234EFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234cfb8
	ctx.lr = 0x8234EFF0;
	sub_8234CFB8(ctx, base);
loc_8234EFF0:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234f008
	if (!ctx.cr6.eq) goto loc_8234F008;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234F008:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8234f020
	if (ctx.cr6.eq) goto loc_8234F020;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234ce28
	ctx.lr = 0x8234F020;
	sub_8234CE28(ctx, base);
loc_8234F020:
	// lwz r6,140(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r5,r6,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8234f038
	if (!ctx.cr6.eq) goto loc_8234F038;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234F038:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234f05c
	if (ctx.cr6.eq) goto loc_8234F05C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82565408
	ctx.lr = 0x8234F050;
	sub_82565408(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f31,676(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 676, temp.u32);
	// bl 0x82565408
	ctx.lr = 0x8234F05C;
	sub_82565408(ctx, base);
loc_8234F05C:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234f074
	if (!ctx.cr6.eq) goto loc_8234F074;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234F074:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234f0a8
	if (ctx.cr6.eq) goto loc_8234F0A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8234f0a8
	if (!ctx.cr6.gt) goto loc_8234F0A8;
	// lhz r7,46(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 46);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// ori r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 4;
	// sth r6,46(r30)
	PPC_STORE_U16(ctx.r30.u32 + 46, ctx.r6.u16);
loc_8234F0A8:
	// lwz r5,140(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r4,r5,0,6,6
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234f0c0
	if (!ctx.cr6.eq) goto loc_8234F0C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234F0C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f0e4
	if (ctx.cr6.eq) goto loc_8234F0E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82565408
	ctx.lr = 0x8234F0D8;
	sub_82565408(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f31,688(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 688, temp.u32);
	// bl 0x82565408
	ctx.lr = 0x8234F0E4;
	sub_82565408(ctx, base);
loc_8234F0E4:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234f0fc
	if (!ctx.cr6.eq) goto loc_8234F0FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234F0FC:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8234f120
	if (ctx.cr6.eq) goto loc_8234F120;
	// lfs f5,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f5,668(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 668, temp.u32);
	// lfs f4,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,672(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 672, temp.u32);
	// bl 0x82349b90
	ctx.lr = 0x8234F120;
	sub_82349B90(ctx, base);
loc_8234F120:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82565408
	ctx.lr = 0x8234F128;
	sub_82565408(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234F138"))) PPC_WEAK_FUNC(sub_8234F138);
PPC_FUNC_IMPL(__imp__sub_8234F138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8234F140;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234f170
	if (!ctx.cr6.eq) goto loc_8234F170;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F170:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234f184
	if (ctx.cr6.eq) goto loc_8234F184;
	// lwz r30,80(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// b 0x8234f188
	goto loc_8234F188;
loc_8234F184:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8234F188:
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8234F19C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,23120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8234f1d0
	if (!ctx.cr6.lt) goto loc_8234F1D0;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8234f1d0
	if (!ctx.cr6.eq) goto loc_8234F1D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8234F1D0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r27,r11,1
	ctx.r27.u64 = ctx.r11.u64 | 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82565408
	ctx.lr = 0x8234F1E0;
	sub_82565408(ctx, base);
	// stb r25,666(r31)
	PPC_STORE_U8(ctx.r31.u32 + 666, ctx.r25.u8);
	// stb r25,665(r31)
	PPC_STORE_U8(ctx.r31.u32 + 665, ctx.r25.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,140(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// rlwinm r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234f200
	if (!ctx.cr6.eq) goto loc_8234F200;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F200:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r30,r11,13232
	ctx.r30.s64 = ctx.r11.s64 + 13232;
	// beq cr6,0x8234f220
	if (ctx.cr6.eq) goto loc_8234F220;
	// lbz r6,144(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 144);
	// stb r6,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r6.u8);
	// b 0x8234f228
	goto loc_8234F228;
loc_8234F220:
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
loc_8234F228:
	// lwz r5,140(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234f240
	if (!ctx.cr6.eq) goto loc_8234F240;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F240:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f258
	if (ctx.cr6.eq) goto loc_8234F258;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x8234cce0
	ctx.lr = 0x8234F258;
	sub_8234CCE0(ctx, base);
loc_8234F258:
	// lwz r10,140(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234f270
	if (!ctx.cr6.eq) goto loc_8234F270;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F270:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8234f284
	if (ctx.cr6.eq) goto loc_8234F284;
	// lfs f0,84(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8234f288
	goto loc_8234F288;
loc_8234F284:
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_8234F288:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r6,140(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r5,r6,0,26,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8234f2a4
	if (!ctx.cr6.eq) goto loc_8234F2A4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F2A4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234f2bc
	if (ctx.cr6.eq) goto loc_8234F2BC;
	// lfs f13,92(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x8234f2d4
	goto loc_8234F2D4;
loc_8234F2BC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234F2D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_8234F2D4:
	// lwz r9,140(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r8,r9,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8234f2ec
	if (!ctx.cr6.eq) goto loc_8234F2EC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F2EC:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234f304
	if (ctx.cr6.eq) goto loc_8234F304;
	// lfs f12,100(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// b 0x8234f30c
	goto loc_8234F30C;
loc_8234F304:
	// lfs f0,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_8234F30C:
	// lwz r5,140(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r4,r5,0,27,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234f324
	if (!ctx.cr6.eq) goto loc_8234F324;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F324:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f348
	if (ctx.cr6.eq) goto loc_8234F348;
	// lfs f31,88(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82565408
	ctx.lr = 0x8234F33C;
	sub_82565408(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r28,r10,3
	ctx.r28.u64 = ctx.r10.u64 | 3;
	// b 0x8234f358
	goto loc_8234F358;
loc_8234F348:
	// lfs f31,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82565408
	ctx.lr = 0x8234F350;
	sub_82565408(ctx, base);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r28,r9,3
	ctx.r28.u64 = ctx.r9.u64 | 3;
loc_8234F358:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f31,676(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// bl 0x82565408
	ctx.lr = 0x8234F364;
	sub_82565408(ctx, base);
	// lwz r8,140(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r7,r8,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8234f37c
	if (!ctx.cr6.eq) goto loc_8234F37C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F37C:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8234f394
	if (ctx.cr6.eq) goto loc_8234F394;
	// lbz r4,145(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 145);
	// b 0x8234f398
	goto loc_8234F398;
loc_8234F394:
	// lbz r4,145(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 145);
loc_8234F398:
	// bl 0x8234d040
	ctx.lr = 0x8234F39C;
	sub_8234D040(ctx, base);
	// lwz r4,140(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r3,r4,0,18,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8234f3b4
	if (!ctx.cr6.eq) goto loc_8234F3B4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F3B4:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,2864
	ctx.r11.s64 = ctx.r11.s64 + 2864;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8234f3e8
	if (ctx.cr6.eq) goto loc_8234F3E8;
	// lfs f13,108(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8234f408
	if (!ctx.cr6.gt) goto loc_8234F408;
	// lhz r9,46(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// sth r8,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r8.u16);
	// b 0x8234f400
	goto loc_8234F400;
loc_8234F3E8:
	// lfs f13,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8234f408
	if (!ctx.cr6.gt) goto loc_8234F408;
	// lhz r7,46(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// ori r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 4;
	// sth r6,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r6.u16);
loc_8234F400:
	// stfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_8234F408:
	// lwz r5,140(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r5,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234f420
	if (!ctx.cr6.eq) goto loc_8234F420;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F420:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234f4ac
	if (ctx.cr6.eq) goto loc_8234F4AC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8234f43c
	if (!ctx.cr6.eq) goto loc_8234F43C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F43C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234f474
	if (ctx.cr6.eq) goto loc_8234F474;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,104(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,22904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22904);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8234f47c
	if (ctx.cr6.gt) goto loc_8234F47C;
	// bso cr6,0x8234f47c
	if (ctx.cr6.so) goto loc_8234F47C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-4824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4824);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8234f47c
	if (ctx.cr6.lt) goto loc_8234F47C;
	// bso cr6,0x8234f47c
	if (ctx.cr6.so) goto loc_8234F47C;
loc_8234F474:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8234f480
	goto loc_8234F480;
loc_8234F47C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F480:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8234f49c
	if (!ctx.cr6.eq) goto loc_8234F49C;
	// lhz r7,46(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// stfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// sth r6,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r6.u16);
loc_8234F49C:
	// lhz r5,46(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// ori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 | 1;
	// sth r4,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r4.u16);
	// b 0x8234f4e4
	goto loc_8234F4E4;
loc_8234F4AC:
	// lhz r3,46(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// andi. r11,r3,65533
	ctx.r11.u64 = ctx.r3.u64 & 65533;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r11.u16);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234f4d0
	if (!ctx.cr6.eq) goto loc_8234F4D0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F4D0:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234f4e0
	if (ctx.cr6.eq) goto loc_8234F4E0;
	// lfs f0,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
loc_8234F4E0:
	// stfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
loc_8234F4E4:
	// lwz r7,140(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r6,r7,0,10,10
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8234f4fc
	if (!ctx.cr6.eq) goto loc_8234F4FC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F4FC:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234f534
	if (ctx.cr6.eq) goto loc_8234F534;
	// lbz r3,153(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 153);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234f524
	if (ctx.cr6.eq) goto loc_8234F524;
	// lhz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// sth r10,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r10.u16);
	// b 0x8234f55c
	goto loc_8234F55C;
loc_8234F524:
	// lhz r9,46(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// andi. r8,r9,65519
	ctx.r8.u64 = ctx.r9.u64 & 65519;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r8,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r8.u16);
	// b 0x8234f55c
	goto loc_8234F55C;
loc_8234F534:
	// lbz r7,153(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 153);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8234f550
	if (ctx.cr6.eq) goto loc_8234F550;
	// lhz r6,46(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// ori r5,r6,16
	ctx.r5.u64 = ctx.r6.u64 | 16;
	// sth r5,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r5.u16);
	// b 0x8234f55c
	goto loc_8234F55C;
loc_8234F550:
	// lhz r4,46(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// andi. r3,r4,65519
	ctx.r3.u64 = ctx.r4.u64 & 65519;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// sth r3,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r3.u16);
loc_8234F55C:
	// lwz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234f574
	if (!ctx.cr6.eq) goto loc_8234F574;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F574:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234f5ac
	if (ctx.cr6.eq) goto loc_8234F5AC;
	// lbz r7,152(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 152);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8234f59c
	if (ctx.cr6.eq) goto loc_8234F59C;
	// lhz r6,46(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// ori r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 | 32;
	// sth r5,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r5.u16);
	// b 0x8234f5d4
	goto loc_8234F5D4;
loc_8234F59C:
	// lhz r4,46(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// andi. r3,r4,65503
	ctx.r3.u64 = ctx.r4.u64 & 65503;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// sth r3,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r3.u16);
	// b 0x8234f5d4
	goto loc_8234F5D4;
loc_8234F5AC:
	// lbz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f5c8
	if (ctx.cr6.eq) goto loc_8234F5C8;
	// lhz r10,46(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// sth r9,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r9.u16);
	// b 0x8234f5d4
	goto loc_8234F5D4;
loc_8234F5C8:
	// lhz r8,46(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// andi. r7,r8,65503
	ctx.r7.u64 = ctx.r8.u64 & 65503;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sth r7,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r7.u16);
loc_8234F5D4:
	// lwz r6,140(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8234f5ec
	if (!ctx.cr6.eq) goto loc_8234F5EC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F5EC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8234f61c
	if (ctx.cr6.eq) goto loc_8234F61C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234F610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,665(r31)
	PPC_STORE_U8(ctx.r31.u32 + 665, ctx.r9.u8);
	// b 0x8234f630
	goto loc_8234F630;
loc_8234F61C:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8234F630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234F630:
	// lwz r6,140(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r5,r6,0,14,14
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8234f648
	if (!ctx.cr6.eq) goto loc_8234F648;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F648:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234f694
	if (ctx.cr6.eq) goto loc_8234F694;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f11,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f10,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f9,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8234c648
	ctx.lr = 0x8234F694;
	sub_8234C648(ctx, base);
loc_8234F694:
	// lwz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234f6ac
	if (!ctx.cr6.eq) goto loc_8234F6AC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F6AC:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// bne cr6,0x8234f6c4
	if (!ctx.cr6.eq) goto loc_8234F6C4;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
loc_8234F6C4:
	// bl 0x8234c6b8
	ctx.lr = 0x8234F6C8;
	sub_8234C6B8(ctx, base);
	// lwz r7,140(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r6,r7,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8234f6e0
	if (!ctx.cr6.eq) goto loc_8234F6E0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F6E0:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234f6f8
	if (ctx.cr6.eq) goto loc_8234F6F8;
	// lfs f1,116(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8234f6fc
	goto loc_8234F6FC;
loc_8234F6F8:
	// lfs f1,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
loc_8234F6FC:
	// bl 0x8234cf30
	ctx.lr = 0x8234F700;
	sub_8234CF30(ctx, base);
	// lwz r3,140(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// rlwinm r11,r3,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8234f718
	if (!ctx.cr6.eq) goto loc_8234F718;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F718:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234f730
	if (ctx.cr6.eq) goto loc_8234F730;
	// lfs f1,112(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8234f734
	goto loc_8234F734;
loc_8234F730:
	// lfs f1,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
loc_8234F734:
	// bl 0x8234cfb8
	ctx.lr = 0x8234F738;
	sub_8234CFB8(ctx, base);
	// lwz r8,140(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r7,r8,0,11,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8234f750
	if (!ctx.cr6.eq) goto loc_8234F750;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F750:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8234f7d0
	if (ctx.cr6.eq) goto loc_8234F7D0;
	// lbz r4,146(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 146);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234f77c
	if (ctx.cr6.eq) goto loc_8234F77C;
	// lhz r3,46(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// andi. r11,r3,58367
	ctx.r11.u64 = ctx.r3.u64 & 58367;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 1024;
	// sth r10,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r10.u16);
	// b 0x8234f788
	goto loc_8234F788;
loc_8234F77C:
	// lhz r9,46(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// andi. r8,r9,58367
	ctx.r8.u64 = ctx.r9.u64 & 58367;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r8,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r8.u16);
loc_8234F788:
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8234F7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8234f7bc
	if (!ctx.cr6.eq) goto loc_8234F7BC;
	// lhz r4,46(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// andi. r3,r4,59391
	ctx.r3.u64 = ctx.r4.u64 & 59391;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r11,r3,2048
	ctx.r11.u64 = ctx.r3.u64 | 2048;
	// b 0x8234f7f8
	goto loc_8234F7F8;
loc_8234F7BC:
	// lhz r10,46(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// andi. r9,r10,59391
	ctx.r9.u64 = ctx.r10.u64 & 59391;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ori r8,r9,4096
	ctx.r8.u64 = ctx.r9.u64 | 4096;
	// sth r8,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r8.u16);
	// b 0x8234f7fc
	goto loc_8234F7FC;
loc_8234F7D0:
	// lbz r7,146(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 146);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8234f7f0
	if (ctx.cr6.eq) goto loc_8234F7F0;
	// lhz r6,46(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// andi. r5,r6,58367
	ctx.r5.u64 = ctx.r6.u64 & 58367;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ori r4,r5,1024
	ctx.r4.u64 = ctx.r5.u64 | 1024;
	// sth r4,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r4.u16);
	// b 0x8234f7fc
	goto loc_8234F7FC;
loc_8234F7F0:
	// lhz r3,46(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// andi. r11,r3,58367
	ctx.r11.u64 = ctx.r3.u64 & 58367;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8234F7F8:
	// sth r11,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r11.u16);
loc_8234F7FC:
	// lwz r10,140(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234f814
	if (!ctx.cr6.eq) goto loc_8234F814;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F814:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8234f838
	if (ctx.cr6.eq) goto loc_8234F838;
	// lfs f5,156(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f5,668(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 668, temp.u32);
	// lfs f4,160(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,672(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// bl 0x82349b90
	ctx.lr = 0x8234F838;
	sub_82349B90(ctx, base);
loc_8234F838:
	// lwz r6,140(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r5,r6,0,6,6
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8234f850
	if (!ctx.cr6.eq) goto loc_8234F850;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F850:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x8234f868
	if (ctx.cr6.eq) goto loc_8234F868;
	// lfs f31,148(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8234f888
	goto loc_8234F888;
loc_8234F868:
	// lis r10,-32047
	ctx.r10.s64 = -2100232192;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// addi r10,r10,12608
	ctx.r10.s64 = ctx.r10.s64 + 12608;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f31,r7,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f31.f64 = double(temp.f32);
loc_8234F888:
	// bl 0x82565408
	ctx.lr = 0x8234F88C;
	sub_82565408(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f31,688(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// bl 0x82565408
	ctx.lr = 0x8234F898;
	sub_82565408(ctx, base);
	// lwz r6,140(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r5,r6,0,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8234f8b0
	if (!ctx.cr6.eq) goto loc_8234F8B0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8234F8B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8234f8c8
	if (ctx.cr6.eq) goto loc_8234F8C8;
	// lfs f1,96(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8234f8cc
	goto loc_8234F8CC;
loc_8234F8C8:
	// lfs f1,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
loc_8234F8CC:
	// bl 0x8234ce28
	ctx.lr = 0x8234F8D0;
	sub_8234CE28(ctx, base);
	// lhz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// sth r10,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r10.u16);
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// lwz r11,28912(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28912);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,28912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28912, ctx.r9.u32);
	// lbz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 664);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234f908
	if (!ctx.cr6.eq) goto loc_8234F908;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d68f8
	ctx.lr = 0x8234F908;
	sub_822D68F8(ctx, base);
loc_8234F908:
	// lhz r8,46(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8234f954
	if (!ctx.cr6.eq) goto loc_8234F954;
	// lwz r6,660(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234f948
	if (ctx.cr6.eq) goto loc_8234F948;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234cb38
	ctx.lr = 0x8234F92C;
	sub_8234CB38(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8234f954
	if (!ctx.cr6.eq) goto loc_8234F954;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// bl 0x82564da0
	ctx.lr = 0x8234F944;
	sub_82564DA0(ctx, base);
	// b 0x8234f954
	goto loc_8234F954;
loc_8234F948:
	// lhz r4,46(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 46);
	// ori r3,r4,32768
	ctx.r3.u64 = ctx.r4.u64 | 32768;
	// sth r3,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r3.u16);
loc_8234F954:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r25,664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 664, ctx.r25.u8);
	// bl 0x82565408
	ctx.lr = 0x8234F960;
	sub_82565408(ctx, base);
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

__attribute__((alias("__imp__sub_8234F970"))) PPC_WEAK_FUNC(sub_8234F970);
PPC_FUNC_IMPL(__imp__sub_8234F970) {
	PPC_FUNC_PROLOGUE();
	// b 0x8234edf8
	sub_8234EDF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234F974"))) PPC_WEAK_FUNC(sub_8234F974);
PPC_FUNC_IMPL(__imp__sub_8234F974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234F978"))) PPC_WEAK_FUNC(sub_8234F978);
PPC_FUNC_IMPL(__imp__sub_8234F978) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8234f138
	sub_8234F138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8234F980"))) PPC_WEAK_FUNC(sub_8234F980);
PPC_FUNC_IMPL(__imp__sub_8234F980) {
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
	// lbz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 488);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f9b4
	if (ctx.cr6.eq) goto loc_8234F9B4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8234F9B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234F9B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8234fa78
	if (ctx.cr6.gt) goto loc_8234FA78;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// addi r12,r12,-1572
	ctx.r12.s64 = ctx.r12.s64 + -1572;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8234F9F8;
	case 1:
		goto loc_8234FA78;
	case 2:
		goto loc_8234F9F8;
	case 3:
		goto loc_8234F9F8;
	case 4:
		goto loc_8234FA18;
	case 5:
		goto loc_8234FA40;
	case 6:
		goto loc_8234FAD8;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-1544(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1544);
	// lwz r17,-1416(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1416);
	// lwz r17,-1544(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1544);
	// lwz r17,-1544(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1544);
	// lwz r17,-1512(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1512);
	// lwz r17,-1472(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1472);
	// lwz r17,-1320(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1320);
loc_8234F9F8:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8234FA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234fa78
	if (ctx.cr6.eq) goto loc_8234FA78;
loc_8234FA18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82349ef0
	ctx.lr = 0x8234FA20;
	sub_82349EF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82349e00
	ctx.lr = 0x8234FA28;
	sub_82349E00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82349f40
	ctx.lr = 0x8234FA30;
	sub_82349F40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82349e68
	ctx.lr = 0x8234FA38;
	sub_82349E68(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
loc_8234FA40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234d338
	ctx.lr = 0x8234FA48;
	sub_8234D338(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234fa78
	if (ctx.cr6.eq) goto loc_8234FA78;
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234fa94
	if (ctx.cr6.eq) goto loc_8234FA94;
	// lwz r10,472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234fa94
	if (ctx.cr6.eq) goto loc_8234FA94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82349e68
	ctx.lr = 0x8234FA78;
	sub_82349E68(ctx, base);
loc_8234FA78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234FA7C:
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
loc_8234FA94:
	// lwz r9,460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234fac8
	if (ctx.cr6.eq) goto loc_8234FAC8;
loc_8234FAA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234d400
	ctx.lr = 0x8234FAB4;
	sub_8234D400(ctx, base);
	// lwz r7,460(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r6,r7,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8234faa8
	if (ctx.cr6.lt) goto loc_8234FAA8;
loc_8234FAC8:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stb r4,487(r31)
	PPC_STORE_U8(ctx.r31.u32 + 487, ctx.r4.u8);
loc_8234FAD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8234fa7c
	goto loc_8234FA7C;
}

__attribute__((alias("__imp__sub_8234FAE0"))) PPC_WEAK_FUNC(sub_8234FAE0);
PPC_FUNC_IMPL(__imp__sub_8234FAE0) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x8234fb9c
	if (ctx.cr6.gt) goto loc_8234FB9C;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// addi r12,r12,-1244
	ctx.r12.s64 = ctx.r12.s64 + -1244;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8234FC8C;
	case 1:
		goto loc_8234FB60;
	case 2:
		goto loc_8234FB9C;
	case 3:
		goto loc_8234FB60;
	case 4:
		goto loc_8234FB60;
	case 5:
		goto loc_8234FB9C;
	case 6:
		goto loc_8234FBC0;
	case 7:
		goto loc_8234FC2C;
	case 8:
		goto loc_8234FC04;
	case 9:
		goto loc_8234FC2C;
	case 10:
		goto loc_8234FC04;
	case 11:
		goto loc_8234FC04;
	case 12:
		goto loc_8234FC2C;
	case 13:
		goto loc_8234FC48;
	case 14:
		goto loc_8234FC74;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-884(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -884);
	// lwz r17,-1184(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1184);
	// lwz r17,-1124(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1124);
	// lwz r17,-1184(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1184);
	// lwz r17,-1184(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1184);
	// lwz r17,-1124(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1124);
	// lwz r17,-1088(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1088);
	// lwz r17,-980(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -980);
	// lwz r17,-1020(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1020);
	// lwz r17,-980(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -980);
	// lwz r17,-1020(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1020);
	// lwz r17,-1020(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -1020);
	// lwz r17,-980(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -980);
	// lwz r17,-952(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -952);
	// lwz r17,-908(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -908);
loc_8234FB60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234FB74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234fb9c
	if (ctx.cr6.eq) goto loc_8234FB9C;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8234FB94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8234FB9C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r6,488(r31)
	PPC_STORE_U8(ctx.r31.u32 + 488, ctx.r6.u8);
loc_8234FBA8:
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
loc_8234FBC0:
	// addi r30,r31,312
	ctx.r30.s64 = ctx.r31.s64 + 312;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,24(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8234FBD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234fb9c
	if (ctx.cr6.eq) goto loc_8234FB9C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234FBF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x8234fb9c
	goto loc_8234FB9C;
loc_8234FC04:
	// lbz r8,486(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 486);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234fc24
	if (ctx.cr6.eq) goto loc_8234FC24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234d338
	ctx.lr = 0x8234FC18;
	sub_8234D338(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8234fb9c
	if (ctx.cr6.eq) goto loc_8234FB9C;
loc_8234FC24:
	// li r6,13
	ctx.r6.s64 = 13;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
loc_8234FC2C:
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8234FC40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,14
	ctx.r3.s64 = 14;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8234FC48:
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// stb r30,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r30.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234FC60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234fb9c
	if (ctx.cr6.eq) goto loc_8234FB9C;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_8234FC74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82349e00
	ctx.lr = 0x8234FC7C;
	sub_82349E00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82349ef0
	ctx.lr = 0x8234FC84;
	sub_82349EF0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
loc_8234FC8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r30,488(r31)
	PPC_STORE_U8(ctx.r31.u32 + 488, ctx.r30.u8);
	// b 0x8234fba8
	goto loc_8234FBA8;
}

__attribute__((alias("__imp__sub_8234FC98"))) PPC_WEAK_FUNC(sub_8234FC98);
PPC_FUNC_IMPL(__imp__sub_8234FC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8234fd68
	if (ctx.cr6.eq) goto loc_8234FD68;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x8234fd10
	if (ctx.cr6.eq) goto loc_8234FD10;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8234fdbc
	if (!ctx.cr6.eq) goto loc_8234FDBC;
	// lbz r11,486(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 486);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234fce4
	if (ctx.cr6.eq) goto loc_8234FCE4;
	// bl 0x8234d338
	ctx.lr = 0x8234FCD8;
	sub_8234D338(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234fdbc
	if (ctx.cr6.eq) goto loc_8234FDBC;
loc_8234FCE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82349e00
	ctx.lr = 0x8234FCEC;
	sub_82349E00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82349ef0
	ctx.lr = 0x8234FCF4;
	sub_82349EF0(ctx, base);
	// li r9,13
	ctx.r9.s64 = 13;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8234FD10:
	// lbz r8,487(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 487);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234fd24
	if (ctx.cr6.eq) goto loc_8234FD24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82349e68
	ctx.lr = 0x8234FD24;
	sub_82349E68(ctx, base);
loc_8234FD24:
	// lbz r7,486(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 486);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8234fd38
	if (ctx.cr6.eq) goto loc_8234FD38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234d338
	ctx.lr = 0x8234FD38;
	sub_8234D338(ctx, base);
loc_8234FD38:
	// li r6,8
	ctx.r6.s64 = 8;
	// lfs f0,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r6,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// bl 0x8234edf8
	ctx.lr = 0x8234FD54;
	sub_8234EDF8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8234FD68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234d338
	ctx.lr = 0x8234FD70;
	sub_8234D338(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8234fdbc
	if (ctx.cr6.eq) goto loc_8234FDBC;
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// lwz r3,468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8234fdb4
	if (ctx.cr6.eq) goto loc_8234FDB4;
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234fdb4
	if (ctx.cr6.eq) goto loc_8234FDB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82349e68
	ctx.lr = 0x8234FDA0;
	sub_82349E68(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8234FDB4:
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8234FDBC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8234FDD0"))) PPC_WEAK_FUNC(sub_8234FDD0);
PPC_FUNC_IMPL(__imp__sub_8234FDD0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x8234f138
	ctx.lr = 0x8234FDF8;
	sub_8234F138(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234fe18
	if (!ctx.cr6.eq) goto loc_8234FE18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234FE18:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8234fe2c
	if (ctx.cr6.eq) goto loc_8234FE2C;
	// lbz r11,145(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 145);
	// b 0x8234fe30
	goto loc_8234FE30;
loc_8234FE2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234FE30:
	// stb r11,306(r31)
	PPC_STORE_U8(ctx.r31.u32 + 306, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_8234FE4C"))) PPC_WEAK_FUNC(sub_8234FE4C);
PPC_FUNC_IMPL(__imp__sub_8234FE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8234FE50"))) PPC_WEAK_FUNC(sub_8234FE50);
PPC_FUNC_IMPL(__imp__sub_8234FE50) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234fea0
	if (ctx.cr6.eq) goto loc_8234FEA0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x8234febc
	if (!ctx.cr6.eq) goto loc_8234FEBC;
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x8234e660
	ctx.lr = 0x8234FE84;
	sub_8234E660(ctx, base);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
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
loc_8234FEA0:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// bne cr6,0x8234febc
	if (!ctx.cr6.eq) goto loc_8234FEBC;
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// bl 0x8234e660
	ctx.lr = 0x8234FEB4;
	sub_8234E660(ctx, base);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
loc_8234FEBC:
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

__attribute__((alias("__imp__sub_8234FED0"))) PPC_WEAK_FUNC(sub_8234FED0);
PPC_FUNC_IMPL(__imp__sub_8234FED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8234FED8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stw r31,13144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13144, ctx.r31.u32);
	// bl 0x8234a050
	ctx.lr = 0x8234FEF0;
	sub_8234A050(ctx, base);
	// addis r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 196608;
	// addis r9,r31,3
	ctx.r9.s64 = ctx.r31.s64 + 196608;
	// addi r10,r10,-15512
	ctx.r10.s64 = ctx.r10.s64 + -15512;
	// addi r9,r9,-15420
	ctx.r9.s64 = ctx.r9.s64 + -15420;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lfs f0,-15148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15148);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// clrlwi r3,r9,24
	ctx.r3.u64 = ctx.r9.u32 & 0xFF;
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,-15604
	ctx.r11.s64 = ctx.r11.s64 + -15604;
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r27,2
	ctx.r27.s64 = 2;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r10,r7,48000
	ctx.r10.u64 = ctx.r7.u64 | 48000;
	// stb r3,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r3.u8);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stb r4,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r4.u8);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stw r31,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r31.u32);
	// stb r31,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r31.u8);
	// stw r31,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r31.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stb r10,58(r11)
	PPC_STORE_U8(ctx.r11.u32 + 58, ctx.r10.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r9,59(r11)
	PPC_STORE_U8(ctx.r11.u32 + 59, ctx.r9.u8);
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r26,212(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r7,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r8,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r8.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r4,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r4.u32);
	// stw r3,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r3.u32);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// stb r31,56(r30)
	PPC_STORE_U8(ctx.r30.u32 + 56, ctx.r31.u8);
	// stb r27,57(r30)
	PPC_STORE_U8(ctx.r30.u32 + 57, ctx.r27.u8);
	// stb r8,58(r30)
	PPC_STORE_U8(ctx.r30.u32 + 58, ctx.r8.u8);
	// stb r27,59(r30)
	PPC_STORE_U8(ctx.r30.u32 + 59, ctx.r27.u8);
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// stw r31,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
	// stw r31,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r31.u32);
	// stb r31,64(r30)
	PPC_STORE_U8(ctx.r30.u32 + 64, ctx.r31.u8);
	// stb r7,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r7.u8);
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
	// stb r27,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r27.u8);
	// stw r5,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r5.u32);
	// stfs f0,60(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 60, temp.u32);
	// stb r31,56(r29)
	PPC_STORE_U8(ctx.r29.u32 + 56, ctx.r31.u8);
	// stb r27,57(r29)
	PPC_STORE_U8(ctx.r29.u32 + 57, ctx.r27.u8);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stb r8,58(r29)
	PPC_STORE_U8(ctx.r29.u32 + 58, ctx.r8.u8);
	// addis r28,r26,3
	ctx.r28.s64 = ctx.r26.s64 + 196608;
	// stb r27,59(r29)
	PPC_STORE_U8(ctx.r29.u32 + 59, ctx.r27.u8);
	// addi r6,r9,-12008
	ctx.r6.s64 = ctx.r9.s64 + -12008;
	// stw r31,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r31.u32);
	// ori r9,r5,48000
	ctx.r9.u64 = ctx.r5.u64 | 48000;
	// stw r31,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r31.u32);
	// addi r28,r28,-15328
	ctx.r28.s64 = ctx.r28.s64 + -15328;
	// stw r31,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r31.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r31,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r31.u32);
	// stw r31,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r31.u32);
	// addi r24,r26,404
	ctx.r24.s64 = ctx.r26.s64 + 404;
	// stb r31,64(r29)
	PPC_STORE_U8(ctx.r29.u32 + 64, ctx.r31.u8);
	// li r25,192
	ctx.r25.s64 = 192;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// stw r6,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r6.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// stb r10,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r10.u8);
	// stfs f0,60(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 60, temp.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stb r31,56(r28)
	PPC_STORE_U8(ctx.r28.u32 + 56, ctx.r31.u8);
	// stb r27,57(r28)
	PPC_STORE_U8(ctx.r28.u32 + 57, ctx.r27.u8);
	// stb r8,58(r28)
	PPC_STORE_U8(ctx.r28.u32 + 58, ctx.r8.u8);
	// stb r27,59(r28)
	PPC_STORE_U8(ctx.r28.u32 + 59, ctx.r27.u8);
	// stw r31,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r31.u32);
	// stw r31,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r31.u32);
	// stw r31,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r31.u32);
	// stw r31,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r31.u32);
	// stw r31,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r31.u32);
	// stb r31,64(r28)
	PPC_STORE_U8(ctx.r28.u32 + 64, ctx.r31.u8);
	// stb r7,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r7.u8);
	// stw r31,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r31.u32);
	// stb r10,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r10.u8);
	// stb r4,12(r28)
	PPC_STORE_U8(ctx.r28.u32 + 12, ctx.r4.u8);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_823500B4:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8234e450
	ctx.lr = 0x823500C0;
	sub_8234E450(ctx, base);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r24,r24,696
	ctx.r24.s64 = ctx.r24.s64 + 696;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x823500b4
	if (!ctx.cr6.eq) goto loc_823500B4;
	// addis r25,r26,2
	ctx.r25.s64 = ctx.r26.s64 + 131072;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r30,32
	ctx.r30.s64 = 32;
	// addi r25,r25,26260
	ctx.r25.s64 = ctx.r25.s64 + 26260;
loc_823500E0:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8234e450
	ctx.lr = 0x823500EC;
	sub_8234E450(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r25,r25,696
	ctx.r25.s64 = ctx.r25.s64 + 696;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823500e0
	if (!ctx.cr6.eq) goto loc_823500E0;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addis r29,r26,2
	ctx.r29.s64 = ctx.r26.s64 + 131072;
	// li r30,32
	ctx.r30.s64 = 32;
	// addi r29,r29,3988
	ctx.r29.s64 = ctx.r29.s64 + 3988;
loc_8235010C:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234e450
	ctx.lr = 0x82350118;
	sub_8234E450(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,696
	ctx.r29.s64 = ctx.r29.s64 + 696;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8235010c
	if (!ctx.cr6.eq) goto loc_8235010C;
	// addis r30,r26,3
	ctx.r30.s64 = ctx.r26.s64 + 196608;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r30,r30,-17004
	ctx.r30.s64 = ctx.r30.s64 + -17004;
loc_82350134:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e450
	ctx.lr = 0x82350140;
	sub_8234E450(ctx, base);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r30,r30,696
	ctx.r30.s64 = ctx.r30.s64 + 696;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82350134
	if (!ctx.cr6.eq) goto loc_82350134;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r10,r3,49928
	ctx.r10.u64 = ctx.r3.u64 | 49928;
	// ori r8,r9,3948
	ctx.r8.u64 = ctx.r9.u64 | 3948;
	// ori r6,r7,3944
	ctx.r6.u64 = ctx.r7.u64 | 3944;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f0,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r26,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r10.u32, temp.u32);
	// stwx r31,r26,r8
	PPC_STORE_U32(ctx.r26.u32 + ctx.r8.u32, ctx.r31.u32);
	// stwx r31,r26,r6
	PPC_STORE_U32(ctx.r26.u32 + ctx.r6.u32, ctx.r31.u32);
	// bl 0x82348d78
	ctx.lr = 0x82350184;
	sub_82348D78(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235018C"))) PPC_WEAK_FUNC(sub_8235018C);
PPC_FUNC_IMPL(__imp__sub_8235018C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350190"))) PPC_WEAK_FUNC(sub_82350190);
PPC_FUNC_IMPL(__imp__sub_82350190) {
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
	// bl 0x8234e0b8
	ctx.lr = 0x823501A8;
	sub_8234E0B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234d610
	ctx.lr = 0x823501B0;
	sub_8234D610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234d5c0
	ctx.lr = 0x823501B8;
	sub_8234D5C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234d660
	ctx.lr = 0x823501C0;
	sub_8234D660(ctx, base);
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

__attribute__((alias("__imp__sub_823501D4"))) PPC_WEAK_FUNC(sub_823501D4);
PPC_FUNC_IMPL(__imp__sub_823501D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823501D8"))) PPC_WEAK_FUNC(sub_823501D8);
PPC_FUNC_IMPL(__imp__sub_823501D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x823501E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addis r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 131072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r10,-4756
	ctx.r10.s64 = ctx.r10.s64 + -4756;
	// addi r31,r31,3948
	ctx.r31.s64 = ctx.r31.s64 + 3948;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r28,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r28.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82350240
	if (ctx.cr6.eq) goto loc_82350240;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r8,r9,3952
	ctx.r8.u64 = ctx.r9.u64 | 3952;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// mulli r10,r6,696
	ctx.r10.s64 = ctx.r6.s64 * 696;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r3,r4,2
	ctx.r3.s64 = ctx.r4.s64 + 131072;
	// addi r3,r3,26260
	ctx.r3.s64 = ctx.r3.s64 + 26260;
	// b 0x82350244
	goto loc_82350244;
loc_82350240:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82350244:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350280
	if (ctx.cr6.eq) goto loc_82350280;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// ori r9,r10,3928
	ctx.r9.u64 = ctx.r10.u64 | 3928;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x8234f138
	ctx.lr = 0x82350264;
	sub_8234F138(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82350280
	if (!ctx.cr6.eq) goto loc_82350280;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82350280:
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r6,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r6.u8);
	// beq cr6,0x823502a8
	if (ctx.cr6.eq) goto loc_823502A8;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r5,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_823502A8:
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823502B4"))) PPC_WEAK_FUNC(sub_823502B4);
PPC_FUNC_IMPL(__imp__sub_823502B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823502B8"))) PPC_WEAK_FUNC(sub_823502B8);
PPC_FUNC_IMPL(__imp__sub_823502B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x823502C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addis r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 131072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r10,-4756
	ctx.r10.s64 = ctx.r10.s64 + -4756;
	// addi r31,r31,3944
	ctx.r31.s64 = ctx.r31.s64 + 3944;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r28,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r28.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82350320
	if (ctx.cr6.eq) goto loc_82350320;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r8,r9,3984
	ctx.r8.u64 = ctx.r9.u64 | 3984;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// mulli r10,r6,696
	ctx.r10.s64 = ctx.r6.s64 * 696;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r3,r4,3
	ctx.r3.s64 = ctx.r4.s64 + 196608;
	// addi r3,r3,-17004
	ctx.r3.s64 = ctx.r3.s64 + -17004;
	// b 0x82350324
	goto loc_82350324;
loc_82350320:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82350324:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350360
	if (ctx.cr6.eq) goto loc_82350360;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// ori r9,r10,3928
	ctx.r9.u64 = ctx.r10.u64 | 3928;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x8234f138
	ctx.lr = 0x82350344;
	sub_8234F138(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82350360
	if (!ctx.cr6.eq) goto loc_82350360;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_82350360:
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r6,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r6.u8);
	// beq cr6,0x82350388
	if (ctx.cr6.eq) goto loc_82350388;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r5,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82350388:
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350394"))) PPC_WEAK_FUNC(sub_82350394);
PPC_FUNC_IMPL(__imp__sub_82350394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350398"))) PPC_WEAK_FUNC(sub_82350398);
PPC_FUNC_IMPL(__imp__sub_82350398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x823503A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// addi r3,r3,7240
	ctx.r3.s64 = ctx.r3.s64 + 7240;
	// bl 0x8234fed0
	ctx.lr = 0x823503BC;
	sub_8234FED0(ctx, base);
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8234c0b8
	ctx.lr = 0x823503C8;
	sub_8234C0B8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addis r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 524288;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-7980
	ctx.r10.s64 = ctx.r10.s64 + -7980;
loc_823503D8:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stwx r30,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823503d8
	if (ctx.cr6.lt) goto loc_823503D8;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r7.u32);
	// bl 0x82360f70
	ctx.lr = 0x82350400;
	sub_82360F70(ctx, base);
	// lhz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// li r6,1
	ctx.r6.s64 = 1;
	// mulli r11,r5,60
	ctx.r11.s64 = ctx.r5.s64 * 60;
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r7,r8,57692
	ctx.r7.u64 = ctx.r8.u64 | 57692;
	// mulli r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 * 60;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r3,7
	ctx.r3.s64 = 458752;
	// ori r4,r5,57697
	ctx.r4.u64 = ctx.r5.u64 | 57697;
	// mulli r11,r9,60
	ctx.r11.s64 = ctx.r9.s64 * 60;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32047
	ctx.r10.s64 = -2100232192;
	// ori r9,r3,57698
	ctx.r9.u64 = ctx.r3.u64 | 57698;
	// addi r10,r10,13088
	ctx.r10.s64 = ctx.r10.s64 + 13088;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// stbx r30,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u8);
	// stbx r30,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235046C"))) PPC_WEAK_FUNC(sub_8235046C);
PPC_FUNC_IMPL(__imp__sub_8235046C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350470"))) PPC_WEAK_FUNC(sub_82350470);
PPC_FUNC_IMPL(__imp__sub_82350470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82350478;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8234df60
	ctx.lr = 0x82350488;
	sub_8234DF60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823504a4
	if (ctx.cr6.eq) goto loc_823504A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8234edf8
	ctx.lr = 0x823504A4;
	sub_8234EDF8(ctx, base);
loc_823504A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823504B0"))) PPC_WEAK_FUNC(sub_823504B0);
PPC_FUNC_IMPL(__imp__sub_823504B0) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r30,16
	ctx.r30.s64 = 16;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
loc_823504E4:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82350504
	if (ctx.cr6.eq) goto loc_82350504;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8234fc98
	ctx.lr = 0x82350504;
	sub_8234FC98(ctx, base);
loc_82350504:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823504e4
	if (!ctx.cr6.eq) goto loc_823504E4;
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

__attribute__((alias("__imp__sub_82350538"))) PPC_WEAK_FUNC(sub_82350538);
PPC_FUNC_IMPL(__imp__sub_82350538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82350540;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8259bba4
	ctx.lr = 0x82350548;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// fmr f30,f2
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r28,0
	ctx.r28.s64 = 0;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// addis r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 131072;
	// fmr f29,f4
	ctx.f29.f64 = ctx.f4.f64;
	// lis r10,-32047
	ctx.r10.s64 = -2100232192;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// stfs f30,28916(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28916, temp.u32);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r27,r27,3936
	ctx.r27.s64 = ctx.r27.s64 + 3936;
	// addi r8,r10,12608
	ctx.r8.s64 = ctx.r10.s64 + 12608;
	// stfs f31,28920(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28920, temp.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
loc_82350590:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r8,16
	ctx.r6.s64 = ctx.r8.s64 + 16;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// sthx r28,r7,r6
	PPC_STORE_U16(ctx.r7.u32 + ctx.r6.u32, ctx.r28.u16);
	// blt cr6,0x82350590
	if (ctx.cr6.lt) goto loc_82350590;
	// addis r24,r30,2
	ctx.r24.s64 = ctx.r30.s64 + 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// addi r24,r24,3928
	ctx.r24.s64 = ctx.r24.s64 + 3928;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// ori r25,r5,3733
	ctx.r25.u64 = ctx.r5.u64 | 3733;
loc_823505CC:
	// mulli r11,r29,696
	ctx.r11.s64 = ctx.r29.s64 * 696;
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// fmr f5,f27
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f27.f64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r31,r11,404
	ctx.r31.s64 = ctx.r11.s64 + 404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e778
	ctx.lr = 0x823505F8;
	sub_8234E778(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235060C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82350630
	if (ctx.cr6.eq) goto loc_82350630;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stbx r26,r9,r25
	PPC_STORE_U8(ctx.r9.u32 + ctx.r25.u32, ctx.r26.u8);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
loc_82350630:
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// clrlwi r26,r7,24
	ctx.r26.u64 = ctx.r7.u32 & 0xFF;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r29,192
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 192, ctx.xer);
	// blt cr6,0x823505cc
	if (ctx.cr6.lt) goto loc_823505CC;
	// addis r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addi r31,r31,3932
	ctx.r31.s64 = ctx.r31.s64 + 3932;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// ori r27,r6,3732
	ctx.r27.u64 = ctx.r6.u64 | 3732;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_8235065C:
	// mulli r11,r29,400
	ctx.r11.s64 = ctx.r29.s64 * 400;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,24(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82350678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235069c
	if (ctx.cr6.eq) goto loc_8235069C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stbx r28,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r28.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8235069C:
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// clrlwi r28,r9,24
	ctx.r28.u64 = ctx.r9.u32 & 0xFF;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x8235065c
	if (ctx.cr6.lt) goto loc_8235065C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82349048
	ctx.lr = 0x823506BC;
	sub_82349048(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8259bbf0
	ctx.lr = 0x823506C8;
	__restfpr_27(ctx, base);
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823506CC"))) PPC_WEAK_FUNC(sub_823506CC);
PPC_FUNC_IMPL(__imp__sub_823506CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823506D0"))) PPC_WEAK_FUNC(sub_823506D0);
PPC_FUNC_IMPL(__imp__sub_823506D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x823506D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x825c71bc
	ctx.lr = 0x823506EC;
	__imp__XAudioGetSpeakerConfig(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82350708
	if (ctx.cr6.eq) goto loc_82350708;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r30,63
	ctx.r30.s64 = 63;
	// b 0x82350710
	goto loc_82350710;
loc_82350708:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82350710:
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,11
	ctx.r9.s64 = 11;
	// stb r10,13096(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13096, ctx.r10.u8);
	// addi r11,r1,89
	ctx.r11.s64 = ctx.r1.s64 + 89;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82350728:
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82350728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82350728;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82565220
	ctx.lr = 0x8235074C;
	sub_82565220(ctx, base);
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,13408
	ctx.r11.s64 = ctx.r11.s64 + 13408;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// bl 0x82350398
	ctx.lr = 0x82350770;
	sub_82350398(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,23004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23004);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82585070
	ctx.lr = 0x82350780;
	sub_82585070(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350788"))) PPC_WEAK_FUNC(sub_82350788);
PPC_FUNC_IMPL(__imp__sub_82350788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82350790;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8259bba4
	ctx.lr = 0x82350798;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// bl 0x82350538
	ctx.lr = 0x823507B8;
	sub_82350538(ctx, base);
	// addis r25,r30,2
	ctx.r25.s64 = ctx.r30.s64 + 131072;
	// addis r29,r30,2
	ctx.r29.s64 = ctx.r30.s64 + 131072;
	// addi r25,r25,3928
	ctx.r25.s64 = ctx.r25.s64 + 3928;
	// addi r29,r29,3988
	ctx.r29.s64 = ctx.r29.s64 + 3988;
	// li r31,32
	ctx.r31.s64 = 32;
loc_823507CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// fmr f5,f27
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f27.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8234e778
	ctx.lr = 0x823507EC;
	sub_8234E778(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r29,r29,696
	ctx.r29.s64 = ctx.r29.s64 + 696;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823507cc
	if (!ctx.cr6.eq) goto loc_823507CC;
	// addis r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 131072;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r31,3948
	ctx.r31.s64 = ctx.r31.s64 + 3948;
	// addis r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r27,r27,26260
	ctx.r27.s64 = ctx.r27.s64 + 26260;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// ori r26,r11,3952
	ctx.r26.u64 = ctx.r11.u64 | 3952;
loc_82350820:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82350834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82350858
	if (ctx.cr6.eq) goto loc_82350858;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stbx r28,r6,r26
	PPC_STORE_U8(ctx.r6.u32 + ctx.r26.u32, ctx.r28.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
loc_82350858:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// fmr f5,f27
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f27.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8234e778
	ctx.lr = 0x82350878;
	sub_8234E778(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,696
	ctx.r27.s64 = ctx.r27.s64 + 696;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// blt cr6,0x82350820
	if (ctx.cr6.lt) goto loc_82350820;
	// addis r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 131072;
	// addis r28,r30,3
	ctx.r28.s64 = ctx.r30.s64 + 196608;
	// addi r31,r31,3944
	ctx.r31.s64 = ctx.r31.s64 + 3944;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addi r28,r28,-17004
	ctx.r28.s64 = ctx.r28.s64 + -17004;
	// ori r27,r4,3984
	ctx.r27.u64 = ctx.r4.u64 | 3984;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_823508A4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823508B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823508dc
	if (ctx.cr6.eq) goto loc_823508DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stbx r29,r7,r27
	PPC_STORE_U8(ctx.r7.u32 + ctx.r27.u32, ctx.r29.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
loc_823508DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// fmr f5,f27
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f27.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8234e778
	ctx.lr = 0x823508FC;
	sub_8234E778(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,696
	ctx.r28.s64 = ctx.r28.s64 + 696;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x823508a4
	if (ctx.cr6.lt) goto loc_823508A4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8259bbf0
	ctx.lr = 0x82350918;
	__restfpr_27(ctx, base);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235091C"))) PPC_WEAK_FUNC(sub_8235091C);
PPC_FUNC_IMPL(__imp__sub_8235091C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350920"))) PPC_WEAK_FUNC(sub_82350920);
PPC_FUNC_IMPL(__imp__sub_82350920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82350928;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,80(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r9,31,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8235095c
	if (!ctx.cr6.eq) goto loc_8235095C;
	// bl 0x823501d8
	ctx.lr = 0x82350950;
	sub_823501D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8235095C:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8235097c
	if (!ctx.cr6.eq) goto loc_8235097C;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823502b8
	ctx.lr = 0x82350970;
	sub_823502B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8235097C:
	// addis r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 131072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r30,3936
	ctx.r30.s64 = ctx.r30.s64 + 3936;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823509b8
	if (ctx.cr6.eq) goto loc_823509B8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,3733
	ctx.r7.u64 = ctx.r8.u64 | 3733;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lbzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// mulli r10,r4,696
	ctx.r10.s64 = ctx.r4.s64 * 696;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r10,404
	ctx.r31.s64 = ctx.r10.s64 + 404;
loc_823509B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823509f4
	if (ctx.cr6.eq) goto loc_823509F4;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// ori r10,r3,3928
	ctx.r10.u64 = ctx.r3.u64 | 3928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8234f138
	ctx.lr = 0x823509D8;
	sub_8234F138(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82350a20
	if (!ctx.cr6.eq) goto loc_82350A20;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_823509F4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823509F8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// addi r11,r11,-4756
	ctx.r11.s64 = ctx.r11.s64 + -4756;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r7,12(r29)
	PPC_STORE_U8(ctx.r29.u32 + 12, ctx.r7.u8);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82350A20:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x823509f8
	goto loc_823509F8;
}

__attribute__((alias("__imp__sub_82350A28"))) PPC_WEAK_FUNC(sub_82350A28);
PPC_FUNC_IMPL(__imp__sub_82350A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8259bba4
	ctx.lr = 0x82350A3C;
	__savefpr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f4
	ctx.f29.f64 = ctx.f4.f64;
	// fmr f28,f5
	ctx.f28.f64 = ctx.f5.f64;
	// addis r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 524288;
	// fmr f27,f2
	ctx.f27.f64 = ctx.f2.f64;
	// addi r3,r3,-7980
	ctx.r3.s64 = ctx.r3.s64 + -7980;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// bl 0x823504b0
	ctx.lr = 0x82350A70;
	sub_823504B0(ctx, base);
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// fmr f5,f28
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f28.f64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// addi r3,r3,7240
	ctx.r3.s64 = ctx.r3.s64 + 7240;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 524288;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r3,-7996
	ctx.r3.s64 = ctx.r3.s64 + -7996;
	// bl 0x823483f8
	ctx.lr = 0x82350AAC;
	sub_823483F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8259bbf0
	ctx.lr = 0x82350AB8;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350AC8"))) PPC_WEAK_FUNC(sub_82350AC8);
PPC_FUNC_IMPL(__imp__sub_82350AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82350AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,404
	ctx.r30.s64 = ctx.r3.s64 + 404;
	// li r31,192
	ctx.r31.s64 = 192;
loc_82350AE0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e660
	ctx.lr = 0x82350AEC;
	sub_8234E660(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,696
	ctx.r30.s64 = ctx.r30.s64 + 696;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82350ae0
	if (!ctx.cr6.eq) goto loc_82350AE0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350B04"))) PPC_WEAK_FUNC(sub_82350B04);
PPC_FUNC_IMPL(__imp__sub_82350B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350B08"))) PPC_WEAK_FUNC(sub_82350B08);
PPC_FUNC_IMPL(__imp__sub_82350B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82350B10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r28,404
	ctx.r30.s64 = ctx.r28.s64 + 404;
	// li r31,192
	ctx.r31.s64 = 192;
loc_82350B24:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e660
	ctx.lr = 0x82350B30;
	sub_8234E660(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,696
	ctx.r30.s64 = ctx.r30.s64 + 696;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82350b24
	if (!ctx.cr6.eq) goto loc_82350B24;
	// addis r30,r28,2
	ctx.r30.s64 = ctx.r28.s64 + 131072;
	// li r31,32
	ctx.r31.s64 = 32;
	// addi r30,r30,3988
	ctx.r30.s64 = ctx.r30.s64 + 3988;
loc_82350B4C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e660
	ctx.lr = 0x82350B58;
	sub_8234E660(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,696
	ctx.r30.s64 = ctx.r30.s64 + 696;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82350b4c
	if (!ctx.cr6.eq) goto loc_82350B4C;
	// addis r30,r28,2
	ctx.r30.s64 = ctx.r28.s64 + 131072;
	// li r31,32
	ctx.r31.s64 = 32;
	// addi r30,r30,26260
	ctx.r30.s64 = ctx.r30.s64 + 26260;
loc_82350B74:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e660
	ctx.lr = 0x82350B80;
	sub_8234E660(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,696
	ctx.r30.s64 = ctx.r30.s64 + 696;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82350b74
	if (!ctx.cr6.eq) goto loc_82350B74;
	// addis r30,r28,3
	ctx.r30.s64 = ctx.r28.s64 + 196608;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r30,r30,-17004
	ctx.r30.s64 = ctx.r30.s64 + -17004;
loc_82350B9C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e660
	ctx.lr = 0x82350BA8;
	sub_8234E660(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,696
	ctx.r30.s64 = ctx.r30.s64 + 696;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82350b9c
	if (!ctx.cr6.eq) goto loc_82350B9C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350BC0"))) PPC_WEAK_FUNC(sub_82350BC0);
PPC_FUNC_IMPL(__imp__sub_82350BC0) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,30(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82350c0c
	if (ctx.cr6.eq) goto loc_82350C0C;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
loc_82350BE8:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82350bf8
	if (ctx.cr6.lt) goto loc_82350BF8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82350BF8:
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r6,30(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 30);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82350be8
	if (!ctx.cr6.eq) goto loc_82350BE8;
loc_82350C0C:
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350C14"))) PPC_WEAK_FUNC(sub_82350C14);
PPC_FUNC_IMPL(__imp__sub_82350C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350C18"))) PPC_WEAK_FUNC(sub_82350C18);
PPC_FUNC_IMPL(__imp__sub_82350C18) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82350c70
	if (!ctx.cr6.gt) goto loc_82350C70;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82350C34:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82350c70
	if (!ctx.cr6.lt) goto loc_82350C70;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r5,30(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82350c60
	if (ctx.cr6.eq) goto loc_82350C60;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82350c78
	if (ctx.cr6.eq) goto loc_82350C78;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82350C60:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82350c34
	if (ctx.cr6.lt) goto loc_82350C34;
loc_82350C70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82350C78:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350C88"))) PPC_WEAK_FUNC(sub_82350C88);
PPC_FUNC_IMPL(__imp__sub_82350C88) {
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
	// bl 0x82350c18
	ctx.lr = 0x82350CA0;
	sub_82350C18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82350cc0
	if (ctx.cr6.eq) goto loc_82350CC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82350CC0:
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

__attribute__((alias("__imp__sub_82350CD4"))) PPC_WEAK_FUNC(sub_82350CD4);
PPC_FUNC_IMPL(__imp__sub_82350CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350CD8"))) PPC_WEAK_FUNC(sub_82350CD8);
PPC_FUNC_IMPL(__imp__sub_82350CD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,30(r4)
	PPC_STORE_U8(ctx.r4.u32 + 30, ctx.r11.u8);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350CF0"))) PPC_WEAK_FUNC(sub_82350CF0);
PPC_FUNC_IMPL(__imp__sub_82350CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addis r6,r3,2
	ctx.r6.s64 = ctx.r3.s64 + 131072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r6,r6,32032
	ctx.r6.s64 = ctx.r6.s64 + 32032;
loc_82350D00:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82350d60
	if (ctx.cr6.eq) goto loc_82350D60;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82350d60
	if (!ctx.cr6.gt) goto loc_82350D60;
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
loc_82350D24:
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82350d84
	if (ctx.cr6.eq) goto loc_82350D84;
	// ble cr6,0x82350d50
	if (!ctx.cr6.gt) goto loc_82350D50;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x82350d54
	goto loc_82350D54;
loc_82350D50:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82350D54:
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x82350d24
	if (ctx.cr6.gt) goto loc_82350D24;
loc_82350D60:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r6,r6,24
	ctx.r6.s64 = ctx.r6.s64 + 24;
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// blt cr6,0x82350d00
	if (ctx.cr6.lt) goto loc_82350D00;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82350D84:
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350D90"))) PPC_WEAK_FUNC(sub_82350D90);
PPC_FUNC_IMPL(__imp__sub_82350D90) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82350cf0
	ctx.lr = 0x82350DB0;
	sub_82350CF0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350ea8
	if (ctx.cr6.eq) goto loc_82350EA8;
	// lbz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x82350df4
	if (!ctx.cr6.gt) goto loc_82350DF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x82350DE0;
	sub_8259D3A0(ctx, base);
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
loc_82350DF4:
	// lbz r11,30(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82350ea8
	if (ctx.cr6.gt) goto loc_82350EA8;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// addi r12,r12,3612
	ctx.r12.s64 = ctx.r12.s64 + 3612;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82350E30;
	case 1:
		goto loc_82350E30;
	case 2:
		goto loc_82350E50;
	case 3:
		goto loc_82350EA8;
	case 4:
		goto loc_82350E80;
	default:
		__builtin_unreachable();
	}
	// lwz r17,3632(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 3632);
	// lwz r17,3632(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 3632);
	// lwz r17,3664(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 3664);
	// lwz r17,3752(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 3752);
	// lwz r17,3712(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 3712);
loc_82350E30:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
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
loc_82350E50:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82350e64
	if (!ctx.cr6.eq) goto loc_82350E64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82350E64:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
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
loc_82350E80:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
loc_82350EA8:
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

__attribute__((alias("__imp__sub_82350EBC"))) PPC_WEAK_FUNC(sub_82350EBC);
PPC_FUNC_IMPL(__imp__sub_82350EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350EC0"))) PPC_WEAK_FUNC(sub_82350EC0);
PPC_FUNC_IMPL(__imp__sub_82350EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82350EC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,6796
	ctx.r11.s64 = ctx.r4.s64 + 6796;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 131072;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r9,32272
	ctx.r9.s64 = ctx.r9.s64 + 32272;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82350fc4
	if (ctx.cr6.eq) goto loc_82350FC4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r3,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82350fc4
	if (!ctx.cr6.gt) goto loc_82350FC4;
	// addi r30,r31,3134
	ctx.r30.s64 = ctx.r31.s64 + 3134;
loc_82350F4C:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82350fb0
	if (ctx.cr6.eq) goto loc_82350FB0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-30
	ctx.r4.s64 = ctx.r30.s64 + -30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82350F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,-10(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -10);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82350F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82350fa4
	if (!ctx.cr6.eq) goto loc_82350FA4;
	// stb r27,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r27.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
loc_82350FA4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82350fc4
	if (!ctx.cr6.lt) goto loc_82350FC4;
loc_82350FB0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82350f4c
	if (ctx.cr6.lt) goto loc_82350F4C;
loc_82350FC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82350FCC"))) PPC_WEAK_FUNC(sub_82350FCC);
PPC_FUNC_IMPL(__imp__sub_82350FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82350FD0"))) PPC_WEAK_FUNC(sub_82350FD0);
PPC_FUNC_IMPL(__imp__sub_82350FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,32284
	ctx.r9.u64 = ctx.r10.u64 | 32284;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r4,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82350FE8"))) PPC_WEAK_FUNC(sub_82350FE8);
PPC_FUNC_IMPL(__imp__sub_82350FE8) {
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
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r11,r4,6796
	ctx.r11.s64 = ctx.r4.s64 + 6796;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r8,r10,32036
	ctx.r8.u64 = ctx.r10.u64 | 32036;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r4,r9
	ctx.r7.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r5,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u32);
	// stwx r6,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u32);
	// bl 0x82350ec0
	ctx.lr = 0x8235102C;
	sub_82350EC0(ctx, base);
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

__attribute__((alias("__imp__sub_82351040"))) PPC_WEAK_FUNC(sub_82351040);
PPC_FUNC_IMPL(__imp__sub_82351040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82351048;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82362500
	ctx.lr = 0x82351060;
	sub_82362500(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82351074
	if (!ctx.cr6.eq) goto loc_82351074;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82351074:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r8,r9,32036
	ctx.r8.u64 = ctx.r9.u64 | 32036;
	// addi r5,r11,2047
	ctx.r5.s64 = ctx.r11.s64 + 2047;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,0,0,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFF800;
	// add r6,r30,r10
	ctx.r6.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r4,r4,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823510B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x82350ec0
	ctx.lr = 0x823510BC;
	sub_82350EC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823510D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823510DC"))) PPC_WEAK_FUNC(sub_823510DC);
PPC_FUNC_IMPL(__imp__sub_823510DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823510E0"))) PPC_WEAK_FUNC(sub_823510E0);
PPC_FUNC_IMPL(__imp__sub_823510E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r9,-32151
	ctx.r9.s64 = -2107047936;
	// addi r9,r9,29592
	ctx.r9.s64 = ctx.r9.s64 + 29592;
loc_823510FC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r8,r4,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// xor r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// bne cr6,0x823510fc
	if (!ctx.cr6.eq) goto loc_823510FC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351130"))) PPC_WEAK_FUNC(sub_82351130);
PPC_FUNC_IMPL(__imp__sub_82351130) {
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
	// li r11,5000
	ctx.r11.s64 = 5000;
	// addi r3,r30,3104
	ctx.r3.s64 = ctx.r30.s64 + 3104;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,28928
	ctx.r5.u64 = ctx.r5.u64 | 28928;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// bl 0x8259d300
	ctx.lr = 0x82351174;
	sub_8259D300(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stb r31,3100(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3100, ctx.r31.u8);
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// ori r9,r10,32272
	ctx.r9.u64 = ctx.r10.u64 | 32272;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r11,32036
	ctx.r11.s64 = ctx.r11.s64 + 32036;
	// stwx r31,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r31.u32);
loc_82351190:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r31,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x82351190
	if (!ctx.cr6.eq) goto loc_82351190;
	// stw r31,3092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3092, ctx.r31.u32);
	// stw r31,3096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3096, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_823511D8"))) PPC_WEAK_FUNC(sub_823511D8);
PPC_FUNC_IMPL(__imp__sub_823511D8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32047
	ctx.r10.s64 = -2100232192;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,20160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20160, ctx.r11.u32);
	// bl 0x82351130
	ctx.lr = 0x82351200;
	sub_82351130(ctx, base);
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// stw r31,19708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19708, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8235121C"))) PPC_WEAK_FUNC(sub_8235121C);
PPC_FUNC_IMPL(__imp__sub_8235121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351220"))) PPC_WEAK_FUNC(sub_82351220);
PPC_FUNC_IMPL(__imp__sub_82351220) {
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
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r30,r8,32284
	ctx.r30.u64 = ctx.r8.u64 | 32284;
	// addi r11,r5,6796
	ctx.r11.s64 = ctx.r5.s64 + 6796;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r31,r9,32036
	ctx.r31.u64 = ctx.r9.u64 | 32036;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r6,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u32);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwzx r6,r3,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// bl 0x82351040
	ctx.lr = 0x82351278;
	sub_82351040(ctx, base);
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

__attribute__((alias("__imp__sub_82351294"))) PPC_WEAK_FUNC(sub_82351294);
PPC_FUNC_IMPL(__imp__sub_82351294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351298"))) PPC_WEAK_FUNC(sub_82351298);
PPC_FUNC_IMPL(__imp__sub_82351298) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823512A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823512a0
	if (!ctx.cr6.eq) goto loc_823512A0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r8,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// b 0x823510e0
	sub_823510E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823512C0"))) PPC_WEAK_FUNC(sub_823512C0);
PPC_FUNC_IMPL(__imp__sub_823512C0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_823512DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x823512dc
	if (!ctx.cr6.eq) goto loc_823512DC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_823512F4:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823512f4
	if (!ctx.cr6.eq) goto loc_823512F4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82351308:
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
	// bne cr6,0x82351308
	if (!ctx.cr6.eq) goto loc_82351308;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82351328:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82351328
	if (!ctx.cr6.eq) goto loc_82351328;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x82351390
	if (ctx.cr6.eq) goto loc_82351390;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r9,r11,17104
	ctx.r9.s64 = ctx.r11.s64 + 17104;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82351364:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82351364
	if (!ctx.cr6.eq) goto loc_82351364;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82351378:
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
	// bne cr6,0x82351378
	if (!ctx.cr6.eq) goto loc_82351378;
loc_82351390:
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82351398:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82351398
	if (!ctx.cr6.eq) goto loc_82351398;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_823513AC:
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
	// bne cr6,0x823513ac
	if (!ctx.cr6.eq) goto loc_823513AC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823513CC:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823513cc
	if (!ctx.cr6.eq) goto loc_823513CC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// bl 0x823510e0
	ctx.lr = 0x823513F0;
	sub_823510E0(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351400"))) PPC_WEAK_FUNC(sub_82351400);
PPC_FUNC_IMPL(__imp__sub_82351400) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8235141C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8235141c
	if (!ctx.cr6.eq) goto loc_8235141C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r8,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// bl 0x823510e0
	ctx.lr = 0x82351440;
	sub_823510E0(ctx, base);
	// addis r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r5,32052
	ctx.r5.s64 = ctx.r5.s64 + 32052;
loc_8235144C:
	// lwz r8,-4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x823514a0
	if (!ctx.cr6.gt) goto loc_823514A0;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82351464:
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x823514c8
	if (ctx.cr6.eq) goto loc_823514C8;
	// ble cr6,0x82351490
	if (!ctx.cr6.gt) goto loc_82351490;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x82351494
	goto loc_82351494;
loc_82351490:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82351494:
	// subf r9,r7,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bgt cr6,0x82351464
	if (ctx.cr6.gt) goto loc_82351464;
loc_823514A0:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,24
	ctx.r5.s64 = ctx.r5.s64 + 24;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// blt cr6,0x8235144c
	if (ctx.cr6.lt) goto loc_8235144C;
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
loc_823514C8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823514dc
	if (!ctx.cr6.eq) goto loc_823514DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823514DC:
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

__attribute__((alias("__imp__sub_823514F4"))) PPC_WEAK_FUNC(sub_823514F4);
PPC_FUNC_IMPL(__imp__sub_823514F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823514F8"))) PPC_WEAK_FUNC(sub_823514F8);
PPC_FUNC_IMPL(__imp__sub_823514F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82351500;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x823512c0
	ctx.lr = 0x82351534;
	sub_823512C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82350bc0
	ctx.lr = 0x82351540;
	sub_82350BC0(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r9,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r9.u8);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r5.u32);
	// stb r8,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r8.u8);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stb r7,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r7.u8);
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// bne cr6,0x8235159c
	if (!ctx.cr6.eq) goto loc_8235159C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x823515a8
	if (ctx.cr6.eq) goto loc_823515A8;
loc_8235159C:
	// lbz r4,29(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// ori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 | 1;
	// stb r3,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r3.u8);
loc_823515A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823515C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823515D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82351604
	if (!ctx.cr6.eq) goto loc_82351604;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823515FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_82351604:
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r4,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r4.u8);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351620"))) PPC_WEAK_FUNC(sub_82351620);
PPC_FUNC_IMPL(__imp__sub_82351620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82351628;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x823512c0
	ctx.lr = 0x82351654;
	sub_823512C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82350bc0
	ctx.lr = 0x82351660;
	sub_82350BC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r25,0
	ctx.r25.s64 = 0;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r25,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r25.u8);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stb r8,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r8.u8);
	// stb r9,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r9.u8);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823516C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823516D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82351704
	if (!ctx.cr6.eq) goto loc_82351704;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823516FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82351704:
	// stb r25,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r25.u8);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235171C"))) PPC_WEAK_FUNC(sub_8235171C);
PPC_FUNC_IMPL(__imp__sub_8235171C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351720"))) PPC_WEAK_FUNC(sub_82351720);
PPC_FUNC_IMPL(__imp__sub_82351720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82351728;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x823512c0
	ctx.lr = 0x82351754;
	sub_823512C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82350bc0
	ctx.lr = 0x82351760;
	sub_82350BC0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stb r9,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r9.u8);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r5.u32);
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stb r8,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r8.u8);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stb r7,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r7.u8);
	// bne cr6,0x823517c4
	if (!ctx.cr6.eq) goto loc_823517C4;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x823517d0
	if (ctx.cr6.eq) goto loc_823517D0;
loc_823517C4:
	// lbz r4,29(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// ori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 | 1;
	// stb r3,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r3.u8);
loc_823517D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823517E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82351800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8235182c
	if (!ctx.cr6.eq) goto loc_8235182C;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82351824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8235182C:
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r4,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r4.u8);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351848"))) PPC_WEAK_FUNC(sub_82351848);
PPC_FUNC_IMPL(__imp__sub_82351848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82351850;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823512c0
	ctx.lr = 0x82351878;
	sub_823512C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82350bc0
	ctx.lr = 0x82351884;
	sub_82350BC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,5
	ctx.r9.s64 = 5;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r5,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r5.u32);
	// stb r25,29(r30)
	PPC_STORE_U8(ctx.r30.u32 + 29, ctx.r25.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stb r9,30(r30)
	PPC_STORE_U8(ctx.r30.u32 + 30, ctx.r9.u8);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823518DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823518F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82351920
	if (!ctx.cr6.eq) goto loc_82351920;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82351918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82351920:
	// stb r25,30(r30)
	PPC_STORE_U8(ctx.r30.u32 + 30, ctx.r25.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351938"))) PPC_WEAK_FUNC(sub_82351938);
PPC_FUNC_IMPL(__imp__sub_82351938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235194C"))) PPC_WEAK_FUNC(sub_8235194C);
PPC_FUNC_IMPL(__imp__sub_8235194C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351950"))) PPC_WEAK_FUNC(sub_82351950);
PPC_FUNC_IMPL(__imp__sub_82351950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fadds f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235196C"))) PPC_WEAK_FUNC(sub_8235196C);
PPC_FUNC_IMPL(__imp__sub_8235196C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351970"))) PPC_WEAK_FUNC(sub_82351970);
PPC_FUNC_IMPL(__imp__sub_82351970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351978"))) PPC_WEAK_FUNC(sub_82351978);
PPC_FUNC_IMPL(__imp__sub_82351978) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8235199C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823519e8
	if (ctx.cr6.lt) goto loc_823519E8;
	// beq cr6,0x823519cc
	if (ctx.cr6.eq) goto loc_823519CC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x82351a00
	if (!ctx.cr6.lt) goto loc_82351A00;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// b 0x82351a00
	goto loc_82351A00;
loc_823519CC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// b 0x82351a00
	goto loc_82351A00;
loc_823519E8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
loc_82351A00:
	// lhz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235199c
	if (ctx.cr6.lt) goto loc_8235199C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351A1C"))) PPC_WEAK_FUNC(sub_82351A1C);
PPC_FUNC_IMPL(__imp__sub_82351A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351A20"))) PPC_WEAK_FUNC(sub_82351A20);
PPC_FUNC_IMPL(__imp__sub_82351A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r11,r11,23528
	ctx.r11.s64 = ctx.r11.s64 + 23528;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351A64"))) PPC_WEAK_FUNC(sub_82351A64);
PPC_FUNC_IMPL(__imp__sub_82351A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351A68"))) PPC_WEAK_FUNC(sub_82351A68);
PPC_FUNC_IMPL(__imp__sub_82351A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351AC0"))) PPC_WEAK_FUNC(sub_82351AC0);
PPC_FUNC_IMPL(__imp__sub_82351AC0) {
	PPC_FUNC_PROLOGUE();
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// std r10,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r10.u64);
	// ld r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// ld r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351AE0"))) PPC_WEAK_FUNC(sub_82351AE0);
PPC_FUNC_IMPL(__imp__sub_82351AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82351AE8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8259bba0
	ctx.lr = 0x82351AF0;
	__savefpr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r30,27(r5)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r5.u32 + 27);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lbz r8,24(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 24);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lbz r4,26(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 26);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lbz r6,25(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 25);
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// lfs f10,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lbz r29,28(r5)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + 28);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// std r29,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r29.u64);
	// fcfid f2,f5
	ctx.f2.f64 = double(ctx.f5.s64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f4,f7
	ctx.f4.f64 = double(ctx.f7.s64);
	// lfs f5,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fmr f8,f5
	ctx.f8.f64 = ctx.f5.f64;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f9,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,-1592(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1592);
	ctx.f0.f64 = double(temp.f32);
	// lfd f3,104(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// lfs f3,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f3,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmuls f12,f3,f11
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f11,f2
	ctx.f11.f64 = double(float(ctx.f2.f64));
	// lfs f4,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f4.f64 = double(temp.f32);
	// fmr f8,f3
	ctx.f8.f64 = ctx.f3.f64;
	// lfs f3,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// fmuls f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f5,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// frsp f13,f6
	ctx.f13.f64 = double(float(ctx.f6.f64));
	// lfs f6,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f2,148(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f1,152(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f11,f8,f9
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// frsp f12,f7
	ctx.f12.f64 = double(float(ctx.f7.f64));
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lfs f10,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f6,f10
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lfs f8,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f8.f64 = double(temp.f32);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// fmuls f10,f5,f9
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// fmuls f9,f4,f8
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lbz r30,3(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lbz r29,29(r5)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + 29);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lbz r28,30(r5)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r5.u32 + 30);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lbz r5,31(r5)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + 31);
	// lfs f29,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f7,112(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f4,96(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// lfd f2,88(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f4
	ctx.f1.f64 = double(ctx.f4.s64);
	// std r28,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r28.u64);
	// fcfid f4,f2
	ctx.f4.f64 = double(ctx.f2.s64);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lfd f2,128(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// fcfid f31,f8
	ctx.f31.f64 = double(ctx.f8.s64);
	// lfd f8,144(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// fcfid f30,f8
	ctx.f30.f64 = double(ctx.f8.s64);
	// lfs f28,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f27.f64 = double(temp.f32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f26,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f26.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// frsp f8,f5
	ctx.f8.f64 = double(float(ctx.f5.f64));
	// frsp f5,f4
	ctx.f5.f64 = double(float(ctx.f4.f64));
	// frsp f4,f31
	ctx.f4.f64 = double(float(ctx.f31.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfd f6,104(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// frsp f6,f1
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// frsp f7,f3
	ctx.f7.f64 = double(float(ctx.f3.f64));
	// frsp f3,f2
	ctx.f3.f64 = double(float(ctx.f2.f64));
	// frsp f2,f30
	ctx.f2.f64 = double(float(ctx.f30.f64));
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f4,f3,f0
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f4,168(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f3,f2,f0
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f3,172(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmuls f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f0,f29,f12
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// std r3,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r3.u64);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// lfs f6,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f6.f64 = double(temp.f32);
	// std r9,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// fmuls f12,f28,f12
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f12.f64));
	// fmuls f7,f27,f7
	ctx.f7.f64 = double(float(ctx.f27.f64 * ctx.f7.f64));
	// fmuls f6,f26,f6
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f6.f64));
	// lfs f5,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f4,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// lfs f3,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f9,f3,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// stfs f2,144(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// fadds f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f1,148(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f0,f10,f7
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f13,f9,f6
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82351DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8259bbec
	ctx.lr = 0x82351DCC;
	__restfpr_26(ctx, base);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351DD0"))) PPC_WEAK_FUNC(sub_82351DD0);
PPC_FUNC_IMPL(__imp__sub_82351DD0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351DE4"))) PPC_WEAK_FUNC(sub_82351DE4);
PPC_FUNC_IMPL(__imp__sub_82351DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351DE8"))) PPC_WEAK_FUNC(sub_82351DE8);
PPC_FUNC_IMPL(__imp__sub_82351DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82351DF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82347970
	ctx.lr = 0x82351DFC;
	sub_82347970(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82351e34
	if (!ctx.cr6.gt) goto loc_82351E34;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82351E10:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82351978
	ctx.lr = 0x82351E20;
	sub_82351978(ctx, base);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82351e10
	if (ctx.cr6.lt) goto loc_82351E10;
loc_82351E34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82351E3C"))) PPC_WEAK_FUNC(sub_82351E3C);
PPC_FUNC_IMPL(__imp__sub_82351E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351E40"))) PPC_WEAK_FUNC(sub_82351E40);
PPC_FUNC_IMPL(__imp__sub_82351E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lhz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82351e7c
	if (ctx.cr6.eq) goto loc_82351E7C;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_82351E64:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82351e7c
	if (ctx.cr6.eq) goto loc_82351E7C;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lhz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82351e64
	if (!ctx.cr6.eq) goto loc_82351E64;
loc_82351E7C:
	// addi r8,r4,2
	ctx.r8.s64 = ctx.r4.s64 + 2;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lhz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82351ee8
	if (ctx.cr6.eq) goto loc_82351EE8;
loc_82351E94:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lhz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82351ed8
	if (ctx.cr6.eq) goto loc_82351ED8;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_82351EC0:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82351ed8
	if (ctx.cr6.eq) goto loc_82351ED8;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lhz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82351ec0
	if (!ctx.cr6.eq) goto loc_82351EC0;
loc_82351ED8:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lhz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82351e94
	if (!ctx.cr6.eq) goto loc_82351E94;
loc_82351EE8:
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmuls f1,f9,f11
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351F04"))) PPC_WEAK_FUNC(sub_82351F04);
PPC_FUNC_IMPL(__imp__sub_82351F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82351F08"))) PPC_WEAK_FUNC(sub_82351F08);
PPC_FUNC_IMPL(__imp__sub_82351F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82351f20
	if (!ctx.cr6.eq) goto loc_82351F20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82351F20:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lhz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82351f5c
	if (ctx.cr6.eq) goto loc_82351F5C;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_82351F44:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82351f5c
	if (ctx.cr6.eq) goto loc_82351F5C;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lhz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82351f44
	if (!ctx.cr6.eq) goto loc_82351F44;
loc_82351F5C:
	// addi r8,r4,2
	ctx.r8.s64 = ctx.r4.s64 + 2;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351fc4
	if (ctx.cr6.eq) goto loc_82351FC4;
loc_82351F70:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lhz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82351fac
	if (ctx.cr6.eq) goto loc_82351FAC;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_82351F94:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82351fac
	if (ctx.cr6.eq) goto loc_82351FAC;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lhz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82351f94
	if (!ctx.cr6.eq) goto loc_82351F94;
loc_82351FAC:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82351f70
	if (!ctx.cr6.eq) goto loc_82351F70;
loc_82351FC4:
	// lfs f12,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82351FD0"))) PPC_WEAK_FUNC(sub_82351FD0);
PPC_FUNC_IMPL(__imp__sub_82351FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82351FD8;
	__savegprlr_29(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f1,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82351FF4:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x8235200c
	if (ctx.cr6.eq) goto loc_8235200C;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x8235200c
	if (ctx.cr6.eq) goto loc_8235200C;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x82352028
	if (!ctx.cr6.eq) goto loc_82352028;
loc_8235200C:
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82351ff4
	if (!ctx.cr6.eq) goto loc_82351FF4;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
loc_82352020:
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82352028:
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352020
	if (ctx.cr6.eq) goto loc_82352020;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// lhz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82352074
	if (ctx.cr6.eq) goto loc_82352074;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_8235205C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82352074
	if (ctx.cr6.eq) goto loc_82352074;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lhz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8235205c
	if (!ctx.cr6.eq) goto loc_8235205C;
loc_82352074:
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// lfs f11,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fneg f0,f11
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// li r31,0
	ctx.r31.s64 = 0;
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82352188
	if (ctx.cr6.eq) goto loc_82352188;
loc_82352094:
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x8235220c
	if (ctx.cr6.eq) goto loc_8235220C;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x8235220c
	if (ctx.cr6.eq) goto loc_8235220C;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x823520d4
	if (!ctx.cr6.eq) goto loc_823520D4;
	// lfs f10,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fadds f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bso cr6,0x823520cc
	if (ctx.cr6.so) goto loc_823520CC;
	// bge cr6,0x823521c8
	if (!ctx.cr6.lt) goto loc_823521C8;
loc_823520CC:
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f13.f64;
loc_823520D4:
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82352108
	if (ctx.cr6.eq) goto loc_82352108;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82352108
	if (!ctx.cr6.eq) goto loc_82352108;
	// lfs f7,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fadds f13,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82352108
	if (!ctx.cr6.lt) goto loc_82352108;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
loc_82352108:
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// lfs f4,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fadds f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lhz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8235214c
	if (ctx.cr6.eq) goto loc_8235214C;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_82352134:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8235214c
	if (ctx.cr6.eq) goto loc_8235214C;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lhz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82352134
	if (!ctx.cr6.eq) goto loc_82352134;
loc_8235214C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235216c
	if (ctx.cr6.eq) goto loc_8235216C;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8235216c
	if (!ctx.cr6.eq) goto loc_8235216C;
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bso cr6,0x8235216c
	if (ctx.cr6.so) goto loc_8235216C;
	// bge cr6,0x823521e0
	if (!ctx.cr6.lt) goto loc_823521E0;
loc_8235216C:
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82352094
	if (!ctx.cr6.eq) goto loc_82352094;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82352194
	if (!ctx.cr6.eq) goto loc_82352194;
loc_82352188:
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823522a0
	if (ctx.cr6.eq) goto loc_823522A0;
loc_82352194:
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f6,f11,f13
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fcmpu cr6,f5,f12
	ctx.cr6.compare(ctx.f5.f64, ctx.f12.f64);
	// blt cr6,0x823522a0
	if (ctx.cr6.lt) goto loc_823522A0;
	// bso cr6,0x823522a0
	if (ctx.cr6.so) goto loc_823522A0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82352254
	if (ctx.cr6.eq) goto loc_82352254;
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_823521C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82352188
	if (ctx.cr6.eq) goto loc_82352188;
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// lfs f3,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f1,f3
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_823521E0:
	// lfs f2,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r5,-2
	ctx.r10.s64 = ctx.r5.s64 + -2;
	// fsubs f1,f0,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8235220C:
	// lfs f11,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82352244
	if (ctx.cr6.lt) goto loc_82352244;
	// bso cr6,0x82352244
	if (ctx.cr6.so) goto loc_82352244;
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82352244
	if (ctx.cr6.eq) goto loc_82352244;
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f1,f1,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82352244:
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lfs f7,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f1,f0,f7
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82352254:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352294
	if (ctx.cr6.eq) goto loc_82352294;
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82352290
	if (ctx.cr6.eq) goto loc_82352290;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r5,-2
	ctx.r8.s64 = ctx.r5.s64 + -2;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82352290
	if (ctx.cr6.eq) goto loc_82352290;
	// addi r6,r5,-2
	ctx.r6.s64 = ctx.r5.s64 + -2;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lfs f4,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82352290:
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
loc_82352294:
	// lfs f4,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_823522A0:
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// fmuls f1,f1,f3
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823522C0"))) PPC_WEAK_FUNC(sub_823522C0);
PPC_FUNC_IMPL(__imp__sub_823522C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,48
	ctx.r10.s64 = 48;
	// lfs f0,-520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -520);
	ctx.f0.f64 = double(temp.f32);
loc_823522CC:
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lhz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82352304
	if (ctx.cr6.eq) goto loc_82352304;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_823522EC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82352304
	if (ctx.cr6.eq) goto loc_82352304;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lhz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823522ec
	if (!ctx.cr6.eq) goto loc_823522EC;
loc_82352304:
	// lhz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82352320
	if (!ctx.cr6.eq) goto loc_82352320;
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82352320
	if (!ctx.cr6.lt) goto loc_82352320;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82352320:
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r10,57
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57, ctx.xer);
	// ble cr6,0x823522cc
	if (!ctx.cr6.gt) goto loc_823522CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,48
	ctx.r10.s64 = 48;
	// lfs f13,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f13.f64 = double(temp.f32);
loc_8235234C:
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lhz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82352384
	if (ctx.cr6.eq) goto loc_82352384;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_8235236C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82352384
	if (ctx.cr6.eq) goto loc_82352384;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lhz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8235236c
	if (!ctx.cr6.eq) goto loc_8235236C;
loc_82352384:
	// lhz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823523a8
	if (!ctx.cr6.eq) goto loc_823523A8;
	// lfs f12,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmadds f9,f11,f13,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_823523A8:
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r10,57
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57, ctx.xer);
	// ble cr6,0x8235234c
	if (!ctx.cr6.gt) goto loc_8235234C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823523BC"))) PPC_WEAK_FUNC(sub_823523BC);
PPC_FUNC_IMPL(__imp__sub_823523BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823523C0"))) PPC_WEAK_FUNC(sub_823523C0);
PPC_FUNC_IMPL(__imp__sub_823523C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823523F4"))) PPC_WEAK_FUNC(sub_823523F4);
PPC_FUNC_IMPL(__imp__sub_823523F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823523F8"))) PPC_WEAK_FUNC(sub_823523F8);
PPC_FUNC_IMPL(__imp__sub_823523F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82352400;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82347b80
	ctx.lr = 0x8235241C;
	sub_82347B80(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r31,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r31.u32);
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// ld r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352450"))) PPC_WEAK_FUNC(sub_82352450);
PPC_FUNC_IMPL(__imp__sub_82352450) {
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
	// lfs f10,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// fadds f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r9.u64);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// lfs f2,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r8.u64);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f4,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// beq cr6,0x82352544
	if (ctx.cr6.eq) goto loc_82352544;
loc_8235252C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82352450
	ctx.lr = 0x82352538;
	sub_82352450(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8235252c
	if (!ctx.cr6.eq) goto loc_8235252C;
loc_82352544:
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

__attribute__((alias("__imp__sub_8235255C"))) PPC_WEAK_FUNC(sub_8235255C);
PPC_FUNC_IMPL(__imp__sub_8235255C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352560"))) PPC_WEAK_FUNC(sub_82352560);
PPC_FUNC_IMPL(__imp__sub_82352560) {
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
	// lwz r31,68(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82352598
	if (ctx.cr6.eq) goto loc_82352598;
loc_82352584:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82352560
	ctx.lr = 0x8235258C;
	sub_82352560(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82352584
	if (!ctx.cr6.eq) goto loc_82352584;
loc_82352598:
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x82347c58
	ctx.lr = 0x823525A0;
	sub_82347C58(ctx, base);
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

__attribute__((alias("__imp__sub_823525B8"))) PPC_WEAK_FUNC(sub_823525B8);
PPC_FUNC_IMPL(__imp__sub_823525B8) {
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
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r7,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r7.u64);
	// ld r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r6,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r6.u64);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,68(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82352620
	if (ctx.cr6.eq) goto loc_82352620;
loc_82352604:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r5,8
	ctx.r3.s64 = ctx.r5.s64 + 8;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82352450
	ctx.lr = 0x82352614;
	sub_82352450(ctx, base);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82352604
	if (!ctx.cr6.eq) goto loc_82352604;
loc_82352620:
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

__attribute__((alias("__imp__sub_82352634"))) PPC_WEAK_FUNC(sub_82352634);
PPC_FUNC_IMPL(__imp__sub_82352634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352638"))) PPC_WEAK_FUNC(sub_82352638);
PPC_FUNC_IMPL(__imp__sub_82352638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82352640;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82347ab8
	ctx.lr = 0x82352660;
	sub_82347AB8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// lfs f13,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r27,r31,80
	ctx.r27.s64 = ctx.r31.s64 + 80;
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x82347b70
	ctx.lr = 0x823526CC;
	sub_82347B70(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,80
	ctx.r5.s64 = 80;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,76(r7)
	PPC_STORE_U32(ctx.r7.u32 + 76, ctx.r30.u32);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x823479c0
	ctx.lr = 0x82352700;
	sub_823479C0(ctx, base);
	// add r3,r27,r28
	ctx.r3.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235270C"))) PPC_WEAK_FUNC(sub_8235270C);
PPC_FUNC_IMPL(__imp__sub_8235270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352710"))) PPC_WEAK_FUNC(sub_82352710);
PPC_FUNC_IMPL(__imp__sub_82352710) {
	PPC_FUNC_PROLOGUE();
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// ld r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// ld r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235273C"))) PPC_WEAK_FUNC(sub_8235273C);
PPC_FUNC_IMPL(__imp__sub_8235273C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352740"))) PPC_WEAK_FUNC(sub_82352740);
PPC_FUNC_IMPL(__imp__sub_82352740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f8,-16(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fsubs f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f7,-12(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235277C"))) PPC_WEAK_FUNC(sub_8235277C);
PPC_FUNC_IMPL(__imp__sub_8235277C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352780"))) PPC_WEAK_FUNC(sub_82352780);
PPC_FUNC_IMPL(__imp__sub_82352780) {
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
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,23540
	ctx.r11.s64 = ctx.r11.s64 + 23540;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// bl 0x82352f00
	ctx.lr = 0x823527B4;
	sub_82352F00(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fdivs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r5.u64);
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

__attribute__((alias("__imp__sub_823527F4"))) PPC_WEAK_FUNC(sub_823527F4);
PPC_FUNC_IMPL(__imp__sub_823527F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823527F8"))) PPC_WEAK_FUNC(sub_823527F8);
PPC_FUNC_IMPL(__imp__sub_823527F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lhz r5,28(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 28);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82352840
	if (ctx.cr6.eq) goto loc_82352840;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_82352828:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82352840
	if (ctx.cr6.eq) goto loc_82352840;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// lhz r3,28(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + 28);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82352828
	if (!ctx.cr6.eq) goto loc_82352828;
loc_82352840:
	// lis r7,-32151
	ctx.r7.s64 = -2107047936;
	// lfs f12,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,30928(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 30928);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// lfs f2,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,20560
	ctx.r11.s64 = ctx.r11.s64 + 20560;
	// lfs f11,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-27244(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27244);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r10,r11,4064
	ctx.r10.s64 = ctx.r11.s64 + 4064;
	// fmuls f1,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// stfs f1,-24(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// fmuls f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f9,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f3,f9
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// stfs f8,-20(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// ld r8,-24(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r8,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r8.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f9,-20(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f13,f5,f6
	ctx.f13.f64 = double(float(ctx.f5.f64 / ctx.f6.f64));
	// lfs f6,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f6,2864(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2864);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f8,f11,f12,f10
	ctx.f8.f64 = double(float(-(ctx.f11.f64 * ctx.f12.f64 - ctx.f10.f64)));
loc_823528D4:
	// lfs f5,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f5,f6
	ctx.cr6.compare(ctx.f5.f64, ctx.f6.f64);
	// blt cr6,0x823528e8
	if (ctx.cr6.lt) goto loc_823528E8;
	// li r8,1
	ctx.r8.s64 = 1;
	// bns cr6,0x823528ec
	if (!ctx.cr6.so) goto loc_823528EC;
loc_823528E8:
	// li r8,0
	ctx.r8.s64 = 0;
loc_823528EC:
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82352a38
	if (ctx.cr6.eq) goto loc_82352A38;
	// cmpwi cr6,r3,503
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 503, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lfs f4,16(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// lfs f3,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f11,f12,f4
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f10,f3,f9
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// addi r3,r3,5
	ctx.r3.s64 = ctx.r3.s64 + 5;
	// fadds f2,f11,f8
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f2,-24(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fadds f1,f10,f7
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f1,-20(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// ld r7,-24(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r5,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r5.u64);
	// lfs f3,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f3,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f10,f2,f9
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fadds f1,f5,f11
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// stfs f1,-32(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fadds f11,f4,f10
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// stfs f11,-28(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// ld r7,-32(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r7,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r7.u64);
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f10,f5
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// lfs f2,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// stfs f3,-16(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f1,-12(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// ld r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r5,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r5.u64);
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,8(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f4,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,36(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f4,0(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f11,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// stfs f11,36(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// stfs f3,32(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f5,f0,f1
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f4,f0,f10
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f11,f0,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// lfs f2,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f10,f5,f13,f2
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f2.f64));
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f5,f4,f13,f1
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f1.f64));
	// lfs f4,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f11,f11,f13,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f3.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// fmadds f1,f3,f13,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f2.f64));
	// stfs f1,0(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
loc_82352A38:
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// lhz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r3,507
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 507, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// ld r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// ld r5,-8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// lfs f11,24(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lhz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// fmadds f8,f11,f12,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f8.f64));
	// clrlwi r9,r8,25
	ctx.r9.u64 = ctx.r8.u32 & 0x7F;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r5,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lhz r5,28(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 28);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823528d4
	if (ctx.cr6.eq) goto loc_823528D4;
	// lwz r7,28(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
loc_82352A9C:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823528d4
	if (ctx.cr6.eq) goto loc_823528D4;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// lhz r5,28(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 28);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82352a9c
	if (!ctx.cr6.eq) goto loc_82352A9C;
	// b 0x823528d4
	goto loc_823528D4;
}

__attribute__((alias("__imp__sub_82352AB8"))) PPC_WEAK_FUNC(sub_82352AB8);
PPC_FUNC_IMPL(__imp__sub_82352AB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82352ABC"))) PPC_WEAK_FUNC(sub_82352ABC);
PPC_FUNC_IMPL(__imp__sub_82352ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352AC0"))) PPC_WEAK_FUNC(sub_82352AC0);
PPC_FUNC_IMPL(__imp__sub_82352AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82352AC8;
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
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// fneg f31,f13
	ctx.f31.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fdivs f29,f30,f0
	ctx.f29.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// andi. r24,r25,100
	ctx.r24.u64 = ctx.r25.u64 & 100;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
loc_82352B14:
	// cmplwi cr6,r24,100
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 100, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// beq cr6,0x82352b24
	if (ctx.cr6.eq) goto loc_82352B24;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82352B24:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82351fd0
	ctx.lr = 0x82352B3C;
	sub_82351FD0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82352b6c
	if (ctx.cr6.eq) goto loc_82352B6C;
	// lfs f12,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fadds f31,f10,f31
	ctx.f31.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// bne cr6,0x82352b14
	if (!ctx.cr6.eq) goto loc_82352B14;
loc_82352B6C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f29,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r25,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r25.u32);
	// lwz r7,276(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fdivs f9,f0,f30
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fdivs f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r10,r11,23572
	ctx.r10.s64 = ctx.r11.s64 + 23572;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// std r8,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r8.u64);
	// lfs f7,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f7,f30
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fmuls f13,f6,f31
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// lfs f5,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lwzx r10,r6,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// std r5,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r5.u64);
	// fsubs f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// ld r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// std r3,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// ld r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-96(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352C1C"))) PPC_WEAK_FUNC(sub_82352C1C);
PPC_FUNC_IMPL(__imp__sub_82352C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352C20"))) PPC_WEAK_FUNC(sub_82352C20);
PPC_FUNC_IMPL(__imp__sub_82352C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82352C28;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// andi. r8,r10,100
	ctx.r8.u64 = ctx.r10.u64 & 100;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// addi r11,r11,20560
	ctx.r11.s64 = ctx.r11.s64 + 20560;
	// cmplwi cr6,r8,100
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 100, ctx.xer);
	// lfs f29,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// ld r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// addi r28,r11,4064
	ctx.r28.s64 = ctx.r11.s64 + 4064;
	// li r27,0
	ctx.r27.s64 = 0;
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// li r8,1
	ctx.r8.s64 = 1;
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// beq cr6,0x82352cb0
	if (ctx.cr6.eq) goto loc_82352CB0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82352CB0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// fmr f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82351fd0
	ctx.lr = 0x82352CC4;
	sub_82351FD0(ctx, base);
	// lfs f7,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f6,f31,f1,f7
	ctx.f6.f64 = double(float(-(ctx.f31.f64 * ctx.f1.f64 - ctx.f7.f64)));
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lhz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fmadds f13,f6,f30,f29
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f29.f64));
	// bne cr6,0x82352d00
	if (!ctx.cr6.eq) goto loc_82352D00;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-72(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82352D00:
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lhz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82352d3c
	if (ctx.cr6.eq) goto loc_82352D3C;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_82352D24:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82352d3c
	if (ctx.cr6.eq) goto loc_82352D3C;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lhz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82352d24
	if (!ctx.cr6.eq) goto loc_82352D24;
loc_82352D3C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f10,f5,f0,f13
	ctx.f10.f64 = double(float(-(ctx.f5.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f8.f64 = double(temp.f32);
loc_82352D58:
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82352e88
	if (ctx.cr6.eq) goto loc_82352E88;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x82352e88
	if (ctx.cr6.eq) goto loc_82352E88;
	// lfs f4,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f4,f8
	ctx.cr6.compare(ctx.f4.f64, ctx.f8.f64);
	// blt cr6,0x82352d80
	if (ctx.cr6.lt) goto loc_82352D80;
	// li r10,1
	ctx.r10.s64 = 1;
	// bns cr6,0x82352d84
	if (!ctx.cr6.so) goto loc_82352D84;
loc_82352D80:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82352D84:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82352e30
	if (ctx.cr6.eq) goto loc_82352E30;
	// lfs f3,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f12,f2,f11
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fadds f1,f13,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
	// std r9,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r9.u64);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f7,f11
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// addi r9,r28,8
	ctx.r9.s64 = ctx.r28.s64 + 8;
	// addi r28,r9,8
	ctx.r28.s64 = ctx.r9.s64 + 8;
	// fadds f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
loc_82352E30:
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82352ee4
	if (ctx.cr6.eq) goto loc_82352EE4;
	// lhz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// lfs f5,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f10,f5,f0,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f10.f64));
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lhz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82352d58
	if (ctx.cr6.eq) goto loc_82352D58;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_82352E6C:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82352d58
	if (ctx.cr6.eq) goto loc_82352D58;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lhz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82352e6c
	if (!ctx.cr6.eq) goto loc_82352E6C;
	// b 0x82352d58
	goto loc_82352D58;
loc_82352E88:
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82352ed8
	if (ctx.cr6.eq) goto loc_82352ED8;
	// lhz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lhz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82352d58
	if (ctx.cr6.eq) goto loc_82352D58;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_82352EBC:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82352d58
	if (ctx.cr6.eq) goto loc_82352D58;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lhz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82352ebc
	if (!ctx.cr6.eq) goto loc_82352EBC;
	// b 0x82352d58
	goto loc_82352D58;
loc_82352ED8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82352ee4
	if (!ctx.cr6.eq) goto loc_82352EE4;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82352EE4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352EFC"))) PPC_WEAK_FUNC(sub_82352EFC);
PPC_FUNC_IMPL(__imp__sub_82352EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82352F00"))) PPC_WEAK_FUNC(sub_82352F00);
PPC_FUNC_IMPL(__imp__sub_82352F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82352F08;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// fmr f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// bl 0x82351e40
	ctx.lr = 0x82352F34;
	sub_82351E40(ctx, base);
	// fres f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = float(1.0 / ctx.f1.f64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f12,f1,f8
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// stw r3,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r3.u32);
	// stw r28,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r28.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r6,16
	ctx.r11.s64 = ctx.r6.s64 + 16;
	// lfs f0,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f11,f13,f1,f0
	ctx.f11.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - ctx.f0.f64)));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fnmsubs f9,f13,f1,f0
	ctx.f9.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - ctx.f0.f64)));
	// fadds f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f6,40(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 40, temp.u32);
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f5,f12
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f13,f4,f8
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// fsubs f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// ld r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// ld r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// stw r27,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82352FC8"))) PPC_WEAK_FUNC(sub_82352FC8);
PPC_FUNC_IMPL(__imp__sub_82352FC8) {
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
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,23588
	ctx.r11.s64 = ctx.r11.s64 + 23588;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// bl 0x82352f00
	ctx.lr = 0x82352FFC;
	sub_82352F00(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fdivs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r5.u64);
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

__attribute__((alias("__imp__sub_8235303C"))) PPC_WEAK_FUNC(sub_8235303C);
PPC_FUNC_IMPL(__imp__sub_8235303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353040"))) PPC_WEAK_FUNC(sub_82353040);
PPC_FUNC_IMPL(__imp__sub_82353040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// clrlwi r11,r9,25
	ctx.r11.u64 = ctx.r9.u32 & 0x7F;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lhz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82353088
	if (ctx.cr6.eq) goto loc_82353088;
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
loc_82353070:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82353088
	if (ctx.cr6.eq) goto loc_82353088;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lhz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82353070
	if (!ctx.cr6.eq) goto loc_82353070;
loc_82353088:
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lfs f11,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r9.u64);
	// lfs f8,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f5,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// stfs f7,-24(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f5,-20(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// ld r5,-24(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lis r9,-32047
	ctx.r9.s64 = -2100232192;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r9,20560
	ctx.r9.s64 = ctx.r9.s64 + 20560;
	// std r5,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r5.u64);
	// lfs f4,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f11,-20(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r7,r9,4064
	ctx.r7.s64 = ctx.r9.s64 + 4064;
	// fnmsubs f10,f13,f0,f12
	ctx.f10.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64)));
loc_823530F4:
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f3,f8
	ctx.cr6.compare(ctx.f3.f64, ctx.f8.f64);
	// blt cr6,0x82353108
	if (ctx.cr6.lt) goto loc_82353108;
	// li r10,1
	ctx.r10.s64 = 1;
	// bns cr6,0x8235310c
	if (!ctx.cr6.so) goto loc_8235310C;
loc_82353108:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8235310C:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823531b8
	if (ctx.cr6.eq) goto loc_823531B8;
	// lfs f2,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// addi r9,r7,8
	ctx.r9.s64 = ctx.r7.s64 + 8;
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f12,f1,f11
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,-24(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f12,-20(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// std r10,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r10.u64);
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f5,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f3.f64 = double(temp.f32);
	// std r8,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f7,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f12,f6,f11
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// fadds f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f4,-16(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fadds f2,f3,f12
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f2,-12(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// ld r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fadds f7,f1,f13
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f7,-8(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f5,-4(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// ld r5,-8(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
loc_823531B8:
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lfs f4,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// fmadds f10,f4,f0,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f10.f64));
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lhz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823530f4
	if (ctx.cr6.eq) goto loc_823530F4;
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
loc_823531F8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823530f4
	if (ctx.cr6.eq) goto loc_823530F4;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lhz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823531f8
	if (!ctx.cr6.eq) goto loc_823531F8;
	// b 0x823530f4
	goto loc_823530F4;
}

__attribute__((alias("__imp__sub_82353214"))) PPC_WEAK_FUNC(sub_82353214);
PPC_FUNC_IMPL(__imp__sub_82353214) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353218"))) PPC_WEAK_FUNC(sub_82353218);
PPC_FUNC_IMPL(__imp__sub_82353218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8235334c
	if (ctx.cr6.eq) goto loc_8235334C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f30,-4840(r10)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4840);
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
loc_8235324C:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f12,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fadds f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfs f6,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f1,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// lfs f0,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f7,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f11,f7,f6
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fsubs f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsubs f5,f13,f31
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fsubs f4,f12,f31
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fsubs f3,f11,f31
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fsel f0,f8,f30,f0
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsel f13,f5,f30,f13
	ctx.f13.f64 = ctx.f5.f64 >= 0.0 ? ctx.f30.f64 : ctx.f13.f64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsel f12,f4,f30,f12
	ctx.f12.f64 = ctx.f4.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsel f11,f3,f30,f11
	ctx.f11.f64 = ctx.f3.f64 >= 0.0 ? ctx.f30.f64 : ctx.f11.f64;
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82353340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8235324c
	if (!ctx.cr6.eq) goto loc_8235324C;
loc_8235334C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353368"))) PPC_WEAK_FUNC(sub_82353368);
PPC_FUNC_IMPL(__imp__sub_82353368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x82353370;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// rlwinm r27,r11,0,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82347ab8
	ctx.lr = 0x823533A8;
	sub_82347AB8(ctx, base);
	// add r26,r27,r28
	ctx.r26.u64 = ctx.r27.u64 + ctx.r28.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// subf r27,r27,r25
	ctx.r27.s64 = ctx.r25.s64 - ctx.r27.s64;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// addi r25,r31,24
	ctx.r25.s64 = ctx.r31.s64 + 24;
	// addi r10,r3,15
	ctx.r10.s64 = ctx.r3.s64 + 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r29,r10,0,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x823479c0
	ctx.lr = 0x823533E4;
	sub_823479C0(ctx, base);
	// subf r6,r29,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r29.s64;
	// add r5,r29,r26
	ctx.r5.u64 = ctx.r29.u64 + ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82352638
	ctx.lr = 0x823533F8;
	sub_82352638(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82353434
	if (!ctx.cr6.gt) goto loc_82353434;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82353408:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// bl 0x82347b70
	ctx.lr = 0x82353424;
	sub_82347B70(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82353408
	if (!ctx.cr6.eq) goto loc_82353408;
loc_82353434:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235343C"))) PPC_WEAK_FUNC(sub_8235343C);
PPC_FUNC_IMPL(__imp__sub_8235343C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353440"))) PPC_WEAK_FUNC(sub_82353440);
PPC_FUNC_IMPL(__imp__sub_82353440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82353448;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82353494
	if (!ctx.cr6.gt) goto loc_82353494;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82353468:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// bl 0x82347c58
	ctx.lr = 0x82353480;
	sub_82347C58(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82353468
	if (ctx.cr6.lt) goto loc_82353468;
loc_82353494:
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r30,68(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823534b8
	if (ctx.cr6.eq) goto loc_823534B8;
loc_823534A4:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82352560
	ctx.lr = 0x823534AC;
	sub_82352560(ctx, base);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823534a4
	if (!ctx.cr6.eq) goto loc_823534A4;
loc_823534B8:
	// addi r3,r29,64
	ctx.r3.s64 = ctx.r29.s64 + 64;
	// bl 0x82347c58
	ctx.lr = 0x823534C0;
	sub_82347C58(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x82347ae0
	ctx.lr = 0x82353524;
	sub_82347AE0(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82347ae0
	ctx.lr = 0x8235352C;
	sub_82347AE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353534"))) PPC_WEAK_FUNC(sub_82353534);
PPC_FUNC_IMPL(__imp__sub_82353534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353538"))) PPC_WEAK_FUNC(sub_82353538);
PPC_FUNC_IMPL(__imp__sub_82353538) {
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
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82347b80
	ctx.lr = 0x82353560;
	sub_82347B80(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8235357C"))) PPC_WEAK_FUNC(sub_8235357C);
PPC_FUNC_IMPL(__imp__sub_8235357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353580"))) PPC_WEAK_FUNC(sub_82353580);
PPC_FUNC_IMPL(__imp__sub_82353580) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r5,-8
	ctx.r4.s64 = ctx.r5.s64 + -8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x82347be0
	sub_82347BE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353598"))) PPC_WEAK_FUNC(sub_82353598);
PPC_FUNC_IMPL(__imp__sub_82353598) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823535AC"))) PPC_WEAK_FUNC(sub_823535AC);
PPC_FUNC_IMPL(__imp__sub_823535AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823535B0"))) PPC_WEAK_FUNC(sub_823535B0);
PPC_FUNC_IMPL(__imp__sub_823535B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823535BC"))) PPC_WEAK_FUNC(sub_823535BC);
PPC_FUNC_IMPL(__imp__sub_823535BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823535C0"))) PPC_WEAK_FUNC(sub_823535C0);
PPC_FUNC_IMPL(__imp__sub_823535C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x823535C8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82353624
	if (!ctx.cr6.gt) goto loc_82353624;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823535EC:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82353610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,72(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823535ec
	if (ctx.cr6.lt) goto loc_823535EC;
loc_82353624:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353630"))) PPC_WEAK_FUNC(sub_82353630);
PPC_FUNC_IMPL(__imp__sub_82353630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82353638;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823536b4
	if (!ctx.cr6.gt) goto loc_823536B4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82353658:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82353698
	if (ctx.cr6.eq) goto loc_82353698;
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82353688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8235369c
	if (!ctx.cr6.eq) goto loc_8235369C;
loc_82353698:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8235369C:
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82353658
	if (ctx.cr6.lt) goto loc_82353658;
loc_823536B4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823536d0
	if (!ctx.cr6.eq) goto loc_823536D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,76(r28)
	PPC_STORE_U8(ctx.r28.u32 + 76, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_823536D0:
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,30976
	ctx.r10.s64 = ctx.r11.s64 + 30976;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r9,r11,30960
	ctx.r9.s64 = ctx.r11.s64 + 30960;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lfs f13,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// addi r8,r11,30944
	ctx.r8.s64 = ctx.r11.s64 + 30944;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lis r11,-32046
	ctx.r11.s64 = -2100166656;
	// ld r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// addi r31,r11,-32400
	ctx.r31.s64 = ctx.r11.s64 + -32400;
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// addi r11,r28,32
	ctx.r11.s64 = ctx.r28.s64 + 32;
	// std r8,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// ld r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// fadds f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// std r7,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r7.u64);
	// std r27,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r27.u64);
	// std r6,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r6.u64);
	// ld r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r8,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r7,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r7.u64);
	// lfs f9,2864(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2864);
	ctx.f9.f64 = double(temp.f32);
	// std r5,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r5.u64);
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// std r4,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r4.u64);
	// ble cr6,0x823537e0
	if (!ctx.cr6.gt) goto loc_823537E0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f0,2868(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsqrts f13,f12
	ctx.f13.f64 = double(float(sqrt(ctx.f12.f64)));
	// lfs f12,25556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25556);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmuls f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x82353960
	goto loc_82353960;
loc_823537E0:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82353800
	if (!ctx.cr6.gt) goto loc_82353800;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x823537f8
	if (!ctx.cr6.gt) goto loc_823537F8;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82353810
	goto loc_82353810;
loc_823537F8:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82353810
	goto loc_82353810;
loc_82353800:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,2
	ctx.r10.s64 = 2;
	// bgt cr6,0x82353810
	if (ctx.cr6.gt) goto loc_82353810;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82353810:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823538fc
	if (ctx.cr6.lt) goto loc_823538FC;
	// beq cr6,0x82353890
	if (ctx.cr6.eq) goto loc_82353890;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x82353960
	if (!ctx.cr6.lt) goto loc_82353960;
	// fadds f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fsubs f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,25556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25556);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fsqrts f13,f2
	ctx.f13.f64 = double(float(sqrt(ctx.f2.f64)));
	// fdivs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmuls f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x82353960
	goto loc_82353960;
loc_82353890:
	// fadds f10,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fsubs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f13,f12
	ctx.f13.f64 = double(float(sqrt(ctx.f12.f64)));
	// lfs f12,25556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25556);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f8,f1,f0
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82353960
	goto loc_82353960;
loc_823538FC:
	// fsubs f7,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fadds f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// lfs f12,25556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25556);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f13,f10
	ctx.f13.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmuls f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82353960:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// stb r7,76(r28)
	PPC_STORE_U8(ctx.r28.u32 + 76, ctx.r7.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235398C"))) PPC_WEAK_FUNC(sub_8235398C);
PPC_FUNC_IMPL(__imp__sub_8235398C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353990"))) PPC_WEAK_FUNC(sub_82353990);
PPC_FUNC_IMPL(__imp__sub_82353990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82353998;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823539f0
	if (!ctx.cr6.gt) goto loc_823539F0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_823539B8:
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823539DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,72(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823539b8
	if (ctx.cr6.lt) goto loc_823539B8;
loc_823539F0:
	// stb r28,76(r29)
	PPC_STORE_U8(ctx.r29.u32 + 76, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823539FC"))) PPC_WEAK_FUNC(sub_823539FC);
PPC_FUNC_IMPL(__imp__sub_823539FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353A00"))) PPC_WEAK_FUNC(sub_82353A00);
PPC_FUNC_IMPL(__imp__sub_82353A00) {
	PPC_FUNC_PROLOGUE();
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353A0C"))) PPC_WEAK_FUNC(sub_82353A0C);
PPC_FUNC_IMPL(__imp__sub_82353A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353A10"))) PPC_WEAK_FUNC(sub_82353A10);
PPC_FUNC_IMPL(__imp__sub_82353A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82353A18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8234ab00
	ctx.lr = 0x82353A30;
	sub_8234AB00(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// bl 0x8234a8a8
	ctx.lr = 0x82353A38;
	sub_8234A8A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r4,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r4.u32);
	// bl 0x8234acc0
	ctx.lr = 0x82353A48;
	sub_8234ACC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// bl 0x8234a9a0
	ctx.lr = 0x82353A6C;
	sub_8234A9A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8234a9a0
	ctx.lr = 0x82353A88;
	sub_8234A9A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x8234aca8
	ctx.lr = 0x82353A9C;
	sub_8234ACA8(ctx, base);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// bl 0x8234acb0
	ctx.lr = 0x82353AA8;
	sub_8234ACB0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// addi r27,r11,23652
	ctx.r27.s64 = ctx.r11.s64 + 23652;
	// lfs f1,-4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,132(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// bl 0x8234abf8
	ctx.lr = 0x82353AC0;
	sub_8234ABF8(ctx, base);
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stfs f1,136(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// bl 0x8234ac50
	ctx.lr = 0x82353AD0;
	sub_8234AC50(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,3236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3236);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// stw r28,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353B0C"))) PPC_WEAK_FUNC(sub_82353B0C);
PPC_FUNC_IMPL(__imp__sub_82353B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353B10"))) PPC_WEAK_FUNC(sub_82353B10);
PPC_FUNC_IMPL(__imp__sub_82353B10) {
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
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8234aa70
	ctx.lr = 0x82353B2C;
	sub_8234AA70(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8234aa70
	ctx.lr = 0x82353B34;
	sub_8234AA70(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x8234a920
	ctx.lr = 0x82353B3C;
	sub_8234A920(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8234acc0
	ctx.lr = 0x82353B48;
	sub_8234ACC0(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// bl 0x8234ab70
	ctx.lr = 0x82353B50;
	sub_8234AB70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82353B7C"))) PPC_WEAK_FUNC(sub_82353B7C);
PPC_FUNC_IMPL(__imp__sub_82353B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353B80"))) PPC_WEAK_FUNC(sub_82353B80);
PPC_FUNC_IMPL(__imp__sub_82353B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-12136(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353B98"))) PPC_WEAK_FUNC(sub_82353B98);
PPC_FUNC_IMPL(__imp__sub_82353B98) {
	PPC_FUNC_PROLOGUE();
	// stw r4,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r4.u32);
	// stw r3,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353BA4"))) PPC_WEAK_FUNC(sub_82353BA4);
PPC_FUNC_IMPL(__imp__sub_82353BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353BA8"))) PPC_WEAK_FUNC(sub_82353BA8);
PPC_FUNC_IMPL(__imp__sub_82353BA8) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,19648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19648);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x8259ecc0
	ctx.lr = 0x82353BD4;
	sub_8259ECC0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fdivs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// fdivs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f10,84(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8234abc0
	ctx.lr = 0x82353C14;
	sub_8234ABC0(ctx, base);
	// stfs f31,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353C30"))) PPC_WEAK_FUNC(sub_82353C30);
PPC_FUNC_IMPL(__imp__sub_82353C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353C38"))) PPC_WEAK_FUNC(sub_82353C38);
PPC_FUNC_IMPL(__imp__sub_82353C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82353C40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r4,96(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bl 0x8234aac0
	ctx.lr = 0x82353C5C;
	sub_8234AAC0(ctx, base);
	// lwz r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82353c74
	if (ctx.cr6.eq) goto loc_82353C74;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8234aac0
	ctx.lr = 0x82353C74;
	sub_8234AAC0(ctx, base);
loc_82353C74:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// lwz r9,128(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353C94"))) PPC_WEAK_FUNC(sub_82353C94);
PPC_FUNC_IMPL(__imp__sub_82353C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82353C98"))) PPC_WEAK_FUNC(sub_82353C98);
PPC_FUNC_IMPL(__imp__sub_82353C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82353CA0;
	__savegprlr_28(ctx, base);
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// stfs f12,-76(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// stfs f11,-72(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// ld r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// addi r30,r3,80
	ctx.r30.s64 = ctx.r3.s64 + 80;
	// std r28,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r28.u64);
	// addi r31,r1,-64
	ctx.r31.s64 = ctx.r1.s64 + -64;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r29,r3,96
	ctx.r29.s64 = ctx.r3.s64 + 96;
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f10,-80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// stfs f9,-76(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// stfs f8,-72(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f6,-64(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// stfs f5,-60(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// lfs f3,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// stfs f3,-80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// stfs f2,-76(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// stfs f1,-72(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f4,-56(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// ld r28,0(r7)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// std r10,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r10.u64);
	// lfs f13,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// std r28,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r28.u64);
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// std r7,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r7.u64);
	// stfs f12,-76(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// stfs f11,-72(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// ld r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r9,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r9.u64);
	// std r8,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r8.u64);
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// stfs f9,-64(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f8,-60(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f7,-56(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// ld r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r7,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r7.u64);
	// std r6,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r6.u64);
	// lfs f6,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fadds f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f5,-64(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// stfs f4,-60(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// stfs f3,-56(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r5,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r5.u64);
	// std r4,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r4.u64);
	// lfs f2,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// lfs f13,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f1,-64(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f0,-60(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f13,-56(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r3,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r3.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82353E28"))) PPC_WEAK_FUNC(sub_82353E28);
PPC_FUNC_IMPL(__imp__sub_82353E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,144(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f0,132(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,136(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f0,140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// std r7,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r7.u64);
	// lfs f0,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f13,164(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// std r5,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// lfs f0,184(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,172(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,176(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,180(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,64(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f0,204(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,196(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,200(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f11,68(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f0,224(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,212(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,216(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,220(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f12,56(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f0,244(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,236(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,240(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f12,60(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f11,76(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82353F18"))) PPC_WEAK_FUNC(sub_82353F18);
PPC_FUNC_IMPL(__imp__sub_82353F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82353F20;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8259bb70
	ctx.lr = 0x82353F28;
	__savefpr_14(ctx, base);
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-416
	ctx.r11.s64 = ctx.r1.s64 + -416;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,-400
	ctx.r10.s64 = ctx.r1.s64 + -400;
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r1,-368
	ctx.r5.s64 = ctx.r1.s64 + -368;
	// lfs f31,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f30,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f30.f64 = double(temp.f32);
	// addi r9,r1,-416
	ctx.r9.s64 = ctx.r1.s64 + -416;
	// stfs f7,-400(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -400, temp.u32);
	// addi r8,r1,-400
	ctx.r8.s64 = ctx.r1.s64 + -400;
	// stfs f4,-396(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -396, temp.u32);
	// addi r31,r1,-368
	ctx.r31.s64 = ctx.r1.s64 + -368;
	// fmuls f3,f11,f13
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f3,-416(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -416, temp.u32);
	// fmuls f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f11,-412(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// fmuls f9,f8,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f9,-408(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// ld r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// ld r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f0,-392(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -392, temp.u32);
	// fmuls f12,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// lfs f31,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,-384
	ctx.r6.s64 = ctx.r1.s64 + -384;
	// fadds f4,f31,f4
	ctx.f4.f64 = double(float(ctx.f31.f64 + ctx.f4.f64));
	// ld r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f11,-27244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f11.f64 = double(temp.f32);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f9,f7,f11
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// addi r7,r1,-400
	ctx.r7.s64 = ctx.r1.s64 + -400;
	// fadds f7,f30,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 + ctx.f7.f64));
	// lfs f30,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f30.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// std r27,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r27.u64);
	// std r26,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r26.u64);
	// std r28,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r28.u64);
	// stfs f13,-412(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// stfs f12,-408(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// std r10,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// stfs f5,-416(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -416, temp.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fadds f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f4,-396(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -396, temp.u32);
	// addi r30,r1,-416
	ctx.r30.s64 = ctx.r1.s64 + -416;
	// lfs f8,-364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -364);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,-360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -360);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r1,-336
	ctx.r29.s64 = ctx.r1.s64 + -336;
	// fadds f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// stfs f7,-400(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -400, temp.u32);
	// fadds f31,f0,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f31,-392(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + -392, temp.u32);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// std r6,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// std r5,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r5.u64);
	// ld r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lfs f30,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// ld r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// fmuls f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// std r10,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r10.u64);
	// fmuls f12,f30,f10
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// lfs f10,-380(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -380);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// lfs f3,-376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -376);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fsubs f29,f7,f9
	ctx.f29.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// addi r11,r1,-416
	ctx.r11.s64 = ctx.r1.s64 + -416;
	// ld r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// stfs f29,-416(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + -416, temp.u32);
	// addi r10,r1,-320
	ctx.r10.s64 = ctx.r1.s64 + -320;
	// std r9,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r9.u64);
	// addi r9,r1,-416
	ctx.r9.s64 = ctx.r1.s64 + -416;
	// addi r7,r1,-304
	ctx.r7.s64 = ctx.r1.s64 + -304;
	// addi r8,r1,-400
	ctx.r8.s64 = ctx.r1.s64 + -400;
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f10,-364(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -364);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// std r6,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r6.u64);
	// fmuls f3,f10,f11
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f10,-360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -360);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f10,f11
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f11,-412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -412);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -408);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f28,f11,f8
	ctx.f28.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f27,f10,f6
	ctx.f27.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// stfs f28,-412(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// stfs f27,-408(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// fsubs f5,f29,f5
	ctx.f5.f64 = double(float(ctx.f29.f64 - ctx.f5.f64));
	// ld r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fsubs f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f29,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// addi r6,r1,-416
	ctx.r6.s64 = ctx.r1.s64 + -416;
	// fsubs f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// addi r5,r1,-336
	ctx.r5.s64 = ctx.r1.s64 + -336;
	// fsubs f7,f31,f12
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// fsubs f3,f28,f3
	ctx.f3.f64 = double(float(ctx.f28.f64 - ctx.f3.f64));
	// stfs f5,-416(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -416, temp.u32);
	// fsubs f30,f27,f30
	ctx.f30.f64 = double(float(ctx.f27.f64 - ctx.f30.f64));
	// stfs f3,-412(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// fadds f5,f5,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// lfs f9,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// stfs f30,-408(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// fmuls f4,f11,f1
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fadds f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lfs f28,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f31,f10,f1
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// lfs f27,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f26,f7,f1
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// std r10,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// fmuls f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fadds f8,f3,f8
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// lfs f3,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// fadds f6,f30,f6
	ctx.f6.f64 = double(float(ctx.f30.f64 + ctx.f6.f64));
	// lfs f30,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// fadds f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// std r9,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// fadds f30,f30,f12
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// fadds f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f9,-400(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -400, temp.u32);
	// fmuls f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fadds f9,f29,f0
	ctx.f9.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// fadds f4,f3,f31
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// stfs f4,-396(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -396, temp.u32);
	// fadds f3,f30,f26
	ctx.f3.f64 = double(float(ctx.f30.f64 + ctx.f26.f64));
	// stfs f3,-392(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -392, temp.u32);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// fadds f4,f28,f13
	ctx.f4.f64 = double(float(ctx.f28.f64 + ctx.f13.f64));
	// ld r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// fadds f3,f27,f12
	ctx.f3.f64 = double(float(ctx.f27.f64 + ctx.f12.f64));
	// std r7,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r7.u64);
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f11,-416(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -416, temp.u32);
	// fadds f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// stfs f10,-412(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// std r11,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// addi r11,r1,-400
	ctx.r11.s64 = ctx.r1.s64 + -400;
	// fmr f30,f28
	ctx.f30.f64 = ctx.f28.f64;
	// addi r8,r1,-256
	ctx.r8.s64 = ctx.r1.s64 + -256;
	// fmr f29,f27
	ctx.f29.f64 = ctx.f27.f64;
	// addi r7,r1,-416
	ctx.r7.s64 = ctx.r1.s64 + -416;
	// fadds f9,f3,f7
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// stfs f9,-408(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// ld r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// addi r6,r1,-240
	ctx.r6.s64 = ctx.r1.s64 + -240;
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fadds f30,f30,f13
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f13.f64));
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// fadds f29,f29,f12
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f12.f64));
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// lfs f4,-316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -316);
	ctx.f4.f64 = double(temp.f32);
	// addi r9,r1,-320
	ctx.r9.s64 = ctx.r1.s64 + -320;
	// lfs f3,-312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -312);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// lfs f7,-320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// addi r10,r1,-416
	ctx.r10.s64 = ctx.r1.s64 + -416;
	// fmuls f4,f10,f1
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f3,f9,f1
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f7,f11,f1
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fadds f4,f30,f4
	ctx.f4.f64 = double(float(ctx.f30.f64 + ctx.f4.f64));
	// stfs f4,-396(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -396, temp.u32);
	// fadds f3,f29,f3
	ctx.f3.f64 = double(float(ctx.f29.f64 + ctx.f3.f64));
	// stfs f3,-392(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -392, temp.u32);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fadds f7,f31,f7
	ctx.f7.f64 = double(float(ctx.f31.f64 + ctx.f7.f64));
	// stfs f7,-400(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -400, temp.u32);
	// lfs f7,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fadds f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// fadds f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// fadds f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f11,-416(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -416, temp.u32);
	// fmr f11,f27
	ctx.f11.f64 = ctx.f27.f64;
	// lfs f7,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fadds f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fadds f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// stfs f10,-412(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// fadds f4,f3,f9
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f4,-408(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// lfs f10,-304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -300);
	ctx.f9.f64 = double(temp.f32);
	// fadds f4,f3,f13
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fadds f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fsubs f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f10,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f9,-296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -296);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f31,f11,f2
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmuls f30,f10,f2
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fsubs f10,f8,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// addi r11,r1,-400
	ctx.r11.s64 = ctx.r1.s64 + -400;
	// fmuls f29,f9,f2
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// addi r10,r1,-400
	ctx.r10.s64 = ctx.r1.s64 + -400;
	// fsubs f9,f6,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fsubs f11,f5,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// fmuls f6,f10,f1
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f5,f9,f1
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fadds f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fadds f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fadds f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f8,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// fadds f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// fadds f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// fadds f1,f8,f31
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f31.f64));
	// stfs f1,-416(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -416, temp.u32);
	// lfs f1,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fadds f25,f1,f0
	ctx.f25.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fadds f8,f4,f30
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f30.f64));
	// stfs f8,-412(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// fadds f4,f3,f29
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f29.f64));
	// stfs f4,-408(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// fmuls f3,f10,f2
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// ld r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// fmr f10,f27
	ctx.f10.f64 = ctx.f27.f64;
	// ld r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// fmuls f4,f11,f2
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// addi r7,r3,16
	ctx.r7.s64 = ctx.r3.s64 + 16;
	// fmr f11,f28
	ctx.f11.f64 = ctx.f28.f64;
	// fmuls f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// std r9,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// addi r9,r1,-384
	ctx.r9.s64 = ctx.r1.s64 + -384;
	// std r8,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// lfs f31,-252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r1,-416
	ctx.r8.s64 = ctx.r1.s64 + -416;
	// lfs f29,-248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	ctx.f29.f64 = double(temp.f32);
	// addi r6,r1,-416
	ctx.r6.s64 = ctx.r1.s64 + -416;
	// lfs f22,-240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f21.f64 = double(temp.f32);
	// fadds f23,f10,f12
	ctx.f23.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f10,-256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	ctx.f10.f64 = double(temp.f32);
	// lfs f20,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f1,f22,f10
	ctx.f1.f64 = double(float(ctx.f22.f64 - ctx.f10.f64));
	// lfs f28,-320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f28.f64 = double(temp.f32);
	// fadds f24,f11,f13
	ctx.f24.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f27,-316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -316);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f30,f21,f31
	ctx.f30.f64 = double(float(ctx.f21.f64 - ctx.f31.f64));
	// lfs f26,-312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -312);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f11,f20,f29
	ctx.f11.f64 = double(float(ctx.f20.f64 - ctx.f29.f64));
	// fsubs f0,f28,f10
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f10.f64));
	// stfs f1,-384(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -384, temp.u32);
	// fsubs f13,f27,f31
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f31.f64));
	// stfs f30,-380(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -380, temp.u32);
	// fsubs f12,f26,f29
	ctx.f12.f64 = double(float(ctx.f26.f64 - ctx.f29.f64));
	// stfs f11,-376(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -376, temp.u32);
	// fadds f4,f25,f4
	ctx.f4.f64 = double(float(ctx.f25.f64 + ctx.f4.f64));
	// lfs f25,-268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	ctx.f25.f64 = double(temp.f32);
	// lfs f9,-264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	ctx.f9.f64 = double(temp.f32);
	// fadds f2,f23,f2
	ctx.f2.f64 = double(float(ctx.f23.f64 + ctx.f2.f64));
	// lfs f8,-272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f8.f64 = double(temp.f32);
	// lfs f16,-328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -328);
	ctx.f16.f64 = double(temp.f32);
	// fadds f3,f24,f3
	ctx.f3.f64 = double(float(ctx.f24.f64 + ctx.f3.f64));
	// lfs f24,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f24.f64 = double(temp.f32);
	// lfs f15,-336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -336);
	ctx.f15.f64 = double(temp.f32);
	// fmuls f24,f24,f25
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f25.f64));
	// lfs f23,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f18,f0,f11
	ctx.f18.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f17,f1,f13
	ctx.f17.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f19,f30,f12
	ctx.f19.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// fmsubs f1,f1,f12,f18
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 - ctx.f18.f64));
	// stfs f1,-364(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -364, temp.u32);
	// fmsubs f30,f0,f30,f17
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 - ctx.f17.f64));
	// stfs f30,-360(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -360, temp.u32);
	// fmsubs f11,f11,f13,f19
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f19.f64));
	// lfs f19,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f19.f64 = double(temp.f32);
	// stfs f11,-368(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -368, temp.u32);
	// fmadds f24,f23,f9,f24
	ctx.f24.f64 = double(float(ctx.f23.f64 * ctx.f9.f64 + ctx.f24.f64));
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fmr f18,f19
	ctx.f18.f64 = ctx.f19.f64;
	// stfs f18,-400(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + -400, temp.u32);
	// fmuls f1,f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lfs f18,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f18.f64 = double(temp.f32);
	// stfs f18,-396(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + -396, temp.u32);
	// fmr f18,f23
	ctx.f18.f64 = ctx.f23.f64;
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// stfs f18,-392(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + -392, temp.u32);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// lfs f17,-332(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -332);
	ctx.f17.f64 = double(temp.f32);
	// addi r9,r1,-400
	ctx.r9.s64 = ctx.r1.s64 + -400;
	// fmadds f24,f8,f19,f24
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f19.f64 + ctx.f24.f64));
	// stfs f24,-388(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -388, temp.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmadds f30,f30,f30,f1
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f1.f64));
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// addi r8,r1,-416
	ctx.r8.s64 = ctx.r1.s64 + -416;
	// std r5,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r5.u64);
	// lfs f24,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f24.f64 = double(temp.f32);
	// fneg f24,f24
	ctx.f24.u64 = ctx.f24.u64 ^ 0x8000000000000000;
	// lfs f19,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f19.f64 = double(temp.f32);
	// fmr f18,f19
	ctx.f18.f64 = ctx.f19.f64;
	// lfs f23,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f23.f64 = double(temp.f32);
	// fneg f23,f23
	ctx.f23.u64 = ctx.f23.u64 ^ 0x8000000000000000;
	// fmuls f14,f17,f24
	ctx.f14.f64 = double(float(ctx.f17.f64 * ctx.f24.f64));
	// lfs f17,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f17.f64 = double(temp.f32);
	// fneg f24,f19
	ctx.f24.u64 = ctx.f19.u64 ^ 0x8000000000000000;
	// lfs f19,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f19.f64 = double(temp.f32);
	// stfs f19,-352(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -352, temp.u32);
	// fneg f19,f18
	ctx.f19.u64 = ctx.f18.u64 ^ 0x8000000000000000;
	// fneg f18,f17
	ctx.f18.u64 = ctx.f17.u64 ^ 0x8000000000000000;
	// stfs f19,-400(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -400, temp.u32);
	// stfs f18,-396(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + -396, temp.u32);
	// fmadds f23,f16,f23,f14
	ctx.f23.f64 = double(float(ctx.f16.f64 * ctx.f23.f64 + ctx.f14.f64));
	// fmadds f24,f15,f24,f23
	ctx.f24.f64 = double(float(ctx.f15.f64 * ctx.f24.f64 + ctx.f23.f64));
	// stfs f24,-388(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -388, temp.u32);
	// fsubs f24,f8,f10
	ctx.f24.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// stfs f24,-384(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -384, temp.u32);
	// fsubs f10,f25,f31
	ctx.f10.f64 = double(float(ctx.f25.f64 - ctx.f31.f64));
	// stfs f10,-380(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -380, temp.u32);
	// fsubs f31,f9,f29
	ctx.f31.f64 = double(float(ctx.f9.f64 - ctx.f29.f64));
	// stfs f31,-376(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + -376, temp.u32);
	// fmuls f19,f24,f12
	ctx.f19.f64 = double(float(ctx.f24.f64 * ctx.f12.f64));
	// fmuls f23,f0,f10
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f29,f31,f13
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmsubs f0,f0,f31,f19
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f19.f64));
	// fmsubs f13,f24,f13,f23
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f13.f64 - ctx.f23.f64));
	// fmsubs f1,f10,f12,f29
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f29.f64));
	// fmadds f10,f11,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f30.f64));
	// lfs f17,-352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -352);
	ctx.f17.f64 = double(temp.f32);
	// fneg f17,f17
	ctx.f17.u64 = ctx.f17.u64 ^ 0x8000000000000000;
	// stfs f17,-392(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -392, temp.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// addi r10,r1,-384
	ctx.r10.s64 = ctx.r1.s64 + -384;
	// std r4,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// stfs f13,-392(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -392, temp.u32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// addi r11,r1,-368
	ctx.r11.s64 = ctx.r1.s64 + -368;
	// stfs f1,-400(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -400, temp.u32);
	// stfs f0,-396(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -396, temp.u32);
	// ld r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r7,r1,-416
	ctx.r7.s64 = ctx.r1.s64 + -416;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmadds f12,f1,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f13.f64));
	// std r5,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// std r4,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
	// fmadds f31,f0,f0,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// frsqrte f12,f10
	ctx.f12.f64 = double(1.0f / sqrtf(float(ctx.f10.f64)));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// stfs f8,-368(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -368, temp.u32);
	// lfd f0,-4832(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmul f30,f12,f12
	ctx.f30.f64 = ctx.f12.f64 * ctx.f12.f64;
	// lfd f13,-4840(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// fmul f29,f12,f0
	ctx.f29.f64 = ctx.f12.f64 * ctx.f0.f64;
	// addi r11,r1,-368
	ctx.r11.s64 = ctx.r1.s64 + -368;
	// fnmsub f30,f30,f10,f13
	ctx.f30.f64 = -(ctx.f30.f64 * ctx.f10.f64 - ctx.f13.f64);
	// fmadd f12,f30,f29,f12
	ctx.f12.f64 = ctx.f30.f64 * ctx.f29.f64 + ctx.f12.f64;
	// fmul f30,f12,f12
	ctx.f30.f64 = ctx.f12.f64 * ctx.f12.f64;
	// fmul f29,f12,f0
	ctx.f29.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fnmsub f10,f30,f10,f13
	ctx.f10.f64 = -(ctx.f30.f64 * ctx.f10.f64 - ctx.f13.f64);
	// lfs f30,-408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -408);
	ctx.f30.f64 = double(temp.f32);
	// fmadd f12,f10,f29,f12
	ctx.f12.f64 = ctx.f10.f64 * ctx.f29.f64 + ctx.f12.f64;
	// lfs f10,-412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -412);
	ctx.f10.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f10,-412(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// fmuls f30,f12,f30
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f10,48(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f30,-408(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// stfs f30,64(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// std r30,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r30.u64);
	// addi r10,r1,-384
	ctx.r10.s64 = ctx.r1.s64 + -384;
	// std r9,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// addi r9,r1,-416
	ctx.r9.s64 = ctx.r1.s64 + -416;
	// addi r8,r1,-416
	ctx.r8.s64 = ctx.r1.s64 + -416;
	// fmuls f29,f27,f10
	ctx.f29.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// fsubs f10,f5,f2
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// fmadds f11,f26,f30,f29
	ctx.f11.f64 = double(float(ctx.f26.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fsubs f29,f25,f3
	ctx.f29.f64 = double(float(ctx.f25.f64 - ctx.f3.f64));
	// stfs f29,-364(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + -364, temp.u32);
	// fsubs f30,f9,f2
	ctx.f30.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// stfs f30,-360(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -360, temp.u32);
	// frsqrte f9,f31
	ctx.f9.f64 = double(1.0f / sqrtf(float(ctx.f31.f64)));
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmadds f12,f28,f12,f11
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f12,80(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fsubs f11,f6,f3
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// fsubs f12,f7,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// fmuls f25,f29,f10
	ctx.f25.f64 = double(float(ctx.f29.f64 * ctx.f10.f64));
	// fmuls f24,f8,f11
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f23,f12,f30
	ctx.f23.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmsubs f30,f30,f11,f25
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f11.f64 - ctx.f25.f64));
	// stfs f30,-384(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + -384, temp.u32);
	// fmul f25,f9,f0
	ctx.f25.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fmsubs f29,f12,f29,f24
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 - ctx.f24.f64));
	// stfs f29,-376(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + -376, temp.u32);
	// fmsubs f8,f8,f10,f23
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f23.f64));
	// stfs f8,-380(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -380, temp.u32);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f29,f29,f29
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// fmadds f29,f30,f30,f29
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fmadds f29,f8,f8,f29
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f29.f64));
	// fmul f8,f9,f9
	ctx.f8.f64 = ctx.f9.f64 * ctx.f9.f64;
	// fnmsub f8,f8,f31,f13
	ctx.f8.f64 = -(ctx.f8.f64 * ctx.f31.f64 - ctx.f13.f64);
	// fmadd f9,f8,f25,f9
	ctx.f9.f64 = ctx.f8.f64 * ctx.f25.f64 + ctx.f9.f64;
	// frsqrte f8,f29
	ctx.f8.f64 = double(1.0f / sqrtf(float(ctx.f29.f64)));
	// fmul f25,f9,f9
	ctx.f25.f64 = ctx.f9.f64 * ctx.f9.f64;
	// fmul f24,f9,f0
	ctx.f24.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fnmsub f31,f25,f31,f13
	ctx.f31.f64 = -(ctx.f25.f64 * ctx.f31.f64 - ctx.f13.f64);
	// fmul f25,f8,f0
	ctx.f25.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmadd f9,f31,f24,f9
	ctx.f9.f64 = ctx.f31.f64 * ctx.f24.f64 + ctx.f9.f64;
	// frsp f31,f9
	ctx.f31.f64 = double(float(ctx.f9.f64));
	// fmul f9,f8,f8
	ctx.f9.f64 = ctx.f8.f64 * ctx.f8.f64;
	// fnmsub f9,f9,f29,f13
	ctx.f9.f64 = -(ctx.f9.f64 * ctx.f29.f64 - ctx.f13.f64);
	// fmadd f9,f9,f25,f8
	ctx.f9.f64 = ctx.f9.f64 * ctx.f25.f64 + ctx.f8.f64;
	// lfs f8,-412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -412);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f31,f8
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f8.f64));
	// stfs f8,-412(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// lfs f25,-408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -408);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f27,f27,f8
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f8.f64));
	// fmuls f25,f31,f25
	ctx.f25.f64 = double(float(ctx.f31.f64 * ctx.f25.f64));
	// stfs f8,52(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f1,36(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f25,-408(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// addi r11,r1,-368
	ctx.r11.s64 = ctx.r1.s64 + -368;
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// addi r10,r1,-384
	ctx.r10.s64 = ctx.r1.s64 + -384;
	// stfs f25,68(r3)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// addi r9,r1,-416
	ctx.r9.s64 = ctx.r1.s64 + -416;
	// addi r8,r1,-416
	ctx.r8.s64 = ctx.r1.s64 + -416;
	// fmadds f8,f26,f25,f27
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f25.f64 + ctx.f27.f64));
	// fmadds f8,f28,f1,f8
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f1.f64 + ctx.f8.f64));
	// stfs f8,84(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// fmul f1,f9,f9
	ctx.f1.f64 = ctx.f9.f64 * ctx.f9.f64;
	// fmul f8,f9,f0
	ctx.f8.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fnmsub f1,f1,f29,f13
	ctx.f1.f64 = -(ctx.f1.f64 * ctx.f29.f64 - ctx.f13.f64);
	// fmadd f9,f1,f8,f9
	ctx.f9.f64 = ctx.f1.f64 * ctx.f8.f64 + ctx.f9.f64;
	// fsubs f8,f22,f4
	ctx.f8.f64 = double(float(ctx.f22.f64 - ctx.f4.f64));
	// stfs f8,-368(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -368, temp.u32);
	// fsubs f4,f21,f3
	ctx.f4.f64 = double(float(ctx.f21.f64 - ctx.f3.f64));
	// stfs f4,-364(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -364, temp.u32);
	// fsubs f3,f20,f2
	ctx.f3.f64 = double(float(ctx.f20.f64 - ctx.f2.f64));
	// stfs f3,-360(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -360, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f31,f10,f8
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f1,f12,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmsubs f12,f12,f3,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 - ctx.f31.f64));
	// lfs f3,-408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -408);
	ctx.f3.f64 = double(temp.f32);
	// fmsubs f11,f11,f8,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 - ctx.f1.f64));
	// stfs f11,-376(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -376, temp.u32);
	// fmsubs f10,f4,f10,f2
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 - ctx.f2.f64));
	// lfs f4,-412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -412);
	ctx.f4.f64 = double(temp.f32);
	// stfs f12,-380(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -380, temp.u32);
	// stfs f10,-384(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -384, temp.u32);
	// ld r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f8,f10,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f8
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmuls f8,f9,f4
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// stfs f8,-412(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// fmuls f12,f30,f9
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f9.f64));
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fmuls f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// stfs f9,-408(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// stfs f9,72(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// stfs f8,56(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// fmuls f2,f8,f6
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmadds f1,f9,f5,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f12,f12,f7,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f1.f64));
	// stfs f12,88(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// frsqrte f12,f11
	ctx.f12.f64 = double(1.0f / sqrtf(float(ctx.f11.f64)));
	// fmul f9,f11,f12
	ctx.f9.f64 = ctx.f11.f64 * ctx.f12.f64;
	// fmul f8,f12,f0
	ctx.f8.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fnmsub f4,f9,f12,f13
	ctx.f4.f64 = -(ctx.f9.f64 * ctx.f12.f64 - ctx.f13.f64);
	// fmadd f12,f4,f8,f12
	ctx.f12.f64 = ctx.f4.f64 * ctx.f8.f64 + ctx.f12.f64;
	// fmul f3,f11,f12
	ctx.f3.f64 = ctx.f11.f64 * ctx.f12.f64;
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fnmsub f1,f3,f12,f13
	ctx.f1.f64 = -(ctx.f3.f64 * ctx.f12.f64 - ctx.f13.f64);
	// lfs f13,-412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -412);
	ctx.f13.f64 = double(temp.f32);
	// fmadd f0,f1,f2,f12
	ctx.f0.f64 = ctx.f1.f64 * ctx.f2.f64 + ctx.f12.f64;
	// lfs f12,-408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -408);
	ctx.f12.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fmuls f11,f13,f6
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmadds f10,f12,f5,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f11.f64));
	// fmadds f0,f0,f7,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f10.f64));
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8259bbbc
	ctx.lr = 0x823547D8;
	__restfpr_14(ctx, base);
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823547DC"))) PPC_WEAK_FUNC(sub_823547DC);
PPC_FUNC_IMPL(__imp__sub_823547DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823547E0"))) PPC_WEAK_FUNC(sub_823547E0);
PPC_FUNC_IMPL(__imp__sub_823547E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823547FC"))) PPC_WEAK_FUNC(sub_823547FC);
PPC_FUNC_IMPL(__imp__sub_823547FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354800"))) PPC_WEAK_FUNC(sub_82354800);
PPC_FUNC_IMPL(__imp__sub_82354800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354814
	if (ctx.cr6.eq) goto loc_82354814;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_82354814:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354828
	if (ctx.cr6.eq) goto loc_82354828;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
loc_82354828:
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82354880
	if (ctx.cr6.eq) goto loc_82354880;
	// lhz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82354844:
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lhz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82354844
	if (ctx.cr6.lt) goto loc_82354844;
	// blr 
	return;
loc_82354880:
	// lhz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82354890:
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lhz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82354890
	if (ctx.cr6.lt) goto loc_82354890;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823548CC"))) PPC_WEAK_FUNC(sub_823548CC);
PPC_FUNC_IMPL(__imp__sub_823548CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823548D0"))) PPC_WEAK_FUNC(sub_823548D0);
PPC_FUNC_IMPL(__imp__sub_823548D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f0,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,23476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23476);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82354900
	if (ctx.cr6.gt) goto loc_82354900;
	// bso cr6,0x82354900
	if (ctx.cr6.so) goto loc_82354900;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-4824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4824);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82354900
	if (ctx.cr6.lt) goto loc_82354900;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x82354904
	if (!ctx.cr6.so) goto loc_82354904;
loc_82354900:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82354904:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82354938
	if (ctx.cr6.eq) goto loc_82354938;
	// fcmpu cr6,f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f3.f64);
	// blt cr6,0x8235492c
	if (ctx.cr6.lt) goto loc_8235492C;
	// bso cr6,0x8235492c
	if (ctx.cr6.so) goto loc_8235492C;
	// fcmpu cr6,f1,f4
	ctx.cr6.compare(ctx.f1.f64, ctx.f4.f64);
	// bgt cr6,0x8235492c
	if (ctx.cr6.gt) goto loc_8235492C;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x82354930
	if (!ctx.cr6.so) goto loc_82354930;
loc_8235492C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82354930:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82354938:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82354968
	if (!ctx.cr6.gt) goto loc_82354968;
	// fsubs f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fsubs f12,f4,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f1.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x82354978
	goto loc_82354978;
loc_82354968:
	// fsubs f11,f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f1.f64));
	// fsubs f10,f3,f1
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
loc_82354978:
	// lfs f12,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8235499c
	if (ctx.cr6.gt) goto loc_8235499C;
	// bso cr6,0x8235499c
	if (ctx.cr6.so) goto loc_8235499C;
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// blt cr6,0x8235499c
	if (ctx.cr6.lt) goto loc_8235499C;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x823549a0
	if (!ctx.cr6.so) goto loc_823549A0;
loc_8235499C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823549A0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// fsubs f8,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsel f7,f8,f12,f13
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f5,f6,f0,f13
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f5,0(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823549CC"))) PPC_WEAK_FUNC(sub_823549CC);
PPC_FUNC_IMPL(__imp__sub_823549CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823549D0"))) PPC_WEAK_FUNC(sub_823549D0);
PPC_FUNC_IMPL(__imp__sub_823549D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lis r11,-32046
	ctx.r11.s64 = -2100166656;
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f5,f1
	ctx.f5.f64 = ctx.f1.f64;
	// addi r11,r11,-32384
	ctx.r11.s64 = ctx.r11.s64 + -32384;
	// fsubs f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f0,f0
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmr f4,f0
	ctx.f4.f64 = ctx.f0.f64;
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f3,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f5,f5,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fadds f4,f4,f9
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fsubs f5,f3,f1
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fsubs f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// fabs f8,f8
	ctx.f8.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fabs f7,f7
	ctx.f7.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fsubs f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fadds f5,f0,f31
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fsubs f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsubs f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsel f13,f8,f10,f13
	ctx.f13.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f13.f64;
	// fabs f6,f6
	ctx.f6.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fsel f12,f7,f9,f12
	ctx.f12.f64 = ctx.f7.f64 >= 0.0 ? ctx.f9.f64 : ctx.f12.f64;
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fmadds f4,f12,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fsubs f6,f0,f11
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f0,f6,f0,f11
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fmadds f3,f0,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f2
	ctx.cr6.compare(ctx.f3.f64, ctx.f2.f64);
	// blt cr6,0x82354aa4
	if (ctx.cr6.lt) goto loc_82354AA4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82354AA4:
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82354AAC"))) PPC_WEAK_FUNC(sub_82354AAC);
PPC_FUNC_IMPL(__imp__sub_82354AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354AB0"))) PPC_WEAK_FUNC(sub_82354AB0);
PPC_FUNC_IMPL(__imp__sub_82354AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f6,f10
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f0,f0
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f5,f9
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f4,f8
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f11,f11
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsubs f13,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// lfs f1,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f2,f7,f7,f12
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f12.f64));
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f13,f13
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fsubs f13,f4,f1
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f1.f64));
	// fmadds f12,f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f31.f64));
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// bgt cr6,0x82354b40
	if (ctx.cr6.gt) goto loc_82354B40;
	// bso cr6,0x82354b40
	if (ctx.cr6.so) goto loc_82354B40;
	// fcmpu cr6,f2,f3
	ctx.cr6.compare(ctx.f2.f64, ctx.f3.f64);
	// bgt cr6,0x82354b34
	if (ctx.cr6.gt) goto loc_82354B34;
	// bso cr6,0x82354b34
	if (ctx.cr6.so) goto loc_82354B34;
	// li r3,2
	ctx.r3.s64 = 2;
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82354B34:
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82354B40:
	// fcmpu cr6,f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f3.f64);
	// bgt cr6,0x82354b4c
	if (ctx.cr6.gt) goto loc_82354B4C;
	// bns cr6,0x82354b34
	if (!ctx.cr6.so) goto loc_82354B34;
loc_82354B4C:
	// lfs f2,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f2,f10
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// lfs f1,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f12,f1,f9
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// lfs f2,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f31,f13,f13
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fsubs f11,f2,f8
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// fmadds f0,f12,f0,f1
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f2,f12,f12,f31
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f31.f64));
	// fmadds f1,f11,f7,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f0.f64));
	// lfs f7,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f11,f11,f2
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fdivs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// blt cr6,0x82354be8
	if (ctx.cr6.lt) goto loc_82354BE8;
	// bso cr6,0x82354be8
	if (ctx.cr6.so) goto loc_82354BE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f7,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bgt cr6,0x82354be8
	if (ctx.cr6.gt) goto loc_82354BE8;
	// bso cr6,0x82354be8
	if (ctx.cr6.so) goto loc_82354BE8;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fsubs f12,f10,f6
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fsubs f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fsubs f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f3
	ctx.cr6.compare(ctx.f10.f64, ctx.f3.f64);
	// bgt cr6,0x82354be8
	if (ctx.cr6.gt) goto loc_82354BE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bns cr6,0x82354bec
	if (!ctx.cr6.so) goto loc_82354BEC;
loc_82354BE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82354BEC:
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82354BF4"))) PPC_WEAK_FUNC(sub_82354BF4);
PPC_FUNC_IMPL(__imp__sub_82354BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354BF8"))) PPC_WEAK_FUNC(sub_82354BF8);
PPC_FUNC_IMPL(__imp__sub_82354BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f6,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f3,f6,f12,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f2,f9,f12,f10
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f12,f5,f0,f3
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f0,f13,f8,f2
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82354d18
	if (ctx.cr6.eq) goto loc_82354D18;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fdivs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfs f13,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// bsolr cr6
	if (ctx.cr6.so) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// bsolr cr6
	if (ctx.cr6.so) return;
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f11,32(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r5,16
	ctx.r8.s64 = ctx.r5.s64 + 16;
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f7,-16(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fadds f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f6,-12(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fadds f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f5,-8(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// std r10,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f4,-16(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f3,-12(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f2,-8(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// blr 
	return;
loc_82354D18:
	// fcmpu cr6,f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f0,2864(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r8,r5,16
	ctx.r8.s64 = ctx.r5.s64 + 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f7,-16(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fadds f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f6,-12(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fadds f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f5,-8(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// std r10,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// stfs f4,-16(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f3,-12(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f2,-8(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82354DC4"))) PPC_WEAK_FUNC(sub_82354DC4);
PPC_FUNC_IMPL(__imp__sub_82354DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354DC8"))) PPC_WEAK_FUNC(sub_82354DC8);
PPC_FUNC_IMPL(__imp__sub_82354DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f10,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmadds f7,f13,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f13,f0,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fadds f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f6
	ctx.cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// ble cr6,0x82354e18
	if (!ctx.cr6.gt) goto loc_82354E18;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82354E18:
	// fsubs f0,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82354e3c
	if (ctx.cr6.lt) goto loc_82354E3C;
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// li r3,2
	ctx.r3.s64 = 2;
	// fcmpu cr6,f13,f5
	ctx.cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82354E3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82354E44"))) PPC_WEAK_FUNC(sub_82354E44);
PPC_FUNC_IMPL(__imp__sub_82354E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354E48"))) PPC_WEAK_FUNC(sub_82354E48);
PPC_FUNC_IMPL(__imp__sub_82354E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f2,f11
	ctx.f2.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_82354E74:
	// lfs f10,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f12,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f5,f10,f0,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fsubs f10,f5,f7
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bgt cr6,0x82354fcc
	if (ctx.cr6.gt) goto loc_82354FCC;
	// fcmpu cr6,f10,f2
	ctx.cr6.compare(ctx.f10.f64, ctx.f2.f64);
	// ble cr6,0x82354ea8
	if (!ctx.cr6.gt) goto loc_82354EA8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82354EA8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x82354e74
	if (ctx.cr6.lt) goto loc_82354E74;
	// lfs f4,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f13,f4
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f9,f0,f3
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// lfs f7,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f1,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f5,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f8,f1,f12
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f4,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f3,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f4,f0
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f1,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f3,f0
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f3,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f30,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f3,f1,f12
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f1,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f31,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// lfs f31,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// fadds f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// lfs f5,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// fadds f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f13,f10,f8
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// fadds f10,f7,f9
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fadds f9,f6,f3
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fsubs f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fsubs f13,f10,f1
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fsubs f10,f9,f31
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// fsubs f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82354fcc
	if (ctx.cr6.gt) goto loc_82354FCC;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x82354fcc
	if (ctx.cr6.gt) goto loc_82354FCC;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bgt cr6,0x82354fcc
	if (ctx.cr6.gt) goto loc_82354FCC;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x82354fcc
	if (ctx.cr6.gt) goto loc_82354FCC;
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bgt cr6,0x82354f98
	if (ctx.cr6.gt) goto loc_82354F98;
	// fcmpu cr6,f13,f2
	ctx.cr6.compare(ctx.f13.f64, ctx.f2.f64);
	// bgt cr6,0x82354f98
	if (ctx.cr6.gt) goto loc_82354F98;
	// fcmpu cr6,f10,f2
	ctx.cr6.compare(ctx.f10.f64, ctx.f2.f64);
	// bgt cr6,0x82354f98
	if (ctx.cr6.gt) goto loc_82354F98;
	// fcmpu cr6,f12,f2
	ctx.cr6.compare(ctx.f12.f64, ctx.f2.f64);
	// ble cr6,0x82354fd0
	if (!ctx.cr6.gt) goto loc_82354FD0;
loc_82354F98:
	// fsubs f4,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f3,f10,f12
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsel f13,f4,f0,f13
	ctx.f13.f64 = ctx.f4.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f0,f3,f10,f12
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// fsub f2,f13,f0
	ctx.f2.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fsel f0,f2,f13,f0
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f11,f1
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// stfs f0,32(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82354FCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82354FD0:
	// lfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82354FDC"))) PPC_WEAK_FUNC(sub_82354FDC);
PPC_FUNC_IMPL(__imp__sub_82354FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82354FE0"))) PPC_WEAK_FUNC(sub_82354FE0);
PPC_FUNC_IMPL(__imp__sub_82354FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfs f3,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f7,f3
	ctx.cr6.compare(ctx.f7.f64, ctx.f3.f64);
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// bge cr6,0x82355010
	if (!ctx.cr6.lt) goto loc_82355010;
	// fsubs f10,f7,f3
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// b 0x82355020
	goto loc_82355020;
loc_82355010:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// ble cr6,0x82355024
	if (!ctx.cr6.gt) goto loc_82355024;
	// fsubs f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
loc_82355020:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82355024:
	// lfs f5,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f5,f1
	ctx.cr6.compare(ctx.f5.f64, ctx.f1.f64);
	// bge cr6,0x8235503c
	if (!ctx.cr6.lt) goto loc_8235503C;
	// fsubs f8,f5,f1
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// b 0x8235504c
	goto loc_8235504C;
loc_8235503C:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// ble cr6,0x82355050
	if (!ctx.cr6.gt) goto loc_82355050;
	// fsubs f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
loc_8235504C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82355050:
	// lfs f6,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f6,f2
	ctx.cr6.compare(ctx.f6.f64, ctx.f2.f64);
	// bge cr6,0x82355068
	if (!ctx.cr6.lt) goto loc_82355068;
	// fsubs f9,f6,f2
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// b 0x82355078
	goto loc_82355078;
loc_82355068:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x8235507c
	if (!ctx.cr6.gt) goto loc_8235507C;
	// fsubs f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
loc_82355078:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8235507C:
	// fmuls f0,f9,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f13,f10,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f0,f8,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f13.f64));
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82355298
	if (!ctx.cr6.lt) goto loc_82355298;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82355158
	if (!ctx.cr6.eq) goto loc_82355158;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fres f11,f0
	ctx.f11.f64 = float(1.0 / ctx.f0.f64);
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r5,16
	ctx.r9.s64 = ctx.r5.s64 + 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,2868(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f4,f11,f0,f13
	ctx.f4.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fadds f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// fmuls f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fnmsubs f2,f11,f0,f13
	ctx.f2.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fadds f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// fmuls f13,f1,f11
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f10,f8,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fneg f13,f11
	ctx.f13.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fneg f11,f10
	ctx.f11.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f11,-12(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fneg f10,f9
	ctx.f10.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f10,-8(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f9,-32(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fadds f8,f5,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f8,-28(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fadds f7,f6,f12
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f7,-24(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r7.u64);
	// std r6,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r6.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lfs f6,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// stfs f5,32(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// blr 
	return;
loc_82355158:
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f7,f12
	ctx.cr6.compare(ctx.f7.f64, ctx.f12.f64);
	// bge cr6,0x823551a0
	if (!ctx.cr6.lt) goto loc_823551A0;
	// fsubs f9,f7,f3
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// b 0x823551a4
	goto loc_823551A4;
loc_823551A0:
	// fsubs f9,f7,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
loc_823551A4:
	// fcmpu cr6,f5,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f5.f64, ctx.f11.f64);
	// bge cr6,0x823551b4
	if (!ctx.cr6.lt) goto loc_823551B4;
	// fsubs f10,f5,f1
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// b 0x823551b8
	goto loc_823551B8;
loc_823551B4:
	// fsubs f10,f5,f8
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
loc_823551B8:
	// fcmpu cr6,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bge cr6,0x823551c8
	if (!ctx.cr6.lt) goto loc_823551C8;
	// fsubs f12,f6,f2
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// b 0x823551cc
	goto loc_823551CC;
loc_823551C8:
	// fsubs f12,f6,f4
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
loc_823551CC:
	// fabs f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823551f8
	if (!ctx.cr6.gt) goto loc_823551F8;
	// fabs f0,f10
	ctx.f0.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823551f8
	if (!ctx.cr6.gt) goto loc_823551F8;
	// fabs f0,f12
	ctx.f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// li r3,2
	ctx.r3.s64 = 2;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x823551fc
	if (ctx.cr6.gt) goto loc_823551FC;
loc_823551F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823551FC:
	// fmuls f4,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r5,16
	ctx.r9.s64 = ctx.r5.s64 + 16;
	// lfs f8,-27244(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27244);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// lfs f0,2868(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f10,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fsqrts f11,f2
	ctx.f11.f64 = double(float(sqrt(ctx.f2.f64)));
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f9,-16(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,-12(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// fmuls f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f1,f7,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f1,-32(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fadds f13,f5,f10
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fadds f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r4,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r4.u64);
	// std r11,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// lfs f0,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f11,f0,f8,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 - ctx.f11.f64));
	// stfs f11,32(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// blr 
	return;
loc_82355298:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823552A0"))) PPC_WEAK_FUNC(sub_823552A0);
PPC_FUNC_IMPL(__imp__sub_823552A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823552bc
	if (!ctx.cr6.gt) goto loc_823552BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823552cc
	goto loc_823552CC;
loc_823552BC:
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x823552cc
	if (!ctx.cr6.lt) goto loc_823552CC;
	// li r11,2
	ctx.r11.s64 = 2;
loc_823552CC:
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x823552e4
	if (!ctx.cr6.gt) goto loc_823552E4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x823552f4
	goto loc_823552F4;
loc_823552E4:
	// lfs f10,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x823552f4
	if (!ctx.cr6.lt) goto loc_823552F4;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_823552F4:
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x8235530c
	if (!ctx.cr6.gt) goto loc_8235530C;
	// ori r3,r11,32
	ctx.r3.u64 = ctx.r11.u64 | 32;
	// blr 
	return;
loc_8235530C:
	// lfs f8,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// ori r3,r11,16
	ctx.r3.u64 = ctx.r11.u64 | 16;
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82355324"))) PPC_WEAK_FUNC(sub_82355324);
PPC_FUNC_IMPL(__imp__sub_82355324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82355328"))) PPC_WEAK_FUNC(sub_82355328);
PPC_FUNC_IMPL(__imp__sub_82355328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82355330;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82355360
	if (!ctx.cr6.lt) goto loc_82355360;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82355370
	goto loc_82355370;
loc_82355360:
	// fcmpu cr6,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// li r6,2
	ctx.r6.s64 = 2;
	// bgt cr6,0x82355370
	if (ctx.cr6.gt) goto loc_82355370;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82355370:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82355624
	if (!ctx.cr6.gt) goto loc_82355624;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f11.f64 = double(temp.f32);
loc_82355384:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x823553ac
	if (!ctx.cr6.lt) goto loc_823553AC;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x823553bc
	goto loc_823553BC;
loc_823553AC:
	// fcmpu cr6,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// li r30,2
	ctx.r30.s64 = 2;
	// bgt cr6,0x823553bc
	if (ctx.cr6.gt) goto loc_823553BC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823553BC:
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x823555f0
	if (ctx.cr6.eq) goto loc_823555F0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// beq cr6,0x823553d4
	if (ctx.cr6.eq) goto loc_823553D4;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
loc_823553D4:
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lfsx f13,r7,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// bne cr6,0x82355474
	if (!ctx.cr6.eq) goto loc_82355474;
	// fsubs f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lfs f3,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lfs f31,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f8,f3,f0
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fadds f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f9,-112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// fadds f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// stfs f8,-108(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// fadds f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,-104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// ld r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r29,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r29.u64);
	// std r7,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r7.u64);
	// b 0x823554f0
	goto loc_823554F0;
loc_82355474:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x823554f0
	if (!ctx.cr6.eq) goto loc_823554F0;
	// fsubs f6,f2,f13
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r1,-96
	ctx.r7.s64 = ctx.r1.s64 + -96;
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f0,f6,f12
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f7,f5,f10
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f6,f4,f10
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fadds f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f5,-96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fadds f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// stfs f4,-92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fadds f3,f0,f10
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f3,-88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r29,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r29.u64);
	// std r7,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r7.u64);
loc_823554F0:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82355570
	if (!ctx.cr6.eq) goto loc_82355570;
	// fsubs f0,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fadds f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f3,-80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// fadds f12,f10,f8
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f12,-76(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f10,-72(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// ld r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// std r10,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// b 0x82355614
	goto loc_82355614;
loc_82355570:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x823555f0
	if (!ctx.cr6.eq) goto loc_823555F0;
	// fsubs f9,f2,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lfs f3,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f9,f8,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f8,f7,f13
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f12,-64(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fadds f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f10,-60(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fadds f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,-56(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// ld r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// std r10,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// b 0x82355614
	goto loc_82355614;
loc_823555F0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82355614
	if (!ctx.cr6.eq) goto loc_82355614;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
loc_82355614:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82355384
	if (ctx.cr6.lt) goto loc_82355384;
loc_82355624:
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235562C"))) PPC_WEAK_FUNC(sub_8235562C);
PPC_FUNC_IMPL(__imp__sub_8235562C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82355630"))) PPC_WEAK_FUNC(sub_82355630);
PPC_FUNC_IMPL(__imp__sub_82355630) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f2,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82355328
	ctx.lr = 0x82355664;
	sub_82355328(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// blt cr6,0x823556b4
	if (ctx.cr6.lt) goto loc_823556B4;
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f2,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82355328
	ctx.lr = 0x82355688;
	sub_82355328(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// blt cr6,0x823556b4
	if (ctx.cr6.lt) goto loc_823556B4;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f2,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82355328
	ctx.lr = 0x823556AC;
	sub_82355328(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x823556b8
	if (!ctx.cr6.lt) goto loc_823556B8;
loc_823556B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823556B8:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
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

__attribute__((alias("__imp__sub_823556D0"))) PPC_WEAK_FUNC(sub_823556D0);
PPC_FUNC_IMPL(__imp__sub_823556D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x823556D8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfs f3,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lfs f11,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f5
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f13,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f13,f4,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f10.f64));
	// fmadds f2,f12,f3,f9
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bgt cr6,0x82355734
	if (ctx.cr6.gt) goto loc_82355734;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82355734:
	// addi r28,r4,-1
	ctx.r28.s64 = ctx.r4.s64 + -1;
	// fmr f10,f2
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f2.f64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x82355b40
	if (ctx.cr6.lt) goto loc_82355B40;
	// addi r7,r28,-4
	ctx.r7.s64 = ctx.r28.s64 + -4;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r9,r7,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// addi r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 1;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82355768:
	// addi r8,r30,-32
	ctx.r8.s64 = ctx.r30.s64 + -32;
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// lfs f7,-124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f7.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmuls f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// lfs f6,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f6,f4,f1
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fmadds f9,f8,f5,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f9.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x823557a8
	if (ctx.cr6.gt) goto loc_823557A8;
	// li r4,1
	ctx.r4.s64 = 1;
loc_823557A8:
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8235580c
	if (ctx.cr6.eq) goto loc_8235580C;
	// fsubs f1,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fsubs f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fsubs f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fdivs f10,f1,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 / ctx.f10.f64));
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fadds f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f8,-96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fadds f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f7,-92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fadds f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f6,-88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
loc_8235580C:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82355834
	if (!ctx.cr6.eq) goto loc_82355834;
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
loc_82355834:
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// fmr f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f9.f64;
	// addi r7,r30,-16
	ctx.r7.s64 = ctx.r30.s64 + -16;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// ld r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r25,0(r7)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// std r25,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r25.u64);
	// std r7,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r7.u64);
	// lfs f8,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f8.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmuls f1,f8,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// lfs f6,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f6,f4,f1
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fmadds f12,f10,f5,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x82355890
	if (ctx.cr6.gt) goto loc_82355890;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82355890:
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82355900
	if (ctx.cr6.eq) goto loc_82355900;
	// fsubs f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// fsubs f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fdivs f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fadds f10,f8,f9
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f10,-92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fadds f9,f13,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f9,-88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
loc_82355900:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82355928
	if (!ctx.cr6.eq) goto loc_82355928;
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
loc_82355928:
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// ld r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// ld r25,8(r30)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// std r31,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r31.u64);
	// std r25,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r25.u64);
	// lfs f8,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f3
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// lfs f6,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f1,f6,f4,f7
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f7.f64));
	// fmadds f12,f10,f5,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x82355980
	if (ctx.cr6.gt) goto loc_82355980;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82355980:
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x823559f0
	if (ctx.cr6.eq) goto loc_823559F0;
	// fsubs f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// fsubs f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fdivs f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fadds f10,f8,f9
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f10,-92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fadds f9,f13,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f9,-88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
loc_823559F0:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82355a18
	if (!ctx.cr6.eq) goto loc_82355A18;
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
loc_82355A18:
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// addi r7,r30,16
	ctx.r7.s64 = ctx.r30.s64 + 16;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// addi r5,r1,-128
	ctx.r5.s64 = ctx.r1.s64 + -128;
	// ld r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r25,0(r7)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// std r9,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// std r25,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r25.u64);
	// std r7,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r7.u64);
	// lfs f8,-124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f8.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmuls f7,f8,f3
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// lfs f13,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f6,f13,f4,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f7.f64));
	// fmadds f10,f11,f5,f6
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x82355a70
	if (ctx.cr6.gt) goto loc_82355A70;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82355A70:
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82355ae0
	if (ctx.cr6.eq) goto loc_82355AE0;
	// fsubs f1,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f7,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f31,f10,f12
	ctx.f31.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f12,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// fsubs f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fdivs f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f31.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,-96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fadds f11,f8,f9
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f11,-92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fadds f9,f13,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f9,-88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
loc_82355AE0:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82355b08
	if (!ctx.cr6.eq) goto loc_82355B08;
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
loc_82355B08:
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// lfs f13,-104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f11.f64 = double(temp.f32);
	// bne cr6,0x82355768
	if (!ctx.cr6.eq) goto loc_82355768;
loc_82355B40:
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82355c64
	if (!ctx.cr6.lt) goto loc_82355C64;
	// rlwinm r9,r27,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r27,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r27.s64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r27,r7,r27
	ctx.r27.u64 = ctx.r7.u64 + ctx.r27.u64;
loc_82355B60:
	// ld r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// ld r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// std r4,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r4.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lfs f7,-124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// lfs f6,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f6,f4,f1
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fmadds f9,f8,f5,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f9.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x82355b9c
	if (ctx.cr6.gt) goto loc_82355B9C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82355B9C:
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82355c00
	if (ctx.cr6.eq) goto loc_82355C00;
	// fsubs f1,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fsubs f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// fsubs f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fdivs f10,f1,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 / ctx.f10.f64));
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fadds f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f8,-96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fadds f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f7,-92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fadds f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f6,-88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r31,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r31.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
loc_82355C00:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82355c28
	if (!ctx.cr6.eq) goto loc_82355C28;
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// ld r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r31,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r31.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
loc_82355C28:
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// fmr f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f9.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lfs f13,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f11.f64 = double(temp.f32);
	// bne cr6,0x82355b60
	if (!ctx.cr6.eq) goto loc_82355B60;
loc_82355C64:
	// rlwinm r9,r27,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// beq cr6,0x82355cf0
	if (ctx.cr6.eq) goto loc_82355CF0;
	// fsubs f5,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f3,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f2,f10
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// lfs f2,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f10,f3,f11
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// fsubs f9,f2,f12
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// fsubs f8,f1,f13
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// fdivs f0,f5,f4
	ctx.f0.f64 = double(float(ctx.f5.f64 / ctx.f4.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// fadds f10,f9,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f10,-92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// fadds f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,-88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
loc_82355CF0:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x82355d24
	if (!ctx.cr6.eq) goto loc_82355D24;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82355D24:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82355D30"))) PPC_WEAK_FUNC(sub_82355D30);
PPC_FUNC_IMPL(__imp__sub_82355D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad4
	ctx.lr = 0x82355D38;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,25312
	ctx.r30.s64 = ctx.r11.s64 + 25312;
	// addi r3,r30,-448
	ctx.r3.s64 = ctx.r30.s64 + -448;
	// bl 0x8237ac50
	ctx.lr = 0x82355D50;
	sub_8237AC50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r30,-1256
	ctx.r3.s64 = ctx.r30.s64 + -1256;
	// stw r11,16440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16440, ctx.r11.u32);
	// bl 0x8237ac50
	ctx.lr = 0x82355D60;
	sub_8237AC50(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r30,-824
	ctx.r3.s64 = ctx.r30.s64 + -824;
	// stw r10,16444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16444, ctx.r10.u32);
	// bl 0x8237ac50
	ctx.lr = 0x82355D70;
	sub_8237AC50(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r30,-1616
	ctx.r3.s64 = ctx.r30.s64 + -1616;
	// stw r9,16448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16448, ctx.r9.u32);
	// bl 0x8237ac50
	ctx.lr = 0x82355D80;
	sub_8237AC50(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// stw r8,16452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16452, ctx.r8.u32);
	// bl 0x8237ab60
	ctx.lr = 0x82355D90;
	sub_8237AB60(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,16456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16456, ctx.r7.u32);
	// bl 0x8237ab60
	ctx.lr = 0x82355DA0;
	sub_8237AB60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,24452
	ctx.r3.s64 = ctx.r11.s64 + 24452;
	// stw r6,16460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16460, ctx.r6.u32);
	// bl 0x8237a9b0
	ctx.lr = 0x82355DB4;
	sub_8237A9B0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,25760
	ctx.r3.s64 = ctx.r11.s64 + 25760;
	// stw r5,16424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16424, ctx.r5.u32);
	// bl 0x8237a9b0
	ctx.lr = 0x82355DC8;
	sub_8237A9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,25808
	ctx.r3.s64 = ctx.r11.s64 + 25808;
	// stw r4,16428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16428, ctx.r4.u32);
	// bl 0x8237a9b0
	ctx.lr = 0x82355DDC;
	sub_8237A9B0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,25276
	ctx.r3.s64 = ctx.r11.s64 + 25276;
	// stw r10,16432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16432, ctx.r10.u32);
	// bl 0x8237a9b0
	ctx.lr = 0x82355DF0;
	sub_8237A9B0(ctx, base);
	// stw r3,16436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16436, ctx.r3.u32);
	// li r27,6
	ctx.r27.s64 = 6;
	// lwz r7,16440(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16440);
	// li r28,16
	ctx.r28.s64 = 16;
	// li r29,-2
	ctx.r29.s64 = -2;
	// lwz r9,16456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16456);
	// li r30,8
	ctx.r30.s64 = 8;
	// lwz r6,16424(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16424);
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r8,16460(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16460);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,16448(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16448);
	// li r22,2
	ctx.r22.s64 = 2;
	// lwz r4,16432(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16432);
	// li r20,1
	ctx.r20.s64 = 1;
	// lwz r26,16444(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16444);
	// lwz r25,16428(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	// li r21,3
	ctx.r21.s64 = 3;
	// lwz r24,16452(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16452);
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r23,16436(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16436);
	// stw r11,16464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16464, ctx.r11.u32);
	// stw r27,16468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16468, ctx.r27.u32);
	// stw r28,16472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16472, ctx.r28.u32);
	// stw r28,16476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16476, ctx.r28.u32);
	// stw r29,16480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16480, ctx.r29.u32);
	// stw r7,16488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16488, ctx.r7.u32);
	// stw r22,16496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16496, ctx.r22.u32);
	// stw r27,16500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16500, ctx.r27.u32);
	// stw r30,16504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16504, ctx.r30.u32);
	// stw r30,16508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16508, ctx.r30.u32);
	// stw r29,16512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16512, ctx.r29.u32);
	// stw r20,16528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16528, ctx.r20.u32);
	// stw r27,16532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16532, ctx.r27.u32);
	// stw r10,16536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16536, ctx.r10.u32);
	// stw r10,16540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16540, ctx.r10.u32);
	// stw r29,16544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16544, ctx.r29.u32);
	// li r19,48
	ctx.r19.s64 = 48;
	// stw r29,16576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16576, ctx.r29.u32);
	// li r29,24
	ctx.r29.s64 = 24;
	// stw r11,16592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16592, ctx.r11.u32);
	// stw r3,16596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16596, ctx.r3.u32);
	// stw r11,16608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16608, ctx.r11.u32);
	// stw r9,16492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16492, ctx.r9.u32);
	// stw r29,16636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16636, ctx.r29.u32);
	// li r29,96
	ctx.r29.s64 = 96;
	// stw r9,16556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16556, ctx.r9.u32);
	// stw r9,16620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16620, ctx.r9.u32);
	// stw r3,16628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16628, ctx.r3.u32);
	// stw r11,16640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16640, ctx.r11.u32);
	// stw r3,16660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16660, ctx.r3.u32);
	// stw r29,16668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16668, ctx.r29.u32);
	// stw r11,16672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16672, ctx.r11.u32);
	// stw r9,16684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16684, ctx.r9.u32);
	// stw r3,16692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16692, ctx.r3.u32);
	// li r3,13
	ctx.r3.s64 = 13;
	// stw r29,16700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16700, ctx.r29.u32);
	// li r29,64
	ctx.r29.s64 = 64;
	// stw r11,16704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16704, ctx.r11.u32);
	// stw r11,16720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16720, ctx.r11.u32);
	// stw r11,16736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16736, ctx.r11.u32);
	// stw r9,16748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16748, ctx.r9.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,16768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16768, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r21,16560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16560, ctx.r21.u32);
	// stw r27,16564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16564, ctx.r27.u32);
	// stw r10,16568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16568, ctx.r10.u32);
	// stw r10,16572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16572, ctx.r10.u32);
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,16600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16600, ctx.r28.u32);
	// stw r19,16604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16604, ctx.r19.u32);
	// stw r7,16616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16616, ctx.r7.u32);
	// stw r22,16624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16624, ctx.r22.u32);
	// stw r6,16484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16484, ctx.r6.u32);
	// stw r8,16524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16524, ctx.r8.u32);
	// stw r5,16520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16520, ctx.r5.u32);
	// stw r4,16516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16516, ctx.r4.u32);
	// stw r26,16552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16552, ctx.r26.u32);
	// stw r25,16548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16548, ctx.r25.u32);
	// stw r24,16584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16584, ctx.r24.u32);
	// stw r23,16580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16580, ctx.r23.u32);
	// stw r8,16588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16588, ctx.r8.u32);
	// stw r6,16612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16612, ctx.r6.u32);
	// stw r30,16632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16632, ctx.r30.u32);
	// stw r5,16648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16648, ctx.r5.u32);
	// stw r4,16644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16644, ctx.r4.u32);
	// stw r8,16652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16652, ctx.r8.u32);
	// stw r20,16656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16656, ctx.r20.u32);
	// stw r10,16664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16664, ctx.r10.u32);
	// stw r26,16680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16680, ctx.r26.u32);
	// stw r25,16676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16676, ctx.r25.u32);
	// stw r21,16688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16688, ctx.r21.u32);
	// stw r10,16696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16696, ctx.r10.u32);
	// stw r24,16712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16712, ctx.r24.u32);
	// stw r23,16708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16708, ctx.r23.u32);
	// stw r8,16716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16716, ctx.r8.u32);
	// stw r3,16724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16724, ctx.r3.u32);
	// stw r28,16728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16728, ctx.r28.u32);
	// stw r29,16732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16732, ctx.r29.u32);
	// stw r7,16744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16744, ctx.r7.u32);
	// stw r6,16740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16740, ctx.r6.u32);
	// stw r22,16752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16752, ctx.r22.u32);
	// stw r3,16756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16756, ctx.r3.u32);
	// stw r30,16760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16760, ctx.r30.u32);
	// stw r10,16764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16764, ctx.r10.u32);
	// stw r5,16776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16776, ctx.r5.u32);
	// stw r4,16772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16772, ctx.r4.u32);
	// stw r8,16780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16780, ctx.r8.u32);
	// stw r31,16384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16384, ctx.r31.u32);
	// stw r9,16388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16388, ctx.r9.u32);
	// stfs f0,16400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16400, temp.u32);
	// stfs f0,16404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16404, temp.u32);
	// stfs f0,16408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16408, temp.u32);
	// stfs f0,16412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16412, temp.u32);
	// stfs f0,16416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16416, temp.u32);
	// stfs f0,16420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16420, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82355FCC"))) PPC_WEAK_FUNC(sub_82355FCC);
PPC_FUNC_IMPL(__imp__sub_82355FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82355FD0"))) PPC_WEAK_FUNC(sub_82355FD0);
PPC_FUNC_IMPL(__imp__sub_82355FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82355FD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,16384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16384);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82355ff4
	if (ctx.cr6.eq) goto loc_82355FF4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82355FF4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235614c
	if (!ctx.cr6.eq) goto loc_8235614C;
	// lwz r9,16388(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16388);
	// subf r8,r30,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r30.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r29,r11,28928
	ctx.r29.s64 = ctx.r11.s64 + 28928;
	// lwz r6,16476(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16476);
	// lwz r10,16480(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16480);
	// divw r11,r8,r6
	ctx.r11.s32 = ctx.r8.s32 / ctx.r6.s32;
	// lwz r4,16484(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16484);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// lwz r3,196(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// twllei r6,0
	if (ctx.r6.u32 <= 0) __builtin_debugtrap();
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twlgei r5,-1
	if (ctx.r5.u32 >= 4294967295) __builtin_debugtrap();
	// bl 0x8237ad28
	ctx.lr = 0x82356048;
	sub_8237AD28(ctx, base);
	// lwz r3,196(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// lwz r4,16488(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16488);
	// bl 0x8237a948
	ctx.lr = 0x82356054;
	sub_8237A948(ctx, base);
	// lwz r3,196(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// lwz r4,16492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16492);
	// bl 0x8237a5d8
	ctx.lr = 0x82356060;
	sub_8237A5D8(ctx, base);
	// lis r11,-32046
	ctx.r11.s64 = -2100166656;
	// li r4,1
	ctx.r4.s64 = 1;
	// rldicr r10,r4,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,-32440(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32440);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r11,r11,30992
	ctx.r11.s64 = ctx.r11.s64 + 30992;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1920(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1920, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1924(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1924, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1928(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1928, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1932(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1932, temp.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r11,r11,31008
	ctx.r11.s64 = ctx.r11.s64 + 31008;
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1936(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1936, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1940(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1940, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1944(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1944, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1948(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1948, temp.u32);
	// ld r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// std r7,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r7.u64);
	// lwz r11,16464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823560ec
	if (ctx.cr6.eq) goto loc_823560EC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82356118
	if (!ctx.cr6.eq) goto loc_82356118;
loc_823560EC:
	// lfs f0,16400(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1952(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1952, temp.u32);
	// lfs f13,16404(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16404);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1956(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1956, temp.u32);
	// lfs f12,16408(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16408);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1960(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1960, temp.u32);
	// lfs f11,16412(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16412);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,1964(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1964, temp.u32);
	// ld r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// std r5,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r5.u64);
loc_82356118:
	// lwz r4,16468(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16468);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r7,16472(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16472);
	// addi r11,r11,-16688
	ctx.r11.s64 = ctx.r11.s64 + -16688;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r11,r8,r28
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82380780
	ctx.lr = 0x82356148;
	sub_82380780(ctx, base);
	// stw r30,16384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16384, ctx.r30.u32);
loc_8235614C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82356154"))) PPC_WEAK_FUNC(sub_82356154);
PPC_FUNC_IMPL(__imp__sub_82356154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356158"))) PPC_WEAK_FUNC(sub_82356158);
PPC_FUNC_IMPL(__imp__sub_82356158) {
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
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// addi r31,r11,20479
	ctx.r31.s64 = ctx.r11.s64 + 20479;
	// addi r10,r31,10529
	ctx.r10.s64 = ctx.r31.s64 + 10529;
	// lbz r11,12617(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12617);
	// lhz r8,12618(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12618);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lbz r5,12620(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12620);
	// li r11,0
	ctx.r11.s64 = 0;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// srawi r4,r11,24
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 24;
	// rldicl r9,r11,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stb r4,10525(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10525, ctx.r4.u8);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// sth r9,10526(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10526, ctx.r9.u16);
	// stb r11,10528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10528, ctx.r11.u8);
	// bl 0x8237d4f8
	ctx.lr = 0x823561B4;
	sub_8237D4F8(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,28928
	ctx.r30.s64 = ctx.r11.s64 + 28928;
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// lwz r8,404(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823561D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r5,1798
	ctx.r5.s64 = 117833728;
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// srawi r7,r11,24
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 24;
	// srawi r10,r11,24
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 24;
	// rldicl r6,r11,56,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicl r9,r11,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// ori r5,r5,1798
	ctx.r5.u64 = ctx.r5.u64 | 1798;
	// stb r7,10521(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10521, ctx.r7.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,10513(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10513, ctx.r10.u8);
	// sth r6,10522(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10522, ctx.r6.u16);
	// sth r9,10514(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10514, ctx.r9.u16);
	// stb r11,10524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10524, ctx.r11.u8);
	// stb r11,10516(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10516, ctx.r11.u8);
	// bl 0x8237db88
	ctx.lr = 0x82356210;
	sub_8237DB88(ctx, base);
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,192(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82356224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,196(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82356238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r6,200(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8235624C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,152(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82356260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82356274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,504(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235628C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,500(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823562A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,296(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823562B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823562d8
	if (ctx.cr6.eq) goto loc_823562D8;
	// lwz r6,140(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r4,6
	ctx.r4.s64 = 6;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// b 0x823562e4
	goto loc_823562E4;
loc_823562D8:
	// lwz r5,140(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r4,7
	ctx.r4.s64 = 7;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823562E4:
	// bctrl 
	ctx.lr = 0x823562E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82356300"))) PPC_WEAK_FUNC(sub_82356300);
PPC_FUNC_IMPL(__imp__sub_82356300) {
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
	// lis r11,-32046
	ctx.r11.s64 = -2100166656;
	// lis r10,-32047
	ctx.r10.s64 = -2100232192;
	// addi r3,r11,-32368
	ctx.r3.s64 = ctx.r11.s64 + -32368;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r31,r10,31004
	ctx.r31.s64 = ctx.r10.s64 + 31004;
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// stw r11,2092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2092, ctx.r11.u32);
	// bl 0x82355d30
	ctx.lr = 0x82356334;
	sub_82355D30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82356350"))) PPC_WEAK_FUNC(sub_82356350);
PPC_FUNC_IMPL(__imp__sub_82356350) {
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
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,30996
	ctx.r11.s64 = ctx.r11.s64 + 30996;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-2040(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2040, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-10517(r11)
	PPC_STORE_U8(ctx.r11.u32 + -10517, ctx.r10.u8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82356158
	ctx.lr = 0x82356388;
	sub_82356158(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-27244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// addi r10,r10,31008
	ctx.r10.s64 = ctx.r10.s64 + 31008;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lfs f0,-716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -716);
	ctx.f0.f64 = double(temp.f32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82356404"))) PPC_WEAK_FUNC(sub_82356404);
PPC_FUNC_IMPL(__imp__sub_82356404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356408"))) PPC_WEAK_FUNC(sub_82356408);
PPC_FUNC_IMPL(__imp__sub_82356408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32046
	ctx.r11.s64 = -2100166656;
	// addi r3,r11,-32368
	ctx.r3.s64 = ctx.r11.s64 + -32368;
	// b 0x82355fd0
	sub_82355FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82356414"))) PPC_WEAK_FUNC(sub_82356414);
PPC_FUNC_IMPL(__imp__sub_82356414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356418"))) PPC_WEAK_FUNC(sub_82356418);
PPC_FUNC_IMPL(__imp__sub_82356418) {
	PPC_FUNC_PROLOGUE();
	// b 0x82356158
	sub_82356158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235641C"))) PPC_WEAK_FUNC(sub_8235641C);
PPC_FUNC_IMPL(__imp__sub_8235641C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356420"))) PPC_WEAK_FUNC(sub_82356420);
PPC_FUNC_IMPL(__imp__sub_82356420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82356428;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32047
	ctx.r28.s64 = -2100232192;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,30992(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 30992);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823564c0
	if (ctx.cr6.eq) goto loc_823564C0;
	// lis r11,-32046
	ctx.r11.s64 = -2100166656;
	// addi r3,r11,-32368
	ctx.r3.s64 = ctx.r11.s64 + -32368;
	// bl 0x82355fd0
	ctx.lr = 0x8235644C;
	sub_82355FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,25832
	ctx.r11.s64 = ctx.r11.s64 + 25832;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r30,r11,28928
	ctx.r30.s64 = ctx.r11.s64 + 28928;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r6,r7,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 | ctx.r9.u64;
	// rlwimi r11,r5,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// bl 0x8237db88
	ctx.lr = 0x823564A8;
	sub_8237DB88(ctx, base);
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,308(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823564BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,30992(r28)
	PPC_STORE_U32(ctx.r28.u32 + 30992, ctx.r29.u32);
loc_823564C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823564C8"))) PPC_WEAK_FUNC(sub_823564C8);
PPC_FUNC_IMPL(__imp__sub_823564C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x823564D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32047
	ctx.r28.s64 = -2100232192;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,31000(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31000);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82356538
	if (ctx.cr6.eq) goto loc_82356538;
	// lis r11,-32046
	ctx.r11.s64 = -2100166656;
	// addi r3,r11,-32368
	ctx.r3.s64 = ctx.r11.s64 + -32368;
	// bl 0x82355fd0
	ctx.lr = 0x823564F4;
	sub_82355FD0(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// cntlzw r10,r29
	ctx.r10.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// addi r31,r11,28928
	ctx.r31.s64 = ctx.r11.s64 + 28928;
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r9,504(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8235651C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,500(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82356534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,31000(r28)
	PPC_STORE_U32(ctx.r28.u32 + 31000, ctx.r29.u32);
loc_82356538:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82356540"))) PPC_WEAK_FUNC(sub_82356540);
PPC_FUNC_IMPL(__imp__sub_82356540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82356548;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32047
	ctx.r28.s64 = -2100232192;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,28956(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28956);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823565b8
	if (ctx.cr6.eq) goto loc_823565B8;
	// lis r11,-32046
	ctx.r11.s64 = -2100166656;
	// addi r3,r11,-32368
	ctx.r3.s64 = ctx.r11.s64 + -32368;
	// bl 0x82355fd0
	ctx.lr = 0x8235656C;
	sub_82355FD0(ctx, base);
	// lis r9,-32151
	ctx.r9.s64 = -2107047936;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r9,28928
	ctx.r31.s64 = ctx.r9.s64 + 28928;
	// addi r11,r11,25960
	ctx.r11.s64 = ctx.r11.s64 + 25960;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235659C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,488(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823565B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,28956(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28956, ctx.r29.u32);
loc_823565B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823565C0"))) PPC_WEAK_FUNC(sub_823565C0);
PPC_FUNC_IMPL(__imp__sub_823565C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x823565C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32047
	ctx.r11.s64 = -2100232192;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,30996
	ctx.r29.s64 = ctx.r11.s64 + 30996;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,2100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2100);
	// bl 0x8237d768
	ctx.lr = 0x823565E8;
	sub_8237D768(ctx, base);
	// lis r11,-32046
	ctx.r11.s64 = -2100166656;
	// addi r3,r11,-32368
	ctx.r3.s64 = ctx.r11.s64 + -32368;
	// bl 0x82355fd0
	ctx.lr = 0x823565F4;
	sub_82355FD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lfs f0,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// fsubs f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fctiwz f5,f11
	ctx.f5.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfiwx f5,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f5.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fctiwz f4,f9
	ctx.f4.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfiwx f4,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f4.u32);
	// fctiwz f3,f7
	ctx.f3.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfiwx f3,0,r5
	PPC_STORE_U32(ctx.r5.u32, ctx.f3.u32);
	// fctiwz f2,f6
	ctx.f2.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stfiwx f2,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f2.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8235675c
	if (!ctx.cr6.lt) goto loc_8235675C;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8235675c
	if (!ctx.cr6.gt) goto loc_8235675C;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8235675c
	if (!ctx.cr6.lt) goto loc_8235675C;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8235675c
	if (!ctx.cr6.gt) goto loc_8235675C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8235669c
	if (ctx.cr6.lt) goto loc_8235669C;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_8235669C:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x823566a8
	if (ctx.cr6.gt) goto loc_823566A8;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_823566A8:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x823566b4
	if (ctx.cr6.lt) goto loc_823566B4;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_823566B4:
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x823566c0
	if (ctx.cr6.gt) goto loc_823566C0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_823566C0:
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82356730
	if (ctx.cr6.eq) goto loc_82356730;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82356730
	if (ctx.cr6.eq) goto loc_82356730;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82356714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,2100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2100);
	// bl 0x8237d430
	ctx.lr = 0x82356720;
	sub_8237D430(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82356730:
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82356754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8235675C:
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// lwz r9,296(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82356778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82356788"))) PPC_WEAK_FUNC(sub_82356788);
PPC_FUNC_IMPL(__imp__sub_82356788) {
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
	// lis r31,-32047
	ctx.r31.s64 = -2100232192;
	// lwz r11,30996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30996);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823567d8
	if (ctx.cr6.eq) goto loc_823567D8;
	// lis r11,-32046
	ctx.r11.s64 = -2100166656;
	// addi r3,r11,-32368
	ctx.r3.s64 = ctx.r11.s64 + -32368;
	// bl 0x82355fd0
	ctx.lr = 0x823567B4;
	sub_82355FD0(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823567D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30996, ctx.r11.u32);
loc_823567D8:
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

__attribute__((alias("__imp__sub_823567EC"))) PPC_WEAK_FUNC(sub_823567EC);
PPC_FUNC_IMPL(__imp__sub_823567EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823567F0"))) PPC_WEAK_FUNC(sub_823567F0);
PPC_FUNC_IMPL(__imp__sub_823567F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f29.u64);
	// stfd f30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32046
	ctx.r11.s64 = -2100166656;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// addi r3,r11,-32368
	ctx.r3.s64 = ctx.r11.s64 + -32368;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// bl 0x82355fd0
	ctx.lr = 0x82356820;
	sub_82355FD0(ctx, base);
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bge cr6,0x82356834
	if (!ctx.cr6.lt) goto loc_82356834;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82356868
	goto loc_82356868;
loc_82356834:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fmuls f12,f31,f30
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// fadds f11,f31,f30
	ctx.f11.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,-716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -716);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f7,f9,f29,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f8.f64));
	// fdivs f0,f7,f29
	ctx.f0.f64 = double(float(ctx.f7.f64 / ctx.f29.f64));
loc_82356868:
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r11,r11,30992
	ctx.r11.s64 = ctx.r11.s64 + 30992;
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82356890"))) PPC_WEAK_FUNC(sub_82356890);
PPC_FUNC_IMPL(__imp__sub_82356890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82356898;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32047
	ctx.r29.s64 = -2100232192;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// lbz r11,20479(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20479);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82356904
	if (ctx.cr6.eq) goto loc_82356904;
	// lis r11,-32046
	ctx.r11.s64 = -2100166656;
	// addi r3,r11,-32368
	ctx.r3.s64 = ctx.r11.s64 + -32368;
	// bl 0x82355fd0
	ctx.lr = 0x823568C0;
	sub_82355FD0(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// beq cr6,0x823568f0
	if (ctx.cr6.eq) goto loc_823568F0;
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r4,6
	ctx.r4.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823568E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,20479(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20479, ctx.r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_823568F0:
	// lwz r9,140(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r4,7
	ctx.r4.s64 = 7;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82356900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,20479(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20479, ctx.r30.u8);
loc_82356904:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235690C"))) PPC_WEAK_FUNC(sub_8235690C);
PPC_FUNC_IMPL(__imp__sub_8235690C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356910"))) PPC_WEAK_FUNC(sub_82356910);
PPC_FUNC_IMPL(__imp__sub_82356910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82356918;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32047
	ctx.r29.s64 = -2100232192;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// lbz r11,20478(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20478);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82356984
	if (ctx.cr6.eq) goto loc_82356984;
	// lis r11,-32046
	ctx.r11.s64 = -2100166656;
	// addi r3,r11,-32368
	ctx.r3.s64 = ctx.r11.s64 + -32368;
	// bl 0x82355fd0
	ctx.lr = 0x82356940;
	sub_82355FD0(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// beq cr6,0x82356970
	if (ctx.cr6.eq) goto loc_82356970;
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82356964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,20478(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20478, ctx.r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82356970:
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82356980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,20478(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20478, ctx.r30.u8);
loc_82356984:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8235698C"))) PPC_WEAK_FUNC(sub_8235698C);
PPC_FUNC_IMPL(__imp__sub_8235698C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356990"))) PPC_WEAK_FUNC(sub_82356990);
PPC_FUNC_IMPL(__imp__sub_82356990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82356998;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32047
	ctx.r29.s64 = -2100232192;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// lbz r11,20482(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20482);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82356a04
	if (ctx.cr6.eq) goto loc_82356A04;
	// lis r11,-32046
	ctx.r11.s64 = -2100166656;
	// addi r3,r11,-32368
	ctx.r3.s64 = ctx.r11.s64 + -32368;
	// bl 0x82355fd0
	ctx.lr = 0x823569C0;
	sub_82355FD0(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// lwz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// beq cr6,0x823569f0
	if (ctx.cr6.eq) goto loc_823569F0;
	// lwz r10,308(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// li r4,7
	ctx.r4.s64 = 7;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823569E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,20482(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20482, ctx.r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_823569F0:
	// lwz r9,308(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82356A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,20482(r29)
	PPC_STORE_U8(ctx.r29.u32 + 20482, ctx.r30.u8);
loc_82356A04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82356A0C"))) PPC_WEAK_FUNC(sub_82356A0C);
PPC_FUNC_IMPL(__imp__sub_82356A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82356A10"))) PPC_WEAK_FUNC(sub_82356A10);
PPC_FUNC_IMPL(__imp__sub_82356A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,6690
	ctx.r11.s64 = 438435840;
	// ori r11,r11,43872
	ctx.r11.u64 = ctx.r11.u64 | 43872;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82357224
	if (ctx.cr6.gt) {
		sub_82357224(ctx, base);
		return;
	}
	// beq cr6,0x82357700
	if (ctx.cr6.eq) {
		// ERROR 82357700
		return;
	}
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r11,r10,134
	ctx.r11.u64 = ctx.r10.u64 | 134;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82356ec4
	if (ctx.cr6.gt) {
		// ERROR 82356EC4
		return;
	}
	// beq cr6,0x8235772c
	if (ctx.cr6.eq) {
		// ERROR 8235772C
		return;
	}
	// lis r9,6184
	ctx.r9.s64 = 405274624;
	// ori r11,r9,323
	ctx.r11.u64 = ctx.r9.u64 | 323;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82356c80
	if (ctx.cr6.gt) {
		// ERROR 82356C80
		return;
	}
	// beq cr6,0x82356aa0
	if (ctx.cr6.eq) goto loc_82356AA0;
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// ori r11,r8,67
	ctx.r11.u64 = ctx.r8.u64 | 67;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82356aa8
	if (ctx.cr6.gt) goto loc_82356AA8;
	// beq cr6,0x82356aa0
	if (ctx.cr6.eq) goto loc_82356AA0;
	// lis r7,2048
	ctx.r7.s64 = 134217728;
	// ori r11,r7,74
	ctx.r11.u64 = ctx.r7.u64 | 74;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82356a90
	if (ctx.cr6.gt) goto loc_82356A90;
	// beq cr6,0x82356aa0
	if (ctx.cr6.eq) goto loc_82356AA0;
	// addis r11,r3,-1168
	ctx.r11.s64 = ctx.r3.s64 + -76546048;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823572b8
	if (ctx.cr0.eq) {
		// ERROR 823572B8
		return;
	}
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x823572b8
	if (ctx.cr6.eq) {
		// ERROR 823572B8
		return;
	}
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82356A90:
	// lis r6,2048
	ctx.r6.s64 = 134217728;
	// ori r5,r6,330
	ctx.r5.u64 = ctx.r6.u64 | 330;
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82357724
	if (!ctx.cr6.eq) {
		// ERROR 82357724
		return;
	}
loc_82356AA0:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_82356AA8:
	// addis r11,r3,-6184
	ctx.r11.s64 = ctx.r3.s64 + -405274624;
	// addi r11,r11,-75
	ctx.r11.s64 = ctx.r11.s64 + -75;
	// cmplwi cr6,r11,107
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 107, ctx.xer);
	// bgt cr6,0x82357724
	if (ctx.cr6.gt) {
		// ERROR 82357724
		return;
	}
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// addi r12,r12,27344
	ctx.r12.s64 = ctx.r12.s64 + 27344;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82356AA0;
	case 1:
		goto loc_82356AA0;
	case 2:
		// ERROR: 0x82357724
		return;
	case 3:
		// ERROR: 0x82357724
		return;
	case 4:
		goto loc_82356AA0;
	case 5:
		// ERROR: 0x82357724
		return;
	case 6:
		// ERROR: 0x82357724
		return;
	case 7:
		// ERROR: 0x82357724
		return;
	case 8:
		// ERROR: 0x82357724
		return;
	case 9:
		// ERROR: 0x82357724
		return;
	case 10:
		// ERROR: 0x82357724
		return;
	case 11:
		// ERROR: 0x82357724
		return;
	case 12:
		// ERROR: 0x82357724
		return;
	case 13:
		// ERROR: 0x82357724
		return;
	case 14:
		// ERROR: 0x82357724
		return;
	case 15:
		// ERROR: 0x82357724
		return;
	case 16:
		// ERROR: 0x82357724
		return;
	case 17:
		// ERROR: 0x82357724
		return;
	case 18:
		// ERROR: 0x82357724
		return;
	case 19:
		// ERROR: 0x82357724
		return;
	case 20:
		// ERROR: 0x82357724
		return;
	case 21:
		// ERROR: 0x82357724
		return;
	case 22:
		// ERROR: 0x82357724
		return;
	case 23:
		// ERROR: 0x82357724
		return;
	case 24:
		// ERROR: 0x82357724
		return;
	case 25:
		// ERROR: 0x82357724
		return;
	case 26:
		// ERROR: 0x82357724
		return;
	case 27:
		// ERROR: 0x82357724
		return;
	case 28:
		// ERROR: 0x82357724
		return;
	case 29:
		// ERROR: 0x82357724
		return;
	case 30:
		// ERROR: 0x82357724
		return;
	case 31:
		// ERROR: 0x82357724
		return;
	case 32:
		// ERROR: 0x82357724
		return;
	case 33:
		// ERROR: 0x82357724
		return;
	case 34:
		// ERROR: 0x82357724
		return;
	case 35:
		// ERROR: 0x82357724
		return;
	case 36:
		// ERROR: 0x82357724
		return;
	case 37:
		// ERROR: 0x82357724
		return;
	case 38:
		// ERROR: 0x82357724
		return;
	case 39:
		// ERROR: 0x82357724
		return;
	case 40:
		// ERROR: 0x82357724
		return;
	case 41:
		// ERROR: 0x82357724
		return;
	case 42:
		// ERROR: 0x82357724
		return;
	case 43:
		// ERROR: 0x82357724
		return;
	case 44:
		// ERROR: 0x82357724
		return;
	case 45:
		// ERROR: 0x82357724
		return;
	case 46:
		// ERROR: 0x82357724
		return;
	case 47:
		// ERROR: 0x82357724
		return;
	case 48:
		// ERROR: 0x82357724
		return;
	case 49:
		// ERROR: 0x82357724
		return;
	case 50:
		// ERROR: 0x82357724
		return;
	case 51:
		// ERROR: 0x82357724
		return;
	case 52:
		// ERROR: 0x82357724
		return;
	case 53:
		// ERROR: 0x82357724
		return;
	case 54:
		// ERROR: 0x82357724
		return;
	case 55:
		// ERROR: 0x82357724
		return;
	case 56:
		// ERROR: 0x82357724
		return;
	case 57:
		// ERROR: 0x82357724
		return;
	case 58:
		// ERROR: 0x82357724
		return;
	case 59:
		// ERROR: 0x8235772C
		return;
	case 60:
		// ERROR: 0x82357724
		return;
	case 61:
		// ERROR: 0x82357724
		return;
	case 62:
		// ERROR: 0x82357724
		return;
	case 63:
		// ERROR: 0x82357724
		return;
	case 64:
		// ERROR: 0x82357724
		return;
	case 65:
		// ERROR: 0x82357724
		return;
	case 66:
		// ERROR: 0x82357724
		return;
	case 67:
		// ERROR: 0x82357724
		return;
	case 68:
		// ERROR: 0x82357724
		return;
	case 69:
		// ERROR: 0x82357724
		return;
	case 70:
		// ERROR: 0x82357724
		return;
	case 71:
		// ERROR: 0x82357724
		return;
	case 72:
		// ERROR: 0x82357724
		return;
	case 73:
		// ERROR: 0x82357724
		return;
	case 74:
		// ERROR: 0x82357724
		return;
	case 75:
		// ERROR: 0x82357724
		return;
	case 76:
		// ERROR: 0x82357724
		return;
	case 77:
		// ERROR: 0x82357724
		return;
	case 78:
		// ERROR: 0x82357724
		return;
	case 79:
		// ERROR: 0x82357724
		return;
	case 80:
		// ERROR: 0x82357724
		return;
	case 81:
		// ERROR: 0x82357724
		return;
	case 82:
		// ERROR: 0x82357724
		return;
	case 83:
		// ERROR: 0x82357724
		return;
	case 84:
		// ERROR: 0x82357724
		return;
	case 85:
		// ERROR: 0x82357724
		return;
	case 86:
		// ERROR: 0x82357724
		return;
	case 87:
		// ERROR: 0x82357724
		return;
	case 88:
		// ERROR: 0x82357724
		return;
	case 89:
		// ERROR: 0x82357724
		return;
	case 90:
		// ERROR: 0x82357724
		return;
	case 91:
		// ERROR: 0x82357724
		return;
	case 92:
		// ERROR: 0x82357724
		return;
	case 93:
		// ERROR: 0x82357724
		return;
	case 94:
		// ERROR: 0x82357724
		return;
	case 95:
		// ERROR: 0x82357724
		return;
	case 96:
		// ERROR: 0x82357724
		return;
	case 97:
		// ERROR: 0x82357724
		return;
	case 98:
		// ERROR: 0x82357724
		return;
	case 99:
		// ERROR: 0x82357724
		return;
	case 100:
		// ERROR: 0x82357724
		return;
	case 101:
		// ERROR: 0x82357724
		return;
	case 102:
		// ERROR: 0x82357724
		return;
	case 103:
		// ERROR: 0x82357724
		return;
	case 104:
		// ERROR: 0x82357724
		return;
	case 105:
		// ERROR: 0x82357724
		return;
	case 106:
		// ERROR: 0x82357724
		return;
	case 107:
		// ERROR: 0x8235772C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82356AD0"))) PPC_WEAK_FUNC(sub_82356AD0);
PPC_FUNC_IMPL(__imp__sub_82356AD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,27296(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27296);
	// lwz r17,27296(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27296);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,27296(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27296);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30508(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30508);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30508(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30508);
	// lis r4,6688
	ctx.r4.s64 = 438304768;
	// ori r11,r4,76
	ctx.r11.u64 = ctx.r4.u64 | 76;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82356e78
	if (ctx.cr6.gt) {
		// ERROR 82356E78
		return;
	}
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r9,r10,75
	ctx.r9.u64 = ctx.r10.u64 | 75;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82356aa0
	if (!ctx.cr6.lt) {
		// ERROR 82356AA0
		return;
	}
	// addis r11,r3,-6184
	ctx.r11.s64 = ctx.r3.s64 + -405274624;
	// addi r11,r11,-331
	ctx.r11.s64 = ctx.r11.s64 + -331;
	// cmplwi cr6,r11,107
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 107, ctx.xer);
	// bgt cr6,0x82357724
	if (ctx.cr6.gt) {
		// ERROR 82357724
		return;
	}
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// addi r12,r12,27848
	ctx.r12.s64 = ctx.r12.s64 + 27848;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82356AA0
		return;
	case 1:
		// ERROR: 0x82356AA0
		return;
	case 2:
		// ERROR: 0x82357724
		return;
	case 3:
		// ERROR: 0x82357724
		return;
	case 4:
		// ERROR: 0x82356AA0
		return;
	case 5:
		// ERROR: 0x82357724
		return;
	case 6:
		// ERROR: 0x82357724
		return;
	case 7:
		// ERROR: 0x82357724
		return;
	case 8:
		// ERROR: 0x82357724
		return;
	case 9:
		// ERROR: 0x82357724
		return;
	case 10:
		// ERROR: 0x82357724
		return;
	case 11:
		// ERROR: 0x82357724
		return;
	case 12:
		// ERROR: 0x82357724
		return;
	case 13:
		// ERROR: 0x82357724
		return;
	case 14:
		// ERROR: 0x82357724
		return;
	case 15:
		// ERROR: 0x82357724
		return;
	case 16:
		// ERROR: 0x82357724
		return;
	case 17:
		// ERROR: 0x82357724
		return;
	case 18:
		// ERROR: 0x82357724
		return;
	case 19:
		// ERROR: 0x82357724
		return;
	case 20:
		// ERROR: 0x82357724
		return;
	case 21:
		// ERROR: 0x82357724
		return;
	case 22:
		// ERROR: 0x82357724
		return;
	case 23:
		// ERROR: 0x82357724
		return;
	case 24:
		// ERROR: 0x82357724
		return;
	case 25:
		// ERROR: 0x82357724
		return;
	case 26:
		// ERROR: 0x82357724
		return;
	case 27:
		// ERROR: 0x82357724
		return;
	case 28:
		// ERROR: 0x82357724
		return;
	case 29:
		// ERROR: 0x82357724
		return;
	case 30:
		// ERROR: 0x82357724
		return;
	case 31:
		// ERROR: 0x82357724
		return;
	case 32:
		// ERROR: 0x82357724
		return;
	case 33:
		// ERROR: 0x82357724
		return;
	case 34:
		// ERROR: 0x82357724
		return;
	case 35:
		// ERROR: 0x82357724
		return;
	case 36:
		// ERROR: 0x82357724
		return;
	case 37:
		// ERROR: 0x82357724
		return;
	case 38:
		// ERROR: 0x82357724
		return;
	case 39:
		// ERROR: 0x82357724
		return;
	case 40:
		// ERROR: 0x82357724
		return;
	case 41:
		// ERROR: 0x82357724
		return;
	case 42:
		// ERROR: 0x82357724
		return;
	case 43:
		// ERROR: 0x82357724
		return;
	case 44:
		// ERROR: 0x82357724
		return;
	case 45:
		// ERROR: 0x82357724
		return;
	case 46:
		// ERROR: 0x82357724
		return;
	case 47:
		// ERROR: 0x82357724
		return;
	case 48:
		// ERROR: 0x82357724
		return;
	case 49:
		// ERROR: 0x82357724
		return;
	case 50:
		// ERROR: 0x82357724
		return;
	case 51:
		// ERROR: 0x82357724
		return;
	case 52:
		// ERROR: 0x82357724
		return;
	case 53:
		// ERROR: 0x82357724
		return;
	case 54:
		// ERROR: 0x82357724
		return;
	case 55:
		// ERROR: 0x82357724
		return;
	case 56:
		// ERROR: 0x82357724
		return;
	case 57:
		// ERROR: 0x82357724
		return;
	case 58:
		// ERROR: 0x82357724
		return;
	case 59:
		// ERROR: 0x8235772C
		return;
	case 60:
		// ERROR: 0x82357724
		return;
	case 61:
		// ERROR: 0x82357724
		return;
	case 62:
		// ERROR: 0x82357724
		return;
	case 63:
		// ERROR: 0x82357724
		return;
	case 64:
		// ERROR: 0x82357724
		return;
	case 65:
		// ERROR: 0x82357724
		return;
	case 66:
		// ERROR: 0x82357724
		return;
	case 67:
		// ERROR: 0x82357724
		return;
	case 68:
		// ERROR: 0x82357724
		return;
	case 69:
		// ERROR: 0x82357724
		return;
	case 70:
		// ERROR: 0x82357724
		return;
	case 71:
		// ERROR: 0x82357724
		return;
	case 72:
		// ERROR: 0x82357724
		return;
	case 73:
		// ERROR: 0x82357724
		return;
	case 74:
		// ERROR: 0x82357724
		return;
	case 75:
		// ERROR: 0x82357724
		return;
	case 76:
		// ERROR: 0x82357724
		return;
	case 77:
		// ERROR: 0x82357724
		return;
	case 78:
		// ERROR: 0x82357724
		return;
	case 79:
		// ERROR: 0x82357724
		return;
	case 80:
		// ERROR: 0x82357724
		return;
	case 81:
		// ERROR: 0x82357724
		return;
	case 82:
		// ERROR: 0x82357724
		return;
	case 83:
		// ERROR: 0x82357724
		return;
	case 84:
		// ERROR: 0x82357724
		return;
	case 85:
		// ERROR: 0x82357724
		return;
	case 86:
		// ERROR: 0x82357724
		return;
	case 87:
		// ERROR: 0x82357724
		return;
	case 88:
		// ERROR: 0x82357724
		return;
	case 89:
		// ERROR: 0x82357724
		return;
	case 90:
		// ERROR: 0x82357724
		return;
	case 91:
		// ERROR: 0x82357724
		return;
	case 92:
		// ERROR: 0x82357724
		return;
	case 93:
		// ERROR: 0x82357724
		return;
	case 94:
		// ERROR: 0x82357724
		return;
	case 95:
		// ERROR: 0x82357724
		return;
	case 96:
		// ERROR: 0x82357724
		return;
	case 97:
		// ERROR: 0x82357724
		return;
	case 98:
		// ERROR: 0x82357724
		return;
	case 99:
		// ERROR: 0x82357724
		return;
	case 100:
		// ERROR: 0x82357724
		return;
	case 101:
		// ERROR: 0x82357724
		return;
	case 102:
		// ERROR: 0x82357724
		return;
	case 103:
		// ERROR: 0x82357724
		return;
	case 104:
		// ERROR: 0x82357724
		return;
	case 105:
		// ERROR: 0x82357724
		return;
	case 106:
		// ERROR: 0x82357724
		return;
	case 107:
		// ERROR: 0x8235772C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82356CC8"))) PPC_WEAK_FUNC(sub_82356CC8);
PPC_FUNC_IMPL(__imp__sub_82356CC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,27296(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27296);
	// lwz r17,27296(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27296);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,27296(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27296);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30508(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30508);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30508(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30508);
	// addis r11,r3,-6688
	ctx.r11.s64 = ctx.r3.s64 + -438304768;
	// addi r11,r11,-82
	ctx.r11.s64 = ctx.r11.s64 + -82;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82357724
	if (ctx.cr6.gt) {
		// ERROR 82357724
		return;
	}
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// addi r12,r12,28320
	ctx.r12.s64 = ctx.r12.s64 + 28320;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82357190
		return;
	case 1:
		// ERROR: 0x823572B8
		return;
	case 2:
		// ERROR: 0x823572B8
		return;
	case 3:
		// ERROR: 0x82357724
		return;
	case 4:
		// ERROR: 0x82357724
		return;
	case 5:
		// ERROR: 0x82357724
		return;
	case 6:
		// ERROR: 0x82357724
		return;
	case 7:
		// ERROR: 0x82357724
		return;
	case 8:
		// ERROR: 0x82357700
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82356EA0"))) PPC_WEAK_FUNC(sub_82356EA0);
PPC_FUNC_IMPL(__imp__sub_82356EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,29072(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29072);
	// lwz r17,29368(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29368);
	// lwz r17,29368(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29368);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30464(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30464);
	// lis r8,6688
	ctx.r8.s64 = 438304768;
	// ori r11,r8,11190
	ctx.r11.u64 = ctx.r8.u64 | 11190;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x823571b4
	if (ctx.cr6.gt) {
		sub_823571B4(ctx, base);
		return;
	}
	// beq cr6,0x8235772c
	if (ctx.cr6.eq) {
		// ERROR 8235772C
		return;
	}
	// lis r7,6688
	ctx.r7.s64 = 438304768;
	// ori r11,r7,346
	ctx.r11.u64 = ctx.r7.u64 | 346;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82357198
	if (ctx.cr6.gt) {
		sub_82357198(ctx, base);
		return;
	}
	// beq cr6,0x82357700
	if (ctx.cr6.eq) {
		// ERROR 82357700
		return;
	}
	// addis r11,r3,-6688
	ctx.r11.s64 = ctx.r3.s64 + -438304768;
	// addi r11,r11,-182
	ctx.r11.s64 = ctx.r11.s64 + -182;
	// cmplwi cr6,r11,158
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 158, ctx.xer);
	// bgt cr6,0x82357724
	if (ctx.cr6.gt) {
		// ERROR 82357724
		return;
	}
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// addi r12,r12,28436
	ctx.r12.s64 = ctx.r12.s64 + 28436;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x8235772C
		return;
	case 1:
		// ERROR: 0x82357724
		return;
	case 2:
		// ERROR: 0x82357724
		return;
	case 3:
		// ERROR: 0x82357724
		return;
	case 4:
		// ERROR: 0x82357724
		return;
	case 5:
		// ERROR: 0x82357724
		return;
	case 6:
		// ERROR: 0x82357724
		return;
	case 7:
		// ERROR: 0x82357724
		return;
	case 8:
		// ERROR: 0x82357724
		return;
	case 9:
		// ERROR: 0x82357724
		return;
	case 10:
		// ERROR: 0x82357724
		return;
	case 11:
		// ERROR: 0x82357724
		return;
	case 12:
		// ERROR: 0x82357724
		return;
	case 13:
		// ERROR: 0x82357724
		return;
	case 14:
		// ERROR: 0x82357724
		return;
	case 15:
		// ERROR: 0x82357724
		return;
	case 16:
		// ERROR: 0x82357724
		return;
	case 17:
		// ERROR: 0x82357724
		return;
	case 18:
		// ERROR: 0x82357724
		return;
	case 19:
		// ERROR: 0x82357724
		return;
	case 20:
		// ERROR: 0x82357724
		return;
	case 21:
		// ERROR: 0x82357724
		return;
	case 22:
		// ERROR: 0x82357724
		return;
	case 23:
		// ERROR: 0x82357724
		return;
	case 24:
		// ERROR: 0x82357724
		return;
	case 25:
		// ERROR: 0x82357724
		return;
	case 26:
		// ERROR: 0x82357724
		return;
	case 27:
		// ERROR: 0x82357724
		return;
	case 28:
		// ERROR: 0x82357724
		return;
	case 29:
		// ERROR: 0x82357724
		return;
	case 30:
		// ERROR: 0x82357724
		return;
	case 31:
		// ERROR: 0x82357724
		return;
	case 32:
		// ERROR: 0x82357724
		return;
	case 33:
		// ERROR: 0x82357724
		return;
	case 34:
		// ERROR: 0x82357724
		return;
	case 35:
		// ERROR: 0x82357724
		return;
	case 36:
		// ERROR: 0x82357724
		return;
	case 37:
		// ERROR: 0x82357724
		return;
	case 38:
		// ERROR: 0x82357724
		return;
	case 39:
		// ERROR: 0x82357724
		return;
	case 40:
		// ERROR: 0x82357724
		return;
	case 41:
		// ERROR: 0x82357724
		return;
	case 42:
		// ERROR: 0x82357724
		return;
	case 43:
		// ERROR: 0x82357724
		return;
	case 44:
		// ERROR: 0x82357724
		return;
	case 45:
		// ERROR: 0x82357724
		return;
	case 46:
		// ERROR: 0x82357724
		return;
	case 47:
		// ERROR: 0x82357724
		return;
	case 48:
		// ERROR: 0x82357724
		return;
	case 49:
		// ERROR: 0x82357724
		return;
	case 50:
		// ERROR: 0x82357724
		return;
	case 51:
		// ERROR: 0x82357724
		return;
	case 52:
		// ERROR: 0x82357724
		return;
	case 53:
		// ERROR: 0x82357724
		return;
	case 54:
		// ERROR: 0x82357724
		return;
	case 55:
		// ERROR: 0x82357724
		return;
	case 56:
		// ERROR: 0x82357724
		return;
	case 57:
		// ERROR: 0x82357724
		return;
	case 58:
		// ERROR: 0x82357724
		return;
	case 59:
		// ERROR: 0x82357724
		return;
	case 60:
		// ERROR: 0x82357724
		return;
	case 61:
		// ERROR: 0x82357724
		return;
	case 62:
		// ERROR: 0x82357724
		return;
	case 63:
		// ERROR: 0x82357724
		return;
	case 64:
		// ERROR: 0x82357724
		return;
	case 65:
		// ERROR: 0x82357724
		return;
	case 66:
		// ERROR: 0x82357724
		return;
	case 67:
		// ERROR: 0x82357724
		return;
	case 68:
		// ERROR: 0x82357724
		return;
	case 69:
		// ERROR: 0x82357724
		return;
	case 70:
		// ERROR: 0x82357724
		return;
	case 71:
		// ERROR: 0x82357724
		return;
	case 72:
		// ERROR: 0x82357724
		return;
	case 73:
		// ERROR: 0x82357724
		return;
	case 74:
		// ERROR: 0x82357724
		return;
	case 75:
		// ERROR: 0x82357724
		return;
	case 76:
		// ERROR: 0x82357724
		return;
	case 77:
		// ERROR: 0x82357724
		return;
	case 78:
		// ERROR: 0x82357724
		return;
	case 79:
		// ERROR: 0x82357724
		return;
	case 80:
		// ERROR: 0x82357724
		return;
	case 81:
		// ERROR: 0x82357724
		return;
	case 82:
		// ERROR: 0x82357724
		return;
	case 83:
		// ERROR: 0x82357724
		return;
	case 84:
		// ERROR: 0x82357724
		return;
	case 85:
		// ERROR: 0x82357724
		return;
	case 86:
		// ERROR: 0x82357724
		return;
	case 87:
		// ERROR: 0x82357724
		return;
	case 88:
		// ERROR: 0x82357724
		return;
	case 89:
		// ERROR: 0x82357724
		return;
	case 90:
		// ERROR: 0x82357724
		return;
	case 91:
		// ERROR: 0x82357724
		return;
	case 92:
		// ERROR: 0x82357724
		return;
	case 93:
		// ERROR: 0x82357724
		return;
	case 94:
		// ERROR: 0x82357724
		return;
	case 95:
		// ERROR: 0x82357724
		return;
	case 96:
		// ERROR: 0x82357724
		return;
	case 97:
		// ERROR: 0x82357724
		return;
	case 98:
		// ERROR: 0x82357724
		return;
	case 99:
		// ERROR: 0x82357724
		return;
	case 100:
		// ERROR: 0x82357724
		return;
	case 101:
		// ERROR: 0x82357724
		return;
	case 102:
		// ERROR: 0x82357724
		return;
	case 103:
		// ERROR: 0x82357724
		return;
	case 104:
		// ERROR: 0x82357724
		return;
	case 105:
		// ERROR: 0x82357724
		return;
	case 106:
		// ERROR: 0x82357724
		return;
	case 107:
		// ERROR: 0x82357724
		return;
	case 108:
		// ERROR: 0x82357724
		return;
	case 109:
		// ERROR: 0x82357724
		return;
	case 110:
		// ERROR: 0x82357724
		return;
	case 111:
		// ERROR: 0x82357724
		return;
	case 112:
		// ERROR: 0x82357724
		return;
	case 113:
		// ERROR: 0x82357724
		return;
	case 114:
		// ERROR: 0x82357724
		return;
	case 115:
		// ERROR: 0x82357724
		return;
	case 116:
		// ERROR: 0x82357724
		return;
	case 117:
		// ERROR: 0x82357724
		return;
	case 118:
		// ERROR: 0x82357724
		return;
	case 119:
		// ERROR: 0x82357724
		return;
	case 120:
		// ERROR: 0x82357724
		return;
	case 121:
		// ERROR: 0x82357724
		return;
	case 122:
		// ERROR: 0x82357724
		return;
	case 123:
		// ERROR: 0x82357724
		return;
	case 124:
		// ERROR: 0x82357724
		return;
	case 125:
		// ERROR: 0x82357724
		return;
	case 126:
		// ERROR: 0x82357724
		return;
	case 127:
		// ERROR: 0x82357724
		return;
	case 128:
		// ERROR: 0x82357724
		return;
	case 129:
		// ERROR: 0x82357724
		return;
	case 130:
		// ERROR: 0x82357724
		return;
	case 131:
		// ERROR: 0x82357724
		return;
	case 132:
		// ERROR: 0x82357724
		return;
	case 133:
		// ERROR: 0x82357724
		return;
	case 134:
		// ERROR: 0x82357724
		return;
	case 135:
		// ERROR: 0x82357724
		return;
	case 136:
		// ERROR: 0x82357724
		return;
	case 137:
		// ERROR: 0x82357724
		return;
	case 138:
		// ERROR: 0x82357724
		return;
	case 139:
		// ERROR: 0x82357724
		return;
	case 140:
		// ERROR: 0x82357724
		return;
	case 141:
		// ERROR: 0x82357724
		return;
	case 142:
		// ERROR: 0x82357724
		return;
	case 143:
		// ERROR: 0x82357724
		return;
	case 144:
		// ERROR: 0x82357724
		return;
	case 145:
		// ERROR: 0x82357724
		return;
	case 146:
		// ERROR: 0x82357724
		return;
	case 147:
		// ERROR: 0x82357724
		return;
	case 148:
		// ERROR: 0x82357724
		return;
	case 149:
		// ERROR: 0x82356AA0
		return;
	case 150:
		// ERROR: 0x82356AA0
		return;
	case 151:
		// ERROR: 0x82357724
		return;
	case 152:
		// ERROR: 0x82357724
		return;
	case 153:
		// ERROR: 0x82357724
		return;
	case 154:
		// ERROR: 0x82357724
		return;
	case 155:
		// ERROR: 0x82357724
		return;
	case 156:
		// ERROR: 0x82357190
		return;
	case 157:
		// ERROR: 0x823572B8
		return;
	case 158:
		// ERROR: 0x823572B8
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82356F14"))) PPC_WEAK_FUNC(sub_82356F14);
PPC_FUNC_IMPL(__imp__sub_82356F14) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,30508(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30508);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,27296(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27296);
	// lwz r17,27296(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27296);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,29072(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29072);
	// lwz r17,29368(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29368);
	// lwz r17,29368(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 29368);
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82357198"))) PPC_WEAK_FUNC(sub_82357198);
PPC_FUNC_IMPL(__imp__sub_82357198) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,-6688
	ctx.r11.s64 = ctx.r3.s64 + -438304768;
	// addic. r11,r11,-390
	ctx.xer.ca = ctx.r11.u32 > 389;
	ctx.r11.s64 = ctx.r11.s64 + -390;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235772c
	if (ctx.cr0.eq) {
		// ERROR 8235772C
		return;
	}
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x8235772c
	if (ctx.cr6.eq) {
		// ERROR 8235772C
		return;
	}
	// cmplwi cr6,r11,10544
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10544, ctx.xer);
	// b 0x82357720
	// ERROR 82357720
	return;
}

__attribute__((alias("__imp__sub_823571B4"))) PPC_WEAK_FUNC(sub_823571B4);
PPC_FUNC_IMPL(__imp__sub_823571B4) {
	PPC_FUNC_PROLOGUE();
	// lis r6,6690
	ctx.r6.s64 = 438435840;
	// ori r11,r6,88
	ctx.r11.u64 = ctx.r6.u64 | 88;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82357200
	if (ctx.cr6.gt) goto loc_82357200;
	// beq cr6,0x82356aa0
	if (ctx.cr6.eq) {
		// ERROR 82356AA0
		return;
	}
	// lis r5,6688
	ctx.r5.s64 = 438304768;
	// ori r11,r5,43866
	ctx.r11.u64 = ctx.r5.u64 | 43866;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x823571f0
	if (ctx.cr6.gt) goto loc_823571F0;
	// beq cr6,0x82357700
	if (ctx.cr6.eq) {
		// ERROR 82357700
		return;
	}
	// addis r11,r3,-6689
	ctx.r11.s64 = ctx.r3.s64 + -438370304;
	// addic. r11,r11,21926
	ctx.xer.ca = ctx.r11.u32 > 4294945369;
	ctx.r11.s64 = ctx.r11.s64 + 21926;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82357700
	if (ctx.cr0.eq) {
		// ERROR 82357700
		return;
	}
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// b 0x82357720
	// ERROR 82357720
	return;
loc_823571F0:
	// lis r4,6688
	ctx.r4.s64 = 438304768;
	// ori r11,r4,43910
	ctx.r11.u64 = ctx.r4.u64 | 43910;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// b 0x82357720
	// ERROR 82357720
	return;
loc_82357200:
	// addis r11,r3,-6690
	ctx.r11.s64 = ctx.r3.s64 + -438435840;
	// addic. r11,r11,-344
	ctx.xer.ca = ctx.r11.u32 > 343;
	ctx.r11.s64 = ctx.r11.s64 + -344;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82356aa0
	if (ctx.cr0.eq) {
		// ERROR 82356AA0
		return;
	}
	// cmplwi cr6,r11,43272
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43272, ctx.xer);
	// beq cr6,0x82357700
	if (ctx.cr6.eq) {
		// ERROR 82357700
		return;
	}
	// cmplwi cr6,r11,43342
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43342, ctx.xer);
	// bne cr6,0x82357724
	if (!ctx.cr6.eq) {
		// ERROR 82357724
		return;
	}
	// li r3,128
	ctx.r3.s64 = 128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82357224"))) PPC_WEAK_FUNC(sub_82357224);
PPC_FUNC_IMPL(__imp__sub_82357224) {
	PPC_FUNC_PROLOGUE();
	// lis r10,10784
	ctx.r10.s64 = 706740224;
	// ori r11,r10,2885
	ctx.r11.u64 = ctx.r10.u64 | 2885;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82357628
	if (ctx.cr6.gt) {
		sub_82357628(ctx, base);
		return;
	}
	// beq cr6,0x82356aa0
	if (ctx.cr6.eq) {
		// ERROR 82356AA0
		return;
	}
	// lis r9,10280
	ctx.r9.s64 = 673710080;
	// ori r8,r9,184
	ctx.r8.u64 = ctx.r9.u64 | 184;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x823573f8
	if (ctx.cr6.gt) {
		// ERROR 823573F8
		return;
	}
	// lis r7,10280
	ctx.r7.s64 = 673710080;
	// ori r6,r7,182
	ctx.r6.u64 = ctx.r7.u64 | 182;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8235772c
	if (!ctx.cr6.lt) {
		// ERROR 8235772C
		return;
	}
	// lis r5,10240
	ctx.r5.s64 = 671088640;
	// ori r11,r5,344
	ctx.r11.u64 = ctx.r5.u64 | 344;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x823572c0
	if (ctx.cr6.gt) goto loc_823572C0;
	// beq cr6,0x82356aa0
	if (ctx.cr6.eq) {
		// ERROR 82356AA0
		return;
	}
	// lis r4,10240
	ctx.r4.s64 = 671088640;
	// ori r11,r4,88
	ctx.r11.u64 = ctx.r4.u64 | 88;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x823572a8
	if (ctx.cr6.gt) goto loc_823572A8;
	// beq cr6,0x82356aa0
	if (ctx.cr6.eq) {
		// ERROR 82356AA0
		return;
	}
	// lis r11,6690
	ctx.r11.s64 = 438435840;
	// ori r10,r11,43942
	ctx.r10.u64 = ctx.r11.u64 | 43942;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8235721c
	if (ctx.cr6.eq) {
		// ERROR 8235721C
		return;
	}
	// lis r9,10240
	ctx.r9.s64 = 671088640;
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x823572b8
	if (ctx.cr6.eq) goto loc_823572B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823572A8:
	// lis r7,10240
	ctx.r7.s64 = 671088640;
	// ori r6,r7,258
	ctx.r6.u64 = ctx.r7.u64 | 258;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82357724
	if (!ctx.cr6.eq) {
		// ERROR 82357724
		return;
	}
loc_823572B8:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_823572C0:
	// addis r11,r3,-10280
	ctx.r11.s64 = ctx.r3.s64 + -673710080;
	// addi r11,r11,-67
	ctx.r11.s64 = ctx.r11.s64 + -67;
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bgt cr6,0x82357724
	if (ctx.cr6.gt) {
		// ERROR 82357724
		return;
	}
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// addi r12,r12,29416
	ctx.r12.s64 = ctx.r12.s64 + 29416;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82356AA0
		return;
	case 1:
		// ERROR: 0x82356AA0
		return;
	case 2:
		// ERROR: 0x82356AA0
		return;
	case 3:
		// ERROR: 0x82357724
		return;
	case 4:
		// ERROR: 0x82357724
		return;
	case 5:
		// ERROR: 0x82357724
		return;
	case 6:
		// ERROR: 0x82357724
		return;
	case 7:
		// ERROR: 0x82357724
		return;
	case 8:
		// ERROR: 0x82357724
		return;
	case 9:
		// ERROR: 0x82357724
		return;
	case 10:
		// ERROR: 0x82357724
		return;
	case 11:
		// ERROR: 0x82357724
		return;
	case 12:
		// ERROR: 0x82356AA0
		return;
	case 13:
		// ERROR: 0x82357724
		return;
	case 14:
		// ERROR: 0x82357724
		return;
	case 15:
		// ERROR: 0x82357724
		return;
	case 16:
		// ERROR: 0x82357724
		return;
	case 17:
		// ERROR: 0x82357724
		return;
	case 18:
		// ERROR: 0x82357724
		return;
	case 19:
		// ERROR: 0x82357724
		return;
	case 20:
		// ERROR: 0x82357724
		return;
	case 21:
		// ERROR: 0x82357724
		return;
	case 22:
		// ERROR: 0x82357724
		return;
	case 23:
		// ERROR: 0x82357724
		return;
	case 24:
		// ERROR: 0x82357724
		return;
	case 25:
		// ERROR: 0x82357724
		return;
	case 26:
		// ERROR: 0x82357724
		return;
	case 27:
		// ERROR: 0x82357724
		return;
	case 28:
		// ERROR: 0x82357724
		return;
	case 29:
		// ERROR: 0x82357724
		return;
	case 30:
		// ERROR: 0x82357724
		return;
	case 31:
		// ERROR: 0x82357724
		return;
	case 32:
		// ERROR: 0x82357724
		return;
	case 33:
		// ERROR: 0x82357724
		return;
	case 34:
		// ERROR: 0x82357724
		return;
	case 35:
		// ERROR: 0x82357724
		return;
	case 36:
		// ERROR: 0x82357724
		return;
	case 37:
		// ERROR: 0x82357724
		return;
	case 38:
		// ERROR: 0x82357724
		return;
	case 39:
		// ERROR: 0x82357724
		return;
	case 40:
		// ERROR: 0x82357724
		return;
	case 41:
		// ERROR: 0x82357724
		return;
	case 42:
		// ERROR: 0x82357724
		return;
	case 43:
		// ERROR: 0x82357724
		return;
	case 44:
		// ERROR: 0x82357724
		return;
	case 45:
		// ERROR: 0x82357724
		return;
	case 46:
		// ERROR: 0x82357724
		return;
	case 47:
		// ERROR: 0x82357724
		return;
	case 48:
		// ERROR: 0x82357724
		return;
	case 49:
		// ERROR: 0x82357724
		return;
	case 50:
		// ERROR: 0x82357724
		return;
	case 51:
		// ERROR: 0x82357724
		return;
	case 52:
		// ERROR: 0x82357724
		return;
	case 53:
		// ERROR: 0x82357724
		return;
	case 54:
		// ERROR: 0x82357724
		return;
	case 55:
		// ERROR: 0x82357724
		return;
	case 56:
		// ERROR: 0x82357724
		return;
	case 57:
		// ERROR: 0x82357724
		return;
	case 58:
		// ERROR: 0x82357724
		return;
	case 59:
		// ERROR: 0x82357724
		return;
	case 60:
		// ERROR: 0x82357724
		return;
	case 61:
		// ERROR: 0x82357724
		return;
	case 62:
		// ERROR: 0x82357724
		return;
	case 63:
		// ERROR: 0x82357724
		return;
	case 64:
		// ERROR: 0x82357724
		return;
	case 65:
		// ERROR: 0x82357724
		return;
	case 66:
		// ERROR: 0x82357724
		return;
	case 67:
		// ERROR: 0x8235772C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_823572E8"))) PPC_WEAK_FUNC(sub_823572E8);
PPC_FUNC_IMPL(__imp__sub_823572E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,27296(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27296);
	// lwz r17,27296(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27296);
	// lwz r17,27296(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27296);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,27296(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27296);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30508(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30508);
	// lis r5,10784
	ctx.r5.s64 = 706740224;
	// ori r11,r5,134
	ctx.r11.u64 = ctx.r5.u64 | 134;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8235760c
	if (ctx.cr6.gt) {
		// ERROR 8235760C
		return;
	}
	// beq cr6,0x8235772c
	if (ctx.cr6.eq) {
		// ERROR 8235772C
		return;
	}
	// addis r11,r3,-10280
	ctx.r11.s64 = ctx.r3.s64 + -673710080;
	// addi r11,r11,-323
	ctx.r11.s64 = ctx.r11.s64 + -323;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// bgt cr6,0x82357724
	if (ctx.cr6.gt) {
		// ERROR 82357724
		return;
	}
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// addi r12,r12,29748
	ctx.r12.s64 = ctx.r12.s64 + 29748;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82356AA0
		return;
	case 1:
		// ERROR: 0x82356AA0
		return;
	case 2:
		// ERROR: 0x82356AA0
		return;
	case 3:
		// ERROR: 0x82357724
		return;
	case 4:
		// ERROR: 0x82357724
		return;
	case 5:
		// ERROR: 0x82357724
		return;
	case 6:
		// ERROR: 0x82357724
		return;
	case 7:
		// ERROR: 0x82357724
		return;
	case 8:
		// ERROR: 0x82357724
		return;
	case 9:
		// ERROR: 0x82357724
		return;
	case 10:
		// ERROR: 0x82357724
		return;
	case 11:
		// ERROR: 0x82357724
		return;
	case 12:
		// ERROR: 0x82356AA0
		return;
	case 13:
		// ERROR: 0x82357724
		return;
	case 14:
		// ERROR: 0x82357724
		return;
	case 15:
		// ERROR: 0x82357724
		return;
	case 16:
		// ERROR: 0x82357724
		return;
	case 17:
		// ERROR: 0x82357724
		return;
	case 18:
		// ERROR: 0x82357724
		return;
	case 19:
		// ERROR: 0x82357724
		return;
	case 20:
		// ERROR: 0x82357724
		return;
	case 21:
		// ERROR: 0x82357724
		return;
	case 22:
		// ERROR: 0x82357724
		return;
	case 23:
		// ERROR: 0x82357724
		return;
	case 24:
		// ERROR: 0x82357724
		return;
	case 25:
		// ERROR: 0x82357724
		return;
	case 26:
		// ERROR: 0x82357724
		return;
	case 27:
		// ERROR: 0x82357724
		return;
	case 28:
		// ERROR: 0x82357724
		return;
	case 29:
		// ERROR: 0x82357724
		return;
	case 30:
		// ERROR: 0x82357724
		return;
	case 31:
		// ERROR: 0x82357724
		return;
	case 32:
		// ERROR: 0x82357724
		return;
	case 33:
		// ERROR: 0x82357724
		return;
	case 34:
		// ERROR: 0x82357724
		return;
	case 35:
		// ERROR: 0x82357724
		return;
	case 36:
		// ERROR: 0x82357724
		return;
	case 37:
		// ERROR: 0x82357724
		return;
	case 38:
		// ERROR: 0x82357724
		return;
	case 39:
		// ERROR: 0x82357724
		return;
	case 40:
		// ERROR: 0x82357724
		return;
	case 41:
		// ERROR: 0x82357724
		return;
	case 42:
		// ERROR: 0x82357724
		return;
	case 43:
		// ERROR: 0x82357724
		return;
	case 44:
		// ERROR: 0x82357724
		return;
	case 45:
		// ERROR: 0x82357724
		return;
	case 46:
		// ERROR: 0x82357724
		return;
	case 47:
		// ERROR: 0x82357724
		return;
	case 48:
		// ERROR: 0x82357724
		return;
	case 49:
		// ERROR: 0x82357724
		return;
	case 50:
		// ERROR: 0x82357724
		return;
	case 51:
		// ERROR: 0x82357724
		return;
	case 52:
		// ERROR: 0x82357724
		return;
	case 53:
		// ERROR: 0x82357724
		return;
	case 54:
		// ERROR: 0x82357724
		return;
	case 55:
		// ERROR: 0x82357724
		return;
	case 56:
		// ERROR: 0x82357724
		return;
	case 57:
		// ERROR: 0x82357724
		return;
	case 58:
		// ERROR: 0x82357724
		return;
	case 59:
		// ERROR: 0x82357724
		return;
	case 60:
		// ERROR: 0x82357724
		return;
	case 61:
		// ERROR: 0x82357724
		return;
	case 62:
		// ERROR: 0x82357724
		return;
	case 63:
		// ERROR: 0x82357724
		return;
	case 64:
		// ERROR: 0x82357724
		return;
	case 65:
		// ERROR: 0x82357724
		return;
	case 66:
		// ERROR: 0x82357724
		return;
	case 67:
		// ERROR: 0x8235772C
		return;
	case 68:
		// ERROR: 0x82357724
		return;
	case 69:
		// ERROR: 0x82357724
		return;
	case 70:
		// ERROR: 0x82357724
		return;
	case 71:
		// ERROR: 0x82357724
		return;
	case 72:
		// ERROR: 0x82357724
		return;
	case 73:
		// ERROR: 0x82357724
		return;
	case 74:
		// ERROR: 0x82357724
		return;
	case 75:
		// ERROR: 0x82357724
		return;
	case 76:
		// ERROR: 0x82357724
		return;
	case 77:
		// ERROR: 0x82357724
		return;
	case 78:
		// ERROR: 0x82357724
		return;
	case 79:
		// ERROR: 0x82357724
		return;
	case 80:
		// ERROR: 0x82357724
		return;
	case 81:
		// ERROR: 0x82357724
		return;
	case 82:
		// ERROR: 0x82357724
		return;
	case 83:
		// ERROR: 0x82357724
		return;
	case 84:
		// ERROR: 0x82357724
		return;
	case 85:
		// ERROR: 0x82357724
		return;
	case 86:
		// ERROR: 0x82357724
		return;
	case 87:
		// ERROR: 0x82357724
		return;
	case 88:
		// ERROR: 0x82357724
		return;
	case 89:
		// ERROR: 0x82357724
		return;
	case 90:
		// ERROR: 0x82357724
		return;
	case 91:
		// ERROR: 0x82357724
		return;
	case 92:
		// ERROR: 0x82357724
		return;
	case 93:
		// ERROR: 0x82357724
		return;
	case 94:
		// ERROR: 0x82357724
		return;
	case 95:
		// ERROR: 0x82357724
		return;
	case 96:
		// ERROR: 0x82357724
		return;
	case 97:
		// ERROR: 0x82357724
		return;
	case 98:
		// ERROR: 0x82357724
		return;
	case 99:
		// ERROR: 0x82357724
		return;
	case 100:
		// ERROR: 0x82357724
		return;
	case 101:
		// ERROR: 0x82357724
		return;
	case 102:
		// ERROR: 0x82357724
		return;
	case 103:
		// ERROR: 0x82357724
		return;
	case 104:
		// ERROR: 0x82357724
		return;
	case 105:
		// ERROR: 0x82357724
		return;
	case 106:
		// ERROR: 0x82357724
		return;
	case 107:
		// ERROR: 0x82357724
		return;
	case 108:
		// ERROR: 0x82357724
		return;
	case 109:
		// ERROR: 0x82357724
		return;
	case 110:
		// ERROR: 0x82357724
		return;
	case 111:
		// ERROR: 0x82357724
		return;
	case 112:
		// ERROR: 0x82357724
		return;
	case 113:
		// ERROR: 0x82357724
		return;
	case 114:
		// ERROR: 0x82357724
		return;
	case 115:
		// ERROR: 0x8235772C
		return;
	case 116:
		// ERROR: 0x8235772C
		return;
	case 117:
		// ERROR: 0x8235772C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82357434"))) PPC_WEAK_FUNC(sub_82357434);
PPC_FUNC_IMPL(__imp__sub_82357434) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,27296(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27296);
	// lwz r17,27296(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27296);
	// lwz r17,27296(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27296);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,27296(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27296);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30508(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30508);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30500(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30500);
	// lwz r17,30508(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30508);
	// lwz r17,30508(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30508);
	// lwz r17,30508(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 30508);
	// addis r11,r3,-10784
	ctx.r11.s64 = ctx.r3.s64 + -706740224;
	// addic. r11,r11,-390
	ctx.xer.ca = ctx.r11.u32 > 389;
	ctx.r11.s64 = ctx.r11.s64 + -390;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235772c
	if (ctx.cr0.eq) {
		// ERROR 8235772C
		return;
	}
	// cmplwi cr6,r11,2239
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2239, ctx.xer);
	// beq cr6,0x82356aa0
	if (ctx.cr6.eq) {
		// ERROR 82356AA0
		return;
	}
	// cmplwi cr6,r11,2304
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2304, ctx.xer);
	// b 0x82357720
	// ERROR 82357720
	return;
}

__attribute__((alias("__imp__sub_82357628"))) PPC_WEAK_FUNC(sub_82357628);
PPC_FUNC_IMPL(__imp__sub_82357628) {
	PPC_FUNC_PROLOGUE();
	// lis r4,11552
	ctx.r4.s64 = 757071872;
	// ori r11,r4,43929
	ctx.r11.u64 = ctx.r4.u64 | 43929;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x823576ac
	if (ctx.cr6.gt) goto loc_823576AC;
	// beq cr6,0x8235772c
	if (ctx.cr6.eq) goto loc_8235772C;
	// lis r11,11552
	ctx.r11.s64 = 757071872;
	// ori r11,r11,409
	ctx.r11.u64 = ctx.r11.u64 | 409;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82357688
	if (ctx.cr6.gt) goto loc_82357688;
	// beq cr6,0x8235772c
	if (ctx.cr6.eq) goto loc_8235772C;
	// lis r10,10784
	ctx.r10.s64 = 706740224;
	// ori r11,r10,43960
	ctx.r11.u64 = ctx.r10.u64 | 43960;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82357678
	if (ctx.cr6.gt) goto loc_82357678;
	// beq cr6,0x8235772c
	if (ctx.cr6.eq) goto loc_8235772C;
	// addis r11,r3,-10784
	ctx.r11.s64 = ctx.r3.s64 + -706740224;
	// addic. r11,r11,-2950
	ctx.xer.ca = ctx.r11.u32 > 2949;
	ctx.r11.s64 = ctx.r11.s64 + -2950;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235772c
	if (ctx.cr0.eq) goto loc_8235772C;
	// cmplwi cr6,r11,40754
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40754, ctx.xer);
	// b 0x82357720
	goto loc_82357720;
loc_82357678:
	// lis r9,11552
	ctx.r9.s64 = 757071872;
	// ori r8,r9,153
	ctx.r8.u64 = ctx.r9.u64 | 153;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// b 0x82357720
	goto loc_82357720;
loc_82357688:
	// addis r11,r3,-11553
	ctx.r11.s64 = ctx.r3.s64 + -757137408;
	// addic. r11,r11,21942
	ctx.xer.ca = ctx.r11.u32 > 4294945353;
	ctx.r11.s64 = ctx.r11.s64 + 21942;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82356aa0
	if (ctx.cr0.eq) {
		// ERROR 82356AA0
		return;
	}
	// cmplwi cr6,r11,79
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 79, ctx.xer);
	// beq cr6,0x8235772c
	if (ctx.cr6.eq) goto loc_8235772C;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x82356aa0
	if (ctx.cr6.eq) {
		// ERROR 82356AA0
		return;
	}
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823576AC:
	// lis r7,11682
	ctx.r7.s64 = 765591552;
	// ori r11,r7,43614
	ctx.r11.u64 = ctx.r7.u64 | 43614;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82357708
	if (ctx.cr6.gt) goto loc_82357708;
	// beq cr6,0x82356aa0
	if (ctx.cr6.eq) {
		// ERROR 82356AA0
		return;
	}
	// lis r6,11554
	ctx.r6.s64 = 757202944;
	// ori r11,r6,43935
	ctx.r11.u64 = ctx.r6.u64 | 43935;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x823576f0
	if (ctx.cr6.gt) goto loc_823576F0;
	// beq cr6,0x8235772c
	if (ctx.cr6.eq) goto loc_8235772C;
	// addis r11,r3,-11555
	ctx.r11.s64 = ctx.r3.s64 + -757268480;
	// addic. r11,r11,21857
	ctx.xer.ca = ctx.r11.u32 > 4294945438;
	ctx.r11.s64 = ctx.r11.s64 + 21857;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235772c
	if (ctx.cr0.eq) goto loc_8235772C;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82357700
	if (ctx.cr6.eq) goto loc_82357700;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823576F0:
	// lis r5,11554
	ctx.r5.s64 = 757202944;
	// ori r4,r5,43941
	ctx.r4.u64 = ctx.r5.u64 | 43941;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82357724
	if (!ctx.cr6.eq) goto loc_82357724;
loc_82357700:
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
loc_82357708:
	// addis r11,r3,-11683
	ctx.r11.s64 = ctx.r3.s64 + -765657088;
	// addic. r11,r11,21852
	ctx.xer.ca = ctx.r11.u32 > 4294945443;
	ctx.r11.s64 = ctx.r11.s64 + 21852;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235772c
	if (ctx.cr0.eq) goto loc_8235772C;
	// cmplwi cr6,r11,186
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 186, ctx.xer);
	// beq cr6,0x82356aa0
	if (ctx.cr6.eq) {
		// ERROR 82356AA0
		return;
	}
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
loc_82357720:
	// beq cr6,0x8235772c
	if (ctx.cr6.eq) goto loc_8235772C;
loc_82357724:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8235772C:
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82357734"))) PPC_WEAK_FUNC(sub_82357734);
PPC_FUNC_IMPL(__imp__sub_82357734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357738"))) PPC_WEAK_FUNC(sub_82357738);
PPC_FUNC_IMPL(__imp__sub_82357738) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r7,72(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r8,r9,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwimi r11,r7,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwimi r6,r9,0,20,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235776C"))) PPC_WEAK_FUNC(sub_8235776C);
PPC_FUNC_IMPL(__imp__sub_8235776C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357770"))) PPC_WEAK_FUNC(sub_82357770);
PPC_FUNC_IMPL(__imp__sub_82357770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad4
	ctx.lr = 0x82357778;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r19,20(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bl 0x823477a8
	ctx.lr = 0x823577AC;
	sub_823477A8(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823477b0
	ctx.lr = 0x823577B8;
	sub_823477B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823577d0
	if (!ctx.cr6.eq) goto loc_823577D0;
loc_823577C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
loc_823577D0:
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r26,r31,52
	ctx.r26.s64 = ctx.r31.s64 + 52;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823990e8
	ctx.lr = 0x8235780C;
	sub_823990E8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x823477b0
	ctx.lr = 0x8235781C;
	sub_823477B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823577c4
	if (ctx.cr6.eq) goto loc_823577C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823991c0
	ctx.lr = 0x82357834;
	sub_823991C0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82357844;
	sub_8259D2A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r24,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r24.u16);
	// sth r23,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r23.u16);
	// stb r22,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r22.u8);
	// stb r20,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r20.u8);
	// bl 0x82356a10
	ctx.lr = 0x8235785C;
	sub_82356A10(ctx, base);
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
	// stb r27,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r27.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// add r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r11.u8);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// bl 0x823477a8
	ctx.lr = 0x82357888;
	sub_823477A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82357894"))) PPC_WEAK_FUNC(sub_82357894);
PPC_FUNC_IMPL(__imp__sub_82357894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357898"))) PPC_WEAK_FUNC(sub_82357898);
PPC_FUNC_IMPL(__imp__sub_82357898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x823578A0;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82357974
	if (ctx.cr6.eq) goto loc_82357974;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82357974
	if (ctx.cr6.eq) goto loc_82357974;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r6,300(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// addi r27,r31,52
	ctx.r27.s64 = ctx.r31.s64 + 52;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x823990e8
	ctx.lr = 0x82357914;
	sub_823990E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r27,r11,96
	ctx.r27.s64 = ctx.r11.s64 + 96;
	// bl 0x823991c0
	ctx.lr = 0x82357928;
	sub_823991C0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82357938;
	sub_8259D2A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r26,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r26.u16);
	// sth r25,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r25.u16);
	// stb r24,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r24.u8);
	// stb r22,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r22.u8);
	// bl 0x82356a10
	ctx.lr = 0x82357950;
	sub_82356A10(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r30,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r30.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// stb r11,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_82357974:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82357980"))) PPC_WEAK_FUNC(sub_82357980);
PPC_FUNC_IMPL(__imp__sub_82357980) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235799C"))) PPC_WEAK_FUNC(sub_8235799C);
PPC_FUNC_IMPL(__imp__sub_8235799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823579A0"))) PPC_WEAK_FUNC(sub_823579A0);
PPC_FUNC_IMPL(__imp__sub_823579A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259badc
	ctx.lr = 0x823579A8;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,28928
	ctx.r11.s64 = ctx.r11.s64 + 28928;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// lwz r27,196(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lbz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r25,r11,52
	ctx.r25.s64 = ctx.r11.s64 + 52;
	// bl 0x8237d910
	ctx.lr = 0x823579FC;
	sub_8237D910(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8237e308
	ctx.lr = 0x82357A10;
	sub_8237E308(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,76(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f12,-580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -580);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82357a4c
	if (!ctx.cr6.lt) goto loc_82357A4C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lfs f12,-1472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1472);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f9,f0,f12,f13
	ctx.f9.f64 = double(float(-(ctx.f0.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// stfs f9,92(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
loc_82357A4C:
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82357bd8
	if (ctx.cr6.eq) goto loc_82357BD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,5734
	ctx.r7.s64 = 375783424;
	// lis r6,5734
	ctx.r6.s64 = 375783424;
	// ori r26,r7,232
	ctx.r26.u64 = ctx.r7.u64 | 232;
	// ori r22,r6,38
	ctx.r22.u64 = ctx.r6.u64 | 38;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
loc_82357A70:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82480310
	ctx.lr = 0x82357A7C;
	sub_82480310(ctx, base);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82357bcc
	if (ctx.cr6.gt) goto loc_82357BCC;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// addi r12,r12,31396
	ctx.r12.s64 = ctx.r12.s64 + 31396;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82357AC4;
	case 1:
		goto loc_82357BBC;
	case 2:
		goto loc_82357AC4;
	case 3:
		goto loc_82357AF4;
	case 4:
		goto loc_82357AF4;
	case 5:
		goto loc_82357AF4;
	case 6:
		goto loc_82357AF4;
	case 7:
		goto loc_82357AF4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,31428(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 31428);
	// lwz r17,31676(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 31676);
	// lwz r17,31428(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 31428);
	// lwz r17,31476(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 31476);
	// lwz r17,31476(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 31476);
	// lwz r17,31476(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 31476);
	// lwz r17,31476(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 31476);
	// lwz r17,31476(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 31476);
loc_82357AC4:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// bl 0x824801a8
	ctx.lr = 0x82357ADC;
	sub_824801A8(ctx, base);
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82357aec
	if (!ctx.cr6.eq) goto loc_82357AEC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x82357bcc
	goto loc_82357BCC;
loc_82357AEC:
	// cmpw cr6,r3,r22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x82357b00
	if (!ctx.cr6.eq) goto loc_82357B00;
loc_82357AF4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stb r24,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r24.u8);
	// b 0x82357bcc
	goto loc_82357BCC;
loc_82357B00:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82357b14
	if (!ctx.cr6.lt) goto loc_82357B14;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82357B14:
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// blt cr6,0x82357b28
	if (ctx.cr6.lt) goto loc_82357B28;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x82357bcc
	goto loc_82357BCC;
loc_82357B28:
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lfd f8,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,92(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// bge cr6,0x82357bb4
	if (!ctx.cr6.lt) goto loc_82357BB4;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82387920
	ctx.lr = 0x82357B88;
	sub_82387920(ctx, base);
	// lbz r10,86(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// lbz r5,85(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 85);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// stb r6,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r6.u8);
	// stb r10,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r10.u8);
loc_82357BB4:
	// stb r24,83(r31)
	PPC_STORE_U8(ctx.r31.u32 + 83, ctx.r24.u8);
	// b 0x82357bcc
	goto loc_82357BCC;
loc_82357BBC:
	// lbz r9,83(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 83);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82357bcc
	if (!ctx.cr6.eq) goto loc_82357BCC;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82357BCC:
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82357a70
	if (!ctx.cr6.eq) goto loc_82357A70;
loc_82357BD8:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8237e308
	ctx.lr = 0x82357BE8;
	sub_8237E308(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823843e8
	ctx.lr = 0x82357BF0;
	sub_823843E8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82357BFC"))) PPC_WEAK_FUNC(sub_82357BFC);
PPC_FUNC_IMPL(__imp__sub_82357BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357C00"))) PPC_WEAK_FUNC(sub_82357C00);
PPC_FUNC_IMPL(__imp__sub_82357C00) {
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
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82357c58
	if (ctx.cr6.eq) goto loc_82357C58;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82480380
	ctx.lr = 0x82357C38;
	sub_82480380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82357c58
	if (ctx.cr6.lt) goto loc_82357C58;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82357C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82357C58:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82480198
	ctx.lr = 0x82357C60;
	sub_82480198(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// bl 0x823843e8
	ctx.lr = 0x82357C6C;
	sub_823843E8(ctx, base);
	// li r9,56
	ctx.r9.s64 = 56;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82357C90"))) PPC_WEAK_FUNC(sub_82357C90);
PPC_FUNC_IMPL(__imp__sub_82357C90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x82357cb8
	if (!ctx.cr6.eq) goto loc_82357CB8;
	// lbz r10,85(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 85);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82357cb8
	if (ctx.cr6.lt) goto loc_82357CB8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_82357CB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82357CC0"))) PPC_WEAK_FUNC(sub_82357CC0);
PPC_FUNC_IMPL(__imp__sub_82357CC0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,81(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 81);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82357CC8"))) PPC_WEAK_FUNC(sub_82357CC8);
PPC_FUNC_IMPL(__imp__sub_82357CC8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82480300
	ctx.lr = 0x82357CE8;
	sub_82480300(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82357D04"))) PPC_WEAK_FUNC(sub_82357D04);
PPC_FUNC_IMPL(__imp__sub_82357D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82357D08"))) PPC_WEAK_FUNC(sub_82357D08);
PPC_FUNC_IMPL(__imp__sub_82357D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r8,10(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// lbz r7,11(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// lbz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// lbz r10,15(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// std r5,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r5.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// std r4,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r4.u64);
	// std r8,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r8.u64);
	// lfd f11,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// frsp f11,f9
	ctx.f11.f64 = double(float(ctx.f9.f64));
	// lfd f0,-48(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,13344(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13344);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,-40(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// stfs f6,-24(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f8,-32(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f7,-28(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r4,r1,-32
	ctx.r4.s64 = ctx.r1.s64 + -32;
	// addi r6,r8,26080
	ctx.r6.s64 = ctx.r8.s64 + 26080;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r5,r8,26064
	ctx.r5.s64 = ctx.r8.s64 + 26064;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lvx128 v11,r0,r4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r8,26048
	ctx.r7.s64 = ctx.r8.s64 + 26048;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lvx128 v13,r0,r5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r8,26016
	ctx.r8.s64 = ctx.r8.s64 + 26016;
loc_82357DBC:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// dcbt 16,r0,r3
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lvx128 v7,r0,r8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r4.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// stw r5,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r5.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r3,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r3.u32);
	// addi r3,r10,-32
	ctx.r3.s64 = ctx.r10.s64 + -32;
	// stw r4,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r4.u32);
	// addi r4,r1,-16
	ctx.r4.s64 = ctx.r1.s64 + -16;
	// lvx128 v6,r5,r8
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// stw r6,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r6.u32);
	// addi r6,r10,-16
	ctx.r6.s64 = ctx.r10.s64 + -16;
	// lvx128 v10,r0,r4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,-32
	ctx.r4.s64 = ctx.r1.s64 + -32;
	// vperm v8,v10,v0,v7
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v10,v10,v0,v6
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v9,r0,r4
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v7,v9,v0,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubfp v10,v10,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)));
	// vperm v0,v9,v0,v6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vsubfp v9,v8,v13
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp v8,v7,v13
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v7,v10,v12,v11
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v9,v9,v12,v11
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v6,v8,v12,v11
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v5,v0,v12,v11
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// stvx v7,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v9,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvx v6,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v5,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x82357dbc
	if (!ctx.cr6.eq) goto loc_82357DBC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82357E78"))) PPC_WEAK_FUNC(sub_82357E78);
PPC_FUNC_IMPL(__imp__sub_82357E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsubs f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fmuls f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f3,f0,f10
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f1,f9,f0,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f4.f64));
	// stfs f1,-12(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmsubs f0,f13,f11,f3
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f3.f64));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmsubs f2,f12,f10,f5
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f5.f64));
	// stfs f2,-16(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
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
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82357F58"))) PPC_WEAK_FUNC(sub_82357F58);
PPC_FUNC_IMPL(__imp__sub_82357F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bb94
	ctx.lr = 0x82357F68;
	__savefpr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f30,f10,f13
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f29,f9,f12
	ctx.f29.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f5,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f28,f8,f0
	ctx.f28.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f4,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f27,f7,f13
	ctx.f27.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f3,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f26,f6,f12
	ctx.f26.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fsubs f25,f5,f0
	ctx.f25.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// fsubs f24,f4,f13
	ctx.f24.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f23,f3,f12
	ctx.f23.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// bl 0x82357e78
	ctx.lr = 0x82357FCC;
	sub_82357E78(ctx, base);
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// ld r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmuls f13,f1,f30
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// fmadds f11,f2,f29,f13
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmadds f13,f12,f31,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x823580b4
	if (ctx.cr6.gt) goto loc_823580B4;
	// fmuls f9,f30,f30
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmadds f8,f29,f29,f9
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f9.f64));
	// fmadds f9,f31,f31,f8
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f8.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x82358038
	if (ctx.cr6.gt) goto loc_82358038;
	// bns cr6,0x823581bc
	if (!ctx.cr6.so) goto loc_823581BC;
loc_82358038:
	// fmuls f7,f27,f27
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// fmadds f6,f26,f26,f7
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f7.f64));
	// fmadds f10,f28,f28,f6
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgt cr6,0x82358050
	if (ctx.cr6.gt) goto loc_82358050;
	// bns cr6,0x823581bc
	if (!ctx.cr6.so) goto loc_823581BC;
loc_82358050:
	// fmuls f5,f25,f25
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f25.f64 * ctx.f25.f64));
	// fmadds f4,f24,f24,f5
	ctx.f4.f64 = double(float(ctx.f24.f64 * ctx.f24.f64 + ctx.f5.f64));
	// fmadds f8,f23,f23,f4
	ctx.f8.f64 = double(float(ctx.f23.f64 * ctx.f23.f64 + ctx.f4.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x82358068
	if (ctx.cr6.gt) goto loc_82358068;
	// bns cr6,0x823581bc
	if (!ctx.cr6.so) goto loc_823581BC;
loc_82358068:
	// fmuls f3,f27,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// fmuls f2,f24,f27
	ctx.f2.f64 = double(float(ctx.f24.f64 * ctx.f27.f64));
	// fmuls f1,f24,f30
	ctx.f1.f64 = double(float(ctx.f24.f64 * ctx.f30.f64));
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// fmadds f13,f26,f29,f3
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f29.f64 + ctx.f3.f64));
	// fmadds f12,f23,f26,f2
	ctx.f12.f64 = double(float(ctx.f23.f64 * ctx.f26.f64 + ctx.f2.f64));
	// fmadds f7,f23,f29,f1
	ctx.f7.f64 = double(float(ctx.f23.f64 * ctx.f29.f64 + ctx.f1.f64));
	// fmadds f11,f28,f31,f13
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f13,f25,f28,f12
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f28.f64 + ctx.f12.f64));
	// fmadds f12,f25,f31,f7
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f31.f64 + ctx.f7.f64));
	// bgt cr6,0x823580d4
	if (ctx.cr6.gt) goto loc_823580D4;
	// bso cr6,0x823580d4
	if (ctx.cr6.so) goto loc_823580D4;
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bgt cr6,0x823580bc
	if (ctx.cr6.gt) goto loc_823580BC;
	// bso cr6,0x823580bc
	if (ctx.cr6.so) goto loc_823580BC;
loc_823580A4:
	// fcmpu cr6,f12,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f8.f64);
	// ble cr6,0x823580f8
	if (!ctx.cr6.gt) goto loc_823580F8;
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// ble cr6,0x823580f8
	if (!ctx.cr6.gt) goto loc_823580F8;
loc_823580B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823581c0
	goto loc_823581C0;
loc_823580BC:
	// fcmpu cr6,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// ble cr6,0x823580f8
	if (!ctx.cr6.gt) goto loc_823580F8;
	// fcmpu cr6,f12,f9
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// ble cr6,0x823580f8
	if (!ctx.cr6.gt) goto loc_823580F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823581c0
	goto loc_823581C0;
loc_823580D4:
	// fcmpu cr6,f10,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// bgt cr6,0x823580a4
	if (ctx.cr6.gt) goto loc_823580A4;
	// bso cr6,0x823580a4
	if (ctx.cr6.so) goto loc_823580A4;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x823580f8
	if (!ctx.cr6.gt) goto loc_823580F8;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// ble cr6,0x823580f8
	if (!ctx.cr6.gt) goto loc_823580F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823581c0
	goto loc_823581C0;
loc_823580F8:
	// fsubs f7,f9,f11
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f1,f11,f11
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f31,f10,f9
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fsubs f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f3,f8,f13
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f2,f9,f12
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fmuls f26,f8,f10
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f29,f7,f0
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f30,f6,f0
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f8,f7,f13
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f7,f5,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f27,f12,f12
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fsubs f10,f31,f1
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fmuls f1,f4,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f6,f3,f0
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f28,f13,f13
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f3,f2,f0
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fadds f4,f29,f30
	ctx.f4.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fsubs f9,f9,f27
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f27.f64));
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fsubs f2,f26,f28
	ctx.f2.f64 = double(float(ctx.f26.f64 - ctx.f28.f64));
	// fadds f8,f13,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fadds f13,f5,f6
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fadds f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// fcmpu cr6,f10,f4
	ctx.cr6.compare(ctx.f10.f64, ctx.f4.f64);
	// ble cr6,0x82358190
	if (!ctx.cr6.gt) goto loc_82358190;
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bgt cr6,0x82358190
	if (ctx.cr6.gt) goto loc_82358190;
	// bns cr6,0x823580b4
	if (!ctx.cr6.so) goto loc_823580B4;
loc_82358190:
	// fcmpu cr6,f2,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// ble cr6,0x823581a4
	if (!ctx.cr6.gt) goto loc_823581A4;
	// fcmpu cr6,f2,f11
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bgt cr6,0x823581a4
	if (ctx.cr6.gt) goto loc_823581A4;
	// bns cr6,0x823580b4
	if (!ctx.cr6.so) goto loc_823580B4;
loc_823581A4:
	// fcmpu cr6,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// ble cr6,0x823581bc
	if (!ctx.cr6.gt) goto loc_823581BC;
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bgt cr6,0x823581bc
	if (ctx.cr6.gt) goto loc_823581BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bns cr6,0x823581c0
	if (!ctx.cr6.so) goto loc_823581C0;
loc_823581BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823581C0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bbe0
	ctx.lr = 0x823581CC;
	__restfpr_23(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823581D8"))) PPC_WEAK_FUNC(sub_823581D8);
PPC_FUNC_IMPL(__imp__sub_823581D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259badc
	ctx.lr = 0x823581E0;
	__savegprlr_21(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r23,12(r4)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// li r21,0
	ctx.r21.s64 = 0;
	// lbz r11,13(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r22,r11,r31
	ctx.r22.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82358408
	if (!ctx.cr6.lt) goto loc_82358408;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8235821C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r29,r10,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f7,180(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f6,184(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x82357f58
	ctx.lr = 0x823582B8;
	sub_82357F58(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82358308
	if (ctx.cr6.eq) goto loc_82358308;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x823582F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82358414
	if (ctx.cr6.eq) goto loc_82358414;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_82358308:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bge cr6,0x823583fc
	if (!ctx.cr6.lt) goto loc_823583FC;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rotlwi r29,r10,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f5,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82357f58
	ctx.lr = 0x823583AC;
	sub_82357F58(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823583fc
	if (ctx.cr6.eq) goto loc_823583FC;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// stw r24,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r24.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x823583EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82358414
	if (ctx.cr6.eq) goto loc_82358414;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_823583FC:
	// add r31,r23,r31
	ctx.r31.u64 = ctx.r23.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x8235821c
	if (ctx.cr6.lt) goto loc_8235821C;
loc_82358408:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
loc_82358414:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82358420"))) PPC_WEAK_FUNC(sub_82358420);
PPC_FUNC_IMPL(__imp__sub_82358420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bb88
	ctx.lr = 0x82358430;
	__savefpr_20(ctx, base);
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// lfs f4,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// addi r8,r1,-128
	ctx.r8.s64 = ctx.r1.s64 + -128;
	// lfs f3,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f11,f13,f4
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// lfs f2,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f10,f12,f3
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f6,f2
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f7,f12,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fsubs f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfd f0,-1600(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1600);
	// addi r11,r1,-160
	ctx.r11.s64 = ctx.r1.s64 + -160;
	// fsel f13,f11,f0,f11
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fsel f12,f10,f0,f10
	ctx.f12.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// fmuls f27,f11,f11
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fsel f4,f9,f0,f9
	ctx.f4.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fsel f5,f8,f8,f0
	ctx.f5.f64 = ctx.f8.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// stfs f5,-160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// fsel f3,f7,f7,f0
	ctx.f3.f64 = ctx.f7.f64 >= 0.0 ? ctx.f7.f64 : ctx.f0.f64;
	// stfs f3,-156(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// fsel f0,f6,f6,f0
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f6.f64 : ctx.f0.f64;
	// stfs f0,-152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmuls f30,f8,f8
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f29,f7,f7
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmuls f28,f6,f6
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// fmuls f26,f10,f10
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// std r6,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// fabs f4,f4
	ctx.f4.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// stfs f13,-160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// stfs f12,-156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// fmuls f25,f9,f9
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// stfs f4,-152(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f12.f64 = double(temp.f32);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// lfs f0,-1548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1548);
	ctx.f0.f64 = double(temp.f32);
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// fmuls f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,-136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -136);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f1,-140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f1,f0
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfd f13,-4840(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f12,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f23,f2,f12
	ctx.f23.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fsubs f24,f3,f12
	ctx.f24.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fsubs f21,f31,f12
	ctx.f21.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fsubs f20,f4,f12
	ctx.f20.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// fsubs f22,f1,f12
	ctx.f22.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fsel f5,f24,f13,f3
	ctx.f5.f64 = ctx.f24.f64 >= 0.0 ? ctx.f13.f64 : ctx.f3.f64;
	// fsubs f24,f0,f12
	ctx.f24.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f3,f23,f13,f2
	ctx.f3.f64 = ctx.f23.f64 >= 0.0 ? ctx.f13.f64 : ctx.f2.f64;
	// fsel f12,f22,f13,f1
	ctx.f12.f64 = ctx.f22.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// fsel f2,f21,f13,f31
	ctx.f2.f64 = ctx.f21.f64 >= 0.0 ? ctx.f13.f64 : ctx.f31.f64;
	// fsel f4,f20,f13,f4
	ctx.f4.f64 = ctx.f20.f64 >= 0.0 ? ctx.f13.f64 : ctx.f4.f64;
	// fsel f13,f24,f13,f0
	ctx.f13.f64 = ctx.f24.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f26,f5
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f5.f64));
	// fmuls f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// fmuls f3,f25,f3
	ctx.f3.f64 = double(float(ctx.f25.f64 * ctx.f3.f64));
	// fmuls f2,f28,f2
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f2.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fadds f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// fadds f5,f2,f3
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fmuls f3,f0,f0
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fadds f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fmuls f12,f4,f27
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f27.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// fcmpu cr6,f4,f3
	ctx.cr6.compare(ctx.f4.f64, ctx.f3.f64);
	// bge cr6,0x82358624
	if (!ctx.cr6.lt) goto loc_82358624;
	// fadds f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fadds f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8235860c
	if (!ctx.cr6.lt) goto loc_8235860C;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8235860c
	if (!ctx.cr6.lt) goto loc_8235860C;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bge cr6,0x8235860c
	if (!ctx.cr6.lt) goto loc_8235860C;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x8235860c
	if (!ctx.cr6.gt) goto loc_8235860C;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x8235860c
	if (!ctx.cr6.gt) goto loc_8235860C;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// ble cr6,0x8235860c
	if (!ctx.cr6.gt) goto loc_8235860C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bbd4
	ctx.lr = 0x82358600;
	__restfpr_20(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8235860C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bbd4
	ctx.lr = 0x82358618;
	__restfpr_20(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82358624:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bbd4
	ctx.lr = 0x82358630;
	__restfpr_20(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8235863C"))) PPC_WEAK_FUNC(sub_8235863C);
PPC_FUNC_IMPL(__imp__sub_8235863C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358640"))) PPC_WEAK_FUNC(sub_82358640);
PPC_FUNC_IMPL(__imp__sub_82358640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f0,f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f4,f1
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f1.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f10,f12,f0,f13
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bgt cr6,0x82358680
	if (ctx.cr6.gt) goto loc_82358680;
	// bso cr6,0x82358680
	if (ctx.cr6.so) goto loc_82358680;
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82358680
	if (ctx.cr6.lt) goto loc_82358680;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x82358684
	if (!ctx.cr6.so) goto loc_82358684;
loc_82358680:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82358684:
	// lfs f13,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// fsel f8,f9,f11,f0
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// stfs f8,0(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fsel f6,f7,f10,f13
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f10.f64 : ctx.f13.f64;
	// stfs f6,4(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823586A8"))) PPC_WEAK_FUNC(sub_823586A8);
PPC_FUNC_IMPL(__imp__sub_823586A8) {
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
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f5,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f12,f11,f0,f13
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f0,f11,f13,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// blt cr6,0x82358710
	if (ctx.cr6.lt) goto loc_82358710;
	// bso cr6,0x82358710
	if (ctx.cr6.so) goto loc_82358710;
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bgt cr6,0x82358710
	if (ctx.cr6.gt) goto loc_82358710;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x82358714
	if (!ctx.cr6.so) goto loc_82358714;
loc_82358710:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82358714:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fneg f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsubs f7,f5,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfd f13,-1600(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -1600);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f10,-4840(r10)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4840);
	// fsel f11,f8,f13,f0
	ctx.f11.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsel f9,f7,f12,f10
	ctx.f9.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f10.f64;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x82358824
	if (ctx.cr6.eq) goto loc_82358824;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fsubs f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f10,f12,f0,f13
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bgt cr6,0x82358790
	if (ctx.cr6.gt) goto loc_82358790;
	// bso cr6,0x82358790
	if (ctx.cr6.so) goto loc_82358790;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// blt cr6,0x82358790
	if (ctx.cr6.lt) goto loc_82358790;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x82358794
	if (!ctx.cr6.so) goto loc_82358794;
loc_82358790:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82358794:
	// fsubs f1,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// fsubs f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fsel f12,f1,f11,f0
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsel f11,f13,f10,f9
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x82358824
	if (ctx.cr6.eq) goto loc_82358824;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82358640
	ctx.lr = 0x823587D0;
	sub_82358640(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82358824
	if (ctx.cr6.eq) goto loc_82358824;
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// bne cr6,0x8235880c
	if (!ctx.cr6.eq) goto loc_8235880C;
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f5
	ctx.cr6.compare(ctx.f9.f64, ctx.f5.f64);
	// bne cr6,0x8235880c
	if (!ctx.cr6.eq) goto loc_8235880C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8235880C:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82358824:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8235883C"))) PPC_WEAK_FUNC(sub_8235883C);
PPC_FUNC_IMPL(__imp__sub_8235883C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358840"))) PPC_WEAK_FUNC(sub_82358840);
PPC_FUNC_IMPL(__imp__sub_82358840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bba0
	ctx.lr = 0x82358850;
	__savefpr_26(ctx, base);
	// lfs f12,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f6,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f26,f6,f12
	ctx.f26.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f5,f1,f11
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f27,f7,f13
	ctx.f27.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f3,f7,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f28,f8,f0
	ctx.f28.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f8,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f31,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsubs f31,f31,f13
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// lfs f2,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f7,f26,f5
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f5.f64));
	// lfs f30,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fsubs f30,f30,f12
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// fmuls f6,f3,f27
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f27.f64));
	// fmuls f2,f4,f28
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// fmsubs f7,f3,f28,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f28.f64 - ctx.f7.f64));
	// fmsubs f8,f4,f26,f6
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f26.f64 - ctx.f6.f64));
	// fmsubs f6,f27,f5,f2
	ctx.f6.f64 = double(float(ctx.f27.f64 * ctx.f5.f64 - ctx.f2.f64));
	// fmuls f29,f7,f31
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmadds f2,f8,f1,f29
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f29.f64));
	// lfs f29,23656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23656);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f2,f6,f30,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f2.f64));
	// fcmpu cr6,f2,f29
	ctx.cr6.compare(ctx.f2.f64, ctx.f29.f64);
	// bgt cr6,0x823588e8
	if (ctx.cr6.gt) goto loc_823588E8;
	// bns cr6,0x823589c4
	if (!ctx.cr6.so) goto loc_823589C4;
loc_823588E8:
	// fsubs f13,f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f11,26100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26100);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmuls f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f9,f13,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f10,26096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26096);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f2,f10
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmadds f6,f12,f6,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f9,f0,f8,f6
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fcmpu cr6,f9,f11
	ctx.cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// bso cr6,0x82358924
	if (ctx.cr6.so) goto loc_82358924;
	// ble cr6,0x823589c4
	if (!ctx.cr6.gt) goto loc_823589C4;
loc_82358924:
	// fcmpu cr6,f9,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f7.f64);
	// bgt cr6,0x823589c4
	if (ctx.cr6.gt) goto loc_823589C4;
	// fmuls f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f6,f12,f31
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f8,f13,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmsubs f12,f12,f1,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 - ctx.f10.f64));
	// fmsubs f13,f13,f30,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 - ctx.f6.f64));
	// fmsubs f0,f0,f31,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f8.f64));
	// fmuls f4,f12,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmadds f3,f0,f3,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fmadds f10,f13,f5,f3
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bso cr6,0x8235895c
	if (ctx.cr6.so) goto loc_8235895C;
	// ble cr6,0x823589c4
	if (!ctx.cr6.gt) goto loc_823589C4;
loc_8235895C:
	// fadds f1,f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fcmpu cr6,f1,f7
	ctx.cr6.compare(ctx.f1.f64, ctx.f7.f64);
	// bgt cr6,0x823589c4
	if (ctx.cr6.gt) goto loc_823589C4;
	// fmuls f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// fmadds f8,f0,f26,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f26.f64 + ctx.f12.f64));
	// fmadds f13,f13,f28,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 + ctx.f8.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bso cr6,0x82358980
	if (ctx.cr6.so) goto loc_82358980;
	// ble cr6,0x823589c4
	if (!ctx.cr6.gt) goto loc_823589C4;
loc_82358980:
	// fcmpu cr6,f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bgt cr6,0x823589c4
	if (ctx.cr6.gt) goto loc_823589C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f5,f0,f10
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f5,0(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bbec
	ctx.lr = 0x823589B8;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823589C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8259bbec
	ctx.lr = 0x823589D0;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823589DC"))) PPC_WEAK_FUNC(sub_823589DC);
PPC_FUNC_IMPL(__imp__sub_823589DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823589E0"))) PPC_WEAK_FUNC(sub_823589E0);
PPC_FUNC_IMPL(__imp__sub_823589E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8259bb80
	ctx.lr = 0x823589F4;
	__savefpr_18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f31,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f31.f64 = double(temp.f32);
	// li r7,15
	ctx.r7.s64 = 15;
	// lfs f30,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f30.f64 = double(temp.f32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lfs f29,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// li r8,8
	ctx.r8.s64 = 8;
	// lfs f28,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f18.f64 = double(temp.f32);
	// lfs f11,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f11.f64 = double(temp.f32);
loc_82358A4C:
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// ld r31,8(r9)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// lfs f0,-140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f29,f0
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f9,f25,f13
	ctx.f9.f64 = double(float(ctx.f25.f64 * ctx.f13.f64));
	// lfs f12,-136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -136);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f28,f0
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f6,f27,f0
	ctx.f6.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fmuls f5,f24,f13
	ctx.f5.f64 = double(float(ctx.f24.f64 * ctx.f13.f64));
	// fmuls f4,f23,f13
	ctx.f4.f64 = double(float(ctx.f23.f64 * ctx.f13.f64));
	// fmuls f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f13,f22,f13
	ctx.f13.f64 = double(float(ctx.f22.f64 * ctx.f13.f64));
	// fmuls f8,f2,f12
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f3,f31,f12
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fmuls f9,f1,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f12,f30,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// fadds f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fadds f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f10,f8
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// fadds f10,f7,f9
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fadds f9,f6,f3
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fsubs f13,f13,f21
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f21.f64));
	// fsubs f12,f10,f20
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f20.f64));
	// fsubs f10,f9,f19
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f19.f64));
	// fsubs f0,f0,f18
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f18.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x82358adc
	if (!ctx.cr6.gt) goto loc_82358ADC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82358ADC:
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82358aec
	if (!ctx.cr6.gt) goto loc_82358AEC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82358AEC:
	// fcmpu cr6,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// ble cr6,0x82358afc
	if (!ctx.cr6.gt) goto loc_82358AFC;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// ori r11,r10,4
	ctx.r11.u64 = ctx.r10.u64 | 4;
loc_82358AFC:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82358b0c
	if (!ctx.cr6.gt) goto loc_82358B0C;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// ori r11,r5,8
	ctx.r11.u64 = ctx.r5.u64 | 8;
loc_82358B0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82358b1c
	if (ctx.cr6.eq) goto loc_82358B1C;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82358B1C:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82358a4c
	if (!ctx.cr6.eq) goto loc_82358A4C;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82358b48
	if (ctx.cr6.eq) goto loc_82358B48;
loc_82358B40:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82358c7c
	goto loc_82358C7C;
loc_82358B48:
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r4,24
	ctx.r8.s64 = ctx.r4.s64 + 24;
loc_82358B50:
	// lfs f10,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r9,2
	ctx.r9.s64 = 2;
loc_82358B60:
	// lfs f9,-20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f8,f13,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f9,f7,f12,f5
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fsubs f4,f9,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fcmpu cr6,f4,f11
	ctx.cr6.compare(ctx.f4.f64, ctx.f11.f64);
	// bgt cr6,0x82358b9c
	if (ctx.cr6.gt) goto loc_82358B9C;
	// bso cr6,0x82358b9c
	if (ctx.cr6.so) goto loc_82358B9C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82358ba0
	goto loc_82358BA0;
loc_82358B9C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82358BA0:
	// lfs f3,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f2,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f8,f2,f0,f9
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f9,f1,f13,f8
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fsubs f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// bgt cr6,0x82358bd0
	if (ctx.cr6.gt) goto loc_82358BD0;
	// bso cr6,0x82358bd0
	if (ctx.cr6.so) goto loc_82358BD0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82358bd4
	goto loc_82358BD4;
loc_82358BD0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82358BD4:
	// lfs f6,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f2,f5,f13,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f9,f4,f12,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fsubs f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fcmpu cr6,f1,f11
	ctx.cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// bgt cr6,0x82358c04
	if (ctx.cr6.gt) goto loc_82358C04;
	// bso cr6,0x82358c04
	if (ctx.cr6.so) goto loc_82358C04;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82358c08
	goto loc_82358C08;
loc_82358C04:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82358C08:
	// lfs f9,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f8,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f8,f13,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f0,f7,f12,f5
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fsubs f4,f0,f10
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fcmpu cr6,f4,f11
	ctx.cr6.compare(ctx.f4.f64, ctx.f11.f64);
	// bgt cr6,0x82358c38
	if (ctx.cr6.gt) goto loc_82358C38;
	// bso cr6,0x82358c38
	if (ctx.cr6.so) goto loc_82358C38;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82358c3c
	goto loc_82358C3C;
loc_82358C38:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82358C3C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82358b60
	if (!ctx.cr6.eq) goto loc_82358B60;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82358b40
	if (!ctx.cr6.eq) goto loc_82358B40;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x82358b50
	if (ctx.cr6.lt) goto loc_82358B50;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// li r3,2
	ctx.r3.s64 = 2;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82358c7c
	if (!ctx.cr6.eq) goto loc_82358C7C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82358C7C:
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8259bbcc
	ctx.lr = 0x82358C84;
	__restfpr_18(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82358C94"))) PPC_WEAK_FUNC(sub_82358C94);
PPC_FUNC_IMPL(__imp__sub_82358C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358C98"))) PPC_WEAK_FUNC(sub_82358C98);
PPC_FUNC_IMPL(__imp__sub_82358C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82353c98
	ctx.lr = 0x82358CB4;
	sub_82353C98(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823589e0
	ctx.lr = 0x82358CC0;
	sub_823589E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82358CD4"))) PPC_WEAK_FUNC(sub_82358CD4);
PPC_FUNC_IMPL(__imp__sub_82358CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82358CD8"))) PPC_WEAK_FUNC(sub_82358CD8);
PPC_FUNC_IMPL(__imp__sub_82358CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x82358CE0;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4416(r1)
	ea = -4416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r25,13(r4)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lbz r11,14(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mullw r11,r11,r25
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// lwz r23,4(r4)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f31,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// add r24,r11,r31
	ctx.r24.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82357d08
	ctx.lr = 0x82358D2C;
	sub_82357D08(ctx, base);
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82358eb8
	if (!ctx.cr6.lt) goto loc_82358EB8;
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
loc_82358D3C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82358db4
	if (!ctx.cr6.eq) goto loc_82358DB4;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r10,r8,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotlwi r9,r7,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r3,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// b 0x82358df0
	goto loc_82358DF0;
loc_82358DB4:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lbz r7,3(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rotlwi r9,r7,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// std r3,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r3.u64);
loc_82358DF0:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82358840
	ctx.lr = 0x82358E10;
	sub_82358840(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82358e84
	if (ctx.cr6.eq) goto loc_82358E84;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82358e84
	if (!ctx.cr6.lt) goto loc_82358E84;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r3,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
loc_82358E84:
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// bge cr6,0x82358ea0
	if (!ctx.cr6.lt) goto loc_82358EA0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82358ea0
	if (!ctx.cr6.eq) goto loc_82358EA0;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82358ea8
	goto loc_82358EA8;
loc_82358EA0:
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82358EA8:
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82358d3c
	if (ctx.cr6.lt) goto loc_82358D3C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82358ed0
	if (!ctx.cr6.eq) goto loc_82358ED0;
loc_82358EB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,4416
	ctx.r1.s64 = ctx.r1.s64 + 4416;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_82358ED0:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lfs f11,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f10,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f9,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fadds f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r7.u64);
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
	// bl 0x82357e78
	ctx.lr = 0x82358F40;
	sub_82357E78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// stfs f31,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// stw r27,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r27.u32);
	// stfs f30,84(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// stw r23,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r23.u32);
	// stfs f29,88(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// stw r26,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r26.u32);
	// addi r1,r1,4416
	ctx.r1.s64 = ctx.r1.s64 + 4416;
	// lfd f29,-104(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}


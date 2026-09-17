#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821ED224"))) PPC_WEAK_FUNC(sub_821ED224);
PPC_FUNC_IMPL(__imp__sub_821ED224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ED228"))) PPC_WEAK_FUNC(sub_821ED228);
PPC_FUNC_IMPL(__imp__sub_821ED228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821ED230;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r10,465(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 465);
	// sth r11,568(r31)
	PPC_STORE_U16(ctx.r31.u32 + 568, ctx.r11.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ed280
	if (ctx.cr6.eq) goto loc_821ED280;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
loc_821ED254:
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r7,516(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 516);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821ed270
	if (!ctx.cr6.eq) goto loc_821ED270;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// extsh r29,r6
	ctx.r29.s64 = ctx.r6.s16;
loc_821ED270:
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821ed254
	if (ctx.cr6.lt) goto loc_821ED254;
loc_821ED280:
	// lhz r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 312);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821ed380
	if (!ctx.cr6.gt) goto loc_821ED380;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821ED294:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,328
	ctx.r5.s64 = ctx.r11.s64 + 328;
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x821ed368
	if (!ctx.cr6.eq) goto loc_821ED368;
	// addi r11,r31,576
	ctx.r11.s64 = ctx.r31.s64 + 576;
	// extsh r6,r29
	ctx.r6.s64 = ctx.r29.s16;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// twllei r6,0
	if (ctx.r6.u32 <= 0) __builtin_debugtrap();
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r4,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// divwu r4,r9,r6
	ctx.r4.u32 = ctx.r9.u32 / ctx.r6.u32;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lbz r3,465(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 465);
	// mullw r11,r4,r6
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// beq cr6,0x821ed34c
	if (ctx.cr6.eq) goto loc_821ED34C;
	// add r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r9,516(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 516);
loc_821ED310:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ed330
	if (!ctx.cr6.eq) goto loc_821ED330;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x821ed34c
	if (ctx.cr6.eq) goto loc_821ED34C;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
loc_821ED330:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lbz r4,465(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 465);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x821ed310
	if (ctx.cr6.lt) goto loc_821ED310;
loc_821ED34C:
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r10,r30,20
	ctx.r10.s64 = ctx.r30.s64 + 20;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r3,466(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 466);
	// bl 0x82221118
	ctx.lr = 0x821ED368;
	sub_82221118(ctx, base);
loc_821ED368:
	// lhz r7,312(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 312);
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x821ed294
	if (ctx.cr6.lt) goto loc_821ED294;
loc_821ED380:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821ED388"))) PPC_WEAK_FUNC(sub_821ED388);
PPC_FUNC_IMPL(__imp__sub_821ED388) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,27488
	ctx.r9.s64 = ctx.r9.s64 + 27488;
loc_821ED398:
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// ldx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r7.u32);
	// cmpld cr6,r6,r4
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x821ed3c8
	if (ctx.cr6.eq) goto loc_821ED3C8;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// blt cr6,0x821ed398
	if (ctx.cr6.lt) goto loc_821ED398;
	// li r3,66
	ctx.r3.s64 = 66;
	// blr 
	return;
loc_821ED3C8:
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r3,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED3D8"))) PPC_WEAK_FUNC(sub_821ED3D8);
PPC_FUNC_IMPL(__imp__sub_821ED3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1264
	ctx.r11.s64 = ctx.r11.s64 + -1264;
	// mulli r9,r4,200
	ctx.r9.s64 = ctx.r4.s64 * 200;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// addi r6,r11,60
	ctx.r6.s64 = ctx.r11.s64 + 60;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,112
	ctx.r7.s64 = ctx.r11.s64 + 112;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lwzx r7,r9,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lfsx f12,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfsx f11,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x821ed468
	if (ctx.cr6.gt) goto loc_821ED468;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,10176
	ctx.r11.s64 = ctx.r11.s64 + 10176;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
loc_821ED468:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED470"))) PPC_WEAK_FUNC(sub_821ED470);
PPC_FUNC_IMPL(__imp__sub_821ED470) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32137
	ctx.r10.s64 = -2106130432;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mulli r11,r4,200
	ctx.r11.s64 = ctx.r4.s64 * 200;
	// addi r10,r10,-1264
	ctx.r10.s64 = ctx.r10.s64 + -1264;
	// addi r9,r10,112
	ctx.r9.s64 = ctx.r10.s64 + 112;
	// addi r8,r10,312
	ctx.r8.s64 = ctx.r10.s64 + 312;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x821ed4c4
	if (!ctx.cr6.gt) goto loc_821ED4C4;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,10176
	ctx.r11.s64 = ctx.r11.s64 + 10176;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
loc_821ED4C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED4D0"))) PPC_WEAK_FUNC(sub_821ED4D0);
PPC_FUNC_IMPL(__imp__sub_821ED4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// rlwinm r11,r4,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// addis r9,r10,35
	ctx.r9.s64 = ctx.r10.s64 + 2293760;
	// addis r10,r10,35
	ctx.r10.s64 = ctx.r10.s64 + 2293760;
	// addi r9,r9,-29272
	ctx.r9.s64 = ctx.r9.s64 + -29272;
	// addi r8,r10,-28760
	ctx.r8.s64 = ctx.r10.s64 + -28760;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x821ed52c
	if (ctx.cr6.lt) goto loc_821ED52C;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,10176
	ctx.r11.s64 = ctx.r11.s64 + 10176;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
loc_821ED52C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED538"))) PPC_WEAK_FUNC(sub_821ED538);
PPC_FUNC_IMPL(__imp__sub_821ED538) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x821041a8
	ctx.lr = 0x821ED564;
	sub_821041A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ed584
	if (ctx.cr6.eq) goto loc_821ED584;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,28544
	ctx.r3.s64 = ctx.r11.s64 + 28544;
	// bl 0x8232da90
	ctx.lr = 0x821ED580;
	sub_8232DA90(ctx, base);
	// b 0x821ed588
	goto loc_821ED588;
loc_821ED584:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821ED588:
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8544
	ctx.r11.s64 = ctx.r11.s64 + 8544;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// beq cr6,0x821ed604
	if (ctx.cr6.eq) goto loc_821ED604;
	// rotlwi r6,r4,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// subf r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r4,r5,r11
	ctx.r4.s32 = ctx.r5.s32 / ctx.r11.s32;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// andc r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
loc_821ED604:
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

__attribute__((alias("__imp__sub_821ED61C"))) PPC_WEAK_FUNC(sub_821ED61C);
PPC_FUNC_IMPL(__imp__sub_821ED61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ED620"))) PPC_WEAK_FUNC(sub_821ED620);
PPC_FUNC_IMPL(__imp__sub_821ED620) {
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
	// bl 0x821ed538
	ctx.lr = 0x821ED640;
	sub_821ED538(ctx, base);
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,8544
	ctx.r10.s64 = ctx.r10.s64 + 8544;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x821ed688
	if (!ctx.cr6.gt) goto loc_821ED688;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r10,10176
	ctx.r10.s64 = ctx.r10.s64 + 10176;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// b 0x821ed690
	goto loc_821ED690;
loc_821ED688:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_821ED690:
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

__attribute__((alias("__imp__sub_821ED6A8"))) PPC_WEAK_FUNC(sub_821ED6A8);
PPC_FUNC_IMPL(__imp__sub_821ED6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821ED6B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r10,26080
	ctx.r28.s64 = ctx.r10.s64 + 26080;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// mulli r11,r4,5956
	ctx.r11.s64 = ctx.r4.s64 * 5956;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwzx r10,r28,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lwz r29,8(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addis r10,r10,35
	ctx.r10.s64 = ctx.r10.s64 + 2293760;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r10,-31704
	ctx.r3.s64 = ctx.r10.s64 + -31704;
	// mulli r10,r8,328
	ctx.r10.s64 = ctx.r8.s64 * 328;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r30,r11,10580
	ctx.r30.s64 = ctx.r11.s64 + 10580;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lbz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x820aff08
	ctx.lr = 0x821ED72C;
	sub_820AFF08(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ed760
	if (ctx.cr6.eq) goto loc_821ED760;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r11
	ctx.r8.s32 = ctx.r9.s32 / ctx.r11.s32;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// andc r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// twlgei r6,-1
	if (ctx.r6.u32 >= 4294967295) __builtin_debugtrap();
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_821ED760:
	// addis r11,r28,6
	ctx.r11.s64 = ctx.r28.s64 + 393216;
	// addi r5,r11,-12656
	ctx.r5.s64 = ctx.r11.s64 + -12656;
	// cmplw cr6,r29,r5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x821ed78c
	if (!ctx.cr6.eq) goto loc_821ED78C;
	// lwz r4,10548(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10548);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_821ED78C:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821ED7A8"))) PPC_WEAK_FUNC(sub_821ED7A8);
PPC_FUNC_IMPL(__imp__sub_821ED7A8) {
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
	// bl 0x821ed538
	ctx.lr = 0x821ED7C8;
	sub_821ED538(ctx, base);
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
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r11,r30,5956
	ctx.r11.s64 = ctx.r30.s64 * 5956;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,10548(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10548);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_821ED818"))) PPC_WEAK_FUNC(sub_821ED818);
PPC_FUNC_IMPL(__imp__sub_821ED818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821ED820;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// addi r9,r4,3
	ctx.r9.s64 = ctx.r4.s64 + 3;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r10,r4,5956
	ctx.r10.s64 = ctx.r4.s64 * 5956;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ldx r3,r6,r11
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r11.u32);
	// bl 0x82347480
	ctx.lr = 0x821ED864;
	sub_82347480(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821ED868:
	// lbzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,32
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 32, ctx.xer);
	// beq cr6,0x821ed880
	if (ctx.cr6.eq) goto loc_821ED880;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// blt cr6,0x821ed868
	if (ctx.cr6.lt) goto loc_821ED868;
loc_821ED880:
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r3,8(r4)
	PPC_STORE_U8(ctx.r4.u32 + 8, ctx.r3.u8);
	// lwz r11,10548(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10548);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821ED89C"))) PPC_WEAK_FUNC(sub_821ED89C);
PPC_FUNC_IMPL(__imp__sub_821ED89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ED8A0"))) PPC_WEAK_FUNC(sub_821ED8A0);
PPC_FUNC_IMPL(__imp__sub_821ED8A0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED8A8"))) PPC_WEAK_FUNC(sub_821ED8A8);
PPC_FUNC_IMPL(__imp__sub_821ED8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821ED8B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r30,-32161
	ctx.r30.s64 = -2107703296;
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r11,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r11.u32);
	// lwz r4,28720(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28720);
	// stb r11,1284(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1284, ctx.r11.u8);
	// stb r11,1285(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1285, ctx.r11.u8);
	// stb r11,1286(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1286, ctx.r11.u8);
	// stb r11,1287(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1287, ctx.r11.u8);
	// bl 0x8259d2a0
	ctx.lr = 0x821ED8E0;
	sub_8259D2A0(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r4,28720(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28720);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8259d2a0
	ctx.lr = 0x821ED8F0;
	sub_8259D2A0(ctx, base);
	// addi r31,r31,768
	ctx.r31.s64 = ctx.r31.s64 + 768;
	// li r29,4
	ctx.r29.s64 = 4;
loc_821ED8F8:
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r4,28720(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28720);
	// addi r3,r31,-512
	ctx.r3.s64 = ctx.r31.s64 + -512;
	// bl 0x8259d2a0
	ctx.lr = 0x821ED908;
	sub_8259D2A0(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,28720(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28720);
	// bl 0x8259d2a0
	ctx.lr = 0x821ED918;
	sub_8259D2A0(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821ed8f8
	if (!ctx.cr6.eq) goto loc_821ED8F8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821ED930"))) PPC_WEAK_FUNC(sub_821ED930);
PPC_FUNC_IMPL(__imp__sub_821ED930) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,214(r11)
	PPC_STORE_U8(ctx.r11.u32 + 214, ctx.r10.u8);
	// stw r10,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r10.u32);
	// stw r10,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r10.u32);
	// stb r10,212(r11)
	PPC_STORE_U8(ctx.r11.u32 + 212, ctx.r10.u8);
	// stb r10,213(r11)
	PPC_STORE_U8(ctx.r11.u32 + 213, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED954"))) PPC_WEAK_FUNC(sub_821ED954);
PPC_FUNC_IMPL(__imp__sub_821ED954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821ED958"))) PPC_WEAK_FUNC(sub_821ED958);
PPC_FUNC_IMPL(__imp__sub_821ED958) {
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
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9ed0
	ctx.lr = 0x821ED970;
	sub_820F9ED0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED990"))) PPC_WEAK_FUNC(sub_821ED990);
PPC_FUNC_IMPL(__imp__sub_821ED990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r10,r11,-24936
	ctx.r10.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ed9e0
	if (ctx.cr6.eq) goto loc_821ED9E0;
	// lis r9,28623
	ctx.r9.s64 = 1875836928;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r7,23485
	ctx.r7.s64 = 1539112960;
	// ori r8,r9,26567
	ctx.r8.u64 = ctx.r9.u64 | 26567;
	// ori r6,r7,31649
	ctx.r6.u64 = ctx.r7.u64 | 31649;
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r8
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x821ed9f0
	if (ctx.cr6.eq) goto loc_821ED9F0;
	// lis r5,29312
	ctx.r5.s64 = 1920991232;
	// lis r3,-14074
	ctx.r3.s64 = -922353664;
	// ori r4,r5,34385
	ctx.r4.u64 = ctx.r5.u64 | 34385;
	// ori r9,r3,59998
	ctx.r9.u64 = ctx.r3.u64 | 59998;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x821ed9e8
	if (ctx.cr6.eq) goto loc_821ED9E8;
loc_821ED9E0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_821ED9E8:
	// lwz r3,8296(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8296);
	// blr 
	return;
loc_821ED9F0:
	// lwz r3,3512(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3512);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821ED9F8"))) PPC_WEAK_FUNC(sub_821ED9F8);
PPC_FUNC_IMPL(__imp__sub_821ED9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,-1452
	ctx.r11.s64 = ctx.r11.s64 + -1452;
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821eda1c
	if (!ctx.cr6.eq) goto loc_821EDA1C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// blr 
	return;
loc_821EDA1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EDA24"))) PPC_WEAK_FUNC(sub_821EDA24);
PPC_FUNC_IMPL(__imp__sub_821EDA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EDA28"))) PPC_WEAK_FUNC(sub_821EDA28);
PPC_FUNC_IMPL(__imp__sub_821EDA28) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 212);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EDA30"))) PPC_WEAK_FUNC(sub_821EDA30);
PPC_FUNC_IMPL(__imp__sub_821EDA30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r3,213(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 213);
	// stb r10,213(r11)
	PPC_STORE_U8(ctx.r11.u32 + 213, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EDA44"))) PPC_WEAK_FUNC(sub_821EDA44);
PPC_FUNC_IMPL(__imp__sub_821EDA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EDA48"))) PPC_WEAK_FUNC(sub_821EDA48);
PPC_FUNC_IMPL(__imp__sub_821EDA48) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// stb r10,212(r11)
	PPC_STORE_U8(ctx.r11.u32 + 212, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EDA5C"))) PPC_WEAK_FUNC(sub_821EDA5C);
PPC_FUNC_IMPL(__imp__sub_821EDA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EDA60"))) PPC_WEAK_FUNC(sub_821EDA60);
PPC_FUNC_IMPL(__imp__sub_821EDA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821EDA68;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821edaa8
	if (ctx.cr6.eq) goto loc_821EDAA8;
	// lwz r5,208(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EDAA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EDAA8:
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r28,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r28.u32);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bne cr6,0x821edae0
	if (!ctx.cr6.eq) goto loc_821EDAE0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821EDACC;
	sub_8210FCF8(ctx, base);
	// addi r30,r31,128
	ctx.r30.s64 = ctx.r31.s64 + 128;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821EDADC;
	sub_82361BD8(ctx, base);
	// b 0x821edaf4
	goto loc_821EDAF4;
loc_821EDAE0:
	// addi r30,r31,128
	ctx.r30.s64 = ctx.r31.s64 + 128;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x821EDAF4;
	sub_8259D2A0(ctx, base);
loc_821EDAF4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821EDAF8:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821edaf8
	if (!ctx.cr6.eq) goto loc_821EDAF8;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// ble cr6,0x821edb30
	if (!ctx.cr6.gt) goto loc_821EDB30;
	// li r11,46
	ctx.r11.s64 = 46;
	// stb r10,151(r31)
	PPC_STORE_U8(ctx.r31.u32 + 151, ctx.r10.u8);
	// stb r11,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r11.u8);
	// stb r11,149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 149, ctx.r11.u8);
	// stb r11,150(r31)
	PPC_STORE_U8(ctx.r31.u32 + 150, ctx.r11.u8);
loc_821EDB30:
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r25,197(r31)
	PPC_STORE_U8(ctx.r31.u32 + 197, ctx.r25.u8);
	// stw r27,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r27.u32);
	// stb r26,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r26.u8);
	// stb r10,213(r31)
	PPC_STORE_U8(ctx.r31.u32 + 213, ctx.r10.u8);
	// stb r8,212(r31)
	PPC_STORE_U8(ctx.r31.u32 + 212, ctx.r8.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EDB50"))) PPC_WEAK_FUNC(sub_821EDB50);
PPC_FUNC_IMPL(__imp__sub_821EDB50) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lwz r5,208(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// stw r9,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r9.u32);
	// stw r9,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EDB84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r4,51
	ctx.r4.s64 = 51;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c5960
	ctx.lr = 0x821EDBA4;
	sub_822C5960(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EDBB4"))) PPC_WEAK_FUNC(sub_821EDBB4);
PPC_FUNC_IMPL(__imp__sub_821EDBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EDBB8"))) PPC_WEAK_FUNC(sub_821EDBB8);
PPC_FUNC_IMPL(__imp__sub_821EDBB8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lwz r5,208(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// stw r9,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r9.u32);
	// stw r9,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821EDBE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c5960
	ctx.lr = 0x821EDC08;
	sub_822C5960(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EDC18"))) PPC_WEAK_FUNC(sub_821EDC18);
PPC_FUNC_IMPL(__imp__sub_821EDC18) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r3,214(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 214);
	// stb r10,214(r11)
	PPC_STORE_U8(ctx.r11.u32 + 214, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EDC2C"))) PPC_WEAK_FUNC(sub_821EDC2C);
PPC_FUNC_IMPL(__imp__sub_821EDC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EDC30"))) PPC_WEAK_FUNC(sub_821EDC30);
PPC_FUNC_IMPL(__imp__sub_821EDC30) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,214(r3)
	PPC_STORE_U8(ctx.r3.u32 + 214, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EDC3C"))) PPC_WEAK_FUNC(sub_821EDC3C);
PPC_FUNC_IMPL(__imp__sub_821EDC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EDC40"))) PPC_WEAK_FUNC(sub_821EDC40);
PPC_FUNC_IMPL(__imp__sub_821EDC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,7520
	ctx.r3.s64 = ctx.r11.s64 + 7520;
	// b 0x8220af38
	sub_8220AF38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EDC50"))) PPC_WEAK_FUNC(sub_821EDC50);
PPC_FUNC_IMPL(__imp__sub_821EDC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,7520
	ctx.r3.s64 = ctx.r11.s64 + 7520;
	// b 0x82215188
	sub_82215188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EDC60"))) PPC_WEAK_FUNC(sub_821EDC60);
PPC_FUNC_IMPL(__imp__sub_821EDC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,7520
	ctx.r3.s64 = ctx.r11.s64 + 7520;
	// b 0x8220b0a8
	sub_8220B0A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EDC70"))) PPC_WEAK_FUNC(sub_821EDC70);
PPC_FUNC_IMPL(__imp__sub_821EDC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,7520
	ctx.r3.s64 = ctx.r11.s64 + 7520;
	// b 0x8220b788
	sub_8220B788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EDC80"))) PPC_WEAK_FUNC(sub_821EDC80);
PPC_FUNC_IMPL(__imp__sub_821EDC80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,7520
	ctx.r3.s64 = ctx.r11.s64 + 7520;
	// b 0x8220b7b8
	sub_8220B7B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EDC90"))) PPC_WEAK_FUNC(sub_821EDC90);
PPC_FUNC_IMPL(__imp__sub_821EDC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821EDC98;
	__savegprlr_25(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r26,r5,24
	ctx.r26.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r25,r26,0,25,25
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x40;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821edcec
	if (ctx.cr6.eq) goto loc_821EDCEC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r31,768
	ctx.r10.s64 = ctx.r31.s64 + 768;
	// addi r11,r11,16156
	ctx.r11.s64 = ctx.r11.s64 + 16156;
	// li r9,16
	ctx.r9.s64 = 16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821EDCC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821edcc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EDCC8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lhz r10,6564(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6564);
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r10,256(r31)
	PPC_STORE_U16(ctx.r31.u32 + 256, ctx.r10.u16);
loc_821EDCEC:
	// rlwinm r8,r26,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r27,r10,-24936
	ctx.r27.s64 = ctx.r10.s64 + -24936;
	// beq cr6,0x821edd64
	if (ctx.cr6.eq) goto loc_821EDD64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bge cr6,0x821edd64
	if (!ctx.cr6.lt) goto loc_821EDD64;
	// addi r6,r30,2
	ctx.r6.s64 = ctx.r30.s64 + 2;
	// lwz r7,1288(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// li r4,128
	ctx.r4.s64 = 128;
	// rlwinm r11,r6,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// addi r3,r27,7520
	ctx.r3.s64 = ctx.r27.s64 + 7520;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r6,12548(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12548);
	// bl 0x82211600
	ctx.lr = 0x821EDD2C;
	sub_82211600(ctx, base);
	// addi r5,r30,6
	ctx.r5.s64 = ctx.r30.s64 + 6;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r10,r5,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// addi r9,r11,16124
	ctx.r9.s64 = ctx.r11.s64 + 16124;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// li r10,30
	ctx.r10.s64 = 30;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821EDD48:
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x821edd48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EDD48;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_821EDD64:
	// rlwinm r10,r26,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821eddd4
	if (ctx.cr6.eq) goto loc_821EDDD4;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bge cr6,0x821eddd4
	if (!ctx.cr6.lt) goto loc_821EDDD4;
	// addi r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 2;
	// lwz r9,1288(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// li r4,128
	ctx.r4.s64 = 128;
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// addi r3,r27,7520
	ctx.r3.s64 = ctx.r27.s64 + 7520;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r6,12444(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12444);
	// bl 0x82211600
	ctx.lr = 0x821EDD9C;
	sub_82211600(ctx, base);
	// addi r7,r30,6
	ctx.r7.s64 = ctx.r30.s64 + 6;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r10,r7,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,16092
	ctx.r11.s64 = ctx.r11.s64 + 16092;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821EDDB8:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821eddb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EDDB8;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
loc_821EDDD4:
	// rlwinm r4,r26,0,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821ede50
	if (ctx.cr6.eq) goto loc_821EDE50;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bge cr6,0x821ede50
	if (!ctx.cr6.lt) goto loc_821EDE50;
	// addi r3,r30,6
	ctx.r3.s64 = ctx.r30.s64 + 6;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r10,r3,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,16056
	ctx.r11.s64 = ctx.r11.s64 + 16056;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// li r9,36
	ctx.r9.s64 = 36;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821EDE08:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821ede08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EDE08;
	// lwz r8,1288(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lhz r3,12552(r8)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12552);
	// bl 0x825a1478
	ctx.lr = 0x821EDE30;
	sub_825A1478(ctx, base);
	// addi r7,r30,2
	ctx.r7.s64 = ctx.r30.s64 + 2;
	// li r5,128
	ctx.r5.s64 = 128;
	// rlwinm r11,r7,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x821EDE48;
	sub_8259D2A0(ctx, base);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
loc_821EDE50:
	// rlwinm r5,r26,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821edf58
	if (ctx.cr6.eq) goto loc_821EDF58;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// bge cr6,0x821edf58
	if (!ctx.cr6.lt) goto loc_821EDF58;
	// addi r4,r29,6
	ctx.r4.s64 = ctx.r29.s64 + 6;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r10,r4,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,16024
	ctx.r11.s64 = ctx.r11.s64 + 16024;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// li r9,30
	ctx.r9.s64 = 30;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821EDE84:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x821ede84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EDE84;
	// lwz r11,1288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// lwz r28,12456(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12456);
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// bne cr6,0x821edee4
	if (!ctx.cr6.eq) goto loc_821EDEE4;
	// addi r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 2;
	// ld r3,12448(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 12448);
	// rlwinm r11,r10,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82347540
	ctx.lr = 0x821EDEC0;
	sub_82347540(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821049b0
	ctx.lr = 0x821EDED4;
	sub_821049B0(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821EDEE0;
	sub_82361BD8(ctx, base);
	// b 0x821edf50
	goto loc_821EDF50;
loc_821EDEE4:
	// ld r30,12448(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 12448);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82347480
	ctx.lr = 0x821EDEF4;
	sub_82347480(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d2a0
	ctx.lr = 0x821EDF04;
	sub_8259D2A0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// bl 0x8210fcf8
	ctx.lr = 0x821EDF1C;
	sub_8210FCF8(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82361bd8
	ctx.lr = 0x821EDF28;
	sub_82361BD8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r8,r29,2
	ctx.r8.s64 = ctx.r29.s64 + 2;
	// addi r6,r11,15616
	ctx.r6.s64 = ctx.r11.s64 + 15616;
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r27,7520
	ctx.r3.s64 = ctx.r27.s64 + 7520;
	// bl 0x82211568
	ctx.lr = 0x821EDF50;
	sub_82211568(ctx, base);
loc_821EDF50:
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
loc_821EDF58:
	// rlwinm r6,r26,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821ee050
	if (ctx.cr6.eq) goto loc_821EE050;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x821ee050
	if (!ctx.cr6.lt) goto loc_821EE050;
	// lwz r5,1288(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// lwz r11,12684(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12684);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821edfe8
	if (ctx.cr6.lt) goto loc_821EDFE8;
	// bne cr6,0x821ee048
	if (!ctx.cr6.eq) goto loc_821EE048;
	// addi r4,r10,6
	ctx.r4.s64 = ctx.r10.s64 + 6;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r9,r4,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// li r8,27
	ctx.r8.s64 = 27;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_821EDFA0:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r3,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x821edfa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EDFA0;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,15980
	ctx.r11.s64 = ctx.r11.s64 + 15980;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// li r8,14
	ctx.r8.s64 = 14;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_821EDFD0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x821edfd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EDFD0;
	// b 0x821ee048
	goto loc_821EE048;
loc_821EDFE8:
	// addi r7,r10,6
	ctx.r7.s64 = ctx.r10.s64 + 6;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// li r8,27
	ctx.r8.s64 = 27;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_821EE004:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r6,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x821ee004
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EE004;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r9,r5,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,15964
	ctx.r11.s64 = ctx.r11.s64 + 15964;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// li r8,13
	ctx.r8.s64 = 13;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_821EE034:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x821ee034
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EE034;
loc_821EE048:
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_821EE050:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bge cr6,0x821ee0c4
	if (!ctx.cr6.lt) goto loc_821EE0C4;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r8,28720(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28720);
loc_821EE064:
	// addi r10,r7,6
	ctx.r10.s64 = ctx.r7.s64 + 6;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r9,r10,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_821EE078:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821ee078
	if (!ctx.cr6.eq) goto loc_821EE078;
	// addi r5,r7,2
	ctx.r5.s64 = ctx.r7.s64 + 2;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r4,r5,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// subf r10,r8,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r8.s64;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_821EE0A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821ee0a0
	if (!ctx.cr6.eq) goto loc_821EE0A0;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// blt cr6,0x821ee064
	if (ctx.cr6.lt) goto loc_821EE064;
loc_821EE0C4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x821ee0e0
	if (!ctx.cr6.eq) goto loc_821EE0E0;
	// lwz r11,1288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// addi r3,r11,12476
	ctx.r3.s64 = ctx.r11.s64 + 12476;
	// bl 0x82361bd8
	ctx.lr = 0x821EE0E0;
	sub_82361BD8(ctx, base);
loc_821EE0E0:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EE0E8"))) PPC_WEAK_FUNC(sub_821EE0E8);
PPC_FUNC_IMPL(__imp__sub_821EE0E8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,4964
	ctx.r3.s64 = ctx.r11.s64 + 4964;
	// bl 0x82119940
	ctx.lr = 0x821EE108;
	sub_82119940(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// stb r10,8026(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8026, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE128"))) PPC_WEAK_FUNC(sub_821EE128);
PPC_FUNC_IMPL(__imp__sub_821EE128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,7520
	ctx.r3.s64 = ctx.r11.s64 + 7520;
	// b 0x8220ae58
	sub_8220AE58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EE138"))) PPC_WEAK_FUNC(sub_821EE138);
PPC_FUNC_IMPL(__imp__sub_821EE138) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lbz r3,8026(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8026);
	// stb r9,8026(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8026, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE150"))) PPC_WEAK_FUNC(sub_821EE150);
PPC_FUNC_IMPL(__imp__sub_821EE150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,7520
	ctx.r3.s64 = ctx.r11.s64 + 7520;
	// b 0x8220aed8
	sub_8220AED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EE160"))) PPC_WEAK_FUNC(sub_821EE160);
PPC_FUNC_IMPL(__imp__sub_821EE160) {
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
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1452
	ctx.r3.s64 = ctx.r11.s64 + -1452;
	// bl 0x820f9d10
	ctx.lr = 0x821EE178;
	sub_820F9D10(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x821ee188
	if (ctx.cr6.eq) goto loc_821EE188;
	// li r3,1
	ctx.r3.s64 = 1;
loc_821EE188:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE198"))) PPC_WEAK_FUNC(sub_821EE198);
PPC_FUNC_IMPL(__imp__sub_821EE198) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE1AC"))) PPC_WEAK_FUNC(sub_821EE1AC);
PPC_FUNC_IMPL(__imp__sub_821EE1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EE1B0"))) PPC_WEAK_FUNC(sub_821EE1B0);
PPC_FUNC_IMPL(__imp__sub_821EE1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821EE1B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,26384
	ctx.r31.s64 = ctx.r11.s64 + 26384;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x821EE1F0;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x821EE200;
	sub_82361D08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x821EE214;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x821EE224;
	sub_82361D08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x821EE238;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x821EE248;
	sub_82361D08(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ee258
	if (!ctx.cr6.eq) goto loc_821EE258;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_821EE258:
	// lwz r6,236(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821ee268
	if (!ctx.cr6.eq) goto loc_821EE268;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
loc_821EE268:
	// lwz r5,300(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821ee278
	if (!ctx.cr6.eq) goto loc_821EE278;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
loc_821EE278:
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x821EE290;
	sub_8236B2F8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EE298"))) PPC_WEAK_FUNC(sub_821EE298);
PPC_FUNC_IMPL(__imp__sub_821EE298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x821EE2A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,26384
	ctx.r31.s64 = ctx.r11.s64 + 26384;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r30.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x821EE2DC;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x821EE2EC;
	sub_82361D08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x821EE300;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x821EE310;
	sub_82361D08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x821EE324;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x821EE334;
	sub_82361D08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x821EE348;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x821EE358;
	sub_82361D08(ctx, base);
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ee368
	if (!ctx.cr6.eq) goto loc_821EE368;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_821EE368:
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821ee378
	if (!ctx.cr6.eq) goto loc_821EE378;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
loc_821EE378:
	// lwz r6,236(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821ee388
	if (!ctx.cr6.eq) goto loc_821EE388;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
loc_821EE388:
	// lwz r5,364(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821ee398
	if (!ctx.cr6.eq) goto loc_821EE398;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
loc_821EE398:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x821EE3AC;
	sub_8236B2F8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EE3B4"))) PPC_WEAK_FUNC(sub_821EE3B4);
PPC_FUNC_IMPL(__imp__sub_821EE3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EE3B8"))) PPC_WEAK_FUNC(sub_821EE3B8);
PPC_FUNC_IMPL(__imp__sub_821EE3B8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821ee400
	if (!ctx.cr6.eq) goto loc_821EE400;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821ee400
	if (!ctx.cr6.gt) goto loc_821EE400;
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
loc_821EE3D8:
	// lwz r8,-24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x821ee3f0
	if (!ctx.cr6.eq) goto loc_821EE3F0;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821ee408
	if (ctx.cr6.eq) goto loc_821EE408;
loc_821EE3F0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821ee3d8
	if (ctx.cr6.lt) goto loc_821EE3D8;
loc_821EE400:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821EE408:
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,45(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 45);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE418"))) PPC_WEAK_FUNC(sub_821EE418);
PPC_FUNC_IMPL(__imp__sub_821EE418) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bne cr6,0x821ee440
	if (!ctx.cr6.eq) goto loc_821EE440;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_821EE440:
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
	// bl 0x8236b2f8
	ctx.lr = 0x821EE458;
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

__attribute__((alias("__imp__sub_821EE468"))) PPC_WEAK_FUNC(sub_821EE468);
PPC_FUNC_IMPL(__imp__sub_821EE468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821EE470;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,26384
	ctx.r31.s64 = ctx.r11.s64 + 26384;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r29.u32);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x821EE4A8;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x821EE4B8;
	sub_82361D08(ctx, base);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d1b0
	ctx.lr = 0x821EE4D0;
	sub_8259D1B0(ctx, base);
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361d08
	ctx.lr = 0x821EE4E0;
	sub_82361D08(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ee4f0
	if (!ctx.cr6.eq) goto loc_821EE4F0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_821EE4F0:
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821ee500
	if (!ctx.cr6.eq) goto loc_821EE500;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_821EE500:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8236b2f8
	ctx.lr = 0x821EE51C;
	sub_8236B2F8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EE524"))) PPC_WEAK_FUNC(sub_821EE524);
PPC_FUNC_IMPL(__imp__sub_821EE524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EE528"))) PPC_WEAK_FUNC(sub_821EE528);
PPC_FUNC_IMPL(__imp__sub_821EE528) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 196);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ee540
	if (!ctx.cr6.eq) goto loc_821EE540;
	// blr 
	return;
loc_821EE540:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r8,1
	ctx.r8.s64 = 1;
loc_821EE558:
	// lwz r7,-24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x821ee590
	if (ctx.cr6.eq) goto loc_821EE590;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821ee590
	if (!ctx.cr6.eq) goto loc_821EE590;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821ee590
	if (!ctx.cr6.eq) goto loc_821EE590;
	// lwz r10,-20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x821ee590
	if (ctx.cr6.eq) goto loc_821EE590;
	// slw r4,r8,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// or r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 | ctx.r3.u64;
loc_821EE590:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ee558
	if (!ctx.cr6.eq) goto loc_821EE558;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EE5A4"))) PPC_WEAK_FUNC(sub_821EE5A4);
PPC_FUNC_IMPL(__imp__sub_821EE5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EE5A8"))) PPC_WEAK_FUNC(sub_821EE5A8);
PPC_FUNC_IMPL(__imp__sub_821EE5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821EE5B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821EE5CC;
	sub_8210FCF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82361f20
	ctx.lr = 0x821EE5D4;
	sub_82361F20(ctx, base);
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ee6dc
	if (!ctx.cr6.gt) goto loc_821EE6DC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821ee6c4
	if (ctx.cr6.gt) goto loc_821EE6C4;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-6652
	ctx.r12.s64 = ctx.r12.s64 + -6652;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821EE614;
	case 1:
		goto loc_821EE640;
	case 2:
		goto loc_821EE670;
	case 3:
		goto loc_821EE6A4;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-6636(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6636);
	// lwz r16,-6592(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6592);
	// lwz r16,-6544(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6544);
	// lwz r16,-6492(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6492);
loc_821EE614:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8210d9f8
	ctx.lr = 0x821EE628;
	sub_8210D9F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821EE638;
	sub_82361BD8(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821EE640:
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82191220
	ctx.lr = 0x821EE658;
	sub_82191220(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821EE668;
	sub_82361BD8(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821EE670:
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x821ee1b0
	ctx.lr = 0x821EE68C;
	sub_821EE1B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821EE69C;
	sub_82361BD8(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821EE6A4:
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x821ee298
	ctx.lr = 0x821EE6C4;
	sub_821EE298(ctx, base);
loc_821EE6C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821EE6D4;
	sub_82361BD8(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821EE6DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821EE6EC;
	sub_82361BD8(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EE6F4"))) PPC_WEAK_FUNC(sub_821EE6F4);
PPC_FUNC_IMPL(__imp__sub_821EE6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EE6F8"))) PPC_WEAK_FUNC(sub_821EE6F8);
PPC_FUNC_IMPL(__imp__sub_821EE6F8) {
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
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ee740
	if (ctx.cr6.eq) goto loc_821EE740;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,532(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r10.u32);
	// stw r10,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EE73C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821ee754
	goto loc_821EE754;
loc_821EE740:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82203858
	ctx.lr = 0x821EE754;
	sub_82203858(ctx, base);
loc_821EE754:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6a30
	ctx.lr = 0x821EE760;
	sub_821E6A30(ctx, base);
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

__attribute__((alias("__imp__sub_821EE778"))) PPC_WEAK_FUNC(sub_821EE778);
PPC_FUNC_IMPL(__imp__sub_821EE778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821EE780;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-32560
	ctx.r11.s64 = ctx.r11.s64 + -32560;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,10700(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ee8c8
	if (!ctx.cr6.eq) goto loc_821EE8C8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821e6c68
	ctx.lr = 0x821EE7AC;
	sub_821E6C68(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,28968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28968);
	// subf r3,r7,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r7.s64;
loc_821EE7C4:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r4,r11,-1416
	ctx.r4.s64 = ctx.r11.s64 + -1416;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x821ee8d0
	if (ctx.cr6.eq) goto loc_821EE8D0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// divwu r11,r10,r7
	ctx.r11.u32 = ctx.r10.u32 / ctx.r7.u32;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_821EE818:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821ee838
	if (ctx.cr6.lt) goto loc_821EE838;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// blt cr6,0x821ee818
	if (ctx.cr6.lt) goto loc_821EE818;
	// b 0x821ee840
	goto loc_821EE840;
loc_821EE838:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// li r5,1
	ctx.r5.s64 = 1;
loc_821EE840:
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ee7c4
	if (ctx.cr6.eq) goto loc_821EE7C4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ee870
	if (!ctx.cr6.eq) goto loc_821EE870;
loc_821EE854:
	// lis r6,8530
	ctx.r6.s64 = 559022080;
	// lis r8,-8531
	ctx.r8.s64 = -559087616;
	// ori r5,r6,16720
	ctx.r5.u64 = ctx.r6.u64 | 16720;
	// ori r7,r8,48815
	ctx.r7.u64 = ctx.r8.u64 | 48815;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
loc_821EE870:
	// addi r27,r4,396
	ctx.r27.s64 = ctx.r4.s64 + 396;
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,10584
	ctx.r30.s64 = ctx.r11.s64 + 10584;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwzx r29,r28,r27
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r4,r4,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821EE8A0;
	sub_8210FCF8(ctx, base);
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821ee8b8
	if (ctx.cr6.lt) goto loc_821EE8B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EE8B8:
	// li r5,512
	ctx.r5.s64 = 512;
	// stwx r11,r28,r27
	PPC_STORE_U32(ctx.r28.u32 + ctx.r27.u32, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821EE8C8;
	sub_82361BD8(ctx, base);
loc_821EE8C8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_821EE8D0:
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r11,r4,396
	ctx.r11.s64 = ctx.r4.s64 + 396;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821EE8DC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821ee8dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EE8DC;
	// b 0x821ee854
	goto loc_821EE854;
}

__attribute__((alias("__imp__sub_821EE8EC"))) PPC_WEAK_FUNC(sub_821EE8EC);
PPC_FUNC_IMPL(__imp__sub_821EE8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EE8F0"))) PPC_WEAK_FUNC(sub_821EE8F0);
PPC_FUNC_IMPL(__imp__sub_821EE8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821EE8F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,8424
	ctx.r3.s64 = ctx.r30.s64 + 8424;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82103ed8
	ctx.lr = 0x821EE918;
	sub_82103ED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821eea48
	if (!ctx.cr6.eq) goto loc_821EEA48;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821eea48
	if (ctx.cr6.eq) goto loc_821EEA48;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ee9e4
	if (!ctx.cr6.eq) goto loc_821EE9E4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,8424
	ctx.r3.s64 = ctx.r30.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EE944;
	sub_82103ED8(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8259d2a0
	ctx.lr = 0x821EE954;
	sub_8259D2A0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821EE95C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ee95c
	if (!ctx.cr6.eq) goto loc_821EE95C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// ble cr6,0x821ee998
	if (!ctx.cr6.gt) goto loc_821EE998;
	// li r11,46
	ctx.r11.s64 = 46;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// stb r7,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r7.u8);
loc_821EE998:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15532
	ctx.r4.s64 = ctx.r11.s64 + 15532;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821EE9B4;
	sub_8210FCF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x8212e7a0
	ctx.lr = 0x821EE9C8;
	sub_8212E7A0(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82361bd8
	ctx.lr = 0x821EE9D8;
	sub_82361BD8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EE9E4:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821eea5c
	if (!ctx.cr6.eq) goto loc_821EEA5C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,8424
	ctx.r3.s64 = ctx.r30.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EE9FC;
	sub_82103ED8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,16204
	ctx.r4.s64 = ctx.r11.s64 + 16204;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821EEA18;
	sub_8210FCF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x8212e7a0
	ctx.lr = 0x821EEA2C;
	sub_8212E7A0(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82361bd8
	ctx.lr = 0x821EEA3C;
	sub_82361BD8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EEA48:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r11,16172
	ctx.r4.s64 = ctx.r11.s64 + 16172;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x821EEA5C;
	sub_8259D2A0(ctx, base);
loc_821EEA5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EEA68"))) PPC_WEAK_FUNC(sub_821EEA68);
PPC_FUNC_IMPL(__imp__sub_821EEA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821EEA70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82361330
	ctx.lr = 0x821EEA94;
	sub_82361330(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8259cce0
	ctx.lr = 0x821EEA9C;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821eebb0
	if (ctx.cr6.eq) goto loc_821EEBB0;
	// cmplwi cr6,r29,17
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 17, ctx.xer);
	// bgt cr6,0x821eed70
	if (ctx.cr6.gt) goto loc_821EED70;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-5436
	ctx.r12.s64 = ctx.r12.s64 + -5436;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r29.u64) {
	case 0:
		goto loc_821EEB0C;
	case 1:
		goto loc_821EEB90;
	case 2:
		goto loc_821EEBBC;
	case 3:
		goto loc_821EEBBC;
	case 4:
		goto loc_821EEB84;
	case 5:
		goto loc_821EEBD0;
	case 6:
		goto loc_821EEC4C;
	case 7:
		goto loc_821EEC6C;
	case 8:
		goto loc_821EECEC;
	case 9:
		goto loc_821EED00;
	case 10:
		goto loc_821EED00;
	case 11:
		goto loc_821EED14;
	case 12:
		goto loc_821EED60;
	case 13:
		goto loc_821EED7C;
	case 14:
		goto loc_821EEDF8;
	case 15:
		goto loc_821EEEAC;
	case 16:
		goto loc_821EEF18;
	case 17:
		goto loc_821EEB84;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-5364(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5364);
	// lwz r16,-5232(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5232);
	// lwz r16,-5188(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5188);
	// lwz r16,-5188(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5188);
	// lwz r16,-5244(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5244);
	// lwz r16,-5168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5168);
	// lwz r16,-5044(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5044);
	// lwz r16,-5012(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5012);
	// lwz r16,-4884(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4884);
	// lwz r16,-4864(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4864);
	// lwz r16,-4864(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4864);
	// lwz r16,-4844(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4844);
	// lwz r16,-4768(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4768);
	// lwz r16,-4740(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4740);
	// lwz r16,-4616(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4616);
	// lwz r16,-4436(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4436);
	// lwz r16,-4328(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4328);
	// lwz r16,-5244(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5244);
loc_821EEB0C:
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EEB1C;
	sub_8236A0C8(ctx, base);
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EEB24;
	sub_82103ED8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EEB38;
	sub_8236A0C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365c40
	ctx.lr = 0x821EEB44;
	sub_82365C40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821eeb54
	if (!ctx.cr6.eq) goto loc_821EEB54;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EEB54:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eed70
	if (!ctx.cr6.eq) goto loc_821EED70;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821eed70
	if (!ctx.cr6.eq) goto loc_821EED70;
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821eed70
	if (ctx.cr6.eq) goto loc_821EED70;
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821eed70
	if (ctx.cr6.eq) goto loc_821EED70;
loc_821EEB84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EEB90:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EEBA0;
	sub_8236A0C8(ctx, base);
loc_821EEBA0:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_821EEBA4:
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_821EEBA8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821eed74
	if (ctx.cr6.eq) goto loc_821EED74;
loc_821EEBB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EEBBC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EEBCC;
	sub_8236A0C8(ctx, base);
	// b 0x821eeba0
	goto loc_821EEBA0;
loc_821EEBD0:
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EEBE0;
	sub_82103ED8(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EEBF0;
	sub_8236A0C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EEC04;
	sub_8236A0C8(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8672
	ctx.r3.s64 = ctx.r31.s64 + 8672;
	// bl 0x8221cdc8
	ctx.lr = 0x821EEC14;
	sub_8221CDC8(ctx, base);
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821eeba4
	if (!ctx.cr6.eq) goto loc_821EEBA4;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eeba4
	if (!ctx.cr6.eq) goto loc_821EEBA4;
	// lbz r7,83(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821eec44
	if (!ctx.cr6.eq) goto loc_821EEC44;
	// lbz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821eeba4
	if (ctx.cr6.eq) goto loc_821EEBA4;
loc_821EEC44:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821eeba8
	goto loc_821EEBA8;
loc_821EEC4C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EEC58;
	sub_82103ED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821eed70
	if (!ctx.cr6.gt) goto loc_821EED70;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EEC6C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EEC7C;
	sub_8236A0C8(ctx, base);
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EEC8C;
	sub_8236A0C8(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EEC9C;
	sub_8236A0C8(ctx, base);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EECAC;
	sub_8236A0C8(ctx, base);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821eeba4
	if (!ctx.cr6.eq) goto loc_821EEBA4;
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eeba4
	if (!ctx.cr6.eq) goto loc_821EEBA4;
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821eeba4
	if (!ctx.cr6.eq) goto loc_821EEBA4;
	// lbz r5,81(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821eeba4
	if (!ctx.cr6.eq) goto loc_821EEBA4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EECEC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EECFC;
	sub_8236A0C8(ctx, base);
	// b 0x821eeba0
	goto loc_821EEBA0;
loc_821EED00:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EED10;
	sub_8236A0C8(ctx, base);
	// b 0x821eeba0
	goto loc_821EEBA0;
loc_821EED14:
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EED24;
	sub_8236A0C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EED38;
	sub_82103ED8(ctx, base);
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821eeba4
	if (!ctx.cr6.eq) goto loc_821EEBA4;
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eeba4
	if (!ctx.cr6.eq) goto loc_821EEBA4;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// beq cr6,0x821eed74
	if (ctx.cr6.eq) goto loc_821EED74;
	// b 0x821eeba8
	goto loc_821EEBA8;
loc_821EED60:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EED70;
	sub_82103ED8(ctx, base);
loc_821EED70:
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_821EED74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EED7C:
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EED8C;
	sub_8236A0C8(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EED9C;
	sub_8236A0C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EEDB0;
	sub_8236A0C8(ctx, base);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EEDC0;
	sub_8236A0C8(ctx, base);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821eeba4
	if (!ctx.cr6.eq) goto loc_821EEBA4;
	// lbz r6,83(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821eeba4
	if (!ctx.cr6.eq) goto loc_821EEBA4;
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821eedf0
	if (!ctx.cr6.eq) goto loc_821EEDF0;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821eeba4
	if (ctx.cr6.eq) goto loc_821EEBA4;
loc_821EEDF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821eeba8
	goto loc_821EEBA8;
loc_821EEDF8:
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82368400
	ctx.lr = 0x821EEE00;
	sub_82368400(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821eee24
	if (ctx.cr6.eq) goto loc_821EEE24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221c328
	ctx.lr = 0x821EEE14;
	sub_8221C328(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eee28
	if (!ctx.cr6.eq) goto loc_821EEE28;
loc_821EEE24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EEE28:
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82368400
	ctx.lr = 0x821EEE34;
	sub_82368400(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821eee58
	if (!ctx.cr6.eq) goto loc_821EEE58;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82369aa8
	ctx.lr = 0x821EEE48;
	sub_82369AA8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821eee5c
	if (!ctx.cr6.eq) goto loc_821EEE5C;
loc_821EEE58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EEE5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82365c40
	ctx.lr = 0x821EEE6C;
	sub_82365C40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821eee7c
	if (!ctx.cr6.eq) goto loc_821EEE7C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EEE7C:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821eed70
	if (ctx.cr6.eq) goto loc_821EED70;
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821eeea0
	if (!ctx.cr6.eq) goto loc_821EEEA0;
	// clrlwi r3,r30,24
	ctx.r3.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eed70
	if (ctx.cr6.eq) goto loc_821EED70;
loc_821EEEA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EEEAC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365c40
	ctx.lr = 0x821EEEB8;
	sub_82365C40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EEECC;
	sub_82103ED8(ctx, base);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eed70
	if (!ctx.cr6.eq) goto loc_821EED70;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821eed70
	if (ctx.cr6.eq) goto loc_821EED70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823475c0
	ctx.lr = 0x821EEEE8;
	sub_823475C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2472
	ctx.r3.s64 = ctx.r31.s64 + 2472;
	// bl 0x821ee3b8
	ctx.lr = 0x821EEEF4;
	sub_821EE3B8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eed70
	if (!ctx.cr6.eq) goto loc_821EED70;
	// lbz r8,1580(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1580);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821eed70
	if (!ctx.cr6.eq) goto loc_821EED70;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EEF18:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365c40
	ctx.lr = 0x821EEF24;
	sub_82365C40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EEF38;
	sub_82103ED8(ctx, base);
	// lbz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821eed70
	if (!ctx.cr6.eq) goto loc_821EED70;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821eed70
	if (ctx.cr6.eq) goto loc_821EED70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823475c0
	ctx.lr = 0x821EEF54;
	sub_823475C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2472
	ctx.r3.s64 = ctx.r31.s64 + 2472;
	// bl 0x821ee3b8
	ctx.lr = 0x821EEF60;
	sub_821EE3B8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821eed70
	if (ctx.cr6.eq) goto loc_821EED70;
	// lbz r4,1580(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1580);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821eed70
	if (!ctx.cr6.eq) goto loc_821EED70;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EEF84"))) PPC_WEAK_FUNC(sub_821EEF84);
PPC_FUNC_IMPL(__imp__sub_821EEF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EEF88"))) PPC_WEAK_FUNC(sub_821EEF88);
PPC_FUNC_IMPL(__imp__sub_821EEF88) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,13
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 13, ctx.xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bgt cr6,0x821ef230
	if (ctx.cr6.gt) goto loc_821EF230;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-4152
	ctx.r12.s64 = ctx.r12.s64 + -4152;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u64) {
	case 0:
		goto loc_821EF000;
	case 1:
		goto loc_821EF030;
	case 2:
		goto loc_821EF04C;
	case 3:
		goto loc_821EF0A0;
	case 4:
		goto loc_821EF0BC;
	case 5:
		goto loc_821EF0D8;
	case 6:
		goto loc_821EF0F4;
	case 7:
		goto loc_821EF110;
	case 8:
		goto loc_821EF140;
	case 9:
		goto loc_821EF230;
	case 10:
		goto loc_821EF1B0;
	case 11:
		goto loc_821EF184;
	case 12:
		goto loc_821EF1F0;
	case 13:
		goto loc_821EF20C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-4096(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4096);
	// lwz r16,-4048(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4048);
	// lwz r16,-4020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4020);
	// lwz r16,-3936(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3936);
	// lwz r16,-3908(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3908);
	// lwz r16,-3880(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3880);
	// lwz r16,-3852(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3852);
	// lwz r16,-3824(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3824);
	// lwz r16,-3776(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3776);
	// lwz r16,-3536(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3536);
	// lwz r16,-3664(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3664);
	// lwz r16,-3708(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3708);
	// lwz r16,-3600(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3600);
	// lwz r16,-3572(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3572);
loc_821EF000:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EF018;
	sub_82103ED8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821ef224
	if (ctx.cr6.eq) goto loc_821EF224;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// b 0x821ef224
	goto loc_821EF224;
loc_821EF030:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x82369a00
	ctx.lr = 0x821EF044;
	sub_82369A00(ctx, base);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// b 0x821ef230
	goto loc_821EF230;
loc_821EF04C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x82369b48
	ctx.lr = 0x821EF05C;
	sub_82369B48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ef230
	if (ctx.cr6.eq) goto loc_821EF230;
loc_821EF068:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// beq cr6,0x821ef08c
	if (ctx.cr6.eq) goto loc_821EF08C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821ef068
	if (ctx.cr6.eq) goto loc_821EF068;
loc_821EF08C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821ef230
	if (!ctx.cr6.eq) goto loc_821EF230;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// b 0x821ef230
	goto loc_821EF230;
loc_821EF0A0:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EF0B8;
	sub_8236A0C8(ctx, base);
	// b 0x821ef224
	goto loc_821EF224;
loc_821EF0BC:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EF0D4;
	sub_8236A0C8(ctx, base);
	// b 0x821ef224
	goto loc_821EF224;
loc_821EF0D8:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EF0F0;
	sub_8236A0C8(ctx, base);
	// b 0x821ef224
	goto loc_821EF224;
loc_821EF0F4:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x8236a0c8
	ctx.lr = 0x821EF10C;
	sub_8236A0C8(ctx, base);
	// b 0x821ef224
	goto loc_821EF224;
loc_821EF110:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x8236a0d8
	ctx.lr = 0x821EF128;
	sub_8236A0D8(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x821ef224
	if (!ctx.cr6.eq) goto loc_821EF224;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// b 0x821ef224
	goto loc_821EF224;
loc_821EF140:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365c40
	ctx.lr = 0x821EF154;
	sub_82365C40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef230
	if (ctx.cr6.eq) goto loc_821EF230;
	// bl 0x823475c0
	ctx.lr = 0x821EF160;
	sub_823475C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,2472
	ctx.r3.s64 = ctx.r30.s64 + 2472;
	// bl 0x821ee3b8
	ctx.lr = 0x821EF16C;
	sub_821EE3B8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821ef230
	if (ctx.cr6.eq) goto loc_821EF230;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// b 0x821ef230
	goto loc_821EF230;
loc_821EF184:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EF198;
	sub_82103ED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x821ef1a8
	if (ctx.cr6.gt) goto loc_821EF1A8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EF1A8:
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x821ef230
	goto loc_821EF230;
loc_821EF1B0:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365c40
	ctx.lr = 0x821EF1C4;
	sub_82365C40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef230
	if (ctx.cr6.eq) goto loc_821EF230;
	// bl 0x823475c0
	ctx.lr = 0x821EF1D0;
	sub_823475C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,2472
	ctx.r3.s64 = ctx.r30.s64 + 2472;
	// bl 0x821911c8
	ctx.lr = 0x821EF1DC;
	sub_821911C8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821ef230
	if (!ctx.cr6.eq) goto loc_821EF230;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// b 0x821ef230
	goto loc_821EF230;
loc_821EF1F0:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EF208;
	sub_82103ED8(ctx, base);
	// b 0x821ef224
	goto loc_821EF224;
loc_821EF20C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EF224;
	sub_82103ED8(ctx, base);
loc_821EF224:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x821ef234
	if (!ctx.cr6.eq) goto loc_821EF234;
loc_821EF230:
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_821EF234:
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

__attribute__((alias("__imp__sub_821EF24C"))) PPC_WEAK_FUNC(sub_821EF24C);
PPC_FUNC_IMPL(__imp__sub_821EF24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF250"))) PPC_WEAK_FUNC(sub_821EF250);
PPC_FUNC_IMPL(__imp__sub_821EF250) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821ef2d4
	if (!ctx.cr6.eq) goto loc_821EF2D4;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r5,31112(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31112);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r10,28608
	ctx.r6.s64 = ctx.r10.s64 + 28608;
	// addi r4,r31,31117
	ctx.r4.s64 = ctx.r31.s64 + 31117;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x8236f148
	ctx.lr = 0x821EF294;
	sub_8236F148(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r11,10940
	ctx.r5.s64 = ctx.r11.s64 + 10940;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,3672
	ctx.r4.s64 = ctx.r11.s64 + 3672;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821e6928
	ctx.lr = 0x821EF2D0;
	sub_821E6928(ctx, base);
	// stw r30,31100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31100, ctx.r30.u32);
loc_821EF2D4:
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

__attribute__((alias("__imp__sub_821EF2EC"))) PPC_WEAK_FUNC(sub_821EF2EC);
PPC_FUNC_IMPL(__imp__sub_821EF2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF2F0"))) PPC_WEAK_FUNC(sub_821EF2F0);
PPC_FUNC_IMPL(__imp__sub_821EF2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821EF2F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x821ef3c4
	if (!ctx.cr6.eq) goto loc_821EF3C4;
	// lwz r11,31104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31104);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x821ef38c
	if (ctx.cr6.eq) goto loc_821EF38C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821ef38c
	if (ctx.cr6.eq) goto loc_821EF38C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821ef38c
	if (ctx.cr6.eq) goto loc_821EF38C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,10688
	ctx.r10.s64 = ctx.r10.s64 + 10688;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lwzx r5,r8,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r7,-17512
	ctx.r7.s64 = ctx.r7.s64 + -17512;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821e6928
	ctx.lr = 0x821EF37C;
	sub_821E6928(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r4,31100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31100, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EF38C:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r10,r11,10416
	ctx.r10.s64 = ctx.r11.s64 + 10416;
	// lbz r5,538(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 538);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821ef3b4
	if (!ctx.cr6.eq) goto loc_821EF3B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 520, ctx.r11.u32);
	// stw r11,532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 532, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,537(r10)
	PPC_STORE_U8(ctx.r10.u32 + 537, ctx.r11.u8);
loc_821EF3B4:
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r4,31100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31100, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EF3C4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,31104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31104);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// addi r10,r11,10688
	ctx.r10.s64 = ctx.r11.s64 + 10688;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r7,-17512
	ctx.r7.s64 = ctx.r7.s64 + -17512;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwzx r5,r5,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// bl 0x821e6928
	ctx.lr = 0x821EF41C;
	sub_821E6928(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r30,31108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31108, ctx.r30.u32);
	// stw r4,31100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31100, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EF430"))) PPC_WEAK_FUNC(sub_821EF430);
PPC_FUNC_IMPL(__imp__sub_821EF430) {
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
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r10,-3344
	ctx.r6.s64 = ctx.r10.s64 + -3344;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// stw r9,31104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31104, ctx.r9.u32);
	// bl 0x82103ed8
	ctx.lr = 0x821EF46C;
	sub_82103ED8(ctx, base);
	// lwz r5,31104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31104);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r9,12
	ctx.r9.s64 = 12;
	// beq cr6,0x821ef4d4
	if (ctx.cr6.eq) goto loc_821EF4D4;
	// addi r10,r11,10688
	ctx.r10.s64 = ctx.r11.s64 + 10688;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r7,-17512
	ctx.r7.s64 = ctx.r7.s64 + -17512;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwzx r5,r11,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x821e6928
	ctx.lr = 0x821EF4CC;
	sub_821E6928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821ef51c
	goto loc_821EF51C;
loc_821EF4D4:
	// addi r31,r11,10688
	ctx.r31.s64 = ctx.r11.s64 + 10688;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x821e6928
	ctx.lr = 0x821EF518;
	sub_821E6928(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821EF51C:
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

__attribute__((alias("__imp__sub_821EF534"))) PPC_WEAK_FUNC(sub_821EF534);
PPC_FUNC_IMPL(__imp__sub_821EF534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF538"))) PPC_WEAK_FUNC(sub_821EF538);
PPC_FUNC_IMPL(__imp__sub_821EF538) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,31133(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 31133);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ef5fc
	if (ctx.cr6.eq) goto loc_821EF5FC;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EF56C;
	sub_82103ED8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ef5a4
	if (ctx.cr6.eq) goto loc_821EF5A4;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,10416
	ctx.r11.s64 = ctx.r11.s64 + 10416;
	// lbz r9,538(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 538);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ef5fc
	if (!ctx.cr6.eq) goto loc_821EF5FC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 520, ctx.r10.u32);
	// stw r10,532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 532, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,537(r11)
	PPC_STORE_U8(ctx.r11.u32 + 537, ctx.r10.u8);
	// b 0x821ef5fc
	goto loc_821EF5FC;
loc_821EF5A4:
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EF5AC;
	sub_82103ED8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ef5fc
	if (!ctx.cr6.eq) goto loc_821EF5FC;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,16232
	ctx.r5.s64 = ctx.r10.s64 + 16232;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r11,29288
	ctx.r7.s64 = ctx.r11.s64 + 29288;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821e6928
	ctx.lr = 0x821EF5FC;
	sub_821E6928(ctx, base);
loc_821EF5FC:
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

__attribute__((alias("__imp__sub_821EF614"))) PPC_WEAK_FUNC(sub_821EF614);
PPC_FUNC_IMPL(__imp__sub_821EF614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF618"))) PPC_WEAK_FUNC(sub_821EF618);
PPC_FUNC_IMPL(__imp__sub_821EF618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821EF620;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// beq cr6,0x821ef750
	if (ctx.cr6.eq) goto loc_821EF750;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,31004
	ctx.r9.u64 = ctx.r10.u64 | 31004;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// stbx r11,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u8);
	// bl 0x82368400
	ctx.lr = 0x821EF654;
	sub_82368400(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// addi r28,r11,10416
	ctx.r28.s64 = ctx.r11.s64 + 10416;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x821ef6c0
	if (ctx.cr6.eq) goto loc_821EF6C0;
	// lis r7,3638
	ctx.r7.s64 = 238419968;
	// lis r3,-27583
	ctx.r3.s64 = -1807679488;
	// addi r30,r11,-24936
	ctx.r30.s64 = ctx.r11.s64 + -24936;
	// ori r11,r3,15958
	ctx.r11.u64 = ctx.r3.u64 | 15958;
	// ori r4,r7,32087
	ctx.r4.u64 = ctx.r7.u64 | 32087;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x821EF694;
	sub_820A38E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821fd498
	ctx.lr = 0x821EF6A4;
	sub_821FD498(ctx, base);
	// addi r3,r30,8808
	ctx.r3.s64 = ctx.r30.s64 + 8808;
	// bl 0x82203ca8
	ctx.lr = 0x821EF6AC;
	sub_82203CA8(ctx, base);
	// addi r3,r30,8808
	ctx.r3.s64 = ctx.r30.s64 + 8808;
	// bl 0x822119f8
	ctx.lr = 0x821EF6B4;
	sub_822119F8(ctx, base);
	// addi r3,r30,8808
	ctx.r3.s64 = ctx.r30.s64 + 8808;
	// bl 0x82203c40
	ctx.lr = 0x821EF6BC;
	sub_82203C40(ctx, base);
	// b 0x821ef71c
	goto loc_821EF71C;
loc_821EF6C0:
	// lis r10,3638
	ctx.r10.s64 = 238419968;
	// lis r9,-27583
	ctx.r9.s64 = -1807679488;
	// addi r29,r11,-24936
	ctx.r29.s64 = ctx.r11.s64 + -24936;
	// ori r4,r10,32087
	ctx.r4.u64 = ctx.r10.u64 | 32087;
	// ori r8,r9,15958
	ctx.r8.u64 = ctx.r9.u64 | 15958;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x821EF6E0;
	sub_820A38E8(ctx, base);
	// li r4,50
	ctx.r4.s64 = 50;
	// addi r3,r29,8808
	ctx.r3.s64 = ctx.r29.s64 + 8808;
	// bl 0x82204008
	ctx.lr = 0x821EF6EC;
	sub_82204008(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r11,11032
	ctx.r4.s64 = ctx.r11.s64 + 11032;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821fcb38
	ctx.lr = 0x821EF704;
	sub_821FCB38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82369b48
	ctx.lr = 0x821EF710;
	sub_82369B48(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82361d08
	ctx.lr = 0x821EF71C;
	sub_82361D08(ctx, base);
loc_821EF71C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,31116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 31116, ctx.r10.u8);
	// lbz r7,538(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 538);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821ef744
	if (!ctx.cr6.eq) goto loc_821EF744;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,520(r28)
	PPC_STORE_U32(ctx.r28.u32 + 520, ctx.r11.u32);
	// stw r11,532(r28)
	PPC_STORE_U32(ctx.r28.u32 + 532, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r11,537(r28)
	PPC_STORE_U8(ctx.r28.u32 + 537, ctx.r11.u8);
loc_821EF744:
	// stw r10,31100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31100, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821EF750:
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r5,r6,31004
	ctx.r5.u64 = ctx.r6.u64 | 31004;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// stbx r10,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u8);
	// bl 0x82367a40
	ctx.lr = 0x821EF76C;
	sub_82367A40(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,31104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31104);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,10688
	ctx.r10.s64 = ctx.r10.s64 + 10688;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwzx r5,r11,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r7,r7,28872
	ctx.r7.s64 = ctx.r7.s64 + 28872;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821e6928
	ctx.lr = 0x821EF7C8;
	sub_821E6928(ctx, base);
	// li r10,17
	ctx.r10.s64 = 17;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,31108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31108, ctx.r10.u32);
	// stw r9,31100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31100, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EF7E0"))) PPC_WEAK_FUNC(sub_821EF7E0);
PPC_FUNC_IMPL(__imp__sub_821EF7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821EF7E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821ef8d4
	if (!ctx.cr6.eq) goto loc_821EF8D4;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r29,31117
	ctx.r31.s64 = ctx.r29.s64 + 31117;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365c40
	ctx.lr = 0x821EF810;
	sub_82365C40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef81c
	if (ctx.cr6.eq) goto loc_821EF81C;
	// bl 0x823475c0
	ctx.lr = 0x821EF81C;
	sub_823475C0(ctx, base);
loc_821EF81C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365c40
	ctx.lr = 0x821EF828;
	sub_82365C40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef838
	if (ctx.cr6.eq) goto loc_821EF838;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1580(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1580, ctx.r11.u8);
loc_821EF838:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3344
	ctx.r5.s64 = ctx.r11.s64 + -3344;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,8424
	ctx.r3.s64 = ctx.r30.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EF850;
	sub_82103ED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bne cr6,0x821ef8a8
	if (!ctx.cr6.eq) goto loc_821EF8A8;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r10,3072
	ctx.r5.s64 = ctx.r10.s64 + 3072;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x821e6928
	ctx.lr = 0x821EF894;
	sub_821E6928(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,8424
	ctx.r3.s64 = ctx.r30.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EF8A0;
	sub_82103ED8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EF8A8:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r10,3016
	ctx.r5.s64 = ctx.r10.s64 + 3016;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x821e6928
	ctx.lr = 0x821EF8D4;
	sub_821E6928(ctx, base);
loc_821EF8D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EF8DC"))) PPC_WEAK_FUNC(sub_821EF8DC);
PPC_FUNC_IMPL(__imp__sub_821EF8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EF8E0"))) PPC_WEAK_FUNC(sub_821EF8E0);
PPC_FUNC_IMPL(__imp__sub_821EF8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821EF8E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821ef9d8
	if (!ctx.cr6.eq) goto loc_821EF9D8;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r29,31117
	ctx.r31.s64 = ctx.r29.s64 + 31117;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,8424
	ctx.r3.s64 = ctx.r30.s64 + 8424;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236a0c8
	ctx.lr = 0x821EF914;
	sub_8236A0C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ef948
	if (!ctx.cr6.eq) goto loc_821EF948;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ef948
	if (ctx.cr6.eq) goto loc_821EF948;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3344
	ctx.r5.s64 = ctx.r11.s64 + -3344;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,8424
	ctx.r3.s64 = ctx.r30.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EF940;
	sub_82103ED8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EF948:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-3344
	ctx.r5.s64 = ctx.r11.s64 + -3344;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,8424
	ctx.r3.s64 = ctx.r30.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EF960;
	sub_82103ED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bne cr6,0x821ef9ac
	if (!ctx.cr6.eq) goto loc_821EF9AC;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r10,2900
	ctx.r5.s64 = ctx.r10.s64 + 2900;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x821e6928
	ctx.lr = 0x821EF9A4;
	sub_821E6928(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EF9AC:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r10,2844
	ctx.r5.s64 = ctx.r10.s64 + 2844;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x821e6928
	ctx.lr = 0x821EF9D8;
	sub_821E6928(ctx, base);
loc_821EF9D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EF9E0"))) PPC_WEAK_FUNC(sub_821EF9E0);
PPC_FUNC_IMPL(__imp__sub_821EF9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821EF9E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821EFA04;
	sub_82103ED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821efa94
	if (!ctx.cr6.eq) goto loc_821EFA94;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,16264
	ctx.r4.s64 = ctx.r11.s64 + 16264;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821EFA24;
	sub_8210FCF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,30
	ctx.r5.s64 = 30;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x82361d08
	ctx.lr = 0x821EFA40;
	sub_82361D08(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821efa50
	if (!ctx.cr6.eq) goto loc_821EFA50;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_821EFA50:
	// addi r31,r29,31648
	ctx.r31.s64 = ctx.r29.s64 + 31648;
	// li r9,256
	ctx.r9.s64 = 256;
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
	ctx.lr = 0x821EFA74;
	sub_8236B2F8(ctx, base);
	// addi r30,r29,32160
	ctx.r30.s64 = ctx.r29.s64 + 32160;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821EFA88;
	sub_82361BD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821EFA94:
	// addi r3,r29,32160
	ctx.r3.s64 = ctx.r29.s64 + 32160;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EFAA8"))) PPC_WEAK_FUNC(sub_821EFAA8);
PPC_FUNC_IMPL(__imp__sub_821EFAA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,21048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21048, ctx.r11.u32);
	// bne cr6,0x821efb2c
	if (!ctx.cr6.eq) goto loc_821EFB2C;
	// lwz r8,21052(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21052);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,21040(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21040);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// bl 0x8237e3a8
	ctx.lr = 0x821EFAF0;
	sub_8237E3A8(ctx, base);
	// lwz r11,21052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21052);
	// lwz r6,21056(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21056);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// stw r11,21052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21052, ctx.r11.u32);
	// blt cr6,0x821efb14
	if (ctx.cr6.lt) goto loc_821EFB14;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,21048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21048, ctx.r5.u32);
	// b 0x821efba8
	goto loc_821EFBA8;
loc_821EFB14:
	// lwz r4,21060(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21060);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x821efb2c
	if (ctx.cr6.lt) goto loc_821EFB2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e7760
	ctx.lr = 0x821EFB28;
	sub_821E7760(ctx, base);
	// b 0x821efba8
	goto loc_821EFBA8;
loc_821EFB2C:
	// lwz r11,21052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21052);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,21040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21040);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// addi r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 + 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237fdb8
	ctx.lr = 0x821EFB50;
	sub_8237FDB8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237fcf0
	ctx.lr = 0x821EFB68;
	sub_8237FCF0(ctx, base);
	// lwz r9,21052(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21052);
	// lwz r6,21064(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21064);
	// addi r8,r31,21068
	ctx.r8.s64 = ctx.r31.s64 + 21068;
	// lwz r3,31096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31096);
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r11,r6,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x825aebe0
	ctx.lr = 0x821EFBA8;
	sub_825AEBE0(ctx, base);
loc_821EFBA8:
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

__attribute__((alias("__imp__sub_821EFBC0"))) PPC_WEAK_FUNC(sub_821EFBC0);
PPC_FUNC_IMPL(__imp__sub_821EFBC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821efbd4
	if (!ctx.cr6.eq) goto loc_821EFBD4;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
loc_821EFBD4:
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// bne cr6,0x821efbe8
	if (!ctx.cr6.eq) goto loc_821EFBE8;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
loc_821EFBE8:
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// stw r9,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// stw r7,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// stb r10,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r10.u8);
	// stb r10,101(r3)
	PPC_STORE_U8(ctx.r3.u32 + 101, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821EFC20"))) PPC_WEAK_FUNC(sub_821EFC20);
PPC_FUNC_IMPL(__imp__sub_821EFC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821EFC28;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221c328
	ctx.lr = 0x821EFC40;
	sub_8221C328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821efc58
	if (!ctx.cr6.eq) goto loc_821EFC58;
loc_821EFC4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821EFC58:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821efd28
	if (ctx.cr6.eq) goto loc_821EFD28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221c568
	ctx.lr = 0x821EFC6C;
	sub_8221C568(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821efd28
	if (ctx.cr6.eq) goto loc_821EFD28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e7cc8
	ctx.lr = 0x821EFC80;
	sub_821E7CC8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821efd28
	if (ctx.cr6.eq) goto loc_821EFD28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e7e50
	ctx.lr = 0x821EFC94;
	sub_821E7E50(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821efd28
	if (ctx.cr6.eq) goto loc_821EFD28;
	// lwz r7,68(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x821efc4c
	if (!ctx.cr6.eq) goto loc_821EFC4C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821efd28
	if (!ctx.cr6.gt) goto loc_821EFD28;
loc_821EFCC4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x821EFCD0;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821efce0
	if (ctx.cr6.eq) goto loc_821EFCE0;
	// addi r11,r3,1584
	ctx.r11.s64 = ctx.r3.s64 + 1584;
	// b 0x821efce8
	goto loc_821EFCE8;
loc_821EFCE0:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,26400
	ctx.r11.s64 = ctx.r11.s64 + 26400;
loc_821EFCE8:
	// lbz r6,57(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821efcfc
	if (ctx.cr6.eq) goto loc_821EFCFC;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x821efd00
	goto loc_821EFD00;
loc_821EFCFC:
	// li r29,1
	ctx.r29.s64 = 1;
loc_821EFD00:
	// clrlwi r5,r29,24
	ctx.r5.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821efd18
	if (ctx.cr6.eq) goto loc_821EFD18;
	// clrlwi r4,r28,24
	ctx.r4.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821efc4c
	if (!ctx.cr6.eq) goto loc_821EFC4C;
loc_821EFD18:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821efcc4
	if (ctx.cr6.lt) goto loc_821EFCC4;
loc_821EFD28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821EFD34"))) PPC_WEAK_FUNC(sub_821EFD34);
PPC_FUNC_IMPL(__imp__sub_821EFD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EFD38"))) PPC_WEAK_FUNC(sub_821EFD38);
PPC_FUNC_IMPL(__imp__sub_821EFD38) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221c328
	ctx.lr = 0x821EFD60;
	sub_8221C328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821efde8
	if (ctx.cr6.eq) goto loc_821EFDE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821efc20
	ctx.lr = 0x821EFD74;
	sub_821EFC20(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821efd88
	if (ctx.cr6.eq) goto loc_821EFD88;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821efe04
	goto loc_821EFE04;
loc_821EFD88:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821efd9c
	if (!ctx.cr6.eq) goto loc_821EFD9C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821efe04
	goto loc_821EFE04;
loc_821EFD9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221c568
	ctx.lr = 0x821EFDA4;
	sub_8221C568(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821efde0
	if (ctx.cr6.eq) goto loc_821EFDE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e7cc8
	ctx.lr = 0x821EFDB8;
	sub_821E7CC8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821efde0
	if (ctx.cr6.eq) goto loc_821EFDE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e7e50
	ctx.lr = 0x821EFDCC;
	sub_821E7E50(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821efde0
	if (ctx.cr6.eq) goto loc_821EFDE0;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x821efe04
	goto loc_821EFE04;
loc_821EFDE0:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821efe04
	goto loc_821EFE04;
loc_821EFDE8:
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r3,5
	ctx.r3.s64 = 5;
	// ori r5,r6,26460
	ctx.r5.u64 = ctx.r6.u64 | 26460;
	// lbzx r4,r31,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x821efe04
	if (ctx.cr6.eq) goto loc_821EFE04;
	// li r3,4
	ctx.r3.s64 = 4;
loc_821EFE04:
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

__attribute__((alias("__imp__sub_821EFE1C"))) PPC_WEAK_FUNC(sub_821EFE1C);
PPC_FUNC_IMPL(__imp__sub_821EFE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821EFE20"))) PPC_WEAK_FUNC(sub_821EFE20);
PPC_FUNC_IMPL(__imp__sub_821EFE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x821EFE28;
	__savegprlr_22(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r10,26080
	ctx.r30.s64 = ctx.r10.s64 + 26080;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// addi r26,r11,26752
	ctx.r26.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,25864
	ctx.r9.u64 = ctx.r10.u64 | 25864;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwzx r10,r30,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mulli r8,r10,584
	ctx.r8.s64 = ctx.r10.s64 * 584;
	// addis r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 262144;
	// addi r7,r10,26172
	ctx.r7.s64 = ctx.r10.s64 + 26172;
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// ble cr6,0x821effe4
	if (!ctx.cr6.gt) goto loc_821EFFE4;
	// addi r25,r10,-3
	ctx.r25.s64 = ctx.r10.s64 + -3;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r31,r1,88
	ctx.r31.s64 = ctx.r1.s64 + 88;
	// li r24,1
	ctx.r24.s64 = 1;
loc_821EFE84:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
	// bl 0x82365c18
	ctx.lr = 0x821EFE90;
	sub_82365C18(ctx, base);
	// lis r6,4
	ctx.r6.s64 = 262144;
	// addis r10,r30,5
	ctx.r10.s64 = ctx.r30.s64 + 327680;
	// stw r3,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r3.u32);
	// ori r5,r6,25864
	ctx.r5.u64 = ctx.r6.u64 | 25864;
	// stb r24,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r24.u8);
	// addi r10,r10,-29100
	ctx.r10.s64 = ctx.r10.s64 + -29100;
	// cmplwi cr6,r25,18
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 18, ctx.xer);
	// lwzx r11,r30,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// mulli r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 * 328;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bgt cr6,0x821effb8
	if (ctx.cr6.gt) goto loc_821EFFB8;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-296
	ctx.r12.s64 = ctx.r12.s64 + -296;
	// rlwinm r0,r25,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r25.u64) {
	case 0:
		goto loc_821EFF24;
	case 1:
		goto loc_821EFFB8;
	case 2:
		goto loc_821EFFB8;
	case 3:
		goto loc_821EFFB8;
	case 4:
		goto loc_821EFFB8;
	case 5:
		goto loc_821EFF24;
	case 6:
		goto loc_821EFFB8;
	case 7:
		goto loc_821EFF30;
	case 8:
		goto loc_821EFFB8;
	case 9:
		goto loc_821EFFB8;
	case 10:
		goto loc_821EFFB8;
	case 11:
		goto loc_821EFFB8;
	case 12:
		goto loc_821EFFB8;
	case 13:
		goto loc_821EFFB8;
	case 14:
		goto loc_821EFF6C;
	case 15:
		goto loc_821EFFB8;
	case 16:
		goto loc_821EFFA4;
	case 17:
		goto loc_821EFFB8;
	case 18:
		goto loc_821EFF6C;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-220(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -220);
	// lwz r16,-72(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r16,-72(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r16,-72(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r16,-72(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r16,-220(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -220);
	// lwz r16,-72(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r16,-208(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -208);
	// lwz r16,-72(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r16,-72(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r16,-72(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r16,-72(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r16,-72(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r16,-72(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r16,-148(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -148);
	// lwz r16,-72(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r16,-92(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -92);
	// lwz r16,-72(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// lwz r16,-148(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -148);
loc_821EFF24:
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// b 0x821effc0
	goto loc_821EFFC0;
loc_821EFF30:
	// lbz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r23.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821eff50
	if (!ctx.cr6.eq) goto loc_821EFF50;
	// addis r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 327680;
	// addi r11,r11,-29124
	ctx.r11.s64 = ctx.r11.s64 + -29124;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x821effc0
	goto loc_821EFFC0;
loc_821EFF50:
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addis r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 327680;
	// addi r8,r11,-29124
	ctx.r8.s64 = ctx.r11.s64 + -29124;
	// lwzx r7,r29,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// b 0x821effc0
	goto loc_821EFFC0;
loc_821EFF6C:
	// lbz r5,12(r23)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r23.u32 + 12);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821eff88
	if (!ctx.cr6.eq) goto loc_821EFF88;
	// addis r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 327680;
	// addi r4,r11,-29132
	ctx.r4.s64 = ctx.r11.s64 + -29132;
	// lwzx r3,r29,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	// b 0x821effbc
	goto loc_821EFFBC;
loc_821EFF88:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addis r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 327680;
	// addi r9,r11,-29132
	ctx.r9.s64 = ctx.r11.s64 + -29132;
	// lwzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// b 0x821effc0
	goto loc_821EFFC0;
loc_821EFFA4:
	// lwz r6,84(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// b 0x821effc0
	goto loc_821EFFC0;
loc_821EFFB8:
	// addi r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 1;
loc_821EFFBC:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_821EFFC0:
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r29,r29,5956
	ctx.r29.s64 = ctx.r29.s64 + 5956;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821efe84
	if (ctx.cr6.lt) goto loc_821EFE84;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// bge cr6,0x821f001c
	if (!ctx.cr6.lt) goto loc_821F001C;
loc_821EFFE4:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// subfic r10,r28,6
	ctx.xer.ca = ctx.r28.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r28.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_821F0000:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stb r27,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r27.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bne cr6,0x821f0000
	if (!ctx.cr6.eq) goto loc_821F0000;
loc_821F001C:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r6,r11,-29232
	ctx.r6.s64 = ctx.r11.s64 + -29232;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cd88
	ctx.lr = 0x821F0034;
	sub_8259CD88(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821e8ef0
	ctx.lr = 0x821F0044;
	sub_821E8EF0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F004C"))) PPC_WEAK_FUNC(sub_821F004C);
PPC_FUNC_IMPL(__imp__sub_821F004C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0050"))) PPC_WEAK_FUNC(sub_821F0050);
PPC_FUNC_IMPL(__imp__sub_821F0050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259badc
	ctx.lr = 0x821F0058;
	__savegprlr_21(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r10,26080
	ctx.r30.s64 = ctx.r10.s64 + 26080;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// addi r27,r11,26752
	ctx.r27.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,25864
	ctx.r9.u64 = ctx.r10.u64 | 25864;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// lwzx r10,r30,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mulli r8,r10,584
	ctx.r8.s64 = ctx.r10.s64 * 584;
	// addis r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 262144;
	// addi r7,r10,26172
	ctx.r7.s64 = ctx.r10.s64 + 26172;
	// lwzx r24,r8,r7
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// ble cr6,0x821f01f8
	if (!ctx.cr6.gt) goto loc_821F01F8;
	// addi r26,r24,-3
	ctx.r26.s64 = ctx.r24.s64 + -3;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r31,r1,88
	ctx.r31.s64 = ctx.r1.s64 + 88;
	// li r25,1
	ctx.r25.s64 = 1;
loc_821F00B4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x82365c18
	ctx.lr = 0x821F00C0;
	sub_82365C18(ctx, base);
	// lis r6,4
	ctx.r6.s64 = 262144;
	// addis r10,r30,5
	ctx.r10.s64 = ctx.r30.s64 + 327680;
	// stw r3,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r3.u32);
	// ori r5,r6,25864
	ctx.r5.u64 = ctx.r6.u64 | 25864;
	// stb r25,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r25.u8);
	// addi r10,r10,-29100
	ctx.r10.s64 = ctx.r10.s64 + -29100;
	// cmplwi cr6,r26,18
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 18, ctx.xer);
	// lwzx r11,r30,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// mulli r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 * 328;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bgt cr6,0x821f01c8
	if (ctx.cr6.gt) goto loc_821F01C8;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,264
	ctx.r12.s64 = ctx.r12.s64 + 264;
	// rlwinm r0,r26,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r26.u64) {
	case 0:
		goto loc_821F0154;
	case 1:
		goto loc_821F01C8;
	case 2:
		goto loc_821F01C8;
	case 3:
		goto loc_821F01C8;
	case 4:
		goto loc_821F01C8;
	case 5:
		goto loc_821F0154;
	case 6:
		goto loc_821F01C8;
	case 7:
		goto loc_821F017C;
	case 8:
		goto loc_821F01C8;
	case 9:
		goto loc_821F01C8;
	case 10:
		goto loc_821F01C8;
	case 11:
		goto loc_821F01C8;
	case 12:
		goto loc_821F01C8;
	case 13:
		goto loc_821F01C8;
	case 14:
		goto loc_821F0198;
	case 15:
		goto loc_821F01C8;
	case 16:
		goto loc_821F01B4;
	case 17:
		goto loc_821F01C8;
	case 18:
		goto loc_821F0198;
	default:
		__builtin_unreachable();
	}
	// lwz r16,340(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r16,456(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r16,456(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r16,456(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r16,456(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r16,340(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r16,456(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r16,380(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r16,456(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r16,456(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r16,456(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r16,456(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r16,456(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r16,456(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r16,408(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// lwz r16,456(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r16,436(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// lwz r16,456(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r16,408(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
loc_821F0154:
	// addis r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 327680;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-29116
	ctx.r11.s64 = ctx.r11.s64 + -29116;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f13.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x821f01d8
	goto loc_821F01D8;
loc_821F017C:
	// addis r10,r30,5
	ctx.r10.s64 = ctx.r30.s64 + 327680;
	// addi r10,r10,-29124
	ctx.r10.s64 = ctx.r10.s64 + -29124;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// b 0x821f01d8
	goto loc_821F01D8;
loc_821F0198:
	// addis r10,r30,5
	ctx.r10.s64 = ctx.r30.s64 + 327680;
	// addi r7,r10,-29132
	ctx.r7.s64 = ctx.r10.s64 + -29132;
	// lwzx r6,r29,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// b 0x821f01d8
	goto loc_821F01D8;
loc_821F01B4:
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x821f01d8
	goto loc_821F01D8;
loc_821F01C8:
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_821F01D8:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,5956
	ctx.r29.s64 = ctx.r29.s64 + 5956;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f00b4
	if (ctx.cr6.lt) goto loc_821F00B4;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// bge cr6,0x821f0230
	if (!ctx.cr6.lt) goto loc_821F0230;
loc_821F01F8:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// subfic r10,r28,6
	ctx.xer.ca = ctx.r28.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r28.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_821F0214:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stb r23,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r23.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bne cr6,0x821f0214
	if (!ctx.cr6.eq) goto loc_821F0214;
loc_821F0230:
	// cmpwi cr6,r24,8
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 8, ctx.xer);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x821f0250
	if (!ctx.cr6.eq) goto loc_821F0250;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r6,r11,-29536
	ctx.r6.s64 = ctx.r11.s64 + -29536;
	// b 0x821f0258
	goto loc_821F0258;
loc_821F0250:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r6,r11,-29232
	ctx.r6.s64 = ctx.r11.s64 + -29232;
loc_821F0258:
	// bl 0x8259cd88
	ctx.lr = 0x821F025C;
	sub_8259CD88(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821e8ef0
	ctx.lr = 0x821F026C;
	sub_821E8EF0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb2c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F0274"))) PPC_WEAK_FUNC(sub_821F0274);
PPC_FUNC_IMPL(__imp__sub_821F0274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0278"))) PPC_WEAK_FUNC(sub_821F0278);
PPC_FUNC_IMPL(__imp__sub_821F0278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x821F0280;
	__savegprlr_23(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r10,26080
	ctx.r30.s64 = ctx.r10.s64 + 26080;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// addi r27,r11,26752
	ctx.r27.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,25864
	ctx.r9.u64 = ctx.r10.u64 | 25864;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// lwzx r10,r30,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mulli r8,r10,584
	ctx.r8.s64 = ctx.r10.s64 * 584;
	// addis r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 262144;
	// addi r7,r10,26172
	ctx.r7.s64 = ctx.r10.s64 + 26172;
	// lwzx r24,r8,r7
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// ble cr6,0x821f0434
	if (!ctx.cr6.gt) goto loc_821F0434;
	// addi r26,r24,-3
	ctx.r26.s64 = ctx.r24.s64 + -3;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r31,r1,88
	ctx.r31.s64 = ctx.r1.s64 + 88;
loc_821F02D4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x82365c18
	ctx.lr = 0x821F02E4;
	sub_82365C18(ctx, base);
	// lis r6,4
	ctx.r6.s64 = 262144;
	// addis r10,r30,5
	ctx.r10.s64 = ctx.r30.s64 + 327680;
	// stw r3,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r3.u32);
	// ori r5,r6,25864
	ctx.r5.u64 = ctx.r6.u64 | 25864;
	// addi r10,r10,-29100
	ctx.r10.s64 = ctx.r10.s64 + -29100;
	// lwzx r11,r30,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// mulli r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 * 328;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x821f031c
	if (!ctx.cr6.eq) goto loc_821F031C;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_821F031C:
	// cmplwi cr6,r26,18
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 18, ctx.xer);
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// bgt cr6,0x821f0404
	if (ctx.cr6.gt) goto loc_821F0404;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,832
	ctx.r12.s64 = ctx.r12.s64 + 832;
	// rlwinm r0,r26,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r26.u64) {
	case 0:
		goto loc_821F039C;
	case 1:
		goto loc_821F0404;
	case 2:
		goto loc_821F0404;
	case 3:
		goto loc_821F0404;
	case 4:
		goto loc_821F0404;
	case 5:
		goto loc_821F038C;
	case 6:
		goto loc_821F0404;
	case 7:
		goto loc_821F03B8;
	case 8:
		goto loc_821F0404;
	case 9:
		goto loc_821F0404;
	case 10:
		goto loc_821F0404;
	case 11:
		goto loc_821F0404;
	case 12:
		goto loc_821F0404;
	case 13:
		goto loc_821F0404;
	case 14:
		goto loc_821F03D4;
	case 15:
		goto loc_821F0404;
	case 16:
		goto loc_821F03F0;
	case 17:
		goto loc_821F0404;
	case 18:
		goto loc_821F03D4;
	default:
		__builtin_unreachable();
	}
	// lwz r16,924(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	// lwz r16,1028(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r16,1028(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r16,1028(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r16,1028(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r16,908(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// lwz r16,1028(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r16,952(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	// lwz r16,1028(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r16,1028(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r16,1028(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r16,1028(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r16,1028(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r16,1028(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r16,980(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	// lwz r16,1028(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r16,1008(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	// lwz r16,1028(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// lwz r16,980(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 980);
loc_821F038C:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821f0414
	goto loc_821F0414;
loc_821F039C:
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f13.u32);
	// b 0x821f0414
	goto loc_821F0414;
loc_821F03B8:
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addis r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 327680;
	// addi r7,r11,-29124
	ctx.r7.s64 = ctx.r11.s64 + -29124;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwzx r6,r28,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// b 0x821f0414
	goto loc_821F0414;
loc_821F03D4:
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addis r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 327680;
	// addi r4,r11,-29132
	ctx.r4.s64 = ctx.r11.s64 + -29132;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lwzx r3,r28,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x821f0414
	goto loc_821F0414;
loc_821F03F0:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// b 0x821f0414
	goto loc_821F0414;
loc_821F0404:
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
loc_821F0414:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,5956
	ctx.r28.s64 = ctx.r28.s64 + 5956;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f02d4
	if (ctx.cr6.lt) goto loc_821F02D4;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// bge cr6,0x821f046c
	if (!ctx.cr6.lt) goto loc_821F046C;
loc_821F0434:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// add r6,r29,r11
	ctx.r6.u64 = ctx.r29.u64 + ctx.r11.u64;
	// subfic r10,r29,6
	ctx.xer.ca = ctx.r29.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r29.s64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_821F0450:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stb r25,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r25.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bne cr6,0x821f0450
	if (!ctx.cr6.eq) goto loc_821F0450;
loc_821F046C:
	// cmpwi cr6,r24,8
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 8, ctx.xer);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x821f048c
	if (!ctx.cr6.eq) goto loc_821F048C;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r6,r11,-29536
	ctx.r6.s64 = ctx.r11.s64 + -29536;
	// b 0x821f0494
	goto loc_821F0494;
loc_821F048C:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r6,r11,-29232
	ctx.r6.s64 = ctx.r11.s64 + -29232;
loc_821F0494:
	// bl 0x8259cd88
	ctx.lr = 0x821F0498;
	sub_8259CD88(ctx, base);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// add r4,r23,r11
	ctx.r4.u64 = ctx.r23.u64 + ctx.r11.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F04B4"))) PPC_WEAK_FUNC(sub_821F04B4);
PPC_FUNC_IMPL(__imp__sub_821F04B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F04B8"))) PPC_WEAK_FUNC(sub_821F04B8);
PPC_FUNC_IMPL(__imp__sub_821F04B8) {
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
	// lis r9,-32090
	ctx.r9.s64 = -2103050240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r30,r9,26752
	ctx.r30.s64 = ctx.r9.s64 + 26752;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,-27240
	ctx.r4.s64 = ctx.r10.s64 + -27240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,832(r31)
	PPC_STORE_U8(ctx.r31.u32 + 832, ctx.r11.u8);
	// stb r11,833(r31)
	PPC_STORE_U8(ctx.r31.u32 + 833, ctx.r11.u8);
	// stb r11,834(r31)
	PPC_STORE_U8(ctx.r31.u32 + 834, ctx.r11.u8);
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// bl 0x8221c3e8
	ctx.lr = 0x821F0504;
	sub_8221C3E8(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// ori r4,r4,43008
	ctx.r4.u64 = ctx.r4.u64 | 43008;
	// bl 0x823695f8
	ctx.lr = 0x821F0514;
	sub_823695F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821F0538"))) PPC_WEAK_FUNC(sub_821F0538);
PPC_FUNC_IMPL(__imp__sub_821F0538) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r8,r9,26458
	ctx.r8.u64 = ctx.r9.u64 | 26458;
	// stbx r10,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// stb r10,832(r3)
	PPC_STORE_U8(ctx.r3.u32 + 832, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F0558"))) PPC_WEAK_FUNC(sub_821F0558);
PPC_FUNC_IMPL(__imp__sub_821F0558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r7,r8,26458
	ctx.r7.u64 = ctx.r8.u64 | 26458;
	// li r9,1
	ctx.r9.s64 = 1;
	// stbx r10,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// stb r9,832(r3)
	PPC_STORE_U8(ctx.r3.u32 + 832, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F057C"))) PPC_WEAK_FUNC(sub_821F057C);
PPC_FUNC_IMPL(__imp__sub_821F057C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0580"))) PPC_WEAK_FUNC(sub_821F0580);
PPC_FUNC_IMPL(__imp__sub_821F0580) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,11600
	ctx.r30.s64 = ctx.r11.s64 + 11600;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821F05B0;
	sub_8210FCF8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821f5fa8
	ctx.lr = 0x821F05C4;
	sub_821F5FA8(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// stb r30,834(r31)
	PPC_STORE_U8(ctx.r31.u32 + 834, ctx.r30.u8);
	// stb r30,833(r31)
	PPC_STORE_U8(ctx.r31.u32 + 833, ctx.r30.u8);
	// bl 0x8236f410
	ctx.lr = 0x821F05E0;
	sub_8236F410(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
	// stb r11,833(r31)
	PPC_STORE_U8(ctx.r31.u32 + 833, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_821F0604"))) PPC_WEAK_FUNC(sub_821F0604);
PPC_FUNC_IMPL(__imp__sub_821F0604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0608"))) PPC_WEAK_FUNC(sub_821F0608);
PPC_FUNC_IMPL(__imp__sub_821F0608) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,11600
	ctx.r30.s64 = ctx.r11.s64 + 11600;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821F0638;
	sub_8210FCF8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821f5fa8
	ctx.lr = 0x821F064C;
	sub_821F5FA8(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// stb r30,833(r31)
	PPC_STORE_U8(ctx.r31.u32 + 833, ctx.r30.u8);
	// stb r30,834(r31)
	PPC_STORE_U8(ctx.r31.u32 + 834, ctx.r30.u8);
	// bl 0x8236f410
	ctx.lr = 0x821F0668;
	sub_8236F410(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
	// stb r11,834(r31)
	PPC_STORE_U8(ctx.r31.u32 + 834, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_821F068C"))) PPC_WEAK_FUNC(sub_821F068C);
PPC_FUNC_IMPL(__imp__sub_821F068C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0690"))) PPC_WEAK_FUNC(sub_821F0690);
PPC_FUNC_IMPL(__imp__sub_821F0690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821F0698;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821f08e8
	if (ctx.cr6.lt) goto loc_821F08E8;
	// beq cr6,0x821f06d0
	if (ctx.cr6.eq) goto loc_821F06D0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821f0948
	if (!ctx.cr6.lt) goto loc_821F0948;
	// li r28,3
	ctx.r28.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821F06D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x821e9528
	ctx.lr = 0x821F06DC;
	sub_821E9528(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f0948
	if (ctx.cr6.eq) goto loc_821F0948;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r27,r11,26752
	ctx.r27.s64 = ctx.r11.s64 + 26752;
	// addi r3,r27,2896
	ctx.r3.s64 = ctx.r27.s64 + 2896;
	// bl 0x8236f258
	ctx.lr = 0x821F06F8;
	sub_8236F258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821f0948
	if (ctx.cr6.eq) goto loc_821F0948;
	// bge cr6,0x821f07bc
	if (!ctx.cr6.lt) goto loc_821F07BC;
	// lbz r10,833(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 833);
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f074c
	if (ctx.cr6.eq) goto loc_821F074C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,11664
	ctx.r29.s64 = ctx.r11.s64 + 11664;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821F0730;
	sub_8210FCF8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r29,-64
	ctx.r4.s64 = ctx.r29.s64 + -64;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f5fa8
	ctx.lr = 0x821F0744;
	sub_821F5FA8(ctx, base);
	// stb r30,833(r31)
	PPC_STORE_U8(ctx.r31.u32 + 833, ctx.r30.u8);
	// b 0x821f0788
	goto loc_821F0788;
loc_821F074C:
	// lbz r9,834(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 834);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f0788
	if (ctx.cr6.eq) goto loc_821F0788;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r11,11664
	ctx.r29.s64 = ctx.r11.s64 + 11664;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821F0770;
	sub_8210FCF8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r29,-64
	ctx.r4.s64 = ctx.r29.s64 + -64;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f5fa8
	ctx.lr = 0x821F0784;
	sub_821F5FA8(ctx, base);
	// stb r30,834(r31)
	PPC_STORE_U8(ctx.r31.u32 + 834, ctx.r30.u8);
loc_821F0788:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16304
	ctx.r5.s64 = ctx.r11.s64 + 16304;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,16292
	ctx.r3.s64 = ctx.r11.s64 + 16292;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82427c40
	ctx.lr = 0x821F07A8;
	sub_82427C40(ctx, base);
	// addi r3,r27,2896
	ctx.r3.s64 = ctx.r27.s64 + 2896;
	// bl 0x8236f410
	ctx.lr = 0x821F07B0;
	sub_8236F410(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821F07BC:
	// addi r3,r27,2896
	ctx.r3.s64 = ctx.r27.s64 + 2896;
	// bl 0x823695d0
	ctx.lr = 0x821F07C4;
	sub_823695D0(ctx, base);
	// add r8,r3,r29
	ctx.r8.u64 = ctx.r3.u64 + ctx.r29.u64;
	// stw r3,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r3.u32);
	// stb r30,-1(r8)
	PPC_STORE_U8(ctx.r8.u32 + -1, ctx.r30.u8);
	// lwz r3,816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821f086c
	if (!ctx.cr6.eq) goto loc_821F086C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,820(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// addi r29,r11,11664
	ctx.r29.s64 = ctx.r11.s64 + 11664;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r4,r29,-64
	ctx.r4.s64 = ctx.r29.s64 + -64;
	// addi r28,r11,14528
	ctx.r28.s64 = ctx.r11.s64 + 14528;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f5fa8
	ctx.lr = 0x821F0800;
	sub_821F5FA8(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// lbz r5,833(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 833);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r6,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r6.u32);
	// beq cr6,0x821f0838
	if (ctx.cr6.eq) goto loc_821F0838;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821F0824;
	sub_8210FCF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r29,-64
	ctx.r4.s64 = ctx.r29.s64 + -64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f5fa8
	ctx.lr = 0x821F0834;
	sub_821F5FA8(ctx, base);
	// b 0x821f08a8
	goto loc_821F08A8;
loc_821F0838:
	// lbz r4,834(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 834);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f08ac
	if (ctx.cr6.eq) goto loc_821F08AC;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821F0854;
	sub_8210FCF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r29,-64
	ctx.r4.s64 = ctx.r29.s64 + -64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f5fa8
	ctx.lr = 0x821F0864;
	sub_821F5FA8(ctx, base);
	// stb r30,834(r31)
	PPC_STORE_U8(ctx.r31.u32 + 834, ctx.r30.u8);
	// b 0x821f08ac
	goto loc_821F08AC;
loc_821F086C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8221f860
	ctx.lr = 0x821F0878;
	sub_8221F860(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r4,820(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// ori r5,r5,21504
	ctx.r5.u64 = ctx.r5.u64 | 21504;
	// bl 0x82361d08
	ctx.lr = 0x821F0888;
	sub_82361D08(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r5,820(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// addi r11,r11,11664
	ctx.r11.s64 = ctx.r11.s64 + 11664;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f5fa8
	ctx.lr = 0x821F08A4;
	sub_821F5FA8(ctx, base);
	// stb r30,834(r31)
	PPC_STORE_U8(ctx.r31.u32 + 834, ctx.r30.u8);
loc_821F08A8:
	// stb r30,833(r31)
	PPC_STORE_U8(ctx.r31.u32 + 833, ctx.r30.u8);
loc_821F08AC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16304
	ctx.r5.s64 = ctx.r11.s64 + 16304;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,16292
	ctx.r3.s64 = ctx.r11.s64 + 16292;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82427c40
	ctx.lr = 0x821F08CC;
	sub_82427C40(ctx, base);
	// addi r3,r27,2896
	ctx.r3.s64 = ctx.r27.s64 + 2896;
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
	// bl 0x8236f410
	ctx.lr = 0x821F08D8;
	sub_8236F410(ctx, base);
	// li r28,2
	ctx.r28.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821F08E8:
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bl 0x821e9528
	ctx.lr = 0x821F08F8;
	sub_821E9528(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f0948
	if (ctx.cr6.eq) goto loc_821F0948;
	// lbz r11,833(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 833);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f092c
	if (ctx.cr6.eq) goto loc_821F092C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e9638
	ctx.lr = 0x821F0918;
	sub_821E9638(ctx, base);
	// stb r30,833(r31)
	PPC_STORE_U8(ctx.r31.u32 + 833, ctx.r30.u8);
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821F092C:
	// lbz r10,834(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 834);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f0948
	if (ctx.cr6.eq) goto loc_821F0948;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e95a8
	ctx.lr = 0x821F0940;
	sub_821E95A8(ctx, base);
	// stb r30,834(r31)
	PPC_STORE_U8(ctx.r31.u32 + 834, ctx.r30.u8);
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
loc_821F0948:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F0954"))) PPC_WEAK_FUNC(sub_821F0954);
PPC_FUNC_IMPL(__imp__sub_821F0954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0958"))) PPC_WEAK_FUNC(sub_821F0958);
PPC_FUNC_IMPL(__imp__sub_821F0958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lfs f0,15560(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15560);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ori r9,r10,25864
	ctx.r9.u64 = ctx.r10.u64 | 25864;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// mulli r8,r10,584
	ctx.r8.s64 = ctx.r10.s64 * 584;
	// addi r7,r11,26172
	ctx.r7.s64 = ctx.r11.s64 + 26172;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bne cr6,0x821f09bc
	if (!ctx.cr6.eq) goto loc_821F09BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r6,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r6.u8);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821F09BC:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,14596
	ctx.r4.s64 = ctx.r10.s64 + 14596;
	// lfs f0,72(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x821f0a00
	if (!ctx.cr6.eq) goto loc_821F0A00;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r4,-100
	ctx.r4.s64 = ctx.r4.s64 + -100;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821F09E0;
	sub_8210FCF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821F09EC;
	sub_82361BD8(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821F0A00:
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x821f0cc4
	if (ctx.cr6.gt) goto loc_821F0CC4;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,2596
	ctx.r12.s64 = ctx.r12.s64 + 2596;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821F0A70;
	case 1:
		goto loc_821F0CC4;
	case 2:
		goto loc_821F0CC4;
	case 3:
		goto loc_821F0CC4;
	case 4:
		goto loc_821F0CC4;
	case 5:
		goto loc_821F0ACC;
	case 6:
		goto loc_821F0CC4;
	case 7:
		goto loc_821F0CC4;
	case 8:
		goto loc_821F0CC4;
	case 9:
		goto loc_821F0CC4;
	case 10:
		goto loc_821F0CC4;
	case 11:
		goto loc_821F0CC4;
	case 12:
		goto loc_821F0CC4;
	case 13:
		goto loc_821F0CC4;
	case 14:
		goto loc_821F0CAC;
	case 15:
		goto loc_821F0CC4;
	case 16:
		goto loc_821F0CAC;
	case 17:
		goto loc_821F0CC4;
	case 18:
		goto loc_821F0CAC;
	default:
		__builtin_unreachable();
	}
	// lwz r16,2672(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2672);
	// lwz r16,3268(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	// lwz r16,3268(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	// lwz r16,3268(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	// lwz r16,3268(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	// lwz r16,2764(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2764);
	// lwz r16,3268(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	// lwz r16,3268(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	// lwz r16,3268(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	// lwz r16,3268(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	// lwz r16,3268(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	// lwz r16,3268(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	// lwz r16,3268(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	// lwz r16,3268(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	// lwz r16,3244(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3244);
	// lwz r16,3268(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	// lwz r16,3244(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3244);
	// lwz r16,3268(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3268);
	// lwz r16,3244(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3244);
loc_821F0A70:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x821f0ab0
	if (!ctx.cr6.eq) goto loc_821F0AB0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r4,-3356
	ctx.r4.s64 = ctx.r4.s64 + -3356;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821F0A90;
	sub_8210FCF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821F0A9C;
	sub_82361BD8(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821F0AB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fe7d8
	ctx.lr = 0x821F0AB8;
	sub_821FE7D8(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821F0ACC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x821f0b0c
	if (!ctx.cr6.eq) goto loc_821F0B0C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r4,-196
	ctx.r4.s64 = ctx.r4.s64 + -196;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821F0AEC;
	sub_8210FCF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821F0AF8;
	sub_82361BD8(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821F0B0C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x821f0b4c
	if (!ctx.cr6.eq) goto loc_821F0B4C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r4,-168
	ctx.r4.s64 = ctx.r4.s64 + -168;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821F0B2C;
	sub_8210FCF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821F0B38;
	sub_82361BD8(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821F0B4C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15124);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x821f0b8c
	if (!ctx.cr6.eq) goto loc_821F0B8C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r4,-140
	ctx.r4.s64 = ctx.r4.s64 + -140;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821F0B6C;
	sub_8210FCF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821F0B78;
	sub_82361BD8(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821F0B8C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1572);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bne cr6,0x821f0bcc
	if (!ctx.cr6.eq) goto loc_821F0BCC;
	// addi r4,r4,-120
	ctx.r4.s64 = ctx.r4.s64 + -120;
	// bl 0x8210fcf8
	ctx.lr = 0x821F0BAC;
	sub_8210FCF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821F0BB8;
	sub_82361BD8(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821F0BCC:
	// lfs f0,56(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x821f0c00
	if (!ctx.cr6.eq) goto loc_821F0C00;
	// addi r4,r4,-80
	ctx.r4.s64 = ctx.r4.s64 + -80;
	// bl 0x8210fcf8
	ctx.lr = 0x821F0BE0;
	sub_8210FCF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821F0BEC;
	sub_82361BD8(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821F0C00:
	// lfs f0,60(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x821f0c34
	if (!ctx.cr6.eq) goto loc_821F0C34;
	// addi r4,r4,-56
	ctx.r4.s64 = ctx.r4.s64 + -56;
	// bl 0x8210fcf8
	ctx.lr = 0x821F0C14;
	sub_8210FCF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821F0C20;
	sub_82361BD8(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821F0C34:
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x821f0c68
	if (!ctx.cr6.eq) goto loc_821F0C68;
	// addi r4,r4,-32
	ctx.r4.s64 = ctx.r4.s64 + -32;
	// bl 0x8210fcf8
	ctx.lr = 0x821F0C48;
	sub_8210FCF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821F0C54;
	sub_82361BD8(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821F0C68:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r5
	PPC_STORE_U32(ctx.r5.u32, ctx.f0.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821F0C78;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8212e710
	ctx.lr = 0x821F0C88;
	sub_8212E710(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82361bd8
	ctx.lr = 0x821F0C98;
	sub_82361BD8(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821F0CAC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f13,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f13.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821f8538
	ctx.lr = 0x821F0CC4;
	sub_821F8538(ctx, base);
loc_821F0CC4:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F0CD8"))) PPC_WEAK_FUNC(sub_821F0CD8);
PPC_FUNC_IMPL(__imp__sub_821F0CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x821F0CE0;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-3360(r1)
	ea = -3360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r27,r11,26752
	ctx.r27.s64 = ctx.r11.s64 + 26752;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f0dd4
	if (!ctx.cr6.gt) goto loc_821F0DD4;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r29,r1,516
	ctx.r29.s64 = ctx.r1.s64 + 516;
	// addis r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 327680;
	// addi r28,r11,-29132
	ctx.r28.s64 = ctx.r11.s64 + -29132;
	// lfs f31,15036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15036);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r26,r11,11600
	ctx.r26.s64 = ctx.r11.s64 + 11600;
loc_821F0D30:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x821F0D3C;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f0d4c
	if (ctx.cr6.eq) goto loc_821F0D4C;
	// addi r11,r3,1584
	ctx.r11.s64 = ctx.r3.s64 + 1584;
	// b 0x821f0d54
	goto loc_821F0D54;
loc_821F0D4C:
	// addis r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 65536;
	// addi r11,r11,26400
	ctx.r11.s64 = ctx.r11.s64 + 26400;
loc_821F0D54:
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r31,-440
	ctx.r3.s64 = ctx.r31.s64 + -440;
	// bl 0x8259d2a0
	ctx.lr = 0x821F0D68;
	sub_8259D2A0(ctx, base);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,328(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 328);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r10.u32);
	// beq cr6,0x821f0da0
	if (ctx.cr6.eq) goto loc_821F0DA0;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bgt cr6,0x821f0d98
	if (ctx.cr6.gt) goto loc_821F0D98;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// b 0x821f0db4
	goto loc_821F0DB4;
loc_821F0D98:
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// b 0x821f0db4
	goto loc_821F0DB4;
loc_821F0DA0:
	// lfs f0,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f12,0,r29
	PPC_STORE_U32(ctx.r29.u32, ctx.f12.u32);
loc_821F0DB4:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,5956
	ctx.r28.s64 = ctx.r28.s64 + 5956;
	// addi r29,r29,448
	ctx.r29.s64 = ctx.r29.s64 + 448;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f0d30
	if (ctx.cr6.lt) goto loc_821F0D30;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bge cr6,0x821f0e04
	if (!ctx.cr6.lt) goto loc_821F0E04;
loc_821F0DD4:
	// addi r10,r1,512
	ctx.r10.s64 = ctx.r1.s64 + 512;
	// mulli r11,r30,448
	ctx.r11.s64 = ctx.r30.s64 * 448;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_821F0DE4:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// blt cr6,0x821f0de4
	if (ctx.cr6.lt) goto loc_821F0DE4;
loc_821F0E04:
	// clrlwi r6,r25,24
	ctx.r6.u64 = ctx.r25.u32 & 0xFF;
	// li r5,448
	ctx.r5.s64 = 448;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x821f0e28
	if (ctx.cr6.eq) goto loc_821F0E28;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r6,r11,-26680
	ctx.r6.s64 = ctx.r11.s64 + -26680;
	// b 0x821f0e30
	goto loc_821F0E30;
loc_821F0E28:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r6,r11,-26584
	ctx.r6.s64 = ctx.r11.s64 + -26584;
loc_821F0E30:
	// bl 0x8259cd88
	ctx.lr = 0x821F0E34;
	sub_8259CD88(ctx, base);
	// lwz r10,56(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821f0e64
	if (!ctx.cr6.gt) goto loc_821F0E64;
	// addi r11,r1,520
	ctx.r11.s64 = ctx.r1.s64 + 520;
loc_821F0E48:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r23,r5
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x821f0e68
	if (ctx.cr6.eq) goto loc_821F0E68;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821f0e48
	if (ctx.cr6.lt) goto loc_821F0E48;
loc_821F0E64:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821F0E68:
	// addi r1,r1,3360
	ctx.r1.s64 = ctx.r1.s64 + 3360;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F0E74"))) PPC_WEAK_FUNC(sub_821F0E74);
PPC_FUNC_IMPL(__imp__sub_821F0E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F0E78"))) PPC_WEAK_FUNC(sub_821F0E78);
PPC_FUNC_IMPL(__imp__sub_821F0E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821F0E80;
	__savegprlr_27(ctx, base);
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r29,r3,836
	ctx.r29.s64 = ctx.r3.s64 + 836;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// addi r9,r10,24760
	ctx.r9.s64 = ctx.r10.s64 + 24760;
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821f0fcc
	if (ctx.cr6.eq) goto loc_821F0FCC;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r27,r10,26752
	ctx.r27.s64 = ctx.r10.s64 + 26752;
	// ori r5,r6,26710
	ctx.r5.u64 = ctx.r6.u64 | 26710;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// ori r10,r3,25864
	ctx.r10.u64 = ctx.r3.u64 | 25864;
	// lbzx r4,r27,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x821f0fcc
	if (ctx.cr6.eq) goto loc_821F0FCC;
	// addis r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 262144;
	// mulli r10,r28,584
	ctx.r10.s64 = ctx.r28.s64 * 584;
	// addi r9,r9,26172
	ctx.r9.s64 = ctx.r9.s64 + 26172;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x821f0efc
	if (ctx.cr6.eq) goto loc_821F0EFC;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x821f0f5c
	if (!ctx.cr6.eq) goto loc_821F0F5C;
loc_821F0EFC:
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,25872
	ctx.r8.s64 = ctx.r11.s64 + 25872;
	// ldx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r8.u32);
	// bl 0x82347480
	ctx.lr = 0x821F0F10;
	sub_82347480(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,23504
	ctx.r31.s64 = ctx.r11.s64 + 23504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821F0F28;
	sub_8210FCF8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16340
	ctx.r4.s64 = ctx.r11.s64 + 16340;
	// bl 0x8210fcf8
	ctx.lr = 0x821F0F3C;
	sub_8210FCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x821ee418
	ctx.lr = 0x821F0F4C;
	sub_821EE418(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82361bd8
	ctx.lr = 0x821F0F5C;
	sub_82361BD8(ctx, base);
loc_821F0F5C:
	// lwz r30,56(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x821f0fcc
	if (!ctx.cr6.gt) goto loc_821F0FCC;
	// addis r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 65536;
	// mulli r11,r28,216
	ctx.r11.s64 = ctx.r28.s64 * 216;
	// addi r10,r10,28028
	ctx.r10.s64 = ctx.r10.s64 + 28028;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r28,r11,16324
	ctx.r28.s64 = ctx.r11.s64 + 16324;
loc_821F0F80:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821F0F88:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821f0f88
	if (!ctx.cr6.eq) goto loc_821F0F88;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// subfic r4,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r4.s64 = 256 - ctx.r11.s64;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x8259da78
	ctx.lr = 0x821F0FBC;
	sub_8259DA78(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821f0f80
	if (!ctx.cr6.eq) goto loc_821F0F80;
loc_821F0FCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F0FD8"))) PPC_WEAK_FUNC(sub_821F0FD8);
PPC_FUNC_IMPL(__imp__sub_821F0FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x821F0FE0;
	__savegprlr_22(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r24,r11,26752
	ctx.r24.s64 = ctx.r11.s64 + 26752;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r11,56(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 56);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f1180
	if (!ctx.cr6.gt) goto loc_821F1180;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r31,r26,36
	ctx.r31.s64 = ctx.r26.s64 + 36;
	// addi r25,r11,26080
	ctx.r25.s64 = ctx.r11.s64 + 26080;
	// li r23,1
	ctx.r23.s64 = 1;
	// addis r11,r25,5
	ctx.r11.s64 = ctx.r25.s64 + 327680;
	// addi r30,r11,-29116
	ctx.r30.s64 = ctx.r11.s64 + -29116;
loc_821F1024:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r24,24
	ctx.r3.s64 = ctx.r24.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x821F1030;
	sub_82365758(ctx, base);
	// stw r29,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r29.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r10.u32);
	// beq cr6,0x821f1060
	if (ctx.cr6.eq) goto loc_821F1060;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821F1058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f1068
	goto loc_821F1068;
loc_821F1060:
	// addis r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 65536;
	// addi r4,r11,26404
	ctx.r4.s64 = ctx.r11.s64 + 26404;
loc_821F1068:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x8259d2a0
	ctx.lr = 0x821F1074;
	sub_8259D2A0(ctx, base);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// stb r22,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r22.u8);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// ori r6,r7,26172
	ctx.r6.u64 = ctx.r7.u64 | 26172;
	// lwzx r11,r25,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r6.u32);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x821f1148
	if (ctx.cr6.gt) goto loc_821F1148;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,4268
	ctx.r12.s64 = ctx.r12.s64 + 4268;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821F10F8;
	case 1:
		goto loc_821F1148;
	case 2:
		goto loc_821F1148;
	case 3:
		goto loc_821F1148;
	case 4:
		goto loc_821F1148;
	case 5:
		goto loc_821F1108;
	case 6:
		goto loc_821F1148;
	case 7:
		goto loc_821F1148;
	case 8:
		goto loc_821F1148;
	case 9:
		goto loc_821F1148;
	case 10:
		goto loc_821F1148;
	case 11:
		goto loc_821F1148;
	case 12:
		goto loc_821F1148;
	case 13:
		goto loc_821F1148;
	case 14:
		goto loc_821F1128;
	case 15:
		goto loc_821F1148;
	case 16:
		goto loc_821F1128;
	case 17:
		goto loc_821F1148;
	case 18:
		goto loc_821F1128;
	default:
		__builtin_unreachable();
	}
	// lwz r16,4344(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4344);
	// lwz r16,4424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// lwz r16,4424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// lwz r16,4424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// lwz r16,4424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// lwz r16,4360(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// lwz r16,4424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// lwz r16,4424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// lwz r16,4424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// lwz r16,4424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// lwz r16,4424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// lwz r16,4424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// lwz r16,4424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// lwz r16,4424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// lwz r16,4392(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4392);
	// lwz r16,4424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// lwz r16,4392(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4392);
	// lwz r16,4424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// lwz r16,4392(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4392);
loc_821F10F8:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x821f1148
	goto loc_821F1148;
loc_821F1108:
	// lwz r5,-4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x821f1148
	goto loc_821F1148;
loc_821F1128:
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// stb r23,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r23.u8);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f10,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_821F1148:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821f1160
	if (ctx.cr6.eq) goto loc_821F1160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222dbc8
	ctx.lr = 0x821F1158;
	sub_8222DBC8(ctx, base);
	// stw r3,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r3.u32);
	// b 0x821f1164
	goto loc_821F1164;
loc_821F1160:
	// stw r22,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r22.u32);
loc_821F1164:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// addi r30,r30,5956
	ctx.r30.s64 = ctx.r30.s64 + 5956;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821f1024
	if (ctx.cr6.lt) goto loc_821F1024;
	// b 0x821f1184
	goto loc_821F1184;
loc_821F1180:
	// lbz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_821F1184:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,244
	ctx.r5.s64 = 244;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x821F1194;
	sub_8259D3A0(ctx, base);
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// bge cr6,0x821f11dc
	if (!ctx.cr6.lt) goto loc_821F11DC;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// subfic r10,r29,6
	ctx.xer.ca = ctx.r29.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r29.s64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lfs f0,-12136(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
loc_821F11C0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r9,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r9.u32);
	// stw r9,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bne cr6,0x821f11c0
	if (!ctx.cr6.eq) goto loc_821F11C0;
loc_821F11DC:
	// clrlwi r7,r27,24
	ctx.r7.u64 = ctx.r27.u32 & 0xFF;
	// li r5,40
	ctx.r5.s64 = 40;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// beq cr6,0x821f1200
	if (ctx.cr6.eq) goto loc_821F1200;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r6,r11,-25848
	ctx.r6.s64 = ctx.r11.s64 + -25848;
	// b 0x821f1208
	goto loc_821F1208;
loc_821F1200:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r6,r11,-25664
	ctx.r6.s64 = ctx.r11.s64 + -25664;
loc_821F1208:
	// bl 0x8259cd88
	ctx.lr = 0x821F120C;
	sub_8259CD88(ctx, base);
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x821f1250
	if (!ctx.cr6.gt) goto loc_821F1250;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
loc_821F1220:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r26
	ctx.r3.u64 = ctx.r9.u64 + ctx.r26.u64;
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821f1220
	if (ctx.cr6.lt) goto loc_821F1220;
loc_821F1250:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F1258"))) PPC_WEAK_FUNC(sub_821F1258);
PPC_FUNC_IMPL(__imp__sub_821F1258) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r4,53
	ctx.r4.s64 = 53;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x821fd498
	ctx.lr = 0x821F1288;
	sub_821FD498(ctx, base);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r9,23504
	ctx.r3.s64 = ctx.r9.s64 + 23504;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r10,14864
	ctx.r31.s64 = ctx.r10.s64 + 14864;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821F12B4;
	sub_8210FCF8(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821f5fb0
	ctx.lr = 0x821F12C8;
	sub_821F5FB0(ctx, base);
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

__attribute__((alias("__imp__sub_821F12DC"))) PPC_WEAK_FUNC(sub_821F12DC);
PPC_FUNC_IMPL(__imp__sub_821F12DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F12E0"))) PPC_WEAK_FUNC(sub_821F12E0);
PPC_FUNC_IMPL(__imp__sub_821F12E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821F12E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x82369210
	ctx.lr = 0x821F1304;
	sub_82369210(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x821f13cc
	if (!ctx.cr6.eq) goto loc_821F13CC;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x82369320
	ctx.lr = 0x821F1318;
	sub_82369320(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x821f1390
	if (!ctx.cr6.gt) goto loc_821F1390;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r11,13884
	ctx.r26.s64 = ctx.r11.s64 + 13884;
loc_821F132C:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// ble cr6,0x821f1350
	if (!ctx.cr6.gt) goto loc_821F1350;
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// li r6,32
	ctx.r6.s64 = 32;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e9e90
	ctx.lr = 0x821F134C;
	sub_821E9E90(ctx, base);
	// b 0x821f137c
	goto loc_821F137C;
loc_821F1350:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x821f1368
	if (!ctx.cr6.eq) goto loc_821F1368;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r27,32
	ctx.r3.s64 = ctx.r27.s64 + 32;
	// addi r4,r29,7112
	ctx.r4.s64 = ctx.r29.s64 + 7112;
	// b 0x821f1378
	goto loc_821F1378;
loc_821F1368:
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_821F1378:
	// bl 0x8259d2a0
	ctx.lr = 0x821F137C;
	sub_8259D2A0(ctx, base);
loc_821F137C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x821f132c
	if (ctx.cr6.lt) goto loc_821F132C;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// bge cr6,0x821f1510
	if (!ctx.cr6.lt) goto loc_821F1510;
loc_821F1390:
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// subfic r31,r31,5
	ctx.xer.ca = ctx.r31.u32 <= 5;
	ctx.r31.s64 = 5 - ctx.r31.s64;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,3672
	ctx.r29.s64 = ctx.r11.s64 + 3672;
loc_821F13A4:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x821F13B4;
	sub_8259D2A0(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821f13a4
	if (!ctx.cr6.eq) goto loc_821F13A4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_821F13CC:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x821f145c
	if (!ctx.cr6.eq) goto loc_821F145C;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x821f1420
	if (!ctx.cr6.gt) goto loc_821F1420;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_821F13E4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,7472(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7472);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82408110
	ctx.lr = 0x821F13F8;
	sub_82408110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x821F1408;
	sub_8259D2A0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x821f13e4
	if (ctx.cr6.lt) goto loc_821F13E4;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// bge cr6,0x821f1510
	if (!ctx.cr6.lt) goto loc_821F1510;
loc_821F1420:
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// subfic r31,r31,5
	ctx.xer.ca = ctx.r31.u32 <= 5;
	ctx.r31.s64 = 5 - ctx.r31.s64;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,3672
	ctx.r29.s64 = ctx.r11.s64 + 3672;
loc_821F1434:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x821F1444;
	sub_8259D2A0(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821f1434
	if (!ctx.cr6.eq) goto loc_821F1434;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_821F145C:
	// addi r30,r31,-2
	ctx.r30.s64 = ctx.r31.s64 + -2;
	// li r7,20
	ctx.r7.s64 = 20;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82369240
	ctx.lr = 0x821F1478;
	sub_82369240(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,-3
	ctx.r5.s64 = -3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x82369240
	ctx.lr = 0x821F1490;
	sub_82369240(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,7472(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7472);
	// bl 0x824081b8
	ctx.lr = 0x821F14A0;
	sub_824081B8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x821f14dc
	if (!ctx.cr6.gt) goto loc_821F14DC;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_821F14B0:
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e9e90
	ctx.lr = 0x821F14C4;
	sub_821E9E90(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x821f14b0
	if (ctx.cr6.lt) goto loc_821F14B0;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// bge cr6,0x821f1510
	if (!ctx.cr6.lt) goto loc_821F1510;
loc_821F14DC:
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// subfic r31,r31,5
	ctx.xer.ca = ctx.r31.u32 <= 5;
	ctx.r31.s64 = 5 - ctx.r31.s64;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,3672
	ctx.r29.s64 = ctx.r11.s64 + 3672;
loc_821F14F0:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x821F1500;
	sub_8259D2A0(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821f14f0
	if (!ctx.cr6.eq) goto loc_821F14F0;
loc_821F1510:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F1518"))) PPC_WEAK_FUNC(sub_821F1518);
PPC_FUNC_IMPL(__imp__sub_821F1518) {
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
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r7,r10,-25040
	ctx.r7.s64 = ctx.r10.s64 + -25040;
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r3,r11,26708
	ctx.r3.s64 = ctx.r11.s64 + 26708;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// bl 0x822219e8
	ctx.lr = 0x821F1554;
	sub_822219E8(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82203858
	ctx.lr = 0x821F1568;
	sub_82203858(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F1578"))) PPC_WEAK_FUNC(sub_821F1578);
PPC_FUNC_IMPL(__imp__sub_821F1578) {
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
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,22016
	ctx.r30.s64 = ctx.r11.s64 + 22016;
	// addi r5,r31,68
	ctx.r5.s64 = ctx.r31.s64 + 68;
	// addi r10,r30,656
	ctx.r10.s64 = ctx.r30.s64 + 656;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lbz r11,1040(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1040);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
	// bl 0x821ea2e8
	ctx.lr = 0x821F15B4;
	sub_821EA2E8(ctx, base);
	// lwz r11,1016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1016);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821f15c8
	if (ctx.cr6.eq) goto loc_821F15C8;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r9.u8);
loc_821F15C8:
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

__attribute__((alias("__imp__sub_821F15E0"))) PPC_WEAK_FUNC(sub_821F15E0);
PPC_FUNC_IMPL(__imp__sub_821F15E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821F15E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82365758
	ctx.lr = 0x821F1610;
	sub_82365758(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821f1624
	if (!ctx.cr6.eq) goto loc_821F1624;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_821F1624:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,4952
	ctx.r3.s64 = ctx.r11.s64 + 4952;
	// bl 0x822050a8
	ctx.lr = 0x821F163C;
	sub_822050A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82347540
	ctx.lr = 0x821F1644;
	sub_82347540(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821F1654;
	sub_8210FCF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82361bd8
	ctx.lr = 0x821F1660;
	sub_82361BD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F1674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x821F1684;
	sub_8259D2A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x821F1694;
	sub_8259D2A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823475c0
	ctx.lr = 0x821F169C;
	sub_823475C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,2472
	ctx.r3.s64 = ctx.r29.s64 + 2472;
	// bl 0x821911c8
	ctx.lr = 0x821F16A8;
	sub_821911C8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F16BC"))) PPC_WEAK_FUNC(sub_821F16BC);
PPC_FUNC_IMPL(__imp__sub_821F16BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F16C0"))) PPC_WEAK_FUNC(sub_821F16C0);
PPC_FUNC_IMPL(__imp__sub_821F16C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821F16C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82347540
	ctx.lr = 0x821F16E0;
	sub_82347540(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,23504
	ctx.r30.s64 = ctx.r11.s64 + 23504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821F16F4;
	sub_8210FCF8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,27204(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27204);
	// bl 0x8210fcf8
	ctx.lr = 0x821F1708;
	sub_8210FCF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// bne cr6,0x821f1728
	if (!ctx.cr6.eq) goto loc_821F1728;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_821F1728:
	// li r9,128
	ctx.r9.s64 = 128;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8236b2f8
	ctx.lr = 0x821F1740;
	sub_8236B2F8(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82361bd8
	ctx.lr = 0x821F1750;
	sub_82361BD8(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F1758"))) PPC_WEAK_FUNC(sub_821F1758);
PPC_FUNC_IMPL(__imp__sub_821F1758) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821f1848
	if (ctx.cr6.gt) goto loc_821F1848;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,6040
	ctx.r12.s64 = ctx.r12.s64 + 6040;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821F17A8;
	case 1:
		goto loc_821F17B4;
	case 2:
		goto loc_821F1828;
	case 3:
		goto loc_821F1810;
	default:
		__builtin_unreachable();
	}
	// lwz r16,6056(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6056);
	// lwz r16,6068(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6068);
	// lwz r16,6184(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6184);
	// lwz r16,6160(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6160);
loc_821F17A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// b 0x821f1848
	goto loc_821F1848;
loc_821F17B4:
	// lbz r9,9(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// addi r11,r11,15320
	ctx.r11.s64 = ctx.r11.s64 + 15320;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r10,23504
	ctx.r31.s64 = ctx.r10.s64 + 23504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r7,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821F17DC;
	sub_8210FCF8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27220
	ctx.r11.s64 = ctx.r11.s64 + 27220;
	// lwz r4,-8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x8210fcf8
	ctx.lr = 0x821F17F4;
	sub_8210FCF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8212e6b8
	ctx.lr = 0x821F1808;
	sub_8212E6B8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x821f183c
	goto loc_821F183C;
loc_821F1810:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,27220
	ctx.r11.s64 = ctx.r11.s64 + 27220;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x821f1838
	goto loc_821F1838;
loc_821F1828:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r4,27220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27220);
loc_821F1838:
	// bl 0x8210fcf8
	ctx.lr = 0x821F183C;
	sub_8210FCF8(ctx, base);
loc_821F183C:
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821F1848;
	sub_82361BD8(ctx, base);
loc_821F1848:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

__attribute__((alias("__imp__sub_821F1860"))) PPC_WEAK_FUNC(sub_821F1860);
PPC_FUNC_IMPL(__imp__sub_821F1860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821F1868;
	__savegprlr_29(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,15320
	ctx.r11.s64 = ctx.r11.s64 + 15320;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,23504
	ctx.r30.s64 = ctx.r10.s64 + 23504;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821F1894;
	sub_8210FCF8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,27296
	ctx.r11.s64 = ctx.r11.s64 + 27296;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r8,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821F18B0;
	sub_8210FCF8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// sth r7,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
	// bne cr6,0x821f18d0
	if (!ctx.cr6.eq) goto loc_821F18D0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_821F18D0:
	// li r9,128
	ctx.r9.s64 = 128;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8236b2f8
	ctx.lr = 0x821F18E8;
	sub_8236B2F8(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82361bd8
	ctx.lr = 0x821F18F8;
	sub_82361BD8(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F1900"))) PPC_WEAK_FUNC(sub_821F1900);
PPC_FUNC_IMPL(__imp__sub_821F1900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821F1908;
	__savegprlr_28(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82121768
	ctx.lr = 0x821F1924;
	sub_82121768(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 7, ctx.xer);
	// bgt cr6,0x821f1af4
	if (ctx.cr6.gt) goto loc_821F1AF4;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,6472
	ctx.r12.s64 = ctx.r12.s64 + 6472;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_821F1968;
	case 1:
		goto loc_821F198C;
	case 2:
		goto loc_821F19A4;
	case 3:
		goto loc_821F19D4;
	case 4:
		goto loc_821F1A04;
	case 5:
		goto loc_821F1A58;
	case 6:
		goto loc_821F1A70;
	case 7:
		goto loc_821F1A88;
	default:
		__builtin_unreachable();
	}
	// lwz r16,6504(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6504);
	// lwz r16,6540(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6540);
	// lwz r16,6564(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6564);
	// lwz r16,6612(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6612);
	// lwz r16,6660(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6660);
	// lwz r16,6744(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6744);
	// lwz r16,6768(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6768);
	// lwz r16,6792(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
loc_821F1968:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r11,r11,27380
	ctx.r11.s64 = ctx.r11.s64 + 27380;
	// addi r3,r9,23504
	ctx.r3.s64 = ctx.r9.s64 + 23504;
	// addi r10,r11,-52
	ctx.r10.s64 = ctx.r11.s64 + -52;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x821f1a98
	goto loc_821F1A98;
loc_821F198C:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,27380
	ctx.r11.s64 = ctx.r11.s64 + 27380;
	// lwz r4,-32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// b 0x821f1a98
	goto loc_821F1A98;
loc_821F19A4:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x821f19b4
	if (ctx.cr6.eq) goto loc_821F19B4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_821F19B4:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,27380
	ctx.r11.s64 = ctx.r11.s64 + 27380;
	// addi r9,r11,-28
	ctx.r9.s64 = ctx.r11.s64 + -28;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x821f1a98
	goto loc_821F1A98;
loc_821F19D4:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x821f19e4
	if (ctx.cr6.eq) goto loc_821F19E4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_821F19E4:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,27380
	ctx.r11.s64 = ctx.r11.s64 + 27380;
	// addi r7,r11,-20
	ctx.r7.s64 = ctx.r11.s64 + -20;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// b 0x821f1a98
	goto loc_821F1A98;
loc_821F1A04:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,15320
	ctx.r11.s64 = ctx.r11.s64 + 15320;
	// addi r31,r10,23504
	ctx.r31.s64 = ctx.r10.s64 + 23504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r5,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821F1A24;
	sub_8210FCF8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27380
	ctx.r11.s64 = ctx.r11.s64 + 27380;
	// lwz r4,-12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// bl 0x8210fcf8
	ctx.lr = 0x821F1A3C;
	sub_8210FCF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8212e6b8
	ctx.lr = 0x821F1A50;
	sub_8212E6B8(ctx, base);
	// addi r31,r1,224
	ctx.r31.s64 = ctx.r1.s64 + 224;
	// b 0x821f1aa0
	goto loc_821F1AA0;
loc_821F1A58:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,27380
	ctx.r11.s64 = ctx.r11.s64 + 27380;
	// lwz r4,-8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// b 0x821f1a98
	goto loc_821F1A98;
loc_821F1A70:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,27380
	ctx.r11.s64 = ctx.r11.s64 + 27380;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x821f1a98
	goto loc_821F1A98;
loc_821F1A88:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r4,27380(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27380);
loc_821F1A98:
	// bl 0x8210fcf8
	ctx.lr = 0x821F1A9C;
	sub_8210FCF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821F1AA0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82362158
	ctx.lr = 0x821F1AB4;
	sub_82362158(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,128
	ctx.r9.s64 = 128;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r11,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8236b2f8
	ctx.lr = 0x821F1AE4;
	sub_8236B2F8(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82361bd8
	ctx.lr = 0x821F1AF4;
	sub_82361BD8(ctx, base);
loc_821F1AF4:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F1AFC"))) PPC_WEAK_FUNC(sub_821F1AFC);
PPC_FUNC_IMPL(__imp__sub_821F1AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F1B00"))) PPC_WEAK_FUNC(sub_821F1B00);
PPC_FUNC_IMPL(__imp__sub_821F1B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821F1B08;
	__savegprlr_28(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r30,r28,24
	ctx.r30.u64 = ctx.r28.u32 & 0xFF;
	// bl 0x820fbe68
	ctx.lr = 0x821F1B28;
	sub_820FBE68(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x821f1b38
	if (ctx.cr6.gt) goto loc_821F1B38;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F1B38:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,574(r31)
	PPC_STORE_U8(ctx.r31.u32 + 574, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821eb3f8
	ctx.lr = 0x821F1B48;
	sub_821EB3F8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f1b64
	if (!ctx.cr6.eq) goto loc_821F1B64;
	// lbz r9,574(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 574);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f1b68
	if (ctx.cr6.eq) goto loc_821F1B68;
loc_821F1B64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F1B68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,573(r31)
	PPC_STORE_U8(ctx.r31.u32 + 573, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821eb2a8
	ctx.lr = 0x821F1B78;
	sub_821EB2A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r7,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r7.u32);
	// bl 0x821eb1b8
	ctx.lr = 0x821F1B90;
	sub_821EB1B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r6,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r6.u32);
	// bl 0x821eb0c0
	ctx.lr = 0x821F1BA8;
	sub_821EB0C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r28,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r28.u8);
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,14528
	ctx.r3.s64 = ctx.r10.s64 + 14528;
	// stb r11,569(r31)
	PPC_STORE_U8(ctx.r31.u32 + 569, ctx.r11.u8);
	// bl 0x821fd0c0
	ctx.lr = 0x821F1BC4;
	sub_821FD0C0(ctx, base);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mulli r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 * 68;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r5,r9,13328
	ctx.r5.s64 = ctx.r9.s64 + 13328;
	// addi r6,r11,-68
	ctx.r6.s64 = ctx.r11.s64 + -68;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x8259da78
	ctx.lr = 0x821F1BE8;
	sub_8259DA78(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r30,r11,3672
	ctx.r30.s64 = ctx.r11.s64 + 3672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8259da78
	ctx.lr = 0x821F1C00;
	sub_8259DA78(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8259da78
	ctx.lr = 0x821F1C10;
	sub_8259DA78(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x8259da78
	ctx.lr = 0x821F1C20;
	sub_8259DA78(ctx, base);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F1C28"))) PPC_WEAK_FUNC(sub_821F1C28);
PPC_FUNC_IMPL(__imp__sub_821F1C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac0
	ctx.lr = 0x821F1C30;
	__savegprlr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stw r3,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r3.u32);
	// li r15,1
	ctx.r15.s64 = 1;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,13096
	ctx.r11.s64 = ctx.r11.s64 + 13096;
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// lwz r22,6936(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6936);
	// bl 0x821f8298
	ctx.lr = 0x821F1C60;
	sub_821F8298(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// clrlwi r23,r14,24
	ctx.r23.u64 = ctx.r14.u32 & 0xFF;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r16,r27
	ctx.r16.u64 = ctx.r27.u64;
	// cmplwi cr6,r23,9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 9, ctx.xer);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// bne cr6,0x821f1d44
	if (!ctx.cr6.eq) goto loc_821F1D44;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,-1416
	ctx.r31.s64 = ctx.r11.s64 + -1416;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,6532
	ctx.r10.s64 = ctx.r31.s64 + 6532;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820fcd20
	ctx.lr = 0x821F1C9C;
	sub_820FCD20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,574(r30)
	PPC_STORE_U8(ctx.r30.u32 + 574, ctx.r7.u8);
	// bl 0x820ff298
	ctx.lr = 0x821F1CBC;
	sub_820FF298(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r15,564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 564, ctx.r15.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stb r11,573(r30)
	PPC_STORE_U8(ctx.r30.u32 + 573, ctx.r11.u8);
	// ld r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// bl 0x820fca50
	ctx.lr = 0x821F1CD4;
	sub_820FCA50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r31,448
	ctx.r5.s64 = ctx.r31.s64 + 448;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// stb r4,570(r30)
	PPC_STORE_U8(ctx.r30.u32 + 570, ctx.r4.u8);
	// bl 0x822d4430
	ctx.lr = 0x821F1CEC;
	sub_822D4430(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,572(r30)
	PPC_STORE_U8(ctx.r30.u32 + 572, ctx.r11.u8);
	// bl 0x82100270
	ctx.lr = 0x821F1D00;
	sub_82100270(ctx, base);
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x821eab70
	ctx.lr = 0x821F1D10;
	sub_821EAB70(ctx, base);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x821f1d1c
	if (!ctx.cr6.eq) goto loc_821F1D1C;
	// stb r15,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r15.u8);
loc_821F1D1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// bl 0x820fcbd0
	ctx.lr = 0x821F1D28;
	sub_820FCBD0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f1d3c
	if (ctx.cr6.eq) goto loc_821F1D3C;
	// stw r15,560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 560, ctx.r15.u32);
	// b 0x821f1e38
	goto loc_821F1E38;
loc_821F1D3C:
	// stw r27,560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 560, ctx.r27.u32);
	// b 0x821f1e38
	goto loc_821F1E38;
loc_821F1D44:
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// add r25,r11,r23
	ctx.r25.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r31,r10,-1416
	ctx.r31.s64 = ctx.r10.s64 + -1416;
	// rlwinm r21,r25,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r20,r31,6180
	ctx.r20.s64 = ctx.r31.s64 + 6180;
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// lwzx r19,r21,r20
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r20.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x821f1e0c
	if (!ctx.cr6.gt) goto loc_821F1E0C;
loc_821F1D70:
	// lwzx r8,r21,r20
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r20.u32);
	// cmpw cr6,r27,r8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x821f1d94
	if (!ctx.cr6.lt) goto loc_821F1D94;
	// mulli r11,r25,14
	ctx.r11.s64 = ctx.r25.s64 * 14;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r5,r31,1252
	ctx.r5.s64 = ctx.r31.s64 + 1252;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r6,r5
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// b 0x821f1d98
	goto loc_821F1D98;
loc_821F1D94:
	// li r29,0
	ctx.r29.s64 = 0;
loc_821F1D98:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// ld r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// bl 0x820fca50
	ctx.lr = 0x821F1DA4;
	sub_820FCA50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fcd20
	ctx.lr = 0x821F1DB4;
	sub_820FCD20(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f1dfc
	if (ctx.cr6.eq) goto loc_821F1DFC;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lbzx r11,r28,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r3.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821f1de0
	if (!ctx.cr6.gt) goto loc_821F1DE0;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_821F1DE0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ff298
	ctx.lr = 0x821F1DEC;
	sub_820FF298(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f1dfc
	if (ctx.cr6.eq) goto loc_821F1DFC;
	// mr r16,r15
	ctx.r16.u64 = ctx.r15.u64;
loc_821F1DFC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r19
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x821f1d70
	if (ctx.cr6.lt) goto loc_821F1D70;
	// b 0x821f1e10
	goto loc_821F1E10;
loc_821F1E0C:
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_821F1E10:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82100270
	ctx.lr = 0x821F1E1C;
	sub_82100270(ctx, base);
	// cmpw cr6,r3,r23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x821f1e28
	if (!ctx.cr6.eq) goto loc_821F1E28;
	// stb r15,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r15.u8);
loc_821F1E28:
	// stb r18,574(r30)
	PPC_STORE_U8(ctx.r30.u32 + 574, ctx.r18.u8);
	// stb r16,573(r30)
	PPC_STORE_U8(ctx.r30.u32 + 573, ctx.r16.u8);
	// stw r17,560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 560, ctx.r17.u32);
	// stw r24,564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 564, ctx.r24.u32);
loc_821F1E38:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// stb r14,568(r30)
	PPC_STORE_U8(ctx.r30.u32 + 568, ctx.r14.u8);
	// bl 0x821eb500
	ctx.lr = 0x821F1E48;
	sub_821EB500(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,3672
	ctx.r31.s64 = ctx.r10.s64 + 3672;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,569(r30)
	PPC_STORE_U8(ctx.r30.u32 + 569, ctx.r11.u8);
	// bl 0x8259da78
	ctx.lr = 0x821F1E68;
	sub_8259DA78(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x8259da78
	ctx.lr = 0x821F1E78;
	sub_8259DA78(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r30,256
	ctx.r3.s64 = ctx.r30.s64 + 256;
	// bl 0x8259da78
	ctx.lr = 0x821F1E88;
	sub_8259DA78(ctx, base);
	// cmpwi cr6,r23,9
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 9, ctx.xer);
	// beq cr6,0x821f1ed8
	if (ctx.cr6.eq) goto loc_821F1ED8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r8,r23,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,15320
	ctx.r11.s64 = ctx.r11.s64 + 15320;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r3,r10,14528
	ctx.r3.s64 = ctx.r10.s64 + 14528;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r8,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// bl 0x821f66c0
	ctx.lr = 0x821F1EB4;
	sub_821F66C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,13328
	ctx.r5.s64 = ctx.r11.s64 + 13328;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r30,416
	ctx.r3.s64 = ctx.r30.s64 + 416;
	// bl 0x8259da78
	ctx.lr = 0x821F1ECC;
	sub_8259DA78(ctx, base);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
loc_821F1ED8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d43e0
	ctx.lr = 0x821F1EE4;
	sub_822D43E0(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// addi r5,r30,416
	ctx.r5.s64 = ctx.r30.s64 + 416;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821f66c0
	ctx.lr = 0x821F1EFC;
	sub_821F66C0(ctx, base);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8259bb10
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F1F08"))) PPC_WEAK_FUNC(sub_821F1F08);
PPC_FUNC_IMPL(__imp__sub_821F1F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821F1F10;
	__savegprlr_28(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,11600
	ctx.r3.s64 = ctx.r11.s64 + 11600;
	// bl 0x821f8288
	ctx.lr = 0x821F1F24;
	sub_821F8288(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-1416
	ctx.r29.s64 = ctx.r11.s64 + -1416;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,272
	ctx.r3.s64 = ctx.r29.s64 + 272;
	// bl 0x820fbce0
	ctx.lr = 0x821F1F3C;
	sub_820FBCE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r11,r11,5168
	ctx.r11.s64 = ctx.r11.s64 + 5168;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stb r6,574(r31)
	PPC_STORE_U8(ctx.r31.u32 + 574, ctx.r6.u8);
	// lwz r7,332(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x821f1f9c
	if (!ctx.cr6.gt) goto loc_821F1F9C;
loc_821F1F6C:
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821f1f9c
	if (!ctx.cr6.eq) goto loc_821F1F9C;
	// addi r3,r11,224
	ctx.r3.s64 = ctx.r11.s64 + 224;
	// lbzx r6,r8,r3
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cmpw cr6,r5,r28
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x821f1f90
	if (!ctx.cr6.eq) goto loc_821F1F90;
	// li r10,1
	ctx.r10.s64 = 1;
loc_821F1F90:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821f1f6c
	if (ctx.cr6.lt) goto loc_821F1F6C;
loc_821F1F9C:
	// addi r3,r29,272
	ctx.r3.s64 = ctx.r29.s64 + 272;
	// stb r10,573(r31)
	PPC_STORE_U8(ctx.r31.u32 + 573, ctx.r10.u8);
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r9,569(r31)
	PPC_STORE_U8(ctx.r31.u32 + 569, ctx.r9.u8);
	// li r8,-3
	ctx.r8.s64 = -3;
	// addi r30,r31,544
	ctx.r30.s64 = ctx.r31.s64 + 544;
	// li r29,8
	ctx.r29.s64 = 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r11,571(r31)
	PPC_STORE_U8(ctx.r31.u32 + 571, ctx.r11.u8);
	// stb r11,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r11.u8);
	// stb r8,570(r31)
	PPC_STORE_U8(ctx.r31.u32 + 570, ctx.r8.u8);
	// stb r29,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r29.u8);
	// stb r9,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
	// bl 0x820fe718
	ctx.lr = 0x821F1FD4;
	sub_820FE718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r29.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r4,r10,16364
	ctx.r4.s64 = ctx.r10.s64 + 16364;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r3,r10,23504
	ctx.r3.s64 = ctx.r10.s64 + 23504;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stw r7,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r7.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821F2000;
	sub_8210FCF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x821ee468
	ctx.lr = 0x821F2018;
	sub_821EE468(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82361bd8
	ctx.lr = 0x821F2028;
	sub_82361BD8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r29,r11,3672
	ctx.r29.s64 = ctx.r11.s64 + 3672;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8259da78
	ctx.lr = 0x821F2040;
	sub_8259DA78(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x8259da78
	ctx.lr = 0x821F2050;
	sub_8259DA78(ctx, base);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259da78
	ctx.lr = 0x821F2060;
	sub_8259DA78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,15352
	ctx.r11.s64 = ctx.r11.s64 + 15352;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// bl 0x8259da78
	ctx.lr = 0x821F207C;
	sub_8259DA78(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F2094;
	sub_821F66C0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x8259da78
	ctx.lr = 0x821F20A4;
	sub_8259DA78(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F20AC"))) PPC_WEAK_FUNC(sub_821F20AC);
PPC_FUNC_IMPL(__imp__sub_821F20AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F20B0"))) PPC_WEAK_FUNC(sub_821F20B0);
PPC_FUNC_IMPL(__imp__sub_821F20B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821F20B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x821f20ec
	if (!ctx.cr6.eq) goto loc_821F20EC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r4,r11,16388
	ctx.r4.s64 = ctx.r11.s64 + 16388;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821f66c0
	ctx.lr = 0x821F20E4;
	sub_821F66C0(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821F20EC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,16380
	ctx.r4.s64 = ctx.r11.s64 + 16380;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,23504
	ctx.r31.s64 = ctx.r11.s64 + 23504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821F2104;
	sub_8210FCF8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,27392
	ctx.r11.s64 = ctx.r11.s64 + 27392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821F2120;
	sub_8210FCF8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// bne cr6,0x821f213c
	if (!ctx.cr6.eq) goto loc_821F213C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_821F213C:
	// li r9,128
	ctx.r9.s64 = 128;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8236b2f8
	ctx.lr = 0x821F2158;
	sub_8236B2F8(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82361bd8
	ctx.lr = 0x821F2168;
	sub_82361BD8(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F2170"))) PPC_WEAK_FUNC(sub_821F2170);
PPC_FUNC_IMPL(__imp__sub_821F2170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821F2178;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821f2400
	if (ctx.cr6.gt) goto loc_821F2400;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,8612
	ctx.r12.s64 = ctx.r12.s64 + 8612;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821F23E8;
	case 1:
		goto loc_821F21B4;
	case 2:
		goto loc_821F2248;
	case 3:
		goto loc_821F21F4;
	default:
		__builtin_unreachable();
	}
	// lwz r16,9192(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9192);
	// lwz r16,8628(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8628);
	// lwz r16,8776(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8776);
	// lwz r16,8692(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8692);
loc_821F21B4:
	// li r10,100
	ctx.r10.s64 = 100;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,10416
	ctx.r30.s64 = ctx.r11.s64 + 10416;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r8,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r8.u64);
	// bl 0x821f7088
	ctx.lr = 0x821F21DC;
	sub_821F7088(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6af0
	ctx.lr = 0x821F21EC;
	sub_821F6AF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821F21F4:
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// bne cr6,0x821f2400
	if (!ctx.cr6.eq) goto loc_821F2400;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x821f2400
	if (!ctx.cr6.eq) goto loc_821F2400;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821f2400
	if (!ctx.cr6.eq) goto loc_821F2400;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,22401(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22401, ctx.r10.u8);
	// bl 0x821f6af0
	ctx.lr = 0x821F2234;
	sub_821F6AF0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821F2248:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgt cr6,0x821f2400
	if (ctx.cr6.gt) goto loc_821F2400;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r30,r11,13000
	ctx.r30.s64 = ctx.r11.s64 + 13000;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r29,r11,10416
	ctx.r29.s64 = ctx.r11.s64 + 10416;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r28,r11,14528
	ctx.r28.s64 = ctx.r11.s64 + 14528;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,8836
	ctx.r12.s64 = ctx.r12.s64 + 8836;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_821F22A0;
	case 1:
		goto loc_821F22BC;
	case 2:
		goto loc_821F22E8;
	case 3:
		goto loc_821F2308;
	case 4:
		goto loc_821F2334;
	case 5:
		goto loc_821F2374;
	case 6:
		goto loc_821F23A4;
	default:
		__builtin_unreachable();
	}
	// lwz r16,8864(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8864);
	// lwz r16,8892(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8892);
	// lwz r16,8936(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8936);
	// lwz r16,8968(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8968);
	// lwz r16,9012(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9012);
	// lwz r16,9076(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9076);
	// lwz r16,9124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9124);
loc_821F22A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fd498
	ctx.lr = 0x821F22B0;
	sub_821FD498(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_821F22BC:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210ff28
	ctx.lr = 0x821F22C8;
	sub_8210FF28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f2400
	if (ctx.cr6.eq) goto loc_821F2400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb6f8
	ctx.lr = 0x821F22DC;
	sub_821EB6F8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_821F22E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb680
	ctx.lr = 0x821F22F0;
	sub_821EB680(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f2400
	if (ctx.cr6.eq) goto loc_821F2400;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
loc_821F2308:
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821f231c
	if (ctx.cr6.eq) goto loc_821F231C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F231C:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821f2400
	if (ctx.cr6.eq) goto loc_821F2400;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
loc_821F2334:
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821f2348
	if (ctx.cr6.eq) goto loc_821F2348;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F2348:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821f2400
	if (!ctx.cr6.eq) goto loc_821F2400;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,22401(r28)
	PPC_STORE_U8(ctx.r28.u32 + 22401, ctx.r11.u8);
	// bl 0x821f6af0
	ctx.lr = 0x821F2368;
	sub_821F6AF0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
loc_821F2374:
	// lwz r11,22348(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 22348);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f2400
	if (!ctx.cr6.eq) goto loc_821F2400;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwz r3,2672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2672);
	// bl 0x823625f0
	ctx.lr = 0x821F2390;
	sub_823625F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f2400
	if (ctx.cr6.eq) goto loc_821F2400;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_821F23A4:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// ld r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// bl 0x820a38e8
	ctx.lr = 0x821F23C8;
	sub_820A38E8(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// lbz r10,1243(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1243);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f2400
	if (!ctx.cr6.eq) goto loc_821F2400;
	// bl 0x820fb198
	ctx.lr = 0x821F23E0;
	sub_820FB198(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821F23E8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// bl 0x821fd698
	ctx.lr = 0x821F23F4;
	sub_821FD698(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210ff60
	ctx.lr = 0x821F2400;
	sub_8210FF60(ctx, base);
loc_821F2400:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F2408"))) PPC_WEAK_FUNC(sub_821F2408);
PPC_FUNC_IMPL(__imp__sub_821F2408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821F2410;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,28608
	ctx.r27.s64 = ctx.r11.s64 + 28608;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
loc_821F2430:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821eb8a0
	ctx.lr = 0x821F243C;
	sub_821EB8A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f2480
	if (ctx.cr6.eq) goto loc_821F2480;
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r9,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r9.u32);
	// bl 0x821eb980
	ctx.lr = 0x821F2464;
	sub_821EB980(ctx, base);
	// lwz r7,168(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r3,4(r6)
	PPC_STORE_U8(ctx.r6.u32 + 4, ctx.r3.u8);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r5.u32);
loc_821F2480:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r4,r27,84
	ctx.r4.s64 = ctx.r27.s64 + 84;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r29,r4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x821f2430
	if (ctx.cr6.lt) goto loc_821F2430;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F249C"))) PPC_WEAK_FUNC(sub_821F249C);
PPC_FUNC_IMPL(__imp__sub_821F249C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F24A0"))) PPC_WEAK_FUNC(sub_821F24A0);
PPC_FUNC_IMPL(__imp__sub_821F24A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821F24A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F24B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821eb8a0
	ctx.lr = 0x821F24C4;
	sub_821EB8A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f24dc
	if (!ctx.cr6.eq) goto loc_821F24DC;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x821f24dc
	if (ctx.cr6.gt) goto loc_821F24DC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_821F24DC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x821f24b8
	if (ctx.cr6.lt) goto loc_821F24B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F24F4"))) PPC_WEAK_FUNC(sub_821F24F4);
PPC_FUNC_IMPL(__imp__sub_821F24F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F24F8"))) PPC_WEAK_FUNC(sub_821F24F8);
PPC_FUNC_IMPL(__imp__sub_821F24F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821F2500;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82365758
	ctx.lr = 0x821F2528;
	sub_82365758(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821f253c
	if (!ctx.cr6.eq) goto loc_821F253C;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_821F253C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,5032
	ctx.r3.s64 = ctx.r11.s64 + 5032;
	// bl 0x822050a8
	ctx.lr = 0x821F2554;
	sub_822050A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82347540
	ctx.lr = 0x821F255C;
	sub_82347540(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821F256C;
	sub_8210FCF8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82361bd8
	ctx.lr = 0x821F2578;
	sub_82361BD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821F258C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x821F259C;
	sub_8259D2A0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x821F25AC;
	sub_8259D2A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823475c0
	ctx.lr = 0x821F25B4;
	sub_823475C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,2472
	ctx.r3.s64 = ctx.r29.s64 + 2472;
	// bl 0x821911c8
	ctx.lr = 0x821F25C0;
	sub_821911C8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F25D4"))) PPC_WEAK_FUNC(sub_821F25D4);
PPC_FUNC_IMPL(__imp__sub_821F25D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F25D8"))) PPC_WEAK_FUNC(sub_821F25D8);
PPC_FUNC_IMPL(__imp__sub_821F25D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821F25E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,3672
	ctx.r30.s64 = ctx.r11.s64 + 3672;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259da78
	ctx.lr = 0x821F2604;
	sub_8259DA78(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x8259da78
	ctx.lr = 0x821F2614;
	sub_8259DA78(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,34
	ctx.r9.s64 = 2228224;
	// addi r28,r11,26080
	ctx.r28.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r8,r9,52520
	ctx.r8.u64 = ctx.r9.u64 | 52520;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r11,r28,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r10,r10,28544
	ctx.r10.s64 = ctx.r10.s64 + 28544;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r9,r7,5956
	ctx.r9.s64 = ctx.r7.s64 * 5956;
	// addi r10,r10,13096
	ctx.r10.s64 = ctx.r10.s64 + 13096;
	// lwz r30,6936(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6936);
	// mulli r10,r6,328
	ctx.r10.s64 = ctx.r6.s64 * 328;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821ec598
	ctx.lr = 0x821F266C;
	sub_821EC598(ctx, base);
	// lwz r27,6928(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6928);
	// extsb r25,r3
	ctx.r25.s64 = ctx.r3.s8;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// bgt cr6,0x821f26bc
	if (ctx.cr6.gt) goto loc_821F26BC;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,9876
	ctx.r12.s64 = ctx.r12.s64 + 9876;
	// rlwinm r0,r27,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r27.u64) {
	case 0:
		goto loc_821F26BC;
	case 1:
		goto loc_821F26B4;
	case 2:
		goto loc_821F26AC;
	case 3:
		goto loc_821F26A4;
	default:
		__builtin_unreachable();
	}
	// lwz r16,9916(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9916);
	// lwz r16,9908(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9908);
	// lwz r16,9900(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9900);
	// lwz r16,9892(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9892);
loc_821F26A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821f26c0
	goto loc_821F26C0;
loc_821F26AC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821f26c0
	goto loc_821F26C0;
loc_821F26B4:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821f26c0
	goto loc_821F26C0;
loc_821F26BC:
	// li r11,3
	ctx.r11.s64 = 3;
loc_821F26C0:
	// stb r11,385(r31)
	PPC_STORE_U8(ctx.r31.u32 + 385, ctx.r11.u8);
	// lwz r11,10688(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10688);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r26,r11,5168
	ctx.r26.s64 = ctx.r11.s64 + 5168;
	// stb r5,384(r31)
	PPC_STORE_U8(ctx.r31.u32 + 384, ctx.r5.u8);
	// lbz r3,401(r26)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + 401);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f26f0
	if (ctx.cr6.eq) goto loc_821F26F0;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x821f26f4
	if (!ctx.cr6.eq) goto loc_821F26F4;
loc_821F26F0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821F26F4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r11,16696
	ctx.r4.s64 = ctx.r11.s64 + 16696;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// stb r10,386(r31)
	PPC_STORE_U8(ctx.r31.u32 + 386, ctx.r10.u8);
	// addi r30,r11,14528
	ctx.r30.s64 = ctx.r11.s64 + 14528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F271C;
	sub_821F66C0(ctx, base);
	// cmplwi cr6,r25,7
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 7, ctx.xer);
	// bgt cr6,0x821f2a04
	if (ctx.cr6.gt) goto loc_821F2A04;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,10044
	ctx.r12.s64 = ctx.r12.s64 + 10044;
	// rlwinm r0,r25,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r25.u64) {
	case 0:
		goto loc_821F284C;
	case 1:
		goto loc_821F292C;
	case 2:
		goto loc_821F28C4;
	case 3:
		goto loc_821F295C;
	case 4:
		goto loc_821F27D4;
	case 5:
		goto loc_821F275C;
	case 6:
		goto loc_821F29C8;
	case 7:
		goto loc_821F2998;
	default:
		__builtin_unreachable();
	}
	// lwz r16,10316(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10316);
	// lwz r16,10540(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10540);
	// lwz r16,10436(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10436);
	// lwz r16,10588(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10588);
	// lwz r16,10196(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10196);
	// lwz r16,10076(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10076);
	// lwz r16,10696(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10696);
	// lwz r16,10648(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10648);
loc_821F275C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r11,16680
	ctx.r4.s64 = ctx.r11.s64 + 16680;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F2774;
	sub_821F66C0(ctx, base);
	// lwz r6,10584(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10584);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bgt cr6,0x821f27b8
	if (ctx.cr6.gt) goto loc_821F27B8;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,28696
	ctx.r11.s64 = ctx.r11.s64 + 28696;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// bl 0x821f66c0
	ctx.lr = 0x821F27AC;
	sub_821F66C0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,16660
	ctx.r4.s64 = ctx.r11.s64 + 16660;
	// b 0x821f29f4
	goto loc_821F29F4;
loc_821F27B8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,13348
	ctx.r5.s64 = ctx.r11.s64 + 13348;
	// bl 0x8259da78
	ctx.lr = 0x821F27C8;
	sub_8259DA78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,16660
	ctx.r4.s64 = ctx.r11.s64 + 16660;
	// b 0x821f29f4
	goto loc_821F29F4;
loc_821F27D4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r11,16680
	ctx.r4.s64 = ctx.r11.s64 + 16680;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F27EC;
	sub_821F66C0(ctx, base);
	// lwz r6,10584(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10584);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// bgt cr6,0x821f2830
	if (ctx.cr6.gt) goto loc_821F2830;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,28696
	ctx.r11.s64 = ctx.r11.s64 + 28696;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// bl 0x821f66c0
	ctx.lr = 0x821F2824;
	sub_821F66C0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15804
	ctx.r4.s64 = ctx.r11.s64 + 15804;
	// b 0x821f29f4
	goto loc_821F29F4;
loc_821F2830:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,13348
	ctx.r5.s64 = ctx.r11.s64 + 13348;
	// bl 0x8259da78
	ctx.lr = 0x821F2840;
	sub_8259DA78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15804
	ctx.r4.s64 = ctx.r11.s64 + 15804;
	// b 0x821f29f4
	goto loc_821F29F4;
loc_821F284C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r11,16680
	ctx.r4.s64 = ctx.r11.s64 + 16680;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F2864;
	sub_821F66C0(ctx, base);
	// lwz r6,10584(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10584);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x821f28a8
	if (ctx.cr6.gt) goto loc_821F28A8;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,28696
	ctx.r11.s64 = ctx.r11.s64 + 28696;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// bl 0x821f66c0
	ctx.lr = 0x821F289C;
	sub_821F66C0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15892
	ctx.r4.s64 = ctx.r11.s64 + 15892;
	// b 0x821f29f4
	goto loc_821F29F4;
loc_821F28A8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,13348
	ctx.r5.s64 = ctx.r11.s64 + 13348;
	// bl 0x8259da78
	ctx.lr = 0x821F28B8;
	sub_8259DA78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15892
	ctx.r4.s64 = ctx.r11.s64 + 15892;
	// b 0x821f29f4
	goto loc_821F29F4;
loc_821F28C4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r11,16648
	ctx.r4.s64 = ctx.r11.s64 + 16648;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F28DC;
	sub_821F66C0(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// lwz r4,10636(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10636);
	// bl 0x821f8538
	ctx.lr = 0x821F28E8;
	sub_821F8538(ctx, base);
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r5,r31,320
	ctx.r5.s64 = ctx.r31.s64 + 320;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r28,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// addi r6,r11,-11776
	ctx.r6.s64 = ctx.r11.s64 + -11776;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// li r6,64
	ctx.r6.s64 = 64;
	// bne cr6,0x821f2920
	if (!ctx.cr6.eq) goto loc_821F2920;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,16628
	ctx.r4.s64 = ctx.r11.s64 + 16628;
	// b 0x821f2a00
	goto loc_821F2A00;
loc_821F2920:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,16612
	ctx.r4.s64 = ctx.r11.s64 + 16612;
	// b 0x821f2a00
	goto loc_821F2A00;
loc_821F292C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r11,16648
	ctx.r4.s64 = ctx.r11.s64 + 16648;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F2944;
	sub_821F66C0(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// lwz r4,10652(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10652);
	// bl 0x821f8538
	ctx.lr = 0x821F2950;
	sub_821F8538(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15840
	ctx.r4.s64 = ctx.r11.s64 + 15840;
	// b 0x821f29f4
	goto loc_821F29F4;
loc_821F295C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r11,16592
	ctx.r4.s64 = ctx.r11.s64 + 16592;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F2974;
	sub_821F66C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r6,10712(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10712);
	// addi r5,r11,13348
	ctx.r5.s64 = ctx.r11.s64 + 13348;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x8259da78
	ctx.lr = 0x821F298C;
	sub_8259DA78(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15820
	ctx.r4.s64 = ctx.r11.s64 + 15820;
	// b 0x821f29f4
	goto loc_821F29F4;
loc_821F2998:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r11,16580
	ctx.r4.s64 = ctx.r11.s64 + 16580;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F29B0;
	sub_821F66C0(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// lfs f1,10592(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 10592);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821fe7d8
	ctx.lr = 0x821F29BC;
	sub_821FE7D8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15772
	ctx.r4.s64 = ctx.r11.s64 + 15772;
	// b 0x821f29f4
	goto loc_821F29F4;
loc_821F29C8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r11,16580
	ctx.r4.s64 = ctx.r11.s64 + 16580;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F29E0;
	sub_821F66C0(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// lfs f1,10592(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 10592);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821fe7d8
	ctx.lr = 0x821F29EC;
	sub_821FE7D8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15756
	ctx.r4.s64 = ctx.r11.s64 + 15756;
loc_821F29F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,320
	ctx.r5.s64 = ctx.r31.s64 + 320;
	// li r6,64
	ctx.r6.s64 = 64;
loc_821F2A00:
	// bl 0x821f66c0
	ctx.lr = 0x821F2A04;
	sub_821F66C0(ctx, base);
loc_821F2A04:
	// lwz r10,324(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 324);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821f2a30
	if (!ctx.cr6.gt) goto loc_821F2A30;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r11,16556
	ctx.r4.s64 = ctx.r11.s64 + 16556;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F2A2C;
	sub_821F66C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_821F2A30:
	// lwz r8,328(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 328);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x821f2a8c
	if (!ctx.cr6.gt) goto loc_821F2A8C;
	// addi r9,r26,168
	ctx.r9.s64 = ctx.r26.s64 + 168;
loc_821F2A44:
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821f2a64
	if (ctx.cr6.eq) goto loc_821F2A64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821f2a44
	if (ctx.cr6.lt) goto loc_821F2A44;
	// b 0x821f2a8c
	goto loc_821F2A8C;
loc_821F2A64:
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r11,16532
	ctx.r4.s64 = ctx.r11.s64 + 16532;
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F2A84;
	sub_821F66C0(ctx, base);
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
loc_821F2A8C:
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bgt cr6,0x821f2b8c
	if (ctx.cr6.gt) goto loc_821F2B8C;
	// lwz r10,332(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821f2ac8
	if (!ctx.cr6.gt) goto loc_821F2AC8;
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r4,r10,16504
	ctx.r4.s64 = ctx.r10.s64 + 16504;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F2AC0;
	sub_821F66C0(ctx, base);
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
loc_821F2AC8:
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bgt cr6,0x821f2b8c
	if (ctx.cr6.gt) goto loc_821F2B8C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x821f2b8c
	if (!ctx.cr6.gt) goto loc_821F2B8C;
	// lbz r10,400(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 400);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f2b30
	if (!ctx.cr6.eq) goto loc_821F2B30;
	// lbz r9,401(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 401);
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// li r6,64
	ctx.r6.s64 = 64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x821f2b1c
	if (ctx.cr6.eq) goto loc_821F2B1C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,16488
	ctx.r4.s64 = ctx.r10.s64 + 16488;
	// bl 0x821f66c0
	ctx.lr = 0x821F2B10;
	sub_821F66C0(ctx, base);
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// b 0x821f2b30
	goto loc_821F2B30;
loc_821F2B1C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,16464
	ctx.r4.s64 = ctx.r10.s64 + 16464;
	// bl 0x821f66c0
	ctx.lr = 0x821F2B28;
	sub_821F66C0(ctx, base);
	// addi r7,r29,1
	ctx.r7.s64 = ctx.r29.s64 + 1;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
loc_821F2B30:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x821f2b8c
	if (ctx.cr6.gt) goto loc_821F2B8C;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// beq cr6,0x821f2b64
	if (ctx.cr6.eq) goto loc_821F2B64;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bne cr6,0x821f2b8c
	if (!ctx.cr6.eq) goto loc_821F2B8C;
	// lbz r6,402(r26)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r26.u32 + 402);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821f2b8c
	if (ctx.cr6.eq) goto loc_821F2B8C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,16436
	ctx.r4.s64 = ctx.r10.s64 + 16436;
	// b 0x821f2b78
	goto loc_821F2B78;
loc_821F2B64:
	// lbz r5,403(r26)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r26.u32 + 403);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821f2b8c
	if (ctx.cr6.eq) goto loc_821F2B8C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,16412
	ctx.r4.s64 = ctx.r10.s64 + 16412;
loc_821F2B78:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// li r6,64
	ctx.r6.s64 = 64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F2B8C;
	sub_821F66C0(ctx, base);
loc_821F2B8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F2B94"))) PPC_WEAK_FUNC(sub_821F2B94);
PPC_FUNC_IMPL(__imp__sub_821F2B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F2B98"))) PPC_WEAK_FUNC(sub_821F2B98);
PPC_FUNC_IMPL(__imp__sub_821F2B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821F2BA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r28,r11,26080
	ctx.r28.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// lwzx r11,r28,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,16800
	ctx.r4.s64 = ctx.r10.s64 + 16800;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r30,r10,23504
	ctx.r30.s64 = ctx.r10.s64 + 23504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r10,r9,328
	ctx.r10.s64 = ctx.r9.s64 * 328;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r11,10580
	ctx.r29.s64 = ctx.r11.s64 + 10580;
	// bl 0x8210fcf8
	ctx.lr = 0x821F2BE8;
	sub_8210FCF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// stw r11,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r11.u32);
	// lfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821fe690
	ctx.lr = 0x821F2BFC;
	sub_821FE690(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,16580
	ctx.r4.s64 = ctx.r11.s64 + 16580;
	// bl 0x8210fcf8
	ctx.lr = 0x821F2C0C;
	sub_8210FCF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// lfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821fe690
	ctx.lr = 0x821F2C20;
	sub_821FE690(ctx, base);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f2c7c
	if (ctx.cr6.eq) goto loc_821F2C7C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821f2c64
	if (ctx.cr6.eq) goto loc_821F2C64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,1972
	ctx.r4.s64 = ctx.r11.s64 + 1972;
	// bl 0x8210fcf8
	ctx.lr = 0x821F2C44;
	sub_8210FCF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,16788
	ctx.r4.s64 = ctx.r10.s64 + 16788;
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821F2C5C;
	sub_8210FCF8(ctx, base);
	// stw r3,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r3.u32);
	// b 0x821f2ca4
	goto loc_821F2CA4;
loc_821F2C64:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,16776
	ctx.r4.s64 = ctx.r11.s64 + 16776;
	// bl 0x8210fcf8
	ctx.lr = 0x821F2C70;
	sub_8210FCF8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,1972
	ctx.r4.s64 = ctx.r10.s64 + 1972;
	// b 0x821f2c90
	goto loc_821F2C90;
loc_821F2C7C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,16756
	ctx.r4.s64 = ctx.r11.s64 + 16756;
	// bl 0x8210fcf8
	ctx.lr = 0x821F2C88;
	sub_8210FCF8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,16744
	ctx.r4.s64 = ctx.r10.s64 + 16744;
loc_821F2C90:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821F2CA0;
	sub_8210FCF8(ctx, base);
	// stw r3,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r3.u32);
loc_821F2CA4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,16732
	ctx.r4.s64 = ctx.r11.s64 + 16732;
	// bl 0x8210fcf8
	ctx.lr = 0x821F2CB4;
	sub_8210FCF8(ctx, base);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r7,r8,16216
	ctx.r7.u64 = ctx.r8.u64 | 16216;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// lwzx r11,r28,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// bl 0x821ee468
	ctx.lr = 0x821F2CF0;
	sub_821EE468(ctx, base);
	// lwz r7,80(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16712
	ctx.r4.s64 = ctx.r11.s64 + 16712;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// bl 0x8259d1b0
	ctx.lr = 0x821F2D08;
	sub_8259D1B0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82361dd0
	ctx.lr = 0x821F2D18;
	sub_82361DD0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F2D20"))) PPC_WEAK_FUNC(sub_821F2D20);
PPC_FUNC_IMPL(__imp__sub_821F2D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x821F2D28;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r22,r11,26080
	ctx.r22.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r31,r25,176
	ctx.r31.s64 = ctx.r25.s64 + 176;
	// lwzx r11,r22,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// ori r26,r9,35736
	ctx.r26.u64 = ctx.r9.u64 | 35736;
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stb r23,205(r25)
	PPC_STORE_U8(ctx.r25.u32 + 205, ctx.r23.u8);
	// addi r28,r27,10568
	ctx.r28.s64 = ctx.r27.s64 + 10568;
	// addi r24,r11,28544
	ctx.r24.s64 = ctx.r11.s64 + 28544;
loc_821F2D70:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232da90
	ctx.lr = 0x821F2D7C;
	sub_8232DA90(ctx, base);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r3,15424
	ctx.r6.s64 = ctx.r3.s64 + 15424;
	// mulli r11,r8,328
	ctx.r11.s64 = ctx.r8.s64 * 328;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,5956
	ctx.r30.s64 = ctx.r30.s64 + 5956;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,10580
	ctx.r11.s64 = ctx.r11.s64 + 10580;
	// addi r28,r28,5956
	ctx.r28.s64 = ctx.r28.s64 + 5956;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// stw r10,-176(r31)
	PPC_STORE_U32(ctx.r31.u32 + -176, ctx.r10.u32);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r9,-152(r31)
	PPC_STORE_U32(ctx.r31.u32 + -152, ctx.r9.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// blt cr6,0x821f2d70
	if (ctx.cr6.lt) goto loc_821F2D70;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x821f2e0c
	if (!ctx.cr6.eq) goto loc_821F2E0C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,16828
	ctx.r4.s64 = ctx.r11.s64 + 16828;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,23504
	ctx.r31.s64 = ctx.r11.s64 + 23504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821F2E00;
	sub_8210FCF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r4,204(r25)
	PPC_STORE_U8(ctx.r25.u32 + 204, ctx.r4.u8);
	// b 0x821f2e28
	goto loc_821F2E28;
loc_821F2E0C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,16812
	ctx.r4.s64 = ctx.r11.s64 + 16812;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,23504
	ctx.r31.s64 = ctx.r11.s64 + 23504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821F2E24;
	sub_8210FCF8(ctx, base);
	// stb r23,204(r25)
	PPC_STORE_U8(ctx.r25.u32 + 204, ctx.r23.u8);
loc_821F2E28:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r3,200(r25)
	PPC_STORE_U32(ctx.r25.u32 + 200, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16732
	ctx.r4.s64 = ctx.r11.s64 + 16732;
	// bl 0x8210fcf8
	ctx.lr = 0x821F2E3C;
	sub_8210FCF8(ctx, base);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r10,r11,16216
	ctx.r10.u64 = ctx.r11.u64 | 16216;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r4,r25,48
	ctx.r4.s64 = ctx.r25.s64 + 48;
	// li r3,64
	ctx.r3.s64 = 64;
	// lwzx r11,r22,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// bl 0x821ee468
	ctx.lr = 0x821F2E78;
	sub_821EE468(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F2E80"))) PPC_WEAK_FUNC(sub_821F2E80);
PPC_FUNC_IMPL(__imp__sub_821F2E80) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,16840
	ctx.r4.s64 = ctx.r11.s64 + 16840;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r30,r11,23504
	ctx.r30.s64 = ctx.r11.s64 + 23504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821F2EB0;
	sub_8210FCF8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,16732
	ctx.r4.s64 = ctx.r11.s64 + 16732;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8210fcf8
	ctx.lr = 0x821F2EC8;
	sub_8210FCF8(ctx, base);
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// bl 0x821ee468
	ctx.lr = 0x821F2F0C;
	sub_821EE468(ctx, base);
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

__attribute__((alias("__imp__sub_821F2F24"))) PPC_WEAK_FUNC(sub_821F2F24);
PPC_FUNC_IMPL(__imp__sub_821F2F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F2F28"))) PPC_WEAK_FUNC(sub_821F2F28);
PPC_FUNC_IMPL(__imp__sub_821F2F28) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821ed228
	sub_821ED228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F2F38"))) PPC_WEAK_FUNC(sub_821F2F38);
PPC_FUNC_IMPL(__imp__sub_821F2F38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F2F3C"))) PPC_WEAK_FUNC(sub_821F2F3C);
PPC_FUNC_IMPL(__imp__sub_821F2F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F2F40"))) PPC_WEAK_FUNC(sub_821F2F40);
PPC_FUNC_IMPL(__imp__sub_821F2F40) {
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
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x822d6240
	ctx.lr = 0x821F2F84;
	sub_822D6240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed388
	ctx.lr = 0x821F2F90;
	sub_821ED388(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,15056
	ctx.r11.s64 = ctx.r11.s64 + 15056;
	// lwzx r3,r5,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821F2FB4"))) PPC_WEAK_FUNC(sub_821F2FB4);
PPC_FUNC_IMPL(__imp__sub_821F2FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F2FB8"))) PPC_WEAK_FUNC(sub_821F2FB8);
PPC_FUNC_IMPL(__imp__sub_821F2FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x821F2FC0;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// sth r24,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r24.u16);
loc_821F2FD8:
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// stwx r9,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r9.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// sthx r24,r4,r31
	PPC_STORE_U16(ctx.r4.u32 + ctx.r31.u32, ctx.r24.u16);
	// sthx r24,r6,r3
	PPC_STORE_U16(ctx.r6.u32 + ctx.r3.u32, ctx.r24.u16);
	// blt cr6,0x821f2fd8
	if (ctx.cr6.lt) goto loc_821F2FD8;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// addi r26,r11,26080
	ctx.r26.s64 = ctx.r11.s64 + 26080;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r25,r11,-1416
	ctx.r25.s64 = ctx.r11.s64 + -1416;
loc_821F3024:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d6240
	ctx.lr = 0x821F302C;
	sub_822D6240(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820fcb70
	ctx.lr = 0x821F303C;
	sub_820FCB70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f309c
	if (ctx.cr6.eq) goto loc_821F309C;
	// addis r11,r26,3
	ctx.r11.s64 = ctx.r26.s64 + 196608;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// bl 0x822d2c68
	ctx.lr = 0x821F3058;
	sub_822D2C68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bne cr6,0x821f3070
	if (!ctx.cr6.eq) goto loc_821F3070;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82347480
	ctx.lr = 0x821F3070;
	sub_82347480(ctx, base);
loc_821F3070:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r30,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lhzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r5,r8,28
	ctx.r5.s64 = ctx.r8.s64 + 28;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r6,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u16);
	// sthx r28,r3,r31
	PPC_STORE_U16(ctx.r3.u32 + ctx.r31.u32, ctx.r28.u16);
loc_821F309C:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmpwi cr6,r27,26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 26, ctx.xer);
	// blt cr6,0x821f3024
	if (ctx.cr6.lt) goto loc_821F3024;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_821F30B4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lhzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x821f3100
	if (!ctx.cr6.gt) goto loc_821F3100;
	// lhz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r11.u32);
	// lhz r4,6(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// addi r3,r10,20
	ctx.r3.s64 = ctx.r10.s64 + 20;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r10,r31
	PPC_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u16);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r8.u16);
loc_821F3100:
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x821f30b4
	if (ctx.cr6.lt) goto loc_821F30B4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F3118"))) PPC_WEAK_FUNC(sub_821F3118);
PPC_FUNC_IMPL(__imp__sub_821F3118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821F3120;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,7520
	ctx.r3.s64 = ctx.r11.s64 + 7520;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82213d10
	ctx.lr = 0x821F3140;
	sub_82213D10(ctx, base);
	// lwz r11,1288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f31e0
	if (!ctx.cr6.eq) goto loc_821F31E0;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,28720(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28720);
	// subf r11,r8,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r8.s64;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
loc_821F3160:
	// addi r10,r7,6
	ctx.r10.s64 = ctx.r7.s64 + 6;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r9,r10,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_821F3174:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f3174
	if (!ctx.cr6.eq) goto loc_821F3174;
	// addi r4,r7,2
	ctx.r4.s64 = ctx.r7.s64 + 2;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r3,r4,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// subf r10,r8,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r8.s64;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_821F319C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f319c
	if (!ctx.cr6.eq) goto loc_821F319C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_821F31B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f31b4
	if (!ctx.cr6.eq) goto loc_821F31B4;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// blt cr6,0x821f3160
	if (ctx.cr6.lt) goto loc_821F3160;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821F31E0:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,4964
	ctx.r3.s64 = ctx.r11.s64 + 4964;
	// bl 0x82109378
	ctx.lr = 0x821F31F4;
	sub_82109378(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821edc90
	ctx.lr = 0x821F3204;
	sub_821EDC90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F320C"))) PPC_WEAK_FUNC(sub_821F320C);
PPC_FUNC_IMPL(__imp__sub_821F320C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F3210"))) PPC_WEAK_FUNC(sub_821F3210);
PPC_FUNC_IMPL(__imp__sub_821F3210) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r31,r11,-24936
	ctx.r31.s64 = ctx.r11.s64 + -24936;
	// addi r3,r31,7520
	ctx.r3.s64 = ctx.r31.s64 + 7520;
	// bl 0x8220b298
	ctx.lr = 0x821F3238;
	sub_8220B298(ctx, base);
	// addi r3,r31,7520
	ctx.r3.s64 = ctx.r31.s64 + 7520;
	// bl 0x8220ae58
	ctx.lr = 0x821F3240;
	sub_8220AE58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f3268
	if (ctx.cr6.eq) goto loc_821F3268;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// addi r3,r11,4964
	ctx.r3.s64 = ctx.r11.s64 + 4964;
	// bl 0x821126e0
	ctx.lr = 0x821F3260;
	sub_821126E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f3270
	goto loc_821F3270;
loc_821F3268:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,3672
	ctx.r4.s64 = ctx.r11.s64 + 3672;
loc_821F3270:
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x821F327C;
	sub_8259D2A0(ctx, base);
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

__attribute__((alias("__imp__sub_821F3294"))) PPC_WEAK_FUNC(sub_821F3294);
PPC_FUNC_IMPL(__imp__sub_821F3294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F3298"))) PPC_WEAK_FUNC(sub_821F3298);
PPC_FUNC_IMPL(__imp__sub_821F3298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821F32A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821f3388
	if (!ctx.cr6.eq) goto loc_821F3388;
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821f3388
	if (ctx.cr6.eq) goto loc_821F3388;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821f3388
	if (ctx.cr6.eq) goto loc_821F3388;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f32e0
	if (!ctx.cr6.eq) goto loc_821F32E0;
	// stw r28,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r28.u32);
loc_821F32E0:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x821f331c
	if (!ctx.cr6.eq) goto loc_821F331C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821f3384
	if (ctx.cr6.eq) goto loc_821F3384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ee808
	ctx.lr = 0x821F32FC;
	sub_823EE808(ctx, base);
	// lbz r9,197(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bl 0x823ee808
	ctx.lr = 0x821F3310;
	sub_823EE808(ctx, base);
	// stw r28,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821F331C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821f3358
	if (!ctx.cr6.eq) goto loc_821F3358;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ee528
	ctx.lr = 0x821F332C;
	sub_821EE528(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823ee808
	ctx.lr = 0x821F333C;
	sub_823EE808(ctx, base);
	// lbz r8,197(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 197);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821f3354
	if (ctx.cr6.eq) goto loc_821F3354;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_821F3354:
	// bl 0x823ee808
	ctx.lr = 0x821F3358;
	sub_823EE808(ctx, base);
loc_821F3358:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x821f3368
	if (!ctx.cr6.eq) goto loc_821F3368;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821f3374
	goto loc_821F3374;
loc_821F3368:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x821f3384
	if (!ctx.cr6.eq) goto loc_821F3384;
	// li r5,1
	ctx.r5.s64 = 1;
loc_821F3374:
	// lis r4,29552
	ctx.r4.s64 = 1936719872;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r4,r4,27506
	ctx.r4.u64 = ctx.r4.u64 | 27506;
	// bl 0x82589708
	ctx.lr = 0x821F3384;
	sub_82589708(ctx, base);
loc_821F3384:
	// stw r28,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r28.u32);
loc_821F3388:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F3390"))) PPC_WEAK_FUNC(sub_821F3390);
PPC_FUNC_IMPL(__imp__sub_821F3390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x821F3398;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x821eea68
	ctx.lr = 0x821F33B0;
	sub_821EEA68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f33c8
	if (!ctx.cr6.eq) goto loc_821F33C8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_821F33C8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r23,31104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31104, ctx.r23.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r11,3672
	ctx.r25.s64 = ctx.r11.s64 + 3672;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// cmplwi cr6,r23,17
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 17, ctx.xer);
	// addi r24,r11,10416
	ctx.r24.s64 = ctx.r11.s64 + 10416;
	// stw r27,31100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31100, ctx.r27.u32);
	// bgt cr6,0x821f3508
	if (ctx.cr6.gt) goto loc_821F3508;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,13316
	ctx.r12.s64 = ctx.r12.s64 + 13316;
	// rlwinm r0,r23,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r23.u64) {
	case 0:
		goto loc_821F344C;
	case 1:
		goto loc_821F3470;
	case 2:
		goto loc_821F3494;
	case 3:
		goto loc_821F3560;
	case 4:
		goto loc_821F3644;
	case 5:
		goto loc_821F36DC;
	case 6:
		goto loc_821F3704;
	case 7:
		goto loc_821F3728;
	case 8:
		goto loc_821F374C;
	case 9:
		goto loc_821F3770;
	case 10:
		goto loc_821F3794;
	case 11:
		goto loc_821F37B8;
	case 12:
		goto loc_821F3808;
	case 13:
		goto loc_821F3860;
	case 14:
		goto loc_821F38D0;
	case 15:
		goto loc_821F3924;
	case 16:
		goto loc_821F3924;
	case 17:
		goto loc_821F38AC;
	default:
		__builtin_unreachable();
	}
	// lwz r16,13388(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13388);
	// lwz r16,13424(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13424);
	// lwz r16,13460(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13460);
	// lwz r16,13664(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13664);
	// lwz r16,13892(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13892);
	// lwz r16,14044(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14044);
	// lwz r16,14084(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14084);
	// lwz r16,14120(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14120);
	// lwz r16,14156(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14156);
	// lwz r16,14192(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14192);
	// lwz r16,14228(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14228);
	// lwz r16,14264(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14264);
	// lwz r16,14344(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14344);
	// lwz r16,14432(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14432);
	// lwz r16,14544(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14544);
	// lwz r16,14628(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14628);
	// lwz r16,14628(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14628);
	// lwz r16,14508(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14508);
loc_821F344C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,-3344
	ctx.r5.s64 = ctx.r10.s64 + -3344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x8236a0e8
	ctx.lr = 0x821F346C;
	sub_8236A0E8(ctx, base);
	// b 0x821f34b4
	goto loc_821F34B4;
loc_821F3470:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,-3344
	ctx.r5.s64 = ctx.r10.s64 + -3344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x8236a0e8
	ctx.lr = 0x821F3490;
	sub_8236A0E8(ctx, base);
	// b 0x821f34b4
	goto loc_821F34B4;
loc_821F3494:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,-3344
	ctx.r5.s64 = ctx.r10.s64 + -3344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
loc_821F34B0:
	// bl 0x8236a0e8
	ctx.lr = 0x821F34B4;
	sub_8236A0E8(ctx, base);
loc_821F34B4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_821F34B8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821f3508
	if (ctx.cr6.eq) goto loc_821F3508;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,31108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31108, ctx.r29.u32);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// stw r11,31100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31100, ctx.r11.u32);
	// bne cr6,0x821f3508
	if (!ctx.cr6.eq) goto loc_821F3508;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r5,r11,16852
	ctx.r5.s64 = ctx.r11.s64 + 16852;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821e6928
	ctx.lr = 0x821F3508;
	sub_821E6928(ctx, base);
loc_821F3508:
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f3554
	if (ctx.cr6.eq) goto loc_821F3554;
	// rlwinm r5,r23,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// add r5,r23,r5
	ctx.r5.u64 = ctx.r23.u64 + ctx.r5.u64;
	// addi r11,r11,10688
	ctx.r11.s64 = ctx.r11.s64 + 10688;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r5,r5,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821e6928
	ctx.lr = 0x821F3554;
	sub_821E6928(ctx, base);
loc_821F3554:
	// lwz r3,31100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31100);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_821F3560:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x82365c40
	ctx.lr = 0x821F3574;
	sub_82365C40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821f3584
	if (!ctx.cr6.eq) goto loc_821F3584;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_821F3584:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f35a8
	if (ctx.cr6.eq) goto loc_821F35A8;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-3344
	ctx.r5.s64 = ctx.r11.s64 + -3344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,8424
	ctx.r3.s64 = ctx.r29.s64 + 8424;
	// b 0x821f34b0
	goto loc_821F34B0;
loc_821F35A8:
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x82368400
	ctx.lr = 0x821F35B0;
	sub_82368400(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r5,16
	ctx.r5.s64 = 16;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,31117
	ctx.r3.s64 = ctx.r31.s64 + 31117;
	// beq cr6,0x821f3638
	if (ctx.cr6.eq) goto loc_821F3638;
	// bl 0x8259d2a0
	ctx.lr = 0x821F35CC;
	sub_8259D2A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221c328
	ctx.lr = 0x821F35D4;
	sub_8221C328(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r7,r7,29400
	ctx.r7.s64 = ctx.r7.s64 + 29400;
	// addi r11,r11,11004
	ctx.r11.s64 = ctx.r11.s64 + 11004;
	// beq cr6,0x821f3620
	if (ctx.cr6.eq) goto loc_821F3620;
	// addi r5,r11,100
	ctx.r5.s64 = ctx.r11.s64 + 100;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x821e6928
	ctx.lr = 0x821F3618;
	sub_821E6928(ctx, base);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x821f3508
	goto loc_821F3508;
loc_821F3620:
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x821e6928
	ctx.lr = 0x821F3630;
	sub_821E6928(ctx, base);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x821f3508
	goto loc_821F3508;
loc_821F3638:
	// bl 0x8259d2a0
	ctx.lr = 0x821F363C;
	sub_8259D2A0(ctx, base);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x821f3508
	goto loc_821F3508;
loc_821F3644:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x82368400
	ctx.lr = 0x821F3654;
	sub_82368400(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// li r5,16
	ctx.r5.s64 = 16;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,31117
	ctx.r3.s64 = ctx.r31.s64 + 31117;
	// beq cr6,0x821f3638
	if (ctx.cr6.eq) goto loc_821F3638;
	// bl 0x8259d2a0
	ctx.lr = 0x821F3670;
	sub_8259D2A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221c328
	ctx.lr = 0x821F3678;
	sub_8221C328(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r7,r7,29400
	ctx.r7.s64 = ctx.r7.s64 + 29400;
	// addi r11,r11,11004
	ctx.r11.s64 = ctx.r11.s64 + 11004;
	// beq cr6,0x821f36c4
	if (ctx.cr6.eq) goto loc_821F36C4;
	// addi r5,r11,100
	ctx.r5.s64 = ctx.r11.s64 + 100;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x821e6928
	ctx.lr = 0x821F36BC;
	sub_821E6928(ctx, base);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x821f3508
	goto loc_821F3508;
loc_821F36C4:
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x821e6928
	ctx.lr = 0x821F36D4;
	sub_821E6928(ctx, base);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x821f3508
	goto loc_821F3508;
loc_821F36DC:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r10,-3344
	ctx.r6.s64 = ctx.r10.s64 + -3344;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821F3700;
	sub_82103ED8(ctx, base);
	// b 0x821f34b4
	goto loc_821F34B4;
loc_821F3704:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821F3724;
	sub_82103ED8(ctx, base);
	// b 0x821f34b4
	goto loc_821F34B4;
loc_821F3728:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,-3344
	ctx.r5.s64 = ctx.r10.s64 + -3344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x8236a0e8
	ctx.lr = 0x821F3748;
	sub_8236A0E8(ctx, base);
	// b 0x821f34b4
	goto loc_821F34B4;
loc_821F374C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,-3344
	ctx.r5.s64 = ctx.r10.s64 + -3344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x8236a0e8
	ctx.lr = 0x821F376C;
	sub_8236A0E8(ctx, base);
	// b 0x821f34b4
	goto loc_821F34B4;
loc_821F3770:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,-3344
	ctx.r5.s64 = ctx.r10.s64 + -3344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x8236a0e8
	ctx.lr = 0x821F3790;
	sub_8236A0E8(ctx, base);
	// b 0x821f34b4
	goto loc_821F34B4;
loc_821F3794:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,-3344
	ctx.r5.s64 = ctx.r10.s64 + -3344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x8236a0e8
	ctx.lr = 0x821F37B4;
	sub_8236A0E8(ctx, base);
	// b 0x821f34b4
	goto loc_821F34B4;
loc_821F37B8:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,31117
	ctx.r3.s64 = ctx.r31.s64 + 31117;
	// bl 0x8259d2a0
	ctx.lr = 0x821F37C8;
	sub_8259D2A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r7,-32225
	ctx.r7.s64 = -2111897600;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r11,r11,11004
	ctx.r11.s64 = ctx.r11.s64 + 11004;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r11,-32
	ctx.r5.s64 = ctx.r11.s64 + -32;
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r7,-2080
	ctx.r7.s64 = ctx.r7.s64 + -2080;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821e6928
	ctx.lr = 0x821F3800;
	sub_821E6928(ctx, base);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x821f3508
	goto loc_821F3508;
loc_821F3808:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r28,r11,26752
	ctx.r28.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-3344
	ctx.r5.s64 = ctx.r11.s64 + -3344;
	// addi r3,r28,8424
	ctx.r3.s64 = ctx.r28.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821F3828;
	sub_82103ED8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x82365c40
	ctx.lr = 0x821F3838;
	sub_82365C40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f3844
	if (ctx.cr6.eq) goto loc_821F3844;
	// bl 0x823475c0
	ctx.lr = 0x821F3844;
	sub_823475C0(ctx, base);
loc_821F3844:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x82365c40
	ctx.lr = 0x821F3850;
	sub_82365C40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f34b8
	if (ctx.cr6.eq) goto loc_821F34B8;
	// stb r27,1580(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1580, ctx.r27.u8);
	// b 0x821f34b8
	goto loc_821F34B8;
loc_821F3860:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,31117
	ctx.r3.s64 = ctx.r31.s64 + 31117;
	// bl 0x8259d2a0
	ctx.lr = 0x821F3870;
	sub_8259D2A0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r5,r10,11004
	ctx.r5.s64 = ctx.r10.s64 + 11004;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r11,-1824
	ctx.r7.s64 = ctx.r11.s64 + -1824;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821e6928
	ctx.lr = 0x821F38A4;
	sub_821E6928(ctx, base);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x821f3508
	goto loc_821F3508;
loc_821F38AC:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,-3344
	ctx.r5.s64 = ctx.r10.s64 + -3344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821F38CC;
	sub_82103ED8(ctx, base);
	// b 0x821f34b4
	goto loc_821F34B4;
loc_821F38D0:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r29,r11,26752
	ctx.r29.s64 = ctx.r11.s64 + 26752;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// bl 0x82369a00
	ctx.lr = 0x821F38E4;
	sub_82369A00(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,2896
	ctx.r3.s64 = ctx.r29.s64 + 2896;
	// beq cr6,0x821f3910
	if (ctx.cr6.eq) goto loc_821F3910;
	// bl 0x8236fed0
	ctx.lr = 0x821F3900;
	sub_8236FED0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// stw r3,31100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31100, ctx.r3.u32);
	// b 0x821f3508
	goto loc_821F3508;
loc_821F3910:
	// bl 0x82368590
	ctx.lr = 0x821F3914;
	sub_82368590(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// stw r3,31100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31100, ctx.r3.u32);
	// b 0x821f3508
	goto loc_821F3508;
loc_821F3924:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365c40
	ctx.lr = 0x821F3938;
	sub_82365C40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f3944
	if (ctx.cr6.eq) goto loc_821F3944;
	// bl 0x823475c0
	ctx.lr = 0x821F3944;
	sub_823475C0(ctx, base);
loc_821F3944:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x821f3508
	goto loc_821F3508;
}

__attribute__((alias("__imp__sub_821F394C"))) PPC_WEAK_FUNC(sub_821F394C);
PPC_FUNC_IMPL(__imp__sub_821F394C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F3950"))) PPC_WEAK_FUNC(sub_821F3950);
PPC_FUNC_IMPL(__imp__sub_821F3950) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r31,31117
	ctx.r3.s64 = ctx.r31.s64 + 31117;
	// bl 0x8259d2a0
	ctx.lr = 0x821F3978;
	sub_8259D2A0(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r30,31112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31112, ctx.r30.u32);
	// ble cr6,0x821f39c8
	if (!ctx.cr6.gt) goto loc_821F39C8;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r10,10904
	ctx.r5.s64 = ctx.r10.s64 + 10904;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r7,r11,-3504
	ctx.r7.s64 = ctx.r11.s64 + -3504;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x821e6928
	ctx.lr = 0x821F39C4;
	sub_821E6928(ctx, base);
	// b 0x821f39d4
	goto loc_821F39D4;
loc_821F39C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821ef250
	ctx.lr = 0x821F39D4;
	sub_821EF250(ctx, base);
loc_821F39D4:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_821F39F0"))) PPC_WEAK_FUNC(sub_821F39F0);
PPC_FUNC_IMPL(__imp__sub_821F39F0) {
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
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f3a24
	if (ctx.cr6.eq) goto loc_821F3A24;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,31104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31104, ctx.r10.u32);
	// b 0x821f3a2c
	goto loc_821F3A2C;
loc_821F3A24:
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r8,31104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31104, ctx.r8.u32);
loc_821F3A2C:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// li r10,1
	ctx.r10.s64 = 1;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r8,r8,-2536
	ctx.r8.s64 = ctx.r8.s64 + -2536;
	// addi r3,r11,15720
	ctx.r3.s64 = ctx.r11.s64 + 15720;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// bl 0x82231538
	ctx.lr = 0x821F3A68;
	sub_82231538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222a678
	ctx.lr = 0x821F3A70;
	sub_8222A678(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,30412
	ctx.r3.s64 = ctx.r11.s64 + 30412;
	// bl 0x8221f518
	ctx.lr = 0x821F3A7C;
	sub_8221F518(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_821F3A98"))) PPC_WEAK_FUNC(sub_821F3A98);
PPC_FUNC_IMPL(__imp__sub_821F3A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821F3AA0;
	__savegprlr_27(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-19744(r1)
	ea = -19744 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lfs f0,21036(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 21036);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lfs f12,-12136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x821f3af8
	if (ctx.cr6.eq) goto loc_821F3AF8;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,9152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9152);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x821f3b04
	if (ctx.cr6.lt) goto loc_821F3B04;
loc_821F3AF8:
	// lwz r10,21048(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21048);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f3b10
	if (ctx.cr6.eq) goto loc_821F3B10;
loc_821F3B04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,19744
	ctx.r1.s64 = ctx.r1.s64 + 19744;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821F3B10:
	// lis r9,7
	ctx.r9.s64 = 458752;
	// stfs f13,21036(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 21036, temp.u32);
	// stw r29,21032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21032, ctx.r29.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// ori r8,r9,14715
	ctx.r8.u64 = ctx.r9.u64 | 14715;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x824201a8
	ctx.lr = 0x821F3B3C;
	sub_824201A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f3c38
	if (!ctx.cr6.eq) goto loc_821F3C38;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,19600
	ctx.r5.s64 = 19600;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825ae950
	ctx.lr = 0x821F3B5C;
	sub_825AE950(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f3c30
	if (!ctx.cr6.eq) goto loc_821F3C30;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821f3be4
	if (ctx.cr6.eq) goto loc_821F3BE4;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_821F3B78:
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r5,r6,0,0,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC0000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821f3bd0
	if (!ctx.cr6.eq) goto loc_821F3BD0;
	// lwz r4,21032(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21032);
	// li r5,196
	ctx.r5.s64 = 196;
	// mulli r11,r4,196
	ctx.r11.s64 = ctx.r4.s64 * 196;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x8259d3a0
	ctx.lr = 0x821F3BA4;
	sub_8259D3A0(ctx, base);
	// lwz r11,21032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21032);
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r11,r11,2529
	ctx.r11.s64 = ctx.r11.s64 + 2529;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r3,r10,r31
	PPC_STORE_U64(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u64);
	// lwz r11,21032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21032);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r29,20028(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20028, ctx.r29.u8);
	// lwz r11,21032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21032);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,21032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21032, ctx.r8.u32);
loc_821F3BD0:
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,196
	ctx.r30.s64 = ctx.r30.s64 + 196;
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821f3b78
	if (ctx.cr6.lt) goto loc_821F3B78;
loc_821F3BE4:
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821f3c2c
	if (ctx.cr6.eq) goto loc_821F3C2C;
	// lwz r11,21032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f3c2c
	if (ctx.cr6.eq) goto loc_821F3C2C;
	// addi r5,r31,19628
	ctx.r5.s64 = ctx.r31.s64 + 19628;
	// stw r29,21052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21052, ctx.r29.u32);
	// addi r4,r31,20028
	ctx.r4.s64 = ctx.r31.s64 + 20028;
	// stw r11,21056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21056, ctx.r11.u32);
	// addi r10,r31,21096
	ctx.r10.s64 = ctx.r31.s64 + 21096;
	// stw r29,21060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21060, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,21064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21064, ctx.r29.u32);
	// stw r5,21040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21040, ctx.r5.u32);
	// stw r4,21044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21044, ctx.r4.u32);
	// stw r10,31096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31096, ctx.r10.u32);
	// bl 0x821e7760
	ctx.lr = 0x821F3C2C;
	sub_821E7760(ctx, base);
loc_821F3C2C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_821F3C30:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825aed30
	ctx.lr = 0x821F3C38;
	sub_825AED30(ctx, base);
loc_821F3C38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,19744
	ctx.r1.s64 = ctx.r1.s64 + 19744;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F3C44"))) PPC_WEAK_FUNC(sub_821F3C44);
PPC_FUNC_IMPL(__imp__sub_821F3C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F3C48"))) PPC_WEAK_FUNC(sub_821F3C48);
PPC_FUNC_IMPL(__imp__sub_821F3C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x821F3C50;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// addis r25,r29,1
	ctx.r25.s64 = ctx.r29.s64 + 65536;
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// addi r25,r25,-31040
	ctx.r25.s64 = ctx.r25.s64 + -31040;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r26,r29,20232
	ctx.r26.s64 = ctx.r29.s64 + 20232;
	// addi r30,r30,-31520
	ctx.r30.s64 = ctx.r30.s64 + -31520;
	// stw r23,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r23.u32);
	// addi r24,r11,26752
	ctx.r24.s64 = ctx.r11.s64 + 26752;
loc_821F3C84:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r24,2896
	ctx.r3.s64 = ctx.r24.s64 + 2896;
	// bl 0x823694b0
	ctx.lr = 0x821F3C98;
	sub_823694B0(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x821f3d00
	if (ctx.cr6.eq) goto loc_821F3D00;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r24,2896
	ctx.r3.s64 = ctx.r24.s64 + 2896;
	// bl 0x823694b0
	ctx.lr = 0x821F3CB8;
	sub_823694B0(ctx, base);
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824085b0
	ctx.lr = 0x821F3CCC;
	sub_824085B0(ctx, base);
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// add r9,r27,r29
	ctx.r9.u64 = ctx.r27.u64 + ctx.r29.u64;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// std r10,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r10.u64);
	// cmpwi cr6,r31,40
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 40, ctx.xer);
	// stb r23,20208(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20208, ctx.r23.u8);
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// blt cr6,0x821f3c84
	if (ctx.cr6.lt) goto loc_821F3C84;
loc_821F3D00:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f3d3c
	if (ctx.cr6.eq) goto loc_821F3D3C;
	// addi r7,r29,20128
	ctx.r7.s64 = ctx.r29.s64 + 20128;
	// stw r23,21052(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21052, ctx.r23.u32);
	// addi r6,r29,20208
	ctx.r6.s64 = ctx.r29.s64 + 20208;
	// stw r11,21056(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21056, ctx.r11.u32);
	// addi r5,r29,21096
	ctx.r5.s64 = ctx.r29.s64 + 21096;
	// stw r23,21060(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21060, ctx.r23.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r23,21064(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21064, ctx.r23.u32);
	// stw r7,21040(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21040, ctx.r7.u32);
	// stw r6,21044(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21044, ctx.r6.u32);
	// stw r5,31096(r29)
	PPC_STORE_U32(ctx.r29.u32 + 31096, ctx.r5.u32);
	// bl 0x821e7760
	ctx.lr = 0x821F3D3C;
	sub_821E7760(ctx, base);
loc_821F3D3C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F3D44"))) PPC_WEAK_FUNC(sub_821F3D44);
PPC_FUNC_IMPL(__imp__sub_821F3D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F3D48"))) PPC_WEAK_FUNC(sub_821F3D48);
PPC_FUNC_IMPL(__imp__sub_821F3D48) {
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
	// lwz r11,21048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21048);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821f3e28
	if (ctx.cr6.lt) goto loc_821F3E28;
	// beq cr6,0x821f3dd0
	if (ctx.cr6.eq) goto loc_821F3DD0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821f3e28
	if (!ctx.cr6.lt) goto loc_821F3E28;
	// addi r3,r31,21068
	ctx.r3.s64 = ctx.r31.s64 + 21068;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821f3e28
	if (ctx.cr6.eq) goto loc_821F3E28;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825aed68
	ctx.lr = 0x821F3D90;
	sub_825AED68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f3db8
	if (ctx.cr6.eq) goto loc_821F3DB8;
	// cmplwi cr6,r11,996
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 996, ctx.xer);
	// bne cr6,0x821f3dc8
	if (!ctx.cr6.eq) goto loc_821F3DC8;
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
loc_821F3DB8:
	// lwz r10,21052(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21052);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,21044(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21044);
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
loc_821F3DC8:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821f3e20
	goto loc_821F3E20;
loc_821F3DD0:
	// addi r3,r31,21068
	ctx.r3.s64 = ctx.r31.s64 + 21068;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,997
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 997, ctx.xer);
	// beq cr6,0x821f3e28
	if (ctx.cr6.eq) goto loc_821F3E28;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825aed68
	ctx.lr = 0x821F3DEC;
	sub_825AED68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f3e1c
	if (ctx.cr6.eq) goto loc_821F3E1C;
	// cmplwi cr6,r11,996
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 996, ctx.xer);
	// beq cr6,0x821f3e28
	if (ctx.cr6.eq) goto loc_821F3E28;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,21048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21048, ctx.r6.u32);
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
loc_821F3E1C:
	// li r4,1
	ctx.r4.s64 = 1;
loc_821F3E20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821efaa8
	ctx.lr = 0x821F3E28;
	sub_821EFAA8(ctx, base);
loc_821F3E28:
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

__attribute__((alias("__imp__sub_821F3E3C"))) PPC_WEAK_FUNC(sub_821F3E3C);
PPC_FUNC_IMPL(__imp__sub_821F3E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F3E40"))) PPC_WEAK_FUNC(sub_821F3E40);
PPC_FUNC_IMPL(__imp__sub_821F3E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// std r4,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r5.u64);
	// addi r10,r11,16876
	ctx.r10.s64 = ctx.r11.s64 + 16876;
	// std r6,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r6.u64);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821F3E7C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821f3e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F3E7C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221f4d8
	ctx.lr = 0x821F3E98;
	sub_8221F4D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823475e8
	ctx.lr = 0x821F3EA0;
	sub_823475E8(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8808
	ctx.r3.s64 = ctx.r11.s64 + 8808;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bl 0x82214a18
	ctx.lr = 0x821F3EB8;
	sub_82214A18(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F3ECC"))) PPC_WEAK_FUNC(sub_821F3ECC);
PPC_FUNC_IMPL(__imp__sub_821F3ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F3ED0"))) PPC_WEAK_FUNC(sub_821F3ED0);
PPC_FUNC_IMPL(__imp__sub_821F3ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821F3ED8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821f0278
	ctx.lr = 0x821F3EE4;
	sub_821F0278(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x821F3EFC;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f3f0c
	if (ctx.cr6.eq) goto loc_821F3F0C;
	// addi r3,r3,1584
	ctx.r3.s64 = ctx.r3.s64 + 1584;
	// b 0x821f3f14
	goto loc_821F3F14;
loc_821F3F0C:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r3,r11,26400
	ctx.r3.s64 = ctx.r11.s64 + 26400;
loc_821F3F14:
	// lbzx r11,r31,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f3f60
	if (!ctx.cr6.eq) goto loc_821F3F60;
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
	// mulli r9,r31,5956
	ctx.r9.s64 = ctx.r31.s64 * 5956;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r10,r8,328
	ctx.r10.s64 = ctx.r8.s64 * 328;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,10580(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 10580);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821f3f60
	if (ctx.cr6.eq) goto loc_821F3F60;
	// li r5,1
	ctx.r5.s64 = 1;
	// stbx r5,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r5.u8);
loc_821F3F60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F3F68"))) PPC_WEAK_FUNC(sub_821F3F68);
PPC_FUNC_IMPL(__imp__sub_821F3F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bac4
	ctx.lr = 0x821F3F70;
	__savegprlr_15(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x8259bb94
	ctx.lr = 0x821F3F78;
	__savefpr_23(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// addi r16,r11,11600
	ctx.r16.s64 = ctx.r11.s64 + 11600;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r22,r10,26080
	ctx.r22.s64 = ctx.r10.s64 + 26080;
	// lwz r11,328(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 328);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821f3fb4
	if (ctx.cr6.eq) goto loc_821F3FB4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821f3fb4
	if (ctx.cr6.eq) goto loc_821F3FB4;
	// stw r29,3184(r17)
	PPC_STORE_U32(ctx.r17.u32 + 3184, ctx.r29.u32);
	// b 0x821f3fd4
	goto loc_821F3FD4;
loc_821F3FB4:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r10,r11,25864
	ctx.r10.u64 = ctx.r11.u64 | 25864;
	// lwzx r11,r22,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// mulli r9,r11,584
	ctx.r9.s64 = ctx.r11.s64 * 584;
	// addis r11,r22,4
	ctx.r11.s64 = ctx.r22.s64 + 262144;
	// addi r8,r11,26176
	ctx.r8.s64 = ctx.r11.s64 + 26176;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r7,3184(r17)
	PPC_STORE_U32(ctx.r17.u32 + 3184, ctx.r7.u32);
loc_821F3FD4:
	// lwz r11,328(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 328);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r30,r11,11712
	ctx.r30.s64 = ctx.r11.s64 + 11712;
	// bne cr6,0x821f4068
	if (!ctx.cr6.eq) goto loc_821F4068;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// ori r5,r6,25864
	ctx.r5.u64 = ctx.r6.u64 | 25864;
	// lwzx r11,r22,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r5.u32);
	// mulli r4,r11,584
	ctx.r4.s64 = ctx.r11.s64 * 584;
	// addis r11,r22,4
	ctx.r11.s64 = ctx.r22.s64 + 262144;
	// addi r3,r11,26180
	ctx.r3.s64 = ctx.r11.s64 + 26180;
	// lwzx r4,r4,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821f4068
	if (ctx.cr6.eq) goto loc_821F4068;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821f84e0
	ctx.lr = 0x821F4014;
	sub_821F84E0(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821F4024;
	sub_8210FCF8(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r18,304(r1)
	PPC_STORE_U16(ctx.r1.u32 + 304, ctx.r18.u16);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8236b2f8
	ctx.lr = 0x821F4054;
	sub_8236B2F8(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r17,3136
	ctx.r4.s64 = ctx.r17.s64 + 3136;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82361bd8
	ctx.lr = 0x821F4064;
	sub_82361BD8(ctx, base);
	// b 0x821f4070
	goto loc_821F4070;
loc_821F4068:
	// li r18,0
	ctx.r18.s64 = 0;
	// stb r18,3136(r17)
	PPC_STORE_U8(ctx.r17.u32 + 3136, ctx.r18.u8);
loc_821F4070:
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_821F4074:
	// lwz r9,328(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 328);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x821f40d4
	if (!ctx.cr6.eq) goto loc_821F40D4;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r8,r10,25864
	ctx.r8.u64 = ctx.r10.u64 | 25864;
	// lwzx r11,r22,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r8.u32);
	// mulli r7,r11,328
	ctx.r7.s64 = ctx.r11.s64 * 328;
	// addis r11,r22,5
	ctx.r11.s64 = ctx.r22.s64 + 327680;
	// addi r6,r11,-29012
	ctx.r6.s64 = ctx.r11.s64 + -29012;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f40d4
	if (!ctx.cr6.eq) goto loc_821F40D4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x821f40b8
	if (!ctx.cr6.eq) goto loc_821F40B8;
	// addi r4,r30,2592
	ctx.r4.s64 = ctx.r30.s64 + 2592;
	// addi r3,r17,2784
	ctx.r3.s64 = ctx.r17.s64 + 2784;
	// b 0x821f4104
	goto loc_821F4104;
loc_821F40B8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f40d4
	if (!ctx.cr6.eq) goto loc_821F40D4;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x821f40d4
	if (!ctx.cr6.eq) goto loc_821F40D4;
	// addi r4,r30,2640
	ctx.r4.s64 = ctx.r30.s64 + 2640;
	// addi r3,r17,2832
	ctx.r3.s64 = ctx.r17.s64 + 2832;
	// b 0x821f4104
	goto loc_821F4104;
loc_821F40D4:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_821F4104:
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x8259d2a0
	ctx.lr = 0x821F410C;
	sub_8259D2A0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// blt cr6,0x821f4074
	if (ctx.cr6.lt) goto loc_821F4074;
	// addi r9,r17,436
	ctx.r9.s64 = ctx.r17.s64 + 436;
	// li r8,6
	ctx.r8.s64 = 6;
loc_821F4120:
	// addi r10,r9,-436
	ctx.r10.s64 = ctx.r9.s64 + -436;
	// li r11,9
	ctx.r11.s64 = 9;
loc_821F4128:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r18,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r18.u8);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f4128
	if (!ctx.cr6.eq) goto loc_821F4128;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r29,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r29.u32);
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// stb r18,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r18.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r9,r9,448
	ctx.r9.s64 = ctx.r9.s64 + 448;
	// bne cr6,0x821f4120
	if (!ctx.cr6.eq) goto loc_821F4120;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// ori r9,r10,25864
	ctx.r9.u64 = ctx.r10.u64 | 25864;
	// ori r5,r6,16216
	ctx.r5.u64 = ctx.r6.u64 | 16216;
	// addis r11,r22,3
	ctx.r11.s64 = ctx.r22.s64 + 196608;
	// addi r8,r11,24760
	ctx.r8.s64 = ctx.r11.s64 + 24760;
	// lwzx r7,r22,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r9.u32);
	// lwzx r11,r22,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r5.u32);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821f4188
	if (!ctx.cr6.eq) goto loc_821F4188;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
loc_821F4188:
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r20,r10,26752
	ctx.r20.s64 = ctx.r10.s64 + 26752;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// std r18,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r18.u64);
	// lwz r5,56(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 56);
	// std r18,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r18.u64);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// std r18,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r18.u64);
	// ble cr6,0x821f4244
	if (!ctx.cr6.gt) goto loc_821F4244;
	// lwz r4,328(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 328);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
loc_821F41B8:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x821f41e0
	if (!ctx.cr6.eq) goto loc_821F41E0;
	// mulli r11,r7,328
	ctx.r11.s64 = ctx.r7.s64 * 328;
	// addis r10,r22,5
	ctx.r10.s64 = ctx.r22.s64 + 327680;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,-29100
	ctx.r10.s64 = ctx.r10.s64 + -29100;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x821f4204
	if (ctx.cr6.gt) goto loc_821F4204;
loc_821F41E0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x821f4200
	if (!ctx.cr6.gt) goto loc_821F4200;
	// mulli r11,r19,328
	ctx.r11.s64 = ctx.r19.s64 * 328;
	// addis r10,r22,5
	ctx.r10.s64 = ctx.r22.s64 + 327680;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,-29428
	ctx.r10.s64 = ctx.r10.s64 + -29428;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821f4204
	goto loc_821F4204;
loc_821F4200:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_821F4204:
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f4234
	if (!ctx.cr6.eq) goto loc_821F4234;
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821f4234
	if (ctx.cr6.eq) goto loc_821F4234;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_821F4234:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,5956
	ctx.r9.s64 = ctx.r9.s64 + 5956;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x821f41b8
	if (ctx.cr6.lt) goto loc_821F41B8;
loc_821F4244:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821F4254:
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x821f4254
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F4254;
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x821f48cc
	if (!ctx.cr6.gt) goto loc_821F48CC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r30,-32253
	ctx.r30.s64 = -2113732608;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfd f23,16920(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16920);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfd f24,16912(r3)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16912);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f28,16904(r4)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16904);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f25,2864(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2864);
	ctx.f25.f64 = double(temp.f32);
	// addi r25,r11,-26180
	ctx.r25.s64 = ctx.r11.s64 + -26180;
	// lfd f29,16896(r6)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r6.u32 + 16896);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f30,-1568(r7)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r7.u32 + -1568);
	// lfs f27,-1548(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1548);
	ctx.f27.f64 = double(temp.f32);
	// addi r21,r1,80
	ctx.r21.s64 = ctx.r1.s64 + 80;
	// lfd f31,-4816(r9)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4816);
	// addi r31,r17,444
	ctx.r31.s64 = ctx.r17.s64 + 444;
	// lfd f26,16888(r10)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16888);
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// addi r27,r11,13348
	ctx.r27.s64 = ctx.r11.s64 + 13348;
loc_821F42D0:
	// stw r23,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r23.u32);
	// lwz r11,328(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 328);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821f4314
	if (!ctx.cr6.eq) goto loc_821F4314;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// addis r10,r22,5
	ctx.r10.s64 = ctx.r22.s64 + 327680;
	// ori r6,r7,25864
	ctx.r6.u64 = ctx.r7.u64 | 25864;
	// addi r10,r10,-29100
	ctx.r10.s64 = ctx.r10.s64 + -29100;
	// lwzx r11,r22,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r6.u32);
	// mulli r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 * 328;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,88(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x821f4314
	if (!ctx.cr6.gt) goto loc_821F4314;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x821f4338
	goto loc_821F4338;
loc_821F4314:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x821f4334
	if (!ctx.cr6.gt) goto loc_821F4334;
	// mulli r11,r19,328
	ctx.r11.s64 = ctx.r19.s64 * 328;
	// addis r10,r22,5
	ctx.r10.s64 = ctx.r22.s64 + 327680;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r10,r10,-29428
	ctx.r10.s64 = ctx.r10.s64 + -29428;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821f4338
	goto loc_821F4338;
loc_821F4334:
	// addi r29,r1,208
	ctx.r29.s64 = ctx.r1.s64 + 208;
loc_821F4338:
	// addis r11,r22,5
	ctx.r11.s64 = ctx.r22.s64 + 327680;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r11,r11,-29152
	ctx.r11.s64 = ctx.r11.s64 + -29152;
	// addi r3,r20,24
	ctx.r3.s64 = ctx.r20.s64 + 24;
	// add r26,r24,r11
	ctx.r26.u64 = ctx.r24.u64 + ctx.r11.u64;
	// bl 0x82365758
	ctx.lr = 0x821F4350;
	sub_82365758(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821f4368
	if (ctx.cr6.eq) goto loc_821F4368;
	// addi r28,r30,1584
	ctx.r28.s64 = ctx.r30.s64 + 1584;
	// bl 0x823475c0
	ctx.lr = 0x821F4364;
	sub_823475C0(ctx, base);
	// b 0x821f4378
	goto loc_821F4378;
loc_821F4368:
	// addis r11,r20,1
	ctx.r11.s64 = ctx.r20.s64 + 65536;
	// addi r3,r20,24
	ctx.r3.s64 = ctx.r20.s64 + 24;
	// addi r28,r11,26400
	ctx.r28.s64 = ctx.r11.s64 + 26400;
	// bl 0x823656e8
	ctx.lr = 0x821F4378;
	sub_823656E8(ctx, base);
loc_821F4378:
	// lbz r4,2472(r20)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r20.u32 + 2472);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x821f43d0
	if (!ctx.cr6.eq) goto loc_821F43D0;
	// lwz r9,2488(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2488);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821f43d0
	if (!ctx.cr6.gt) goto loc_821F43D0;
	// addi r10,r20,2492
	ctx.r10.s64 = ctx.r20.s64 + 2492;
loc_821F4398:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821f43b8
	if (ctx.cr6.eq) goto loc_821F43B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821f4398
	if (ctx.cr6.lt) goto loc_821F4398;
	// b 0x821f43d0
	goto loc_821F43D0;
loc_821F43B8:
	// mulli r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 * 28;
	// addi r6,r20,2519
	ctx.r6.s64 = ctx.r20.s64 + 2519;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x821f43d4
	if (ctx.cr6.eq) goto loc_821F43D4;
loc_821F43D0:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_821F43D4:
	// li r5,48
	ctx.r5.s64 = 48;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// addi r3,r31,-444
	ctx.r3.s64 = ctx.r31.s64 + -444;
	// bl 0x8259d2a0
	ctx.lr = 0x821F43E8;
	sub_8259D2A0(ctx, base);
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r9,40(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// addi r3,r31,-204
	ctx.r3.s64 = ctx.r31.s64 + -204;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// subf r5,r10,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r10.s64;
	// bl 0x8259d1b0
	ctx.lr = 0x821F4400;
	sub_8259D1B0(ctx, base);
	// addi r3,r31,-252
	ctx.r3.s64 = ctx.r31.s64 + -252;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,40(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// bl 0x8259d1b0
	ctx.lr = 0x821F4410;
	sub_8259D1B0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x821f0cd8
	ctx.lr = 0x821F441C;
	sub_821F0CD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,-396
	ctx.r3.s64 = ctx.r31.s64 + -396;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x821F442C;
	sub_8259D1B0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821f4464
	if (ctx.cr6.eq) goto loc_821F4464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222dbc8
	ctx.lr = 0x821F443C;
	sub_8222DBC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,-60
	ctx.r3.s64 = ctx.r31.s64 + -60;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x821F444C;
	sub_8259D1B0(ctx, base);
	// addi r3,r31,-108
	ctx.r3.s64 = ctx.r31.s64 + -108;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,23100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23100);
	// bl 0x8259d1b0
	ctx.lr = 0x821F445C;
	sub_8259D1B0(ctx, base);
	// lwz r5,23120(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23120);
	// b 0x821f448c
	goto loc_821F448C;
loc_821F4464:
	// addi r30,r31,-60
	ctx.r30.s64 = ctx.r31.s64 + -60;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x821F4478;
	sub_8259D1B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x821F4488;
	sub_8259D1B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_821F448C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,-156
	ctx.r3.s64 = ctx.r31.s64 + -156;
	// bl 0x8259d1b0
	ctx.lr = 0x821F4498;
	sub_8259D1B0(ctx, base);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821f44c8
	if (!ctx.cr6.eq) goto loc_821F44C8;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// addi r3,r31,-348
	ctx.r3.s64 = ctx.r31.s64 + -348;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stw r18,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r18.u32);
	// stw r18,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r18.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F44C4;
	sub_8259D1B0(ctx, base);
	// b 0x821f48b0
	goto loc_821F48B0;
loc_821F44C8:
	// stb r18,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r18.u8);
	// lwz r11,328(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 328);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821f48b0
	if (ctx.cr6.gt) goto loc_821F48B0;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,17648
	ctx.r12.s64 = ctx.r12.s64 + 17648;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821F4504;
	case 1:
		goto loc_821F4594;
	case 2:
		goto loc_821F47C4;
	case 3:
		goto loc_821F484C;
	case 4:
		goto loc_821F4880;
	default:
		__builtin_unreachable();
	}
	// lwz r16,17668(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17668);
	// lwz r16,17812(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17812);
	// lwz r16,18372(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18372);
	// lwz r16,18508(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18508);
	// lwz r16,18560(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18560);
loc_821F4504:
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r31,-348
	ctx.r3.s64 = ctx.r31.s64 + -348;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x821f452c
	if (!ctx.cr6.eq) goto loc_821F452C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F4528;
	sub_8259D1B0(ctx, base);
	// b 0x821f453c
	goto loc_821F453C;
loc_821F452C:
	// lfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F453C;
	sub_8259D1B0(ctx, base);
loc_821F453C:
	// lfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,-300
	ctx.r3.s64 = ctx.r31.s64 + -300;
	// fcmpu cr6,f1,f27
	ctx.cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bne cr6,0x821f4574
	if (!ctx.cr6.eq) goto loc_821F4574;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F4560;
	sub_8259D1B0(ctx, base);
	// lwz r6,80(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// stw r6,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r6.u32);
	// lwz r5,40(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// stw r5,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r5.u32);
	// b 0x821f48b0
	goto loc_821F48B0;
loc_821F4574:
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F4580;
	sub_8259D1B0(ctx, base);
	// lwz r6,80(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// stw r6,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r6.u32);
	// lwz r5,40(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// stw r5,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r5.u32);
	// b 0x821f48b0
	goto loc_821F48B0;
loc_821F4594:
	// lbz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// lbz r4,17(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f45e8
	if (ctx.cr6.eq) goto loc_821F45E8;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r31,-348
	ctx.r3.s64 = ctx.r31.s64 + -348;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F45C0;
	sub_8259D1B0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r31,-300
	ctx.r3.s64 = ctx.r31.s64 + -300;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F45D8;
	sub_8259D1B0(ctx, base);
	// lwz r8,40(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// stw r18,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r18.u32);
	// stw r8,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r8.u32);
	// b 0x821f48b0
	goto loc_821F48B0;
loc_821F45E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821f4764
	if (ctx.cr6.eq) goto loc_821F4764;
	// lbz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f4764
	if (!ctx.cr6.eq) goto loc_821F4764;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821f46ac
	if (!ctx.cr6.eq) goto loc_821F46AC;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r3,r31,-348
	ctx.r3.s64 = ctx.r31.s64 + -348;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F4620;
	sub_8259D1B0(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f464c
	if (ctx.cr6.eq) goto loc_821F464C;
	// addi r3,r31,-300
	ctx.r3.s64 = ctx.r31.s64 + -300;
	// lwz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x821F463C;
	sub_8259D1B0(ctx, base);
	// lwz r8,40(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// stw r18,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r18.u32);
	// stw r8,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r8.u32);
	// b 0x821f48b0
	goto loc_821F48B0;
loc_821F464C:
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bgt cr6,0x821f4684
	if (ctx.cr6.gt) goto loc_821F4684;
	// bso cr6,0x821f4684
	if (ctx.cr6.so) goto loc_821F4684;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r31,-300
	ctx.r3.s64 = ctx.r31.s64 + -300;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F4674;
	sub_8259D1B0(ctx, base);
	// lwz r8,40(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// stw r18,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r18.u32);
	// stw r8,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r8.u32);
	// b 0x821f48b0
	goto loc_821F48B0;
loc_821F4684:
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f24.f64;
	// addi r3,r31,-300
	ctx.r3.s64 = ctx.r31.s64 + -300;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F469C;
	sub_8259D1B0(ctx, base);
	// lwz r8,40(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// stw r18,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r18.u32);
	// stw r8,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r8.u32);
	// b 0x821f48b0
	goto loc_821F48B0;
loc_821F46AC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f46f4
	if (!ctx.cr6.eq) goto loc_821F46F4;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r3,r31,-348
	ctx.r3.s64 = ctx.r31.s64 + -348;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F46CC;
	sub_8259D1B0(ctx, base);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r31,-300
	ctx.r3.s64 = ctx.r31.s64 + -300;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F46E4;
	sub_8259D1B0(ctx, base);
	// lwz r8,40(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// stw r18,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r18.u32);
	// stw r8,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r8.u32);
	// b 0x821f48b0
	goto loc_821F48B0;
loc_821F46F4:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821f47b4
	if (!ctx.cr6.eq) goto loc_821F47B4;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r31,-348
	ctx.r3.s64 = ctx.r31.s64 + -348;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F4714;
	sub_8259D1B0(ctx, base);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r3,r31,-300
	ctx.r3.s64 = ctx.r31.s64 + -300;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f4740
	if (ctx.cr6.eq) goto loc_821F4740;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x8259d1b0
	ctx.lr = 0x821F4730;
	sub_8259D1B0(ctx, base);
	// lwz r8,40(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// stw r18,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r18.u32);
	// stw r8,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r8.u32);
	// b 0x821f48b0
	goto loc_821F48B0;
loc_821F4740:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F4754;
	sub_8259D1B0(ctx, base);
	// lwz r8,40(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// stw r18,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r18.u32);
	// stw r8,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r8.u32);
	// b 0x821f48b0
	goto loc_821F48B0;
loc_821F4764:
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// addi r3,r31,-348
	ctx.r3.s64 = ctx.r31.s64 + -348;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// beq cr6,0x821f478c
	if (ctx.cr6.eq) goto loc_821F478C;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F4788;
	sub_8259D1B0(ctx, base);
	// b 0x821f479c
	goto loc_821F479C;
loc_821F478C:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F479C;
	sub_8259D1B0(ctx, base);
loc_821F479C:
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// addi r3,r31,-300
	ctx.r3.s64 = ctx.r31.s64 + -300;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F47B4;
	sub_8259D1B0(ctx, base);
loc_821F47B4:
	// lwz r8,40(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// stw r18,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r18.u32);
	// stw r8,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r8.u32);
	// b 0x821f48b0
	goto loc_821F48B0;
loc_821F47C4:
	// lis r7,4
	ctx.r7.s64 = 262144;
	// ori r6,r7,25864
	ctx.r6.u64 = ctx.r7.u64 | 25864;
	// lwzx r11,r22,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r6.u32);
	// mulli r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 * 328;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addis r11,r22,5
	ctx.r11.s64 = ctx.r22.s64 + 327680;
	// addi r4,r11,-29012
	ctx.r4.s64 = ctx.r11.s64 + -29012;
	// lwzx r3,r5,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r31,-348
	ctx.r3.s64 = ctx.r31.s64 + -348;
	// bne cr6,0x821f4820
	if (!ctx.cr6.eq) goto loc_821F4820;
	// lwz r5,84(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// bl 0x8259d1b0
	ctx.lr = 0x821F47FC;
	sub_8259D1B0(ctx, base);
	// addi r3,r31,-300
	ctx.r3.s64 = ctx.r31.s64 + -300;
	// lwz r5,20(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x821F480C;
	sub_8259D1B0(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// lwz r10,84(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// stw r10,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r10.u32);
	// b 0x821f48b0
	goto loc_821F48B0;
loc_821F4820:
	// lwz r5,56(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x8259d1b0
	ctx.lr = 0x821F4828;
	sub_8259D1B0(ctx, base);
	// addi r3,r31,-300
	ctx.r3.s64 = ctx.r31.s64 + -300;
	// lwz r5,84(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x821F4838;
	sub_8259D1B0(ctx, base);
	// lwz r9,84(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// stw r9,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r9.u32);
	// lwz r8,56(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// stw r8,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r8.u32);
	// b 0x821f48b0
	goto loc_821F48B0;
loc_821F484C:
	// addi r3,r31,-348
	ctx.r3.s64 = ctx.r31.s64 + -348;
	// lwz r5,56(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x821F485C;
	sub_8259D1B0(ctx, base);
	// addi r3,r31,-300
	ctx.r3.s64 = ctx.r31.s64 + -300;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,20(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// bl 0x8259d1b0
	ctx.lr = 0x821F486C;
	sub_8259D1B0(ctx, base);
	// lwz r7,20(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r7,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r7.u32);
	// lwz r6,56(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// stw r6,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r6.u32);
	// b 0x821f48b0
	goto loc_821F48B0;
loc_821F4880:
	// addi r3,r31,-348
	ctx.r3.s64 = ctx.r31.s64 + -348;
	// lwz r5,56(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x821F4890;
	sub_8259D1B0(ctx, base);
	// addi r3,r31,-300
	ctx.r3.s64 = ctx.r31.s64 + -300;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,20(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// bl 0x8259d1b0
	ctx.lr = 0x821F48A0;
	sub_8259D1B0(ctx, base);
	// lwz r5,20(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r5,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r5.u32);
	// lwz r4,56(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// stw r4,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r4.u32);
loc_821F48B0:
	// lwz r11,56(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 56);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// addi r24,r24,5956
	ctx.r24.s64 = ctx.r24.s64 + 5956;
	// addi r31,r31,448
	ctx.r31.s64 = ctx.r31.s64 + 448;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f42d0
	if (ctx.cr6.lt) goto loc_821F42D0;
loc_821F48CC:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r5,448
	ctx.r5.s64 = 448;
	// addi r6,r11,-26680
	ctx.r6.s64 = ctx.r11.s64 + -26680;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x8259cd88
	ctx.lr = 0x821F48E4;
	sub_8259CD88(ctx, base);
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x8259bbe0
	ctx.lr = 0x821F48F0;
	__restfpr_23(ctx, base);
	// b 0x8259bb14
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F48F4"))) PPC_WEAK_FUNC(sub_821F48F4);
PPC_FUNC_IMPL(__imp__sub_821F48F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F48F8"))) PPC_WEAK_FUNC(sub_821F48F8);
PPC_FUNC_IMPL(__imp__sub_821F48F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x821F4900;
	__savegprlr_23(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,11600
	ctx.r30.s64 = ctx.r11.s64 + 11600;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x821f8298
	ctx.lr = 0x821F4920;
	sub_821F8298(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f8288
	ctx.lr = 0x821F492C;
	sub_821F8288(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r10,-1416
	ctx.r29.s64 = ctx.r10.s64 + -1416;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r10,r29,6180
	ctx.r10.s64 = ctx.r29.s64 + 6180;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r28,r26,24
	ctx.r28.u64 = ctx.r26.u32 & 0xFF;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x821f4970
	if (!ctx.cr6.lt) goto loc_821F4970;
	// mulli r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 * 14;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r5,r29,1252
	ctx.r5.s64 = ctx.r29.s64 + 1252;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r6,r5
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// b 0x821f4974
	goto loc_821F4974;
loc_821F4970:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821F4974:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fceb0
	ctx.lr = 0x821F4980;
	sub_820FCEB0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fcd20
	ctx.lr = 0x821F4990;
	sub_820FCD20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r4,r31,544
	ctx.r4.s64 = ctx.r31.s64 + 544;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r7,574(r31)
	PPC_STORE_U8(ctx.r31.u32 + 574, ctx.r7.u8);
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// stw r10,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r10.u32);
	// stb r5,571(r31)
	PPC_STORE_U8(ctx.r31.u32 + 571, ctx.r5.u8);
	// bl 0x822d43e0
	ctx.lr = 0x821F49C8;
	sub_822D43E0(ctx, base);
	// extsb r4,r28
	ctx.r4.s64 = ctx.r28.s8;
	// stb r26,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r26.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821eb5f8
	ctx.lr = 0x821F49D8;
	sub_821EB5F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r8,r4,1
	ctx.r8.s64 = ctx.r4.s64 + 1;
	// stb r8,569(r31)
	PPC_STORE_U8(ctx.r31.u32 + 569, ctx.r8.u8);
	// bl 0x821f20b0
	ctx.lr = 0x821F49F4;
	sub_821F20B0(ctx, base);
	// ld r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// addi r27,r11,14528
	ctx.r27.s64 = ctx.r11.s64 + 14528;
	// beq cr6,0x821f4a3c
	if (ctx.cr6.eq) goto loc_821F4A3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fca90
	ctx.lr = 0x821F4A10;
	sub_820FCA90(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821f4a3c
	if (!ctx.cr6.eq) goto loc_821F4A3C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r4,r11,16940
	ctx.r4.s64 = ctx.r11.s64 + 16940;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F4A34;
	sub_821F66C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r5,575(r31)
	PPC_STORE_U8(ctx.r31.u32 + 575, ctx.r5.u8);
loc_821F4A3C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fcd20
	ctx.lr = 0x821F4A48;
	sub_820FCD20(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821f4a6c
	if (!ctx.cr6.eq) goto loc_821F4A6C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r4,r11,16928
	ctx.r4.s64 = ctx.r11.s64 + 16928;
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F4A6C;
	sub_821F66C0(ctx, base);
loc_821F4A6C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x821f4a94
	if (ctx.cr6.lt) goto loc_821F4A94;
	// addi r11,r29,448
	ctx.r11.s64 = ctx.r29.s64 + 448;
	// lbz r3,574(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 574);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lbzx r10,r25,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
	// beq cr6,0x821f4a98
	if (ctx.cr6.eq) goto loc_821F4A98;
	// li r28,-2
	ctx.r28.s64 = -2;
	// b 0x821f4a98
	goto loc_821F4A98;
loc_821F4A94:
	// li r28,-3
	ctx.r28.s64 = -3;
loc_821F4A98:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r28,570(r31)
	PPC_STORE_U8(ctx.r31.u32 + 570, ctx.r28.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ff298
	ctx.lr = 0x821F4AA8;
	sub_820FF298(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821f4abc
	if (ctx.cr6.eq) goto loc_821F4ABC;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x821f4ad8
	if (ctx.cr6.eq) goto loc_821F4AD8;
loc_821F4ABC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ff1c8
	ctx.lr = 0x821F4AC8;
	sub_820FF1C8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821f4adc
	if (ctx.cr6.eq) goto loc_821F4ADC;
loc_821F4AD8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821F4ADC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,573(r31)
	PPC_STORE_U8(ctx.r31.u32 + 573, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d43e0
	ctx.lr = 0x821F4AEC;
	sub_822D43E0(ctx, base);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r31,416
	ctx.r5.s64 = ctx.r31.s64 + 416;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821f66c0
	ctx.lr = 0x821F4B00;
	sub_821F66C0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ff608
	ctx.lr = 0x821F4B10;
	sub_820FF608(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x821f4b20
	if (ctx.cr6.eq) goto loc_821F4B20;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F4B20:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F4B28"))) PPC_WEAK_FUNC(sub_821F4B28);
PPC_FUNC_IMPL(__imp__sub_821F4B28) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// bl 0x821f24a0
	ctx.lr = 0x821F4B44;
	sub_821F24A0(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,13000
	ctx.r11.s64 = ctx.r11.s64 + 13000;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821f4b68
	if (ctx.cr6.eq) goto loc_821F4B68;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F4B68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f4b90
	if (ctx.cr6.eq) goto loc_821F4B90;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lwz r10,22348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821f4b90
	if (ctx.cr6.eq) goto loc_821F4B90;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r10,22348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22348, ctx.r10.u32);
loc_821F4B90:
	// cmplwi cr6,r30,20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 20, ctx.xer);
	// bgt cr6,0x821f4da0
	if (ctx.cr6.gt) goto loc_821F4DA0;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,19376
	ctx.r12.s64 = ctx.r12.s64 + 19376;
	// rlwinm r0,r30,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_821F4C04;
	case 1:
		goto loc_821F4C04;
	case 2:
		goto loc_821F4CD0;
	case 3:
		goto loc_821F4CD0;
	case 4:
		goto loc_821F4CD0;
	case 5:
		goto loc_821F4CD0;
	case 6:
		goto loc_821F4CD0;
	case 7:
		goto loc_821F4CD0;
	case 8:
		goto loc_821F4CD0;
	case 9:
		goto loc_821F4CD0;
	case 10:
		goto loc_821F4D48;
	case 11:
		goto loc_821F4D48;
	case 12:
		goto loc_821F4D48;
	case 13:
		goto loc_821F4D48;
	case 14:
		goto loc_821F4D48;
	case 15:
		goto loc_821F4D48;
	case 16:
		goto loc_821F4D48;
	case 17:
		goto loc_821F4D48;
	case 18:
		goto loc_821F4D48;
	case 19:
		goto loc_821F4D48;
	case 20:
		goto loc_821F4D74;
	default:
		__builtin_unreachable();
	}
	// lwz r16,19460(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19460);
	// lwz r16,19460(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19460);
	// lwz r16,19664(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19664);
	// lwz r16,19664(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19664);
	// lwz r16,19664(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19664);
	// lwz r16,19664(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19664);
	// lwz r16,19664(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19664);
	// lwz r16,19664(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19664);
	// lwz r16,19664(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19664);
	// lwz r16,19664(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19664);
	// lwz r16,19784(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19784);
	// lwz r16,19784(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19784);
	// lwz r16,19784(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19784);
	// lwz r16,19784(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19784);
	// lwz r16,19784(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19784);
	// lwz r16,19784(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19784);
	// lwz r16,19784(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19784);
	// lwz r16,19784(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19784);
	// lwz r16,19784(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19784);
	// lwz r16,19784(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19784);
	// lwz r16,19828(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19828);
loc_821F4C04:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// lbz r10,1242(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1242);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f4c5c
	if (!ctx.cr6.eq) goto loc_821F4C5C;
	// bl 0x821015a8
	ctx.lr = 0x821F4C1C;
	sub_821015A8(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r5,r10,-580
	ctx.r5.s64 = ctx.r10.s64 + -580;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r4,r10,3672
	ctx.r4.s64 = ctx.r10.s64 + 3672;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r3,r10,10416
	ctx.r3.s64 = ctx.r10.s64 + 10416;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-18432
	ctx.r7.s64 = ctx.r11.s64 + -18432;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821e6928
	ctx.lr = 0x821F4C58;
	sub_821E6928(ctx, base);
	// b 0x821f4da0
	goto loc_821F4DA0;
loc_821F4C5C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,9104
	ctx.r11.s64 = ctx.r11.s64 + 9104;
	// lis r3,-27113
	ctx.r3.s64 = -1776877568;
	// addi r6,r11,6344
	ctx.r6.s64 = ctx.r11.s64 + 6344;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r4,14774
	ctx.r4.s64 = 968228864;
	// addi r30,r11,29016
	ctx.r30.s64 = ctx.r11.s64 + 29016;
	// ori r11,r3,29718
	ctx.r11.u64 = ctx.r3.u64 | 29718;
	// ori r4,r4,30
	ctx.r4.u64 = ctx.r4.u64 | 30;
	// lwzx r6,r5,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822038c8
	ctx.lr = 0x821F4CAC;
	sub_822038C8(ctx, base);
	// lis r10,29453
	ctx.r10.s64 = 1930231808;
	// lis r9,-27583
	ctx.r9.s64 = -1807679488;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,24215
	ctx.r4.u64 = ctx.r10.u64 | 24215;
	// ori r8,r9,16095
	ctx.r8.u64 = ctx.r9.u64 | 16095;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x821f4d98
	goto loc_821F4D98;
loc_821F4CD0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r7,r30,-2
	ctx.r7.s64 = ctx.r30.s64 + -2;
	// addi r11,r11,9104
	ctx.r11.s64 = ctx.r11.s64 + 9104;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,6352
	ctx.r6.s64 = ctx.r11.s64 + 6352;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r3,-27113
	ctx.r3.s64 = -1776877568;
	// lis r4,14774
	ctx.r4.s64 = 968228864;
	// addi r30,r11,29016
	ctx.r30.s64 = ctx.r11.s64 + 29016;
	// ori r11,r3,29718
	ctx.r11.u64 = ctx.r3.u64 | 29718;
	// lwzx r6,r5,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// ori r4,r4,30
	ctx.r4.u64 = ctx.r4.u64 | 30;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822038c8
	ctx.lr = 0x821F4D24;
	sub_822038C8(ctx, base);
	// lis r10,29453
	ctx.r10.s64 = 1930231808;
	// lis r9,-27583
	ctx.r9.s64 = -1807679488;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r10,24215
	ctx.r4.u64 = ctx.r10.u64 | 24215;
	// ori r8,r9,16095
	ctx.r8.u64 = ctx.r9.u64 | 16095;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x821f4d98
	goto loc_821F4D98;
loc_821F4D48:
	// lis r7,14774
	ctx.r7.s64 = 968228864;
	// lis r6,-27113
	ctx.r6.s64 = -1776877568;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r4,r6,29718
	ctx.r4.u64 = ctx.r6.u64 | 29718;
	// ori r5,r7,30
	ctx.r5.u64 = ctx.r7.u64 | 30;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// addi r3,r11,8520
	ctx.r3.s64 = ctx.r11.s64 + 8520;
	// bl 0x82209518
	ctx.lr = 0x821F4D70;
	sub_82209518(ctx, base);
	// b 0x821f4da0
	goto loc_821F4DA0;
loc_821F4D74:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-27583
	ctx.r10.s64 = -1807679488;
	// addi r5,r11,9104
	ctx.r5.s64 = ctx.r11.s64 + 9104;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r9,r10,15954
	ctx.r9.u64 = ctx.r10.u64 | 15954;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// lis r11,-9760
	ctx.r11.s64 = -639631360;
	// ori r4,r11,52986
	ctx.r4.u64 = ctx.r11.u64 | 52986;
	// rldimi r4,r9,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
loc_821F4D98:
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x820a38e8
	ctx.lr = 0x821F4DA0;
	sub_820A38E8(ctx, base);
loc_821F4DA0:
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

__attribute__((alias("__imp__sub_821F4DB8"))) PPC_WEAK_FUNC(sub_821F4DB8);
PPC_FUNC_IMPL(__imp__sub_821F4DB8) {
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
	// bl 0x821f24a0
	ctx.lr = 0x821F4DC8;
	sub_821F24A0(ctx, base);
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

__attribute__((alias("__imp__sub_821F4DDC"))) PPC_WEAK_FUNC(sub_821F4DDC);
PPC_FUNC_IMPL(__imp__sub_821F4DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F4DE0"))) PPC_WEAK_FUNC(sub_821F4DE0);
PPC_FUNC_IMPL(__imp__sub_821F4DE0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// sth r10,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// sth r9,312(r31)
	PPC_STORE_U16(ctx.r31.u32 + 312, ctx.r9.u16);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// stb r10,566(r31)
	PPC_STORE_U8(ctx.r31.u32 + 566, ctx.r10.u8);
	// sth r10,568(r31)
	PPC_STORE_U16(ctx.r31.u32 + 568, ctx.r10.u16);
	// stb r10,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r10.u8);
	// stb r10,465(r31)
	PPC_STORE_U8(ctx.r31.u32 + 465, ctx.r10.u8);
loc_821F4E2C:
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r11,20
	ctx.r6.s64 = ctx.r11.s64 + 20;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r5,r8,r31
	ctx.r5.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// std r10,328(r5)
	PPC_STORE_U64(ctx.r5.u32 + 328, ctx.r10.u64);
	// stdx r10,r4,r31
	PPC_STORE_U64(ctx.r4.u32 + ctx.r31.u32, ctx.r10.u64);
	// blt cr6,0x821f4e2c
	if (ctx.cr6.lt) goto loc_821F4E2C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823610a0
	ctx.lr = 0x821F4E5C;
	sub_823610A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x825af8e8
	ctx.lr = 0x821F4E6C;
	sub_825AF8E8(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mulli r3,r30,1000
	ctx.r3.s64 = ctx.r30.s64 * 1000;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f7.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// stw r9,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r9.u32);
	// bl 0x821f2fb8
	ctx.lr = 0x821F4EBC;
	sub_821F2FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed1a0
	ctx.lr = 0x821F4EC4;
	sub_821ED1A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_821F4EE0"))) PPC_WEAK_FUNC(sub_821F4EE0);
PPC_FUNC_IMPL(__imp__sub_821F4EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,16876
	ctx.r11.s64 = ctx.r11.s64 + 16876;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8221f4d8
	ctx.lr = 0x821F4F08;
	sub_8221F4D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823475e8
	ctx.lr = 0x821F4F10;
	sub_823475E8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r10,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r10.u8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stb r10,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r10.u8);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F4F50"))) PPC_WEAK_FUNC(sub_821F4F50);
PPC_FUNC_IMPL(__imp__sub_821F4F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821F4F58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// addi r29,r10,26752
	ctx.r29.s64 = ctx.r10.s64 + 26752;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// addi r3,r29,8424
	ctx.r3.s64 = ctx.r29.s64 + 8424;
	// addi r31,r10,26080
	ctx.r31.s64 = ctx.r10.s64 + 26080;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r4,r8,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// bl 0x82103ed8
	ctx.lr = 0x821F4F8C;
	sub_82103ED8(ctx, base);
	// lbz r28,9(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// stb r28,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r28.u8);
	// bl 0x82104600
	ctx.lr = 0x821F4FA0;
	sub_82104600(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f4fc8
	if (ctx.cr6.eq) goto loc_821F4FC8;
	// clrlwi r7,r28,24
	ctx.r7.u64 = ctx.r28.u32 & 0xFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821f4fc0
	if (!ctx.cr6.eq) goto loc_821F4FC0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821F4FC0:
	// addi r6,r31,2589
	ctx.r6.s64 = ctx.r31.s64 + 2589;
	// stbx r10,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
loc_821F4FC8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821f4fdc
	if (ctx.cr6.eq) goto loc_821F4FDC;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
loc_821F4FDC:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// bl 0x823656e8
	ctx.lr = 0x821F4FEC;
	sub_823656E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r29,2472
	ctx.r3.s64 = ctx.r29.s64 + 2472;
	// bl 0x821f3298
	ctx.lr = 0x821F5000;
	sub_821F3298(ctx, base);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r4,r5,16728
	ctx.r4.u64 = ctx.r5.u64 | 16728;
	// stbx r11,r29,r4
	PPC_STORE_U8(ctx.r29.u32 + ctx.r4.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F5018"))) PPC_WEAK_FUNC(sub_821F5018);
PPC_FUNC_IMPL(__imp__sub_821F5018) {
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
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x821f5050
	if (ctx.cr6.gt) goto loc_821F5050;
	// bl 0x821f48f8
	ctx.lr = 0x821F503C;
	sub_821F48F8(ctx, base);
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
loc_821F5050:
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x821f5060
	if (!ctx.cr6.eq) goto loc_821F5060;
	// bl 0x821ead90
	ctx.lr = 0x821F505C;
	sub_821EAD90(ctx, base);
	// b 0x821f506c
	goto loc_821F506C;
loc_821F5060:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x821f506c
	if (!ctx.cr6.eq) goto loc_821F506C;
	// bl 0x821f1f08
	ctx.lr = 0x821F506C;
	sub_821F1F08(ctx, base);
loc_821F506C:
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

__attribute__((alias("__imp__sub_821F5084"))) PPC_WEAK_FUNC(sub_821F5084);
PPC_FUNC_IMPL(__imp__sub_821F5084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5088"))) PPC_WEAK_FUNC(sub_821F5088);
PPC_FUNC_IMPL(__imp__sub_821F5088) {
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
	// bl 0x821f4ee0
	ctx.lr = 0x821F50A0;
	sub_821F4EE0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,31784
	ctx.r5.s64 = ctx.r10.s64 + 31784;
	// stb r9,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r9.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,15864
	ctx.r3.s64 = ctx.r11.s64 + 15864;
	// bl 0x82220fe0
	ctx.lr = 0x821F50CC;
	sub_82220FE0(ctx, base);
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

__attribute__((alias("__imp__sub_821F50E4"))) PPC_WEAK_FUNC(sub_821F50E4);
PPC_FUNC_IMPL(__imp__sub_821F50E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F50E8"))) PPC_WEAK_FUNC(sub_821F50E8);
PPC_FUNC_IMPL(__imp__sub_821F50E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stw r5,760(r4)
	PPC_STORE_U32(ctx.r4.u32 + 760, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F50F8"))) PPC_WEAK_FUNC(sub_821F50F8);
PPC_FUNC_IMPL(__imp__sub_821F50F8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r4.u32);
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// bl 0x822add70
	ctx.lr = 0x821F5120;
	sub_822ADD70(ctx, base);
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821f5140
	if (ctx.cr6.eq) goto loc_821F5140;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821f5140
	if (ctx.cr6.eq) goto loc_821F5140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ade70
	ctx.lr = 0x821F5140;
	sub_822ADE70(ctx, base);
loc_821F5140:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r30.u32);
	// bl 0x822add90
	ctx.lr = 0x821F514C;
	sub_822ADD90(ctx, base);
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

__attribute__((alias("__imp__sub_821F5164"))) PPC_WEAK_FUNC(sub_821F5164);
PPC_FUNC_IMPL(__imp__sub_821F5164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5168"))) PPC_WEAK_FUNC(sub_821F5168);
PPC_FUNC_IMPL(__imp__sub_821F5168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// std r7,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r7.u64);
	// lfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,3624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3624);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,3824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3824);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f9.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821f51b8
	if (ctx.cr6.gt) goto loc_821F51B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821f51c4
	goto loc_821F51C4;
loc_821F51B8:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x821f51c4
	if (ctx.cr6.lt) goto loc_821F51C4;
	// li r11,255
	ctx.r11.s64 = 255;
loc_821F51C4:
	// srawi r5,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 8;
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// addi r6,r1,-8
	ctx.r6.s64 = ctx.r1.s64 + -8;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f8,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfiwx f3,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f3.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821f5208
	if (ctx.cr6.gt) goto loc_821F5208;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821f5214
	goto loc_821F5214;
loc_821F5208:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x821f5214
	if (ctx.cr6.lt) goto loc_821F5214;
	// li r11,255
	ctx.r11.s64 = 255;
loc_821F5214:
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// addi r8,r1,-8
	ctx.r8.s64 = ctx.r1.s64 + -8;
	// std r7,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r7.u64);
	// lfd f2,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f9.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821f5254
	if (ctx.cr6.gt) goto loc_821F5254;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821f5260
	goto loc_821F5260;
loc_821F5254:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x821f5260
	if (ctx.cr6.lt) goto loc_821F5260;
	// li r11,255
	ctx.r11.s64 = 255;
loc_821F5260:
	// rlwinm r3,r3,8,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// addi r4,r1,-8
	ctx.r4.s64 = ctx.r1.s64 + -8;
	// std r3,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r3.u64);
	// lfd f8,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfiwx f3,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f3.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821f52a8
	if (ctx.cr6.gt) goto loc_821F52A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821F52A8:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x821f52b4
	if (ctx.cr6.lt) goto loc_821F52B4;
	// li r11,255
	ctx.r11.s64 = 255;
loc_821F52B4:
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F52C0"))) PPC_WEAK_FUNC(sub_821F52C0);
PPC_FUNC_IMPL(__imp__sub_821F52C0) {
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
	// li r10,256
	ctx.r10.s64 = 256;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r9,384
	ctx.r9.s64 = 384;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stb r10,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r10.u8);
	// stb r10,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r10.u8);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82428a40
	ctx.lr = 0x821F5334;
	sub_82428A40(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F5344"))) PPC_WEAK_FUNC(sub_821F5344);
PPC_FUNC_IMPL(__imp__sub_821F5344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5348"))) PPC_WEAK_FUNC(sub_821F5348);
PPC_FUNC_IMPL(__imp__sub_821F5348) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f538c
	if (ctx.cr6.eq) goto loc_821F538C;
loc_821F5358:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x821f5368
	if (ctx.cr6.lt) goto loc_821F5368;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// ble cr6,0x821f5394
	if (!ctx.cr6.gt) goto loc_821F5394;
loc_821F5368:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x821f5378
	if (ctx.cr6.lt) goto loc_821F5378;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// ble cr6,0x821f5394
	if (!ctx.cr6.gt) goto loc_821F5394;
loc_821F5378:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f5358
	if (!ctx.cr6.eq) goto loc_821F5358;
loc_821F538C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821F5394:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F539C"))) PPC_WEAK_FUNC(sub_821F539C);
PPC_FUNC_IMPL(__imp__sub_821F539C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F53A0"))) PPC_WEAK_FUNC(sub_821F53A0);
PPC_FUNC_IMPL(__imp__sub_821F53A0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 256);
	// li r6,0
	ctx.r6.s64 = 0;
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821f5414
	if (!ctx.cr6.gt) goto loc_821F5414;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_821F53BC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_821F53C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x821f53e8
	if (ctx.cr6.eq) goto loc_821F53E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821f53c4
	if (ctx.cr6.eq) goto loc_821F53C4;
loc_821F53E8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821f5408
	if (ctx.cr6.eq) goto loc_821F5408;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x821f53bc
	if (ctx.cr6.lt) goto loc_821F53BC;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_821F5408:
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
loc_821F5414:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F541C"))) PPC_WEAK_FUNC(sub_821F541C);
PPC_FUNC_IMPL(__imp__sub_821F541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5420"))) PPC_WEAK_FUNC(sub_821F5420);
PPC_FUNC_IMPL(__imp__sub_821F5420) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 256);
	// li r6,0
	ctx.r6.s64 = 0;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x821f547c
	if (!ctx.cr6.gt) goto loc_821F547C;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_821F5438:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_821F5440:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x821f5464
	if (ctx.cr6.eq) goto loc_821F5464;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821f5440
	if (ctx.cr6.eq) goto loc_821F5440;
loc_821F5464:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821f5484
	if (ctx.cr6.eq) goto loc_821F5484;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x821f5438
	if (ctx.cr6.lt) goto loc_821F5438;
loc_821F547C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821F5484:
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F5494"))) PPC_WEAK_FUNC(sub_821F5494);
PPC_FUNC_IMPL(__imp__sub_821F5494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5498"))) PPC_WEAK_FUNC(sub_821F5498);
PPC_FUNC_IMPL(__imp__sub_821F5498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821F54A0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,7632
	ctx.r3.s64 = ctx.r31.s64 + 7632;
	// lfs f31,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,22320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 22320, temp.u32);
	// stfs f31,22324(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 22324, temp.u32);
	// stfs f31,22328(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 22328, temp.u32);
	// stfs f31,22332(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 22332, temp.u32);
	// bl 0x82351a20
	ctx.lr = 0x821F54D0;
	sub_82351A20(ctx, base);
	// addi r3,r31,7664
	ctx.r3.s64 = ctx.r31.s64 + 7664;
	// bl 0x82351a20
	ctx.lr = 0x821F54D8;
	sub_82351A20(ctx, base);
	// addi r28,r31,7552
	ctx.r28.s64 = ctx.r31.s64 + 7552;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82351a68
	ctx.lr = 0x821F54E4;
	sub_82351A68(ctx, base);
	// lis r29,-32161
	ctx.r29.s64 = -2107703296;
	// lis r30,-32161
	ctx.r30.s64 = -2107703296;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,31232(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31232);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f0,31236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 31236);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f0,31492(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31492);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f30,31488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31488);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,7704(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7704, temp.u32);
	// fmuls f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f10,7708(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7708, temp.u32);
	// bl 0x825c6b6c
	ctx.lr = 0x821F5524;
	__imp__XGetVideoMode(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r9,-32091
	ctx.r9.s64 = -2103115776;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r3,r11,12656
	ctx.r3.s64 = ctx.r11.s64 + 12656;
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// beq cr6,0x821f5580
	if (ctx.cr6.eq) goto loc_821F5580;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,12828(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12828, ctx.r10.u8);
loc_821F5548:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// lfs f0,31232(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31232);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821f55c8
	if (ctx.cr6.eq) goto loc_821F55C8;
	// fdivs f5,f31,f0
	ctx.f5.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f0,31236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 31236);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f4,f31,f0
	ctx.f4.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f0,31484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31484);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f3,7696(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7696, temp.u32);
	// fmuls f2,f4,f30
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// stfs f2,7700(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7700, temp.u32);
	// b 0x821f5600
	goto loc_821F5600;
loc_821F5580:
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r10,12828(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12828, ctx.r10.u8);
	// beq cr6,0x821f5548
	if (ctx.cr6.eq) goto loc_821F5548;
	// lfs f0,31232(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 31232);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fdivs f9,f31,f0
	ctx.f9.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f0,31236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 31236);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f8,f31,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f0,31480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31480);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f0,31476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31476);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,7696(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7696, temp.u32);
	// stfs f6,7700(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7700, temp.u32);
	// b 0x821f5600
	goto loc_821F5600;
loc_821F55C8:
	// fdivs f1,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f0,31236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 31236);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f0,31484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31484);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,26672
	ctx.r11.s64 = ctx.r11.s64 + 26672;
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,7696(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7696, temp.u32);
	// stfs f9,7700(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7700, temp.u32);
loc_821F5600:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82142cc8
	ctx.lr = 0x821F5614;
	sub_82142CC8(ctx, base);
	// lfs f8,7704(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7704);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f7,7708(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7708);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f6,f8,f1
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f5,f7,f1
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82351ac0
	ctx.lr = 0x821F563C;
	sub_82351AC0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F564C"))) PPC_WEAK_FUNC(sub_821F564C);
PPC_FUNC_IMPL(__imp__sub_821F564C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5650"))) PPC_WEAK_FUNC(sub_821F5650);
PPC_FUNC_IMPL(__imp__sub_821F5650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821F5658;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,22336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22336);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// bgt cr6,0x821f5814
	if (ctx.cr6.gt) goto loc_821F5814;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,22152
	ctx.r12.s64 = ctx.r12.s64 + 22152;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821F5768;
	case 1:
		goto loc_821F5770;
	case 2:
		goto loc_821F57BC;
	case 3:
		goto loc_821F5814;
	case 4:
		goto loc_821F5814;
	case 5:
		goto loc_821F5814;
	case 6:
		goto loc_821F5814;
	case 7:
		goto loc_821F5814;
	case 8:
		goto loc_821F5814;
	case 9:
		goto loc_821F5814;
	case 10:
		goto loc_821F5814;
	case 11:
		goto loc_821F5814;
	case 12:
		goto loc_821F5814;
	case 13:
		goto loc_821F5814;
	case 14:
		goto loc_821F5814;
	case 15:
		goto loc_821F5814;
	case 16:
		goto loc_821F5814;
	case 17:
		goto loc_821F5814;
	case 18:
		goto loc_821F5814;
	case 19:
		goto loc_821F5814;
	case 20:
		goto loc_821F5814;
	case 21:
		goto loc_821F5814;
	case 22:
		goto loc_821F5814;
	case 23:
		goto loc_821F5814;
	case 24:
		goto loc_821F5814;
	case 25:
		goto loc_821F5814;
	case 26:
		goto loc_821F5814;
	case 27:
		goto loc_821F57D8;
	case 28:
		goto loc_821F5814;
	case 29:
		goto loc_821F5814;
	case 30:
		goto loc_821F5814;
	case 31:
		goto loc_821F5814;
	case 32:
		goto loc_821F5814;
	case 33:
		goto loc_821F5814;
	case 34:
		goto loc_821F5814;
	case 35:
		goto loc_821F5814;
	case 36:
		goto loc_821F5814;
	case 37:
		goto loc_821F5814;
	case 38:
		goto loc_821F5814;
	case 39:
		goto loc_821F5814;
	case 40:
		goto loc_821F5814;
	case 41:
		goto loc_821F5814;
	case 42:
		goto loc_821F5814;
	case 43:
		goto loc_821F5814;
	case 44:
		goto loc_821F5814;
	case 45:
		goto loc_821F5814;
	case 46:
		goto loc_821F5814;
	case 47:
		goto loc_821F5814;
	case 48:
		goto loc_821F5814;
	case 49:
		goto loc_821F5814;
	case 50:
		goto loc_821F5814;
	case 51:
		goto loc_821F5814;
	case 52:
		goto loc_821F5814;
	case 53:
		goto loc_821F5814;
	case 54:
		goto loc_821F5814;
	case 55:
		goto loc_821F5768;
	default:
		__builtin_unreachable();
	}
	// lwz r16,22376(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22376);
	// lwz r16,22384(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22384);
	// lwz r16,22460(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22460);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22488(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22488);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22548);
	// lwz r16,22376(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22376);
loc_821F5768:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,22336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22336, ctx.r11.u32);
loc_821F5770:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,-21272
	ctx.r30.s64 = ctx.r11.s64 + -21272;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210cf48
	ctx.lr = 0x821F5788;
	sub_8210CF48(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821f57a0
	if (!ctx.cr6.eq) goto loc_821F57A0;
loc_821F5794:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821F57A0:
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x821F57AC;
	sub_8210D3F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,6128
	ctx.r3.s64 = ctx.r31.s64 + 6128;
	// bl 0x82347808
	ctx.lr = 0x821F57BC;
	sub_82347808(ctx, base);
loc_821F57BC:
	// addi r3,r31,6128
	ctx.r3.s64 = ctx.r31.s64 + 6128;
	// bl 0x82347868
	ctx.lr = 0x821F57C4;
	sub_82347868(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f5794
	if (ctx.cr6.eq) goto loc_821F5794;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r9,22336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22336, ctx.r9.u32);
loc_821F57D8:
	// li r6,16384
	ctx.r6.s64 = 16384;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x82426bd0
	ctx.lr = 0x821F57EC;
	sub_82426BD0(ctx, base);
	// bl 0x821f52c0
	ctx.lr = 0x821F57F0;
	sub_821F52C0(ctx, base);
	// li r10,28
	ctx.r10.s64 = 28;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,7432
	ctx.r11.s64 = ctx.r31.s64 + 7432;
	// stw r10,22336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22336, ctx.r10.u32);
	// stb r9,22397(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22397, ctx.r9.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F5808:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821f5808
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F5808;
loc_821F5814:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F5820"))) PPC_WEAK_FUNC(sub_821F5820);
PPC_FUNC_IMPL(__imp__sub_821F5820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821F5828;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,22336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22336);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// bgt cr6,0x821f59ec
	if (ctx.cr6.gt) goto loc_821F59EC;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,22616
	ctx.r12.s64 = ctx.r12.s64 + 22616;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821F5938;
	case 1:
		goto loc_821F5940;
	case 2:
		goto loc_821F5994;
	case 3:
		goto loc_821F59EC;
	case 4:
		goto loc_821F59EC;
	case 5:
		goto loc_821F59EC;
	case 6:
		goto loc_821F59EC;
	case 7:
		goto loc_821F59EC;
	case 8:
		goto loc_821F59EC;
	case 9:
		goto loc_821F59EC;
	case 10:
		goto loc_821F59EC;
	case 11:
		goto loc_821F59EC;
	case 12:
		goto loc_821F59EC;
	case 13:
		goto loc_821F59EC;
	case 14:
		goto loc_821F59EC;
	case 15:
		goto loc_821F59EC;
	case 16:
		goto loc_821F59EC;
	case 17:
		goto loc_821F59EC;
	case 18:
		goto loc_821F59EC;
	case 19:
		goto loc_821F59EC;
	case 20:
		goto loc_821F59EC;
	case 21:
		goto loc_821F59EC;
	case 22:
		goto loc_821F59EC;
	case 23:
		goto loc_821F59EC;
	case 24:
		goto loc_821F59EC;
	case 25:
		goto loc_821F59EC;
	case 26:
		goto loc_821F59EC;
	case 27:
		goto loc_821F59B0;
	case 28:
		goto loc_821F59EC;
	case 29:
		goto loc_821F59EC;
	case 30:
		goto loc_821F59EC;
	case 31:
		goto loc_821F59EC;
	case 32:
		goto loc_821F59EC;
	case 33:
		goto loc_821F59EC;
	case 34:
		goto loc_821F59EC;
	case 35:
		goto loc_821F59EC;
	case 36:
		goto loc_821F59EC;
	case 37:
		goto loc_821F59EC;
	case 38:
		goto loc_821F59EC;
	case 39:
		goto loc_821F59EC;
	case 40:
		goto loc_821F59EC;
	case 41:
		goto loc_821F59EC;
	case 42:
		goto loc_821F59EC;
	case 43:
		goto loc_821F59EC;
	case 44:
		goto loc_821F59EC;
	case 45:
		goto loc_821F59EC;
	case 46:
		goto loc_821F59EC;
	case 47:
		goto loc_821F59EC;
	case 48:
		goto loc_821F59EC;
	case 49:
		goto loc_821F59EC;
	case 50:
		goto loc_821F59EC;
	case 51:
		goto loc_821F59EC;
	case 52:
		goto loc_821F59EC;
	case 53:
		goto loc_821F59EC;
	case 54:
		goto loc_821F59EC;
	case 55:
		goto loc_821F5938;
	default:
		__builtin_unreachable();
	}
	// lwz r16,22840(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22840);
	// lwz r16,22848(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22848);
	// lwz r16,22932(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22932);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,22960(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22960);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,23020(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23020);
	// lwz r16,22840(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 22840);
loc_821F5938:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,22336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22336, ctx.r11.u32);
loc_821F5940:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r11,-21272
	ctx.r30.s64 = ctx.r11.s64 + -21272;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210cf48
	ctx.lr = 0x821F5958;
	sub_8210CF48(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821f5970
	if (!ctx.cr6.eq) goto loc_821F5970;
loc_821F5964:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821F5970:
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x821F597C;
	sub_8210D3F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,6128
	ctx.r3.s64 = ctx.r31.s64 + 6128;
	// bl 0x82347808
	ctx.lr = 0x821F598C;
	sub_82347808(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,22336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22336, ctx.r10.u32);
loc_821F5994:
	// addi r3,r31,6128
	ctx.r3.s64 = ctx.r31.s64 + 6128;
	// bl 0x82347868
	ctx.lr = 0x821F599C;
	sub_82347868(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f5964
	if (ctx.cr6.eq) goto loc_821F5964;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r8,22336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22336, ctx.r8.u32);
loc_821F59B0:
	// li r6,16384
	ctx.r6.s64 = 16384;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x82426bd0
	ctx.lr = 0x821F59C4;
	sub_82426BD0(ctx, base);
	// bl 0x821f52c0
	ctx.lr = 0x821F59C8;
	sub_821F52C0(ctx, base);
	// li r10,28
	ctx.r10.s64 = 28;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,7432
	ctx.r11.s64 = ctx.r31.s64 + 7432;
	// stw r10,22336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22336, ctx.r10.u32);
	// stb r9,22397(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22397, ctx.r9.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F59E0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821f59e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F59E0;
loc_821F59EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F59F8"))) PPC_WEAK_FUNC(sub_821F59F8);
PPC_FUNC_IMPL(__imp__sub_821F59F8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428d28
	ctx.lr = 0x821F5A18;
	sub_82428D28(ctx, base);
	// bl 0x824276d8
	ctx.lr = 0x821F5A1C;
	sub_824276D8(ctx, base);
	// addi r3,r31,6128
	ctx.r3.s64 = ctx.r31.s64 + 6128;
	// bl 0x82347860
	ctx.lr = 0x821F5A24;
	sub_82347860(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r31,7432
	ctx.r11.s64 = ctx.r31.s64 + 7432;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r10,28
	ctx.r10.s64 = 28;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F5A38:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821f5a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F5A38;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,25
	ctx.r4.s64 = 25;
	// bl 0x8210d230
	ctx.lr = 0x821F5A58;
	sub_8210D230(ctx, base);
	// li r11,56
	ctx.r11.s64 = 56;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,22397(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22397, ctx.r30.u8);
	// stw r30,22352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22352, ctx.r30.u32);
	// stb r30,22398(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22398, ctx.r30.u8);
	// stw r11,22336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22336, ctx.r11.u32);
	// stw r10,22348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22348, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_821F5A8C"))) PPC_WEAK_FUNC(sub_821F5A8C);
PPC_FUNC_IMPL(__imp__sub_821F5A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5A90"))) PPC_WEAK_FUNC(sub_821F5A90);
PPC_FUNC_IMPL(__imp__sub_821F5A90) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82428d28
	ctx.lr = 0x821F5AAC;
	sub_82428D28(ctx, base);
	// bl 0x824276d8
	ctx.lr = 0x821F5AB0;
	sub_824276D8(ctx, base);
	// addi r3,r31,6128
	ctx.r3.s64 = ctx.r31.s64 + 6128;
	// bl 0x82347860
	ctx.lr = 0x821F5AB8;
	sub_82347860(ctx, base);
	// addi r11,r31,7432
	ctx.r11.s64 = ctx.r31.s64 + 7432;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,28
	ctx.r10.s64 = 28;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821F5AC8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821f5ac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F5AC8;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x8210d230
	ctx.lr = 0x821F5AE8;
	sub_8210D230(ctx, base);
	// li r11,56
	ctx.r11.s64 = 56;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,22336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22336, ctx.r11.u32);
	// stb r10,22397(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22397, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_821F5B0C"))) PPC_WEAK_FUNC(sub_821F5B0C);
PPC_FUNC_IMPL(__imp__sub_821F5B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5B10"))) PPC_WEAK_FUNC(sub_821F5B10);
PPC_FUNC_IMPL(__imp__sub_821F5B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821F5B18;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r29,r11,26080
	ctx.r29.s64 = ctx.r11.s64 + 26080;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x8210f8b8
	ctx.lr = 0x821F5B2C;
	sub_8210F8B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f5f9c
	if (ctx.cr6.eq) goto loc_821F5F9C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x8210efe8
	ctx.lr = 0x821F5B44;
	sub_8210EFE8(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r30,r11,22016
	ctx.r30.s64 = ctx.r11.s64 + 22016;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r11,-24936
	ctx.r31.s64 = ctx.r11.s64 + -24936;
	// bne cr6,0x821f5bcc
	if (!ctx.cr6.eq) goto loc_821F5BCC;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lwz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821f5f9c
	if (!ctx.cr6.eq) goto loc_821F5F9C;
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821f5f9c
	if (ctx.cr6.eq) goto loc_821F5F9C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821f5f9c
	if (ctx.cr6.eq) goto loc_821F5F9C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f5f9c
	if (ctx.cr6.eq) goto loc_821F5F9C;
	// lis r9,-8415
	ctx.r9.s64 = -551485440;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r7,-27114
	ctx.r7.s64 = -1776943104;
	// ori r8,r9,27832
	ctx.r8.u64 = ctx.r9.u64 | 27832;
	// ori r6,r7,2197
	ctx.r6.u64 = ctx.r7.u64 | 2197;
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r8
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x821f5f9c
	if (!ctx.cr6.eq) goto loc_821F5F9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ad5e0
	ctx.lr = 0x821F5BBC;
	sub_820AD5E0(ctx, base);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821f5f9c
	if (ctx.cr6.eq) goto loc_821F5F9C;
loc_821F5BCC:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// lwz r11,764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821f5be8
	if (!ctx.cr6.eq) goto loc_821F5BE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F5BE8:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f5f9c
	if (!ctx.cr6.eq) goto loc_821F5F9C;
	// bl 0x821e68f8
	ctx.lr = 0x821F5BF8;
	sub_821E68F8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821f5f9c
	if (!ctx.cr6.eq) goto loc_821F5F9C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f5dbc
	if (ctx.cr6.eq) goto loc_821F5DBC;
	// lis r8,-4506
	ctx.r8.s64 = -295305216;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r6,-27583
	ctx.r6.s64 = -1807679488;
	// ori r7,r8,52856
	ctx.r7.u64 = ctx.r8.u64 | 52856;
	// ori r5,r6,16102
	ctx.r5.u64 = ctx.r6.u64 | 16102;
	// rldimi r7,r5,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x821f5ddc
	if (ctx.cr6.eq) goto loc_821F5DDC;
	// lis r4,-4506
	ctx.r4.s64 = -295305216;
	// lis r10,-27583
	ctx.r10.s64 = -1807679488;
	// ori r3,r4,46912
	ctx.r3.u64 = ctx.r4.u64 | 46912;
	// ori r9,r10,16102
	ctx.r9.u64 = ctx.r10.u64 | 16102;
	// rldimi r3,r9,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r3
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x821f5ddc
	if (ctx.cr6.eq) goto loc_821F5DDC;
	// lis r8,-8415
	ctx.r8.s64 = -551485440;
	// lis r6,-27114
	ctx.r6.s64 = -1776943104;
	// ori r7,r8,27832
	ctx.r7.u64 = ctx.r8.u64 | 27832;
	// ori r5,r6,2197
	ctx.r5.u64 = ctx.r6.u64 | 2197;
	// rldimi r7,r5,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x821f5cc0
	if (!ctx.cr6.eq) goto loc_821F5CC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ad5e0
	ctx.lr = 0x821F5C78;
	sub_820AD5E0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// extsb r31,r26
	ctx.r31.s64 = ctx.r26.s8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82104600
	ctx.lr = 0x821F5C8C;
	sub_82104600(ctx, base);
	// extsb r4,r3
	ctx.r4.s64 = ctx.r3.s8;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x821f5e68
	if (!ctx.cr6.eq) goto loc_821F5E68;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x82115850
	ctx.lr = 0x821F5CA8;
	sub_82115850(ctx, base);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821f5f9c
	if (ctx.cr6.eq) goto loc_821F5F9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ad8d0
	ctx.lr = 0x821F5CBC;
	sub_820AD8D0(ctx, base);
	// b 0x821f5e68
	goto loc_821F5E68;
loc_821F5CC0:
	// lis r10,14908
	ctx.r10.s64 = 977010688;
	// lis r8,-27098
	ctx.r8.s64 = -1775894528;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// ori r7,r8,3488
	ctx.r7.u64 = ctx.r8.u64 | 3488;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821f5d74
	if (!ctx.cr6.eq) goto loc_821F5D74;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x821F5CE8;
	sub_82104600(ctx, base);
	// extsb r6,r3
	ctx.r6.s64 = ctx.r3.s8;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x821f5d54
	if (!ctx.cr6.eq) goto loc_821F5D54;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// lwz r4,12124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12124);
	// bl 0x8210f090
	ctx.lr = 0x821F5D08;
	sub_8210F090(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821f5d30
	if (!ctx.cr6.eq) goto loc_821F5D30;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x8210f090
	ctx.lr = 0x821F5D24;
	sub_8210F090(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f5d54
	if (ctx.cr6.eq) goto loc_821F5D54;
loc_821F5D30:
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x821143f8
	ctx.lr = 0x821F5D38;
	sub_821143F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x821156b8
	ctx.lr = 0x821F5D44;
	sub_821156B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// lbz r5,2584(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2584);
	// bl 0x821045e8
	ctx.lr = 0x821F5D54;
	sub_821045E8(ctx, base);
loc_821F5D54:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x821F5D60;
	sub_82104600(ctx, base);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821f5e68
	if (ctx.cr6.eq) goto loc_821F5E68;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x821f5e68
	goto loc_821F5E68;
loc_821F5D74:
	// lis r10,23479
	ctx.r10.s64 = 1538719744;
	// lis r8,-27583
	ctx.r8.s64 = -1807679488;
	// ori r9,r10,12096
	ctx.r9.u64 = ctx.r10.u64 | 12096;
	// ori r7,r8,16339
	ctx.r7.u64 = ctx.r8.u64 | 16339;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x821f5dbc
	if (!ctx.cr6.eq) goto loc_821F5DBC;
	// lwz r11,7136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7136);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821f5da4
	if (ctx.cr6.eq) goto loc_821F5DA4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F5DA4:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821f5dbc
	if (ctx.cr6.eq) goto loc_821F5DBC;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x821f5e68
	goto loc_821F5E68;
loc_821F5DBC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x821F5DC8;
	sub_82104600(ctx, base);
	// extsb r4,r3
	ctx.r4.s64 = ctx.r3.s8;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x821f5e68
	if (ctx.cr6.eq) goto loc_821F5E68;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x821f5e68
	goto loc_821F5E68;
loc_821F5DDC:
	// lis r3,7
	ctx.r3.s64 = 458752;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r11,r3,16297
	ctx.r11.u64 = ctx.r3.u64 | 16297;
	// ori r8,r9,16228
	ctx.r8.u64 = ctx.r9.u64 | 16228;
	// lbzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// lwzx r26,r29,r8
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f5e68
	if (ctx.cr6.eq) goto loc_821F5E68;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x821F5E08;
	sub_82104600(ctx, base);
	// extsb r7,r3
	ctx.r7.s64 = ctx.r3.s8;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// ble cr6,0x821f5e34
	if (!ctx.cr6.gt) goto loc_821F5E34;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x8210f1c0
	ctx.lr = 0x821F5E20;
	sub_8210F1C0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821f5e34
	if (ctx.cr6.eq) goto loc_821F5E34;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x821f5e68
	goto loc_821F5E68;
loc_821F5E34:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x821F5E40;
	sub_82104600(ctx, base);
	// extsb r5,r3
	ctx.r5.s64 = ctx.r3.s8;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x821f5e68
	if (!ctx.cr6.gt) goto loc_821F5E68;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x8210f1c0
	ctx.lr = 0x821F5E58;
	sub_8210F1C0(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f5e68
	if (ctx.cr6.eq) goto loc_821F5E68;
	// li r26,1
	ctx.r26.s64 = 1;
loc_821F5E68:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r28,r11,29400
	ctx.r28.s64 = ctx.r11.s64 + 29400;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r27,r11,13000
	ctx.r27.s64 = ctx.r11.s64 + 13000;
loc_821F5E7C:
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// beq cr6,0x821f5e94
	if (ctx.cr6.eq) goto loc_821F5E94;
	// cmpwi cr6,r11,55
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 55, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821f5e98
	if (!ctx.cr6.eq) goto loc_821F5E98;
loc_821F5E94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F5E98:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f5eb0
	if (ctx.cr6.eq) goto loc_821F5EB0;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f5f9c
	if (!ctx.cr6.eq) goto loc_821F5F9C;
loc_821F5EB0:
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f5f58
	if (ctx.cr6.eq) goto loc_821F5F58;
	// cmpwi cr6,r30,301
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 301, ctx.xer);
	// bne cr6,0x821f5f58
	if (!ctx.cr6.eq) goto loc_821F5F58;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x8210f090
	ctx.lr = 0x821F5ED8;
	sub_8210F090(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f5f74
	if (ctx.cr6.eq) goto loc_821F5F74;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x82104600
	ctx.lr = 0x821F5EF0;
	sub_82104600(ctx, base);
	// extsb r6,r3
	ctx.r6.s64 = ctx.r3.s8;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x821f5f40
	if (!ctx.cr6.eq) goto loc_821F5F40;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x821156b8
	ctx.lr = 0x821F5F08;
	sub_821156B8(ctx, base);
	// lbz r11,2584(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2584);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// bl 0x82104600
	ctx.lr = 0x821F5F1C;
	sub_82104600(ctx, base);
	// extsb r5,r3
	ctx.r5.s64 = ctx.r3.s8;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x821f5f40
	if (ctx.cr6.eq) goto loc_821F5F40;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x821f5f40
	if (ctx.cr6.eq) goto loc_821F5F40;
	// extsb r5,r31
	ctx.r5.s64 = ctx.r31.s8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x821045e8
	ctx.lr = 0x821F5F40;
	sub_821045E8(ctx, base);
loc_821F5F40:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r3,301
	ctx.r3.s64 = 301;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82427030
	ctx.lr = 0x821F5F50;
	sub_82427030(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_821F5F58:
	// extsb r5,r26
	ctx.r5.s64 = ctx.r26.s8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x8210f090
	ctx.lr = 0x821F5F68;
	sub_8210F090(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821f5f8c
	if (!ctx.cr6.eq) goto loc_821F5F8C;
loc_821F5F74:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r7,r28,336
	ctx.r7.s64 = ctx.r28.s64 + 336;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821f5e7c
	if (ctx.cr6.lt) goto loc_821F5E7C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_821F5F8C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82427030
	ctx.lr = 0x821F5F9C;
	sub_82427030(ctx, base);
loc_821F5F9C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F5FA4"))) PPC_WEAK_FUNC(sub_821F5FA4);
PPC_FUNC_IMPL(__imp__sub_821F5FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F5FA8"))) PPC_WEAK_FUNC(sub_821F5FA8);
PPC_FUNC_IMPL(__imp__sub_821F5FA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,22344(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22344);
	// b 0x821f53a0
	sub_821F53A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F5FB0"))) PPC_WEAK_FUNC(sub_821F5FB0);
PPC_FUNC_IMPL(__imp__sub_821F5FB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,22344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22344);
	// lbz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 256);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r4,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r4.u32);
	// lbz r7,256(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 256);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// lbz r3,256(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 256);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stb r10,256(r11)
	PPC_STORE_U8(ctx.r11.u32 + 256, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F5FE8"))) PPC_WEAK_FUNC(sub_821F5FE8);
PPC_FUNC_IMPL(__imp__sub_821F5FE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,22344(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22344);
	// b 0x821f5420
	sub_821F5420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F5FF0"))) PPC_WEAK_FUNC(sub_821F5FF0);
PPC_FUNC_IMPL(__imp__sub_821F5FF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r11,6128
	ctx.r3.s64 = ctx.r11.s64 + 6128;
	// b 0x823478d8
	sub_823478D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F6008"))) PPC_WEAK_FUNC(sub_821F6008);
PPC_FUNC_IMPL(__imp__sub_821F6008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r3,r11,6128
	ctx.r3.s64 = ctx.r11.s64 + 6128;
	// b 0x823478e8
	sub_823478E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F601C"))) PPC_WEAK_FUNC(sub_821F601C);
PPC_FUNC_IMPL(__imp__sub_821F601C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F6020"))) PPC_WEAK_FUNC(sub_821F6020);
PPC_FUNC_IMPL(__imp__sub_821F6020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r7,r3,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// rlwinm r6,r3,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r4,r3,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// std r7,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r7.u64);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// std r6,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r6.u64);
	// addi r10,r10,31264
	ctx.r10.s64 = ctx.r10.s64 + 31264;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// std r4,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r4.u64);
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f13,-24(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// lfd f9,-8(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// frsp f12,f8
	ctx.f12.f64 = double(float(ctx.f8.f64));
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,22320(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22320, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,22324(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22324, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,22328(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22328, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,22332(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 22332, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F60B4"))) PPC_WEAK_FUNC(sub_821F60B4);
PPC_FUNC_IMPL(__imp__sub_821F60B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F60B8"))) PPC_WEAK_FUNC(sub_821F60B8);
PPC_FUNC_IMPL(__imp__sub_821F60B8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,31504
	ctx.r4.s64 = ctx.r11.s64 + 31504;
	// bl 0x8259cce0
	ctx.lr = 0x821F60D0;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f60ec
	if (!ctx.cr6.eq) goto loc_821F60EC;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82203858
	ctx.lr = 0x821F60EC;
	sub_82203858(ctx, base);
loc_821F60EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F60FC"))) PPC_WEAK_FUNC(sub_821F60FC);
PPC_FUNC_IMPL(__imp__sub_821F60FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F6100"))) PPC_WEAK_FUNC(sub_821F6100);
PPC_FUNC_IMPL(__imp__sub_821F6100) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,31548
	ctx.r4.s64 = ctx.r11.s64 + 31548;
	// bl 0x8259cce0
	ctx.lr = 0x821F6120;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f6134
	if (!ctx.cr6.eq) goto loc_821F6134;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,31540
	ctx.r3.s64 = ctx.r11.s64 + 31540;
	// b 0x821f62f8
	goto loc_821F62F8;
loc_821F6134:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,31528
	ctx.r4.s64 = ctx.r11.s64 + 31528;
	// bl 0x8259cce0
	ctx.lr = 0x821F6144;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f61c0
	if (!ctx.cr6.eq) goto loc_821F61C0;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r11,23500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23500);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x821f61b4
	if (ctx.cr6.gt) goto loc_821F61B4;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,24952
	ctx.r12.s64 = ctx.r12.s64 + 24952;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821F6190;
	case 1:
		goto loc_821F61B4;
	case 2:
		goto loc_821F619C;
	case 3:
		goto loc_821F61A8;
	case 4:
		goto loc_821F61B4;
	case 5:
		goto loc_821F6190;
	default:
		__builtin_unreachable();
	}
	// lwz r16,24976(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24976);
	// lwz r16,25012(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25012);
	// lwz r16,24988(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24988);
	// lwz r16,25000(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25000);
	// lwz r16,25012(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25012);
	// lwz r16,24976(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24976);
loc_821F6190:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,26284
	ctx.r3.s64 = ctx.r11.s64 + 26284;
	// b 0x821f62f8
	goto loc_821F62F8;
loc_821F619C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,26276
	ctx.r3.s64 = ctx.r11.s64 + 26276;
	// b 0x821f62f8
	goto loc_821F62F8;
loc_821F61A8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,26272
	ctx.r3.s64 = ctx.r11.s64 + 26272;
	// b 0x821f62f8
	goto loc_821F62F8;
loc_821F61B4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,26280
	ctx.r3.s64 = ctx.r11.s64 + 26280;
	// b 0x821f62f8
	goto loc_821F62F8;
loc_821F61C0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,31520
	ctx.r4.s64 = ctx.r11.s64 + 31520;
	// bl 0x8259cce0
	ctx.lr = 0x821F61D0;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f62f0
	if (!ctx.cr6.eq) goto loc_821F62F0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8210b050
	ctx.lr = 0x821F61E0;
	sub_8210B050(ctx, base);
	// lis r31,-32126
	ctx.r31.s64 = -2105409536;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821F6200;
	sub_8210B068(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821f6218
	if (ctx.cr6.eq) goto loc_821F6218;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,26264
	ctx.r3.s64 = ctx.r11.s64 + 26264;
	// b 0x821f62f8
	goto loc_821F62F8;
loc_821F6218:
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821F6234;
	sub_8210B068(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821f624c
	if (ctx.cr6.eq) goto loc_821F624C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,26232
	ctx.r3.s64 = ctx.r11.s64 + 26232;
	// b 0x821f62f8
	goto loc_821F62F8;
loc_821F624C:
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821F6268;
	sub_8210B068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f6280
	if (ctx.cr6.eq) goto loc_821F6280;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,26256
	ctx.r3.s64 = ctx.r11.s64 + 26256;
	// b 0x821f62f8
	goto loc_821F62F8;
loc_821F6280:
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821F629C;
	sub_8210B068(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821f62b4
	if (ctx.cr6.eq) goto loc_821F62B4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,26248
	ctx.r3.s64 = ctx.r11.s64 + 26248;
	// b 0x821f62f8
	goto loc_821F62F8;
loc_821F62B4:
	// lwz r11,23988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23988);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821F62D0;
	sub_8210B068(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f62e8
	if (ctx.cr6.eq) goto loc_821F62E8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,26240
	ctx.r3.s64 = ctx.r11.s64 + 26240;
	// b 0x821f62f8
	goto loc_821F62F8;
loc_821F62E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821f62f8
	goto loc_821F62F8;
loc_821F62F0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,31516
	ctx.r3.s64 = ctx.r11.s64 + 31516;
loc_821F62F8:
	// bl 0x8245da78
	ctx.lr = 0x821F62FC;
	sub_8245DA78(ctx, base);
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

__attribute__((alias("__imp__sub_821F6310"))) PPC_WEAK_FUNC(sub_821F6310);
PPC_FUNC_IMPL(__imp__sub_821F6310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821F6318;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,14528
	ctx.r30.s64 = ctx.r11.s64 + 14528;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f6344
	if (ctx.cr6.eq) goto loc_821F6344;
	// addi r3,r30,6128
	ctx.r3.s64 = ctx.r30.s64 + 6128;
	// bl 0x823478e8
	ctx.lr = 0x821F6340;
	sub_823478E8(ctx, base);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
loc_821F6344:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r30,7712
	ctx.r11.s64 = ctx.r30.s64 + 7712;
loc_821F6350:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821f6374
	if (ctx.cr6.eq) goto loc_821F6374;
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmpwi cr6,r10,14400
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14400, ctx.xer);
	// blt cr6,0x821f6350
	if (ctx.cr6.lt) goto loc_821F6350;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821F6374:
	// addi r11,r30,22112
	ctx.r11.s64 = ctx.r30.s64 + 22112;
	// stbx r29,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F6384"))) PPC_WEAK_FUNC(sub_821F6384);
PPC_FUNC_IMPL(__imp__sub_821F6384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F6388"))) PPC_WEAK_FUNC(sub_821F6388);
PPC_FUNC_IMPL(__imp__sub_821F6388) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r5,r11,7632
	ctx.r5.s64 = ctx.r11.s64 + 7632;
	// addi r3,r11,7552
	ctx.r3.s64 = ctx.r11.s64 + 7552;
	// b 0x8235fa40
	sub_8235FA40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F63A8"))) PPC_WEAK_FUNC(sub_821F63A8);
PPC_FUNC_IMPL(__imp__sub_821F63A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F63AC"))) PPC_WEAK_FUNC(sub_821F63AC);
PPC_FUNC_IMPL(__imp__sub_821F63AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F63B0"))) PPC_WEAK_FUNC(sub_821F63B0);
PPC_FUNC_IMPL(__imp__sub_821F63B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821F63B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r27,4(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x821f6400
	if (!ctx.cr6.gt) goto loc_821F6400;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F63D8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwzx r30,r31,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259dbd0
	ctx.lr = 0x821F63E8;
	sub_8259DBD0(ctx, base);
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x821f640c
	if (ctx.cr6.eq) goto loc_821F640C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x821f63d8
	if (ctx.cr6.lt) goto loc_821F63D8;
loc_821F6400:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_821F640C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F6418"))) PPC_WEAK_FUNC(sub_821F6418);
PPC_FUNC_IMPL(__imp__sub_821F6418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stfs f13,7632(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7632, temp.u32);
	// stfs f0,7636(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7636, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,7640(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7640, temp.u32);
	// stfs f0,7644(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7644, temp.u32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x821f646c
	if (ctx.cr6.eq) goto loc_821F646C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,31568(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31568);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// b 0x821f6470
	goto loc_821F6470;
loc_821F646C:
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
loc_821F6470:
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// stfs f13,7648(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7648, temp.u32);
	// stfs f0,7652(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7652, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,7664(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7664, temp.u32);
	// lbz r10,12828(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12828);
	// stfs f0,7668(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7668, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stfs f13,7672(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7672, temp.u32);
	// stfs f0,7676(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7676, temp.u32);
	// bne cr6,0x821f64dc
	if (!ctx.cr6.eq) goto loc_821F64DC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f64f8
	if (ctx.cr6.eq) goto loc_821F64F8;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,31564(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31564);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f13,-1624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1624);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f13,7680(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7680, temp.u32);
	// stfs f0,7684(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7684, temp.u32);
	// blr 
	return;
loc_821F64DC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f64f8
	if (ctx.cr6.eq) goto loc_821F64F8;
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,7680(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7680, temp.u32);
	// stfs f0,7684(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7684, temp.u32);
	// blr 
	return;
loc_821F64F8:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f8,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,31564(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31564);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f13,31560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31560);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// stfs f13,7680(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7680, temp.u32);
	// stfs f0,7684(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 7684, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F6524"))) PPC_WEAK_FUNC(sub_821F6524);
PPC_FUNC_IMPL(__imp__sub_821F6524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F6528"))) PPC_WEAK_FUNC(sub_821F6528);
PPC_FUNC_IMPL(__imp__sub_821F6528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r11,r11,31872
	ctx.r11.s64 = ctx.r11.s64 + 31872;
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f11,-20(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// stfs f10,-32(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// vaddfp v13,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stfs f9,-28(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// stfs f8,-24(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f7,-20(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lvx128 v12,r0,r10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp v0,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vpkuhus v13,v13,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v13.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// vpkuhum v11,v13,v13
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_packus_epi16(_mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u16), _mm_set1_epi16(0xFF)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u16), _mm_set1_epi16(0xFF))));
	// vpkuhus v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_load_si128((__m128i*)ctx.v0.u16)));
	// stvx v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,-20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// vpkuhum v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_packus_epi16(_mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_set1_epi16(0xFF)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_set1_epi16(0xFF))));
	// stw r10,7660(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7660, ctx.r10.u32);
	// stvx v10,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,-4(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// stw r10,7656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7656, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F65C8"))) PPC_WEAK_FUNC(sub_821F65C8);
PPC_FUNC_IMPL(__imp__sub_821F65C8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x821f6610
	if (ctx.cr6.eq) goto loc_821F6610;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821f65f8
	if (ctx.cr6.eq) goto loc_821F65F8;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r5,r11,7632
	ctx.r5.s64 = ctx.r11.s64 + 7632;
	// addi r3,r11,7552
	ctx.r3.s64 = ctx.r11.s64 + 7552;
	// b 0x82359748
	sub_82359748(ctx, base);
	return;
loc_821F65F8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r5,r11,7632
	ctx.r5.s64 = ctx.r11.s64 + 7632;
	// addi r3,r11,7552
	ctx.r3.s64 = ctx.r11.s64 + 7552;
	// b 0x8235f6e0
	sub_8235F6E0(ctx, base);
	return;
loc_821F6610:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r5,r11,7632
	ctx.r5.s64 = ctx.r11.s64 + 7632;
	// addi r3,r11,7552
	ctx.r3.s64 = ctx.r11.s64 + 7552;
	// b 0x82359b60
	sub_82359B60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F6628"))) PPC_WEAK_FUNC(sub_821F6628);
PPC_FUNC_IMPL(__imp__sub_821F6628) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F662C"))) PPC_WEAK_FUNC(sub_821F662C);
PPC_FUNC_IMPL(__imp__sub_821F662C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F6630"))) PPC_WEAK_FUNC(sub_821F6630);
PPC_FUNC_IMPL(__imp__sub_821F6630) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r3,22364
	ctx.r10.s64 = ctx.r3.s64 + 22364;
loc_821F6634:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// beq cr6,0x821f6658
	if (ctx.cr6.eq) goto loc_821F6658;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821f6634
	if (ctx.cr6.eq) goto loc_821F6634;
loc_821F6658:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821f6668
	if (ctx.cr6.eq) goto loc_821F6668;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821F6668:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,13000
	ctx.r11.s64 = ctx.r11.s64 + 13000;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821f6684
	if (ctx.cr6.eq) goto loc_821F6684;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F6684:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F669C"))) PPC_WEAK_FUNC(sub_821F669C);
PPC_FUNC_IMPL(__imp__sub_821F669C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F66A0"))) PPC_WEAK_FUNC(sub_821F66A0);
PPC_FUNC_IMPL(__imp__sub_821F66A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f1,31572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31572);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F66AC"))) PPC_WEAK_FUNC(sub_821F66AC);
PPC_FUNC_IMPL(__imp__sub_821F66AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F66B0"))) PPC_WEAK_FUNC(sub_821F66B0);
PPC_FUNC_IMPL(__imp__sub_821F66B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,17832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17832);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F66BC"))) PPC_WEAK_FUNC(sub_821F66BC);
PPC_FUNC_IMPL(__imp__sub_821F66BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F66C0"))) PPC_WEAK_FUNC(sub_821F66C0);
PPC_FUNC_IMPL(__imp__sub_821F66C0) {
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
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821F66E8;
	sub_8210FCF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821F66F4;
	sub_82361BD8(ctx, base);
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

__attribute__((alias("__imp__sub_821F670C"))) PPC_WEAK_FUNC(sub_821F670C);
PPC_FUNC_IMPL(__imp__sub_821F670C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F6710"))) PPC_WEAK_FUNC(sub_821F6710);
PPC_FUNC_IMPL(__imp__sub_821F6710) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,31600
	ctx.r5.s64 = ctx.r11.s64 + 31600;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,31576
	ctx.r3.s64 = ctx.r11.s64 + 31576;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82427c40
	ctx.lr = 0x821F673C;
	sub_82427C40(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F674C"))) PPC_WEAK_FUNC(sub_821F674C);
PPC_FUNC_IMPL(__imp__sub_821F674C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F6750"))) PPC_WEAK_FUNC(sub_821F6750);
PPC_FUNC_IMPL(__imp__sub_821F6750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lbz r4,1(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,7520
	ctx.r3.s64 = ctx.r11.s64 + 7520;
	// b 0x822144a0
	sub_822144A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F6768"))) PPC_WEAK_FUNC(sub_821F6768);
PPC_FUNC_IMPL(__imp__sub_821F6768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821F6770;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r28,r11,-21272
	ctx.r28.s64 = ctx.r11.s64 + -21272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210cf48
	ctx.lr = 0x821F6798;
	sub_8210CF48(ctx, base);
	// addi r11,r30,150
	ctx.r11.s64 = ctx.r30.s64 + 150;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r3.u32);
	// bne cr6,0x821f67b8
	if (!ctx.cr6.eq) goto loc_821F67B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_821F67B8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,26072
	ctx.r4.s64 = ctx.r10.s64 + 26072;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x8259d1b0
	ctx.lr = 0x821F67D8;
	sub_8259D1B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210d3f0
	ctx.lr = 0x821F67E4;
	sub_8210D3F0(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwzx r6,r27,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r31,755
	ctx.r5.s64 = ctx.r31.s64 + 755;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,2736
	ctx.r3.s64 = ctx.r11.s64 + 2736;
	// bl 0x8210e1f0
	ctx.lr = 0x821F6808;
	sub_8210E1F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F6814"))) PPC_WEAK_FUNC(sub_821F6814);
PPC_FUNC_IMPL(__imp__sub_821F6814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F6818"))) PPC_WEAK_FUNC(sub_821F6818);
PPC_FUNC_IMPL(__imp__sub_821F6818) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,724(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 724);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F6824"))) PPC_WEAK_FUNC(sub_821F6824);
PPC_FUNC_IMPL(__imp__sub_821F6824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F6828"))) PPC_WEAK_FUNC(sub_821F6828);
PPC_FUNC_IMPL(__imp__sub_821F6828) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8210d230
	ctx.lr = 0x821F6858;
	sub_8210D230(ctx, base);
	// addi r10,r30,150
	ctx.r10.s64 = ctx.r30.s64 + 150;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r30,r31
	ctx.r8.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r11,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u32);
	// stb r11,724(r8)
	PPC_STORE_U8(ctx.r8.u32 + 724, ctx.r11.u8);
	// stw r7,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_821F6894"))) PPC_WEAK_FUNC(sub_821F6894);
PPC_FUNC_IMPL(__imp__sub_821F6894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F6898"))) PPC_WEAK_FUNC(sub_821F6898);
PPC_FUNC_IMPL(__imp__sub_821F6898) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,747(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 747);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f68b0
	if (ctx.cr6.eq) goto loc_821F68B0;
	// li r5,27
	ctx.r5.s64 = 27;
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x821f6828
	sub_821F6828(ctx, base);
	return;
loc_821F68B0:
	// lbz r10,751(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 751);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f68c8
	if (ctx.cr6.eq) goto loc_821F68C8;
	// li r5,27
	ctx.r5.s64 = 27;
	// li r4,27
	ctx.r4.s64 = 27;
	// b 0x821f6828
	sub_821F6828(ctx, base);
	return;
loc_821F68C8:
	// lbz r9,752(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 752);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f68e0
	if (ctx.cr6.eq) goto loc_821F68E0;
	// li r5,27
	ctx.r5.s64 = 27;
	// li r4,28
	ctx.r4.s64 = 28;
	// b 0x821f6828
	sub_821F6828(ctx, base);
	return;
loc_821F68E0:
	// lbz r8,753(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 753);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821f68f8
	if (ctx.cr6.eq) goto loc_821F68F8;
	// li r5,27
	ctx.r5.s64 = 27;
	// li r4,29
	ctx.r4.s64 = 29;
	// b 0x821f6828
	sub_821F6828(ctx, base);
	return;
loc_821F68F8:
	// lbz r7,748(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 748);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821f6910
	if (ctx.cr6.eq) goto loc_821F6910;
	// li r5,27
	ctx.r5.s64 = 27;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x821f6828
	sub_821F6828(ctx, base);
	return;
loc_821F6910:
	// lbz r6,749(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 749);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821f6928
	if (ctx.cr6.eq) goto loc_821F6928;
	// li r5,27
	ctx.r5.s64 = 27;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x821f6828
	sub_821F6828(ctx, base);
	return;
loc_821F6928:
	// lbz r5,750(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 750);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821f6940
	if (ctx.cr6.eq) goto loc_821F6940;
	// li r5,27
	ctx.r5.s64 = 27;
	// li r4,26
	ctx.r4.s64 = 26;
	// b 0x821f6828
	sub_821F6828(ctx, base);
	return;
loc_821F6940:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F6948"))) PPC_WEAK_FUNC(sub_821F6948);
PPC_FUNC_IMPL(__imp__sub_821F6948) {
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
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x8210d230
	ctx.lr = 0x821F6970;
	sub_8210D230(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,56
	ctx.r11.s64 = 56;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r10.u32);
	// stb r10,725(r31)
	PPC_STORE_U8(ctx.r31.u32 + 725, ctx.r10.u8);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_821F69A0"))) PPC_WEAK_FUNC(sub_821F69A0);
PPC_FUNC_IMPL(__imp__sub_821F69A0) {
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
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x8210d230
	ctx.lr = 0x821F69C8;
	sub_8210D230(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,56
	ctx.r10.s64 = 56;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// stb r11,724(r31)
	PPC_STORE_U8(ctx.r31.u32 + 724, ctx.r11.u8);
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// stw r10,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r10.u32);
	// stb r11,756(r31)
	PPC_STORE_U8(ctx.r31.u32 + 756, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_821F69FC"))) PPC_WEAK_FUNC(sub_821F69FC);
PPC_FUNC_IMPL(__imp__sub_821F69FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F6A00"))) PPC_WEAK_FUNC(sub_821F6A00);
PPC_FUNC_IMPL(__imp__sub_821F6A00) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,56
	ctx.r10.s64 = 56;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 588, ctx.r10.u32);
	// stb r9,756(r11)
	PPC_STORE_U8(ctx.r11.u32 + 756, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F6A1C"))) PPC_WEAK_FUNC(sub_821F6A1C);
PPC_FUNC_IMPL(__imp__sub_821F6A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F6A20"))) PPC_WEAK_FUNC(sub_821F6A20);
PPC_FUNC_IMPL(__imp__sub_821F6A20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// stb r10,22397(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22397, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F6A34"))) PPC_WEAK_FUNC(sub_821F6A34);
PPC_FUNC_IMPL(__imp__sub_821F6A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F6A38"))) PPC_WEAK_FUNC(sub_821F6A38);
PPC_FUNC_IMPL(__imp__sub_821F6A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821F6A40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,600
	ctx.r30.s64 = ctx.r3.s64 + 600;
	// addi r28,r3,724
	ctx.r28.s64 = ctx.r3.s64 + 724;
loc_821F6A54:
	// lbzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f6a74
	if (ctx.cr6.eq) goto loc_821F6A74;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822d4f90
	ctx.lr = 0x821F6A6C;
	sub_822D4F90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f6a88
	if (!ctx.cr6.eq) goto loc_821F6A88;
loc_821F6A74:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,31
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 31, ctx.xer);
	// blt cr6,0x821f6a54
	if (ctx.cr6.lt) goto loc_821F6A54;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F6A88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F6A90"))) PPC_WEAK_FUNC(sub_821F6A90);
PPC_FUNC_IMPL(__imp__sub_821F6A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821F6A98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r11,26920
	ctx.r29.s64 = ctx.r11.s64 + 26920;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821F6AB0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8259cce0
	ctx.lr = 0x821F6ABC;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f6ae4
	if (ctx.cr6.eq) goto loc_821F6AE4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,364
	ctx.r11.s64 = ctx.r29.s64 + 364;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f6ab0
	if (ctx.cr6.lt) goto loc_821F6AB0;
	// li r3,91
	ctx.r3.s64 = 91;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821F6AE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F6AF0"))) PPC_WEAK_FUNC(sub_821F6AF0);
PPC_FUNC_IMPL(__imp__sub_821F6AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821F6AF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mulli r10,r5,34
	ctx.r10.s64 = ctx.r5.s64 * 34;
	// addi r11,r11,29784
	ctx.r11.s64 = ctx.r11.s64 + 29784;
	// addi r9,r4,194
	ctx.r9.s64 = ctx.r4.s64 + 194;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r5,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r5.u32);
	// addi r31,r11,796
	ctx.r31.s64 = ctx.r11.s64 + 796;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r10,r30,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r30.s64;
loc_821F6B34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f6b34
	if (!ctx.cr6.eq) goto loc_821F6B34;
	// lbz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// lis r29,-32126
	ctx.r29.s64 = -2105409536;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821f6f50
	if (ctx.cr6.eq) goto loc_821F6F50;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8210b050
	ctx.lr = 0x821F6B60;
	sub_8210B050(ctx, base);
	// lwz r11,23988(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23988);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821F6B7C;
	sub_8210B068(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f6cdc
	if (!ctx.cr6.eq) goto loc_821F6CDC;
	// lwz r11,23988(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23988);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821F6BA4;
	sub_8210B068(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821f6cdc
	if (!ctx.cr6.eq) goto loc_821F6CDC;
	// lwz r11,23988(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23988);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,5
	ctx.r5.s64 = ctx.r11.s64 + 5;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821F6BCC;
	sub_8210B068(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f6c14
	if (ctx.cr6.eq) goto loc_821F6C14;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,31668
	ctx.r10.s64 = ctx.r11.s64 + 31668;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F6BE4:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f6be4
	if (!ctx.cr6.eq) goto loc_821F6BE4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821F6BF8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f6bf8
	if (!ctx.cr6.eq) goto loc_821F6BF8;
	// b 0x821f6f94
	goto loc_821F6F94;
loc_821F6C14:
	// lwz r11,23988(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23988);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821F6C30;
	sub_8210B068(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821f6c78
	if (ctx.cr6.eq) goto loc_821F6C78;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,31664
	ctx.r10.s64 = ctx.r11.s64 + 31664;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F6C48:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821f6c48
	if (!ctx.cr6.eq) goto loc_821F6C48;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821F6C5C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f6c5c
	if (!ctx.cr6.eq) goto loc_821F6C5C;
	// b 0x821f6f94
	goto loc_821F6F94;
loc_821F6C78:
	// lwz r11,23988(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23988);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821F6C94;
	sub_8210B068(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f6f94
	if (ctx.cr6.eq) goto loc_821F6F94;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,31660
	ctx.r10.s64 = ctx.r11.s64 + 31660;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F6CAC:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f6cac
	if (!ctx.cr6.eq) goto loc_821F6CAC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821F6CC0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f6cc0
	if (!ctx.cr6.eq) goto loc_821F6CC0;
	// b 0x821f6f94
	goto loc_821F6F94;
loc_821F6CDC:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r11,23500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23500);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x821f6f14
	if (ctx.cr6.gt) goto loc_821F6F14;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,27912
	ctx.r12.s64 = ctx.r12.s64 + 27912;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821F6D34;
	case 1:
		goto loc_821F6D70;
	case 2:
		goto loc_821F6DAC;
	case 3:
		goto loc_821F6DE8;
	case 4:
		goto loc_821F6F14;
	case 5:
		goto loc_821F6F14;
	case 6:
		goto loc_821F6F14;
	case 7:
		goto loc_821F6E24;
	case 8:
		goto loc_821F6E60;
	case 9:
		goto loc_821F6E9C;
	case 10:
		goto loc_821F6ED8;
	default:
		__builtin_unreachable();
	}
	// lwz r16,27956(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27956);
	// lwz r16,28016(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28016);
	// lwz r16,28076(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28076);
	// lwz r16,28136(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28136);
	// lwz r16,28436(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28436);
	// lwz r16,28436(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28436);
	// lwz r16,28436(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28436);
	// lwz r16,28196(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28196);
	// lwz r16,28256(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28256);
	// lwz r16,28316(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28316);
	// lwz r16,28376(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28376);
loc_821F6D34:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,31656
	ctx.r10.s64 = ctx.r11.s64 + 31656;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F6D40:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821f6d40
	if (!ctx.cr6.eq) goto loc_821F6D40;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821F6D54:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f6d54
	if (!ctx.cr6.eq) goto loc_821F6D54;
	// b 0x821f6f94
	goto loc_821F6F94;
loc_821F6D70:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,31652
	ctx.r10.s64 = ctx.r11.s64 + 31652;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F6D7C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821f6d7c
	if (!ctx.cr6.eq) goto loc_821F6D7C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821F6D90:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f6d90
	if (!ctx.cr6.eq) goto loc_821F6D90;
	// b 0x821f6f94
	goto loc_821F6F94;
loc_821F6DAC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,31648
	ctx.r10.s64 = ctx.r11.s64 + 31648;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F6DB8:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821f6db8
	if (!ctx.cr6.eq) goto loc_821F6DB8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821F6DCC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f6dcc
	if (!ctx.cr6.eq) goto loc_821F6DCC;
	// b 0x821f6f94
	goto loc_821F6F94;
loc_821F6DE8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,31644
	ctx.r10.s64 = ctx.r11.s64 + 31644;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F6DF4:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821f6df4
	if (!ctx.cr6.eq) goto loc_821F6DF4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821F6E08:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f6e08
	if (!ctx.cr6.eq) goto loc_821F6E08;
	// b 0x821f6f94
	goto loc_821F6F94;
loc_821F6E24:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,31640
	ctx.r10.s64 = ctx.r11.s64 + 31640;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F6E30:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821f6e30
	if (!ctx.cr6.eq) goto loc_821F6E30;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821F6E44:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f6e44
	if (!ctx.cr6.eq) goto loc_821F6E44;
	// b 0x821f6f94
	goto loc_821F6F94;
loc_821F6E60:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,31636
	ctx.r10.s64 = ctx.r11.s64 + 31636;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F6E6C:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821f6e6c
	if (!ctx.cr6.eq) goto loc_821F6E6C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821F6E80:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f6e80
	if (!ctx.cr6.eq) goto loc_821F6E80;
	// b 0x821f6f94
	goto loc_821F6F94;
loc_821F6E9C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,31632
	ctx.r10.s64 = ctx.r11.s64 + 31632;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F6EA8:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f6ea8
	if (!ctx.cr6.eq) goto loc_821F6EA8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821F6EBC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f6ebc
	if (!ctx.cr6.eq) goto loc_821F6EBC;
	// b 0x821f6f94
	goto loc_821F6F94;
loc_821F6ED8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,31628
	ctx.r10.s64 = ctx.r11.s64 + 31628;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F6EE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821f6ee4
	if (!ctx.cr6.eq) goto loc_821F6EE4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821F6EF8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f6ef8
	if (!ctx.cr6.eq) goto loc_821F6EF8;
	// b 0x821f6f94
	goto loc_821F6F94;
loc_821F6F14:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,31660
	ctx.r10.s64 = ctx.r11.s64 + 31660;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F6F20:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821f6f20
	if (!ctx.cr6.eq) goto loc_821F6F20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821F6F34:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f6f34
	if (!ctx.cr6.eq) goto loc_821F6F34;
	// b 0x821f6f94
	goto loc_821F6F94;
loc_821F6F50:
	// lbz r7,33(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821f6f94
	if (ctx.cr6.eq) goto loc_821F6F94;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,31624
	ctx.r10.s64 = ctx.r11.s64 + 31624;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F6F68:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821f6f68
	if (!ctx.cr6.eq) goto loc_821F6F68;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821F6F7C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f6f7c
	if (!ctx.cr6.eq) goto loc_821F6F7C;
loc_821F6F94:
	// lbz r5,33(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821f707c
	if (ctx.cr6.eq) goto loc_821F707C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8210b050
	ctx.lr = 0x821F6FA8;
	sub_8210B050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,23988(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23988);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x8210b068
	ctx.lr = 0x821F6FD0;
	sub_8210B068(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821f7044
	if (!ctx.cr6.eq) goto loc_821F7044;
	// lwz r11,23988(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23988);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x8210b068
	ctx.lr = 0x821F6FF8;
	sub_8210B068(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821f7044
	if (!ctx.cr6.eq) goto loc_821F7044;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,31620
	ctx.r10.s64 = ctx.r11.s64 + 31620;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F7010:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821f7010
	if (!ctx.cr6.eq) goto loc_821F7010;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821F7024:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f7024
	if (!ctx.cr6.eq) goto loc_821F7024;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821F7044:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,31616
	ctx.r10.s64 = ctx.r11.s64 + 31616;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F7050:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f7050
	if (!ctx.cr6.eq) goto loc_821F7050;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821F7064:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821f7064
	if (!ctx.cr6.eq) goto loc_821F7064;
loc_821F707C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F7084"))) PPC_WEAK_FUNC(sub_821F7084);
PPC_FUNC_IMPL(__imp__sub_821F7084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F7088"))) PPC_WEAK_FUNC(sub_821F7088);
PPC_FUNC_IMPL(__imp__sub_821F7088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10416
	ctx.r3.s64 = ctx.r11.s64 + 10416;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x821f6af0
	sub_821F6AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821F709C"))) PPC_WEAK_FUNC(sub_821F709C);
PPC_FUNC_IMPL(__imp__sub_821F709C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F70A0"))) PPC_WEAK_FUNC(sub_821F70A0);
PPC_FUNC_IMPL(__imp__sub_821F70A0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,22364
	ctx.r11.s64 = ctx.r11.s64 + 22364;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,796
	ctx.r10.s64 = ctx.r10.s64 + 796;
loc_821F70C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x821f70e4
	if (ctx.cr6.eq) goto loc_821F70E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821f70c0
	if (ctx.cr6.eq) goto loc_821F70C0;
loc_821F70E4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821f70f4
	if (ctx.cr6.eq) goto loc_821F70F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821F70F4:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,13000
	ctx.r11.s64 = ctx.r11.s64 + 13000;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821f7110
	if (ctx.cr6.eq) goto loc_821F7110;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F7110:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F7128"))) PPC_WEAK_FUNC(sub_821F7128);
PPC_FUNC_IMPL(__imp__sub_821F7128) {
	PPC_FUNC_PROLOGUE();
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,25864
	ctx.r9.u64 = ctx.r10.u64 | 25864;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addis r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 262144;
	// mulli r8,r10,584
	ctx.r8.s64 = ctx.r10.s64 * 584;
	// addi r7,r11,26172
	ctx.r7.s64 = ctx.r11.s64 + 26172;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x821f71c4
	if (ctx.cr6.gt) {
		// ERROR 821F71C4
		return;
	}
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,29044
	ctx.r12.s64 = ctx.r12.s64 + 29044;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x821F71C0
		return;
	case 1:
		// ERROR: 0x821F71C4
		return;
	case 2:
		// ERROR: 0x821F71C4
		return;
	case 3:
		// ERROR: 0x821F71C4
		return;
	case 4:
		// ERROR: 0x821F71C4
		return;
	case 5:
		// ERROR: 0x821F71C0
		return;
	case 6:
		// ERROR: 0x821F71C4
		return;
	case 7:
		// ERROR: 0x821F71C4
		return;
	case 8:
		// ERROR: 0x821F71C4
		return;
	case 9:
		// ERROR: 0x821F71C4
		return;
	case 10:
		// ERROR: 0x821F71C4
		return;
	case 11:
		// ERROR: 0x821F71C4
		return;
	case 12:
		// ERROR: 0x821F71C4
		return;
	case 13:
		// ERROR: 0x821F71C4
		return;
	case 14:
		// ERROR: 0x821F71C0
		return;
	case 15:
		// ERROR: 0x821F71C4
		return;
	case 16:
		// ERROR: 0x821F71C0
		return;
	case 17:
		// ERROR: 0x821F71C4
		return;
	case 18:
		// ERROR: 0x821F71C0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821F7174"))) PPC_WEAK_FUNC(sub_821F7174);
PPC_FUNC_IMPL(__imp__sub_821F7174) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,29120(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29120);
	// lwz r16,29124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29124);
	// lwz r16,29124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29124);
	// lwz r16,29124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29124);
	// lwz r16,29124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29124);
	// lwz r16,29120(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29120);
	// lwz r16,29124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29124);
	// lwz r16,29124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29124);
	// lwz r16,29124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29124);
	// lwz r16,29124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29124);
	// lwz r16,29124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29124);
	// lwz r16,29124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29124);
	// lwz r16,29124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29124);
	// lwz r16,29124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29124);
	// lwz r16,29120(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29120);
	// lwz r16,29124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29124);
	// lwz r16,29120(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29120);
	// lwz r16,29124(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29124);
	// lwz r16,29120(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29120);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821f720c
	if (ctx.cr6.eq) goto loc_821F720C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r5,3
	ctx.r5.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r4,r5,51970
	ctx.r4.u64 = ctx.r5.u64 | 51970;
	// lbzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f7200
	if (!ctx.cr6.eq) goto loc_821F7200;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r9,r10,51969
	ctx.r9.u64 = ctx.r10.u64 | 51969;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821f720c
	if (ctx.cr6.eq) goto loc_821F720C;
loc_821F7200:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_821F720C:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F7218"))) PPC_WEAK_FUNC(sub_821F7218);
PPC_FUNC_IMPL(__imp__sub_821F7218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,1000
	ctx.r11.s64 = ctx.r3.s64 + 1000;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r3,1020
	ctx.r5.s64 = ctx.r3.s64 + 1020;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,26452(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26452);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,31672(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31672);
	ctx.f13.f64 = double(temp.f32);
loc_821F7234:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r8,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r1,-16
	ctx.r4.s64 = ctx.r1.s64 + -16;
	// rlwinm r9,r7,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f12,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f7.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
loc_821F7294:
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x821f72b4
	if (ctx.cr6.eq) goto loc_821F72B4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// blt cr6,0x821f7294
	if (ctx.cr6.lt) goto loc_821F7294;
	// b 0x821f72b8
	goto loc_821F72B8;
loc_821F72B4:
	// li r6,1
	ctx.r6.s64 = 1;
loc_821F72B8:
	// lwz r8,1008(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1008);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821f72c8
	if (!ctx.cr6.eq) goto loc_821F72C8;
	// li r6,1
	ctx.r6.s64 = 1;
loc_821F72C8:
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821f7234
	if (!ctx.cr6.eq) goto loc_821F7234;
	// stw r10,1012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1012, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F72DC"))) PPC_WEAK_FUNC(sub_821F72DC);
PPC_FUNC_IMPL(__imp__sub_821F72DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821F72E0"))) PPC_WEAK_FUNC(sub_821F72E0);
PPC_FUNC_IMPL(__imp__sub_821F72E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,29440
	ctx.r12.s64 = ctx.r12.s64 + 29440;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		// ERROR: 0x821F731C
		return;
	case 1:
		// ERROR: 0x821F7340
		return;
	case 2:
		// ERROR: 0x821F736C
		return;
	case 3:
		// ERROR: 0x821F7390
		return;
	case 4:
		// ERROR: 0x821F73B4
		return;
	case 5:
		// ERROR: 0x821F73E0
		return;
	case 6:
		// ERROR: 0x821F7404
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821F7300"))) PPC_WEAK_FUNC(sub_821F7300);
PPC_FUNC_IMPL(__imp__sub_821F7300) {
	PPC_FUNC_PROLOGUE();
	// lwz r16,29468(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29468);
	// lwz r16,29504(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29504);
	// lwz r16,29548(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29548);
	// lwz r16,29584(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29584);
	// lwz r16,29620(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29620);
	// lwz r16,29664(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29664);
	// lwz r16,29700(r31)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29700);
	// lis r11,-30691
	ctx.r11.s64 = -2011365376;
	// lis r9,-15171
	ctx.r9.s64 = -994246656;
	// ori r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 16384;
	// ori r8,r9,36386
	ctx.r8.u64 = ctx.r9.u64 | 36386;
	// li r7,0
	ctx.r7.s64 = 0;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// std r10,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821F7340"))) PPC_WEAK_FUNC(sub_821F7340);
PPC_FUNC_IMPL(__imp__sub_821F7340) {
	PPC_FUNC_PROLOGUE();
	// lis r6,-22755
	ctx.r6.s64 = -1491271680;
	// lis r4,-15171
	ctx.r4.s64 = -994246656;
	// ori r5,r6,16384
	ctx.r5.u64 = ctx.r6.u64 | 16384;
	// ori r11,r4,34860
	ctx.r11.u64 = ctx.r4.u64 | 34860;
	// li r10,6
	ctx.r10.s64 = 6;
	// rldimi r5,r11,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// std r5,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r5.u64);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// blr 
	return;
}


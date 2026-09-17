#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8221B430"))) PPC_WEAK_FUNC(sub_8221B430);
PPC_FUNC_IMPL(__imp__sub_8221B430) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B438"))) PPC_WEAK_FUNC(sub_8221B438);
PPC_FUNC_IMPL(__imp__sub_8221B438) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// bgt cr6,0x8221b4f0
	if (ctx.cr6.gt) {
		sub_8221B4F0(ctx, base);
		return;
	}
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-19368
	ctx.r12.s64 = ctx.r12.s64 + -19368;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		sub_8221B4F0(ctx, base);
		return;
	case 1:
		sub_8221B4F0(ctx, base);
		return;
	case 2:
		// ERROR: 0x8221B490
		return;
	case 3:
		sub_8221B498(ctx, base);
		return;
	case 4:
		sub_8221B4A0(ctx, base);
		return;
	case 5:
		sub_8221B4A8(ctx, base);
		return;
	case 6:
		sub_8221B4B0(ctx, base);
		return;
	case 7:
		sub_8221B4B8(ctx, base);
		return;
	case 8:
		sub_8221B4C0(ctx, base);
		return;
	case 9:
		sub_8221B4C8(ctx, base);
		return;
	case 10:
		sub_8221B4D0(ctx, base);
		return;
	case 11:
		sub_8221B4D8(ctx, base);
		return;
	case 12:
		sub_8221B4E0(ctx, base);
		return;
	case 13:
		sub_8221B4E8(ctx, base);
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8221B458"))) PPC_WEAK_FUNC(sub_8221B458);
PPC_FUNC_IMPL(__imp__sub_8221B458) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-19216(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19216);
	// lwz r17,-19216(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19216);
	// lwz r17,-19312(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19312);
	// lwz r17,-19304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19304);
	// lwz r17,-19296(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19296);
	// lwz r17,-19288(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19288);
	// lwz r17,-19280(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19280);
	// lwz r17,-19272(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19272);
	// lwz r17,-19264(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19264);
	// lwz r17,-19256(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19256);
	// lwz r17,-19248(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19248);
	// lwz r17,-19240(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19240);
	// lwz r17,-19232(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19232);
	// lwz r17,-19224(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -19224);
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B498"))) PPC_WEAK_FUNC(sub_8221B498);
PPC_FUNC_IMPL(__imp__sub_8221B498) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B4A0"))) PPC_WEAK_FUNC(sub_8221B4A0);
PPC_FUNC_IMPL(__imp__sub_8221B4A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B4A8"))) PPC_WEAK_FUNC(sub_8221B4A8);
PPC_FUNC_IMPL(__imp__sub_8221B4A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B4B0"))) PPC_WEAK_FUNC(sub_8221B4B0);
PPC_FUNC_IMPL(__imp__sub_8221B4B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B4B8"))) PPC_WEAK_FUNC(sub_8221B4B8);
PPC_FUNC_IMPL(__imp__sub_8221B4B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B4C0"))) PPC_WEAK_FUNC(sub_8221B4C0);
PPC_FUNC_IMPL(__imp__sub_8221B4C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B4C8"))) PPC_WEAK_FUNC(sub_8221B4C8);
PPC_FUNC_IMPL(__imp__sub_8221B4C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B4D0"))) PPC_WEAK_FUNC(sub_8221B4D0);
PPC_FUNC_IMPL(__imp__sub_8221B4D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B4D8"))) PPC_WEAK_FUNC(sub_8221B4D8);
PPC_FUNC_IMPL(__imp__sub_8221B4D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B4E0"))) PPC_WEAK_FUNC(sub_8221B4E0);
PPC_FUNC_IMPL(__imp__sub_8221B4E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B4E8"))) PPC_WEAK_FUNC(sub_8221B4E8);
PPC_FUNC_IMPL(__imp__sub_8221B4E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B4F0"))) PPC_WEAK_FUNC(sub_8221B4F0);
PPC_FUNC_IMPL(__imp__sub_8221B4F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B4F8"))) PPC_WEAK_FUNC(sub_8221B4F8);
PPC_FUNC_IMPL(__imp__sub_8221B4F8) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r3,r11,32778
	ctx.r3.u64 = ctx.r11.u64 | 32778;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// lis r7,0
	ctx.r7.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// ori r7,r7,32779
	ctx.r7.u64 = ctx.r7.u64 | 32779;
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stwx r7,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8221b5c0
	if (ctx.cr6.eq) goto loc_8221B5C0;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,8
	ctx.r11.s64 = 8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stwx r11,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u32);
	// beq cr6,0x8221b5a0
	if (ctx.cr6.eq) goto loc_8221B5A0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8221b5a4
	if (!ctx.cr6.eq) goto loc_8221B5A4;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8221b5a4
	goto loc_8221B5A4;
loc_8221B5A0:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8221B5A4:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_8221B5C0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8221b5f8
	if (ctx.cr6.eq) goto loc_8221B5F8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x8221b310
	ctx.lr = 0x8221B5DC;
	sub_8221B310(ctx, base);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_8221B5F8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8221b630
	if (ctx.cr6.eq) goto loc_8221B630;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x8221b388
	ctx.lr = 0x8221B614;
	sub_8221B388(ctx, base);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r3,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_8221B630:
	// cmpwi cr6,r6,14
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 14, ctx.xer);
	// beq cr6,0x8221b668
	if (ctx.cr6.eq) goto loc_8221B668;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stwx r11,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x8221b438
	ctx.lr = 0x8221B64C;
	sub_8221B438(ctx, base);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
loc_8221B668:
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

__attribute__((alias("__imp__sub_8221B67C"))) PPC_WEAK_FUNC(sub_8221B67C);
PPC_FUNC_IMPL(__imp__sub_8221B67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221B680"))) PPC_WEAK_FUNC(sub_8221B680);
PPC_FUNC_IMPL(__imp__sub_8221B680) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8221b6dc
	if (!ctx.cr6.gt) goto loc_8221B6DC;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8221B6A4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x8221b6b8
	if (!ctx.cr6.eq) goto loc_8221B6B8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x8221b6c4
	goto loc_8221B6C4;
loc_8221B6B8:
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bne cr6,0x8221b6c4
	if (!ctx.cr6.eq) goto loc_8221B6C4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8221B6C4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8221b6a4
	if (ctx.cr6.lt) goto loc_8221B6A4;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8221b6e8
	if (!ctx.cr6.eq) goto loc_8221B6E8;
loc_8221B6DC:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8221B6E8:
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,8
	ctx.r10.s64 = 8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x8221b744
	if (ctx.cr6.gt) goto loc_8221B744;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-18664
	ctx.r12.s64 = ctx.r12.s64 + -18664;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_8221B730;
	case 1:
		goto loc_8221B730;
	case 2:
		goto loc_8221B73C;
	case 3:
		goto loc_8221B73C;
	case 4:
		goto loc_8221B73C;
	case 5:
		goto loc_8221B730;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-18640(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18640);
	// lwz r17,-18640(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18640);
	// lwz r17,-18628(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18628);
	// lwz r17,-18628(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18628);
	// lwz r17,-18628(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18628);
	// lwz r17,-18640(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18640);
loc_8221B730:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x8221b744
	goto loc_8221B744;
loc_8221B73C:
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_8221B744:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8221b75c
	if (!ctx.cr6.eq) goto loc_8221B75C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
loc_8221B75C:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,9
	ctx.r6.s64 = 9;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// bgt cr6,0x8221b804
	if (ctx.cr6.gt) goto loc_8221B804;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-18548
	ctx.r12.s64 = ctx.r12.s64 + -18548;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_8221B7A4;
	case 1:
		goto loc_8221B7B4;
	case 2:
		goto loc_8221B7E4;
	case 3:
		goto loc_8221B7F4;
	case 4:
		goto loc_8221B7D4;
	case 5:
		goto loc_8221B7C4;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-18524(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18524);
	// lwz r17,-18508(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18508);
	// lwz r17,-18460(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18460);
	// lwz r17,-18444(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18444);
	// lwz r17,-18476(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18476);
	// lwz r17,-18492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -18492);
loc_8221B7A4:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8221B7B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8221B7C4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8221B7D4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8221B7E4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8221B7F4:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8221B804:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B814"))) PPC_WEAK_FUNC(sub_8221B814);
PPC_FUNC_IMPL(__imp__sub_8221B814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221B818"))) PPC_WEAK_FUNC(sub_8221B818);
PPC_FUNC_IMPL(__imp__sub_8221B818) {
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
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8221b864
	if (!ctx.cr6.gt) goto loc_8221B864;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8221B838:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 10, ctx.xer);
	// beq cr6,0x8221b85c
	if (ctx.cr6.eq) goto loc_8221B85C;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8221b838
	if (ctx.cr6.lt) goto loc_8221B838;
	// b 0x8221b864
	goto loc_8221B864;
loc_8221B85C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8221b870
	if (!ctx.cr6.eq) goto loc_8221B870;
loc_8221B864:
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
loc_8221B870:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,10
	ctx.r4.s64 = 10;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// bl 0x8221b388
	ctx.lr = 0x8221B884;
	sub_8221B388(ctx, base);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B898"))) PPC_WEAK_FUNC(sub_8221B898);
PPC_FUNC_IMPL(__imp__sub_8221B898) {
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
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8221b8e4
	if (!ctx.cr6.gt) goto loc_8221B8E4;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8221B8B8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 11, ctx.xer);
	// beq cr6,0x8221b8dc
	if (ctx.cr6.eq) goto loc_8221B8DC;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8221b8b8
	if (ctx.cr6.lt) goto loc_8221B8B8;
	// b 0x8221b8e4
	goto loc_8221B8E4;
loc_8221B8DC:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8221b8f0
	if (!ctx.cr6.eq) goto loc_8221B8F0;
loc_8221B8E4:
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
loc_8221B8F0:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,11
	ctx.r4.s64 = 11;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// bl 0x8221b438
	ctx.lr = 0x8221B904;
	sub_8221B438(ctx, base);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B918"))) PPC_WEAK_FUNC(sub_8221B918);
PPC_FUNC_IMPL(__imp__sub_8221B918) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8221b958
	if (!ctx.cr6.gt) goto loc_8221B958;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8221B92C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,32778
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32778, ctx.xer);
	// beq cr6,0x8221b950
	if (ctx.cr6.eq) goto loc_8221B950;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8221b92c
	if (ctx.cr6.lt) goto loc_8221B92C;
	// b 0x8221b958
	goto loc_8221B958;
loc_8221B950:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8221b964
	if (!ctx.cr6.eq) goto loc_8221B964;
loc_8221B958:
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
loc_8221B964:
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// ori r9,r10,32778
	ctx.r9.u64 = ctx.r10.u64 | 32778;
	// rlwinm r8,r3,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221B98C"))) PPC_WEAK_FUNC(sub_8221B98C);
PPC_FUNC_IMPL(__imp__sub_8221B98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221B990"))) PPC_WEAK_FUNC(sub_8221B990);
PPC_FUNC_IMPL(__imp__sub_8221B990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8221B998;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// stw r29,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r27,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r27.u32);
	// bl 0x82369930
	ctx.lr = 0x8221B9D8;
	sub_82369930(ctx, base);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// beq cr6,0x8221b9fc
	if (ctx.cr6.eq) goto loc_8221B9FC;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// b 0x8221ba00
	goto loc_8221BA00;
loc_8221B9FC:
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
loc_8221BA00:
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// addi r8,r31,84
	ctx.r8.s64 = ctx.r31.s64 + 84;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r5,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r5.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221b4f8
	ctx.lr = 0x8221BA2C;
	sub_8221B4F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221BA34"))) PPC_WEAK_FUNC(sub_8221BA34);
PPC_FUNC_IMPL(__imp__sub_8221BA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BA38"))) PPC_WEAK_FUNC(sub_8221BA38);
PPC_FUNC_IMPL(__imp__sub_8221BA38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BA40"))) PPC_WEAK_FUNC(sub_8221BA40);
PPC_FUNC_IMPL(__imp__sub_8221BA40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BA48"))) PPC_WEAK_FUNC(sub_8221BA48);
PPC_FUNC_IMPL(__imp__sub_8221BA48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BA50"))) PPC_WEAK_FUNC(sub_8221BA50);
PPC_FUNC_IMPL(__imp__sub_8221BA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lwz r3,-31544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31544);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BA5C"))) PPC_WEAK_FUNC(sub_8221BA5C);
PPC_FUNC_IMPL(__imp__sub_8221BA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BA60"))) PPC_WEAK_FUNC(sub_8221BA60);
PPC_FUNC_IMPL(__imp__sub_8221BA60) {
	PPC_FUNC_PROLOGUE();
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BA68"))) PPC_WEAK_FUNC(sub_8221BA68);
PPC_FUNC_IMPL(__imp__sub_8221BA68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BA70"))) PPC_WEAK_FUNC(sub_8221BA70);
PPC_FUNC_IMPL(__imp__sub_8221BA70) {
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
	// bl 0x8236a108
	ctx.lr = 0x8221BA88;
	sub_8236A108(ctx, base);
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
	// li r10,26
	ctx.r10.s64 = 26;
	// li r8,99
	ctx.r8.s64 = 99;
	// li r9,300
	ctx.r9.s64 = 300;
loc_8221BA98:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r8,-104(r11)
	PPC_STORE_U32(ctx.r11.u32 + -104, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221ba98
	if (!ctx.cr6.eq) goto loc_8221BA98;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,-24684
	ctx.r11.s64 = ctx.r11.s64 + -24684;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r10.u32);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// stfs f13,228(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
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

__attribute__((alias("__imp__sub_8221BAE8"))) PPC_WEAK_FUNC(sub_8221BAE8);
PPC_FUNC_IMPL(__imp__sub_8221BAE8) {
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
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-31536
	ctx.r31.s64 = ctx.r11.s64 + -31536;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221bc3c
	if (ctx.cr6.eq) goto loc_8221BC3C;
loc_8221BB18:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8221BB1C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8221bb40
	if (ctx.cr6.eq) goto loc_8221BB40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221bb1c
	if (ctx.cr6.eq) goto loc_8221BB1C;
loc_8221BB40:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221bb68
	if (ctx.cr6.eq) goto loc_8221BB68;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221bb18
	if (!ctx.cr6.eq) goto loc_8221BB18;
	// b 0x8221bc3c
	goto loc_8221BC3C;
loc_8221BB68:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8221bc3c
	if (ctx.cr6.gt) goto loc_8221BC3C;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-17508
	ctx.r12.s64 = ctx.r12.s64 + -17508;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8221BBAC;
	case 1:
		goto loc_8221BBC4;
	case 2:
		goto loc_8221BBDC;
	case 3:
		goto loc_8221BBF8;
	default:
		__builtin_unreachable();
	}
	// lwz r17,-17492(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17492);
	// lwz r17,-17468(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17468);
	// lwz r17,-17444(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17444);
	// lwz r17,-17416(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -17416);
loc_8221BBAC:
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r31,r7,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x8259dbd0
	ctx.lr = 0x8221BBBC;
	sub_8259DBD0(ctx, base);
	// stwx r3,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// b 0x8221bc3c
	goto loc_8221BC3C;
loc_8221BBC4:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8221BBD8;
	sub_8259D2A0(ctx, base);
	// b 0x8221bc3c
	goto loc_8221BC3C;
loc_8221BBDC:
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r31,r7,r5
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// bl 0x8259e150
	ctx.lr = 0x8221BBEC;
	sub_8259E150(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsx f0,r31,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, temp.u32);
	// b 0x8221bc3c
	goto loc_8221BC3C;
loc_8221BBF8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,-22760
	ctx.r10.s64 = ctx.r11.s64 + -22760;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8221BC04:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x8221bc28
	if (ctx.cr6.eq) goto loc_8221BC28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8221bc04
	if (ctx.cr6.eq) goto loc_8221BC04;
loc_8221BC28:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwzx r11,r7,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stbx r9,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u8);
loc_8221BC3C:
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

__attribute__((alias("__imp__sub_8221BC54"))) PPC_WEAK_FUNC(sub_8221BC54);
PPC_FUNC_IMPL(__imp__sub_8221BC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BC58"))) PPC_WEAK_FUNC(sub_8221BC58);
PPC_FUNC_IMPL(__imp__sub_8221BC58) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822d6298
	ctx.lr = 0x8221BC74;
	sub_822D6298(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8221BC94"))) PPC_WEAK_FUNC(sub_8221BC94);
PPC_FUNC_IMPL(__imp__sub_8221BC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BC98"))) PPC_WEAK_FUNC(sub_8221BC98);
PPC_FUNC_IMPL(__imp__sub_8221BC98) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822d6298
	ctx.lr = 0x8221BCB4;
	sub_822D6298(ctx, base);
	// addi r11,r3,30
	ctx.r11.s64 = ctx.r3.s64 + 30;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
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

__attribute__((alias("__imp__sub_8221BCD4"))) PPC_WEAK_FUNC(sub_8221BCD4);
PPC_FUNC_IMPL(__imp__sub_8221BCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BCD8"))) PPC_WEAK_FUNC(sub_8221BCD8);
PPC_FUNC_IMPL(__imp__sub_8221BCD8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BCE8"))) PPC_WEAK_FUNC(sub_8221BCE8);
PPC_FUNC_IMPL(__imp__sub_8221BCE8) {
	PPC_FUNC_PROLOGUE();
	// li r8,636
	ctx.r8.s64 = 636;
	// li r9,144
	ctx.r9.s64 = 144;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r8,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r8.u32);
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r9,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r6,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r6.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,160
	ctx.r4.s64 = 160;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r11.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stb r11,-172(r1)
	PPC_STORE_U8(ctx.r1.u32 + -172, ctx.r11.u8);
	// stw r8,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r8.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r8,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r8.u32);
	// li r8,36
	ctx.r8.s64 = 36;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r11,-164(r1)
	PPC_STORE_U8(ctx.r1.u32 + -164, ctx.r11.u8);
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r11.u32);
	// stb r11,-156(r1)
	PPC_STORE_U8(ctx.r1.u32 + -156, ctx.r11.u8);
	// stb r11,-148(r1)
	PPC_STORE_U8(ctx.r1.u32 + -148, ctx.r11.u8);
	// stw r8,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r8.u32);
	// li r8,28
	ctx.r8.s64 = 28;
	// stb r11,-140(r1)
	PPC_STORE_U8(ctx.r1.u32 + -140, ctx.r11.u8);
	// stb r11,-132(r1)
	PPC_STORE_U8(ctx.r1.u32 + -132, ctx.r11.u8);
	// stb r11,-124(r1)
	PPC_STORE_U8(ctx.r1.u32 + -124, ctx.r11.u8);
	// stb r11,-116(r1)
	PPC_STORE_U8(ctx.r1.u32 + -116, ctx.r11.u8);
	// stb r9,-108(r1)
	PPC_STORE_U8(ctx.r1.u32 + -108, ctx.r9.u8);
	// stb r9,-100(r1)
	PPC_STORE_U8(ctx.r1.u32 + -100, ctx.r9.u8);
	// stb r9,-92(r1)
	PPC_STORE_U8(ctx.r1.u32 + -92, ctx.r9.u8);
	// stb r9,-84(r1)
	PPC_STORE_U8(ctx.r1.u32 + -84, ctx.r9.u8);
	// stb r11,-76(r1)
	PPC_STORE_U8(ctx.r1.u32 + -76, ctx.r11.u8);
	// stb r11,-68(r1)
	PPC_STORE_U8(ctx.r1.u32 + -68, ctx.r11.u8);
	// stb r11,-60(r1)
	PPC_STORE_U8(ctx.r1.u32 + -60, ctx.r11.u8);
	// stb r11,-52(r1)
	PPC_STORE_U8(ctx.r1.u32 + -52, ctx.r11.u8);
	// stb r11,-44(r1)
	PPC_STORE_U8(ctx.r1.u32 + -44, ctx.r11.u8);
	// stb r11,-36(r1)
	PPC_STORE_U8(ctx.r1.u32 + -36, ctx.r11.u8);
	// stw r8,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r8.u32);
	// stb r9,-28(r1)
	PPC_STORE_U8(ctx.r1.u32 + -28, ctx.r9.u8);
	// stb r11,-20(r1)
	PPC_STORE_U8(ctx.r1.u32 + -20, ctx.r11.u8);
	// addi r11,r1,-172
	ctx.r11.s64 = ctx.r1.s64 + -172;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stb r9,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r9.u8);
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// li r8,11
	ctx.r8.s64 = 11;
	// stb r9,-4(r1)
	PPC_STORE_U8(ctx.r1.u32 + -4, ctx.r9.u8);
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// stw r10,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r10.u32);
	// stw r10,-152(r1)
	PPC_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// stw r10,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r10.u32);
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// stw r10,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r10.u32);
	// stw r5,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r5.u32);
	// stw r4,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r4.u32);
	// stw r10,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r10.u32);
	// stw r10,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r10.u32);
	// stw r6,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r6.u32);
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
loc_8221BDDC:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221bdf4
	if (ctx.cr6.eq) goto loc_8221BDF4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8221be00
	if (ctx.cr6.eq) goto loc_8221BE00;
loc_8221BDF4:
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8221be00
	if (!ctx.cr6.lt) goto loc_8221BE00;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8221BE00:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221be18
	if (ctx.cr6.eq) goto loc_8221BE18;
	// lbz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221be24
	if (ctx.cr6.eq) goto loc_8221BE24;
loc_8221BE18:
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8221be24
	if (!ctx.cr6.lt) goto loc_8221BE24;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8221BE24:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8221bddc
	if (!ctx.cr6.eq) goto loc_8221BDDC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221BE38"))) PPC_WEAK_FUNC(sub_8221BE38);
PPC_FUNC_IMPL(__imp__sub_8221BE38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,2896
	ctx.r3.s64 = ctx.r3.s64 + 2896;
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

__attribute__((alias("__imp__sub_8221BE4C"))) PPC_WEAK_FUNC(sub_8221BE4C);
PPC_FUNC_IMPL(__imp__sub_8221BE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221BE50"))) PPC_WEAK_FUNC(sub_8221BE50);
PPC_FUNC_IMPL(__imp__sub_8221BE50) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lwz r3,2672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2672);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221BE80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x8221beac
	if (ctx.cr6.lt) goto loc_8221BEAC;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x8221beac
	if (ctx.cr6.eq) goto loc_8221BEAC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r9.u8);
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
loc_8221BEAC:
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_8221BEC8"))) PPC_WEAK_FUNC(sub_8221BEC8);
PPC_FUNC_IMPL(__imp__sub_8221BEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8221BED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r7,65535
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 65535, ctx.xer);
	// bne cr6,0x8221beec
	if (!ctx.cr6.eq) goto loc_8221BEEC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8221BEEC:
	// addis r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 262144;
	// addi r6,r6,-13588
	ctx.r6.s64 = ctx.r6.s64 + -13588;
	// lhz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// beq cr6,0x8221bfbc
	if (ctx.cr6.eq) goto loc_8221BFBC;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r10,21845
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21845, ctx.xer);
	// bge cr6,0x8221bf24
	if (!ctx.cr6.lt) goto loc_8221BF24;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r5,43690
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 43690, ctx.xer);
	// ble cr6,0x8221bf24
	if (!ctx.cr6.gt) goto loc_8221BF24;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8221bf48
	goto loc_8221BF48;
loc_8221BF24:
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,21845
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21845, ctx.xer);
	// bge cr6,0x8221bf38
	if (!ctx.cr6.lt) goto loc_8221BF38;
	// cmplwi cr6,r10,43690
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 43690, ctx.xer);
	// bgt cr6,0x8221bf44
	if (ctx.cr6.gt) goto loc_8221BF44;
loc_8221BF38:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8221bf48
	if (ctx.cr6.gt) goto loc_8221BF48;
loc_8221BF44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221BF48:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8221c00c
	if (!ctx.cr6.eq) goto loc_8221C00C;
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// beq cr6,0x8221bfbc
	if (ctx.cr6.eq) goto loc_8221BFBC;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,21845
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21845, ctx.xer);
	// bge cr6,0x8221bf88
	if (!ctx.cr6.lt) goto loc_8221BF88;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r10,43690
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 43690, ctx.xer);
	// ble cr6,0x8221bf88
	if (!ctx.cr6.gt) goto loc_8221BF88;
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x8221bf94
	goto loc_8221BF94;
loc_8221BF88:
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
loc_8221BF94:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lbz r11,6036(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,20
	ctx.r11.s64 = 20;
	// bne cr6,0x8221bfac
	if (!ctx.cr6.eq) goto loc_8221BFAC;
	// li r11,24
	ctx.r11.s64 = 24;
loc_8221BFAC:
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x8221c00c
	if (!ctx.cr6.gt) goto loc_8221C00C;
loc_8221BFBC:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// sth r7,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r7.u16);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// lwz r29,56(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8221c00c
	if (!ctx.cr6.gt) goto loc_8221C00C;
loc_8221BFD8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x8221BFE4;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221c000
	if (ctx.cr6.eq) goto loc_8221C000;
	// lbz r11,1201(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1201);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221c000
	if (!ctx.cr6.eq) goto loc_8221C000;
	// addi r3,r3,1484
	ctx.r3.s64 = ctx.r3.s64 + 1484;
	// bl 0x8221a3b0
	ctx.lr = 0x8221C000;
	sub_8221A3B0(ctx, base);
loc_8221C000:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8221bfd8
	if (ctx.cr6.lt) goto loc_8221BFD8;
loc_8221C00C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C014"))) PPC_WEAK_FUNC(sub_8221C014);
PPC_FUNC_IMPL(__imp__sub_8221C014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C018"))) PPC_WEAK_FUNC(sub_8221C018);
PPC_FUNC_IMPL(__imp__sub_8221C018) {
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
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8221c03c
	if (!ctx.cr6.eq) goto loc_8221C03C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221C03C:
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r8,r9,51950
	ctx.r8.u64 = ctx.r9.u64 | 51950;
	// lhzx r8,r3,r8
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r8.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r9,21845
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 21845, ctx.xer);
	// bge cr6,0x8221c068
	if (!ctx.cr6.lt) goto loc_8221C068;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,43690
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 43690, ctx.xer);
	// ble cr6,0x8221c068
	if (!ctx.cr6.gt) goto loc_8221C068;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8221c08c
	goto loc_8221C08C;
loc_8221C068:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,21845
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21845, ctx.xer);
	// bge cr6,0x8221c07c
	if (!ctx.cr6.lt) goto loc_8221C07C;
	// cmplwi cr6,r9,43690
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 43690, ctx.xer);
	// bgt cr6,0x8221c088
	if (ctx.cr6.gt) goto loc_8221C088;
loc_8221C07C:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8221c08c
	if (ctx.cr6.gt) goto loc_8221C08C;
loc_8221C088:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221C08C:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8221c110
	if (!ctx.cr6.eq) goto loc_8221C110;
	// cmplwi cr6,r10,21845
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21845, ctx.xer);
	// bge cr6,0x8221c0c0
	if (!ctx.cr6.lt) goto loc_8221C0C0;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,43690
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43690, ctx.xer);
	// ble cr6,0x8221c0c0
	if (!ctx.cr6.gt) goto loc_8221C0C0;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addis r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// b 0x8221c0cc
	goto loc_8221C0CC;
loc_8221C0C0:
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// subf r3,r4,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r4.s64;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
loc_8221C0CC:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lbz r11,6036(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,150
	ctx.r11.s64 = 150;
	// bne cr6,0x8221c0e4
	if (!ctx.cr6.eq) goto loc_8221C0E4;
	// li r11,180
	ctx.r11.s64 = 180;
loc_8221C0E4:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8221c110
	if (!ctx.cr6.gt) goto loc_8221C110;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82360f70
	ctx.lr = 0x8221C0FC;
	sub_82360F70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221C110:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C124"))) PPC_WEAK_FUNC(sub_8221C124);
PPC_FUNC_IMPL(__imp__sub_8221C124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C128"))) PPC_WEAK_FUNC(sub_8221C128);
PPC_FUNC_IMPL(__imp__sub_8221C128) {
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
	// lis r11,3
	ctx.r11.s64 = 196608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,51969
	ctx.r10.u64 = ctx.r11.u64 | 51969;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221c15c
	if (ctx.cr6.eq) goto loc_8221C15C;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365d58
	ctx.lr = 0x8221C158;
	sub_82365D58(ctx, base);
	// b 0x8221c170
	goto loc_8221C170;
loc_8221C15C:
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,156(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 156);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8221C170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221C170:
	// addis r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 262144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-13616
	ctx.r11.s64 = ctx.r11.s64 + -13616;
loc_8221C17C:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8221c198
	if (ctx.cr6.eq) goto loc_8221C198;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x8221c17c
	if (ctx.cr6.lt) goto loc_8221C17C;
loc_8221C198:
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bne cr6,0x8221c1bc
	if (!ctx.cr6.eq) goto loc_8221C1BC;
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
loc_8221C1BC:
	// addis r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 65536;
	// addi r4,r4,-3403
	ctx.r4.s64 = ctx.r4.s64 + -3403;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8221c1dc
	if (ctx.cr6.eq) goto loc_8221C1DC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221C1DC:
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

__attribute__((alias("__imp__sub_8221C1F0"))) PPC_WEAK_FUNC(sub_8221C1F0);
PPC_FUNC_IMPL(__imp__sub_8221C1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r10,r11,51968
	ctx.r10.u64 = ctx.r11.u64 | 51968;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r9,51964
	ctx.r7.u64 = ctx.r9.u64 | 51964;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// stbx r5,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r5.u8);
	// lis r10,-32110
	ctx.r10.s64 = -2104360960;
	// lis r6,21845
	ctx.r6.s64 = 1431633920;
	// addi r10,r10,12656
	ctx.r10.s64 = ctx.r10.s64 + 12656;
	// stwx r8,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r8.u32);
	// ori r9,r6,21845
	ctx.r9.u64 = ctx.r6.u64 | 21845;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// lis r4,-21846
	ctx.r4.s64 = -1431699456;
	// ori r7,r4,43690
	ctx.r7.u64 = ctx.r4.u64 | 43690;
	// lwz r10,3328(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3328);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8221c244
	if (!ctx.cr6.lt) goto loc_8221C244;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x8221c25c
	if (ctx.cr6.gt) goto loc_8221C25C;
loc_8221C244:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8221c254
	if (!ctx.cr6.lt) goto loc_8221C254;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x8221c260
	if (ctx.cr6.gt) goto loc_8221C260;
loc_8221C254:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8221c260
	if (!ctx.cr6.gt) goto loc_8221C260;
loc_8221C25C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_8221C260:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221c2a8
	if (ctx.cr6.eq) goto loc_8221C2A8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8221c294
	if (!ctx.cr6.lt) goto loc_8221C294;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8221c294
	if (!ctx.cr6.gt) goto loc_8221C294;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r6,r7,51960
	ctx.r6.u64 = ctx.r7.u64 | 51960;
	// stwx r11,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r11.u32);
	// blr 
	return;
loc_8221C294:
	// lis r7,3
	ctx.r7.s64 = 196608;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r6,r7,51960
	ctx.r6.u64 = ctx.r7.u64 | 51960;
	// stwx r11,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r11.u32);
	// blr 
	return;
loc_8221C2A8:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8221c2d4
	if (!ctx.cr6.lt) goto loc_8221C2D4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8221c2d4
	if (!ctx.cr6.gt) goto loc_8221C2D4;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// neg r5,r11
	ctx.r5.s64 = -ctx.r11.s64;
	// ori r11,r4,51960
	ctx.r11.u64 = ctx.r4.u64 | 51960;
	// stwx r5,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r5.u32);
	// blr 
	return;
loc_8221C2D4:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r4,3
	ctx.r4.s64 = 196608;
	// neg r5,r11
	ctx.r5.s64 = -ctx.r11.s64;
	// ori r11,r4,51960
	ctx.r11.u64 = ctx.r4.u64 | 51960;
	// stwx r5,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C2EC"))) PPC_WEAK_FUNC(sub_8221C2EC);
PPC_FUNC_IMPL(__imp__sub_8221C2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C2F0"))) PPC_WEAK_FUNC(sub_8221C2F0);
PPC_FUNC_IMPL(__imp__sub_8221C2F0) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r3,r9,24
	ctx.r3.s64 = ctx.r9.s64 + 24;
	// bl 0x82365550
	ctx.lr = 0x8221C314;
	sub_82365550(ctx, base);
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

__attribute__((alias("__imp__sub_8221C328"))) PPC_WEAK_FUNC(sub_8221C328);
PPC_FUNC_IMPL(__imp__sub_8221C328) {
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
	// addi r30,r31,2896
	ctx.r30.s64 = ctx.r31.s64 + 2896;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,252(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221C358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221c378
	if (!ctx.cr6.eq) goto loc_8221C378;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// ori r7,r8,51969
	ctx.r7.u64 = ctx.r8.u64 | 51969;
	// lbzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221c3c8
	if (ctx.cr6.eq) goto loc_8221C3C8;
loc_8221C378:
	// lis r5,3
	ctx.r5.s64 = 196608;
	// ori r4,r5,51970
	ctx.r4.u64 = ctx.r5.u64 | 51970;
	// lbzx r3,r31,r4
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221c3a4
	if (ctx.cr6.eq) goto loc_8221C3A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221C3A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8221c3cc
	goto loc_8221C3CC;
loc_8221C3A4:
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365d58
	ctx.lr = 0x8221C3B0;
	sub_82365D58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823656e8
	ctx.lr = 0x8221C3BC;
	sub_823656E8(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8221c3cc
	if (ctx.cr6.eq) goto loc_8221C3CC;
loc_8221C3C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221C3CC:
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

__attribute__((alias("__imp__sub_8221C3E4"))) PPC_WEAK_FUNC(sub_8221C3E4);
PPC_FUNC_IMPL(__imp__sub_8221C3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C3E8"))) PPC_WEAK_FUNC(sub_8221C3E8);
PPC_FUNC_IMPL(__imp__sub_8221C3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r10,r11,52000
	ctx.r10.u64 = ctx.r11.u64 | 52000;
	// ori r8,r9,52004
	ctx.r8.u64 = ctx.r9.u64 | 52004;
	// stwx r4,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r4.u32);
	// stwx r5,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C404"))) PPC_WEAK_FUNC(sub_8221C404);
PPC_FUNC_IMPL(__imp__sub_8221C404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C408"))) PPC_WEAK_FUNC(sub_8221C408);
PPC_FUNC_IMPL(__imp__sub_8221C408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x82367d78
	ctx.lr = 0x8221C430;
	sub_82367D78(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,-22792
	ctx.r4.s64 = ctx.r11.s64 + -22792;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259ead8
	ctx.lr = 0x8221C450;
	sub_8259EAD8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r11,26464
	ctx.r10.u64 = ctx.r11.u64 | 26464;
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C474"))) PPC_WEAK_FUNC(sub_8221C474);
PPC_FUNC_IMPL(__imp__sub_8221C474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C478"))) PPC_WEAK_FUNC(sub_8221C478);
PPC_FUNC_IMPL(__imp__sub_8221C478) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x823656f8
	ctx.lr = 0x8221C49C;
	sub_823656F8(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c4cc
	if (ctx.cr6.eq) goto loc_8221C4CC;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,1204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1204, ctx.r10.u32);
	// stb r9,1200(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1200, ctx.r9.u8);
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
loc_8221C4CC:
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,1204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1204, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8221C4E8"))) PPC_WEAK_FUNC(sub_8221C4E8);
PPC_FUNC_IMPL(__imp__sub_8221C4E8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221c544
	if (!ctx.cr6.gt) goto loc_8221C544;
loc_8221C514:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x8221C520;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221c534
	if (ctx.cr6.eq) goto loc_8221C534;
	// lwz r11,1204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1204);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8221c560
	if (!ctx.cr6.eq) goto loc_8221C560;
loc_8221C534:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8221c514
	if (ctx.cr6.lt) goto loc_8221C514;
loc_8221C544:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8221C548:
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
loc_8221C560:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8221c548
	goto loc_8221C548;
}

__attribute__((alias("__imp__sub_8221C568"))) PPC_WEAK_FUNC(sub_8221C568);
PPC_FUNC_IMPL(__imp__sub_8221C568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8221C570;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8221c4e8
	ctx.lr = 0x8221C57C;
	sub_8221C4E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221c594
	if (!ctx.cr6.eq) goto loc_8221C594;
loc_8221C588:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8221C594:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221c5e4
	if (!ctx.cr6.gt) goto loc_8221C5E4;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
loc_8221C5B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82365758
	ctx.lr = 0x8221C5BC;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221c5d4
	if (ctx.cr6.eq) goto loc_8221C5D4;
	// bl 0x8221b1e8
	ctx.lr = 0x8221C5C8;
	sub_8221B1E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221c588
	if (ctx.cr6.eq) goto loc_8221C588;
loc_8221C5D4:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8221c5b0
	if (ctx.cr6.lt) goto loc_8221C5B0;
loc_8221C5E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221C5F0"))) PPC_WEAK_FUNC(sub_8221C5F0);
PPC_FUNC_IMPL(__imp__sub_8221C5F0) {
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
	// addi r3,r5,24
	ctx.r3.s64 = ctx.r5.s64 + 24;
	// bl 0x823656f8
	ctx.lr = 0x8221C604;
	sub_823656F8(ctx, base);
	// lbz r11,1648(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221c618
	if (!ctx.cr6.eq) goto loc_8221C618;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1648(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1648, ctx.r10.u8);
loc_8221C618:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C628"))) PPC_WEAK_FUNC(sub_8221C628);
PPC_FUNC_IMPL(__imp__sub_8221C628) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r6,69(r7)
	PPC_STORE_U8(ctx.r7.u32 + 69, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C670"))) PPC_WEAK_FUNC(sub_8221C670);
PPC_FUNC_IMPL(__imp__sub_8221C670) {
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
	// addi r3,r5,24
	ctx.r3.s64 = ctx.r5.s64 + 24;
	// bl 0x823656f8
	ctx.lr = 0x8221C68C;
	sub_823656F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221c6a4
	if (ctx.cr6.eq) goto loc_8221C6A4;
	// addi r5,r3,1328
	ctx.r5.s64 = ctx.r3.s64 + 1328;
	// addi r4,r3,1304
	ctx.r4.s64 = ctx.r3.s64 + 1304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221a2e8
	ctx.lr = 0x8221C6A4;
	sub_8221A2E8(ctx, base);
loc_8221C6A4:
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

__attribute__((alias("__imp__sub_8221C6B8"))) PPC_WEAK_FUNC(sub_8221C6B8);
PPC_FUNC_IMPL(__imp__sub_8221C6B8) {
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
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221c704
	if (!ctx.cr6.eq) goto loc_8221C704;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r7,24
	ctx.r3.s64 = ctx.r7.s64 + 24;
	// bl 0x823656f8
	ctx.lr = 0x8221C6DC;
	sub_823656F8(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,1280
	ctx.r11.s64 = ctx.r3.s64 + 1280;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r9,4
	ctx.r9.s64 = 4;
loc_8221C6EC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r8,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221c6ec
	if (!ctx.cr6.eq) goto loc_8221C6EC;
loc_8221C704:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C714"))) PPC_WEAK_FUNC(sub_8221C714);
PPC_FUNC_IMPL(__imp__sub_8221C714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221C718"))) PPC_WEAK_FUNC(sub_8221C718);
PPC_FUNC_IMPL(__imp__sub_8221C718) {
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
	// bl 0x8221c328
	ctx.lr = 0x8221C730;
	sub_8221C328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221c754
	if (ctx.cr6.eq) goto loc_8221C754;
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
loc_8221C754:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addis r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 262144;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r3,-13728
	ctx.r3.s64 = ctx.r3.s64 + -13728;
	// lfs f1,-24672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24672);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82366008
	ctx.lr = 0x8221C76C;
	sub_82366008(ctx, base);
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

__attribute__((alias("__imp__sub_8221C780"))) PPC_WEAK_FUNC(sub_8221C780);
PPC_FUNC_IMPL(__imp__sub_8221C780) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,1061
	ctx.r11.s64 = ctx.r4.s64 + 1061;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bgt cr6,0x8221cb78
	if (ctx.cr6.gt) {
		sub_8221CB78(ctx, base);
		return;
	}
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-14428
	ctx.r12.s64 = ctx.r12.s64 + -14428;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		sub_8221CB6C(ctx, base);
		return;
	case 1:
		sub_8221CB60(ctx, base);
		return;
	case 2:
		sub_8221CB54(ctx, base);
		return;
	case 3:
		sub_8221CB48(ctx, base);
		return;
	case 4:
		sub_8221CB3C(ctx, base);
		return;
	case 5:
		sub_8221CB30(ctx, base);
		return;
	case 6:
		sub_8221CB24(ctx, base);
		return;
	case 7:
		sub_8221CB18(ctx, base);
		return;
	case 8:
		sub_8221CB0C(ctx, base);
		return;
	case 9:
		sub_8221CB00(ctx, base);
		return;
	case 10:
		sub_8221CB00(ctx, base);
		return;
	case 11:
		sub_8221CAF4(ctx, base);
		return;
	case 12:
		sub_8221CAE8(ctx, base);
		return;
	case 13:
		sub_8221CADC(ctx, base);
		return;
	case 14:
		sub_8221CAD0(ctx, base);
		return;
	case 15:
		sub_8221CAC4(ctx, base);
		return;
	case 16:
		sub_8221CAB8(ctx, base);
		return;
	case 17:
		sub_8221CAAC(ctx, base);
		return;
	case 18:
		sub_8221CAA0(ctx, base);
		return;
	case 19:
		sub_8221CA94(ctx, base);
		return;
	case 20:
		sub_8221CA88(ctx, base);
		return;
	case 21:
		sub_8221CA7C(ctx, base);
		return;
	case 22:
		sub_8221CA70(ctx, base);
		return;
	case 23:
		sub_8221CA64(ctx, base);
		return;
	case 24:
		sub_8221CA58(ctx, base);
		return;
	case 25:
		sub_8221CA4C(ctx, base);
		return;
	case 26:
		sub_8221CA40(ctx, base);
		return;
	case 27:
		sub_8221CA34(ctx, base);
		return;
	case 28:
		sub_8221CA28(ctx, base);
		return;
	case 29:
		sub_8221CA1C(ctx, base);
		return;
	case 30:
		sub_8221CA10(ctx, base);
		return;
	case 31:
		sub_8221CA04(ctx, base);
		return;
	case 32:
		sub_8221C9F8(ctx, base);
		return;
	case 33:
		sub_8221C9EC(ctx, base);
		return;
	case 34:
		sub_8221C9E0(ctx, base);
		return;
	case 35:
		sub_8221C9D4(ctx, base);
		return;
	case 36:
		sub_8221C9C8(ctx, base);
		return;
	case 37:
		sub_8221C9BC(ctx, base);
		return;
	case 38:
		sub_8221C9B0(ctx, base);
		return;
	case 39:
		sub_8221C9A4(ctx, base);
		return;
	case 40:
		sub_8221C998(ctx, base);
		return;
	case 41:
		sub_8221C98C(ctx, base);
		return;
	case 42:
		sub_8221C980(ctx, base);
		return;
	case 43:
		sub_8221C974(ctx, base);
		return;
	case 44:
		sub_8221C968(ctx, base);
		return;
	case 45:
		sub_8221C95C(ctx, base);
		return;
	case 46:
		sub_8221C950(ctx, base);
		return;
	case 47:
		sub_8221C944(ctx, base);
		return;
	case 48:
		sub_8221C938(ctx, base);
		return;
	case 49:
		sub_8221C92C(ctx, base);
		return;
	case 50:
		sub_8221C920(ctx, base);
		return;
	case 51:
		sub_8221C914(ctx, base);
		return;
	case 52:
		sub_8221C908(ctx, base);
		return;
	case 53:
		sub_8221C8FC(ctx, base);
		return;
	case 54:
		sub_8221C8F0(ctx, base);
		return;
	case 55:
		sub_8221C8E4(ctx, base);
		return;
	case 56:
		sub_8221C8D8(ctx, base);
		return;
	case 57:
		sub_8221C8CC(ctx, base);
		return;
	case 58:
		sub_8221C8C0(ctx, base);
		return;
	case 59:
		sub_8221C8B4(ctx, base);
		return;
	case 60:
		sub_8221C8A8(ctx, base);
		return;
	case 61:
		// ERROR: 0x8221C89C
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8221C7A4"))) PPC_WEAK_FUNC(sub_8221C7A4);
PPC_FUNC_IMPL(__imp__sub_8221C7A4) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-13460(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13460);
	// lwz r17,-13472(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13472);
	// lwz r17,-13484(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13484);
	// lwz r17,-13496(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13496);
	// lwz r17,-13508(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13508);
	// lwz r17,-13520(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13520);
	// lwz r17,-13532(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13532);
	// lwz r17,-13544(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13544);
	// lwz r17,-13556(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13556);
	// lwz r17,-13568(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13568);
	// lwz r17,-13568(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13568);
	// lwz r17,-13580(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13580);
	// lwz r17,-13592(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13592);
	// lwz r17,-13604(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13604);
	// lwz r17,-13616(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13616);
	// lwz r17,-13628(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13628);
	// lwz r17,-13640(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13640);
	// lwz r17,-13652(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13652);
	// lwz r17,-13664(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13664);
	// lwz r17,-13676(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13676);
	// lwz r17,-13688(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13688);
	// lwz r17,-13700(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13700);
	// lwz r17,-13712(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13712);
	// lwz r17,-13724(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13724);
	// lwz r17,-13736(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13736);
	// lwz r17,-13748(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13748);
	// lwz r17,-13760(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13760);
	// lwz r17,-13772(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13772);
	// lwz r17,-13784(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13784);
	// lwz r17,-13796(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13796);
	// lwz r17,-13808(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13808);
	// lwz r17,-13820(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13820);
	// lwz r17,-13832(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13832);
	// lwz r17,-13844(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13844);
	// lwz r17,-13856(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13856);
	// lwz r17,-13868(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13868);
	// lwz r17,-13880(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13880);
	// lwz r17,-13892(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13892);
	// lwz r17,-13904(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13904);
	// lwz r17,-13916(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13916);
	// lwz r17,-13928(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13928);
	// lwz r17,-13940(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13940);
	// lwz r17,-13952(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13952);
	// lwz r17,-13964(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13964);
	// lwz r17,-13976(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13976);
	// lwz r17,-13988(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13988);
	// lwz r17,-14000(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14000);
	// lwz r17,-14012(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14012);
	// lwz r17,-14024(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14024);
	// lwz r17,-14036(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14036);
	// lwz r17,-14048(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14048);
	// lwz r17,-14060(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14060);
	// lwz r17,-14072(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14072);
	// lwz r17,-14084(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14084);
	// lwz r17,-14096(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14096);
	// lwz r17,-14108(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14108);
	// lwz r17,-14120(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14120);
	// lwz r17,-14132(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14132);
	// lwz r17,-14144(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14144);
	// lwz r17,-14156(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14156);
	// lwz r17,-14168(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14168);
	// lwz r17,-14180(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -14180);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-20924
	ctx.r3.s64 = ctx.r11.s64 + -20924;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C8A8"))) PPC_WEAK_FUNC(sub_8221C8A8);
PPC_FUNC_IMPL(__imp__sub_8221C8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-20956
	ctx.r3.s64 = ctx.r11.s64 + -20956;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C8B4"))) PPC_WEAK_FUNC(sub_8221C8B4);
PPC_FUNC_IMPL(__imp__sub_8221C8B4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-20988
	ctx.r3.s64 = ctx.r11.s64 + -20988;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C8C0"))) PPC_WEAK_FUNC(sub_8221C8C0);
PPC_FUNC_IMPL(__imp__sub_8221C8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21020
	ctx.r3.s64 = ctx.r11.s64 + -21020;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C8CC"))) PPC_WEAK_FUNC(sub_8221C8CC);
PPC_FUNC_IMPL(__imp__sub_8221C8CC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21056
	ctx.r3.s64 = ctx.r11.s64 + -21056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C8D8"))) PPC_WEAK_FUNC(sub_8221C8D8);
PPC_FUNC_IMPL(__imp__sub_8221C8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21088
	ctx.r3.s64 = ctx.r11.s64 + -21088;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C8E4"))) PPC_WEAK_FUNC(sub_8221C8E4);
PPC_FUNC_IMPL(__imp__sub_8221C8E4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21120
	ctx.r3.s64 = ctx.r11.s64 + -21120;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C8F0"))) PPC_WEAK_FUNC(sub_8221C8F0);
PPC_FUNC_IMPL(__imp__sub_8221C8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21144
	ctx.r3.s64 = ctx.r11.s64 + -21144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C8FC"))) PPC_WEAK_FUNC(sub_8221C8FC);
PPC_FUNC_IMPL(__imp__sub_8221C8FC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21180
	ctx.r3.s64 = ctx.r11.s64 + -21180;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C908"))) PPC_WEAK_FUNC(sub_8221C908);
PPC_FUNC_IMPL(__imp__sub_8221C908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21208
	ctx.r3.s64 = ctx.r11.s64 + -21208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C914"))) PPC_WEAK_FUNC(sub_8221C914);
PPC_FUNC_IMPL(__imp__sub_8221C914) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21232
	ctx.r3.s64 = ctx.r11.s64 + -21232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C920"))) PPC_WEAK_FUNC(sub_8221C920);
PPC_FUNC_IMPL(__imp__sub_8221C920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21260
	ctx.r3.s64 = ctx.r11.s64 + -21260;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C92C"))) PPC_WEAK_FUNC(sub_8221C92C);
PPC_FUNC_IMPL(__imp__sub_8221C92C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21292
	ctx.r3.s64 = ctx.r11.s64 + -21292;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C938"))) PPC_WEAK_FUNC(sub_8221C938);
PPC_FUNC_IMPL(__imp__sub_8221C938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21320
	ctx.r3.s64 = ctx.r11.s64 + -21320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C944"))) PPC_WEAK_FUNC(sub_8221C944);
PPC_FUNC_IMPL(__imp__sub_8221C944) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21360
	ctx.r3.s64 = ctx.r11.s64 + -21360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C950"))) PPC_WEAK_FUNC(sub_8221C950);
PPC_FUNC_IMPL(__imp__sub_8221C950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21392
	ctx.r3.s64 = ctx.r11.s64 + -21392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C95C"))) PPC_WEAK_FUNC(sub_8221C95C);
PPC_FUNC_IMPL(__imp__sub_8221C95C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21424
	ctx.r3.s64 = ctx.r11.s64 + -21424;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C968"))) PPC_WEAK_FUNC(sub_8221C968);
PPC_FUNC_IMPL(__imp__sub_8221C968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21460
	ctx.r3.s64 = ctx.r11.s64 + -21460;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C974"))) PPC_WEAK_FUNC(sub_8221C974);
PPC_FUNC_IMPL(__imp__sub_8221C974) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21484
	ctx.r3.s64 = ctx.r11.s64 + -21484;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C980"))) PPC_WEAK_FUNC(sub_8221C980);
PPC_FUNC_IMPL(__imp__sub_8221C980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21512
	ctx.r3.s64 = ctx.r11.s64 + -21512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C98C"))) PPC_WEAK_FUNC(sub_8221C98C);
PPC_FUNC_IMPL(__imp__sub_8221C98C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21536
	ctx.r3.s64 = ctx.r11.s64 + -21536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C998"))) PPC_WEAK_FUNC(sub_8221C998);
PPC_FUNC_IMPL(__imp__sub_8221C998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21564
	ctx.r3.s64 = ctx.r11.s64 + -21564;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C9A4"))) PPC_WEAK_FUNC(sub_8221C9A4);
PPC_FUNC_IMPL(__imp__sub_8221C9A4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21584
	ctx.r3.s64 = ctx.r11.s64 + -21584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C9B0"))) PPC_WEAK_FUNC(sub_8221C9B0);
PPC_FUNC_IMPL(__imp__sub_8221C9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21616
	ctx.r3.s64 = ctx.r11.s64 + -21616;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C9BC"))) PPC_WEAK_FUNC(sub_8221C9BC);
PPC_FUNC_IMPL(__imp__sub_8221C9BC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21640
	ctx.r3.s64 = ctx.r11.s64 + -21640;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C9C8"))) PPC_WEAK_FUNC(sub_8221C9C8);
PPC_FUNC_IMPL(__imp__sub_8221C9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21668
	ctx.r3.s64 = ctx.r11.s64 + -21668;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C9D4"))) PPC_WEAK_FUNC(sub_8221C9D4);
PPC_FUNC_IMPL(__imp__sub_8221C9D4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21692
	ctx.r3.s64 = ctx.r11.s64 + -21692;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C9E0"))) PPC_WEAK_FUNC(sub_8221C9E0);
PPC_FUNC_IMPL(__imp__sub_8221C9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21724
	ctx.r3.s64 = ctx.r11.s64 + -21724;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C9EC"))) PPC_WEAK_FUNC(sub_8221C9EC);
PPC_FUNC_IMPL(__imp__sub_8221C9EC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21752
	ctx.r3.s64 = ctx.r11.s64 + -21752;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221C9F8"))) PPC_WEAK_FUNC(sub_8221C9F8);
PPC_FUNC_IMPL(__imp__sub_8221C9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21780
	ctx.r3.s64 = ctx.r11.s64 + -21780;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CA04"))) PPC_WEAK_FUNC(sub_8221CA04);
PPC_FUNC_IMPL(__imp__sub_8221CA04) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21808
	ctx.r3.s64 = ctx.r11.s64 + -21808;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CA10"))) PPC_WEAK_FUNC(sub_8221CA10);
PPC_FUNC_IMPL(__imp__sub_8221CA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21844
	ctx.r3.s64 = ctx.r11.s64 + -21844;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CA1C"))) PPC_WEAK_FUNC(sub_8221CA1C);
PPC_FUNC_IMPL(__imp__sub_8221CA1C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21876
	ctx.r3.s64 = ctx.r11.s64 + -21876;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CA28"))) PPC_WEAK_FUNC(sub_8221CA28);
PPC_FUNC_IMPL(__imp__sub_8221CA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21908
	ctx.r3.s64 = ctx.r11.s64 + -21908;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CA34"))) PPC_WEAK_FUNC(sub_8221CA34);
PPC_FUNC_IMPL(__imp__sub_8221CA34) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21944
	ctx.r3.s64 = ctx.r11.s64 + -21944;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CA40"))) PPC_WEAK_FUNC(sub_8221CA40);
PPC_FUNC_IMPL(__imp__sub_8221CA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-21976
	ctx.r3.s64 = ctx.r11.s64 + -21976;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CA4C"))) PPC_WEAK_FUNC(sub_8221CA4C);
PPC_FUNC_IMPL(__imp__sub_8221CA4C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22000
	ctx.r3.s64 = ctx.r11.s64 + -22000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CA58"))) PPC_WEAK_FUNC(sub_8221CA58);
PPC_FUNC_IMPL(__imp__sub_8221CA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22024
	ctx.r3.s64 = ctx.r11.s64 + -22024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CA64"))) PPC_WEAK_FUNC(sub_8221CA64);
PPC_FUNC_IMPL(__imp__sub_8221CA64) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22048
	ctx.r3.s64 = ctx.r11.s64 + -22048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CA70"))) PPC_WEAK_FUNC(sub_8221CA70);
PPC_FUNC_IMPL(__imp__sub_8221CA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22088
	ctx.r3.s64 = ctx.r11.s64 + -22088;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CA7C"))) PPC_WEAK_FUNC(sub_8221CA7C);
PPC_FUNC_IMPL(__imp__sub_8221CA7C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22120
	ctx.r3.s64 = ctx.r11.s64 + -22120;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CA88"))) PPC_WEAK_FUNC(sub_8221CA88);
PPC_FUNC_IMPL(__imp__sub_8221CA88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22148
	ctx.r3.s64 = ctx.r11.s64 + -22148;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CA94"))) PPC_WEAK_FUNC(sub_8221CA94);
PPC_FUNC_IMPL(__imp__sub_8221CA94) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22176
	ctx.r3.s64 = ctx.r11.s64 + -22176;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CAA0"))) PPC_WEAK_FUNC(sub_8221CAA0);
PPC_FUNC_IMPL(__imp__sub_8221CAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22212
	ctx.r3.s64 = ctx.r11.s64 + -22212;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CAAC"))) PPC_WEAK_FUNC(sub_8221CAAC);
PPC_FUNC_IMPL(__imp__sub_8221CAAC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22248
	ctx.r3.s64 = ctx.r11.s64 + -22248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CAB8"))) PPC_WEAK_FUNC(sub_8221CAB8);
PPC_FUNC_IMPL(__imp__sub_8221CAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22276
	ctx.r3.s64 = ctx.r11.s64 + -22276;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CAC4"))) PPC_WEAK_FUNC(sub_8221CAC4);
PPC_FUNC_IMPL(__imp__sub_8221CAC4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22300
	ctx.r3.s64 = ctx.r11.s64 + -22300;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CAD0"))) PPC_WEAK_FUNC(sub_8221CAD0);
PPC_FUNC_IMPL(__imp__sub_8221CAD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22332
	ctx.r3.s64 = ctx.r11.s64 + -22332;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CADC"))) PPC_WEAK_FUNC(sub_8221CADC);
PPC_FUNC_IMPL(__imp__sub_8221CADC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22364
	ctx.r3.s64 = ctx.r11.s64 + -22364;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CAE8"))) PPC_WEAK_FUNC(sub_8221CAE8);
PPC_FUNC_IMPL(__imp__sub_8221CAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22396
	ctx.r3.s64 = ctx.r11.s64 + -22396;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CAF4"))) PPC_WEAK_FUNC(sub_8221CAF4);
PPC_FUNC_IMPL(__imp__sub_8221CAF4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22428
	ctx.r3.s64 = ctx.r11.s64 + -22428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CB00"))) PPC_WEAK_FUNC(sub_8221CB00);
PPC_FUNC_IMPL(__imp__sub_8221CB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22460
	ctx.r3.s64 = ctx.r11.s64 + -22460;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CB0C"))) PPC_WEAK_FUNC(sub_8221CB0C);
PPC_FUNC_IMPL(__imp__sub_8221CB0C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22488
	ctx.r3.s64 = ctx.r11.s64 + -22488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CB18"))) PPC_WEAK_FUNC(sub_8221CB18);
PPC_FUNC_IMPL(__imp__sub_8221CB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22520
	ctx.r3.s64 = ctx.r11.s64 + -22520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CB24"))) PPC_WEAK_FUNC(sub_8221CB24);
PPC_FUNC_IMPL(__imp__sub_8221CB24) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22548
	ctx.r3.s64 = ctx.r11.s64 + -22548;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CB30"))) PPC_WEAK_FUNC(sub_8221CB30);
PPC_FUNC_IMPL(__imp__sub_8221CB30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22580
	ctx.r3.s64 = ctx.r11.s64 + -22580;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CB3C"))) PPC_WEAK_FUNC(sub_8221CB3C);
PPC_FUNC_IMPL(__imp__sub_8221CB3C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22612
	ctx.r3.s64 = ctx.r11.s64 + -22612;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CB48"))) PPC_WEAK_FUNC(sub_8221CB48);
PPC_FUNC_IMPL(__imp__sub_8221CB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22636
	ctx.r3.s64 = ctx.r11.s64 + -22636;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CB54"))) PPC_WEAK_FUNC(sub_8221CB54);
PPC_FUNC_IMPL(__imp__sub_8221CB54) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22664
	ctx.r3.s64 = ctx.r11.s64 + -22664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CB60"))) PPC_WEAK_FUNC(sub_8221CB60);
PPC_FUNC_IMPL(__imp__sub_8221CB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22704
	ctx.r3.s64 = ctx.r11.s64 + -22704;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CB6C"))) PPC_WEAK_FUNC(sub_8221CB6C);
PPC_FUNC_IMPL(__imp__sub_8221CB6C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22728
	ctx.r3.s64 = ctx.r11.s64 + -22728;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CB78"))) PPC_WEAK_FUNC(sub_8221CB78);
PPC_FUNC_IMPL(__imp__sub_8221CB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-22752
	ctx.r3.s64 = ctx.r11.s64 + -22752;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CB84"))) PPC_WEAK_FUNC(sub_8221CB84);
PPC_FUNC_IMPL(__imp__sub_8221CB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221CB88"))) PPC_WEAK_FUNC(sub_8221CB88);
PPC_FUNC_IMPL(__imp__sub_8221CB88) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x8221cc08
	if (ctx.cr6.gt) {
		sub_8221CC08(ctx, base);
		return;
	}
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-13396
	ctx.r12.s64 = ctx.r12.s64 + -13396;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		sub_8221CC08(ctx, base);
		return;
	case 1:
		sub_8221CC08(ctx, base);
		return;
	case 2:
		sub_8221CC08(ctx, base);
		return;
	case 3:
		sub_8221CC08(ctx, base);
		return;
	case 4:
		sub_8221CC08(ctx, base);
		return;
	case 5:
		sub_8221CC08(ctx, base);
		return;
	case 6:
		// ERROR: 0x8221CC00
		return;
	case 7:
		sub_8221CC08(ctx, base);
		return;
	case 8:
		sub_8221CC08(ctx, base);
		return;
	case 9:
		sub_8221CC08(ctx, base);
		return;
	case 10:
		// ERROR: 0x8221CC00
		return;
	case 11:
		// ERROR: 0x8221CC00
		return;
	case 12:
		sub_8221CC08(ctx, base);
		return;
	case 13:
		sub_8221CC08(ctx, base);
		return;
	case 14:
		sub_8221CC08(ctx, base);
		return;
	case 15:
		sub_8221CC08(ctx, base);
		return;
	case 16:
		sub_8221CC08(ctx, base);
		return;
	case 17:
		sub_8221CC08(ctx, base);
		return;
	case 18:
		sub_8221CC08(ctx, base);
		return;
	case 19:
		// ERROR: 0x8221CC00
		return;
	case 20:
		// ERROR: 0x8221CC00
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8221CBAC"))) PPC_WEAK_FUNC(sub_8221CBAC);
PPC_FUNC_IMPL(__imp__sub_8221CBAC) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-13304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13304);
	// lwz r17,-13304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13304);
	// lwz r17,-13304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13304);
	// lwz r17,-13304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13304);
	// lwz r17,-13304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13304);
	// lwz r17,-13304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13304);
	// lwz r17,-13312(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13312);
	// lwz r17,-13304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13304);
	// lwz r17,-13304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13304);
	// lwz r17,-13304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13304);
	// lwz r17,-13312(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13312);
	// lwz r17,-13312(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13312);
	// lwz r17,-13304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13304);
	// lwz r17,-13304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13304);
	// lwz r17,-13304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13304);
	// lwz r17,-13304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13304);
	// lwz r17,-13304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13304);
	// lwz r17,-13304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13304);
	// lwz r17,-13304(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13304);
	// lwz r17,-13312(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13312);
	// lwz r17,-13312(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -13312);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CC08"))) PPC_WEAK_FUNC(sub_8221CC08);
PPC_FUNC_IMPL(__imp__sub_8221CC08) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CC10"))) PPC_WEAK_FUNC(sub_8221CC10);
PPC_FUNC_IMPL(__imp__sub_8221CC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-31540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31540);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8221cc2c
	if (!ctx.cr6.eq) goto loc_8221CC2C;
loc_8221CC24:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8221CC2C:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8221cc40
	if (!ctx.cr6.eq) goto loc_8221CC40;
loc_8221CC38:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8221CC40:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8221cc54
	if (!ctx.cr6.gt) goto loc_8221CC54;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8221cc24
	if (ctx.cr6.lt) goto loc_8221CC24;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
loc_8221CC54:
	// bge cr6,0x8221cc60
	if (!ctx.cr6.lt) goto loc_8221CC60;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8221cc38
	if (ctx.cr6.gt) goto loc_8221CC38;
loc_8221CC60:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8221cc24
	if (ctx.cr6.lt) goto loc_8221CC24;
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CC78"))) PPC_WEAK_FUNC(sub_8221CC78);
PPC_FUNC_IMPL(__imp__sub_8221CC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8221CC80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r30,56(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8221cd7c
	if (ctx.cr6.eq) goto loc_8221CD7C;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r26,r11,51920
	ctx.r26.u64 = ctx.r11.u64 | 51920;
	// ble cr6,0x8221cce4
	if (!ctx.cr6.gt) goto loc_8221CCE4;
	// addi r27,r28,24
	ctx.r27.s64 = ctx.r28.s64 + 24;
	// add r31,r28,r26
	ctx.r31.u64 = ctx.r28.u64 + ctx.r26.u64;
loc_8221CCAC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82365758
	ctx.lr = 0x8221CCB8;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221ccc8
	if (ctx.cr6.eq) goto loc_8221CCC8;
	// bl 0x823475c0
	ctx.lr = 0x8221CCC4;
	sub_823475C0(ctx, base);
	// b 0x8221ccd0
	goto loc_8221CCD0;
loc_8221CCC8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823656e8
	ctx.lr = 0x8221CCD0;
	sub_823656E8(ctx, base);
loc_8221CCD0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8221ccac
	if (ctx.cr6.lt) goto loc_8221CCAC;
loc_8221CCE4:
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r9,r10,51969
	ctx.r9.u64 = ctx.r10.u64 | 51969;
	// lbzx r8,r28,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221cd04
	if (ctx.cr6.eq) goto loc_8221CD04;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x82365d58
	ctx.lr = 0x8221CD00;
	sub_82365D58(ctx, base);
	// b 0x8221cd18
	goto loc_8221CD18;
loc_8221CD04:
	// addi r3,r28,2896
	ctx.r3.s64 = ctx.r28.s64 + 2896;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,156(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 156);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8221CD18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221CD18:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r31,-32160
	ctx.r31.s64 = -2107637760;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-13296
	ctx.r6.s64 = ctx.r11.s64 + -13296;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r28,r26
	ctx.r3.u64 = ctx.r28.u64 + ctx.r26.u64;
	// stw r10,-31540(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31540, ctx.r10.u32);
	// bl 0x8259cd88
	ctx.lr = 0x8221CD3C;
	sub_8259CD88(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r11,-31540(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31540, ctx.r11.u32);
	// bge cr6,0x8221cd7c
	if (!ctx.cr6.lt) goto loc_8221CD7C;
	// addis r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 65536;
	// subfic r10,r30,6
	ctx.xer.ca = ctx.r30.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r30.s64;
	// addi r5,r5,-3404
	ctx.r5.s64 = ctx.r5.s64 + -3404;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x8221cd7c
	if (ctx.cr6.eq) goto loc_8221CD7C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8221CD70:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8221cd70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221CD70;
loc_8221CD7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221CD84"))) PPC_WEAK_FUNC(sub_8221CD84);
PPC_FUNC_IMPL(__imp__sub_8221CD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221CD88"))) PPC_WEAK_FUNC(sub_8221CD88);
PPC_FUNC_IMPL(__imp__sub_8221CD88) {
	PPC_FUNC_PROLOGUE();
	// addis r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 262144;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-13616
	ctx.r10.s64 = ctx.r10.s64 + -13616;
loc_8221CD94:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8221cdc0
	if (ctx.cr6.eq) goto loc_8221CDC0;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8221cdb8
	if (ctx.cr6.eq) goto loc_8221CDB8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x8221cd94
	if (ctx.cr6.lt) goto loc_8221CD94;
loc_8221CDB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8221CDC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221CDC8"))) PPC_WEAK_FUNC(sub_8221CDC8);
PPC_FUNC_IMPL(__imp__sub_8221CDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8221CDD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ce34
	if (ctx.cr6.eq) goto loc_8221CE34;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8221CDF4:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8259cce0
	ctx.lr = 0x8221CE04;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221ce10
	if (!ctx.cr6.eq) goto loc_8221CE10;
	// stb r27,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r27.u8);
loc_8221CE10:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lbz r9,160(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 160);
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8221cdf4
	if (ctx.cr6.lt) goto loc_8221CDF4;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r8.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8221CE34:
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r7.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221CE44"))) PPC_WEAK_FUNC(sub_8221CE44);
PPC_FUNC_IMPL(__imp__sub_8221CE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221CE48"))) PPC_WEAK_FUNC(sub_8221CE48);
PPC_FUNC_IMPL(__imp__sub_8221CE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8221CE50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ce98
	if (ctx.cr6.eq) goto loc_8221CE98;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221CE6C:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8259cce0
	ctx.lr = 0x8221CE7C;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221cf0c
	if (ctx.cr6.eq) goto loc_8221CF0C;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// lbz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8221ce6c
	if (ctx.cr6.lt) goto loc_8221CE6C;
loc_8221CE98:
	// lbz r8,160(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// cmplwi cr6,r8,10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 10, ctx.xer);
	// bne cr6,0x8221cee0
	if (!ctx.cr6.eq) goto loc_8221CEE0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221CEA8:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// bl 0x8259d2a0
	ctx.lr = 0x8221CEBC;
	sub_8259D2A0(ctx, base);
	// lbz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// clrlwi r30,r7,24
	ctx.r30.u64 = ctx.r7.u32 & 0xFF;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8221cea8
	if (ctx.cr6.lt) goto loc_8221CEA8;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r5,r11,255
	ctx.r5.s64 = ctx.r11.s64 + 255;
	// stb r5,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r5.u8);
loc_8221CEE0:
	// lbz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rotlwi r11,r3,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x8221CEF8;
	sub_8259D2A0(ctx, base);
	// lbz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bge cr6,0x8221cf0c
	if (!ctx.cr6.lt) goto loc_8221CF0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r11.u8);
loc_8221CF0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221CF14"))) PPC_WEAK_FUNC(sub_8221CF14);
PPC_FUNC_IMPL(__imp__sub_8221CF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221CF18"))) PPC_WEAK_FUNC(sub_8221CF18);
PPC_FUNC_IMPL(__imp__sub_8221CF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8221CF20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r10,r11,51969
	ctx.r10.u64 = ctx.r11.u64 | 51969;
	// lbzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221cf50
	if (ctx.cr6.eq) goto loc_8221CF50;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// ori r7,r8,51970
	ctx.r7.u64 = ctx.r8.u64 | 51970;
	// lbzx r6,r28,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221cf90
	if (ctx.cr6.eq) goto loc_8221CF90;
loc_8221CF50:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221cf84
	if (ctx.cr6.eq) goto loc_8221CF84;
	// lis r5,-8415
	ctx.r5.s64 = -551485440;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r3,-27114
	ctx.r3.s64 = -1776943104;
	// ori r4,r5,27832
	ctx.r4.u64 = ctx.r5.u64 | 27832;
	// ori r10,r3,2197
	ctx.r10.u64 = ctx.r3.u64 | 2197;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x8221cf90
	if (ctx.cr6.eq) goto loc_8221CF90;
loc_8221CF84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8221CF90:
	// lwz r29,56(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8221cfd8
	if (!ctx.cr6.gt) goto loc_8221CFD8;
	// addi r30,r28,24
	ctx.r30.s64 = ctx.r28.s64 + 24;
loc_8221CFA4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82365758
	ctx.lr = 0x8221CFB0;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221cfcc
	if (ctx.cr6.eq) goto loc_8221CFCC;
	// lbz r9,1354(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1354);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8221cf84
	if (!ctx.cr6.eq) goto loc_8221CF84;
loc_8221CFCC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8221cfa4
	if (ctx.cr6.lt) goto loc_8221CFA4;
loc_8221CFD8:
	// addi r3,r28,2896
	ctx.r3.s64 = ctx.r28.s64 + 2896;
	// bl 0x8236d108
	ctx.lr = 0x8221CFE0;
	sub_8236D108(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221CFE8"))) PPC_WEAK_FUNC(sub_8221CFE8);
PPC_FUNC_IMPL(__imp__sub_8221CFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8221CFF0;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r29,1
	ctx.r29.s64 = 1;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fcmpu cr6,f31,f3
	ctx.cr6.compare(ctx.f31.f64, ctx.f3.f64);
	// blt cr6,0x8221d028
	if (ctx.cr6.lt) goto loc_8221D028;
	// bso cr6,0x8221d028
	if (ctx.cr6.so) goto loc_8221D028;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8221D028:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221d09c
	if (!ctx.cr6.gt) goto loc_8221D09C;
loc_8221D040:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x8221D04C;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221d08c
	if (ctx.cr6.eq) goto loc_8221D08C;
	// lbz r11,1201(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1201);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221d08c
	if (!ctx.cr6.eq) goto loc_8221D08C;
	// lbz r10,1648(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1648);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221d08c
	if (!ctx.cr6.eq) goto loc_8221D08C;
	// lbz r9,1354(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1354);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8221d0b0
	if (!ctx.cr6.eq) goto loc_8221D0B0;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x8221d0b0
	if (!ctx.cr6.gt) goto loc_8221D0B0;
	// li r29,2
	ctx.r29.s64 = 2;
loc_8221D08C:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8221d040
	if (ctx.cr6.lt) goto loc_8221D040;
loc_8221D09C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8221D0B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221D0C4"))) PPC_WEAK_FUNC(sub_8221D0C4);
PPC_FUNC_IMPL(__imp__sub_8221D0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221D0C8"))) PPC_WEAK_FUNC(sub_8221D0C8);
PPC_FUNC_IMPL(__imp__sub_8221D0C8) {
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
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,20464
	ctx.r3.s64 = ctx.r30.s64 + 20464;
	// bl 0x8232afd8
	ctx.lr = 0x8221D0F4;
	sub_8232AFD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d164
	if (ctx.cr6.eq) goto loc_8221D164;
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// rlwinm r11,r31,9,15,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0x1FE00;
	// addi r10,r10,-32320
	ctx.r10.s64 = ctx.r10.s64 + -32320;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r10,488(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 488);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221d128
	if (!ctx.cr6.eq) goto loc_8221D128;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221D128:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221d15c
	if (ctx.cr6.eq) goto loc_8221D15C;
	// lwz r7,496(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8221d148
	if (!ctx.cr6.eq) goto loc_8221D148;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221D148:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8221d164
	if (ctx.cr6.eq) goto loc_8221D164;
	// bl 0x8232cc00
	ctx.lr = 0x8221D158;
	sub_8232CC00(ctx, base);
	// b 0x8221d168
	goto loc_8221D168;
loc_8221D15C:
	// bl 0x8232cc00
	ctx.lr = 0x8221D160;
	sub_8232CC00(ctx, base);
	// b 0x8221d168
	goto loc_8221D168;
loc_8221D164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221D168:
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

__attribute__((alias("__imp__sub_8221D180"))) PPC_WEAK_FUNC(sub_8221D180);
PPC_FUNC_IMPL(__imp__sub_8221D180) {
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
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,20464
	ctx.r3.s64 = ctx.r30.s64 + 20464;
	// bl 0x8232afd8
	ctx.lr = 0x8221D1AC;
	sub_8232AFD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d200
	if (ctx.cr6.eq) goto loc_8221D200;
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// rlwinm r11,r31,9,15,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0x1FE00;
	// addi r10,r10,-32320
	ctx.r10.s64 = ctx.r10.s64 + -32320;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,496(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221d1dc
	if (!ctx.cr6.eq) goto loc_8221D1DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221D1DC:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221d200
	if (ctx.cr6.eq) goto loc_8221D200;
	// bl 0x8232cc00
	ctx.lr = 0x8221D1EC;
	sub_8232CC00(ctx, base);
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bne cr6,0x8221d200
	if (!ctx.cr6.eq) goto loc_8221D200;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8221d204
	goto loc_8221D204;
loc_8221D200:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221D204:
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

__attribute__((alias("__imp__sub_8221D21C"))) PPC_WEAK_FUNC(sub_8221D21C);
PPC_FUNC_IMPL(__imp__sub_8221D21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221D220"))) PPC_WEAK_FUNC(sub_8221D220);
PPC_FUNC_IMPL(__imp__sub_8221D220) {
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
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,20464
	ctx.r3.s64 = ctx.r30.s64 + 20464;
	// bl 0x8232afd8
	ctx.lr = 0x8221D24C;
	sub_8232AFD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221d2ac
	if (ctx.cr6.eq) goto loc_8221D2AC;
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// rlwinm r11,r31,9,15,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0x1FE00;
	// addi r10,r10,-32320
	ctx.r10.s64 = ctx.r10.s64 + -32320;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,496(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221d27c
	if (!ctx.cr6.eq) goto loc_8221D27C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221D27C:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221d2ac
	if (ctx.cr6.eq) goto loc_8221D2AC;
	// bl 0x8232cc00
	ctx.lr = 0x8221D28C;
	sub_8232CC00(ctx, base);
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8221d2ac
	if (ctx.cr6.eq) goto loc_8221D2AC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8221d2ac
	if (!ctx.cr6.eq) goto loc_8221D2AC;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8221d2b0
	goto loc_8221D2B0;
loc_8221D2AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221D2B0:
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

__attribute__((alias("__imp__sub_8221D2C8"))) PPC_WEAK_FUNC(sub_8221D2C8);
PPC_FUNC_IMPL(__imp__sub_8221D2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8221D2D0;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8259bb70
	ctx.lr = 0x8221D2D8;
	__savefpr_14(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8221D2F0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8221d2f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221D2F0;
	// lfs f4,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lfs f6,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lfs f8,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfs f11,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f31,f6,f8
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// lfs f7,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f11,f4
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// lfs f10,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f6,f7
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// lfs f9,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f1,f6,f9
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// lfs f2,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// lfs f6,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// ld r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmuls f29,f6,f2
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ld r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r29,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r29.u64);
	// fmuls f28,f12,f9
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fadds f31,f31,f5
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f5.f64));
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// lfs f25,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f25.f64 = double(temp.f32);
	// fadds f5,f30,f3
	ctx.f5.f64 = double(float(ctx.f30.f64 + ctx.f3.f64));
	// std r28,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r28.u64);
	// fmuls f30,f0,f9
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// std r10,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f24,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f24.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f23,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f23.f64 = double(temp.f32);
	// addi r30,r1,288
	ctx.r30.s64 = ctx.r1.s64 + 288;
	// fadds f5,f5,f29
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f29.f64));
	// fmuls f29,f13,f9
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f27,f4,f9
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// lfs f4,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f26,f2,f4
	ctx.f26.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fmuls f2,f2,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fneg f5,f5
	ctx.f5.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fadds f1,f1,f27
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f27.f64));
	// lfs f27,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f27,f27,f8
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f8.f64));
	// fadds f31,f31,f2
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f2.f64));
	// fadds f1,f1,f26
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f26.f64));
	// lfs f26,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f26.f64 = double(temp.f32);
	// fneg f2,f1
	ctx.f2.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fneg f1,f31
	ctx.f1.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lfs f31,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f31,f31,f8
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f8.f64));
	// fmuls f8,f26,f8
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f8.f64));
	// fmuls f26,f25,f7
	ctx.f26.f64 = double(float(ctx.f25.f64 * ctx.f7.f64));
	// fmuls f25,f24,f7
	ctx.f25.f64 = double(float(ctx.f24.f64 * ctx.f7.f64));
	// lfs f24,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f7,f23,f7
	ctx.f7.f64 = double(float(ctx.f23.f64 * ctx.f7.f64));
	// lfs f23,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f23.f64 = double(temp.f32);
	// fadds f31,f30,f31
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fadds f30,f29,f27
	ctx.f30.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// lfs f29,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f29.f64 = double(temp.f32);
	// fadds f8,f28,f8
	ctx.f8.f64 = double(float(ctx.f28.f64 + ctx.f8.f64));
	// lfs f27,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f28.f64 = double(temp.f32);
	// fadds f31,f31,f26
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f26.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f31,f30,f25
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f25.f64));
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fmuls f8,f10,f24
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f24.f64));
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// fmuls f7,f23,f10
	ctx.f7.f64 = double(float(ctx.f23.f64 * ctx.f10.f64));
	// std r8,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r8.u64);
	// fmuls f10,f29,f10
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f10.f64));
	// lfs f29,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f31,f11,f28
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// std r6,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r6.u64);
	// fmuls f30,f27,f11
	ctx.f30.f64 = double(float(ctx.f27.f64 * ctx.f11.f64));
	// fmuls f11,f29,f11
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f29,f0,f9
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// fmuls f28,f13,f9
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmuls f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// addi r8,r1,320
	ctx.r8.s64 = ctx.r1.s64 + 320;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// fadds f31,f29,f31
	ctx.f31.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
	// fadds f30,f28,f30
	ctx.f30.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f9,f31,f8
	ctx.f9.f64 = double(float(ctx.f31.f64 + ctx.f8.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f8,f30,f7
	ctx.f8.f64 = double(float(ctx.f30.f64 + ctx.f7.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f11,f0,f4
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f30,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f10,f13,f4
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// ld r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmuls f9,f12,f4
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lfs f4,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmuls f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// std r29,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r29.u64);
	// fmuls f8,f3,f4
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// lfs f4,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmr f31,f24
	ctx.f31.f64 = ctx.f24.f64;
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// fmuls f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f7,f2,f3
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// fadds f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// lfs f8,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// lfs f31,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// fadds f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// fmr f4,f23
	ctx.f4.f64 = ctx.f23.f64;
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fmuls f2,f2,f6
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// fmuls f6,f30,f6
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f6.f64));
	// fmr f30,f27
	ctx.f30.f64 = ctx.f27.f64;
	// fadds f3,f11,f3
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f7,f24
	ctx.f7.f64 = ctx.f24.f64;
	// lfs f3,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f11,f9,f6
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f11,f1,f31
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmuls f10,f30,f1
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f1.f64));
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f9,f8,f1
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f8,f5,f7
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmuls f7,f4,f5
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// std r9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// fmuls f6,f3,f5
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// std r11,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// lfs f10,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f7,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// fadds f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r8,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// std r30,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r30.u64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8221D5C0:
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x8221d5c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221D5C0;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// lfs f3,48(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lfs f10,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f4,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// addi r27,r10,-30832
	ctx.r27.s64 = ctx.r10.s64 + -30832;
	// lfs f1,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f12,f3,f4
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f9,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f30,2868(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2868);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f11,f2,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r26,r10,-30816
	ctx.r26.s64 = ctx.r10.s64 + -30816;
	// lfs f31,2864(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// addi r25,r9,-30800
	ctx.r25.s64 = ctx.r9.s64 + -30800;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lis r8,-32090
	ctx.r8.s64 = -2103050240;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r30,r8,26608
	ctx.r30.s64 = ctx.r8.s64 + 26608;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r29,r1,176
	ctx.r29.s64 = ctx.r1.s64 + 176;
	// addi r28,r1,192
	ctx.r28.s64 = ctx.r1.s64 + 192;
	// fres f13,f0
	ctx.f13.f64 = float(1.0 / ctx.f0.f64);
	// fdivs f29,f30,f0
	ctx.f29.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// fnmsubs f8,f13,f0,f30
	ctx.f8.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f30.f64)));
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// fadds f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fnmsubs f6,f13,f0,f30
	ctx.f6.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f30.f64)));
	// fadds f5,f6,f30
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f30.f64));
	// fmuls f0,f5,f13
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// std r4,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r4.u64);
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// ld r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r5,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r5.u64);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r4,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r4.u64);
	// std r11,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r11.u64);
	// std r10,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r10.u64);
	// std r9,8(r28)
	PPC_STORE_U64(ctx.r28.u32 + 8, ctx.r9.u64);
	// bgt cr6,0x8221d720
	if (ctx.cr6.gt) goto loc_8221D720;
	// bso cr6,0x8221d720
	if (ctx.cr6.so) goto loc_8221D720;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8221D708:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8221d708
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221D708;
	// b 0x8221e124
	goto loc_8221E124;
loc_8221D720:
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// blt cr6,0x8221d754
	if (ctx.cr6.lt) goto loc_8221D754;
	// bso cr6,0x8221d754
	if (ctx.cr6.so) goto loc_8221D754;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8221D73C:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8221d73c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221D73C;
	// b 0x8221e124
	goto loc_8221E124;
loc_8221D754:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f25,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f5,f0,f10
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f0,f25
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fmuls f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f1,f0
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f9,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f24,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f24.f64 = double(temp.f32);
	// lfs f28,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// lfs f8,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f1,f1,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// lfs f27,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmr f21,f27
	ctx.f21.f64 = ctx.f27.f64;
	// lfs f23,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fadds f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// lfs f26,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f4,f28,f24
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f24.f64));
	// lfs f28,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f28.f64 = double(temp.f32);
	// fmr f22,f28
	ctx.f22.f64 = ctx.f28.f64;
	// lfs f16,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f16.f64 = double(temp.f32);
	// fadds f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// lfs f15,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f15.f64 = double(temp.f32);
	// lfs f19,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f19.f64 = double(temp.f32);
	// fmr f18,f19
	ctx.f18.f64 = ctx.f19.f64;
	// fadds f14,f7,f1
	ctx.f14.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// lfs f7,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f26,f7
	ctx.f2.f64 = double(float(ctx.f26.f64 * ctx.f7.f64));
	// lfs f1,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmr f26,f1
	ctx.f26.f64 = ctx.f1.f64;
	// fadds f17,f3,f4
	ctx.f17.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fmuls f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f4,f27,f23
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f23.f64));
	// fmuls f11,f11,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// fadds f20,f14,f17
	ctx.f20.f64 = double(float(ctx.f14.f64 + ctx.f17.f64));
	// fadds f4,f3,f4
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fmr f3,f16
	ctx.f3.f64 = ctx.f16.f64;
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f3,f12,f25
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fadds f4,f4,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// stfs f4,132(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f22,f23
	ctx.f2.f64 = double(float(ctx.f22.f64 * ctx.f23.f64));
	// fmr f4,f15
	ctx.f4.f64 = ctx.f15.f64;
	// stfs f4,208(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fadds f22,f20,f10
	ctx.f22.f64 = double(float(ctx.f20.f64 + ctx.f10.f64));
	// fmuls f4,f28,f0
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f10,f9,f1
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f9,f21,f9
	ctx.f9.f64 = double(float(ctx.f21.f64 * ctx.f9.f64));
	// fmuls f28,f23,f26
	ctx.f28.f64 = double(float(ctx.f23.f64 * ctx.f26.f64));
	// fmr f26,f15
	ctx.f26.f64 = ctx.f15.f64;
	// fmuls f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fmuls f1,f19,f8
	ctx.f1.f64 = double(float(ctx.f19.f64 * ctx.f8.f64));
	// fadds f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// fmuls f2,f24,f16
	ctx.f2.f64 = double(float(ctx.f24.f64 * ctx.f16.f64));
	// fmuls f27,f15,f24
	ctx.f27.f64 = double(float(ctx.f15.f64 * ctx.f24.f64));
	// fadds f4,f3,f4
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fmuls f3,f18,f7
	ctx.f3.f64 = double(float(ctx.f18.f64 * ctx.f7.f64));
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fadds f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// fmuls f9,f26,f8
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f8.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmr f26,f16
	ctx.f26.f64 = ctx.f16.f64;
	// fadds f8,f5,f28
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f28.f64));
	// fadds f21,f4,f1
	ctx.f21.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// fadds f20,f12,f3
	ctx.f20.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// fadds f18,f13,f27
	ctx.f18.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// fadds f19,f10,f2
	ctx.f19.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fadds f16,f0,f9
	ctx.f16.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// fmuls f11,f26,f7
	ctx.f11.f64 = double(float(ctx.f26.f64 * ctx.f7.f64));
	// fadds f15,f8,f11
	ctx.f15.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fsubs f13,f19,f21
	ctx.f13.f64 = double(float(ctx.f19.f64 - ctx.f21.f64));
	// fsubs f0,f20,f18
	ctx.f0.f64 = double(float(ctx.f20.f64 - ctx.f18.f64));
	// fsubs f2,f22,f30
	ctx.f2.f64 = double(float(ctx.f22.f64 - ctx.f30.f64));
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f12,f16,f15
	ctx.f12.f64 = double(float(ctx.f16.f64 - ctx.f15.f64));
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fsqrts f22,f7
	ctx.f22.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f22,f31
	ctx.cr6.compare(ctx.f22.f64, ctx.f31.f64);
	// ble cr6,0x8221d90c
	if (!ctx.cr6.gt) goto loc_8221D90C;
	// fdivs f11,f30,f22
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f22.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f6,f0,f11
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// lfs f26,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
	// b 0x8221d924
	goto loc_8221D924;
loc_8221D90C:
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f31.f64;
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// stfs f27,84(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f26,f31
	ctx.f26.f64 = ctx.f31.f64;
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8221D924:
	// fmr f1,f22
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f22.f64;
	// bl 0x8259c1f8
	ctx.lr = 0x8221D92C;
	sub_8259C1F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// addi r7,r11,-24992
	ctx.r7.s64 = ctx.r11.s64 + -24992;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,40(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f22,f0
	ctx.cr6.compare(ctx.f22.f64, ctx.f0.f64);
	// lfs f0,-22816(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22816);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f10,-27244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f10.f64 = double(temp.f32);
	// bgt cr6,0x8221da18
	if (ctx.cr6.gt) goto loc_8221DA18;
	// bso cr6,0x8221da18
	if (ctx.cr6.so) goto loc_8221DA18;
	// lfs f2,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// bgt cr6,0x8221da18
	if (ctx.cr6.gt) goto loc_8221DA18;
	// bso cr6,0x8221da18
	if (ctx.cr6.so) goto loc_8221DA18;
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f14,f0
	ctx.cr6.compare(ctx.f14.f64, ctx.f0.f64);
	// ble cr6,0x8221d994
	if (!ctx.cr6.gt) goto loc_8221D994;
	// fcmpu cr6,f14,f17
	ctx.cr6.compare(ctx.f14.f64, ctx.f17.f64);
	// ble cr6,0x8221d9b0
	if (!ctx.cr6.gt) goto loc_8221D9B0;
	// fadds f0,f14,f30
	ctx.f0.f64 = double(float(ctx.f14.f64 + ctx.f30.f64));
	// fadds f12,f15,f16
	ctx.f12.f64 = double(float(ctx.f15.f64 + ctx.f16.f64));
	// fadds f13,f19,f21
	ctx.f13.f64 = double(float(ctx.f19.f64 + ctx.f21.f64));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// b 0x8221d9c0
	goto loc_8221D9C0;
loc_8221D994:
	// fcmpu cr6,f0,f17
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f17.f64);
	// ble cr6,0x8221d9b0
	if (!ctx.cr6.gt) goto loc_8221D9B0;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fadds f13,f18,f20
	ctx.f13.f64 = double(float(ctx.f18.f64 + ctx.f20.f64));
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fadds f0,f15,f16
	ctx.f0.f64 = double(float(ctx.f15.f64 + ctx.f16.f64));
	// b 0x8221d9c0
	goto loc_8221D9C0;
loc_8221D9B0:
	// fadds f0,f17,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f17.f64 + ctx.f30.f64));
	// fadds f12,f18,f20
	ctx.f12.f64 = double(float(ctx.f18.f64 + ctx.f20.f64));
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fadds f0,f19,f21
	ctx.f0.f64 = double(float(ctx.f19.f64 + ctx.f21.f64));
loc_8221D9C0:
	// fmuls f1,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmadds f13,f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f1.f64));
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f13,f12
	ctx.f13.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f13.f64));
	// fmuls f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f27,f13,f9
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f27,84(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f26,f13,f8
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8221DA18:
	// fcmpu cr6,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x8221dd54
	if (!ctx.cr6.lt) goto loc_8221DD54;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f0,f7,f25
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f25.f64));
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f4,f6,f13
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f5,f1,f23
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f23.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f11,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f9,f2,f11
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f4,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// std r29,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r29.u64);
	// lfs f8,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lfs f5,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f3,f10,f8
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f2,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f10,f2,f24
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f24.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f1,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lfs f2,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f6,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f7,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f1,f1,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f3,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// std r28,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r28.u64);
	// lfs f10,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// lfs f4,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f3,f3,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r29,0(r8)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// fsubs f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// addi r30,r1,224
	ctx.r30.s64 = ctx.r1.s64 + 224;
	// std r29,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r29.u64);
	// std r9,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r9.u64);
	// std r8,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r8.u64);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// lfs f10,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f31,f10,f29
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// lfs f10,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f10,f29
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fadds f10,f0,f25
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// fadds f0,f31,f13
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f13,f30,f12
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f12,f9,f29
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// lfs f9,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f31,f9,f29
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// lfs f9,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f30,f9,f29
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// lfs f9,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f28,f9,f29
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// lfs f9,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f27,f9,f29
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// lfs f9,340(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f26,f9,f29
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// lfs f9,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f6,f29
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f3,f3,f29
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f29.f64));
	// ld r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// fmuls f29,f9,f29
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// ld r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fadds f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fadds f12,f31,f23
	ctx.f12.f64 = double(float(ctx.f31.f64 + ctx.f23.f64));
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// fadds f11,f30,f8
	ctx.f11.f64 = double(float(ctx.f30.f64 + ctx.f8.f64));
	// std r6,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r6.u64);
	// std r5,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r5.u64);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f31,f13,f13
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fadds f13,f27,f24
	ctx.f13.f64 = double(float(ctx.f27.f64 + ctx.f24.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f8,f6,f7
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fadds f5,f28,f5
	ctx.f5.f64 = double(float(ctx.f28.f64 + ctx.f5.f64));
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// std r3,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r3.u64);
	// fmadds f7,f10,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f31.f64));
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// std r11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// fmadds f6,f9,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fadds f11,f4,f3
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f7,f0,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f7.f64));
	// lfd f0,-4832(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// fadds f4,f26,f2
	ctx.f4.f64 = double(float(ctx.f26.f64 + ctx.f2.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f3,f29,f1
	ctx.f3.f64 = double(float(ctx.f29.f64 + ctx.f1.f64));
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// fmadds f2,f8,f8,f13
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f13.f64));
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f6,f12,f12,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f6.f64));
	// std r5,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// std r4,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r4.u64);
	// frsqrte f12,f7
	ctx.f12.f64 = double(1.0f / sqrtf(float(ctx.f7.f64)));
	// frsqrte f11,f6
	ctx.f11.f64 = double(1.0f / sqrtf(float(ctx.f6.f64)));
	// fmul f1,f7,f12
	ctx.f1.f64 = ctx.f7.f64 * ctx.f12.f64;
	// fmul f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f3,f6,f11
	ctx.f3.f64 = ctx.f6.f64 * ctx.f11.f64;
	// fmul f31,f11,f0
	ctx.f31.f64 = ctx.f11.f64 * ctx.f0.f64;
	// lfd f13,-4840(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// fnmsub f1,f1,f12,f13
	ctx.f1.f64 = -(ctx.f1.f64 * ctx.f12.f64 - ctx.f13.f64);
	// fnmsub f3,f3,f11,f13
	ctx.f3.f64 = -(ctx.f3.f64 * ctx.f11.f64 - ctx.f13.f64);
	// fmadd f12,f1,f4,f12
	ctx.f12.f64 = ctx.f1.f64 * ctx.f4.f64 + ctx.f12.f64;
	// fmadd f11,f3,f31,f11
	ctx.f11.f64 = ctx.f3.f64 * ctx.f31.f64 + ctx.f11.f64;
	// fmul f1,f7,f12
	ctx.f1.f64 = ctx.f7.f64 * ctx.f12.f64;
	// fmul f6,f6,f11
	ctx.f6.f64 = ctx.f6.f64 * ctx.f11.f64;
	// fmul f7,f12,f0
	ctx.f7.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f4,f11,f0
	ctx.f4.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fnmsub f3,f1,f12,f13
	ctx.f3.f64 = -(ctx.f1.f64 * ctx.f12.f64 - ctx.f13.f64);
	// fnmsub f1,f6,f11,f13
	ctx.f1.f64 = -(ctx.f6.f64 * ctx.f11.f64 - ctx.f13.f64);
	// fmadd f12,f3,f7,f12
	ctx.f12.f64 = ctx.f3.f64 * ctx.f7.f64 + ctx.f12.f64;
	// lfs f7,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f7.f64 = double(temp.f32);
	// fmadd f11,f1,f4,f11
	ctx.f11.f64 = ctx.f1.f64 * ctx.f4.f64 + ctx.f11.f64;
	// lfs f4,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f4.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f10,224(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f6,228(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfs f12,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f9,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f3,232(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fmuls f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f1,240(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fmadds f11,f5,f5,f2
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// stfs f10,244(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lfs f10,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f10.f64 = double(temp.f32);
	// stfs f7,248(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// frsqrte f12,f11
	ctx.f12.f64 = double(1.0f / sqrtf(float(ctx.f11.f64)));
	// fmul f6,f11,f12
	ctx.f6.f64 = ctx.f11.f64 * ctx.f12.f64;
	// fmul f5,f12,f0
	ctx.f5.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fnmsub f4,f6,f12,f13
	ctx.f4.f64 = -(ctx.f6.f64 * ctx.f12.f64 - ctx.f13.f64);
	// fmadd f12,f4,f5,f12
	ctx.f12.f64 = ctx.f4.f64 * ctx.f5.f64 + ctx.f12.f64;
	// fmul f3,f11,f12
	ctx.f3.f64 = ctx.f11.f64 * ctx.f12.f64;
	// fmul f2,f12,f0
	ctx.f2.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fnmsub f1,f3,f12,f13
	ctx.f1.f64 = -(ctx.f3.f64 * ctx.f12.f64 - ctx.f13.f64);
	// fmadd f0,f1,f2,f12
	ctx.f0.f64 = ctx.f1.f64 * ctx.f2.f64 + ctx.f12.f64;
	// lfs f12,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f13,256(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,260(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,264(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// b 0x8221e100
	goto loc_8221E100;
loc_8221DD54:
	// fmuls f8,f27,f27
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f11,f29
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmadds f6,f26,f26,f8
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f8.f64));
	// fmuls f22,f7,f0
	ctx.f22.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// std r3,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r3.u64);
	// lfd f12,-4832(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4832);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r6,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// lfd f11,-4840(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// fmadds f13,f28,f28,f6
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f6.f64));
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// frsqrte f0,f13
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f13.f64)));
	// fmul f5,f13,f0
	ctx.f5.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f4,f0,f12
	ctx.f4.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fnmsub f3,f5,f0,f11
	ctx.f3.f64 = -(ctx.f5.f64 * ctx.f0.f64 - ctx.f11.f64);
	// fmadd f0,f3,f4,f0
	ctx.f0.f64 = ctx.f3.f64 * ctx.f4.f64 + ctx.f0.f64;
	// fmul f2,f13,f0
	ctx.f2.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f13,f0,f12
	ctx.f13.f64 = ctx.f0.f64 * ctx.f12.f64;
	// fnmsub f12,f2,f0,f11
	ctx.f12.f64 = -(ctx.f2.f64 * ctx.f0.f64 - ctx.f11.f64);
	// fmadd f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64;
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// fmuls f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f27,f10,f0
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f26,f9,f0
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// bl 0x8259c328
	ctx.lr = 0x8221DDF0;
	sub_8259C328(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// frsp f22,f0
	ctx.f22.f64 = double(float(ctx.f0.f64));
	// bl 0x8259c400
	ctx.lr = 0x8221DE00;
	sub_8259C400(ctx, base);
	// fmuls f13,f27,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmuls f12,f26,f26
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f26.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f28,f28
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// frsp f6,f1
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmuls f11,f27,f28
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// fneg f8,f13
	ctx.f8.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f7,f12
	ctx.f7.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmuls f13,f27,f26
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f26.f64));
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f12,f26,f28
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f28.f64));
	// std r4,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// std r3,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r3.u64);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// fadds f9,f5,f30
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f30.f64));
	// fadds f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fsubs f0,f30,f6
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f6.f64));
	// fadds f8,f4,f30
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f30.f64));
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmuls f10,f26,f22
	ctx.f10.f64 = double(float(ctx.f26.f64 * ctx.f22.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// fmuls f6,f28,f22
	ctx.f6.f64 = double(float(ctx.f28.f64 * ctx.f22.f64));
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// fmuls f5,f27,f22
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f22.f64));
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fsubs f0,f30,f4
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f4.f64));
	// fadds f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f10,f30,f9
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f9.f64));
	// fadds f9,f6,f7
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fsubs f12,f8,f5
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fadds f8,f5,f8
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// lfs f5,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fsubs f6,f30,f3
	ctx.f6.f64 = double(float(ctx.f30.f64 - ctx.f3.f64));
	// fmuls f1,f0,f25
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f3,f10,f5
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f30,f13,f25
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// fmuls f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// lfs f5,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f28,f12,f25
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// fmuls f27,f8,f5
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f26,f7,f5
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f5,f6,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fadds f4,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fadds f3,f30,f3
	ctx.f3.f64 = double(float(ctx.f30.f64 + ctx.f3.f64));
	// fadds f2,f28,f2
	ctx.f2.f64 = double(float(ctx.f28.f64 + ctx.f2.f64));
	// fadds f1,f4,f27
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f27.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f4,f3,f26
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f26.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f4,f11,f23
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f23.f64));
	// fadds f3,f2,f5
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// lfs f5,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f5.f64 = double(temp.f32);
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f1,f0,f5
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f30,f13,f5
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fmuls f3,f10,f23
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f23.f64));
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fmuls f28,f12,f5
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// lfs f5,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f9,f23
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f23.f64));
	// fmuls f27,f8,f5
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f26,f7,f5
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f5,f6,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fadds f4,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fadds f3,f30,f3
	ctx.f3.f64 = double(float(ctx.f30.f64 + ctx.f3.f64));
	// fadds f2,f28,f2
	ctx.f2.f64 = double(float(ctx.f28.f64 + ctx.f2.f64));
	// fmuls f28,f8,f24
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f24.f64));
	// fadds f1,f4,f27
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f27.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f27,f7,f24
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f24.f64));
	// fadds f4,f3,f26
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f26.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f26,f6,f24
	ctx.f26.f64 = double(float(ctx.f6.f64 * ctx.f24.f64));
	// fadds f3,f2,f5
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// lfs f5,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f5.f64 = double(temp.f32);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f3,f10,f5
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fmuls f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// lfs f5,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f1,f0,f5
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f30,f13,f5
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f5,f12,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fadds f4,f1,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fadds f3,f30,f3
	ctx.f3.f64 = double(float(ctx.f30.f64 + ctx.f3.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// std r3,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fadds f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fadds f2,f4,f28
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f28.f64));
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f1,f3,f27
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f27.f64));
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f5,f5,f26
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f26.f64));
	// stfs f5,120(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// std r9,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r9.u64);
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// li r9,8
	ctx.r9.s64 = 8;
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8221E078:
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// std r4,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// bdnz 0x8221e078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221E078;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// lfs f11,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// lfs f1,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f2,f3,f12
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fsubs f10,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r3,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r3.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f9,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f8,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f9,f29
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fmuls f9,f8,f29
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fadds f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f7,272(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fadds f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f6,276(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fadds f5,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f5,280(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
loc_8221E100:
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8221E110:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8221e110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221E110;
loc_8221E124:
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8221E130:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bdnz 0x8221e130
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221E130;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8259bbbc
	ctx.lr = 0x8221E150;
	__restfpr_14(ctx, base);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E154"))) PPC_WEAK_FUNC(sub_8221E154);
PPC_FUNC_IMPL(__imp__sub_8221E154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221E158"))) PPC_WEAK_FUNC(sub_8221E158);
PPC_FUNC_IMPL(__imp__sub_8221E158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24684(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24684);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f12,15560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15560);
	ctx.f12.f64 = double(temp.f32);
	// bgt cr6,0x8221e190
	if (ctx.cr6.gt) goto loc_8221E190;
	// bso cr6,0x8221e190
	if (ctx.cr6.so) goto loc_8221E190;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8221e190
	if (ctx.cr6.lt) goto loc_8221E190;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x8221e194
	if (!ctx.cr6.so) goto loc_8221E194;
loc_8221E190:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221E194:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221e200
	if (ctx.cr6.eq) goto loc_8221E200;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8221e1c0
	if (ctx.cr6.gt) goto loc_8221E1C0;
	// bso cr6,0x8221e1c0
	if (ctx.cr6.so) goto loc_8221E1C0;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8221e1c0
	if (ctx.cr6.lt) goto loc_8221E1C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x8221e1c4
	if (!ctx.cr6.so) goto loc_8221E1C4;
loc_8221E1C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221E1C4:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8221e200
	if (ctx.cr6.eq) goto loc_8221E200;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8221e1f0
	if (ctx.cr6.gt) goto loc_8221E1F0;
	// bso cr6,0x8221e1f0
	if (ctx.cr6.so) goto loc_8221E1F0;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8221e1f0
	if (ctx.cr6.lt) goto loc_8221E1F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// bns cr6,0x8221e1f4
	if (!ctx.cr6.so) goto loc_8221E1F4;
loc_8221E1F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221E1F4:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8221E200:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r3,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E20C"))) PPC_WEAK_FUNC(sub_8221E20C);
PPC_FUNC_IMPL(__imp__sub_8221E20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221E210"))) PPC_WEAK_FUNC(sub_8221E210);
PPC_FUNC_IMPL(__imp__sub_8221E210) {
	PPC_FUNC_PROLOGUE();
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r11,1926(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1926, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221E21C"))) PPC_WEAK_FUNC(sub_8221E21C);
PPC_FUNC_IMPL(__imp__sub_8221E21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221E220"))) PPC_WEAK_FUNC(sub_8221E220);
PPC_FUNC_IMPL(__imp__sub_8221E220) {
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
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lbz r6,22(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221e25c
	if (ctx.cr6.eq) goto loc_8221E25C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f31,-15132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15132);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8221e264
	goto loc_8221E264;
loc_8221E25C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -460);
	ctx.f31.f64 = double(temp.f32);
loc_8221E264:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// ori r8,r9,32769
	ctx.r8.u64 = ctx.r9.u64 | 32769;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// mulhwu r7,r11,r8
	ctx.r7.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// ori r8,r9,51976
	ctx.r8.u64 = ctx.r9.u64 | 51976;
	// rlwinm r5,r7,17,15,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x1FFFF;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// subf r5,r9,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r9.s64;
	// bne cr6,0x8221e2a4
	if (!ctx.cr6.eq) goto loc_8221E2A4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8221E2A4:
	// lis r9,3
	ctx.r9.s64 = 196608;
	// ori r8,r9,51972
	ctx.r8.u64 = ctx.r9.u64 | 51972;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8221e2c4
	if (!ctx.cr6.lt) goto loc_8221E2C4;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_8221E2C4:
	// li r8,21845
	ctx.r8.s64 = 21845;
	// lbz r7,1651(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1651);
	// bl 0x82364558
	ctx.lr = 0x8221E2D0;
	sub_82364558(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r10,-32160
	ctx.r10.s64 = -2107637760;
	// lfd f13,-1600(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1600);
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// lwz r10,-30860(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30860);
	// addi r9,r11,417
	ctx.r9.s64 = ctx.r11.s64 + 417;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fsel f0,f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfsx f0,r8,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r11,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r11.u32);
	// blt cr6,0x8221e314
	if (ctx.cr6.lt) goto loc_8221E314;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r7.u32);
loc_8221E314:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x8221e36c
	if (ctx.cr6.lt) goto loc_8221E36C;
	// addi r6,r10,-4
	ctx.r6.s64 = ctx.r10.s64 + -4;
	// addi r11,r31,1672
	ctx.r11.s64 = ctx.r31.s64 + 1672;
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_8221E33C:
	// lfs f13,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fadds f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fadds f0,f7,f9
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// bne cr6,0x8221e33c
	if (!ctx.cr6.eq) goto loc_8221E33C;
loc_8221E36C:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8221e39c
	if (!ctx.cr6.lt) goto loc_8221E39C;
	// addi r5,r8,417
	ctx.r5.s64 = ctx.r8.s64 + 417;
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
loc_8221E384:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfs f6,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221e384
	if (!ctx.cr6.eq) goto loc_8221E384;
loc_8221E39C:
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// addi r3,r31,1660
	ctx.r3.s64 = ctx.r31.s64 + 1660;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f5,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fdivs f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// fdivs f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f31.f64));
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r3
	PPC_STORE_U32(ctx.r3.u32, ctx.f0.u32);
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

__attribute__((alias("__imp__sub_8221E3DC"))) PPC_WEAK_FUNC(sub_8221E3DC);
PPC_FUNC_IMPL(__imp__sub_8221E3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221E3E0"))) PPC_WEAK_FUNC(sub_8221E3E0);
PPC_FUNC_IMPL(__imp__sub_8221E3E0) {
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
	// lwz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8221e458
	if (ctx.cr6.eq) goto loc_8221E458;
	// lhz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,21845
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21845, ctx.xer);
	// bge cr6,0x8221e428
	if (!ctx.cr6.lt) goto loc_8221E428;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r10,43690
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 43690, ctx.xer);
	// ble cr6,0x8221e428
	if (!ctx.cr6.gt) goto loc_8221E428;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8221e44c
	goto loc_8221E44C;
loc_8221E428:
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r10,21845
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21845, ctx.xer);
	// bge cr6,0x8221e43c
	if (!ctx.cr6.lt) goto loc_8221E43C;
	// cmplwi cr6,r11,43690
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43690, ctx.xer);
	// bgt cr6,0x8221e448
	if (ctx.cr6.gt) goto loc_8221E448;
loc_8221E43C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8221e44c
	if (ctx.cr6.gt) goto loc_8221E44C;
loc_8221E448:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221E44C:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221e48c
	if (ctx.cr6.eq) goto loc_8221E48C;
loc_8221E458:
	// lwz r8,13780(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13780);
	// li r5,636
	ctx.r5.s64 = 636;
	// mulli r11,r8,636
	ctx.r11.s64 = ctx.r8.s64 * 636;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,3604
	ctx.r3.s64 = ctx.r11.s64 + 3604;
	// bl 0x8259d3a0
	ctx.lr = 0x8221E470;
	sub_8259D3A0(ctx, base);
	// lwz r11,13780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13780);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// stw r11,13780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13780, ctx.r11.u32);
	// blt cr6,0x8221e48c
	if (ctx.cr6.lt) goto loc_8221E48C;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,13780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13780, ctx.r7.u32);
loc_8221E48C:
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

__attribute__((alias("__imp__sub_8221E4A0"))) PPC_WEAK_FUNC(sub_8221E4A0);
PPC_FUNC_IMPL(__imp__sub_8221E4A0) {
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
	// lis r10,6594
	ctx.r10.s64 = 432144384;
	// subf r11,r31,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r31.s64;
	// ori r9,r10,53583
	ctx.r9.u64 = ctx.r10.u64 | 53583;
	// addi r11,r11,-3604
	ctx.r11.s64 = ctx.r11.s64 + -3604;
	// lwz r10,13780(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13780);
	// mulhw r8,r11,r9
	ctx.r8.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 6;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8221e4fc
	if (!ctx.cr6.eq) goto loc_8221E4FC;
	// stw r9,13780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13780, ctx.r9.u32);
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
loc_8221E4FC:
	// mulli r10,r10,636
	ctx.r10.s64 = ctx.r10.s64 * 636;
	// mulli r11,r11,636
	ctx.r11.s64 = ctx.r11.s64 * 636;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,636
	ctx.r5.s64 = 636;
	// addi r4,r10,2968
	ctx.r4.s64 = ctx.r10.s64 + 2968;
	// addi r3,r11,3604
	ctx.r3.s64 = ctx.r11.s64 + 3604;
	// bl 0x8259d3a0
	ctx.lr = 0x8221E51C;
	sub_8259D3A0(ctx, base);
	// lwz r11,13780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13780);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,13780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13780, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_8221E53C"))) PPC_WEAK_FUNC(sub_8221E53C);
PPC_FUNC_IMPL(__imp__sub_8221E53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221E540"))) PPC_WEAK_FUNC(sub_8221E540);
PPC_FUNC_IMPL(__imp__sub_8221E540) {
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
	// lbz r11,488(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 488);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221e570
	if (!ctx.cr6.eq) goto loc_8221E570;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221E570:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221e5f4
	if (ctx.cr6.eq) goto loc_8221E5F4;
	// lwz r8,496(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 496);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8221e590
	if (!ctx.cr6.eq) goto loc_8221E590;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221E590:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221e5f4
	if (ctx.cr6.eq) goto loc_8221E5F4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8232cc00
	ctx.lr = 0x8221E5A4;
	sub_8232CC00(ctx, base);
	// lbz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bne cr6,0x8221e5c0
	if (!ctx.cr6.eq) goto loc_8221E5C0;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r3,19643(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 19643);
	// extsb r31,r3
	ctx.r31.s64 = ctx.r3.s8;
	// b 0x8221e5cc
	goto loc_8221E5CC;
loc_8221E5C0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r10,20362(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20362);
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
loc_8221E5CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823475c0
	ctx.lr = 0x8221E5D4;
	sub_823475C0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365b88
	ctx.lr = 0x8221E5E8;
	sub_82365B88(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8221e5f8
	if (!ctx.cr6.eq) goto loc_8221E5F8;
loc_8221E5F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221E5F8:
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

__attribute__((alias("__imp__sub_8221E610"))) PPC_WEAK_FUNC(sub_8221E610);
PPC_FUNC_IMPL(__imp__sub_8221E610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8221E618;
	__savegprlr_25(ctx, base);
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
	// ori r9,r10,16271
	ctx.r9.u64 = ctx.r10.u64 | 16271;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8221e734
	if (!ctx.cr6.eq) goto loc_8221E734;
	// bl 0x823475c0
	ctx.lr = 0x8221E640;
	sub_823475C0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365b88
	ctx.lr = 0x8221E654;
	sub_82365B88(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r7,33
	ctx.r7.s64 = 2162688;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// ori r6,r7,4432
	ctx.r6.u64 = ctx.r7.u64 | 4432;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221e734
	if (!ctx.cr6.gt) goto loc_8221E734;
	// lis r25,-32252
	ctx.r25.s64 = -2113667072;
loc_8221E67C:
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8223d0c8
	ctx.lr = 0x8221E68C;
	sub_8223D0C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r5,20362(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20362);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// cmpw cr6,r4,r26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x8221e71c
	if (!ctx.cr6.eq) goto loc_8221E71C;
	// lwz r9,23024(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 23024);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r11,20360(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20360);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8221e6d8
	if (!ctx.cr6.gt) goto loc_8221E6D8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r27,18592
	ctx.r11.s64 = ctx.r27.s64 + 18592;
loc_8221E6BC:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8221e6d8
	if (ctx.cr6.eq) goto loc_8221E6D8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8221e6bc
	if (ctx.cr6.lt) goto loc_8221E6BC;
loc_8221E6D8:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8221e71c
	if (!ctx.cr6.eq) goto loc_8221E71C;
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// lfs f1,-24908(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -24908);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,28824
	ctx.r3.s64 = ctx.r11.s64 + 28824;
	// bl 0x82237d60
	ctx.lr = 0x8221E6F4;
	sub_82237D60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82292350
	ctx.lr = 0x8221E70C;
	sub_82292350(ctx, base);
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,28824
	ctx.r3.s64 = ctx.r11.s64 + 28824;
	// bl 0x8228db28
	ctx.lr = 0x8221E71C;
	sub_8228DB28(ctx, base);
loc_8221E71C:
	// lis r11,33
	ctx.r11.s64 = 2162688;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// ori r10,r11,4432
	ctx.r10.u64 = ctx.r11.u64 | 4432;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8221e67c
	if (ctx.cr6.lt) goto loc_8221E67C;
loc_8221E734:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E73C"))) PPC_WEAK_FUNC(sub_8221E73C);
PPC_FUNC_IMPL(__imp__sub_8221E73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221E740"))) PPC_WEAK_FUNC(sub_8221E740);
PPC_FUNC_IMPL(__imp__sub_8221E740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8221E748;
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
	// ori r9,r10,16271
	ctx.r9.u64 = ctx.r10.u64 | 16271;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8221e830
	if (!ctx.cr6.eq) goto loc_8221E830;
	// bl 0x823475c0
	ctx.lr = 0x8221E770;
	sub_823475C0(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365b88
	ctx.lr = 0x8221E784;
	sub_82365B88(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r7,33
	ctx.r7.s64 = 2162688;
	// addi r30,r11,28544
	ctx.r30.s64 = ctx.r11.s64 + 28544;
	// ori r6,r7,4428
	ctx.r6.u64 = ctx.r7.u64 | 4428;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8221e830
	if (!ctx.cr6.gt) goto loc_8221E830;
	// addis r11,r30,33
	ctx.r11.s64 = ctx.r30.s64 + 2162688;
	// addi r29,r11,4152
	ctx.r29.s64 = ctx.r11.s64 + 4152;
loc_8221E7B0:
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r5,19643(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 19643);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8221e820
	if (!ctx.cr6.eq) goto loc_8221E820;
	// lwz r9,18400(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18400);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r11,19641(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 19641);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8221e7fc
	if (!ctx.cr6.gt) goto loc_8221E7FC;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r31,13968
	ctx.r11.s64 = ctx.r31.s64 + 13968;
loc_8221E7E0:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8221e7fc
	if (ctx.cr6.eq) goto loc_8221E7FC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8221e7e0
	if (ctx.cr6.lt) goto loc_8221E7E0;
loc_8221E7FC:
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8221e820
	if (!ctx.cr6.eq) goto loc_8221E820;
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// lbz r4,627(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + 627);
	// addi r3,r11,28824
	ctx.r3.s64 = ctx.r11.s64 + 28824;
	// bl 0x8228db28
	ctx.lr = 0x8221E814;
	sub_8228DB28(ctx, base);
	// lis r11,33
	ctx.r11.s64 = 2162688;
	// ori r10,r11,4428
	ctx.r10.u64 = ctx.r11.u64 | 4428;
	// lwzx r6,r30,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
loc_8221E820:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8221e7b0
	if (ctx.cr6.lt) goto loc_8221E7B0;
loc_8221E830:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221E838"))) PPC_WEAK_FUNC(sub_8221E838);
PPC_FUNC_IMPL(__imp__sub_8221E838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8221E840;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r27,r11,28544
	ctx.r27.s64 = ctx.r11.s64 + 28544;
	// lis r11,33
	ctx.r11.s64 = 2162688;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r10,r11,4428
	ctx.r10.u64 = ctx.r11.u64 | 4428;
	// lwzx r11,r27,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221e880
	if (!ctx.cr6.eq) goto loc_8221E880;
	// lis r9,33
	ctx.r9.s64 = 2162688;
	// ori r8,r9,4432
	ctx.r8.u64 = ctx.r9.u64 | 4432;
	// lwzx r11,r27,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8221eab8
	if (ctx.cr6.eq) goto loc_8221EAB8;
loc_8221E880:
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,432(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 432);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8221E8A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r3,73(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 73);
	// li r24,24
	ctx.r24.s64 = 24;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8221e8bc
	if (!ctx.cr6.eq) goto loc_8221E8BC;
	// li r24,8
	ctx.r24.s64 = 8;
loc_8221E8BC:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8221e8f8
	if (!ctx.cr6.gt) goto loc_8221E8F8;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_8221E8D8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221e8e8
	if (ctx.cr6.eq) goto loc_8221E8E8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8221E8E8:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221e8d8
	if (!ctx.cr6.eq) goto loc_8221E8D8;
loc_8221E8F8:
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lis r6,33
	ctx.r6.s64 = 2162688;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r5,r6,4428
	ctx.r5.u64 = ctx.r6.u64 | 4428;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwzx r28,r27,r5
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// ble cr6,0x8221e964
	if (!ctx.cr6.gt) goto loc_8221E964;
	// addis r11,r27,33
	ctx.r11.s64 = ctx.r27.s64 + 2162688;
	// addi r31,r11,4152
	ctx.r31.s64 = ctx.r11.s64 + 4152;
loc_8221E92C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lbz r11,19643(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 19643);
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// bl 0x82365698
	ctx.lr = 0x8221E940;
	sub_82365698(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8221e954
	if (!ctx.cr6.eq) goto loc_8221E954;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x8221e964
	if (!ctx.cr6.lt) goto loc_8221E964;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8221E954:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8221e92c
	if (ctx.cr6.lt) goto loc_8221E92C;
loc_8221E964:
	// lis r10,33
	ctx.r10.s64 = 2162688;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r9,r10,4432
	ctx.r9.u64 = ctx.r10.u64 | 4432;
	// lwzx r29,r27,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8221e9c0
	if (!ctx.cr6.gt) goto loc_8221E9C0;
loc_8221E97C:
	// addis r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 262144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8223d0c8
	ctx.lr = 0x8221E98C;
	sub_8223D0C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lbz r8,20362(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20362);
	// extsb r31,r8
	ctx.r31.s64 = ctx.r8.s8;
	// bl 0x82365698
	ctx.lr = 0x8221E9A0;
	sub_82365698(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8221e9b4
	if (!ctx.cr6.eq) goto loc_8221E9B4;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x8221e9c0
	if (!ctx.cr6.lt) goto loc_8221E9C0;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8221E9B4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8221e97c
	if (ctx.cr6.lt) goto loc_8221E97C;
loc_8221E9C0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8221eab8
	if (ctx.cr6.eq) goto loc_8221EAB8;
	// lhz r7,1926(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 1926);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mulli r6,r25,22
	ctx.r6.s64 = ctx.r25.s64 * 22;
	// lfs f0,-24620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24620);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfs f13,-20776(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20776);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// lfs f0,-1604(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1604);
	ctx.f0.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fdivs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// fnmsubs f4,f5,f13,f12
	ctx.f4.f64 = double(float(-(ctx.f5.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fdivs f13,f4,f7
	ctx.f13.f64 = double(float(ctx.f4.f64 / ctx.f7.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x8259da38
	ctx.lr = 0x8221EA28;
	sub_8259DA38(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfiwx f2,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f2.u32);
	// bne cr6,0x8221ea50
	if (!ctx.cr6.eq) goto loc_8221EA50;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221EA50:
	// lhz r8,1924(r26)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r26.u32 + 1924);
	// cmplwi cr6,r8,65535
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65535, ctx.xer);
	// beq cr6,0x8221eab4
	if (ctx.cr6.eq) goto loc_8221EAB4;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,21845
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21845, ctx.xer);
	// bge cr6,0x8221ea88
	if (!ctx.cr6.lt) goto loc_8221EA88;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r9,43690
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 43690, ctx.xer);
	// ble cr6,0x8221ea88
	if (!ctx.cr6.gt) goto loc_8221EA88;
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addis r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// b 0x8221ea94
	goto loc_8221EA94;
loc_8221EA88:
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// subf r3,r4,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r4.s64;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
loc_8221EA94:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8221eab4
	if (!ctx.cr6.lt) goto loc_8221EAB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_8221EAB4:
	// sth r11,1924(r26)
	PPC_STORE_U16(ctx.r26.u32 + 1924, ctx.r11.u16);
loc_8221EAB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EAC8"))) PPC_WEAK_FUNC(sub_8221EAC8);
PPC_FUNC_IMPL(__imp__sub_8221EAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8221EAD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823475c0
	ctx.lr = 0x8221EADC;
	sub_823475C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82365b88
	ctx.lr = 0x8221EAE8;
	sub_82365B88(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r11,26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8221eb00
	if (!ctx.cr6.eq) goto loc_8221EB00;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221EB00:
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r6,r3,r10
	ctx.r6.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r11,r8,r3
	ctx.r11.s32 = ctx.r8.s32 / ctx.r3.s32;
	// andc r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 & ~ctx.r7.u64;
	// mullw r9,r11,r3
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// twllei r3,0
	if (ctx.r3.u32 <= 0) __builtin_debugtrap();
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// twlgei r10,-1
	if (ctx.r10.u32 >= 4294967295) __builtin_debugtrap();
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// addi r28,r11,26752
	ctx.r28.s64 = ctx.r11.s64 + 26752;
	// bne cr6,0x8221ebf8
	if (!ctx.cr6.eq) goto loc_8221EBF8;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x82365698
	ctx.lr = 0x8221EB64;
	sub_82365698(ctx, base);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// lwzx r11,r30,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,444(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221EB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r31,3388
	ctx.r29.s64 = ctx.r31.s64 + 3388;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82219918
	ctx.lr = 0x8221EB9C;
	sub_82219918(ctx, base);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,448(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 448);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8221EBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// addis r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 2293760;
	// addi r3,r11,-31704
	ctx.r3.s64 = ctx.r11.s64 + -31704;
	// bl 0x820b0048
	ctx.lr = 0x8221EBDC;
	sub_820B0048(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// bl 0x82219f68
	ctx.lr = 0x8221EBF8;
	sub_82219F68(ctx, base);
loc_8221EBF8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,3404
	ctx.r3.s64 = ctx.r31.s64 + 3404;
	// bl 0x82219fb0
	ctx.lr = 0x8221EC0C;
	sub_82219FB0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221ec68
	if (ctx.cr6.eq) goto loc_8221EC68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823475c0
	ctx.lr = 0x8221EC20;
	sub_823475C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x82365b88
	ctx.lr = 0x8221EC2C;
	sub_82365B88(ctx, base);
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r4,r5,16216
	ctx.r4.u64 = ctx.r5.u64 | 16216;
	// lwzx r11,r30,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ec68
	if (ctx.cr6.eq) goto loc_8221EC68;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,440(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 440);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221EC68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221EC68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221EC70"))) PPC_WEAK_FUNC(sub_8221EC70);
PPC_FUNC_IMPL(__imp__sub_8221EC70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1588
	ctx.r3.s64 = ctx.r3.s64 + 1588;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EC78"))) PPC_WEAK_FUNC(sub_8221EC78);
PPC_FUNC_IMPL(__imp__sub_8221EC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8221EC80;
	__savegprlr_27(ctx, base);
	// lwz r11,23088(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23088);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8221ecb4
	if (ctx.cr6.gt) goto loc_8221ECB4;
	// addi r11,r3,23062
	ctx.r11.s64 = ctx.r3.s64 + 23062;
	// li r10,6
	ctx.r10.s64 = 6;
loc_8221EC98:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r9,-6(r11)
	PPC_STORE_U8(ctx.r11.u32 + -6, ctx.r9.u8);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221ec98
	if (!ctx.cr6.eq) goto loc_8221EC98;
	// b 0x8221ed50
	goto loc_8221ED50;
loc_8221ECB4:
	// lbz r10,23056(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23056);
	// lbz r7,23057(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23057);
	// lbz r8,23062(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23062);
	// clrlwi r6,r10,31
	ctx.r6.u64 = ctx.r10.u32 & 0x1;
	// lbz r5,23063(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23063);
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r4,r8,31
	ctx.r4.u64 = ctx.r8.u32 & 0x1;
	// lbz r11,23058(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23058);
	// clrlwi r7,r5,31
	ctx.r7.u64 = ctx.r5.u32 & 0x1;
	// lbz r8,23064(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23064);
	// lbz r5,23059(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23059);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lbz r31,23065(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23065);
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// lbz r30,23060(r3)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23060);
	// clrlwi r5,r5,31
	ctx.r5.u64 = ctx.r5.u32 & 0x1;
	// lbz r29,23066(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23066);
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// lbz r28,23061(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23061);
	// clrlwi r30,r30,31
	ctx.r30.u64 = ctx.r30.u32 & 0x1;
	// lbz r27,23067(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23067);
	// clrlwi r29,r29,31
	ctx.r29.u64 = ctx.r29.u32 & 0x1;
	// stb r6,23056(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23056, ctx.r6.u8);
	// clrlwi r28,r28,31
	ctx.r28.u64 = ctx.r28.u32 & 0x1;
	// clrlwi r6,r27,31
	ctx.r6.u64 = ctx.r27.u32 & 0x1;
	// stb r5,23059(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23059, ctx.r5.u8);
	// stb r4,23062(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23062, ctx.r4.u8);
	// stb r10,23057(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23057, ctx.r10.u8);
	// stb r7,23063(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23063, ctx.r7.u8);
	// stb r11,23058(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23058, ctx.r11.u8);
	// stb r8,23064(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23064, ctx.r8.u8);
	// stb r31,23065(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23065, ctx.r31.u8);
	// stb r30,23060(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23060, ctx.r30.u8);
	// stb r29,23066(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23066, ctx.r29.u8);
	// stb r28,23061(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23061, ctx.r28.u8);
	// stb r6,23067(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23067, ctx.r6.u8);
	// lwz r11,23088(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23088);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,23088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23088, ctx.r5.u32);
loc_8221ED50:
	// lwz r11,23080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8221ed84
	if (ctx.cr6.gt) goto loc_8221ED84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r9,23069(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23069, ctx.r9.u8);
	// li r4,255
	ctx.r4.s64 = 255;
	// stb r9,23070(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23070, ctx.r9.u8);
	// stb r9,23071(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23071, ctx.r9.u8);
	// stb r9,23068(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23068, ctx.r9.u8);
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,23052(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 23052, temp.u32);
	// stb r4,23076(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23076, ctx.r4.u8);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8221ED84:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,23080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23080, ctx.r11.u32);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221ED90"))) PPC_WEAK_FUNC(sub_8221ED90);
PPC_FUNC_IMPL(__imp__sub_8221ED90) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,13
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32222
	ctx.r12.s64 = -2111700992;
	// addi r12,r12,-4688
	ctx.r12.s64 = ctx.r12.s64 + -4688;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		sub_8221EDFC(ctx, base);
		return;
	case 1:
		sub_8221EE10(ctx, base);
		return;
	case 2:
		// ERROR: 0x8221EDE8
		return;
	case 3:
		sub_8221EE24(ctx, base);
		return;
	case 4:
		sub_8221EE3C(ctx, base);
		return;
	case 5:
		sub_8221EE48(ctx, base);
		return;
	case 6:
		sub_8221EE50(ctx, base);
		return;
	case 7:
		sub_8221EE5C(ctx, base);
		return;
	case 8:
		sub_8221EE78(ctx, base);
		return;
	case 9:
		sub_8221EE94(ctx, base);
		return;
	case 10:
		sub_8221EEA8(ctx, base);
		return;
	case 11:
		sub_8221EEBC(ctx, base);
		return;
	case 12:
		sub_8221EED0(ctx, base);
		return;
	case 13:
		sub_8221EEE4(ctx, base);
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8221EDB0"))) PPC_WEAK_FUNC(sub_8221EDB0);
PPC_FUNC_IMPL(__imp__sub_8221EDB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,-4612(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4612);
	// lwz r17,-4592(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4592);
	// lwz r17,-4632(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4632);
	// lwz r17,-4572(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4572);
	// lwz r17,-4548(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4548);
	// lwz r17,-4536(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4536);
	// lwz r17,-4528(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4528);
	// lwz r17,-4516(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4516);
	// lwz r17,-4488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4488);
	// lwz r17,-4460(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4460);
	// lwz r17,-4440(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4440);
	// lwz r17,-4420(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4420);
	// lwz r17,-4400(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4400);
	// lwz r17,-4380(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4380);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r10,23071(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23071, ctx.r10.u8);
	// stw r11,23080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23080, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EDFC"))) PPC_WEAK_FUNC(sub_8221EDFC);
PPC_FUNC_IMPL(__imp__sub_8221EDFC) {
	PPC_FUNC_PROLOGUE();
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,23080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23080, ctx.r9.u32);
	// stb r8,23069(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23069, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EE10"))) PPC_WEAK_FUNC(sub_8221EE10);
PPC_FUNC_IMPL(__imp__sub_8221EE10) {
	PPC_FUNC_PROLOGUE();
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,23080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23080, ctx.r7.u32);
	// stb r6,23070(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23070, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EE24"))) PPC_WEAK_FUNC(sub_8221EE24);
PPC_FUNC_IMPL(__imp__sub_8221EE24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r5,5
	ctx.r5.s64 = 5;
	// stfs f1,23052(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 23052, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r5,23080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23080, ctx.r5.u32);
	// stb r4,23068(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23068, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EE3C"))) PPC_WEAK_FUNC(sub_8221EE3C);
PPC_FUNC_IMPL(__imp__sub_8221EE3C) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,23036(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23036, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EE48"))) PPC_WEAK_FUNC(sub_8221EE48);
PPC_FUNC_IMPL(__imp__sub_8221EE48) {
	PPC_FUNC_PROLOGUE();
	// stw r5,23072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23072, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EE50"))) PPC_WEAK_FUNC(sub_8221EE50);
PPC_FUNC_IMPL(__imp__sub_8221EE50) {
	PPC_FUNC_PROLOGUE();
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,23072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23072, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EE5C"))) PPC_WEAK_FUNC(sub_8221EE5C);
PPC_FUNC_IMPL(__imp__sub_8221EE5C) {
	PPC_FUNC_PROLOGUE();
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// lbz r8,23056(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23056);
	// ori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 1;
	// stb r7,23056(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23056, ctx.r7.u8);
	// stw r9,23088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23088, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EE78"))) PPC_WEAK_FUNC(sub_8221EE78);
PPC_FUNC_IMPL(__imp__sub_8221EE78) {
	PPC_FUNC_PROLOGUE();
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// lbz r5,23062(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23062);
	// ori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 | 1;
	// stb r4,23062(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23062, ctx.r4.u8);
	// stw r6,23088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23088, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EE94"))) PPC_WEAK_FUNC(sub_8221EE94);
PPC_FUNC_IMPL(__imp__sub_8221EE94) {
	PPC_FUNC_PROLOGUE();
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lbz r3,23056(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23056);
	// ori r10,r3,2
	ctx.r10.u64 = ctx.r3.u64 | 2;
	// stb r10,23056(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23056, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EEA8"))) PPC_WEAK_FUNC(sub_8221EEA8);
PPC_FUNC_IMPL(__imp__sub_8221EEA8) {
	PPC_FUNC_PROLOGUE();
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lbz r9,23062(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23062);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stb r8,23062(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23062, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EEBC"))) PPC_WEAK_FUNC(sub_8221EEBC);
PPC_FUNC_IMPL(__imp__sub_8221EEBC) {
	PPC_FUNC_PROLOGUE();
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lbz r7,23056(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23056);
	// ori r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 4;
	// stb r6,23056(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23056, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EED0"))) PPC_WEAK_FUNC(sub_8221EED0);
PPC_FUNC_IMPL(__imp__sub_8221EED0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lbz r5,23062(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23062);
	// ori r4,r5,4
	ctx.r4.u64 = ctx.r5.u64 | 4;
	// stb r4,23062(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23062, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EEE4"))) PPC_WEAK_FUNC(sub_8221EEE4);
PPC_FUNC_IMPL(__imp__sub_8221EEE4) {
	PPC_FUNC_PROLOGUE();
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r5,23076(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23076, ctx.r5.u8);
	// stw r11,23080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23080, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221EEF4"))) PPC_WEAK_FUNC(sub_8221EEF4);
PPC_FUNC_IMPL(__imp__sub_8221EEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221EEF8"))) PPC_WEAK_FUNC(sub_8221EEF8);
PPC_FUNC_IMPL(__imp__sub_8221EEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8221EF00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,23084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23084);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8221ef20
	if (ctx.cr6.gt) goto loc_8221EF20;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8221ef2c
	goto loc_8221EF2C;
loc_8221EF20:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,23084(r30)
	PPC_STORE_U32(ctx.r30.u32 + 23084, ctx.r11.u32);
loc_8221EF2C:
	// lwz r11,23092(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23092);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8221ef40
	if (ctx.cr6.gt) goto loc_8221EF40;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x8221ef4c
	goto loc_8221EF4C;
loc_8221EF40:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r9,23092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 23092, ctx.r9.u32);
loc_8221EF4C:
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// li r27,5
	ctx.r27.s64 = 5;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8221efa0
	if (ctx.cr6.eq) goto loc_8221EFA0;
	// lbz r8,30(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 30);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221efa0
	if (ctx.cr6.eq) goto loc_8221EFA0;
	// lwz r3,1936(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1936);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-14724
	ctx.r11.s64 = ctx.r11.s64 + -14724;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r7,6916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6916, ctx.r7.u32);
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,88(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 88);
	// lfsx f1,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221EF9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,23084(r30)
	PPC_STORE_U32(ctx.r30.u32 + 23084, ctx.r27.u32);
loc_8221EFA0:
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,28544
	ctx.r29.s64 = ctx.r11.s64 + 28544;
	// beq cr6,0x8221f054
	if (ctx.cr6.eq) goto loc_8221F054;
	// lbz r8,31(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 31);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221f054
	if (ctx.cr6.eq) goto loc_8221F054;
	// lis r7,33
	ctx.r7.s64 = 2162688;
	// ori r6,r7,4416
	ctx.r6.u64 = ctx.r7.u64 | 4416;
	// lwzx r11,r29,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221efdc
	if (!ctx.cr6.gt) goto loc_8221EFDC;
	// addis r11,r29,10
	ctx.r11.s64 = ctx.r29.s64 + 655360;
	// addi r31,r11,-7344
	ctx.r31.s64 = ctx.r11.s64 + -7344;
	// b 0x8221efe0
	goto loc_8221EFE0;
loc_8221EFDC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221EFE0:
	// addis r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 262144;
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
	ctx.lr = 0x8221F008;
	sub_8227FB28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r4,627(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 627);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8221F028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lfs f1,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8221F048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24228(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24228, temp.u32);
	// stw r27,23084(r30)
	PPC_STORE_U32(ctx.r30.u32 + 23084, ctx.r27.u32);
loc_8221F054:
	// lbz r7,20(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// stb r7,23077(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23077, ctx.r7.u8);
	// lbz r6,34(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 34);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221f080
	if (ctx.cr6.eq) goto loc_8221F080;
	// lwz r3,1932(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1932);
	// lbz r5,15456(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15456);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8221f080
	if (ctx.cr6.eq) goto loc_8221F080;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820bd6d0
	ctx.lr = 0x8221F080;
	sub_820BD6D0(ctx, base);
loc_8221F080:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8221f12c
	if (ctx.cr6.lt) goto loc_8221F12C;
	// beq cr6,0x8221f0f0
	if (ctx.cr6.eq) goto loc_8221F0F0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8221f174
	if (!ctx.cr6.lt) goto loc_8221F174;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,52(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// bl 0x8232da90
	ctx.lr = 0x8221F0A4;
	sub_8232DA90(ctx, base);
	// lbz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 48);
	// li r6,1
	ctx.r6.s64 = 1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221f0d4
	if (ctx.cr6.eq) goto loc_8221F0D4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,1932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1932);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e2a70
	ctx.lr = 0x8221F0CC;
	sub_820E2A70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8221F0D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,1932(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1932);
	// addi r3,r3,13696
	ctx.r3.s64 = ctx.r3.s64 + 13696;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e2a70
	ctx.lr = 0x8221F0E8;
	sub_820E2A70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8221F0F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,52(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// bl 0x8232da90
	ctx.lr = 0x8221F0FC;
	sub_8232DA90(ctx, base);
	// lbz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f0d4
	if (ctx.cr6.eq) goto loc_8221F0D4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,1932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1932);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e2a70
	ctx.lr = 0x8221F124;
	sub_820E2A70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8221F12C:
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221f174
	if (ctx.cr6.eq) goto loc_8221F174;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,52(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// bl 0x8232da90
	ctx.lr = 0x8221F144;
	sub_8232DA90(ctx, base);
	// lbz r9,48(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 48);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8221f168
	if (ctx.cr6.eq) goto loc_8221F168;
	// lwz r11,1932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1932);
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// bl 0x820e2a48
	ctx.lr = 0x8221F160;
	sub_820E2A48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8221F168:
	// addi r3,r4,13696
	ctx.r3.s64 = ctx.r4.s64 + 13696;
	// lwz r4,1932(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1932);
	// bl 0x820e2a48
	ctx.lr = 0x8221F174;
	sub_820E2A48(ctx, base);
loc_8221F174:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F17C"))) PPC_WEAK_FUNC(sub_8221F17C);
PPC_FUNC_IMPL(__imp__sub_8221F17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F180"))) PPC_WEAK_FUNC(sub_8221F180);
PPC_FUNC_IMPL(__imp__sub_8221F180) {
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
	// lbz r4,1354(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1354);
	// bl 0x8221af98
	ctx.lr = 0x8221F194;
	sub_8221AF98(ctx, base);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8221f214
	if (ctx.cr6.eq) goto loc_8221F214;
	// lbz r10,1354(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1354);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221f1cc
	if (!ctx.cr6.eq) goto loc_8221F1CC;
	// lwz r11,1932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1932);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f244
	if (ctx.cr6.eq) goto loc_8221F244;
	// lwz r9,23040(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23040);
	// stw r9,14804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14804, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221F1CC:
	// lwz r10,1932(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1932);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221f244
	if (ctx.cr6.eq) goto loc_8221F244;
	// lwz r11,23044(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23044);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// stw r11,23044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23044, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble cr6,0x8221f1f4
	if (!ctx.cr6.gt) goto loc_8221F1F4;
	// stb r11,15216(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15216, ctx.r11.u8);
loc_8221F1F4:
	// lwz r8,23044(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23044);
	// cmpwi cr6,r8,60
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 60, ctx.xer);
	// ble cr6,0x8221f244
	if (!ctx.cr6.gt) goto loc_8221F244;
	// stw r11,23044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23044, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221F214:
	// lbz r7,1354(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1354);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8221f244
	if (ctx.cr6.eq) goto loc_8221F244;
	// lwz r11,1932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1932);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f244
	if (ctx.cr6.eq) goto loc_8221F244;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r6,23044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23044, ctx.r6.u32);
	// lwz r4,14804(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14804);
	// stw r4,23040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23040, ctx.r4.u32);
	// stw r5,14804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14804, ctx.r5.u32);
loc_8221F244:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F254"))) PPC_WEAK_FUNC(sub_8221F254);
PPC_FUNC_IMPL(__imp__sub_8221F254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F258"))) PPC_WEAK_FUNC(sub_8221F258);
PPC_FUNC_IMPL(__imp__sub_8221F258) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8221a620
	ctx.lr = 0x8221F27C;
	sub_8221A620(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r11,23140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23140, ctx.r11.u8);
	// std r10,23128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 23128, ctx.r10.u64);
	// stw r9,23136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23136, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8221F2A8"))) PPC_WEAK_FUNC(sub_8221F2A8);
PPC_FUNC_IMPL(__imp__sub_8221F2A8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,3572
	ctx.r3.s64 = ctx.r11.s64 + 3572;
	// stb r10,23124(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23124, ctx.r10.u8);
	// b 0x8221a1a0
	sub_8221A1A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F2BC"))) PPC_WEAK_FUNC(sub_8221F2BC);
PPC_FUNC_IMPL(__imp__sub_8221F2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F2C0"))) PPC_WEAK_FUNC(sub_8221F2C0);
PPC_FUNC_IMPL(__imp__sub_8221F2C0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8221a7f0
	ctx.lr = 0x8221F2D4;
	sub_8221A7F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f2f4
	if (ctx.cr6.eq) goto loc_8221F2F4;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8808
	ctx.r3.s64 = ctx.r11.s64 + 8808;
	// bl 0x82211d78
	ctx.lr = 0x8221F2F4;
	sub_82211D78(ctx, base);
loc_8221F2F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F304"))) PPC_WEAK_FUNC(sub_8221F304);
PPC_FUNC_IMPL(__imp__sub_8221F304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F308"))) PPC_WEAK_FUNC(sub_8221F308);
PPC_FUNC_IMPL(__imp__sub_8221F308) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f320
	if (ctx.cr6.eq) goto loc_8221F320;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,23124(r7)
	PPC_STORE_U8(ctx.r7.u32 + 23124, ctx.r10.u8);
	// blr 
	return;
loc_8221F320:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8808
	ctx.r3.s64 = ctx.r11.s64 + 8808;
	// b 0x82204220
	sub_82204220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F330"))) PPC_WEAK_FUNC(sub_8221F330);
PPC_FUNC_IMPL(__imp__sub_8221F330) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// rlwimi r11,r4,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F340"))) PPC_WEAK_FUNC(sub_8221F340);
PPC_FUNC_IMPL(__imp__sub_8221F340) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221f358
	if (!ctx.cr6.eq) goto loc_8221F358;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221F358:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F360"))) PPC_WEAK_FUNC(sub_8221F360);
PPC_FUNC_IMPL(__imp__sub_8221F360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r10,19(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lbz r8,18(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lbz r6,17(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,8(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lbz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,12(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F3C4"))) PPC_WEAK_FUNC(sub_8221F3C4);
PPC_FUNC_IMPL(__imp__sub_8221F3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F3C8"))) PPC_WEAK_FUNC(sub_8221F3C8);
PPC_FUNC_IMPL(__imp__sub_8221F3C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// rlwinm r3,r11,31,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F3D4"))) PPC_WEAK_FUNC(sub_8221F3D4);
PPC_FUNC_IMPL(__imp__sub_8221F3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F3D8"))) PPC_WEAK_FUNC(sub_8221F3D8);
PPC_FUNC_IMPL(__imp__sub_8221F3D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// rlwimi r11,r4,1,29,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 1) & 0x6) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF9);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F3E8"))) PPC_WEAK_FUNC(sub_8221F3E8);
PPC_FUNC_IMPL(__imp__sub_8221F3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-24616
	ctx.r3.s64 = ctx.r11.s64 + -24616;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F3F4"))) PPC_WEAK_FUNC(sub_8221F3F4);
PPC_FUNC_IMPL(__imp__sub_8221F3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F3F8"))) PPC_WEAK_FUNC(sub_8221F3F8);
PPC_FUNC_IMPL(__imp__sub_8221F3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrldi r9,r10,56
	ctx.r9.u64 = ctx.r10.u64 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrldi r7,r8,56
	ctx.r7.u64 = ctx.r8.u64 & 0xFF;
	// rlwinm r5,r11,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// clrldi r3,r11,56
	ctx.r3.u64 = ctx.r11.u64 & 0xFF;
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f7,-8(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// stfs f3,12(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// stfs f4,8(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F474"))) PPC_WEAK_FUNC(sub_8221F474);
PPC_FUNC_IMPL(__imp__sub_8221F474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F478"))) PPC_WEAK_FUNC(sub_8221F478);
PPC_FUNC_IMPL(__imp__sub_8221F478) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8221f48c
	if (!ctx.cr6.eq) goto loc_8221F48C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221F48C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F494"))) PPC_WEAK_FUNC(sub_8221F494);
PPC_FUNC_IMPL(__imp__sub_8221F494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F498"))) PPC_WEAK_FUNC(sub_8221F498);
PPC_FUNC_IMPL(__imp__sub_8221F498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-24608
	ctx.r3.s64 = ctx.r11.s64 + -24608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F4A4"))) PPC_WEAK_FUNC(sub_8221F4A4);
PPC_FUNC_IMPL(__imp__sub_8221F4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F4A8"))) PPC_WEAK_FUNC(sub_8221F4A8);
PPC_FUNC_IMPL(__imp__sub_8221F4A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F4B0"))) PPC_WEAK_FUNC(sub_8221F4B0);
PPC_FUNC_IMPL(__imp__sub_8221F4B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F4B8"))) PPC_WEAK_FUNC(sub_8221F4B8);
PPC_FUNC_IMPL(__imp__sub_8221F4B8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F4C0"))) PPC_WEAK_FUNC(sub_8221F4C0);
PPC_FUNC_IMPL(__imp__sub_8221F4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-24600
	ctx.r3.s64 = ctx.r11.s64 + -24600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F4CC"))) PPC_WEAK_FUNC(sub_8221F4CC);
PPC_FUNC_IMPL(__imp__sub_8221F4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F4D0"))) PPC_WEAK_FUNC(sub_8221F4D0);
PPC_FUNC_IMPL(__imp__sub_8221F4D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,100
	ctx.r3.s64 = 100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F4D8"))) PPC_WEAK_FUNC(sub_8221F4D8);
PPC_FUNC_IMPL(__imp__sub_8221F4D8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// li r9,25
	ctx.r9.s64 = 25;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8221F4EC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8221f4ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221F4EC;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,50
	ctx.r9.s64 = 50;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// b 0x82369ec8
	sub_82369EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F518"))) PPC_WEAK_FUNC(sub_8221F518);
PPC_FUNC_IMPL(__imp__sub_8221F518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,2864(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
loc_8221F530:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x8221f530
	if (!ctx.cr6.eq) goto loc_8221F530;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F564"))) PPC_WEAK_FUNC(sub_8221F564);
PPC_FUNC_IMPL(__imp__sub_8221F564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F568"))) PPC_WEAK_FUNC(sub_8221F568);
PPC_FUNC_IMPL(__imp__sub_8221F568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,2864(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
loc_8221F57C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x8221f57c
	if (!ctx.cr6.eq) goto loc_8221F57C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F5A8"))) PPC_WEAK_FUNC(sub_8221F5A8);
PPC_FUNC_IMPL(__imp__sub_8221F5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8221F5B0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8221f5d0
	if (ctx.cr6.eq) goto loc_8221F5D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8221f5b0
	if (ctx.cr6.lt) goto loc_8221F5B0;
	// blr 
	return;
loc_8221F5D0:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F60C"))) PPC_WEAK_FUNC(sub_8221F60C);
PPC_FUNC_IMPL(__imp__sub_8221F60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F610"))) PPC_WEAK_FUNC(sub_8221F610);
PPC_FUNC_IMPL(__imp__sub_8221F610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8221F618:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8221f65c
	if (ctx.cr6.eq) goto loc_8221F65C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8221f618
	if (ctx.cr6.lt) goto loc_8221F618;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8221F63C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8221f68c
	if (ctx.cr6.eq) goto loc_8221F68C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8221f63c
	if (ctx.cr6.lt) goto loc_8221F63C;
	// blr 
	return;
loc_8221F65C:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stw r8,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r8.u32);
	// stw r7,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r7.u32);
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// blr 
	return;
loc_8221F68C:
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stwx r4,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r4.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f13,108(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r4.u32);
	// stw r3,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r3.u32);
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F6CC"))) PPC_WEAK_FUNC(sub_8221F6CC);
PPC_FUNC_IMPL(__imp__sub_8221F6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F6D0"))) PPC_WEAK_FUNC(sub_8221F6D0);
PPC_FUNC_IMPL(__imp__sub_8221F6D0) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8221F6D8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8221f6fc
	if (ctx.cr6.eq) goto loc_8221F6FC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x8221f6d8
	if (ctx.cr6.lt) goto loc_8221F6D8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8221F6FC:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F70C"))) PPC_WEAK_FUNC(sub_8221F70C);
PPC_FUNC_IMPL(__imp__sub_8221F70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F710"))) PPC_WEAK_FUNC(sub_8221F710);
PPC_FUNC_IMPL(__imp__sub_8221F710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8221F718;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,26752
	ctx.r28.s64 = ctx.r11.s64 + 26752;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x823656e8
	ctx.lr = 0x8221F734;
	sub_823656E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r31,r27,100
	ctx.r31.s64 = ctx.r27.s64 + 100;
	// li r30,6
	ctx.r30.s64 = 6;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lfs f31,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f31.f64 = double(temp.f32);
	// li r26,0
	ctx.r26.s64 = 0;
loc_8221F750:
	// lwz r4,-100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8221f794
	if (ctx.cr6.eq) goto loc_8221F794;
	// cmpw cr6,r4,r25
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x8221f794
	if (ctx.cr6.eq) goto loc_8221F794;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x823656f8
	ctx.lr = 0x8221F76C;
	sub_823656F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8221f794
	if (!ctx.cr6.eq) goto loc_8221F794;
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r29,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r29.u32);
	// stfs f31,-88(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -88, temp.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r29,-100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -100, ctx.r29.u32);
	// stw r26,-96(r31)
	PPC_STORE_U32(ctx.r31.u32 + -96, ctx.r26.u32);
	// stw r26,-92(r31)
	PPC_STORE_U32(ctx.r31.u32 + -92, ctx.r26.u32);
loc_8221F794:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8221f750
	if (!ctx.cr6.eq) goto loc_8221F750;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221f838
	if (!ctx.cr6.gt) goto loc_8221F838;
loc_8221F7B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x8221F7C0;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8221f7d4
	if (ctx.cr6.eq) goto loc_8221F7D4;
	// bl 0x823475c0
	ctx.lr = 0x8221F7CC;
	sub_823475C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8221f7d8
	goto loc_8221F7D8;
loc_8221F7D4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_8221F7D8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_8221F7E0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8221f800
	if (ctx.cr6.eq) goto loc_8221F800;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8221f7e0
	if (ctx.cr6.lt) goto loc_8221F7E0;
	// b 0x8221f814
	goto loc_8221F814;
loc_8221F800:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8221f828
	if (!ctx.cr6.eq) goto loc_8221F828;
loc_8221F814:
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221f610
	ctx.lr = 0x8221F828;
	sub_8221F610(ctx, base);
loc_8221F828:
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8221f7b4
	if (ctx.cr6.lt) goto loc_8221F7B4;
loc_8221F838:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F844"))) PPC_WEAK_FUNC(sub_8221F844);
PPC_FUNC_IMPL(__imp__sub_8221F844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F848"))) PPC_WEAK_FUNC(sub_8221F848);
PPC_FUNC_IMPL(__imp__sub_8221F848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lwz r3,26648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26648);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F854"))) PPC_WEAK_FUNC(sub_8221F854);
PPC_FUNC_IMPL(__imp__sub_8221F854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8221F858"))) PPC_WEAK_FUNC(sub_8221F858);
PPC_FUNC_IMPL(__imp__sub_8221F858) {
	PPC_FUNC_PROLOGUE();
	// li r3,31860
	ctx.r3.s64 = 31860;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8221F860"))) PPC_WEAK_FUNC(sub_8221F860);
PPC_FUNC_IMPL(__imp__sub_8221F860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8221F868;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-20768
	ctx.r4.s64 = ctx.r11.s64 + -20768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8259d9b8
	ctx.lr = 0x8221F884;
	sub_8259D9B8(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r3,2
	ctx.r27.s64 = ctx.r3.s64 + 2;
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r26.u8);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x8221f8a0
	if (!ctx.cr6.eq) goto loc_8221F8A0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_8221F8A0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,-20772
	ctx.r29.s64 = ctx.r11.s64 + -20772;
	// beq cr6,0x8221f8e0
	if (ctx.cr6.eq) goto loc_8221F8E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8259d9b8
	ctx.lr = 0x8221F8BC;
	sub_8259D9B8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r4,r11,-20764
	ctx.r4.s64 = ctx.r11.s64 + -20764;
	// bl 0x82403840
	ctx.lr = 0x8221F8CC;
	sub_82403840(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r11,3672
	ctx.r6.s64 = ctx.r11.s64 + 3672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82404528
	ctx.lr = 0x8221F8E0;
	sub_82404528(ctx, base);
loc_8221F8E0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8259d9b8
	ctx.lr = 0x8221F8EC;
	sub_8259D9B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221f900
	if (ctx.cr6.eq) goto loc_8221F900;
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
loc_8221F900:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221F908"))) PPC_WEAK_FUNC(sub_8221F908);
PPC_FUNC_IMPL(__imp__sub_8221F908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8221F910;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8259bb90
	ctx.lr = 0x8221F918;
	__savefpr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r6,r31,3
	ctx.r6.s64 = ctx.r31.s64 + 3;
	// addi r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 2;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x8221a918
	ctx.lr = 0x8221F944;
	sub_8221A918(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f11,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// lfs f10,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addis r9,r11,38
	ctx.r9.s64 = ctx.r11.s64 + 2490368;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r8,r9,-16320
	ctx.r8.s64 = ctx.r9.s64 + -16320;
	// addis r9,r11,38
	ctx.r9.s64 = ctx.r11.s64 + 2490368;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r8,r9,-16304
	ctx.r8.s64 = ctx.r9.s64 + -16304;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r11,r11,-30592
	ctx.r11.s64 = ctx.r11.s64 + -30592;
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// std r3,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r3.u64);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-30576
	ctx.r11.s64 = ctx.r11.s64 + -30576;
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// lfs f30,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f30.f64 = double(temp.f32);
	// fadds f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// lfs f30,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fadds f7,f30,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 + ctx.f7.f64));
	// lfs f30,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f6,f30,f6
	ctx.f6.f64 = double(float(ctx.f30.f64 + ctx.f6.f64));
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f2,f13,f3
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// fsubs f5,f8,f5
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fsubs f3,f7,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fadds f31,f12,f1
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// fsubs f1,f6,f1
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fsubs f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsubs f30,f4,f11
	ctx.f30.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// fsubs f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fsubs f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fsubs f29,f2,f10
	ctx.f29.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fsubs f28,f31,f9
	ctx.f28.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// fsel f11,f30,f4,f11
	ctx.f11.f64 = ctx.f30.f64 >= 0.0 ? ctx.f4.f64 : ctx.f11.f64;
	// fsel f10,f29,f2,f10
	ctx.f10.f64 = ctx.f29.f64 >= 0.0 ? ctx.f2.f64 : ctx.f10.f64;
	// fsel f9,f28,f31,f9
	ctx.f9.f64 = ctx.f28.f64 >= 0.0 ? ctx.f31.f64 : ctx.f9.f64;
	// fsubs f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fsubs f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// fsubs f31,f1,f9
	ctx.f31.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fsel f11,f4,f11,f5
	ctx.f11.f64 = ctx.f4.f64 >= 0.0 ? ctx.f11.f64 : ctx.f5.f64;
	// fsel f10,f2,f10,f3
	ctx.f10.f64 = ctx.f2.f64 >= 0.0 ? ctx.f10.f64 : ctx.f3.f64;
	// fsel f9,f31,f9,f1
	ctx.f9.f64 = ctx.f31.f64 >= 0.0 ? ctx.f9.f64 : ctx.f1.f64;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fdivs f1,f0,f8
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fsubs f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fdivs f31,f0,f7
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// fsubs f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fdivs f30,f0,f6
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// bl 0x8234a2a8
	ctx.lr = 0x8221FA64;
	sub_8234A2A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,16
	ctx.r4.s64 = 16;
	// sth r3,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
	// bl 0x8234a2a8
	ctx.lr = 0x8221FA78;
	sub_8234A2A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// sth r3,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r3.u16);
	// bl 0x8234a2a8
	ctx.lr = 0x8221FA8C;
	sub_8234A2A8(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// sth r3,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r3.u16);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,26624
	ctx.r11.s64 = ctx.r11.s64 + 26624;
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r4,8
	ctx.r4.s64 = 8;
	// lfs f7,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fsubs f25,f11,f8
	ctx.f25.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// addi r11,r11,26720
	ctx.r11.s64 = ctx.r11.s64 + 26720;
	// fsubs f26,f13,f10
	ctx.f26.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f24,f9,f6
	ctx.f24.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f23,f7,f4
	ctx.f23.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// fsubs f22,f5,f3
	ctx.f22.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// fsel f0,f1,f0,f12
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// addi r11,r11,13232
	ctx.r11.s64 = ctx.r11.s64 + 13232;
	// fsel f12,f25,f11,f8
	ctx.f12.f64 = ctx.f25.f64 >= 0.0 ? ctx.f11.f64 : ctx.f8.f64;
	// fsel f13,f26,f13,f10
	ctx.f13.f64 = ctx.f26.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fsel f11,f24,f9,f6
	ctx.f11.f64 = ctx.f24.f64 >= 0.0 ? ctx.f9.f64 : ctx.f6.f64;
	// lfs f30,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fsel f10,f23,f7,f4
	ctx.f10.f64 = ctx.f23.f64 >= 0.0 ? ctx.f7.f64 : ctx.f4.f64;
	// fsel f9,f22,f5,f3
	ctx.f9.f64 = ctx.f22.f64 >= 0.0 ? ctx.f5.f64 : ctx.f3.f64;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// fsubs f8,f0,f2
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// addi r11,r11,26672
	ctx.r11.s64 = ctx.r11.s64 + 26672;
	// fsubs f6,f12,f30
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// fsubs f7,f13,f31
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// lfs f29,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f5,f11,f29
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// lfs f27,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f4,f10,f28
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f28.f64));
	// fsubs f3,f9,f27
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f27.f64));
	// fsel f1,f8,f2,f0
	ctx.f1.f64 = ctx.f8.f64 >= 0.0 ? ctx.f2.f64 : ctx.f0.f64;
	// fsel f30,f6,f30,f12
	ctx.f30.f64 = ctx.f6.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// fsel f31,f7,f31,f13
	ctx.f31.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
	// fsel f29,f5,f29,f11
	ctx.f29.f64 = ctx.f5.f64 >= 0.0 ? ctx.f29.f64 : ctx.f11.f64;
	// fsel f28,f4,f28,f10
	ctx.f28.f64 = ctx.f4.f64 >= 0.0 ? ctx.f28.f64 : ctx.f10.f64;
	// fsel f27,f3,f27,f9
	ctx.f27.f64 = ctx.f3.f64 >= 0.0 ? ctx.f27.f64 : ctx.f9.f64;
	// bl 0x8234a2a8
	ctx.lr = 0x8221FB64;
	sub_8234A2A8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,8
	ctx.r4.s64 = 8;
	// sth r3,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r3.u16);
	// bl 0x8234a2a8
	ctx.lr = 0x8221FB78;
	sub_8234A2A8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// sth r3,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r3.u16);
	// bl 0x8234a2a8
	ctx.lr = 0x8221FB8C;
	sub_8234A2A8(ctx, base);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r3,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r3.u16);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8234a2a8
	ctx.lr = 0x8221FBA0;
	sub_8234A2A8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// sth r3,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r3.u16);
	// bl 0x8234a2a8
	ctx.lr = 0x8221FBB4;
	sub_8234A2A8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// sth r3,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r3.u16);
	// bl 0x8234a2a8
	ctx.lr = 0x8221FBC8;
	sub_8234A2A8(ctx, base);
	// sth r3,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r3.u16);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8259bbdc
	ctx.lr = 0x8221FBDC;
	__restfpr_22(ctx, base);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8221FBE0"))) PPC_WEAK_FUNC(sub_8221FBE0);
PPC_FUNC_IMPL(__imp__sub_8221FBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8221FBE8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8259bb98
	ctx.lr = 0x8221FBF0;
	__savefpr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lbz r6,3(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lbz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r4,1(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// bl 0x8221ab50
	ctx.lr = 0x8221FC1C;
	sub_8221AB50(ctx, base);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lhz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,28544
	ctx.r11.s64 = ctx.r11.s64 + 28544;
	// li r5,0
	ctx.r5.s64 = 0;
	// addis r10,r11,38
	ctx.r10.s64 = ctx.r11.s64 + 2490368;
	// addis r11,r11,38
	ctx.r11.s64 = ctx.r11.s64 + 2490368;
	// addi r10,r10,-16304
	ctx.r10.s64 = ctx.r10.s64 + -16304;
	// addi r9,r11,-16320
	ctx.r9.s64 = ctx.r11.s64 + -16320;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r4,16
	ctx.r4.s64 = 16;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// addi r11,r11,-30592
	ctx.r11.s64 = ctx.r11.s64 + -30592;
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f30,f12,f13
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f29,f11,f12
	ctx.f29.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fadds f28,f0,f10
	ctx.f28.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f27,f9,f13
	ctx.f27.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f26,f8,f12
	ctx.f26.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// bl 0x8234a388
	ctx.lr = 0x8221FCB8;
	sub_8234A388(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r3,6(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// li r4,16
	ctx.r4.s64 = 16;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// bl 0x8234a388
	ctx.lr = 0x8221FCCC;
	sub_8234A388(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// bl 0x8234a388
	ctx.lr = 0x8221FCE0;
	sub_8234A388(ctx, base);
	// fsubs f13,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fsubs f12,f27,f30
	ctx.f12.f64 = double(float(ctx.f27.f64 - ctx.f30.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fsubs f11,f26,f29
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f29.f64));
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f25,f13
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f13.f64));
	// fmuls f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f24.f64));
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fadds f7,f13,f31
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f6,f30,f12
	ctx.f6.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f5,f29,f11
	ctx.f5.f64 = double(float(ctx.f29.f64 + ctx.f11.f64));
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// fmuls f4,f13,f13
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// lfs f11,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lfs f8,2864(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// fmadds f3,f0,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f2,f12,f12,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fsqrts f9,f2
	ctx.f9.f64 = double(float(sqrt(ctx.f2.f64)));
	// fdivs f10,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f7,f12,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fsqrts f9,f7
	ctx.f9.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f10,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// fmuls f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f4,f12,f10
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f13,f13
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f2,f0,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f1,f12,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fsqrts f10,f1
	ctx.f10.f64 = double(float(sqrt(ctx.f1.f64)));
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f6,f13,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// ble cr6,0x82220678
	if (!ctx.cr6.gt) goto loc_82220678;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// ble cr6,0x8222051c
	if (!ctx.cr6.gt) goto loc_8222051C;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f8
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// ble cr6,0x822203cc
	if (!ctx.cr6.gt) goto loc_822203CC;
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// fmr f9,f7
	ctx.f9.f64 = ctx.f7.f64;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmuls f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmr f5,f11
	ctx.f5.f64 = ctx.f11.f64;
	// fmuls f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f11,f10,f2
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmadds f1,f9,f0,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// fmadds f11,f8,f7,f2
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f9,f3,f0,f4
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f10,f12,f6,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fmadds f9,f12,f5,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f9.f64));
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f9,f9
	ctx.f9.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x8222011c
	if (!ctx.cr6.lt) goto loc_8222011C;
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// fmr f9,f7
	ctx.f9.f64 = ctx.f7.f64;
	// bge cr6,0x8221ffcc
	if (!ctx.cr6.lt) goto loc_8221FFCC;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f3
	ctx.f13.f64 = ctx.f3.f64;
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmsubs f4,f10,f12,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f7.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f5,f13,f0,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f8.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f3,f11,f9,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 - ctx.f6.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r7,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// std r6,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r6.u64);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f11,f11
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfd f13,-4832(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4832);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f12,-4840(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4840);
	// fmadds f0,f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f9,f10,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// frsqrte f0,f9
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f9.f64)));
	// fmul f8,f9,f0
	ctx.f8.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fmul f7,f0,f13
	ctx.f7.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f6,f8,f0,f12
	ctx.f6.f64 = -(ctx.f8.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f6,f7,f0
	ctx.f0.f64 = ctx.f6.f64 * ctx.f7.f64 + ctx.f0.f64;
	// fmul f5,f9,f0
	ctx.f5.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fmul f4,f0,f13
	ctx.f4.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f3,f5,f0,f12
	ctx.f3.f64 = -(ctx.f5.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f3,f4,f0
	ctx.f1.f64 = ctx.f3.f64 * ctx.f4.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmuls f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmsubs f1,f8,f0,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f3.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f4,f9,f11,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f2,f7,f10,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f5.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// std r4,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// b 0x822207c0
	goto loc_822207C0;
loc_8221FFCC:
	// lfs f11,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmsubs f3,f10,f12,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f4,f9,f13,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f5,f11,f0,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f8.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r3,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r3.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmuls f2,f10,f10
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,-4832(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4832);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f12,-4840(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4840);
	// fmadds f1,f11,f11,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f8,f9,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f1.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmr f11,f10
	ctx.f11.f64 = ctx.f10.f64;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f4,f8,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmsubs f2,f8,f0,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f3.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f1,f9,f7,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f4.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f10,f11,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x822207cc
	goto loc_822207CC;
loc_8222011C:
	// fcmpu cr6,f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bge cr6,0x82220278
	if (!ctx.cr6.lt) goto loc_82220278;
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmsubs f3,f0,f9,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f6.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f13,f11,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f8.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f4,f12,f10,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f7.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f10,f10
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,-4832(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4832);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f12,-4840(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4840);
	// fmadds f1,f11,f11,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f8,f9,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f1.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmr f11,f10
	ctx.f11.f64 = ctx.f10.f64;
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f10,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f3,f8,f11
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmsubs f2,f8,f0,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f4.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f1,f9,f7,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f3.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f10,f11,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r4,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// std r3,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r3.u64);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x822207cc
	goto loc_822207CC;
loc_82220278:
	// lfs f11,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmsubs f4,f9,f13,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f5,f11,f0,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f8.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f3,f10,f12,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f10,f10
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,-4832(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4832);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f12,-4840(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4840);
	// fmadds f1,f11,f11,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f8,f9,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f1.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f9,8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmr f11,f10
	ctx.f11.f64 = ctx.f10.f64;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f4,f8,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmsubs f2,f8,f0,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f3.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f1,f9,f7,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f4.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f10,f11,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r5,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x822207cc
	goto loc_822207CC;
loc_822203CC:
	// lfs f10,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmsubs f4,f9,f13,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f5,f11,f0,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f8.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f3,f10,f12,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r4,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// std r3,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r3.u64);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f10,f10
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,-4832(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4832);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f12,-4840(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4840);
	// fmadds f1,f11,f11,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f8,f9,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f1.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f9,8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmsubs f2,f7,f10,f4
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f4.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f1,f9,f8,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 - ctx.f3.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f11,f0,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f6.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x822207cc
	goto loc_822207CC;
loc_8222051C:
	// lfs f11,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f12,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmsubs f3,f13,f9,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f6.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f0,f11,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f8.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f4,f12,f10,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f7.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r7,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f10,f10
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,-4832(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4832);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f12,-4840(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4840);
	// fmadds f1,f11,f11,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f8,f9,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f1.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmsubs f2,f8,f10,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f4.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f1,f9,f7,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 - ctx.f3.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f11,f0,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f6.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r5,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
	// std r4,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r4.u64);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x822207cc
	goto loc_822207CC;
loc_82220678:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmsubs f4,f10,f12,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f7.f64));
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f5,f0,f13,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f8.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f3,f11,f9,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 - ctx.f6.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// std r9,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmuls f1,f11,f11
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfd f13,-4832(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4832);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f12,-4840(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4840);
	// fmadds f0,f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f9,f10,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// frsqrte f0,f9
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f9.f64)));
	// fmul f8,f9,f0
	ctx.f8.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fmul f7,f0,f13
	ctx.f7.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f6,f8,f0,f12
	ctx.f6.f64 = -(ctx.f8.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f6,f7,f0
	ctx.f0.f64 = ctx.f6.f64 * ctx.f7.f64 + ctx.f0.f64;
	// fmul f5,f9,f0
	ctx.f5.f64 = ctx.f9.f64 * ctx.f0.f64;
	// fmul f4,f0,f13
	ctx.f4.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f3,f5,f0,f12
	ctx.f3.f64 = -(ctx.f5.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f3,f4,f0
	ctx.f1.f64 = ctx.f3.f64 * ctx.f4.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmuls f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmsubs f1,f8,f0,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f3.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f5,f9,f11,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f2,f7,f10,f4
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f4.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f8,f9,f9,f8
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// frsqrte f0,f8
	ctx.f0.f64 = double(1.0f / sqrtf(float(ctx.f8.f64)));
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f6,f0,f13
	ctx.f6.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f5,f7,f0,f12
	ctx.f5.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f0,f5,f6,f0
	ctx.f0.f64 = ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64;
	// fmul f4,f8,f0
	ctx.f4.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f3,f0,f13
	ctx.f3.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f2,f4,f0,f12
	ctx.f2.f64 = -(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64);
	// fmadd f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f3.f64 + ctx.f0.f64;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f11,f0,f9
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
loc_822207C0:
	// stfs f11,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_822207CC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lhz r3,10(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8234a388
	ctx.lr = 0x822207DC;
	sub_8234A388(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lhz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// bl 0x8234a388
	ctx.lr = 0x822207F0;
	sub_8234A388(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// stfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lhz r3,14(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// bl 0x8234a388
	ctx.lr = 0x82220804;
	sub_8234A388(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// stfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lhz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// bl 0x8234a388
	ctx.lr = 0x82220818;
	sub_8234A388(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lhz r3,18(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// bl 0x8234a388
	ctx.lr = 0x8222082C;
	sub_8234A388(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// stfs f1,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lhz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// bl 0x8234a388
	ctx.lr = 0x82220840;
	sub_8234A388(ctx, base);
	// stfs f1,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r6,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r6.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8259bbe4
	ctx.lr = 0x82220858;
	__restfpr_24(ctx, base);
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222085C"))) PPC_WEAK_FUNC(sub_8222085C);
PPC_FUNC_IMPL(__imp__sub_8222085C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220860"))) PPC_WEAK_FUNC(sub_82220860);
PPC_FUNC_IMPL(__imp__sub_82220860) {
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
	ctx.lr = 0x82220878;
	__savefpr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,26704
	ctx.r10.s64 = ctx.r10.s64 + 26704;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f27,f2,f0
	ctx.f27.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f26,f1,f13
	ctx.f26.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// addi r10,r10,26736
	ctx.r10.s64 = ctx.r10.s64 + 26736;
	// lfs f30,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f25,f31,f12
	ctx.f25.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// lfs f28,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f24,f30,f11
	ctx.f24.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsel f0,f27,f2,f0
	ctx.f0.f64 = ctx.f27.f64 >= 0.0 ? ctx.f2.f64 : ctx.f0.f64;
	// lis r10,-32086
	ctx.r10.s64 = -2102788096;
	// fsubs f23,f29,f10
	ctx.f23.f64 = double(float(ctx.f29.f64 - ctx.f10.f64));
	// fsubs f22,f28,f9
	ctx.f22.f64 = double(float(ctx.f28.f64 - ctx.f9.f64));
	// addi r10,r10,13248
	ctx.r10.s64 = ctx.r10.s64 + 13248;
	// fsel f13,f26,f1,f13
	ctx.f13.f64 = ctx.f26.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// fsel f12,f25,f31,f12
	ctx.f12.f64 = ctx.f25.f64 >= 0.0 ? ctx.f31.f64 : ctx.f12.f64;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsel f11,f24,f30,f11
	ctx.f11.f64 = ctx.f24.f64 >= 0.0 ? ctx.f30.f64 : ctx.f11.f64;
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsel f10,f23,f29,f10
	ctx.f10.f64 = ctx.f23.f64 >= 0.0 ? ctx.f29.f64 : ctx.f10.f64;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// fsel f9,f22,f28,f9
	ctx.f9.f64 = ctx.f22.f64 >= 0.0 ? ctx.f28.f64 : ctx.f9.f64;
	// addi r10,r10,26688
	ctx.r10.s64 = ctx.r10.s64 + 26688;
	// fsubs f31,f13,f7
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsubs f30,f12,f6
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f29,f11,f5
	ctx.f29.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// lfs f3,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsel f1,f2,f8,f0
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// fsubs f28,f10,f4
	ctx.f28.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// fsubs f0,f9,f3
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fsel f31,f31,f7,f13
	ctx.f31.f64 = ctx.f31.f64 >= 0.0 ? ctx.f7.f64 : ctx.f13.f64;
	// fsel f30,f30,f6,f12
	ctx.f30.f64 = ctx.f30.f64 >= 0.0 ? ctx.f6.f64 : ctx.f12.f64;
	// fsel f29,f29,f5,f11
	ctx.f29.f64 = ctx.f29.f64 >= 0.0 ? ctx.f5.f64 : ctx.f11.f64;
	// fsel f28,f28,f4,f10
	ctx.f28.f64 = ctx.f28.f64 >= 0.0 ? ctx.f4.f64 : ctx.f10.f64;
	// fsel f27,f0,f3,f9
	ctx.f27.f64 = ctx.f0.f64 >= 0.0 ? ctx.f3.f64 : ctx.f9.f64;
	// bl 0x8234a2a8
	ctx.lr = 0x82220960;
	sub_8234A2A8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,8
	ctx.r4.s64 = 8;
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
	// bl 0x8234a2a8
	ctx.lr = 0x82220974;
	sub_8234A2A8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// sth r3,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// bl 0x8234a2a8
	ctx.lr = 0x82220988;
	sub_8234A2A8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// sth r3,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
	// bl 0x8234a2a8
	ctx.lr = 0x8222099C;
	sub_8234A2A8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// sth r3,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r3.u16);
	// bl 0x8234a2a8
	ctx.lr = 0x822209B0;
	sub_8234A2A8(ctx, base);
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r3,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r3.u16);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8234a2a8
	ctx.lr = 0x822209C4;
	sub_8234A2A8(ctx, base);
	// sth r3,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r3.u16);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// lbz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r7,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// lbz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// beq cr6,0x82220a00
	if (ctx.cr6.eq) goto loc_82220A00;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r5,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r5.u8);
	// b 0x82220a4c
	goto loc_82220A4C;
loc_82220A00:
	// lbz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82220a18
	if (ctx.cr6.eq) goto loc_82220A18;
	// li r3,27
	ctx.r3.s64 = 27;
	// stb r3,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r3.u8);
	// b 0x82220a4c
	goto loc_82220A4C;
loc_82220A18:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82220a30
	if (!ctx.cr6.eq) goto loc_82220A30;
	// li r11,24
	ctx.r11.s64 = 24;
	// stb r11,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r11.u8);
	// b 0x82220a4c
	goto loc_82220A4C;
loc_82220A30:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82220a44
	if (!ctx.cr6.eq) goto loc_82220A44;
	// li r10,25
	ctx.r10.s64 = 25;
	// stb r10,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r10.u8);
	// b 0x82220a4c
	goto loc_82220A4C;
loc_82220A44:
	// li r9,26
	ctx.r9.s64 = 26;
	// stb r9,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r9.u8);
loc_82220A4C:
	// lbz r8,21(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82220a64
	if (ctx.cr6.eq) goto loc_82220A64;
	// lbz r7,27(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// ori r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 | 32;
	// stb r6,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r6.u8);
loc_82220A64:
	// lbz r5,29(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 29);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82220a7c
	if (ctx.cr6.eq) goto loc_82220A7C;
	// lbz r4,27(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// ori r3,r4,64
	ctx.r3.u64 = ctx.r4.u64 | 64;
	// stb r3,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r3.u8);
loc_82220A7C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8259bbdc
	ctx.lr = 0x82220A88;
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

__attribute__((alias("__imp__sub_82220A9C"))) PPC_WEAK_FUNC(sub_82220A9C);
PPC_FUNC_IMPL(__imp__sub_82220A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220AA0"))) PPC_WEAK_FUNC(sub_82220AA0);
PPC_FUNC_IMPL(__imp__sub_82220AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82220AA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r29,64(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x8234a388
	ctx.lr = 0x82220AC8;
	sub_8234A388(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// lhz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// bl 0x8234a388
	ctx.lr = 0x82220ADC;
	sub_8234A388(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// stfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lhz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// bl 0x8234a388
	ctx.lr = 0x82220AF0;
	sub_8234A388(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// stfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lwz r29,68(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lhz r3,6(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// bl 0x8234a388
	ctx.lr = 0x82220B08;
	sub_8234A388(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x8234a388
	ctx.lr = 0x82220B1C;
	sub_8234A388(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// stfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lhz r3,10(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// bl 0x8234a388
	ctx.lr = 0x82220B30;
	sub_8234A388(ctx, base);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// stb r9,29(r30)
	PPC_STORE_U8(ctx.r30.u32 + 29, ctx.r9.u8);
	// lbz r5,27(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// rlwinm r4,r5,0,25,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// bne cr6,0x82220b80
	if (!ctx.cr6.eq) goto loc_82220B80;
	// stb r8,29(r30)
	PPC_STORE_U8(ctx.r30.u32 + 29, ctx.r8.u8);
	// lbz r3,27(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// andi. r11,r3,191
	ctx.r11.u64 = ctx.r3.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r11.u8);
loc_82220B80:
	// stb r9,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r9.u8);
	// lbz r10,27(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// rlwinm r7,r10,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// bne cr6,0x82220ba4
	if (!ctx.cr6.eq) goto loc_82220BA4;
	// stb r8,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r8.u8);
	// lbz r6,27(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// andi. r5,r6,223
	ctx.r5.u64 = ctx.r6.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r5,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r5.u8);
loc_82220BA4:
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stb r9,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r9.u8);
	// stb r4,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r4.u8);
	// lbz r10,27(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x82220bd4
	if (!ctx.cr6.eq) goto loc_82220BD4;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82220BD4:
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x82220be8
	if (!ctx.cr6.eq) goto loc_82220BE8;
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82220BE8:
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bne cr6,0x82220bfc
	if (!ctx.cr6.eq) goto loc_82220BFC;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82220BFC:
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bne cr6,0x82220c10
	if (!ctx.cr6.eq) goto loc_82220C10;
	// stb r8,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r8.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82220C10:
	// stb r10,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220C1C"))) PPC_WEAK_FUNC(sub_82220C1C);
PPC_FUNC_IMPL(__imp__sub_82220C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220C20"))) PPC_WEAK_FUNC(sub_82220C20);
PPC_FUNC_IMPL(__imp__sub_82220C20) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// addi r9,r9,-24576
	ctx.r9.s64 = ctx.r9.s64 + -24576;
loc_82220C34:
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82220c50
	if (ctx.cr6.eq) goto loc_82220C50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x82220c34
	if (!ctx.cr6.gt) goto loc_82220C34;
	// b 0x82220c60
	goto loc_82220C60;
loc_82220C50:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// clrlwi r4,r7,26
	ctx.r4.u64 = ctx.r7.u32 & 0x3F;
	// stb r4,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r4.u8);
loc_82220C60:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bne cr6,0x82220c98
	if (!ctx.cr6.eq) goto loc_82220C98;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r8.u8);
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// andi. r5,r7,223
	ctx.r5.u64 = ctx.r7.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stb r5,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r5.u8);
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// blr 
	return;
loc_82220C98:
	// lbz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220CA4"))) PPC_WEAK_FUNC(sub_82220CA4);
PPC_FUNC_IMPL(__imp__sub_82220CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220CA8"))) PPC_WEAK_FUNC(sub_82220CA8);
PPC_FUNC_IMPL(__imp__sub_82220CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-4760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4760);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-30576
	ctx.r11.s64 = ctx.r11.s64 + -30576;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// addi r11,r11,-30528
	ctx.r11.s64 = ctx.r11.s64 + -30528;
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// fsubs f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// addi r11,r11,13232
	ctx.r11.s64 = ctx.r11.s64 + 13232;
	// fsubs f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fsubs f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// fsubs f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26624
	ctx.r11.s64 = ctx.r11.s64 + 26624;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26672
	ctx.r11.s64 = ctx.r11.s64 + 26672;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26720
	ctx.r11.s64 = ctx.r11.s64 + 26720;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// addi r11,r11,13248
	ctx.r11.s64 = ctx.r11.s64 + 13248;
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26704
	ctx.r11.s64 = ctx.r11.s64 + 26704;
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26688
	ctx.r11.s64 = ctx.r11.s64 + 26688;
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26736
	ctx.r11.s64 = ctx.r11.s64 + 26736;
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x82219910
	sub_82219910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220DAC"))) PPC_WEAK_FUNC(sub_82220DAC);
PPC_FUNC_IMPL(__imp__sub_82220DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220DB0"))) PPC_WEAK_FUNC(sub_82220DB0);
PPC_FUNC_IMPL(__imp__sub_82220DB0) {
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
	// addi r31,r3,6
	ctx.r31.s64 = ctx.r3.s64 + 6;
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x82220dd8
	if (!ctx.cr6.eq) goto loc_82220DD8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82220DD8:
	// lbz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// clrlwi r10,r9,27
	ctx.r10.u64 = ctx.r9.u32 & 0x1F;
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// bne cr6,0x82220dec
	if (!ctx.cr6.eq) goto loc_82220DEC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82220DEC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bge cr6,0x82220e1c
	if (!ctx.cr6.lt) goto loc_82220E1C;
	// mulli r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 * 22;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// bl 0x8221f908
	ctx.lr = 0x82220E10;
	sub_8221F908(ctx, base);
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stb r7,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r7.u8);
loc_82220E1C:
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

__attribute__((alias("__imp__sub_82220E30"))) PPC_WEAK_FUNC(sub_82220E30);
PPC_FUNC_IMPL(__imp__sub_82220E30) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,19(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// beq cr6,0x82220e48
	if (ctx.cr6.eq) goto loc_82220E48;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82220E48:
	// lbz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x82220e5c
	if (!ctx.cr6.eq) goto loc_82220E5C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82220E5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r6,r7,0,25,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r6,64
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 64, ctx.xer);
	// mulli r11,r5,22
	ctx.r11.s64 = ctx.r5.s64 * 22;
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82220e88
	if (ctx.cr6.eq) goto loc_82220E88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82220E88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,-56
	ctx.r3.s64 = ctx.r3.s64 + -56;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220E9C"))) PPC_WEAK_FUNC(sub_82220E9C);
PPC_FUNC_IMPL(__imp__sub_82220E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220EA0"))) PPC_WEAK_FUNC(sub_82220EA0);
PPC_FUNC_IMPL(__imp__sub_82220EA0) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// beq cr6,0x82220ebc
	if (ctx.cr6.eq) goto loc_82220EBC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82220EBC:
	// lbz r8,19(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 19);
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bne cr6,0x82220ed0
	if (!ctx.cr6.eq) goto loc_82220ED0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82220ED0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// mulli r11,r6,22
	ctx.r11.s64 = ctx.r6.s64 * 22;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// b 0x8259d3a0
	sub_8259D3A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82220EF4"))) PPC_WEAK_FUNC(sub_82220EF4);
PPC_FUNC_IMPL(__imp__sub_82220EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82220EF8"))) PPC_WEAK_FUNC(sub_82220EF8);
PPC_FUNC_IMPL(__imp__sub_82220EF8) {
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
	// addi r30,r11,26752
	ctx.r30.s64 = ctx.r11.s64 + 26752;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82367cf0
	ctx.lr = 0x82220F24;
	sub_82367CF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82220f84
	if (ctx.cr6.eq) goto loc_82220F84;
loc_82220F30:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x82220f6c
	if (!ctx.cr6.lt) goto loc_82220F6C;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82220f6c
	if (ctx.cr6.eq) goto loc_82220F6C;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82220F6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82220F6C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,2896
	ctx.r3.s64 = ctx.r30.s64 + 2896;
	// bl 0x82367cf0
	ctx.lr = 0x82220F78;
	sub_82367CF0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82220f30
	if (!ctx.cr6.eq) goto loc_82220F30;
loc_82220F84:
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

__attribute__((alias("__imp__sub_82220FA0"))) PPC_WEAK_FUNC(sub_82220FA0);
PPC_FUNC_IMPL(__imp__sub_82220FA0) {
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
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r10,r10,26752
	ctx.r10.s64 = ctx.r10.s64 + 26752;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,2896
	ctx.r3.s64 = ctx.r10.s64 + 2896;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82367ab8
	ctx.lr = 0x82220FD0;
	sub_82367AB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220FE0"))) PPC_WEAK_FUNC(sub_82220FE0);
PPC_FUNC_IMPL(__imp__sub_82220FE0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// stwx r6,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82220FF8"))) PPC_WEAK_FUNC(sub_82220FF8);
PPC_FUNC_IMPL(__imp__sub_82220FF8) {
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
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bge cr6,0x82221038
	if (!ctx.cr6.lt) goto loc_82221038;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x82221024;
	sub_8259D3A0(ctx, base);
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
loc_82221038:
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

__attribute__((alias("__imp__sub_8222104C"))) PPC_WEAK_FUNC(sub_8222104C);
PPC_FUNC_IMPL(__imp__sub_8222104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82221050"))) PPC_WEAK_FUNC(sub_82221050);
PPC_FUNC_IMPL(__imp__sub_82221050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-24520
	ctx.r9.s64 = ctx.r11.s64 + -24520;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82221060:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r3,r8
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82221088
	if (ctx.cr6.eq) goto loc_82221088;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r7,r9,1440
	ctx.r7.s64 = ctx.r9.s64 + 1440;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82221060
	if (ctx.cr6.lt) goto loc_82221060;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82221088:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82221090"))) PPC_WEAK_FUNC(sub_82221090);
PPC_FUNC_IMPL(__imp__sub_82221090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-24520
	ctx.r11.s64 = ctx.r11.s64 + -24520;
	// ldx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822210A4"))) PPC_WEAK_FUNC(sub_822210A4);
PPC_FUNC_IMPL(__imp__sub_822210A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822210A8"))) PPC_WEAK_FUNC(sub_822210A8);
PPC_FUNC_IMPL(__imp__sub_822210A8) {
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
	// bl 0x822d62d8
	ctx.lr = 0x822210C8;
	sub_822D62D8(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// bl 0x820faf08
	ctx.lr = 0x822210D8;
	sub_820FAF08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82221100
	if (ctx.cr6.eq) goto loc_82221100;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// ld r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r7.u64);
loc_82221100:
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


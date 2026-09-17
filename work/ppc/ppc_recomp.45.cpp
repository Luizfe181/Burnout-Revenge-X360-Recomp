#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82362AA0"))) PPC_WEAK_FUNC(sub_82362AA0);
PPC_FUNC_IMPL(__imp__sub_82362AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82362AD4"))) PPC_WEAK_FUNC(sub_82362AD4);
PPC_FUNC_IMPL(__imp__sub_82362AD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362AD8"))) PPC_WEAK_FUNC(sub_82362AD8);
PPC_FUNC_IMPL(__imp__sub_82362AD8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82362B0C"))) PPC_WEAK_FUNC(sub_82362B0C);
PPC_FUNC_IMPL(__imp__sub_82362B0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362B10"))) PPC_WEAK_FUNC(sub_82362B10);
PPC_FUNC_IMPL(__imp__sub_82362B10) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82362b38
	if (ctx.cr6.eq) goto loc_82362B38;
loc_82362B20:
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x82362b40
	if (ctx.cr6.eq) goto loc_82362B40;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82362b20
	if (!ctx.cr6.eq) goto loc_82362B20;
loc_82362B38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82362B40:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362B4C"))) PPC_WEAK_FUNC(sub_82362B4C);
PPC_FUNC_IMPL(__imp__sub_82362B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362B50"))) PPC_WEAK_FUNC(sub_82362B50);
PPC_FUNC_IMPL(__imp__sub_82362B50) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82362B84"))) PPC_WEAK_FUNC(sub_82362B84);
PPC_FUNC_IMPL(__imp__sub_82362B84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362B88"))) PPC_WEAK_FUNC(sub_82362B88);
PPC_FUNC_IMPL(__imp__sub_82362B88) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82362BBC"))) PPC_WEAK_FUNC(sub_82362BBC);
PPC_FUNC_IMPL(__imp__sub_82362BBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362BC0"))) PPC_WEAK_FUNC(sub_82362BC0);
PPC_FUNC_IMPL(__imp__sub_82362BC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82362bec
	if (ctx.cr6.eq) goto loc_82362BEC;
loc_82362BD0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82362be0
	if (!ctx.cr6.eq) goto loc_82362BE0;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82362BE0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82362bd0
	if (!ctx.cr6.eq) goto loc_82362BD0;
loc_82362BEC:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x823478d8
	sub_823478D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82362BF4"))) PPC_WEAK_FUNC(sub_82362BF4);
PPC_FUNC_IMPL(__imp__sub_82362BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362BF8"))) PPC_WEAK_FUNC(sub_82362BF8);
PPC_FUNC_IMPL(__imp__sub_82362BF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x823478e8
	sub_823478E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82362C00"))) PPC_WEAK_FUNC(sub_82362C00);
PPC_FUNC_IMPL(__imp__sub_82362C00) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r3,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362C14"))) PPC_WEAK_FUNC(sub_82362C14);
PPC_FUNC_IMPL(__imp__sub_82362C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362C18"))) PPC_WEAK_FUNC(sub_82362C18);
PPC_FUNC_IMPL(__imp__sub_82362C18) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// bgt 0x82362c5c
	if (ctx.cr0.gt) goto loc_82362C5C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82362C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_82362C5C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362C70"))) PPC_WEAK_FUNC(sub_82362C70);
PPC_FUNC_IMPL(__imp__sub_82362C70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x824239d8
	sub_824239D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82362C78"))) PPC_WEAK_FUNC(sub_82362C78);
PPC_FUNC_IMPL(__imp__sub_82362C78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x824239e0
	sub_824239E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82362C80"))) PPC_WEAK_FUNC(sub_82362C80);
PPC_FUNC_IMPL(__imp__sub_82362C80) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,27124
	ctx.r11.s64 = ctx.r11.s64 + 27124;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x824239d0
	ctx.lr = 0x82362CB0;
	sub_824239D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82362cc8
	if (ctx.cr6.eq) goto loc_82362CC8;
	// bl 0x8259e7c0
	ctx.lr = 0x82362CC4;
	sub_8259E7C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82362CC8:
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

__attribute__((alias("__imp__sub_82362CE0"))) PPC_WEAK_FUNC(sub_82362CE0);
PPC_FUNC_IMPL(__imp__sub_82362CE0) {
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
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82423ea8
	ctx.lr = 0x82362D00;
	sub_82423EA8(ctx, base);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-20928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20928);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82362D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_82362D3C"))) PPC_WEAK_FUNC(sub_82362D3C);
PPC_FUNC_IMPL(__imp__sub_82362D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362D40"))) PPC_WEAK_FUNC(sub_82362D40);
PPC_FUNC_IMPL(__imp__sub_82362D40) {
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
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82362D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x824248c8
	ctx.lr = 0x82362D68;
	sub_824248C8(ctx, base);
	// bl 0x82423a28
	ctx.lr = 0x82362D6C;
	sub_82423A28(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x824240f8
	ctx.lr = 0x82362D74;
	sub_824240F8(ctx, base);
	// bl 0x82423ff0
	ctx.lr = 0x82362D78;
	sub_82423FF0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82362D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// addi r4,r11,3672
	ctx.r4.s64 = ctx.r11.s64 + 3672;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r11,r11,31636
	ctx.r11.s64 = ctx.r11.s64 + 31636;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r11,-20928(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20928, ctx.r11.u32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-20924(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20924, ctx.r11.u32);
	// bl 0x8259d2a0
	ctx.lr = 0x82362DBC;
	sub_8259D2A0(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r6,r7,32980
	ctx.r6.u64 = ctx.r7.u64 | 32980;
	// stwx r5,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82362DE0"))) PPC_WEAK_FUNC(sub_82362DE0);
PPC_FUNC_IMPL(__imp__sub_82362DE0) {
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
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82090100
	ctx.lr = 0x82362E00;
	sub_82090100(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// bl 0x8259e7c0
	ctx.lr = 0x82362E10;
	sub_8259E7C0(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// bl 0x8259e7c0
	ctx.lr = 0x82362E1C;
	sub_8259E7C0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// li r9,55
	ctx.r9.s64 = 55;
	// ori r10,r11,32980
	ctx.r10.u64 = ctx.r11.u64 | 32980;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82362E4C"))) PPC_WEAK_FUNC(sub_82362E4C);
PPC_FUNC_IMPL(__imp__sub_82362E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362E50"))) PPC_WEAK_FUNC(sub_82362E50);
PPC_FUNC_IMPL(__imp__sub_82362E50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-20924(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20924);
	// b 0x824235e8
	sub_824235E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82362E60"))) PPC_WEAK_FUNC(sub_82362E60);
PPC_FUNC_IMPL(__imp__sub_82362E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82362E68;
	__savegprlr_29(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,208
	ctx.r30.s64 = ctx.r3.s64 + 208;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d300
	ctx.lr = 0x82362E88;
	sub_8259D300(ctx, base);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,2672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2672);
	// bl 0x82362500
	ctx.lr = 0x82362EA0;
	sub_82362500(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82362EC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82362ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82362ef0
	if (!ctx.cr6.eq) goto loc_82362EF0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,27148
	ctx.r4.s64 = ctx.r11.s64 + 27148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d1b0
	ctx.lr = 0x82362EF0;
	sub_8259D1B0(ctx, base);
loc_82362EF0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82423878
	ctx.lr = 0x82362EFC;
	sub_82423878(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82423518
	ctx.lr = 0x82362F0C;
	sub_82423518(ctx, base);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stw r30,-20924(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20924, ctx.r30.u32);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82362F1C"))) PPC_WEAK_FUNC(sub_82362F1C);
PPC_FUNC_IMPL(__imp__sub_82362F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362F20"))) PPC_WEAK_FUNC(sub_82362F20);
PPC_FUNC_IMPL(__imp__sub_82362F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,32988
	ctx.r10.u64 = ctx.r11.u64 | 32988;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362F3C"))) PPC_WEAK_FUNC(sub_82362F3C);
PPC_FUNC_IMPL(__imp__sub_82362F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362F40"))) PPC_WEAK_FUNC(sub_82362F40);
PPC_FUNC_IMPL(__imp__sub_82362F40) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,193(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 193);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362F48"))) PPC_WEAK_FUNC(sub_82362F48);
PPC_FUNC_IMPL(__imp__sub_82362F48) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-29984
	ctx.r3.s64 = ctx.r3.s64 + -29984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362F54"))) PPC_WEAK_FUNC(sub_82362F54);
PPC_FUNC_IMPL(__imp__sub_82362F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362F58"))) PPC_WEAK_FUNC(sub_82362F58);
PPC_FUNC_IMPL(__imp__sub_82362F58) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-29968
	ctx.r3.s64 = ctx.r3.s64 + -29968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362F64"))) PPC_WEAK_FUNC(sub_82362F64);
PPC_FUNC_IMPL(__imp__sub_82362F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362F68"))) PPC_WEAK_FUNC(sub_82362F68);
PPC_FUNC_IMPL(__imp__sub_82362F68) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-29860
	ctx.r3.s64 = ctx.r3.s64 + -29860;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362F74"))) PPC_WEAK_FUNC(sub_82362F74);
PPC_FUNC_IMPL(__imp__sub_82362F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362F78"))) PPC_WEAK_FUNC(sub_82362F78);
PPC_FUNC_IMPL(__imp__sub_82362F78) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-29844
	ctx.r3.s64 = ctx.r3.s64 + -29844;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362F84"))) PPC_WEAK_FUNC(sub_82362F84);
PPC_FUNC_IMPL(__imp__sub_82362F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362F88"))) PPC_WEAK_FUNC(sub_82362F88);
PPC_FUNC_IMPL(__imp__sub_82362F88) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,-29836
	ctx.r3.s64 = ctx.r3.s64 + -29836;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362F9C"))) PPC_WEAK_FUNC(sub_82362F9C);
PPC_FUNC_IMPL(__imp__sub_82362F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362FA0"))) PPC_WEAK_FUNC(sub_82362FA0);
PPC_FUNC_IMPL(__imp__sub_82362FA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362FA8"))) PPC_WEAK_FUNC(sub_82362FA8);
PPC_FUNC_IMPL(__imp__sub_82362FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r3,-20931(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -20931);
	// stb r9,-20931(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20931, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362FBC"))) PPC_WEAK_FUNC(sub_82362FBC);
PPC_FUNC_IMPL(__imp__sub_82362FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362FC0"))) PPC_WEAK_FUNC(sub_82362FC0);
PPC_FUNC_IMPL(__imp__sub_82362FC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,195(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 195);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82362fe0
	if (ctx.cr6.eq) goto loc_82362FE0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,195(r11)
	PPC_STORE_U8(ctx.r11.u32 + 195, ctx.r9.u8);
	// blr 
	return;
loc_82362FE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362FE8"))) PPC_WEAK_FUNC(sub_82362FE8);
PPC_FUNC_IMPL(__imp__sub_82362FE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lbz r10,-20931(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -20931);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82363020
	if (ctx.cr6.eq) goto loc_82363020;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x8236300c
	if (!ctx.cr6.eq) goto loc_8236300C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-20931(r11)
	PPC_STORE_U8(ctx.r11.u32 + -20931, ctx.r10.u8);
	// b 0x82363028
	goto loc_82363028;
loc_8236300C:
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// ori r8,r9,32984
	ctx.r8.u64 = ctx.r9.u64 | 32984;
	// stwx r7,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r7.u32);
	// blr 
	return;
loc_82363020:
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_82363028:
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// addi r12,r12,12352
	ctx.r12.s64 = ctx.r12.s64 + 12352;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		// ERROR: 0x82363050
		return;
	case 1:
		sub_82363064(ctx, base);
		return;
	case 2:
		sub_82363078(ctx, base);
		return;
	case 3:
		sub_8236308C(ctx, base);
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82363040"))) PPC_WEAK_FUNC(sub_82363040);
PPC_FUNC_IMPL(__imp__sub_82363040) {
	PPC_FUNC_PROLOGUE();
	// lwz r17,12368(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12368);
	// lwz r17,12388(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12388);
	// lwz r17,12408(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12408);
	// lwz r17,12428(r22)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12428);
	// lis r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r6,32984
	ctx.r5.u64 = ctx.r6.u64 | 32984;
	// stwx r4,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363064"))) PPC_WEAK_FUNC(sub_82363064);
PPC_FUNC_IMPL(__imp__sub_82363064) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r10,r11,32984
	ctx.r10.u64 = ctx.r11.u64 | 32984;
	// stwx r9,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363078"))) PPC_WEAK_FUNC(sub_82363078);
PPC_FUNC_IMPL(__imp__sub_82363078) {
	PPC_FUNC_PROLOGUE();
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// ori r7,r8,32984
	ctx.r7.u64 = ctx.r8.u64 | 32984;
	// stwx r6,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236308C"))) PPC_WEAK_FUNC(sub_8236308C);
PPC_FUNC_IMPL(__imp__sub_8236308C) {
	PPC_FUNC_PROLOGUE();
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// ori r4,r5,32984
	ctx.r4.u64 = ctx.r5.u64 | 32984;
	// stwx r11,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823630A0"))) PPC_WEAK_FUNC(sub_823630A0);
PPC_FUNC_IMPL(__imp__sub_823630A0) {
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
	// li r5,4097
	ctx.r5.s64 = 4097;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82090550
	ctx.lr = 0x823630C4;
	sub_82090550(ctx, base);
	// li r5,24576
	ctx.r5.s64 = 24576;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82090550
	ctx.lr = 0x823630D4;
	sub_82090550(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,-29984
	ctx.r4.s64 = ctx.r4.s64 + -29984;
	// bl 0x82090180
	ctx.lr = 0x823630F0;
	sub_82090180(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r10,r11,32988
	ctx.r10.u64 = ctx.r11.u64 | 32988;
	// stwx r9,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82363114"))) PPC_WEAK_FUNC(sub_82363114);
PPC_FUNC_IMPL(__imp__sub_82363114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363118"))) PPC_WEAK_FUNC(sub_82363118);
PPC_FUNC_IMPL(__imp__sub_82363118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82363120;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82090550
	ctx.lr = 0x82363144;
	sub_82090550(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82363160
	if (ctx.cr6.eq) goto loc_82363160;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82090550
	ctx.lr = 0x82363160;
	sub_82090550(ctx, base);
loc_82363160:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820902c8
	ctx.lr = 0x82363170;
	sub_820902C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363178"))) PPC_WEAK_FUNC(sub_82363178);
PPC_FUNC_IMPL(__imp__sub_82363178) {
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
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82090550
	ctx.lr = 0x8236319C;
	sub_82090550(ctx, base);
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82090378
	ctx.lr = 0x823631A8;
	sub_82090378(ctx, base);
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

__attribute__((alias("__imp__sub_823631BC"))) PPC_WEAK_FUNC(sub_823631BC);
PPC_FUNC_IMPL(__imp__sub_823631BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823631C0"))) PPC_WEAK_FUNC(sub_823631C0);
PPC_FUNC_IMPL(__imp__sub_823631C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x823631C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x823631f8
	if (!ctx.cr6.eq) goto loc_823631F8;
	// li r4,1
	ctx.r4.s64 = 1;
loc_823631F8:
	// bl 0x82090550
	ctx.lr = 0x823631FC;
	sub_82090550(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r5,256
	ctx.r5.s64 = 256;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x82363218
	if (!ctx.cr6.eq) goto loc_82363218;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82363218:
	// bl 0x82090550
	ctx.lr = 0x8236321C;
	sub_82090550(ctx, base);
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r7,-29968
	ctx.r7.s64 = ctx.r7.s64 + -29968;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r5,-29836
	ctx.r5.s64 = ctx.r5.s64 + -29836;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82090270
	ctx.lr = 0x82363240;
	sub_82090270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363248"))) PPC_WEAK_FUNC(sub_82363248);
PPC_FUNC_IMPL(__imp__sub_82363248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82363250;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,4097
	ctx.r5.s64 = 4097;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82090550
	ctx.lr = 0x82363278;
	sub_82090550(ctx, base);
	// li r5,24584
	ctx.r5.s64 = 24584;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82090550
	ctx.lr = 0x82363288;
	sub_82090550(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x823632a8
	if (!ctx.cr6.eq) goto loc_823632A8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_823632A8:
	// bl 0x82090550
	ctx.lr = 0x823632AC;
	sub_82090550(ctx, base);
	// rlwinm r11,r27,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r9,r10,35668
	ctx.r9.u64 = ctx.r10.u64 | 35668;
	// addis r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 65536;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r5,-29836
	ctx.r5.s64 = ctx.r5.s64 + -29836;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x82090288
	ctx.lr = 0x823632DC;
	sub_82090288(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823632E4"))) PPC_WEAK_FUNC(sub_823632E4);
PPC_FUNC_IMPL(__imp__sub_823632E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823632E8"))) PPC_WEAK_FUNC(sub_823632E8);
PPC_FUNC_IMPL(__imp__sub_823632E8) {
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
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82090550
	ctx.lr = 0x82363314;
	sub_82090550(ctx, base);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,-29968
	ctx.r5.s64 = ctx.r5.s64 + -29968;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82090258
	ctx.lr = 0x8236332C;
	sub_82090258(ctx, base);
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

__attribute__((alias("__imp__sub_82363344"))) PPC_WEAK_FUNC(sub_82363344);
PPC_FUNC_IMPL(__imp__sub_82363344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363348"))) PPC_WEAK_FUNC(sub_82363348);
PPC_FUNC_IMPL(__imp__sub_82363348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82363350;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stb r11,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r11.u8);
	// bl 0x82090550
	ctx.lr = 0x82363378;
	sub_82090550(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x82363394
	if (!ctx.cr6.eq) goto loc_82363394;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82363394:
	// bl 0x82090550
	ctx.lr = 0x82363398;
	sub_82090550(ctx, base);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823633d8
	if (!ctx.cr6.eq) goto loc_823633D8;
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// addi r6,r6,-29848
	ctx.r6.s64 = ctx.r6.s64 + -29848;
	// addi r9,r9,-29860
	ctx.r9.s64 = ctx.r9.s64 + -29860;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// bl 0x82090490
	ctx.lr = 0x823633D0;
	sub_82090490(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_823633D8:
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82090490
	ctx.lr = 0x823633EC;
	sub_82090490(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823633F4"))) PPC_WEAK_FUNC(sub_823633F4);
PPC_FUNC_IMPL(__imp__sub_823633F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823633F8"))) PPC_WEAK_FUNC(sub_823633F8);
PPC_FUNC_IMPL(__imp__sub_823633F8) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bne cr6,0x82363430
	if (!ctx.cr6.eq) goto loc_82363430;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82090540
	ctx.lr = 0x82363424;
	sub_82090540(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82363440
	goto loc_82363440;
loc_82363430:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82090540
	ctx.lr = 0x82363438;
	sub_82090540(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82363440:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82090550
	ctx.lr = 0x82363448;
	sub_82090550(ctx, base);
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

__attribute__((alias("__imp__sub_8236345C"))) PPC_WEAK_FUNC(sub_8236345C);
PPC_FUNC_IMPL(__imp__sub_8236345C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363460"))) PPC_WEAK_FUNC(sub_82363460);
PPC_FUNC_IMPL(__imp__sub_82363460) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-32544
	ctx.r3.s64 = ctx.r3.s64 + -32544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236346C"))) PPC_WEAK_FUNC(sub_8236346C);
PPC_FUNC_IMPL(__imp__sub_8236346C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363470"))) PPC_WEAK_FUNC(sub_82363470);
PPC_FUNC_IMPL(__imp__sub_82363470) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,-30496
	ctx.r3.s64 = ctx.r3.s64 + -30496;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363484"))) PPC_WEAK_FUNC(sub_82363484);
PPC_FUNC_IMPL(__imp__sub_82363484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363488"))) PPC_WEAK_FUNC(sub_82363488);
PPC_FUNC_IMPL(__imp__sub_82363488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82363490;
	__savegprlr_25(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82090850
	ctx.lr = 0x823634AC;
	sub_82090850(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823634e0
	if (ctx.cr6.eq) goto loc_823634E0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_823634C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82090850
	ctx.lr = 0x823634CC;
	sub_82090850(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823634c0
	if (!ctx.cr6.eq) goto loc_823634C0;
	// stb r25,192(r26)
	PPC_STORE_U8(ctx.r26.u32 + 192, ctx.r25.u8);
loc_823634E0:
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,-20932(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -20932);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82363508
	if (ctx.cr6.eq) goto loc_82363508;
	// lbz r8,193(r26)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + 193);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82363508
	if (!ctx.cr6.eq) goto loc_82363508;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r11,-20932(r10)
	PPC_STORE_U8(ctx.r10.u32 + -20932, ctx.r11.u8);
loc_82363508:
	// lis r9,-32045
	ctx.r9.s64 = -2100101120;
	// lbz r7,-20931(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -20931);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82363534
	if (ctx.cr6.eq) goto loc_82363534;
	// lbz r6,193(r26)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r26.u32 + 193);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82363534
	if (ctx.cr6.eq) goto loc_82363534;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r11,-20931(r9)
	PPC_STORE_U8(ctx.r9.u32 + -20931, ctx.r11.u8);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stb r11,-20932(r10)
	PPC_STORE_U8(ctx.r10.u32 + -20932, ctx.r11.u8);
loc_82363534:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8236356c
	if (ctx.cr6.eq) goto loc_8236356C;
	// lbz r4,193(r26)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r26.u32 + 193);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236356c
	if (ctx.cr6.eq) goto loc_8236356C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// ori r9,r11,32984
	ctx.r9.u64 = ctx.r11.u64 | 32984;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwx r8,r26,r9
	PPC_STORE_U32(ctx.r26.u32 + ctx.r9.u32, ctx.r8.u32);
	// stb r11,-20932(r10)
	PPC_STORE_U8(ctx.r10.u32 + -20932, ctx.r11.u8);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8236356C:
	// addis r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 65536;
	// lhz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r11,-32544
	ctx.r11.s64 = ctx.r11.s64 + -32544;
	// addi r9,r11,2046
	ctx.r9.s64 = ctx.r11.s64 + 2046;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// bge cr6,0x823635b0
	if (!ctx.cr6.lt) goto loc_823635B0;
loc_8236358C:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823635b4
	if (ctx.cr6.eq) goto loc_823635B4;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// blt cr6,0x8236358c
	if (ctx.cr6.lt) goto loc_8236358C;
loc_823635B0:
	// sth r3,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r3.u16);
loc_823635B4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r11,35040
	ctx.r5.u64 = ctx.r11.u64 | 35040;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82363638
	if (ctx.cr6.eq) goto loc_82363638;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// add r9,r26,r5
	ctx.r9.u64 = ctx.r26.u64 + ctx.r5.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_823635D8:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r8,r9,126
	ctx.r8.s64 = ctx.r9.s64 + 126;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// lhz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r31,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r31.u16);
	// bge cr6,0x82363618
	if (!ctx.cr6.lt) goto loc_82363618;
loc_823635F4:
	// lhz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8236361c
	if (ctx.cr6.eq) goto loc_8236361C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// lhz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r31,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r31.u16);
	// blt cr6,0x823635f4
	if (ctx.cr6.lt) goto loc_823635F4;
loc_82363618:
	// sth r3,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r3.u16);
loc_8236361C:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823635d8
	if (!ctx.cr6.eq) goto loc_823635D8;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// bge cr6,0x8236365c
	if (!ctx.cr6.lt) goto loc_8236365C;
loc_82363638:
	// rlwinm r11,r4,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// subfic r11,r4,4
	ctx.xer.ca = ctx.r4.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r4.s64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
loc_82363648:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r3,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r3.u16);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82363648
	if (!ctx.cr6.eq) goto loc_82363648;
loc_8236365C:
	// stb r25,195(r26)
	PPC_STORE_U8(ctx.r26.u32 + 195, ctx.r25.u8);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363668"))) PPC_WEAK_FUNC(sub_82363668);
PPC_FUNC_IMPL(__imp__sub_82363668) {
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
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// stw r10,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stb r6,194(r11)
	PPC_STORE_U8(ctx.r11.u32 + 194, ctx.r6.u8);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// bl 0x82090400
	ctx.lr = 0x823636C0;
	sub_82090400(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823636D0"))) PPC_WEAK_FUNC(sub_823636D0);
PPC_FUNC_IMPL(__imp__sub_823636D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stb r11,194(r3)
	PPC_STORE_U8(ctx.r3.u32 + 194, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823636E4"))) PPC_WEAK_FUNC(sub_823636E4);
PPC_FUNC_IMPL(__imp__sub_823636E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823636E8"))) PPC_WEAK_FUNC(sub_823636E8);
PPC_FUNC_IMPL(__imp__sub_823636E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823636F4"))) PPC_WEAK_FUNC(sub_823636F4);
PPC_FUNC_IMPL(__imp__sub_823636F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823636F8"))) PPC_WEAK_FUNC(sub_823636F8);
PPC_FUNC_IMPL(__imp__sub_823636F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad4
	ctx.lr = 0x82363700;
	__savegprlr_19(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r19,r30
	ctx.r19.u64 = ctx.r30.u64;
	// li r25,4
	ctx.r25.s64 = 4;
	// li r26,3
	ctx.r26.s64 = 3;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,16
	ctx.r28.s64 = 16;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r23,r11,31636
	ctx.r23.s64 = ctx.r11.s64 + 31636;
	// beq cr6,0x823637f4
	if (ctx.cr6.eq) goto loc_823637F4;
	// lwz r4,184(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82363758
	if (ctx.cr6.eq) goto loc_82363758;
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bl 0x823478e8
	ctx.lr = 0x82363758;
	sub_823478E8(ctx, base);
loc_82363758:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r11,r11,27224
	ctx.r11.s64 = ctx.r11.s64 + 27224;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_823637A4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bne cr6,0x823637b4
	if (!ctx.cr6.eq) goto loc_823637B4;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_823637B4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823637a4
	if (!ctx.cr6.eq) goto loc_823637A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bl 0x823478d8
	ctx.lr = 0x823637CC;
	sub_823478D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 184, ctx.r3.u32);
	// beq cr6,0x823637f0
	if (ctx.cr6.eq) goto loc_823637F0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8259d300
	ctx.lr = 0x823637E4;
	sub_8259D300(ctx, base);
	// lwz r7,184(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// stw r7,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r7.u32);
	// b 0x823637f4
	goto loc_823637F4;
loc_823637F0:
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
loc_823637F4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x823638ac
	if (ctx.cr6.eq) goto loc_823638AC;
	// lwz r4,188(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82363810
	if (ctx.cr6.eq) goto loc_82363810;
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bl 0x823478e8
	ctx.lr = 0x82363810;
	sub_823478E8(ctx, base);
loc_82363810:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r11,r11,27196
	ctx.r11.s64 = ctx.r11.s64 + 27196;
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r22.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r6,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
loc_8236385C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x8236386c
	if (!ctx.cr6.eq) goto loc_8236386C;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8236386C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236385c
	if (!ctx.cr6.eq) goto loc_8236385C;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bl 0x823478d8
	ctx.lr = 0x82363884;
	sub_823478D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 188, ctx.r3.u32);
	// beq cr6,0x823638a8
	if (ctx.cr6.eq) goto loc_823638A8;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8259d300
	ctx.lr = 0x8236389C;
	sub_8259D300(ctx, base);
	// lwz r11,188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// b 0x823638ac
	goto loc_823638AC;
loc_823638A8:
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
loc_823638AC:
	// clrlwi r10,r19,24
	ctx.r10.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823638c4
	if (ctx.cr6.eq) goto loc_823638C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
loc_823638C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823638D4"))) PPC_WEAK_FUNC(sub_823638D4);
PPC_FUNC_IMPL(__imp__sub_823638D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823638D8"))) PPC_WEAK_FUNC(sub_823638D8);
PPC_FUNC_IMPL(__imp__sub_823638D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823638EC"))) PPC_WEAK_FUNC(sub_823638EC);
PPC_FUNC_IMPL(__imp__sub_823638EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823638F0"))) PPC_WEAK_FUNC(sub_823638F0);
PPC_FUNC_IMPL(__imp__sub_823638F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x82090550
	sub_82090550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236390C"))) PPC_WEAK_FUNC(sub_8236390C);
PPC_FUNC_IMPL(__imp__sub_8236390C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363910"))) PPC_WEAK_FUNC(sub_82363910);
PPC_FUNC_IMPL(__imp__sub_82363910) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// b 0x82090650
	sub_82090650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363918"))) PPC_WEAK_FUNC(sub_82363918);
PPC_FUNC_IMPL(__imp__sub_82363918) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// li r9,11
	ctx.r9.s64 = 11;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82363928:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82363928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82363928;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,194(r3)
	PPC_STORE_U8(ctx.r3.u32 + 194, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363948"))) PPC_WEAK_FUNC(sub_82363948);
PPC_FUNC_IMPL(__imp__sub_82363948) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stb r8,194(r11)
	PPC_STORE_U8(ctx.r11.u32 + 194, ctx.r8.u8);
	// b 0x82090550
	sub_82090550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363974"))) PPC_WEAK_FUNC(sub_82363974);
PPC_FUNC_IMPL(__imp__sub_82363974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363978"))) PPC_WEAK_FUNC(sub_82363978);
PPC_FUNC_IMPL(__imp__sub_82363978) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stb r11,194(r3)
	PPC_STORE_U8(ctx.r3.u32 + 194, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363988"))) PPC_WEAK_FUNC(sub_82363988);
PPC_FUNC_IMPL(__imp__sub_82363988) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stb r8,194(r11)
	PPC_STORE_U8(ctx.r11.u32 + 194, ctx.r8.u8);
	// b 0x82090550
	sub_82090550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823639B4"))) PPC_WEAK_FUNC(sub_823639B4);
PPC_FUNC_IMPL(__imp__sub_823639B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823639B8"))) PPC_WEAK_FUNC(sub_823639B8);
PPC_FUNC_IMPL(__imp__sub_823639B8) {
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x82090550
	ctx.lr = 0x823639E4;
	sub_82090550(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stb r10,194(r31)
	PPC_STORE_U8(ctx.r31.u32 + 194, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82363A0C"))) PPC_WEAK_FUNC(sub_82363A0C);
PPC_FUNC_IMPL(__imp__sub_82363A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363A10"))) PPC_WEAK_FUNC(sub_82363A10);
PPC_FUNC_IMPL(__imp__sub_82363A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82363A18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82090550
	ctx.lr = 0x82363A3C;
	sub_82090550(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82363a94
	if (!ctx.cr6.eq) goto loc_82363A94;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x82363a90
	if (!ctx.cr6.eq) goto loc_82363A90;
	// lbz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 196);
	// stb r26,193(r31)
	PPC_STORE_U8(ctx.r31.u32 + 193, ctx.r26.u8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82363a94
	if (!ctx.cr6.eq) goto loc_82363A94;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r8,r9,35692
	ctx.r8.u64 = ctx.r9.u64 | 35692;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,84(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// lwzx r4,r31,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82363A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82363a94
	goto loc_82363A94;
loc_82363A90:
	// stb r27,193(r31)
	PPC_STORE_U8(ctx.r31.u32 + 193, ctx.r27.u8);
loc_82363A94:
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stb r26,194(r31)
	PPC_STORE_U8(ctx.r31.u32 + 194, ctx.r26.u8);
	// stb r27,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r27.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363AB0"))) PPC_WEAK_FUNC(sub_82363AB0);
PPC_FUNC_IMPL(__imp__sub_82363AB0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,193(r3)
	PPC_STORE_U8(ctx.r3.u32 + 193, ctx.r11.u8);
	// stb r10,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363AC4"))) PPC_WEAK_FUNC(sub_82363AC4);
PPC_FUNC_IMPL(__imp__sub_82363AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363AC8"))) PPC_WEAK_FUNC(sub_82363AC8);
PPC_FUNC_IMPL(__imp__sub_82363AC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82363af8
	if (!ctx.cr6.eq) goto loc_82363AF8;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82363ae4
	if (ctx.cr6.eq) goto loc_82363AE4;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82363af8
	if (!ctx.cr6.eq) goto loc_82363AF8;
loc_82363AE4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r10,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r10.u8);
	// blr 
	return;
loc_82363AF8:
	// stb r11,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r11.u8);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363B08"))) PPC_WEAK_FUNC(sub_82363B08);
PPC_FUNC_IMPL(__imp__sub_82363B08) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stb r11,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363B18"))) PPC_WEAK_FUNC(sub_82363B18);
PPC_FUNC_IMPL(__imp__sub_82363B18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363B20"))) PPC_WEAK_FUNC(sub_82363B20);
PPC_FUNC_IMPL(__imp__sub_82363B20) {
	PPC_FUNC_PROLOGUE();
	// stw r4,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363B28"))) PPC_WEAK_FUNC(sub_82363B28);
PPC_FUNC_IMPL(__imp__sub_82363B28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363B30"))) PPC_WEAK_FUNC(sub_82363B30);
PPC_FUNC_IMPL(__imp__sub_82363B30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// b 0x82090480
	sub_82090480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363B38"))) PPC_WEAK_FUNC(sub_82363B38);
PPC_FUNC_IMPL(__imp__sub_82363B38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// b 0x82090400
	sub_82090400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363B40"))) PPC_WEAK_FUNC(sub_82363B40);
PPC_FUNC_IMPL(__imp__sub_82363B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1000
	ctx.r8.s64 = 1000;
	// twllei r3,0
	if (ctx.r3.u32 <= 0) __builtin_debugtrap();
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// stw r11,-20920(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20920, ctx.r11.u32);
	// divw r11,r8,r3
	ctx.r11.s32 = ctx.r8.s32 / ctx.r3.s32;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-22052(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22052, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,-22044(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -22044, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363B90"))) PPC_WEAK_FUNC(sub_82363B90);
PPC_FUNC_IMPL(__imp__sub_82363B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363BC0"))) PPC_WEAK_FUNC(sub_82363BC0);
PPC_FUNC_IMPL(__imp__sub_82363BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,25556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25556);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lfs f11,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,0,r7
	PPC_STORE_U32(ctx.r7.u32, ctx.f9.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363C10"))) PPC_WEAK_FUNC(sub_82363C10);
PPC_FUNC_IMPL(__imp__sub_82363C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// lwz r10,-20920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20920);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-20920(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20920, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363C24"))) PPC_WEAK_FUNC(sub_82363C24);
PPC_FUNC_IMPL(__imp__sub_82363C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363C28"))) PPC_WEAK_FUNC(sub_82363C28);
PPC_FUNC_IMPL(__imp__sub_82363C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,-22044(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22044);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f0,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,-20920(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20920);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363C7C"))) PPC_WEAK_FUNC(sub_82363C7C);
PPC_FUNC_IMPL(__imp__sub_82363C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363C80"))) PPC_WEAK_FUNC(sub_82363C80);
PPC_FUNC_IMPL(__imp__sub_82363C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-22044(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22044);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f0,2864(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,-20920(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20920);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363CE0"))) PPC_WEAK_FUNC(sub_82363CE0);
PPC_FUNC_IMPL(__imp__sub_82363CE0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363CE8"))) PPC_WEAK_FUNC(sub_82363CE8);
PPC_FUNC_IMPL(__imp__sub_82363CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82363d28
	if (ctx.cr6.eq) goto loc_82363D28;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r7,r8,r11
	ctx.r7.s32 = ctx.r8.s32 / ctx.r11.s32;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// andc r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// twlgei r5,-1
	if (ctx.r5.u32 >= 4294967295) __builtin_debugtrap();
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// b 0x82363d54
	goto loc_82363D54;
loc_82363D28:
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82363d4c
	if (!ctx.cr6.gt) goto loc_82363D4C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
loc_82363D4C:
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
loc_82363D54:
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f10,32(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363D7C"))) PPC_WEAK_FUNC(sub_82363D7C);
PPC_FUNC_IMPL(__imp__sub_82363D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363D80"))) PPC_WEAK_FUNC(sub_82363D80);
PPC_FUNC_IMPL(__imp__sub_82363D80) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x825af8e8
	ctx.lr = 0x82363DAC;
	sub_825AF8E8(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f31,-580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -580);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f9.u64);
	// bl 0x825af8e8
	ctx.lr = 0x82363DE4;
	sub_825AF8E8(ctx, base);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f8,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f30
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fctidz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f4.f64));
	// stfd f3,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.f3.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363E38"))) PPC_WEAK_FUNC(sub_82363E38);
PPC_FUNC_IMPL(__imp__sub_82363E38) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363E58"))) PPC_WEAK_FUNC(sub_82363E58);
PPC_FUNC_IMPL(__imp__sub_82363E58) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stb r5,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363E64"))) PPC_WEAK_FUNC(sub_82363E64);
PPC_FUNC_IMPL(__imp__sub_82363E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363E68"))) PPC_WEAK_FUNC(sub_82363E68);
PPC_FUNC_IMPL(__imp__sub_82363E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82363E70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x825b01b8
	ctx.lr = 0x82363E88;
	sub_825B01B8(ctx, base);
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82363ef4
	if (!ctx.cr6.eq) goto loc_82363EF4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// ble 0x82363edc
	if (!ctx.cr0.gt) goto loc_82363EDC;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ld r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// mulld r4,r7,r6
	ctx.r4.s64 = ctx.r7.s64 * ctx.r6.s64;
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// b 0x82363ef8
	goto loc_82363EF8;
loc_82363EDC:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82363EF4:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82363EF8:
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r8,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r8.u64);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// ble cr6,0x82363f3c
	if (!ctx.cr6.gt) goto loc_82363F3C;
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// tdllei r11,0
	if (ctx.r11.u64 <= 0) __builtin_debugtrap();
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// rotldi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 1);
	// divd r7,r8,r11
	ctx.r7.s64 = ctx.r8.s64 / ctx.r11.s64;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// extsw r9,r7
	ctx.r9.s64 = ctx.r7.s32;
	// andc r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// add r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 + ctx.r30.u64;
	// tdlgei r5,-1
	if (ctx.r5.u64 >= 4294967295) __builtin_debugtrap();
loc_82363F3C:
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82363f88
	if (!ctx.cr6.gt) goto loc_82363F88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82363f88
	if (ctx.cr6.eq) goto loc_82363F88;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82363f88
	if (!ctx.cr6.eq) goto loc_82363F88;
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// subf r9,r30,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r30.s64;
	// ld r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mulld r11,r7,r8
	ctx.r11.s64 = ctx.r7.s64 * ctx.r8.s64;
	// std r5,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r5.u64);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r4,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r4.u64);
loc_82363F88:
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82363f98
	if (!ctx.cr6.eq) goto loc_82363F98;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
loc_82363F98:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82363fa8
	if (!ctx.cr6.eq) goto loc_82363FA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82363FA8:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82363fec
	if (!ctx.cr6.gt) goto loc_82363FEC;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82363fec
	if (!ctx.cr6.eq) goto loc_82363FEC;
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82363fcc
	if (!ctx.cr6.lt) goto loc_82363FCC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82363FCC:
	// ld r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// mulld r10,r9,r8
	ctx.r10.s64 = ctx.r9.s64 * ctx.r8.s64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
loc_82363FEC:
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363FFC"))) PPC_WEAK_FUNC(sub_82363FFC);
PPC_FUNC_IMPL(__imp__sub_82363FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364000"))) PPC_WEAK_FUNC(sub_82364000);
PPC_FUNC_IMPL(__imp__sub_82364000) {
	PPC_FUNC_PROLOGUE();
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// ori r5,r10,34079
	ctx.r5.u64 = ctx.r10.u64 | 34079;
	// lhz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// lhz r10,10(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// lhz r8,6(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// mulhwu r4,r11,r5
	ctx.r4.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// rlwinm r5,r4,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// mulli r4,r5,100
	ctx.r4.s64 = ctx.r5.s64 * 100;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r11,r4,60
	ctx.r11.s64 = ctx.r4.s64 * 60;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236407C"))) PPC_WEAK_FUNC(sub_8236407C);
PPC_FUNC_IMPL(__imp__sub_8236407C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364080"))) PPC_WEAK_FUNC(sub_82364080);
PPC_FUNC_IMPL(__imp__sub_82364080) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r7,12828
	ctx.r7.s64 = 840695808;
	// lis r11,2882
	ctx.r11.s64 = 188874752;
	// lis r9,490
	ctx.r9.s64 = 32112640;
	// ori r6,r7,29929
	ctx.r6.u64 = ctx.r7.u64 | 29929;
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// ori r10,r11,28549
	ctx.r10.u64 = ctx.r11.u64 | 28549;
	// lis r7,-15826
	ctx.r7.s64 = -1037172736;
	// ori r8,r9,28160
	ctx.r8.u64 = ctx.r9.u64 | 28160;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r5,56960
	ctx.r9.u64 = ctx.r5.u64 | 56960;
	// ori r5,r7,17671
	ctx.r5.u64 = ctx.r7.u64 | 17671;
	// ori r7,r11,20864
	ctx.r7.u64 = ctx.r11.u64 | 20864;
	// lis r11,-28254
	ctx.r11.s64 = -1851654144;
	// ori r31,r11,46021
	ctx.r31.u64 = ctx.r11.u64 | 46021;
	// lis r11,-30584
	ctx.r11.s64 = -2004353024;
	// ori r30,r11,34953
	ctx.r30.u64 = ctx.r11.u64 | 34953;
	// mulhwu r11,r4,r10
	ctx.r11.u64 = (uint64_t(ctx.r4.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r8,r11,2000
	ctx.r8.s64 = ctx.r11.s64 + 2000;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// mulhwu r11,r10,r6
	ctx.r11.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// sth r8,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// rlwinm r8,r11,13,19,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1FFF;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mullw r4,r6,r9
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// mulhwu r8,r11,r5
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// sth r10,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r10.u16);
	// rlwinm r6,r8,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mullw r4,r5,r7
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulhwu r8,r11,r31
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r31.u32)) >> 32;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// rlwinm r7,r8,21,11,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1FFFFF;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mulli r5,r6,3600
	ctx.r5.s64 = ctx.r6.s64 * 3600;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// mulhwu r4,r11,r30
	ctx.r4.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r30.u32)) >> 32;
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mulli r8,r9,60
	ctx.r8.s64 = ctx.r9.s64 * 60;
	// sth r10,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r10.u16);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// sth r7,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r7.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364184"))) PPC_WEAK_FUNC(sub_82364184);
PPC_FUNC_IMPL(__imp__sub_82364184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364188"))) PPC_WEAK_FUNC(sub_82364188);
PPC_FUNC_IMPL(__imp__sub_82364188) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,27252
	ctx.r4.s64 = ctx.r11.s64 + 27252;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// bl 0x8259d2a0
	ctx.lr = 0x823641DC;
	sub_8259D2A0(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82364204"))) PPC_WEAK_FUNC(sub_82364204);
PPC_FUNC_IMPL(__imp__sub_82364204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364208"))) PPC_WEAK_FUNC(sub_82364208);
PPC_FUNC_IMPL(__imp__sub_82364208) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364210"))) PPC_WEAK_FUNC(sub_82364210);
PPC_FUNC_IMPL(__imp__sub_82364210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// lfs f13,26928(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26928);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32150
	ctx.r8.s64 = -2106982400;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// std r7,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r7.u64);
	// lfs f9,-12136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f9.f64 = double(temp.f32);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// lfs f10,-32512(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32512);
	ctx.f10.f64 = double(temp.f32);
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// std r6,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r6.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// lfd f12,-32(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f7,-24(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fmuls f12,f2,f10
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmuls f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f8,f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fadds f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// bge cr6,0x823642a8
	if (!ctx.cr6.lt) goto loc_823642A8;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f12,f10,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f11.f64));
loc_823642A8:
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r8,65534
	ctx.r7.u64 = ctx.r8.u64 | 65534;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823642d8
	if (!ctx.cr6.lt) goto loc_823642D8;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f7,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmadds f0,f5,f10,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f11.f64));
loc_823642D8:
	// fcmpu cr6,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// beq cr6,0x82364364
	if (ctx.cr6.eq) goto loc_82364364;
	// fsubs f4,f8,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fabs f12,f4
	ctx.f12.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fabs f11,f3
	ctx.f11.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82364330
	if (!ctx.cr6.lt) goto loc_82364330;
	// lfs f0,-32508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32508);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,-32
	ctx.r3.s64 = ctx.r1.s64 + -32;
	// fdivs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,0,r3
	PPC_STORE_U32(ctx.r3.u32, ctx.f1.u32);
	// lwz r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fnmsubs f0,f10,f0,f13
	ctx.f0.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// b 0x82364394
	goto loc_82364394;
loc_82364330:
	// lfs f13,-32508(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32508);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// fdivs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f8.u32);
	// lwz r8,-32(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fnmsubs f0,f5,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f5.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// b 0x82364394
	goto loc_82364394;
loc_82364364:
	// lfs f0,-32508(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32508);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// fdivs f4,f13,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfiwx f3,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f3.u32);
	// lwz r5,-32(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f2,-16(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fnmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
loc_82364394:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,27260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27260);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lhz r3,-10(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823643B0"))) PPC_WEAK_FUNC(sub_823643B0);
PPC_FUNC_IMPL(__imp__sub_823643B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// lfs f12,-32508(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32508);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r5,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r5.u64);
	// addi r10,r10,26932
	ctx.r10.s64 = ctx.r10.s64 + 26932;
	// lfs f8,-12136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12136);
	ctx.f8.f64 = double(temp.f32);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lfs f9,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// std r6,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r6.u64);
	// lfd f6,-24(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// lfd f0,-32(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// frsp f0,f3
	ctx.f0.f64 = double(float(ctx.f3.f64));
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// fmuls f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// lfs f10,-32512(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32512);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmadds f0,f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f9,f7,f9,f1
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f1.f64));
	// bge cr6,0x8236445c
	if (!ctx.cr6.lt) goto loc_8236445C;
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmadds f13,f6,f12,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f11.f64));
loc_8236445C:
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r6,r7,65534
	ctx.r6.u64 = ctx.r7.u64 | 65534;
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8236448c
	if (!ctx.cr6.lt) goto loc_8236448C;
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f5,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmadds f13,f3,f12,f11
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f11.f64));
loc_8236448C:
	// fcmpu cr6,f13,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// beq cr6,0x8236450c
	if (ctx.cr6.eq) goto loc_8236450C;
	// fsubs f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fabs f12,f2
	ctx.f12.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fabs f11,f1
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x823644dc
	if (!ctx.cr6.lt) goto loc_823644DC;
	// fdivs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f12,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f12.u32);
	// lwz r10,-32(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fnmsubs f0,f8,f10,f0
	ctx.f0.f64 = double(float(-(ctx.f8.f64 * ctx.f10.f64 - ctx.f0.f64)));
	// b 0x82364538
	goto loc_82364538;
loc_823644DC:
	// fdivs f7,f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f6.u32);
	// lwz r7,-32(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fnmsubs f0,f3,f10,f13
	ctx.f0.f64 = double(float(-(ctx.f3.f64 * ctx.f10.f64 - ctx.f13.f64)));
	// b 0x82364538
	goto loc_82364538;
loc_8236450C:
	// fdivs f2,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,0,r5
	PPC_STORE_U32(ctx.r5.u32, ctx.f1.u32);
	// lwz r4,-32(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f0,f11,f10,f0
	ctx.f0.f64 = double(float(-(ctx.f11.f64 * ctx.f10.f64 - ctx.f0.f64)));
loc_82364538:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-1660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1660);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lhz r3,-10(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364554"))) PPC_WEAK_FUNC(sub_82364554);
PPC_FUNC_IMPL(__imp__sub_82364554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364558"))) PPC_WEAK_FUNC(sub_82364558);
PPC_FUNC_IMPL(__imp__sub_82364558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// lfs f6,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f7,f6
	ctx.f7.f64 = ctx.f6.f64;
	// addi r11,r11,26932
	ctx.r11.s64 = ctx.r11.s64 + 26932;
	// lfs f13,-32512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32512);
	ctx.f13.f64 = double(temp.f32);
	// fmr f8,f6
	ctx.f8.f64 = ctx.f6.f64;
	// lfs f0,-32508(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32508);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x823645a0
	if (ctx.cr6.eq) goto loc_823645A0;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// b 0x823645a8
	goto loc_823645A8;
loc_823645A0:
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f0.f64;
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
loc_823645A8:
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823645bc
	if (ctx.cr6.eq) goto loc_823645BC;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
loc_823645BC:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lbz r7,-31356(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -31356);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823645dc
	if (ctx.cr6.eq) goto loc_823645DC;
	// fmr f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
loc_823645DC:
	// extsw r6,r5
	ctx.r6.s64 = ctx.r5.s32;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// addi r3,r1,-16
	ctx.r3.s64 = ctx.r1.s64 + -16;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// std r4,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r4.u64);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fmuls f1,f3,f10
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f5,-8(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fmadds f13,f2,f9,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f1.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fctiwz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,0,r3
	PPC_STORE_U32(ctx.r3.u32, ctx.f4.u32);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f3,-8(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmadds f11,f1,f0,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fsubs f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// bge cr6,0x82364688
	if (!ctx.cr6.lt) goto loc_82364688;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r6.u64);
	// lfd f10,-8(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmadds f8,f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
loc_82364688:
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r4,r5,65534
	ctx.r4.u64 = ctx.r5.u64 | 65534;
	// subf r3,r11,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823646bc
	if (!ctx.cr6.lt) goto loc_823646BC;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f7,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmadds f8,f4,f0,f12
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
loc_823646BC:
	// fcmpu cr6,f8,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f6.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fabs f13,f7
	ctx.f13.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823646DC"))) PPC_WEAK_FUNC(sub_823646DC);
PPC_FUNC_IMPL(__imp__sub_823646DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823646E0"))) PPC_WEAK_FUNC(sub_823646E0);
PPC_FUNC_IMPL(__imp__sub_823646E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// stb r9,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r9.u8);
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364708"))) PPC_WEAK_FUNC(sub_82364708);
PPC_FUNC_IMPL(__imp__sub_82364708) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r8,r8,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// ble cr6,0x82364748
	if (!ctx.cr6.gt) goto loc_82364748;
loc_8236472C:
	// lbzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// blt cr6,0x8236472c
	if (ctx.cr6.lt) goto loc_8236472C;
loc_82364748:
	// rlwinm r4,r10,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// or r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 | ctx.r11.u64;
	// andi. r8,r9,253
	ctx.r8.u64 = ctx.r9.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364768"))) PPC_WEAK_FUNC(sub_82364768);
PPC_FUNC_IMPL(__imp__sub_82364768) {
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
	// lbz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82364708
	ctx.lr = 0x82364788;
	sub_82364708(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823647a0
	if (!ctx.cr6.eq) goto loc_823647A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823647a8
	goto loc_823647A8;
loc_823647A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
loc_823647A8:
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

__attribute__((alias("__imp__sub_823647C0"))) PPC_WEAK_FUNC(sub_823647C0);
PPC_FUNC_IMPL(__imp__sub_823647C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// stw r3,-20912(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20912, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823647CC"))) PPC_WEAK_FUNC(sub_823647CC);
PPC_FUNC_IMPL(__imp__sub_823647CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823647D0"))) PPC_WEAK_FUNC(sub_823647D0);
PPC_FUNC_IMPL(__imp__sub_823647D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,-20908(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20908);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82364808
	if (!ctx.cr6.gt) goto loc_82364808;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// addi r10,r10,31392
	ctx.r10.s64 = ctx.r10.s64 + 31392;
loc_823647F0:
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82364824
	if (ctx.cr6.eq) goto loc_82364824;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823647f0
	if (ctx.cr6.lt) goto loc_823647F0;
loc_82364808:
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r11,-3
	ctx.r6.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// ble cr6,0x82364820
	if (!ctx.cr6.gt) goto loc_82364820;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82364820:
	// blr 
	return;
loc_82364824:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236482C"))) PPC_WEAK_FUNC(sub_8236482C);
PPC_FUNC_IMPL(__imp__sub_8236482C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364830"))) PPC_WEAK_FUNC(sub_82364830);
PPC_FUNC_IMPL(__imp__sub_82364830) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-32045
	ctx.r8.s64 = -2100101120;
	// lis r9,-32151
	ctx.r9.s64 = -2107047936;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,31392
	ctx.r9.s64 = ctx.r9.s64 + 31392;
	// lwz r10,-20908(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -20908);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82364868
	if (!ctx.cr6.gt) goto loc_82364868;
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
loc_82364850:
	// lbzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82364850
	if (ctx.cr6.lt) goto loc_82364850;
loc_82364868:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stbx r3,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u8);
	// stw r11,-20908(r8)
	PPC_STORE_U32(ctx.r8.u32 + -20908, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364878"))) PPC_WEAK_FUNC(sub_82364878);
PPC_FUNC_IMPL(__imp__sub_82364878) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// stb r9,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r9.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823648A8"))) PPC_WEAK_FUNC(sub_823648A8);
PPC_FUNC_IMPL(__imp__sub_823648A8) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823648C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823648E0"))) PPC_WEAK_FUNC(sub_823648E0);
PPC_FUNC_IMPL(__imp__sub_823648E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x823648E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r10,27252
	ctx.r4.s64 = ctx.r10.s64 + 27252;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x8259d2a0
	ctx.lr = 0x8236491C;
	sub_8259D2A0(ctx, base);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_8236492C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r30,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r30.u32);
	// stw r30,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r30,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r30.u32);
	// stw r30,572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 572, ctx.r30.u32);
	// stw r29,576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 576, ctx.r29.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x8236492c
	if (!ctx.cr6.eq) goto loc_8236492C;
	// stw r29,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r29.u32);
	// stb r29,1201(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1201, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82364964"))) PPC_WEAK_FUNC(sub_82364964);
PPC_FUNC_IMPL(__imp__sub_82364964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364968"))) PPC_WEAK_FUNC(sub_82364968);
PPC_FUNC_IMPL(__imp__sub_82364968) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1196, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364978"))) PPC_WEAK_FUNC(sub_82364978);
PPC_FUNC_IMPL(__imp__sub_82364978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82364980;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x823649A4;
	sub_8259D2A0(ctx, base);
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259ead8
	ctx.lr = 0x823649C4;
	sub_8259EAD8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r9,1200(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1200, ctx.r9.u8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stb r9,1201(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1201, ctx.r9.u8);
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82364A14"))) PPC_WEAK_FUNC(sub_82364A14);
PPC_FUNC_IMPL(__imp__sub_82364A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364A18"))) PPC_WEAK_FUNC(sub_82364A18);
PPC_FUNC_IMPL(__imp__sub_82364A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,1196(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lbz r7,3(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// addi r10,r3,620
	ctx.r10.s64 = ctx.r3.s64 + 620;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
loc_82364A3C:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82364a5c
	if (ctx.cr6.eq) goto loc_82364A5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82364a3c
	if (ctx.cr6.lt) goto loc_82364A3C;
	// blr 
	return;
loc_82364A5C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,636(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r3,2(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// rlwinm r9,r3,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// bne cr6,0x82364a90
	if (!ctx.cr6.eq) goto loc_82364A90;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82364A90:
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// lwz r6,12(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r7,640(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	// beq cr6,0x82364ab4
	if (ctx.cr6.eq) goto loc_82364AB4;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82364AB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82364AC0"))) PPC_WEAK_FUNC(sub_82364AC0);
PPC_FUNC_IMPL(__imp__sub_82364AC0) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,1196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// stw r4,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// stw r6,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r11,1196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 624, ctx.r5.u32);
	// stw r4,620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 620, ctx.r4.u32);
	// stw r7,628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 628, ctx.r7.u32);
	// lwz r11,1196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,632(r4)
	PPC_STORE_U32(ctx.r4.u32 + 632, ctx.r8.u32);
	// lwz r11,1196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,636(r8)
	PPC_STORE_U32(ctx.r8.u32 + 636, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,1196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,640(r4)
	PPC_STORE_U32(ctx.r4.u32 + 640, ctx.r10.u32);
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82364b68
	if (ctx.cr6.eq) goto loc_82364B68;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82364B68:
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82364b98
	if (ctx.cr6.eq) goto loc_82364B98;
	// rlwinm r4,r11,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// beq cr6,0x82364b88
	if (ctx.cr6.eq) goto loc_82364B88;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82364B88:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82364b9c
	if (!ctx.cr6.eq) goto loc_82364B9C;
loc_82364B98:
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_82364B9C:
	// lbz r4,3(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r10,-1
	ctx.r10.s64 = -1;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x82364bc4
	if (!ctx.cr6.eq) goto loc_82364BC4;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82364bd8
	if (!ctx.cr6.eq) goto loc_82364BD8;
loc_82364BC4:
	// stb r8,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r8.u8);
	// stb r9,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r9.u8);
	// stb r10,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r10.u8);
	// stb r8,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r8.u8);
	// sth r11,4(r6)
	PPC_STORE_U16(ctx.r6.u32 + 4, ctx.r11.u16);
loc_82364BD8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82364bf4
	if (ctx.cr6.eq) goto loc_82364BF4;
	// stb r8,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r8.u8);
	// stb r9,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r9.u8);
	// stb r10,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r10.u8);
	// stb r8,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r8.u8);
	// sth r11,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r11.u16);
loc_82364BF4:
	// lwz r11,1196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1196, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364C08"))) PPC_WEAK_FUNC(sub_82364C08);
PPC_FUNC_IMPL(__imp__sub_82364C08) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
loc_82364C20:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82364c44
	if (ctx.cr6.eq) goto loc_82364C44;
	// lwz r8,1196(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82364c20
	if (ctx.cr6.lt) goto loc_82364C20;
	// blr 
	return;
loc_82364C44:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,-1
	ctx.r9.s64 = -1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,628(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82364c80
	if (ctx.cr6.eq) goto loc_82364C80;
	// li r5,255
	ctx.r5.s64 = 255;
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stb r9,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r9.u8);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// sth r4,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
loc_82364C80:
	// lwz r10,1196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82364d4c
	if (!ctx.cr6.gt) goto loc_82364D4C;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,44
	ctx.r7.s64 = ctx.r11.s64 + 44;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// li r7,6
	ctx.r7.s64 = 6;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82364CB0:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82364cb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82364CB0;
	// lwz r10,1196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// addi r8,r11,620
	ctx.r8.s64 = ctx.r11.s64 + 620;
	// li r7,6
	ctx.r7.s64 = 6;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,596
	ctx.r11.s64 = ctx.r11.s64 + 596;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82364CE8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82364ce8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82364CE8;
	// lwz r11,1196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r6,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r6.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r11,1196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r6,604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 604, ctx.r6.u32);
	// stw r9,596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 596, ctx.r9.u32);
	// stw r9,600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 600, ctx.r9.u32);
	// lwz r11,1196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,1196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1196, ctx.r6.u32);
	// blr 
	return;
loc_82364D4C:
	// stw r6,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r6,628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 628, ctx.r6.u32);
	// stw r9,620(r11)
	PPC_STORE_U32(ctx.r11.u32 + 620, ctx.r9.u32);
	// stw r9,624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 624, ctx.r9.u32);
	// lwz r11,1196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,1196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1196, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364D74"))) PPC_WEAK_FUNC(sub_82364D74);
PPC_FUNC_IMPL(__imp__sub_82364D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364D78"))) PPC_WEAK_FUNC(sub_82364D78);
PPC_FUNC_IMPL(__imp__sub_82364D78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82364df0
	if (!ctx.cr6.gt) goto loc_82364DF0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// li r4,255
	ctx.r4.s64 = 255;
	// li r9,-1
	ctx.r9.s64 = -1;
	// ori r5,r10,65535
	ctx.r5.u64 = ctx.r10.u64 | 65535;
loc_82364DA0:
	// addi r6,r11,576
	ctx.r6.s64 = ctx.r11.s64 + 576;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82364dc4
	if (ctx.cr6.eq) goto loc_82364DC4;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// stb r4,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// stb r9,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r9.u8);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// sth r5,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r5.u16);
loc_82364DC4:
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r9,568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 568, ctx.r9.u32);
	// stw r9,572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 572, ctx.r9.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// lwz r6,1196(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82364da0
	if (ctx.cr6.lt) goto loc_82364DA0;
loc_82364DF0:
	// stw r8,1196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1196, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364DF8"))) PPC_WEAK_FUNC(sub_82364DF8);
PPC_FUNC_IMPL(__imp__sub_82364DF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,1196(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
loc_82364E0C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82364e2c
	if (ctx.cr6.eq) goto loc_82364E2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82364e0c
	if (ctx.cr6.lt) goto loc_82364E0C;
	// blr 
	return;
loc_82364E2C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r5,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82364E44"))) PPC_WEAK_FUNC(sub_82364E44);
PPC_FUNC_IMPL(__imp__sub_82364E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364E48"))) PPC_WEAK_FUNC(sub_82364E48);
PPC_FUNC_IMPL(__imp__sub_82364E48) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82364ea8
	if (!ctx.cr6.gt) goto loc_82364EA8;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_82364E7C:
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82364e7c
	if (!ctx.cr6.eq) goto loc_82364E7C;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bge cr6,0x82364ed4
	if (!ctx.cr6.lt) goto loc_82364ED4;
loc_82364EA8:
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// subfic r10,r3,6
	ctx.xer.ca = ctx.r3.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r3.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82364EB8:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82364eb8
	if (!ctx.cr6.eq) goto loc_82364EB8;
loc_82364ED4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r8,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r5,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// addi r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 + 148;
	// stw r7,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r7.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r9,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r9.u32);
	// stw r9,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r9.u32);
	// stw r6,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r6.u32);
loc_82364F18:
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r3,r5,-2
	ctx.r3.s64 = ctx.r5.s64 + -2;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r30,r5,1
	ctx.r30.s64 = ctx.r5.s64 + 1;
	// mullw r6,r3,r6
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r8,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r8.u16);
	// stb r10,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// stb r7,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r7.u8);
	// stb r9,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r9.u8);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r3,r5,-1
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mullw r6,r3,r6
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// sth r8,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r8.u16);
	// stb r10,42(r11)
	PPC_STORE_U8(ctx.r11.u32 + 42, ctx.r10.u8);
	// stb r7,43(r11)
	PPC_STORE_U8(ctx.r11.u32 + 43, ctx.r7.u8);
	// stb r9,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r9.u8);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mullw r6,r5,r3
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// sth r8,68(r11)
	PPC_STORE_U16(ctx.r11.u32 + 68, ctx.r8.u16);
	// stb r10,70(r11)
	PPC_STORE_U8(ctx.r11.u32 + 70, ctx.r10.u8);
	// stb r7,71(r11)
	PPC_STORE_U8(ctx.r11.u32 + 71, ctx.r7.u8);
	// stb r9,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r9.u8);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r3,r5,2
	ctx.r3.s64 = ctx.r5.s64 + 2;
	// addi r5,r5,5
	ctx.r5.s64 = ctx.r5.s64 + 5;
	// stw r6,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r6.u32);
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mullw r6,r30,r6
	ctx.r6.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r6.s32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// sth r8,96(r11)
	PPC_STORE_U16(ctx.r11.u32 + 96, ctx.r8.u16);
	// stb r10,98(r11)
	PPC_STORE_U8(ctx.r11.u32 + 98, ctx.r10.u8);
	// stb r7,99(r11)
	PPC_STORE_U8(ctx.r11.u32 + 99, ctx.r7.u8);
	// stb r9,100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 100, ctx.r9.u8);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// stw r6,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r6.u32);
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mullw r6,r3,r6
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// sth r8,124(r11)
	PPC_STORE_U16(ctx.r11.u32 + 124, ctx.r8.u16);
	// stb r10,126(r11)
	PPC_STORE_U8(ctx.r11.u32 + 126, ctx.r10.u8);
	// stb r7,127(r11)
	PPC_STORE_U8(ctx.r11.u32 + 127, ctx.r7.u8);
	// stb r9,128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 128, ctx.r9.u8);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r4,r5,-2
	ctx.r4.s64 = ctx.r5.s64 + -2;
	// cmpwi cr6,r4,50
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 50, ctx.xer);
	// stw r6,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r6.u32);
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// blt cr6,0x82364f18
	if (ctx.cr6.lt) goto loc_82364F18;
	// addi r11,r31,1680
	ctx.r11.s64 = ctx.r31.s64 + 1680;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r7,255
	ctx.r7.s64 = 255;
loc_8236504C:
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r9,-12(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12, ctx.r9.u8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stb r7,-11(r11)
	PPC_STORE_U8(ctx.r11.u32 + -11, ctx.r7.u8);
	// stb r10,-9(r11)
	PPC_STORE_U8(ctx.r11.u32 + -9, ctx.r10.u8);
	// stb r9,-10(r11)
	PPC_STORE_U8(ctx.r11.u32 + -10, ctx.r9.u8);
	// sth r8,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r8.u16);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// stb r9,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// sth r8,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stb r9,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r9.u8);
	// stb r7,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r7.u8);
	// stb r10,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r10.u8);
	// stb r9,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r9.u8);
	// sth r8,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r8.u16);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stb r9,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r9.u8);
	// stb r7,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r7.u8);
	// stb r10,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r10.u8);
	// stb r9,38(r11)
	PPC_STORE_U8(ctx.r11.u32 + 38, ctx.r9.u8);
	// sth r8,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r8.u16);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stb r9,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r9.u8);
	// stb r7,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r7.u8);
	// stb r10,55(r11)
	PPC_STORE_U8(ctx.r11.u32 + 55, ctx.r10.u8);
	// stb r9,54(r11)
	PPC_STORE_U8(ctx.r11.u32 + 54, ctx.r9.u8);
	// sth r8,56(r11)
	PPC_STORE_U16(ctx.r11.u32 + 56, ctx.r8.u16);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// bne cr6,0x8236504c
	if (!ctx.cr6.eq) goto loc_8236504C;
	// addi r11,r31,1840
	ctx.r11.s64 = ctx.r31.s64 + 1840;
	// li r6,2
	ctx.r6.s64 = 2;
loc_823650F0:
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r9,-12(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12, ctx.r9.u8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stb r7,-11(r11)
	PPC_STORE_U8(ctx.r11.u32 + -11, ctx.r7.u8);
	// stb r10,-9(r11)
	PPC_STORE_U8(ctx.r11.u32 + -9, ctx.r10.u8);
	// stb r9,-10(r11)
	PPC_STORE_U8(ctx.r11.u32 + -10, ctx.r9.u8);
	// sth r8,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r8.u16);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// stb r9,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// sth r8,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stb r9,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r9.u8);
	// stb r7,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r7.u8);
	// stb r10,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r10.u8);
	// stb r9,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r9.u8);
	// sth r8,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r8.u16);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stb r9,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r9.u8);
	// stb r7,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r7.u8);
	// stb r10,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r10.u8);
	// stb r9,38(r11)
	PPC_STORE_U8(ctx.r11.u32 + 38, ctx.r9.u8);
	// sth r8,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r8.u16);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stb r9,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r9.u8);
	// stb r7,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r7.u8);
	// stb r10,55(r11)
	PPC_STORE_U8(ctx.r11.u32 + 55, ctx.r10.u8);
	// stb r9,54(r11)
	PPC_STORE_U8(ctx.r11.u32 + 54, ctx.r9.u8);
	// sth r8,56(r11)
	PPC_STORE_U16(ctx.r11.u32 + 56, ctx.r8.u16);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// bne cr6,0x823650f0
	if (!ctx.cr6.eq) goto loc_823650F0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
	// stw r8,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r8.u32);
	// addi r3,r31,1988
	ctx.r3.s64 = ctx.r31.s64 + 1988;
	// stw r7,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r7.u32);
	// stw r6,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r6.u32);
	// stw r5,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r5.u32);
	// stw r4,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r4.u32);
	// stw r10,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r10.u32);
	// stw r10,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r10.u32);
	// stw r10,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r10.u32);
	// stw r10,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r10.u32);
	// stw r10,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r10.u32);
	// stw r10,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r10.u32);
	// stw r10,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r10.u32);
	// stw r10,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r10.u32);
	// stw r10,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r10.u32);
	// stw r10,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r10.u32);
	// stw r10,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r10.u32);
	// stw r10,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r10.u32);
	// stw r10,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r10.u32);
	// stw r10,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r10.u32);
	// stw r10,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r10.u32);
	// stw r10,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r10.u32);
	// stw r10,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r10.u32);
	// stw r10,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r10.u32);
	// stw r10,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r10.u32);
	// stw r10,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r10.u32);
	// stw r10,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r10.u32);
	// stw r10,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r10.u32);
	// stw r10,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r10.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r9.u32);
	// bl 0x82361890
	ctx.lr = 0x82365240;
	sub_82361890(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82365264"))) PPC_WEAK_FUNC(sub_82365264);
PPC_FUNC_IMPL(__imp__sub_82365264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365268"))) PPC_WEAK_FUNC(sub_82365268);
PPC_FUNC_IMPL(__imp__sub_82365268) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82365274:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r10,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82365274
	if (!ctx.cr6.eq) goto loc_82365274;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// li r8,57
	ctx.r8.s64 = 57;
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// stb r9,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r9.u8);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823652C4"))) PPC_WEAK_FUNC(sub_823652C4);
PPC_FUNC_IMPL(__imp__sub_823652C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823652C8"))) PPC_WEAK_FUNC(sub_823652C8);
PPC_FUNC_IMPL(__imp__sub_823652C8) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lbz r9,124(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 124);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82365444
	if (ctx.cr6.eq) goto loc_82365444;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// stb r11,124(r30)
	PPC_STORE_U8(ctx.r30.u32 + 124, ctx.r11.u8);
	// li r31,0
	ctx.r31.s64 = 0;
	// bne cr6,0x82365308
	if (!ctx.cr6.eq) goto loc_82365308;
	// stb r31,124(r30)
	PPC_STORE_U8(ctx.r30.u32 + 124, ctx.r31.u8);
loc_82365308:
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8236531C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r11,r30,1680
	ctx.r11.s64 = ctx.r30.s64 + 1680;
	// li r8,10
	ctx.r8.s64 = 10;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r6,255
	ctx.r6.s64 = 255;
	// ori r7,r5,65535
	ctx.r7.u64 = ctx.r5.u64 | 65535;
loc_82365334:
	// lbz r4,-12(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8236534c
	if (ctx.cr6.eq) goto loc_8236534C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8236534C:
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82365364
	if (ctx.cr6.eq) goto loc_82365364;
	// lbz r4,-12(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12);
	// rlwinm r3,r4,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r3,-12(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12, ctx.r3.u8);
loc_82365364:
	// lbz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12);
	// rlwinm r5,r10,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x8236537c
	if (ctx.cr6.eq) goto loc_8236537C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8236537C:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823653a4
	if (ctx.cr6.eq) goto loc_823653A4;
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stb r31,-12(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12, ctx.r31.u8);
	// stb r6,-11(r11)
	PPC_STORE_U8(ctx.r11.u32 + -11, ctx.r6.u8);
	// stb r9,-9(r11)
	PPC_STORE_U8(ctx.r11.u32 + -9, ctx.r9.u8);
	// stb r31,-10(r11)
	PPC_STORE_U8(ctx.r11.u32 + -10, ctx.r31.u8);
	// sth r7,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r7.u16);
loc_823653A4:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stb r31,-11(r11)
	PPC_STORE_U8(ctx.r11.u32 + -11, ctx.r31.u8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82365334
	if (!ctx.cr6.eq) goto loc_82365334;
	// addi r11,r30,1840
	ctx.r11.s64 = ctx.r30.s64 + 1840;
	// li r8,10
	ctx.r8.s64 = 10;
loc_823653C0:
	// lbz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12);
	// clrlwi r5,r10,31
	ctx.r5.u64 = ctx.r10.u32 & 0x1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x823653d8
	if (ctx.cr6.eq) goto loc_823653D8;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_823653D8:
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823653f0
	if (ctx.cr6.eq) goto loc_823653F0;
	// lbz r10,-172(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -172);
	// rlwinm r5,r10,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r5,-172(r11)
	PPC_STORE_U8(ctx.r11.u32 + -172, ctx.r5.u8);
loc_823653F0:
	// lbz r4,-12(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r3,r4,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x82365408
	if (ctx.cr6.eq) goto loc_82365408;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82365408:
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82365430
	if (ctx.cr6.eq) goto loc_82365430;
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stb r31,-12(r11)
	PPC_STORE_U8(ctx.r11.u32 + -12, ctx.r31.u8);
	// stb r6,-11(r11)
	PPC_STORE_U8(ctx.r11.u32 + -11, ctx.r6.u8);
	// stb r9,-9(r11)
	PPC_STORE_U8(ctx.r11.u32 + -9, ctx.r9.u8);
	// stb r31,-10(r11)
	PPC_STORE_U8(ctx.r11.u32 + -10, ctx.r31.u8);
	// sth r7,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r7.u16);
loc_82365430:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stb r31,-11(r11)
	PPC_STORE_U8(ctx.r11.u32 + -11, ctx.r31.u8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823653c0
	if (!ctx.cr6.eq) goto loc_823653C0;
loc_82365444:
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

__attribute__((alias("__imp__sub_8236545C"))) PPC_WEAK_FUNC(sub_8236545C);
PPC_FUNC_IMPL(__imp__sub_8236545C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365460"))) PPC_WEAK_FUNC(sub_82365460);
PPC_FUNC_IMPL(__imp__sub_82365460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82365468;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8236553c
	if (!ctx.cr6.gt) goto loc_8236553C;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// li r26,4
	ctx.r26.s64 = 4;
loc_82365490:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365528
	if (ctx.cr6.eq) goto loc_82365528;
	// addi r9,r31,1988
	ctx.r9.s64 = ctx.r31.s64 + 1988;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r9,56
	ctx.r10.s64 = ctx.r9.s64 + 56;
loc_823654AC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x823654cc
	if (ctx.cr6.eq) goto loc_823654CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x823654ac
	if (ctx.cr6.lt) goto loc_823654AC;
	// b 0x823654f0
	goto loc_823654F0;
loc_823654CC:
	// mulli r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 * 56;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r28,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r28.u32);
	// stw r26,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r26.u32);
	// stw r28,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r28.u32);
	// lwz r6,440(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 440);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823654f0
	if (!ctx.cr6.eq) goto loc_823654F0;
	// stb r29,436(r9)
	PPC_STORE_U8(ctx.r9.u32 + 436, ctx.r29.u8);
loc_823654F0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82365504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82365528:
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82365490
	if (ctx.cr6.lt) goto loc_82365490;
loc_8236553C:
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365550"))) PPC_WEAK_FUNC(sub_82365550);
PPC_FUNC_IMPL(__imp__sub_82365550) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82365568:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82365588
	if (ctx.cr6.eq) goto loc_82365588;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82365588
	if (!ctx.cr6.eq) goto loc_82365588;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r8,92(r5)
	PPC_STORE_U8(ctx.r5.u32 + 92, ctx.r8.u8);
loc_82365588:
	// lwz r4,88(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82365568
	if (ctx.cr6.lt) goto loc_82365568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823655A0"))) PPC_WEAK_FUNC(sub_823655A0);
PPC_FUNC_IMPL(__imp__sub_823655A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x823655A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8236568c
	if (!ctx.cr6.gt) goto loc_8236568C;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// addi r25,r31,92
	ctx.r25.s64 = ctx.r31.s64 + 92;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r26,4
	ctx.r26.s64 = 4;
loc_823655D4:
	// lbzx r10,r25,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82365678
	if (!ctx.cr6.eq) goto loc_82365678;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365678
	if (ctx.cr6.eq) goto loc_82365678;
	// addi r9,r31,1988
	ctx.r9.s64 = ctx.r31.s64 + 1988;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r9,56
	ctx.r10.s64 = ctx.r9.s64 + 56;
loc_823655FC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8236561c
	if (ctx.cr6.eq) goto loc_8236561C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x823655fc
	if (ctx.cr6.lt) goto loc_823655FC;
	// b 0x82365640
	goto loc_82365640;
loc_8236561C:
	// mulli r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 * 56;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r28,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r28.u32);
	// stw r26,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r26.u32);
	// stw r28,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r28.u32);
	// lwz r6,440(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 440);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82365640
	if (!ctx.cr6.eq) goto loc_82365640;
	// stb r29,436(r9)
	PPC_STORE_U8(ctx.r9.u32 + 436, ctx.r29.u8);
loc_82365640:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82365654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82365678:
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823655d4
	if (ctx.cr6.lt) goto loc_823655D4;
loc_8236568C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365694"))) PPC_WEAK_FUNC(sub_82365694);
PPC_FUNC_IMPL(__imp__sub_82365694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365698"))) PPC_WEAK_FUNC(sub_82365698);
PPC_FUNC_IMPL(__imp__sub_82365698) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823656c8
	if (!ctx.cr6.gt) goto loc_823656C8;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
loc_823656AC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823656d0
	if (ctx.cr6.eq) goto loc_823656D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823656ac
	if (ctx.cr6.lt) goto loc_823656AC;
loc_823656C8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_823656D0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823656D8"))) PPC_WEAK_FUNC(sub_823656D8);
PPC_FUNC_IMPL(__imp__sub_823656D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823656E8"))) PPC_WEAK_FUNC(sub_823656E8);
PPC_FUNC_IMPL(__imp__sub_823656E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823656F0"))) PPC_WEAK_FUNC(sub_823656F0);
PPC_FUNC_IMPL(__imp__sub_823656F0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823656F8"))) PPC_WEAK_FUNC(sub_823656F8);
PPC_FUNC_IMPL(__imp__sub_823656F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82365740
	if (ctx.cr6.eq) goto loc_82365740;
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82365740
	if (!ctx.cr6.gt) goto loc_82365740;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_82365718:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82365730
	if (ctx.cr6.eq) goto loc_82365730;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82365748
	if (ctx.cr6.eq) goto loc_82365748;
loc_82365730:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82365718
	if (ctx.cr6.lt) goto loc_82365718;
loc_82365740:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82365748:
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365758"))) PPC_WEAK_FUNC(sub_82365758);
PPC_FUNC_IMPL(__imp__sub_82365758) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365768"))) PPC_WEAK_FUNC(sub_82365768);
PPC_FUNC_IMPL(__imp__sub_82365768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82365770;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_82365788:
	// lwz r10,1540(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1540);
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r8,163(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 163);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823657c8
	if (ctx.cr6.eq) goto loc_823657C8;
	// lwz r7,156(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x823657bc
	if (ctx.cr6.eq) goto loc_823657BC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_823657BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823657f0
	if (ctx.cr6.eq) goto loc_823657F0;
loc_823657C8:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// stw r11,1540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1540, ctx.r11.u32);
	// blt cr6,0x823657dc
	if (ctx.cr6.lt) goto loc_823657DC;
	// stw r28,1540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1540, ctx.r28.u32);
loc_823657DC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,50
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 50, ctx.xer);
	// blt cr6,0x82365788
	if (ctx.cr6.lt) goto loc_82365788;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_823657F0:
	// lwz r11,1540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1540);
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823658d4
	if (ctx.cr6.eq) goto loc_823658D4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r8,r3,140
	ctx.r8.s64 = ctx.r3.s64 + 140;
loc_82365810:
	// lbz r9,23(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 23);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82365888
	if (!ctx.cr6.eq) goto loc_82365888;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r7,r27
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82365888
	if (!ctx.cr6.eq) goto loc_82365888;
	// lbz r5,22(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 22);
	// lbz r4,3(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82365888
	if (!ctx.cr6.eq) goto loc_82365888;
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8236587c
	if (!ctx.cr6.gt) goto loc_8236587C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// subf r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r29.s64;
loc_82365854:
	// lbzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82365878
	if (!ctx.cr6.eq) goto loc_82365878;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82365854
	if (ctx.cr6.lt) goto loc_82365854;
	// b 0x8236587c
	goto loc_8236587C;
loc_82365878:
	// li r7,1
	ctx.r7.s64 = 1;
loc_8236587C:
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823658d4
	if (ctx.cr6.eq) goto loc_823658D4;
loc_82365888:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,28
	ctx.r8.s64 = ctx.r8.s64 + 28;
	// cmpwi cr6,r6,50
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 50, ctx.xer);
	// blt cr6,0x82365810
	if (ctx.cr6.lt) goto loc_82365810;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x823658A8;
	sub_8259D3A0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lhz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// sth r3,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r3.u16);
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// stb r28,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r28.u8);
	// stb r28,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r28.u8);
	// stb r11,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r11.u8);
loc_823658D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823658DC"))) PPC_WEAK_FUNC(sub_823658DC);
PPC_FUNC_IMPL(__imp__sub_823658DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823658E0"))) PPC_WEAK_FUNC(sub_823658E0);
PPC_FUNC_IMPL(__imp__sub_823658E0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r11,r3,148
	ctx.r11.s64 = ctx.r3.s64 + 148;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,1540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1540, ctx.r9.u32);
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82365908:
	// lwz r5,116(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r31,r7,-2
	ctx.r31.s64 = ctx.r7.s64 + -2;
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r30,r7,1
	ctx.r30.s64 = ctx.r7.s64 + 1;
	// mullw r5,r31,r5
	ctx.r5.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r8,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r8.u16);
	// stb r10,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// stb r6,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r6.u8);
	// stb r9,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r9.u8);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r31,r7,-1
	ctx.r31.s64 = ctx.r7.s64 + -1;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r5,116(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mullw r5,r31,r5
	ctx.r5.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// sth r8,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r8.u16);
	// stb r10,42(r11)
	PPC_STORE_U8(ctx.r11.u32 + 42, ctx.r10.u8);
	// stb r6,43(r11)
	PPC_STORE_U8(ctx.r11.u32 + 43, ctx.r6.u8);
	// stb r9,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r9.u8);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// lwz r5,116(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mullw r5,r5,r7
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// sth r8,68(r11)
	PPC_STORE_U16(ctx.r11.u32 + 68, ctx.r8.u16);
	// stb r10,70(r11)
	PPC_STORE_U8(ctx.r11.u32 + 70, ctx.r10.u8);
	// stb r6,71(r11)
	PPC_STORE_U8(ctx.r11.u32 + 71, ctx.r6.u8);
	// stb r9,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r9.u8);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r5,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// lwz r5,116(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mullw r5,r30,r5
	ctx.r5.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r5.s32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// sth r8,96(r11)
	PPC_STORE_U16(ctx.r11.u32 + 96, ctx.r8.u16);
	// stb r10,98(r11)
	PPC_STORE_U8(ctx.r11.u32 + 98, ctx.r10.u8);
	// stb r6,99(r11)
	PPC_STORE_U8(ctx.r11.u32 + 99, ctx.r6.u8);
	// stb r9,100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 100, ctx.r9.u8);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r5,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r5.u32);
	// addi r5,r7,2
	ctx.r5.s64 = ctx.r7.s64 + 2;
	// lwz r31,116(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mullw r5,r5,r31
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r31.s32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// stw r9,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// sth r8,124(r11)
	PPC_STORE_U16(ctx.r11.u32 + 124, ctx.r8.u16);
	// stb r10,126(r11)
	PPC_STORE_U8(ctx.r11.u32 + 126, ctx.r10.u8);
	// stb r6,127(r11)
	PPC_STORE_U8(ctx.r11.u32 + 127, ctx.r6.u8);
	// stb r9,128(r11)
	PPC_STORE_U8(ctx.r11.u32 + 128, ctx.r9.u8);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r4,r7,-2
	ctx.r4.s64 = ctx.r7.s64 + -2;
	// cmpwi cr6,r4,50
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 50, ctx.xer);
	// stw r5,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r5.u32);
	// addi r11,r11,140
	ctx.r11.s64 = ctx.r11.s64 + 140;
	// blt cr6,0x82365908
	if (ctx.cr6.lt) goto loc_82365908;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365A3C"))) PPC_WEAK_FUNC(sub_82365A3C);
PPC_FUNC_IMPL(__imp__sub_82365A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365A40"))) PPC_WEAK_FUNC(sub_82365A40);
PPC_FUNC_IMPL(__imp__sub_82365A40) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addis r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 65536;
	// ori r9,r9,32769
	ctx.r9.u64 = ctx.r9.u64 | 32769;
	// addi r10,r10,-10801
	ctx.r10.s64 = ctx.r10.s64 + -10801;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r11,r5,10800
	ctx.r11.s64 = ctx.r5.s64 + 10800;
	// mulhw r8,r10,r8
	ctx.r8.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32)) >> 32;
	// mulhw r9,r11,r9
	ctx.r9.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srawi r9,r7,15
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 15;
	// srawi r8,r6,15
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 15;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r6,r8,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subf r7,r8,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r8.s64;
	// addi r5,r3,1548
	ctx.r5.s64 = ctx.r3.s64 + 1548;
	// li r3,10
	ctx.r3.s64 = 10;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r7,r7,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r7.s64;
	// li r6,-1
	ctx.r6.s64 = -1;
loc_82365AA8:
	// lwz r11,-4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82365b6c
	if (!ctx.cr6.eq) goto loc_82365B6C;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,21845
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21845, ctx.xer);
	// bge cr6,0x82365ae0
	if (!ctx.cr6.lt) goto loc_82365AE0;
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r31,43690
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 43690, ctx.xer);
	// ble cr6,0x82365ae0
	if (!ctx.cr6.gt) goto loc_82365AE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82365b04
	goto loc_82365B04;
loc_82365AE0:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,21845
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21845, ctx.xer);
	// bge cr6,0x82365af4
	if (!ctx.cr6.lt) goto loc_82365AF4;
	// cmplwi cr6,r11,43690
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43690, ctx.xer);
	// bgt cr6,0x82365b00
	if (ctx.cr6.gt) goto loc_82365B00;
loc_82365AF4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82365b04
	if (ctx.cr6.gt) goto loc_82365B04;
loc_82365B00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82365B04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365b60
	if (ctx.cr6.eq) goto loc_82365B60;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,21845
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21845, ctx.xer);
	// bge cr6,0x82365b30
	if (!ctx.cr6.lt) goto loc_82365B30;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r10,43690
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 43690, ctx.xer);
	// ble cr6,0x82365b30
	if (!ctx.cr6.gt) goto loc_82365B30;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82365b54
	goto loc_82365B54;
loc_82365B30:
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r10,21845
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21845, ctx.xer);
	// bge cr6,0x82365b44
	if (!ctx.cr6.lt) goto loc_82365B44;
	// cmplwi cr6,r11,43690
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43690, ctx.xer);
	// bgt cr6,0x82365b50
	if (ctx.cr6.gt) goto loc_82365B50;
loc_82365B44:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82365b54
	if (ctx.cr6.gt) goto loc_82365B54;
loc_82365B50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82365B54:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82365b6c
	if (!ctx.cr6.eq) goto loc_82365B6C;
loc_82365B60:
	// stw r6,-4(r5)
	PPC_STORE_U32(ctx.r5.u32 + -4, ctx.r6.u32);
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
loc_82365B6C:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82365aa8
	if (!ctx.cr6.eq) goto loc_82365AA8;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365B84"))) PPC_WEAK_FUNC(sub_82365B84);
PPC_FUNC_IMPL(__imp__sub_82365B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365B88"))) PPC_WEAK_FUNC(sub_82365B88);
PPC_FUNC_IMPL(__imp__sub_82365B88) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82365bd4
	if (!ctx.cr6.eq) goto loc_82365BD4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82365bc8
	if (!ctx.cr6.gt) goto loc_82365BC8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82365BAC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82365bcc
	if (ctx.cr6.eq) goto loc_82365BCC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82365bac
	if (ctx.cr6.lt) goto loc_82365BAC;
loc_82365BC8:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82365BCC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_82365BD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82365c0c
	if (!ctx.cr6.gt) goto loc_82365C0C;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_82365BE4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82365bfc
	if (ctx.cr6.eq) goto loc_82365BFC;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82365BFC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82365be4
	if (ctx.cr6.lt) goto loc_82365BE4;
loc_82365C0C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365C14"))) PPC_WEAK_FUNC(sub_82365C14);
PPC_FUNC_IMPL(__imp__sub_82365C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365C18"))) PPC_WEAK_FUNC(sub_82365C18);
PPC_FUNC_IMPL(__imp__sub_82365C18) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365c34
	if (ctx.cr6.eq) goto loc_82365C34;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
loc_82365C34:
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365C3C"))) PPC_WEAK_FUNC(sub_82365C3C);
PPC_FUNC_IMPL(__imp__sub_82365C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365C40"))) PPC_WEAK_FUNC(sub_82365C40);
PPC_FUNC_IMPL(__imp__sub_82365C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82365C48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82365cac
	if (!ctx.cr6.gt) goto loc_82365CAC;
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
loc_82365C68:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82365c98
	if (ctx.cr6.eq) goto loc_82365C98;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82365C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8259cce0
	ctx.lr = 0x82365C90;
	sub_8259CCE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82365cb8
	if (ctx.cr6.eq) goto loc_82365CB8;
loc_82365C98:
	// lwz r8,32(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82365c68
	if (ctx.cr6.lt) goto loc_82365C68;
loc_82365CAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82365CB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365CC4"))) PPC_WEAK_FUNC(sub_82365CC4);
PPC_FUNC_IMPL(__imp__sub_82365CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365CC8"))) PPC_WEAK_FUNC(sub_82365CC8);
PPC_FUNC_IMPL(__imp__sub_82365CC8) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// ble cr6,0x82365d10
	if (!ctx.cr6.gt) goto loc_82365D10;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_82365CE4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82365ce4
	if (ctx.cr6.lt) goto loc_82365CE4;
loc_82365D10:
	// addi r11,r3,92
	ctx.r11.s64 = ctx.r3.s64 + 92;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82365D20:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82365d20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82365D20;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// stb r8,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365D38"))) PPC_WEAK_FUNC(sub_82365D38);
PPC_FUNC_IMPL(__imp__sub_82365D38) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365D4C"))) PPC_WEAK_FUNC(sub_82365D4C);
PPC_FUNC_IMPL(__imp__sub_82365D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365D50"))) PPC_WEAK_FUNC(sub_82365D50);
PPC_FUNC_IMPL(__imp__sub_82365D50) {
	PPC_FUNC_PROLOGUE();
	// stw r4,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365D58"))) PPC_WEAK_FUNC(sub_82365D58);
PPC_FUNC_IMPL(__imp__sub_82365D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365D60"))) PPC_WEAK_FUNC(sub_82365D60);
PPC_FUNC_IMPL(__imp__sub_82365D60) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,6(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365D68"))) PPC_WEAK_FUNC(sub_82365D68);
PPC_FUNC_IMPL(__imp__sub_82365D68) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,1544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1544, ctx.r11.u32);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// stw r9,1548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1548, ctx.r9.u32);
	// stw r8,1552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1552, ctx.r8.u32);
	// stw r7,1556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1556, ctx.r7.u32);
	// stw r6,1560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1560, ctx.r6.u32);
	// stw r5,1564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1564, ctx.r5.u32);
	// stw r11,1568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1568, ctx.r11.u32);
	// stw r11,1572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1572, ctx.r11.u32);
	// stw r11,1576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1576, ctx.r11.u32);
	// stw r11,1580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1580, ctx.r11.u32);
	// stw r11,1584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1584, ctx.r11.u32);
	// stw r11,1588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1588, ctx.r11.u32);
	// stw r11,1592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1592, ctx.r11.u32);
	// stw r11,1596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1596, ctx.r11.u32);
	// stw r11,1600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1600, ctx.r11.u32);
	// stw r11,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
	// stw r11,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// stw r11,1612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1612, ctx.r11.u32);
	// stw r11,1616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1616, ctx.r11.u32);
	// stw r11,1620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1620, ctx.r11.u32);
	// stw r11,1624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1624, ctx.r11.u32);
	// stw r11,1628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1628, ctx.r11.u32);
	// stw r11,1632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1632, ctx.r11.u32);
	// stw r11,1636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1636, ctx.r11.u32);
	// stw r11,1640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1640, ctx.r11.u32);
	// stw r11,1644(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1644, ctx.r11.u32);
	// stw r11,1648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1648, ctx.r11.u32);
	// stw r11,1652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1652, ctx.r11.u32);
	// stw r11,1656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1656, ctx.r11.u32);
	// stw r11,1660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1660, ctx.r11.u32);
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r11.u32);
	// stw r11,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r11.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r10,1664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1664, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365E18"))) PPC_WEAK_FUNC(sub_82365E18);
PPC_FUNC_IMPL(__imp__sub_82365E18) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,1196(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82365e50
	if (!ctx.cr6.gt) goto loc_82365E50;
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
loc_82365E34:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82365e7c
	if (ctx.cr6.eq) goto loc_82365E7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82365e34
	if (ctx.cr6.lt) goto loc_82365E34;
loc_82365E50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82365E54:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r6,16
	ctx.r7.s64 = ctx.r6.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82364ac0
	sub_82364AC0(ctx, base);
	return;
loc_82365E7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82365e54
	goto loc_82365E54;
}

__attribute__((alias("__imp__sub_82365E84"))) PPC_WEAK_FUNC(sub_82365E84);
PPC_FUNC_IMPL(__imp__sub_82365E84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365E88"))) PPC_WEAK_FUNC(sub_82365E88);
PPC_FUNC_IMPL(__imp__sub_82365E88) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,1196(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82365ec4
	if (!ctx.cr6.gt) goto loc_82365EC4;
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
loc_82365EA8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82365edc
	if (ctx.cr6.eq) goto loc_82365EDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82365ea8
	if (ctx.cr6.lt) goto loc_82365EA8;
loc_82365EC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82365EC8:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82364c08
	sub_82364C08(ctx, base);
	return;
loc_82365EDC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82365ec8
	goto loc_82365EC8;
}

__attribute__((alias("__imp__sub_82365EE4"))) PPC_WEAK_FUNC(sub_82365EE4);
PPC_FUNC_IMPL(__imp__sub_82365EE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365EE8"))) PPC_WEAK_FUNC(sub_82365EE8);
PPC_FUNC_IMPL(__imp__sub_82365EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r8,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
	// stb r9,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r9.u8);
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// stb r8,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r8.u8);
	// stb r9,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r9.u8);
	// stb r10,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r10.u8);
	// sth r11,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365F44"))) PPC_WEAK_FUNC(sub_82365F44);
PPC_FUNC_IMPL(__imp__sub_82365F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365F48"))) PPC_WEAK_FUNC(sub_82365F48);
PPC_FUNC_IMPL(__imp__sub_82365F48) {
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x823656f8
	ctx.lr = 0x82365F68;
	sub_823656F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365e18
	ctx.lr = 0x82365F74;
	sub_82365E18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lis r10,32639
	ctx.r10.s64 = 2139029504;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// sth r9,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r9.u16);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// stb r11,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r11.u8);
	// stb r11,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r11.u8);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82365FD0"))) PPC_WEAK_FUNC(sub_82365FD0);
PPC_FUNC_IMPL(__imp__sub_82365FD0) {
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
	// lwz r3,32(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r4,112(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// bl 0x823656f8
	ctx.lr = 0x82365FEC;
	sub_823656F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82365e88
	ctx.lr = 0x82365FF8;
	sub_82365E88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82366008"))) PPC_WEAK_FUNC(sub_82366008);
PPC_FUNC_IMPL(__imp__sub_82366008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x82366030
	if (!ctx.cr6.lt) goto loc_82366030;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,-20895(r10)
	PPC_STORE_U8(ctx.r10.u32 + -20895, ctx.r11.u8);
	// blr 
	return;
loc_82366030:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-20895(r10)
	PPC_STORE_U8(ctx.r10.u32 + -20895, ctx.r11.u8);
	// lbz r10,85(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 85);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82366064
	if (ctx.cr6.eq) goto loc_82366064;
loc_82366044:
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lfsx f13,r7,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// blt cr6,0x82366044
	if (ctx.cr6.lt) goto loc_82366044;
loc_82366064:
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82366098
	if (!ctx.cr6.gt) goto loc_82366098;
loc_82366084:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,-20896(r10)
	PPC_STORE_U8(ctx.r10.u32 + -20896, ctx.r11.u8);
	// blr 
	return;
loc_82366098:
	// fneg f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x82366084
	if (ctx.cr6.lt) goto loc_82366084;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-20896(r10)
	PPC_STORE_U8(ctx.r10.u32 + -20896, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823660B8"))) PPC_WEAK_FUNC(sub_823660B8);
PPC_FUNC_IMPL(__imp__sub_823660B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x823660C0;
	__savegprlr_29(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f0,2864(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r8,-1
	ctx.r8.s64 = -1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// blt cr6,0x82366230
	if (ctx.cr6.lt) goto loc_82366230;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82366104:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r4,144
	ctx.r30.s64 = ctx.r4.s64 + 144;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stw r6,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r6.u32);
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r7,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// stb r8,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r8.u8);
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
	// sth r10,4(r9)
	PPC_STORE_U16(ctx.r9.u32 + 4, ctx.r10.u16);
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stb r11,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r11.u8);
	// stb r7,17(r9)
	PPC_STORE_U8(ctx.r9.u32 + 17, ctx.r7.u8);
	// stb r8,19(r9)
	PPC_STORE_U8(ctx.r9.u32 + 19, ctx.r8.u8);
	// stb r11,18(r9)
	PPC_STORE_U8(ctx.r9.u32 + 18, ctx.r11.u8);
	// sth r10,20(r9)
	PPC_STORE_U16(ctx.r9.u32 + 20, ctx.r10.u16);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r4,r4,192
	ctx.r4.s64 = ctx.r4.s64 + 192;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stw r6,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r6.u32);
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r7,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// stb r8,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r8.u8);
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
	// sth r10,4(r9)
	PPC_STORE_U16(ctx.r9.u32 + 4, ctx.r10.u16);
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stb r11,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r11.u8);
	// stb r7,17(r9)
	PPC_STORE_U8(ctx.r9.u32 + 17, ctx.r7.u8);
	// stb r8,19(r9)
	PPC_STORE_U8(ctx.r9.u32 + 19, ctx.r8.u8);
	// stb r11,18(r9)
	PPC_STORE_U8(ctx.r9.u32 + 18, ctx.r11.u8);
	// sth r10,20(r9)
	PPC_STORE_U16(ctx.r9.u32 + 20, ctx.r10.u16);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// addi r9,r9,-48
	ctx.r9.s64 = ctx.r9.s64 + -48;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stw r6,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r6.u32);
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r7,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// stb r8,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r8.u8);
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
	// sth r10,4(r9)
	PPC_STORE_U16(ctx.r9.u32 + 4, ctx.r10.u16);
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stb r11,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r11.u8);
	// stb r7,17(r9)
	PPC_STORE_U8(ctx.r9.u32 + 17, ctx.r7.u8);
	// stb r8,19(r9)
	PPC_STORE_U8(ctx.r9.u32 + 19, ctx.r8.u8);
	// stb r11,18(r9)
	PPC_STORE_U8(ctx.r9.u32 + 18, ctx.r11.u8);
	// sth r10,20(r9)
	PPC_STORE_U16(ctx.r9.u32 + 20, ctx.r10.u16);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stw r6,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r6.u32);
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r7,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// stb r8,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r8.u8);
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
	// sth r10,4(r9)
	PPC_STORE_U16(ctx.r9.u32 + 4, ctx.r10.u16);
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stb r11,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r11.u8);
	// stb r7,17(r9)
	PPC_STORE_U8(ctx.r9.u32 + 17, ctx.r7.u8);
	// stb r8,19(r9)
	PPC_STORE_U8(ctx.r9.u32 + 19, ctx.r8.u8);
	// stb r11,18(r9)
	PPC_STORE_U8(ctx.r9.u32 + 18, ctx.r11.u8);
	// sth r10,20(r9)
	PPC_STORE_U16(ctx.r9.u32 + 20, ctx.r10.u16);
	// bne cr6,0x82366104
	if (!ctx.cr6.eq) goto loc_82366104;
loc_82366230:
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8236629c
	if (!ctx.cr6.lt) goto loc_8236629C;
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r5,r29,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r29.s64;
	// add r4,r29,r9
	ctx.r4.u64 = ctx.r29.u64 + ctx.r9.u64;
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
loc_82366248:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stw r6,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r6.u32);
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r7,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// stb r8,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r8.u8);
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
	// sth r10,4(r9)
	PPC_STORE_U16(ctx.r9.u32 + 4, ctx.r10.u16);
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// stfs f0,28(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// stb r11,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r11.u8);
	// stb r7,17(r9)
	PPC_STORE_U8(ctx.r9.u32 + 17, ctx.r7.u8);
	// stb r8,19(r9)
	PPC_STORE_U8(ctx.r9.u32 + 19, ctx.r8.u8);
	// stb r11,18(r9)
	PPC_STORE_U8(ctx.r9.u32 + 18, ctx.r11.u8);
	// sth r10,20(r9)
	PPC_STORE_U16(ctx.r9.u32 + 20, ctx.r10.u16);
	// bne cr6,0x82366248
	if (!ctx.cr6.eq) goto loc_82366248;
loc_8236629C:
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823662A0"))) PPC_WEAK_FUNC(sub_823662A0);
PPC_FUNC_IMPL(__imp__sub_823662A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x823662A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82366300
	if (!ctx.cr6.gt) goto loc_82366300;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,8
	ctx.r31.s64 = 8;
loc_823662CC:
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823662e8
	if (ctx.cr6.eq) goto loc_823662E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82365e18
	ctx.lr = 0x823662E4;
	sub_82365E18(ctx, base);
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
loc_823662E8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823662cc
	if (ctx.cr6.lt) goto loc_823662CC;
loc_82366300:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366308"))) PPC_WEAK_FUNC(sub_82366308);
PPC_FUNC_IMPL(__imp__sub_82366308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82366310;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8236639c
	if (!ctx.cr6.gt) goto loc_8236639C;
	// li r30,8
	ctx.r30.s64 = 8;
loc_82366330:
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366384
	if (ctx.cr6.eq) goto loc_82366384;
	// lwz r9,1196(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1196);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8236636c
	if (!ctx.cr6.gt) goto loc_8236636C;
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
loc_82366350:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x823663a4
	if (ctx.cr6.eq) goto loc_823663A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82366350
	if (ctx.cr6.lt) goto loc_82366350;
loc_8236636C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82366370:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82366384
	if (ctx.cr6.eq) goto loc_82366384;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82364c08
	ctx.lr = 0x82366384;
	sub_82364C08(ctx, base);
loc_82366384:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82366330
	if (ctx.cr6.lt) goto loc_82366330;
loc_8236639C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_823663A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82366370
	goto loc_82366370;
}

__attribute__((alias("__imp__sub_823663AC"))) PPC_WEAK_FUNC(sub_823663AC);
PPC_FUNC_IMPL(__imp__sub_823663AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823663B0"))) PPC_WEAK_FUNC(sub_823663B0);
PPC_FUNC_IMPL(__imp__sub_823663B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x823663B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,9
	ctx.r28.s64 = 9;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,27264
	ctx.r29.s64 = ctx.r11.s64 + 27264;
loc_823663D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8259d1b0
	ctx.lr = 0x823663E8;
	sub_8259D1B0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823663F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823663f0
	if (!ctx.cr6.eq) goto loc_823663F0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82366404:
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
	// bne cr6,0x82366404
	if (!ctx.cr6.eq) goto loc_82366404;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x823663d8
	if (!ctx.cr6.eq) goto loc_823663D8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366434"))) PPC_WEAK_FUNC(sub_82366434);
PPC_FUNC_IMPL(__imp__sub_82366434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366438"))) PPC_WEAK_FUNC(sub_82366438);
PPC_FUNC_IMPL(__imp__sub_82366438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82366440;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,9
	ctx.r30.s64 = 9;
	// addi r28,r11,-20756
	ctx.r28.s64 = ctx.r11.s64 + -20756;
loc_82366458:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
loc_82366464:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82366464
	if (!ctx.cr6.eq) goto loc_82366464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8259dbe0
	ctx.lr = 0x82366484;
	sub_8259DBE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259dbd0
	ctx.lr = 0x8236648C;
	sub_8259DBD0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82366498:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82366498
	if (!ctx.cr6.eq) goto loc_82366498;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82366458
	if (!ctx.cr6.eq) goto loc_82366458;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823664D4"))) PPC_WEAK_FUNC(sub_823664D4);
PPC_FUNC_IMPL(__imp__sub_823664D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823664D8"))) PPC_WEAK_FUNC(sub_823664D8);
PPC_FUNC_IMPL(__imp__sub_823664D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x823664E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366584
	if (ctx.cr6.eq) goto loc_82366584;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r31,3
	ctx.r31.s64 = 3;
	// addi r28,r11,-20756
	ctx.r28.s64 = ctx.r11.s64 + -20756;
loc_82366504:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// subf r9,r29,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r29.s64;
loc_82366510:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82366510
	if (!ctx.cr6.eq) goto loc_82366510;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8259dbe0
	ctx.lr = 0x82366530;
	sub_8259DBE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259dbd0
	ctx.lr = 0x82366538;
	sub_8259DBD0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82366544:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82366544
	if (!ctx.cr6.eq) goto loc_82366544;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82366504
	if (!ctx.cr6.eq) goto loc_82366504;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82366584:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823665A0"))) PPC_WEAK_FUNC(sub_823665A0);
PPC_FUNC_IMPL(__imp__sub_823665A0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,-20856
	ctx.r30.s64 = ctx.r11.s64 + -20856;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r30,1304
	ctx.r3.s64 = ctx.r30.s64 + 1304;
	// bl 0x823478d8
	ctx.lr = 0x823665CC;
	sub_823478D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823665e0
	if (!ctx.cr6.eq) goto loc_823665E0;
	// addi r3,r30,1304
	ctx.r3.s64 = ctx.r30.s64 + 1304;
	// bl 0x82347900
	ctx.lr = 0x823665E0;
	sub_82347900(ctx, base);
loc_823665E0:
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

__attribute__((alias("__imp__sub_823665FC"))) PPC_WEAK_FUNC(sub_823665FC);
PPC_FUNC_IMPL(__imp__sub_823665FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366600"))) PPC_WEAK_FUNC(sub_82366600);
PPC_FUNC_IMPL(__imp__sub_82366600) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r11,r11,-20856
	ctx.r11.s64 = ctx.r11.s64 + -20856;
	// addi r3,r11,1304
	ctx.r3.s64 = ctx.r11.s64 + 1304;
	// b 0x823478e8
	sub_823478E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236661C"))) PPC_WEAK_FUNC(sub_8236661C);
PPC_FUNC_IMPL(__imp__sub_8236661C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82366620"))) PPC_WEAK_FUNC(sub_82366620);
PPC_FUNC_IMPL(__imp__sub_82366620) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,-20856
	ctx.r30.s64 = ctx.r11.s64 + -20856;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823478d8
	ctx.lr = 0x8236664C;
	sub_823478D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82366660
	if (!ctx.cr6.eq) goto loc_82366660;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82347900
	ctx.lr = 0x82366660;
	sub_82347900(ctx, base);
loc_82366660:
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

__attribute__((alias("__imp__sub_8236667C"))) PPC_WEAK_FUNC(sub_8236667C);
PPC_FUNC_IMPL(__imp__sub_8236667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366680"))) PPC_WEAK_FUNC(sub_82366680);
PPC_FUNC_IMPL(__imp__sub_82366680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-20856
	ctx.r3.s64 = ctx.r11.s64 + -20856;
	// b 0x823478e8
	sub_823478E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366690"))) PPC_WEAK_FUNC(sub_82366690);
PPC_FUNC_IMPL(__imp__sub_82366690) {
	PPC_FUNC_PROLOGUE();
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r11,26280
	ctx.r9.s64 = ctx.r11.s64 + 26280;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4560, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,4564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4564, ctx.r10.u32);
	// stw r10,4568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4568, ctx.r10.u32);
	// stw r10,4572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4572, ctx.r10.u32);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// stw r9,4644(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4644, ctx.r9.u32);
	// addi r10,r10,-22056
	ctx.r10.s64 = ctx.r10.s64 + -22056;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,4456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4456, ctx.r11.u32);
	// stw r11,4460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4460, ctx.r11.u32);
	// stw r11,4464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4464, ctx.r11.u32);
	// stw r11,4468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4468, ctx.r11.u32);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// stw r11,4648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4648, ctx.r11.u32);
	// stw r11,-22048(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22048, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r11,3660(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3660, ctx.r11.u8);
	// stb r11,4601(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4601, ctx.r11.u8);
	// stw r11,4440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4440, ctx.r11.u32);
	// stw r11,4444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4444, ctx.r11.u32);
	// lwz r9,424(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 424);
	// stw r11,4576(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4576, ctx.r11.u32);
	// stw r11,4640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4640, ctx.r11.u32);
	// stb r11,4681(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4681, ctx.r11.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82366720"))) PPC_WEAK_FUNC(sub_82366720);
PPC_FUNC_IMPL(__imp__sub_82366720) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,27497
	ctx.r10.s64 = 1802043392;
	// ori r9,r10,25451
	ctx.r9.u64 = ctx.r10.u64 | 25451;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82366770
	if (!ctx.cr6.eq) goto loc_82366770;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r11,27292
	ctx.r4.s64 = ctx.r11.s64 + 27292;
	// bl 0x82403840
	ctx.lr = 0x8236675C;
	sub_82403840(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r6,r11,3672
	ctx.r6.s64 = ctx.r11.s64 + 3672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x823667c4
	goto loc_823667C4;
loc_82366770:
	// lis r8,28261
	ctx.r8.s64 = 1852112896;
	// ori r7,r8,30579
	ctx.r7.u64 = ctx.r8.u64 | 30579;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x823667c8
	if (!ctx.cr6.eq) goto loc_823667C8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r11,27280
	ctx.r4.s64 = ctx.r11.s64 + 27280;
	// bl 0x82403840
	ctx.lr = 0x82366790;
	sub_82403840(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r31,r11,3672
	ctx.r31.s64 = ctx.r11.s64 + 3672;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82404528
	ctx.lr = 0x823667A8;
	sub_82404528(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r11,27268
	ctx.r4.s64 = ctx.r11.s64 + 27268;
	// bl 0x82403840
	ctx.lr = 0x823667B8;
	sub_82403840(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
loc_823667C4:
	// bl 0x82404528
	ctx.lr = 0x823667C8;
	sub_82404528(ctx, base);
loc_823667C8:
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

__attribute__((alias("__imp__sub_823667E0"))) PPC_WEAK_FUNC(sub_823667E0);
PPC_FUNC_IMPL(__imp__sub_823667E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x823667E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8212bb98
	ctx.lr = 0x823667F8;
	sub_8212BB98(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r11,31620
	ctx.r4.s64 = ctx.r11.s64 + 31620;
	// bl 0x82403840
	ctx.lr = 0x82366808;
	sub_82403840(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r30,r11,3672
	ctx.r30.s64 = ctx.r11.s64 + 3672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82404528
	ctx.lr = 0x82366820;
	sub_82404528(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r11,27300
	ctx.r4.s64 = ctx.r11.s64 + 27300;
	// bl 0x82403840
	ctx.lr = 0x82366830;
	sub_82403840(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lis r30,-32045
	ctx.r30.s64 = -2100101120;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// lwz r4,-22048(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22048);
	// bl 0x82404528
	ctx.lr = 0x82366844;
	sub_82404528(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// rlwinm r9,r11,0,10,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82366860
	if (ctx.cr6.eq) goto loc_82366860;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82366860:
	// rlwinm r9,r11,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82366950
	if (ctx.cr6.eq) goto loc_82366950;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82366950
	if (!ctx.cr6.eq) goto loc_82366950;
	// lis r27,-32045
	ctx.r27.s64 = -2100101120;
	// lwz r10,-20952(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -20952);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bge cr6,0x82366950
	if (!ctx.cr6.lt) goto loc_82366950;
	// lwz r11,-22048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22048);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// subf r9,r11,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r11.s64;
loc_82366894:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82366894
	if (!ctx.cr6.eq) goto loc_82366894;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r28,r11,-20756
	ctx.r28.s64 = ctx.r11.s64 + -20756;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8259dbe0
	ctx.lr = 0x823668BC;
	sub_8259DBE0(ctx, base);
	// bl 0x8259dbd0
	ctx.lr = 0x823668C0;
	sub_8259DBD0(ctx, base);
	// lis r10,-32045
	ctx.r10.s64 = -2100101120;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,-22040
	ctx.r31.s64 = ctx.r10.s64 + -22040;
	// lwz r10,-20952(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -20952);
	// li r3,0
	ctx.r3.s64 = 0;
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8259dbe0
	ctx.lr = 0x823668E4;
	sub_8259DBE0(ctx, base);
	// bl 0x8259dbd0
	ctx.lr = 0x823668E8;
	sub_8259DBD0(ctx, base);
	// lwz r11,-20952(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -20952);
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// mulli r10,r11,136
	ctx.r10.s64 = ctx.r11.s64 * 136;
	// stwx r3,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r3.u32);
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x82366940
	if (!ctx.cr6.gt) goto loc_82366940;
loc_8236690C:
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8259dbe0
	ctx.lr = 0x82366918;
	sub_8259DBE0(ctx, base);
	// bl 0x8259dbd0
	ctx.lr = 0x8236691C;
	sub_8259DBD0(ctx, base);
	// lwz r11,-20952(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -20952);
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// stb r3,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r3.u8);
	// mulli r7,r11,136
	ctx.r7.s64 = ctx.r11.s64 * 136;
	// lwzx r4,r7,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8236690c
	if (ctx.cr6.lt) goto loc_8236690C;
loc_82366940:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-20952(r27)
	PPC_STORE_U32(ctx.r27.u32 + -20952, ctx.r11.u32);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82366950:
	// rlwinm r3,r11,0,2,2
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236696c
	if (ctx.cr6.eq) goto loc_8236696C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4672(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4672, ctx.r11.u8);
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8236696C:
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823669a4
	if (ctx.cr6.eq) goto loc_823669A4;
	// lbz r10,3337(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3337);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82366998
	if (ctx.cr6.eq) goto loc_82366998;
	// rlwinm r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823669d8
	if (!ctx.cr6.eq) goto loc_823669D8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823669f8
	if (!ctx.cr6.eq) goto loc_823669F8;
loc_82366998:
	// rlwinm r8,r11,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// b 0x823669d4
	goto loc_823669D4;
loc_823669A4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823669f8
	if (!ctx.cr6.eq) goto loc_823669F8;
	// lbz r10,3337(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3337);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823669cc
	if (ctx.cr6.eq) goto loc_823669CC;
	// rlwinm r7,r11,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823669d8
	if (!ctx.cr6.eq) goto loc_823669D8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823669f8
	if (!ctx.cr6.eq) goto loc_823669F8;
loc_823669CC:
	// rlwinm r6,r11,0,24,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
loc_823669D4:
	// bne cr6,0x823669f8
	if (!ctx.cr6.eq) goto loc_823669F8;
loc_823669D8:
	// lwz r11,4552(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823669f8
	if (ctx.cr6.eq) goto loc_823669F8;
	// lwz r4,-22048(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22048);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4556(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823669F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823669F8:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366A00"))) PPC_WEAK_FUNC(sub_82366A00);
PPC_FUNC_IMPL(__imp__sub_82366A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82366A08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d300
	ctx.lr = 0x82366A28;
	sub_8259D300(ctx, base);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// mulli r10,r31,1304
	ctx.r10.s64 = ctx.r31.s64 * 1304;
	// addi r11,r11,-20856
	ctx.r11.s64 = ctx.r11.s64 + -20856;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82347808
	ctx.lr = 0x82366A44;
	sub_82347808(ctx, base);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-22056
	ctx.r11.s64 = ctx.r11.s64 + -22056;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366A5C"))) PPC_WEAK_FUNC(sub_82366A5C);
PPC_FUNC_IMPL(__imp__sub_82366A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366A60"))) PPC_WEAK_FUNC(sub_82366A60);
PPC_FUNC_IMPL(__imp__sub_82366A60) {
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
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// mulli r10,r31,1304
	ctx.r10.s64 = ctx.r31.s64 * 1304;
	// addi r11,r11,-20856
	ctx.r11.s64 = ctx.r11.s64 + -20856;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82347860
	ctx.lr = 0x82366A88;
	sub_82347860(ctx, base);
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22056
	ctx.r11.s64 = ctx.r11.s64 + -22056;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82366AAC"))) PPC_WEAK_FUNC(sub_82366AAC);
PPC_FUNC_IMPL(__imp__sub_82366AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366AB0"))) PPC_WEAK_FUNC(sub_82366AB0);
PPC_FUNC_IMPL(__imp__sub_82366AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// addi r11,r11,-22056
	ctx.r11.s64 = ctx.r11.s64 + -22056;
	// lbzx r3,r4,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82366AC0"))) PPC_WEAK_FUNC(sub_82366AC0);
PPC_FUNC_IMPL(__imp__sub_82366AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82366AC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r10,556(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 556);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82366af4
	if (!ctx.cr6.eq) goto loc_82366AF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,3364(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3364, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82366AF4:
	// lbz r27,4674(r29)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4674);
	// addi r30,r29,3368
	ctx.r30.s64 = ctx.r29.s64 + 3368;
	// addi r31,r29,668
	ctx.r31.s64 = ctx.r29.s64 + 668;
	// stb r11,4674(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4674, ctx.r11.u8);
	// li r28,8
	ctx.r28.s64 = 8;
loc_82366B08:
	// lwz r9,-104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -104);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82366b5c
	if (ctx.cr6.eq) goto loc_82366B5C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82366B1C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82366b40
	if (ctx.cr6.eq) goto loc_82366B40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82366b1c
	if (ctx.cr6.eq) goto loc_82366B1C;
loc_82366B40:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82366b5c
	if (ctx.cr6.eq) goto loc_82366B5C;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d2a0
	ctx.lr = 0x82366B58;
	sub_8259D2A0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_82366B5C:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82366b08
	if (!ctx.cr6.eq) goto loc_82366B08;
	// lwz r11,556(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 556);
	// lwz r6,3364(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3364);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82366bcc
	if (!ctx.cr6.eq) goto loc_82366BCC;
	// clrlwi r5,r27,24
	ctx.r5.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82366bcc
	if (!ctx.cr6.eq) goto loc_82366BCC;
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82366bc0
	if (ctx.cr6.eq) goto loc_82366BC0;
	// lwz r4,4420(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4420);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r11,4416(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4416);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82366BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82366BC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82366BCC:
	// lwz r4,4420(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4420);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r10,4416(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4416);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,3364(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3364, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82366BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366BF8"))) PPC_WEAK_FUNC(sub_82366BF8);
PPC_FUNC_IMPL(__imp__sub_82366BF8) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r30,-32045
	ctx.r30.s64 = -2100101120;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,-21136
	ctx.r5.s64 = ctx.r11.s64 + -21136;
	// stb r10,3339(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3339, ctx.r10.u8);
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// lwz r11,-22048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22048);
	// li r4,4096
	ctx.r4.s64 = 4096;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lwz r3,-22048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22048);
	// bl 0x82405fe0
	ctx.lr = 0x82366C40;
	sub_82405FE0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,-22048(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22048);
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r6,r11,-26172
	ctx.r6.s64 = ctx.r11.s64 + -26172;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,-23336
	ctx.r5.s64 = ctx.r11.s64 + -23336;
	// bl 0x82405fe0
	ctx.lr = 0x82366C5C;
	sub_82405FE0(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,-22048(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22048);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,456(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 456);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82366C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,2
	ctx.r3.s64 = 2;
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

__attribute__((alias("__imp__sub_82366C90"))) PPC_WEAK_FUNC(sub_82366C90);
PPC_FUNC_IMPL(__imp__sub_82366C90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82366ca8
	if (ctx.cr6.eq) goto loc_82366CA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82366CA8:
	// lbz r9,17(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82366cc8
	if (ctx.cr6.eq) goto loc_82366CC8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stb r10,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// blr 
	return;
loc_82366CC8:
	// lbz r8,18(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82366cdc
	if (ctx.cr6.eq) goto loc_82366CDC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82366CDC:
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82366CF4"))) PPC_WEAK_FUNC(sub_82366CF4);
PPC_FUNC_IMPL(__imp__sub_82366CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366CF8"))) PPC_WEAK_FUNC(sub_82366CF8);
PPC_FUNC_IMPL(__imp__sub_82366CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82366D00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,3337(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3337);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366df8
	if (ctx.cr6.eq) goto loc_82366DF8;
	// lbz r10,3338(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3338);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82366df8
	if (ctx.cr6.eq) goto loc_82366DF8;
	// lbz r9,3339(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3339);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82366df8
	if (!ctx.cr6.eq) goto loc_82366DF8;
	// lwz r8,556(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82366d80
	if (!ctx.cr6.gt) goto loc_82366D80;
	// addi r30,r31,568
	ctx.r30.s64 = ctx.r31.s64 + 568;
loc_82366D48:
	// clrlwi r7,r28,24
	ctx.r7.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82366d80
	if (!ctx.cr6.eq) goto loc_82366D80;
	// addi r4,r31,4248
	ctx.r4.s64 = ctx.r31.s64 + 4248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824065f0
	ctx.lr = 0x82366D60;
	sub_824065F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82366d6c
	if (!ctx.cr6.eq) goto loc_82366D6C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82366D6C:
	// lwz r6,556(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82366d48
	if (ctx.cr6.lt) goto loc_82366D48;
loc_82366D80:
	// clrlwi r5,r28,24
	ctx.r5.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82366df8
	if (!ctx.cr6.eq) goto loc_82366DF8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lbz r3,4672(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4672);
	// stb r27,3337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3337, ctx.r27.u8);
	// stb r27,3338(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3338, ctx.r27.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r27,3336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3336, ctx.r27.u8);
	// stb r27,3339(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3339, ctx.r27.u8);
	// stw r4,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r4.u32);
	// lwz r4,4428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4428);
	// stb r27,4152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4152, ctx.r27.u8);
	// beq cr6,0x82366dd8
	if (ctx.cr6.eq) goto loc_82366DD8;
	// lwz r11,4424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// li r3,3
	ctx.r3.s64 = 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82366DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r27,4672(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4672, ctx.r27.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82366DD8:
	// lwz r10,4424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82366DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r27,4672(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4672, ctx.r27.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82366DF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366E04"))) PPC_WEAK_FUNC(sub_82366E04);
PPC_FUNC_IMPL(__imp__sub_82366E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366E08"))) PPC_WEAK_FUNC(sub_82366E08);
PPC_FUNC_IMPL(__imp__sub_82366E08) {
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
	// lwz r11,4540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4540);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x82366e90
	if (!ctx.cr6.gt) goto loc_82366E90;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4464);
	// bl 0x82410ff8
	ctx.lr = 0x82366E34;
	sub_82410FF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82366e90
	if (!ctx.cr6.gt) goto loc_82366E90;
	// lwz r3,4464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4464);
	// bl 0x82410f88
	ctx.lr = 0x82366E44;
	sub_82410F88(ctx, base);
	// lwz r10,4540(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4540);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82366e90
	if (!ctx.cr6.eq) goto loc_82366E90;
	// lwz r11,4544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366e78
	if (ctx.cr6.eq) goto loc_82366E78;
	// lwz r4,4548(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4548);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82366E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4544, ctx.r11.u32);
	// stw r11,4548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4548, ctx.r11.u32);
loc_82366E78:
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
loc_82366E90:
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

__attribute__((alias("__imp__sub_82366EA8"))) PPC_WEAK_FUNC(sub_82366EA8);
PPC_FUNC_IMPL(__imp__sub_82366EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82366EB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,3352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3352);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,600
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 600, ctx.xer);
	// stw r11,3352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3352, ctx.r11.u32);
	// ble cr6,0x82366ee4
	if (!ctx.cr6.gt) goto loc_82366EE4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8240ed98
	ctx.lr = 0x82366ED8;
	sub_8240ED98(ctx, base);
loc_82366ED8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82366EE4:
	// lbz r11,3336(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366ed8
	if (ctx.cr6.eq) goto loc_82366ED8;
	// lwz r10,556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82366f4c
	if (!ctx.cr6.gt) goto loc_82366F4C;
	// addi r30,r31,568
	ctx.r30.s64 = ctx.r31.s64 + 568;
loc_82366F10:
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82366f4c
	if (!ctx.cr6.eq) goto loc_82366F4C;
	// addi r4,r31,4248
	ctx.r4.s64 = ctx.r31.s64 + 4248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824065f0
	ctx.lr = 0x82366F28;
	sub_824065F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82366f38
	if (!ctx.cr6.eq) goto loc_82366F38;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stb r27,3338(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3338, ctx.r27.u8);
loc_82366F38:
	// lwz r8,556(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,140
	ctx.r30.s64 = ctx.r30.s64 + 140;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82366f10
	if (ctx.cr6.lt) goto loc_82366F10;
loc_82366F4C:
	// clrlwi r7,r28,24
	ctx.r7.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82366ed8
	if (ctx.cr6.eq) goto loc_82366ED8;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r27,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r27.u8);
	// stb r27,3343(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3343, ctx.r27.u8);
	// stw r26,3348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3348, ctx.r26.u32);
	// stw r26,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366F74"))) PPC_WEAK_FUNC(sub_82366F74);
PPC_FUNC_IMPL(__imp__sub_82366F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366F78"))) PPC_WEAK_FUNC(sub_82366F78);
PPC_FUNC_IMPL(__imp__sub_82366F78) {
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
	// lbz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366fb8
	if (ctx.cr6.eq) goto loc_82366FB8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r10.u32);
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
loc_82366FB8:
	// lwz r11,3360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3360);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// stw r11,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r11.u32);
	// blt cr6,0x82367010
	if (ctx.cr6.lt) goto loc_82367010;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366bf8
	ctx.lr = 0x82366FD4;
	sub_82366BF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r4,4428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4428);
	// lwz r8,4424(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4424);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,3337(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3337, ctx.r11.u8);
	// stb r11,3338(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3338, ctx.r11.u8);
	// stw r9,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r9.u32);
	// stb r11,3336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3336, ctx.r11.u8);
	// stb r11,3343(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3343, ctx.r11.u8);
	// stw r11,3348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3348, ctx.r11.u32);
	// stw r11,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r11.u32);
	// stb r11,4152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4152, ctx.r11.u8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82367010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82367010:
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

__attribute__((alias("__imp__sub_82367028"))) PPC_WEAK_FUNC(sub_82367028);
PPC_FUNC_IMPL(__imp__sub_82367028) {
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
	// lis r4,25455
	ctx.r4.s64 = 1668218880;
	// ori r4,r4,28262
	ctx.r4.u64 = ctx.r4.u64 | 28262;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8240e778
	ctx.lr = 0x82367050;
	sub_8240E778(ctx, base);
	// lis r4,28773
	ctx.r4.s64 = 1885667328;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r4,r4,29284
	ctx.r4.u64 = ctx.r4.u64 | 29284;
	// bl 0x8240e778
	ctx.lr = 0x82367064;
	sub_8240E778(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,27312
	ctx.r4.s64 = ctx.r11.s64 + 27312;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82403840
	ctx.lr = 0x82367078;
	sub_82403840(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824052b0
	ctx.lr = 0x82367080;
	sub_824052B0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,27304
	ctx.r4.s64 = ctx.r11.s64 + 27304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82403840
	ctx.lr = 0x82367094;
	sub_82403840(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824052b0
	ctx.lr = 0x8236709C;
	sub_824052B0(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x823670ac
	if (!ctx.cr6.lt) goto loc_823670AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823670AC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_823670C8"))) PPC_WEAK_FUNC(sub_823670C8);
PPC_FUNC_IMPL(__imp__sub_823670C8) {
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
	// lis r4,28773
	ctx.r4.s64 = 1885667328;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r4,r4,29284
	ctx.r4.u64 = ctx.r4.u64 | 29284;
	// bl 0x8240e778
	ctx.lr = 0x823670E4;
	sub_8240E778(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,27304
	ctx.r4.s64 = ctx.r11.s64 + 27304;
	// bl 0x82403840
	ctx.lr = 0x823670F0;
	sub_82403840(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824052b0
	ctx.lr = 0x823670F8;
	sub_824052B0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82367108
	if (ctx.cr6.eq) goto loc_82367108;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367108:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236711C"))) PPC_WEAK_FUNC(sub_8236711C);
PPC_FUNC_IMPL(__imp__sub_8236711C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367120"))) PPC_WEAK_FUNC(sub_82367120);
PPC_FUNC_IMPL(__imp__sub_82367120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82367128;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,25455
	ctx.r4.s64 = 1668218880;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// ori r4,r4,28262
	ctx.r4.u64 = ctx.r4.u64 | 28262;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8240e778
	ctx.lr = 0x82367148;
	sub_8240E778(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,27324
	ctx.r4.s64 = ctx.r11.s64 + 27324;
	// bl 0x82403840
	ctx.lr = 0x82367154;
	sub_82403840(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r6,r11,3672
	ctx.r6.s64 = ctx.r11.s64 + 3672;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82404528
	ctx.lr = 0x82367168;
	sub_82404528(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,4644(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4644);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259da78
	ctx.lr = 0x8236717C;
	sub_8259DA78(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367184"))) PPC_WEAK_FUNC(sub_82367184);
PPC_FUNC_IMPL(__imp__sub_82367184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367188"))) PPC_WEAK_FUNC(sub_82367188);
PPC_FUNC_IMPL(__imp__sub_82367188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82367190;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r4,25455
	ctx.r4.s64 = 1668218880;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// ori r4,r4,28262
	ctx.r4.u64 = ctx.r4.u64 | 28262;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8240e778
	ctx.lr = 0x823671B0;
	sub_8240E778(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,27336
	ctx.r4.s64 = ctx.r11.s64 + 27336;
	// bl 0x82403840
	ctx.lr = 0x823671C0;
	sub_82403840(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r11,3672
	ctx.r6.s64 = ctx.r11.s64 + 3672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82404528
	ctx.lr = 0x823671D4;
	sub_82404528(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,27268
	ctx.r4.s64 = ctx.r11.s64 + 27268;
	// bl 0x82403840
	ctx.lr = 0x823671E4;
	sub_82403840(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82403c00
	ctx.lr = 0x823671EC;
	sub_82403C00(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823671F8"))) PPC_WEAK_FUNC(sub_823671F8);
PPC_FUNC_IMPL(__imp__sub_823671F8) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82408d38
	ctx.lr = 0x82367218;
	sub_82408D38(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x8240ed98
	ctx.lr = 0x8236722C;
	sub_8240ED98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,3340(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3340, ctx.r30.u8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82367244;
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

__attribute__((alias("__imp__sub_8236725C"))) PPC_WEAK_FUNC(sub_8236725C);
PPC_FUNC_IMPL(__imp__sub_8236725C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367260"))) PPC_WEAK_FUNC(sub_82367260);
PPC_FUNC_IMPL(__imp__sub_82367260) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_82367270"))) PPC_WEAK_FUNC(sub_82367270);
PPC_FUNC_IMPL(__imp__sub_82367270) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4460(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4460);
	// b 0x82410f88
	sub_82410F88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367278"))) PPC_WEAK_FUNC(sub_82367278);
PPC_FUNC_IMPL(__imp__sub_82367278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x82367280;
	__savegprlr_22(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r3,4460(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4460);
	// bl 0x82411058
	ctx.lr = 0x823672A0;
	sub_82411058(ctx, base);
	// add r22,r31,r30
	ctx.r22.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r22
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x82367440
	if (!ctx.cr6.lt) goto loc_82367440;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823672B4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,4460(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4460);
	// bl 0x82410f98
	ctx.lr = 0x823672C0;
	sub_82410F98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82367434
	if (ctx.cr6.eq) goto loc_82367434;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8236731c
	if (!ctx.cr6.gt) goto loc_8236731C;
	// addi r29,r31,536
	ctx.r29.s64 = ctx.r31.s64 + 536;
loc_823672E4:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236731c
	if (!ctx.cr6.eq) goto loc_8236731C;
	// addi r4,r26,4248
	ctx.r4.s64 = ctx.r26.s64 + 4248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824065f0
	ctx.lr = 0x823672FC;
	sub_824065F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367308
	if (!ctx.cr6.eq) goto loc_82367308;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82367308:
	// lwz r9,524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,140
	ctx.r29.s64 = ctx.r29.s64 + 140;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823672e4
	if (ctx.cr6.lt) goto loc_823672E4;
loc_8236731C:
	// clrlwi r8,r27,24
	ctx.r8.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82367434
	if (!ctx.cr6.eq) goto loc_82367434;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,204
	ctx.r4.s64 = ctx.r31.s64 + 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// std r30,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r30.u64);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// bl 0x82366438
	ctx.lr = 0x8236734C;
	sub_82366438(ctx, base);
	// lwz r10,356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r7,r10,0,12,12
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82367364
	if (ctx.cr6.eq) goto loc_82367364;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82367364:
	// rlwinm r6,r10,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82367374
	if (ctx.cr6.eq) goto loc_82367374;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82367374:
	// rlwinm r5,r10,0,19,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82367384
	if (ctx.cr6.eq) goto loc_82367384;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82367384:
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r4,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r4.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lwz r9,524(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// lwz r8,364(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r7,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// stw r6,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r5,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// lwz r7,352(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r7,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x82367428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8236745c
	if (ctx.cr6.eq) goto loc_8236745C;
loc_82367434:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x823672b4
	if (ctx.cr6.lt) goto loc_823672B4;
loc_82367440:
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82367454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8236745C:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367468"))) PPC_WEAK_FUNC(sub_82367468);
PPC_FUNC_IMPL(__imp__sub_82367468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82367470;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r3,4464(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// bl 0x82411058
	ctx.lr = 0x82367488;
	sub_82411058(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,4464(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// bl 0x82410f88
	ctx.lr = 0x82367498;
	sub_82410F88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823675d8
	if (!ctx.cr6.gt) goto loc_823675D8;
loc_823674A0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4464(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// bl 0x82410f98
	ctx.lr = 0x823674AC;
	sub_82410F98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823675c4
	if (ctx.cr6.eq) goto loc_823675C4;
	// lwz r11,356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823674d0
	if (ctx.cr6.eq) goto loc_823674D0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_823674D0:
	// rlwinm r9,r11,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823674e0
	if (ctx.cr6.eq) goto loc_823674E0;
	// ori r29,r29,2
	ctx.r29.u64 = ctx.r29.u64 | 2;
loc_823674E0:
	// rlwinm r8,r11,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823674f0
	if (ctx.cr6.eq) goto loc_823674F0;
	// ori r29,r29,4
	ctx.r29.u64 = ctx.r29.u64 | 4;
loc_823674F0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,204
	ctx.r4.s64 = ctx.r30.s64 + 204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r31.u64);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// bl 0x82366438
	ctx.lr = 0x82367514;
	sub_82366438(ctx, base);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// addi r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 4;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r7,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r7.u32);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r4,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// lwz r10,352(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x823675B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823675f4
	if (ctx.cr6.eq) goto loc_823675F4;
loc_823675C4:
	// lwz r3,4464(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4464);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bl 0x82410f88
	ctx.lr = 0x823675D0;
	sub_82410F88(ctx, base);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x823674a0
	if (ctx.cr6.lt) goto loc_823674A0;
loc_823675D8:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823675EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_823675F4:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367600"))) PPC_WEAK_FUNC(sub_82367600);
PPC_FUNC_IMPL(__imp__sub_82367600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82367608;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lbz r11,3337(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3337);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82367688
	if (!ctx.cr6.eq) goto loc_82367688;
	// lwz r3,4468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4468);
	// bl 0x82411058
	ctx.lr = 0x82367630;
	sub_82411058(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4468);
	// bl 0x82410f98
	ctx.lr = 0x8236763C;
	sub_82410F98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82367688
	if (ctx.cr6.eq) goto loc_82367688;
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// addi r3,r31,4248
	ctx.r3.s64 = ctx.r31.s64 + 4248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824065f0
	ctx.lr = 0x82367658;
	sub_824065F0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r7,r10,3672
	ctx.r7.s64 = ctx.r10.s64 + 3672;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82367688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82367688:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8236769C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823676A4"))) PPC_WEAK_FUNC(sub_823676A4);
PPC_FUNC_IMPL(__imp__sub_823676A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823676A8"))) PPC_WEAK_FUNC(sub_823676A8);
PPC_FUNC_IMPL(__imp__sub_823676A8) {
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
	// lwz r3,4576(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4576);
	// bl 0x824080a8
	ctx.lr = 0x823676BC;
	sub_824080A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823676c8
	if (!ctx.cr6.lt) goto loc_823676C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823676C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823676D8"))) PPC_WEAK_FUNC(sub_823676D8);
PPC_FUNC_IMPL(__imp__sub_823676D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x823676E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,4468(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4468);
	// bl 0x82411058
	ctx.lr = 0x823676F8;
	sub_82411058(ctx, base);
	// lwz r3,4468(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4468);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82410f90
	ctx.lr = 0x82367704;
	sub_82410F90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8236774c
	if (!ctx.cr6.gt) goto loc_8236774C;
loc_8236770C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4468(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4468);
	// bl 0x82410f98
	ctx.lr = 0x82367718;
	sub_82410F98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82367738
	if (ctx.cr6.eq) goto loc_82367738;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824065f0
	ctx.lr = 0x82367730;
	sub_824065F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82367758
	if (ctx.cr6.eq) goto loc_82367758;
loc_82367738:
	// lwz r3,4468(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4468);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82410f90
	ctx.lr = 0x82367744;
	sub_82410F90(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8236770c
	if (ctx.cr6.lt) goto loc_8236770C;
loc_8236774C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_82367758:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236776C"))) PPC_WEAK_FUNC(sub_8236776C);
PPC_FUNC_IMPL(__imp__sub_8236776C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367770"))) PPC_WEAK_FUNC(sub_82367770);
PPC_FUNC_IMPL(__imp__sub_82367770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x82367778;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r3,4468(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4468);
	// bl 0x82411058
	ctx.lr = 0x82367798;
	sub_82411058(ctx, base);
	// lwz r3,4468(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4468);
	// bl 0x82410f90
	ctx.lr = 0x823677A0;
	sub_82410F90(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x823677b4
	if (!ctx.cr6.lt) goto loc_823677B4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_823677B4:
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82367830
	if (!ctx.cr6.lt) goto loc_82367830;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r24,4248
	ctx.r25.s64 = ctx.r24.s64 + 4248;
	// addi r26,r11,3672
	ctx.r26.s64 = ctx.r11.s64 + 3672;
loc_823677C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4468(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4468);
	// bl 0x82410f98
	ctx.lr = 0x823677D4;
	sub_82410F98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// li r28,1
	ctx.r28.s64 = 1;
	// beq cr6,0x823677e8
	if (ctx.cr6.eq) goto loc_823677E8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823677E8:
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824065f0
	ctx.lr = 0x823677F8;
	sub_824065F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x82367824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x823677c8
	if (ctx.cr6.lt) goto loc_823677C8;
loc_82367830:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82367844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236784C"))) PPC_WEAK_FUNC(sub_8236784C);
PPC_FUNC_IMPL(__imp__sub_8236784C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367850"))) PPC_WEAK_FUNC(sub_82367850);
PPC_FUNC_IMPL(__imp__sub_82367850) {
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
	// lwz r3,4468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4468);
	// bl 0x82411058
	ctx.lr = 0x8236786C;
	sub_82411058(ctx, base);
	// lwz r3,4468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4468);
	// bl 0x82410f90
	ctx.lr = 0x82367874;
	sub_82410F90(ctx, base);
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

__attribute__((alias("__imp__sub_82367888"))) PPC_WEAK_FUNC(sub_82367888);
PPC_FUNC_IMPL(__imp__sub_82367888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x82367890;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823678BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// cmpd cr6,r29,r9
	ctx.cr6.compare<int64_t>(ctx.r29.s64, ctx.r9.s64, ctx.xer);
	// bne cr6,0x823678d4
	if (!ctx.cr6.eq) goto loc_823678D4;
	// addi r24,r27,32
	ctx.r24.s64 = ctx.r27.s64 + 32;
loc_823678CC:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82367934
	goto loc_82367934;
loc_823678D4:
	// lwz r3,4460(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4460);
	// bl 0x82411058
	ctx.lr = 0x823678DC;
	sub_82411058(ctx, base);
	// lwz r3,4460(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4460);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82410f90
	ctx.lr = 0x823678E8;
	sub_82410F90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82367930
	if (!ctx.cr6.gt) goto loc_82367930;
loc_823678F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4460(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4460);
	// bl 0x82410f98
	ctx.lr = 0x823678FC;
	sub_82410F98(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82367918
	if (ctx.cr6.eq) goto loc_82367918;
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// cmpd cr6,r7,r29
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r29.s64, ctx.xer);
	// beq cr6,0x823678cc
	if (ctx.cr6.eq) goto loc_823678CC;
loc_82367918:
	// lwz r3,4460(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4460);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82410f90
	ctx.lr = 0x82367924;
	sub_82410F90(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x823678f0
	if (ctx.cr6.lt) goto loc_823678F0;
	// b 0x82367934
	goto loc_82367934;
loc_82367930:
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82367934:
	// clrlwi r6,r28,24
	ctx.r6.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8236794c
	if (!ctx.cr6.eq) goto loc_8236794C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_8236794C:
	// li r25,0
	ctx.r25.s64 = 0;
loc_82367950:
	// mulli r11,r25,140
	ctx.r11.s64 = ctx.r25.s64 * 140;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r30,r11,532
	ctx.r30.s64 = ctx.r11.s64 + 532;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82367a24
	if (ctx.cr6.eq) goto loc_82367A24;
	// cmpwi cr6,r25,7
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 7, ctx.xer);
	// bne cr6,0x82367978
	if (!ctx.cr6.eq) goto loc_82367978;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82367984
	goto loc_82367984;
loc_82367978:
	// lwz r4,672(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r26,r3,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
loc_82367984:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82367998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823679B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823679C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r30,104
	ctx.r3.s64 = ctx.r30.s64 + 104;
	// bl 0x82404ef8
	ctx.lr = 0x823679DC;
	sub_82404EF8(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82411600
	ctx.lr = 0x823679E4;
	sub_82411600(ctx, base);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r27,4248
	ctx.r3.s64 = ctx.r27.s64 + 4248;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824065f0
	ctx.lr = 0x823679F8;
	sub_824065F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x82367A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82367A24:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r25,8
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 8, ctx.xer);
	// blt cr6,0x82367950
	if (ctx.cr6.lt) goto loc_82367950;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367A3C"))) PPC_WEAK_FUNC(sub_82367A3C);
PPC_FUNC_IMPL(__imp__sub_82367A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367A40"))) PPC_WEAK_FUNC(sub_82367A40);
PPC_FUNC_IMPL(__imp__sub_82367A40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stb r10,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stb r9,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367A60"))) PPC_WEAK_FUNC(sub_82367A60);
PPC_FUNC_IMPL(__imp__sub_82367A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32045
	ctx.r11.s64 = -2100101120;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,-22048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22048);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-22048(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22048);
	// lwz r7,452(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 452);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82367A84"))) PPC_WEAK_FUNC(sub_82367A84);
PPC_FUNC_IMPL(__imp__sub_82367A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367A88"))) PPC_WEAK_FUNC(sub_82367A88);
PPC_FUNC_IMPL(__imp__sub_82367A88) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,3345(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3345);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367A90"))) PPC_WEAK_FUNC(sub_82367A90);
PPC_FUNC_IMPL(__imp__sub_82367A90) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,3336(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82367ab0
	if (ctx.cr6.eq) goto loc_82367AB0;
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82367AB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367AB8"))) PPC_WEAK_FUNC(sub_82367AB8);
PPC_FUNC_IMPL(__imp__sub_82367AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82367AC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32045
	ctx.r29.s64 = -2100101120;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r11,27368
	ctx.r4.s64 = ctx.r11.s64 + 27368;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-22048(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22048);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x8259d1b0
	ctx.lr = 0x82367AFC;
	sub_8259D1B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82367b6c
	if (!ctx.cr6.gt) goto loc_82367B6C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r11,27264
	ctx.r27.s64 = ctx.r11.s64 + 27264;
loc_82367B10:
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// bl 0x8259d1b0
	ctx.lr = 0x82367B24;
	sub_8259D1B0(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82367B2C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82367b2c
	if (!ctx.cr6.eq) goto loc_82367B2C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82367B40:
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
	// bne cr6,0x82367b40
	if (!ctx.cr6.eq) goto loc_82367B40;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82367b10
	if (ctx.cr6.lt) goto loc_82367B10;
loc_82367B6C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,-22048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22048);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,27360
	ctx.r5.s64 = ctx.r11.s64 + 27360;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x82405fe0
	ctx.lr = 0x82367B84;
	sub_82405FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r6,2048
	ctx.r6.s64 = 134217728;
	// lwz r3,-22048(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22048);
	// addi r5,r11,27352
	ctx.r5.s64 = ctx.r11.s64 + 27352;
	// ori r6,r6,16512
	ctx.r6.u64 = ctx.r6.u64 | 16512;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x82403c98
	ctx.lr = 0x82367BA0;
	sub_82403C98(ctx, base);
	// lis r4,28005
	ctx.r4.s64 = 1835335680;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-22048(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22048);
	// ori r4,r4,29543
	ctx.r4.u64 = ctx.r4.u64 | 29543;
	// bl 0x8240e350
	ctx.lr = 0x82367BBC;
	sub_8240E350(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367BC4"))) PPC_WEAK_FUNC(sub_82367BC4);
PPC_FUNC_IMPL(__imp__sub_82367BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}


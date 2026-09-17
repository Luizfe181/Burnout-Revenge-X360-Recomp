#include "graphics_dispatch.h"
#include "ppc_recomp_shared.h"
__attribute__((alias("__imp__sub_825C68A0"))) PPC_WEAK_FUNC(sub_825C68A0);
__attribute__((alias("__imp__sub_825C68A8"))) PPC_WEAK_FUNC(sub_825C68A8);
__attribute__((alias("__imp__sub_825C68B0"))) PPC_WEAK_FUNC(sub_825C68B0);
__attribute__((alias("__imp__sub_825C68B8"))) PPC_WEAK_FUNC(sub_825C68B8);
__attribute__((alias("__imp__sub_825C68C0"))) PPC_WEAK_FUNC(sub_825C68C0);
__attribute__((alias("__imp__sub_825C68D0"))) PPC_WEAK_FUNC(sub_825C68D0);
__attribute__((alias("__imp__sub_825C68E8"))) PPC_WEAK_FUNC(sub_825C68E8);
__attribute__((alias("__imp__sub_825C68F0"))) PPC_WEAK_FUNC(sub_825C68F0);
__attribute__((alias("__imp__sub_825C68F8"))) PPC_WEAK_FUNC(sub_825C68F8);
__attribute__((alias("__imp__sub_825C6908"))) PPC_WEAK_FUNC(sub_825C6908);
__attribute__((alias("__imp__sub_825C6918"))) PPC_WEAK_FUNC(sub_825C6918);
__attribute__((alias("__imp__sub_825C6938"))) PPC_WEAK_FUNC(sub_825C6938);
__attribute__((alias("__imp__sub_825C6990"))) PPC_WEAK_FUNC(sub_825C6990);
__attribute__((alias("__imp__sub_825C69A0"))) PPC_WEAK_FUNC(sub_825C69A0);
__attribute__((alias("__imp__sub_825C69F8"))) PPC_WEAK_FUNC(sub_825C69F8);
__attribute__((alias("__imp__sub_825C6A38"))) PPC_WEAK_FUNC(sub_825C6A38);
__attribute__((alias("__imp__sub_825C6A48"))) PPC_WEAK_FUNC(sub_825C6A48);
__attribute__((alias("__imp__sub_825C6A88"))) PPC_WEAK_FUNC(sub_825C6A88);
__attribute__((alias("__imp__sub_825C6AF8"))) PPC_WEAK_FUNC(sub_825C6AF8);
__attribute__((alias("__imp__sub_825C6B10"))) PPC_WEAK_FUNC(sub_825C6B10);
__attribute__((alias("__imp__sub_825C6B28"))) PPC_WEAK_FUNC(sub_825C6B28);
__attribute__((alias("__imp__sub_825C6B40"))) PPC_WEAK_FUNC(sub_825C6B40);
PPC_FUNC_IMPL(__imp__sub_825C68A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C68A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C68B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C68B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C68C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,-27872
	ctx.r11.s64 = ctx.r11.s64 + -27872;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x82401918
	sub_82401918(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C68D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// addi r11,r11,-26620
	ctx.r11.s64 = ctx.r11.s64 + -26620;
	// stw r11,-1424(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1424, ctx.r11.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C68E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C68F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C68F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,13000
	ctx.r11.s64 = ctx.r11.s64 + 13000;
	// addi r3,r11,204
	ctx.r3.s64 = ctx.r11.s64 + 204;
	// b 0x82401918
	sub_82401918(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C6908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// addi r3,r11,6136
	ctx.r3.s64 = ctx.r11.s64 + 6136;
	// b 0x82401918
	sub_82401918(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C6918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-32592
	ctx.r11.s64 = ctx.r11.s64 + -32592;
	// addi r10,r10,27124
	ctx.r10.s64 = ctx.r10.s64 + 27124;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x824239d0
	sub_824239D0(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C6938) {
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
	// addi r31,r11,31636
	ctx.r31.s64 = ctx.r11.s64 + 31636;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,27464
	ctx.r11.s64 = ctx.r11.s64 + 27464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82347860
	ctx.lr = 0x825C6964;
	sub_82347860(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82401918
	ctx.lr = 0x825C696C;
	sub_82401918(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,27020
	ctx.r11.s64 = ctx.r11.s64 + 27020;
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
PPC_FUNC_IMPL(__imp__sub_825C6990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r3,r11,-32552
	ctx.r3.s64 = ctx.r11.s64 + -32552;
	// b 0x8236b898
	sub_8236B898(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C69A0) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-20856
	ctx.r11.s64 = ctx.r11.s64 + -20856;
	// addi r31,r11,2616
	ctx.r31.s64 = ctx.r11.s64 + 2616;
loc_825C69C4:
	// addi r31,r31,-1304
	ctx.r31.s64 = ctx.r31.s64 + -1304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82401918
	ctx.lr = 0x825C69D0;
	sub_82401918(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x825c69c4
	if (!ctx.cr6.lt) goto loc_825C69C4;
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
PPC_FUNC_IMPL(__imp__sub_825C69F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lwz r4,7812(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7812);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// b 0x8242bcd0
	sub_8242BCD0(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C6A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r11,-24144
	ctx.r3.s64 = ctx.r11.s64 + -24144;
	// b 0x8244f0f8
	sub_8244F0F8(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C6A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lwz r4,9424(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9424);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// b 0x8242bcd0
	sub_8242BCD0(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C6A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x825C6A90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r28,177
	ctx.r28.s64 = 177;
	// addi r11,r11,-23976
	ctx.r11.s64 = ctx.r11.s64 + -23976;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// addi r31,r11,712
	ctx.r31.s64 = ctx.r11.s64 + 712;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
loc_825C6AB0:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x825c6ae0
	if (!ctx.cr6.eq) goto loc_825C6AE0;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x825C6AE0;
	sub_8242BCD0(ctx, base);
loc_825C6AE0:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x825c6ab0
	if (!ctx.cr6.lt) goto loc_825C6AB0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C6AF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// addi r11,r11,888
	ctx.r11.s64 = ctx.r11.s64 + 888;
	// stw r11,-7536(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7536, ctx.r11.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C6B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// addi r11,r11,888
	ctx.r11.s64 = ctx.r11.s64 + 888;
	// stw r11,-7504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7504, ctx.r11.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C6B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// addi r11,r11,30868
	ctx.r11.s64 = ctx.r11.s64 + 30868;
	// stw r11,-6408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6408, ctx.r11.u32);
	// blr 
	return;
}
PPC_FUNC_IMPL(__imp__sub_825C6B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,23052
	ctx.r10.s64 = ctx.r11.s64 + 23052;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-8716
	ctx.r11.s64 = ctx.r11.s64 + -8716;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8259efd8
	sub_8259EFD8(ctx, base);
	return;
}

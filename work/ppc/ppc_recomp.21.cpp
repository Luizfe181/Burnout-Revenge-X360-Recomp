#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_821E24E4"))) PPC_WEAK_FUNC(sub_821E24E4);
PPC_FUNC_IMPL(__imp__sub_821E24E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E24E8"))) PPC_WEAK_FUNC(sub_821E24E8);
PPC_FUNC_IMPL(__imp__sub_821E24E8) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2510;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e252c
	if (ctx.cr6.eq) goto loc_821E252C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-9752
	ctx.r4.s64 = ctx.r11.s64 + -9752;
	// bl 0x821ad188
	ctx.lr = 0x821E2524;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2530
	goto loc_821E2530;
loc_821E252C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2530:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9712
	ctx.r11.s64 = ctx.r11.s64 + 9712;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5076
	ctx.r4.s64 = ctx.r11.s64 + -5076;
	// bl 0x8242bdb0
	ctx.lr = 0x821E254C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2558;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2574
	if (ctx.cr6.eq) goto loc_821E2574;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-11928
	ctx.r4.s64 = ctx.r11.s64 + -11928;
	// bl 0x821ad188
	ctx.lr = 0x821E256C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2578
	goto loc_821E2578;
loc_821E2574:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2578:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9704
	ctx.r11.s64 = ctx.r11.s64 + 9704;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5088
	ctx.r4.s64 = ctx.r11.s64 + -5088;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2594;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E25A0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e25bc
	if (ctx.cr6.eq) goto loc_821E25BC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-11000
	ctx.r4.s64 = ctx.r11.s64 + -11000;
	// bl 0x821ad188
	ctx.lr = 0x821E25B4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e25c0
	goto loc_821E25C0;
loc_821E25BC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E25C0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9708
	ctx.r11.s64 = ctx.r11.s64 + 9708;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5116
	ctx.r4.s64 = ctx.r11.s64 + -5116;
	// bl 0x8242bdb0
	ctx.lr = 0x821E25DC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E25E8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2604
	if (ctx.cr6.eq) goto loc_821E2604;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-9288
	ctx.r4.s64 = ctx.r11.s64 + -9288;
	// bl 0x821ad188
	ctx.lr = 0x821E25FC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2608
	goto loc_821E2608;
loc_821E2604:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2608:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9716
	ctx.r11.s64 = ctx.r11.s64 + 9716;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5128
	ctx.r4.s64 = ctx.r11.s64 + -5128;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2624;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2630;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e264c
	if (ctx.cr6.eq) goto loc_821E264C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-8912
	ctx.r4.s64 = ctx.r11.s64 + -8912;
	// bl 0x821ad188
	ctx.lr = 0x821E2644;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2650
	goto loc_821E2650;
loc_821E264C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2650:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9720
	ctx.r11.s64 = ctx.r11.s64 + 9720;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5172
	ctx.r4.s64 = ctx.r11.s64 + -5172;
	// bl 0x8242bdb0
	ctx.lr = 0x821E266C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2678;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2694
	if (ctx.cr6.eq) goto loc_821E2694;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-8544
	ctx.r4.s64 = ctx.r11.s64 + -8544;
	// bl 0x821ad188
	ctx.lr = 0x821E268C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2698
	goto loc_821E2698;
loc_821E2694:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2698:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9724
	ctx.r11.s64 = ctx.r11.s64 + 9724;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5208
	ctx.r4.s64 = ctx.r11.s64 + -5208;
	// bl 0x8242bdb0
	ctx.lr = 0x821E26B4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E26C0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e26dc
	if (ctx.cr6.eq) goto loc_821E26DC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-8176
	ctx.r4.s64 = ctx.r11.s64 + -8176;
	// bl 0x821ad188
	ctx.lr = 0x821E26D4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e26e0
	goto loc_821E26E0;
loc_821E26DC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E26E0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9728
	ctx.r11.s64 = ctx.r11.s64 + 9728;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5228
	ctx.r4.s64 = ctx.r11.s64 + -5228;
	// bl 0x8242bdb0
	ctx.lr = 0x821E26FC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2708;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2724
	if (ctx.cr6.eq) goto loc_821E2724;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-7808
	ctx.r4.s64 = ctx.r11.s64 + -7808;
	// bl 0x821ad188
	ctx.lr = 0x821E271C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2728
	goto loc_821E2728;
loc_821E2724:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2728:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9732
	ctx.r11.s64 = ctx.r11.s64 + 9732;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5196
	ctx.r4.s64 = ctx.r11.s64 + -5196;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2744;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E275C"))) PPC_WEAK_FUNC(sub_821E275C);
PPC_FUNC_IMPL(__imp__sub_821E275C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E2760"))) PPC_WEAK_FUNC(sub_821E2760);
PPC_FUNC_IMPL(__imp__sub_821E2760) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2788;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e27a4
	if (ctx.cr6.eq) goto loc_821E27A4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-5656
	ctx.r4.s64 = ctx.r11.s64 + -5656;
	// bl 0x821ad188
	ctx.lr = 0x821E279C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e27a8
	goto loc_821E27A8;
loc_821E27A4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E27A8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9744
	ctx.r11.s64 = ctx.r11.s64 + 9744;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4960
	ctx.r4.s64 = ctx.r11.s64 + -4960;
	// bl 0x8242bdb0
	ctx.lr = 0x821E27C4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E27D0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e27ec
	if (ctx.cr6.eq) goto loc_821E27EC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-6112
	ctx.r4.s64 = ctx.r11.s64 + -6112;
	// bl 0x821ad188
	ctx.lr = 0x821E27E4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e27f0
	goto loc_821E27F0;
loc_821E27EC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E27F0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9740
	ctx.r11.s64 = ctx.r11.s64 + 9740;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4972
	ctx.r4.s64 = ctx.r11.s64 + -4972;
	// bl 0x8242bdb0
	ctx.lr = 0x821E280C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2818;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2834
	if (ctx.cr6.eq) goto loc_821E2834;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-5168
	ctx.r4.s64 = ctx.r11.s64 + -5168;
	// bl 0x821ad188
	ctx.lr = 0x821E282C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2838
	goto loc_821E2838;
loc_821E2834:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2838:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9748
	ctx.r11.s64 = ctx.r11.s64 + 9748;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4992
	ctx.r4.s64 = ctx.r11.s64 + -4992;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2854;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2860;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e287c
	if (ctx.cr6.eq) goto loc_821E287C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-4800
	ctx.r4.s64 = ctx.r11.s64 + -4800;
	// bl 0x821ad188
	ctx.lr = 0x821E2874;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2880
	goto loc_821E2880;
loc_821E287C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2880:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9752
	ctx.r11.s64 = ctx.r11.s64 + 9752;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5016
	ctx.r4.s64 = ctx.r11.s64 + -5016;
	// bl 0x8242bdb0
	ctx.lr = 0x821E289C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E28A8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e28c4
	if (ctx.cr6.eq) goto loc_821E28C4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-4432
	ctx.r4.s64 = ctx.r11.s64 + -4432;
	// bl 0x821ad188
	ctx.lr = 0x821E28BC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e28c8
	goto loc_821E28C8;
loc_821E28C4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E28C8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9756
	ctx.r11.s64 = ctx.r11.s64 + 9756;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5040
	ctx.r4.s64 = ctx.r11.s64 + -5040;
	// bl 0x8242bdb0
	ctx.lr = 0x821E28E4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E28F0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e290c
	if (ctx.cr6.eq) goto loc_821E290C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-2960
	ctx.r4.s64 = ctx.r11.s64 + -2960;
	// bl 0x821ad188
	ctx.lr = 0x821E2904;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2910
	goto loc_821E2910;
loc_821E290C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2910:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9772
	ctx.r11.s64 = ctx.r11.s64 + 9772;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4304
	ctx.r4.s64 = ctx.r11.s64 + -4304;
	// bl 0x8242bdb0
	ctx.lr = 0x821E292C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2938;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2954
	if (ctx.cr6.eq) goto loc_821E2954;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-4064
	ctx.r4.s64 = ctx.r11.s64 + -4064;
	// bl 0x821ad188
	ctx.lr = 0x821E294C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2958
	goto loc_821E2958;
loc_821E2954:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2958:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9760
	ctx.r11.s64 = ctx.r11.s64 + 9760;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4448
	ctx.r4.s64 = ctx.r11.s64 + -4448;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2974;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2980;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e299c
	if (ctx.cr6.eq) goto loc_821E299C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-3696
	ctx.r4.s64 = ctx.r11.s64 + -3696;
	// bl 0x821ad188
	ctx.lr = 0x821E2994;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e29a0
	goto loc_821E29A0;
loc_821E299C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E29A0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9764
	ctx.r11.s64 = ctx.r11.s64 + 9764;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4468
	ctx.r4.s64 = ctx.r11.s64 + -4468;
	// bl 0x8242bdb0
	ctx.lr = 0x821E29BC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E29C8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e29e4
	if (ctx.cr6.eq) goto loc_821E29E4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-3328
	ctx.r4.s64 = ctx.r11.s64 + -3328;
	// bl 0x821ad188
	ctx.lr = 0x821E29DC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e29e8
	goto loc_821E29E8;
loc_821E29E4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E29E8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9768
	ctx.r11.s64 = ctx.r11.s64 + 9768;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4488
	ctx.r4.s64 = ctx.r11.s64 + -4488;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2A04;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2A10;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2a2c
	if (ctx.cr6.eq) goto loc_821E2A2C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-2592
	ctx.r4.s64 = ctx.r11.s64 + -2592;
	// bl 0x821ad188
	ctx.lr = 0x821E2A24;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2a30
	goto loc_821E2A30;
loc_821E2A2C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2A30:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9776
	ctx.r11.s64 = ctx.r11.s64 + 9776;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4680
	ctx.r4.s64 = ctx.r11.s64 + -4680;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2A4C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2A58;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2a74
	if (ctx.cr6.eq) goto loc_821E2A74;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-2136
	ctx.r4.s64 = ctx.r11.s64 + -2136;
	// bl 0x821ad188
	ctx.lr = 0x821E2A6C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2a78
	goto loc_821E2A78;
loc_821E2A74:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2A78:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 + 9780;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4700
	ctx.r4.s64 = ctx.r11.s64 + -4700;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2A94;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2AA0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2abc
	if (ctx.cr6.eq) goto loc_821E2ABC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-1680
	ctx.r4.s64 = ctx.r11.s64 + -1680;
	// bl 0x821ad188
	ctx.lr = 0x821E2AB4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2ac0
	goto loc_821E2AC0;
loc_821E2ABC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2AC0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9784
	ctx.r11.s64 = ctx.r11.s64 + 9784;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4732
	ctx.r4.s64 = ctx.r11.s64 + -4732;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2ADC;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E2AF4"))) PPC_WEAK_FUNC(sub_821E2AF4);
PPC_FUNC_IMPL(__imp__sub_821E2AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E2AF8"))) PPC_WEAK_FUNC(sub_821E2AF8);
PPC_FUNC_IMPL(__imp__sub_821E2AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,14528
	ctx.r3.s64 = ctx.r11.s64 + 14528;
	// bl 0x821fd0c0
	ctx.lr = 0x821E2B18;
	sub_821FD0C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E2B20:
	// mulli r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 * 68;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x821d01e0
	ctx.lr = 0x821E2B3C;
	sub_821D01E0(ctx, base);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 11, ctx.xer);
	// blt cr6,0x821e2b20
	if (ctx.cr6.lt) goto loc_821E2B20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x8245da80
	ctx.lr = 0x821E2B5C;
	sub_8245DA80(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E2B70"))) PPC_WEAK_FUNC(sub_821E2B70);
PPC_FUNC_IMPL(__imp__sub_821E2B70) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2B98;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2bb4
	if (ctx.cr6.eq) goto loc_821E2BB4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-32488
	ctx.r4.s64 = ctx.r11.s64 + -32488;
	// bl 0x821ad188
	ctx.lr = 0x821E2BAC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2bb8
	goto loc_821E2BB8;
loc_821E2BB4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2BB8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9836
	ctx.r11.s64 = ctx.r11.s64 + 9836;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3920
	ctx.r4.s64 = ctx.r11.s64 + -3920;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2BD4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2BE0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2bfc
	if (ctx.cr6.eq) goto loc_821E2BFC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-32344
	ctx.r4.s64 = ctx.r11.s64 + -32344;
	// bl 0x821ad188
	ctx.lr = 0x821E2BF4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2c00
	goto loc_821E2C00;
loc_821E2BFC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2C00:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9840
	ctx.r11.s64 = ctx.r11.s64 + 9840;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3940
	ctx.r4.s64 = ctx.r11.s64 + -3940;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2C1C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2C28;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2c44
	if (ctx.cr6.eq) goto loc_821E2C44;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-32200
	ctx.r4.s64 = ctx.r11.s64 + -32200;
	// bl 0x821ad188
	ctx.lr = 0x821E2C3C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2c48
	goto loc_821E2C48;
loc_821E2C44:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2C48:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9844
	ctx.r11.s64 = ctx.r11.s64 + 9844;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3964
	ctx.r4.s64 = ctx.r11.s64 + -3964;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2C64;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2C70;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2c8c
	if (ctx.cr6.eq) goto loc_821E2C8C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-32056
	ctx.r4.s64 = ctx.r11.s64 + -32056;
	// bl 0x821ad188
	ctx.lr = 0x821E2C84;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2c90
	goto loc_821E2C90;
loc_821E2C8C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2C90:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9848
	ctx.r11.s64 = ctx.r11.s64 + 9848;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3988
	ctx.r4.s64 = ctx.r11.s64 + -3988;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2CAC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2CB8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2cd4
	if (ctx.cr6.eq) goto loc_821E2CD4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-31912
	ctx.r4.s64 = ctx.r11.s64 + -31912;
	// bl 0x821ad188
	ctx.lr = 0x821E2CCC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2cd8
	goto loc_821E2CD8;
loc_821E2CD4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2CD8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9852
	ctx.r11.s64 = ctx.r11.s64 + 9852;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4016
	ctx.r4.s64 = ctx.r11.s64 + -4016;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2CF4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2D00;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2d1c
	if (ctx.cr6.eq) goto loc_821E2D1C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-31768
	ctx.r4.s64 = ctx.r11.s64 + -31768;
	// bl 0x821ad188
	ctx.lr = 0x821E2D14;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2d20
	goto loc_821E2D20;
loc_821E2D1C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2D20:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9856
	ctx.r11.s64 = ctx.r11.s64 + 9856;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4044
	ctx.r4.s64 = ctx.r11.s64 + -4044;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2D3C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2D48;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2d64
	if (ctx.cr6.eq) goto loc_821E2D64;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-31624
	ctx.r4.s64 = ctx.r11.s64 + -31624;
	// bl 0x821ad188
	ctx.lr = 0x821E2D5C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2d68
	goto loc_821E2D68;
loc_821E2D64:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2D68:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9860
	ctx.r11.s64 = ctx.r11.s64 + 9860;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4064
	ctx.r4.s64 = ctx.r11.s64 + -4064;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2D84;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2D90;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2dac
	if (ctx.cr6.eq) goto loc_821E2DAC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-31256
	ctx.r4.s64 = ctx.r11.s64 + -31256;
	// bl 0x821ad188
	ctx.lr = 0x821E2DA4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2db0
	goto loc_821E2DB0;
loc_821E2DAC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2DB0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9864
	ctx.r11.s64 = ctx.r11.s64 + 9864;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4084
	ctx.r4.s64 = ctx.r11.s64 + -4084;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2DCC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2DD8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2df4
	if (ctx.cr6.eq) goto loc_821E2DF4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-30888
	ctx.r4.s64 = ctx.r11.s64 + -30888;
	// bl 0x821ad188
	ctx.lr = 0x821E2DEC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2df8
	goto loc_821E2DF8;
loc_821E2DF4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2DF8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9868
	ctx.r11.s64 = ctx.r11.s64 + 9868;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4100
	ctx.r4.s64 = ctx.r11.s64 + -4100;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2E14;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2E20;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2e3c
	if (ctx.cr6.eq) goto loc_821E2E3C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-30520
	ctx.r4.s64 = ctx.r11.s64 + -30520;
	// bl 0x821ad188
	ctx.lr = 0x821E2E34;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2e40
	goto loc_821E2E40;
loc_821E2E3C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2E40:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9872
	ctx.r11.s64 = ctx.r11.s64 + 9872;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4116
	ctx.r4.s64 = ctx.r11.s64 + -4116;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2E5C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2E68;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2e84
	if (ctx.cr6.eq) goto loc_821E2E84;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-29864
	ctx.r4.s64 = ctx.r11.s64 + -29864;
	// bl 0x821ad188
	ctx.lr = 0x821E2E7C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2e88
	goto loc_821E2E88;
loc_821E2E84:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2E88:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9884
	ctx.r11.s64 = ctx.r11.s64 + 9884;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4132
	ctx.r4.s64 = ctx.r11.s64 + -4132;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2EA4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2EB0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2ecc
	if (ctx.cr6.eq) goto loc_821E2ECC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-30152
	ctx.r4.s64 = ctx.r11.s64 + -30152;
	// bl 0x821ad188
	ctx.lr = 0x821E2EC4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2ed0
	goto loc_821E2ED0;
loc_821E2ECC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2ED0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9876
	ctx.r11.s64 = ctx.r11.s64 + 9876;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4160
	ctx.r4.s64 = ctx.r11.s64 + -4160;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2EEC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2EF8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2f14
	if (ctx.cr6.eq) goto loc_821E2F14;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-30008
	ctx.r4.s64 = ctx.r11.s64 + -30008;
	// bl 0x821ad188
	ctx.lr = 0x821E2F0C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2f18
	goto loc_821E2F18;
loc_821E2F14:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2F18:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9880
	ctx.r11.s64 = ctx.r11.s64 + 9880;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4188
	ctx.r4.s64 = ctx.r11.s64 + -4188;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2F34;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2F40;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2f5c
	if (ctx.cr6.eq) goto loc_821E2F5C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-29496
	ctx.r4.s64 = ctx.r11.s64 + -29496;
	// bl 0x821ad188
	ctx.lr = 0x821E2F54;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2f60
	goto loc_821E2F60;
loc_821E2F5C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2F60:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9888
	ctx.r11.s64 = ctx.r11.s64 + 9888;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4204
	ctx.r4.s64 = ctx.r11.s64 + -4204;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2F7C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2F88;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2fa4
	if (ctx.cr6.eq) goto loc_821E2FA4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-29040
	ctx.r4.s64 = ctx.r11.s64 + -29040;
	// bl 0x821ad188
	ctx.lr = 0x821E2F9C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2fa8
	goto loc_821E2FA8;
loc_821E2FA4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2FA8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9892
	ctx.r11.s64 = ctx.r11.s64 + 9892;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4232
	ctx.r4.s64 = ctx.r11.s64 + -4232;
	// bl 0x8242bdb0
	ctx.lr = 0x821E2FC4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E2FD0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2fec
	if (ctx.cr6.eq) goto loc_821E2FEC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-28536
	ctx.r4.s64 = ctx.r11.s64 + -28536;
	// bl 0x821ad188
	ctx.lr = 0x821E2FE4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e2ff0
	goto loc_821E2FF0;
loc_821E2FEC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E2FF0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9896
	ctx.r11.s64 = ctx.r11.s64 + 9896;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4244
	ctx.r4.s64 = ctx.r11.s64 + -4244;
	// bl 0x8242bdb0
	ctx.lr = 0x821E300C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3018;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3034
	if (ctx.cr6.eq) goto loc_821E3034;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-28080
	ctx.r4.s64 = ctx.r11.s64 + -28080;
	// bl 0x821ad188
	ctx.lr = 0x821E302C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3038
	goto loc_821E3038;
loc_821E3034:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3038:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9900
	ctx.r11.s64 = ctx.r11.s64 + 9900;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4264
	ctx.r4.s64 = ctx.r11.s64 + -4264;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3054;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3060;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e307c
	if (ctx.cr6.eq) goto loc_821E307C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-27624
	ctx.r4.s64 = ctx.r11.s64 + -27624;
	// bl 0x821ad188
	ctx.lr = 0x821E3074;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3080
	goto loc_821E3080;
loc_821E307C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3080:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9904
	ctx.r11.s64 = ctx.r11.s64 + 9904;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4284
	ctx.r4.s64 = ctx.r11.s64 + -4284;
	// bl 0x8242bdb0
	ctx.lr = 0x821E309C;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E30B4"))) PPC_WEAK_FUNC(sub_821E30B4);
PPC_FUNC_IMPL(__imp__sub_821E30B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E30B8"))) PPC_WEAK_FUNC(sub_821E30B8);
PPC_FUNC_IMPL(__imp__sub_821E30B8) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E30E0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e30fc
	if (ctx.cr6.eq) goto loc_821E30FC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-27160
	ctx.r4.s64 = ctx.r11.s64 + -27160;
	// bl 0x821ad188
	ctx.lr = 0x821E30F4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3100
	goto loc_821E3100;
loc_821E30FC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3100:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9912
	ctx.r11.s64 = ctx.r11.s64 + 9912;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4284
	ctx.r4.s64 = ctx.r11.s64 + -4284;
	// bl 0x8242bdb0
	ctx.lr = 0x821E311C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3128;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3144
	if (ctx.cr6.eq) goto loc_821E3144;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-14256
	ctx.r4.s64 = ctx.r11.s64 + -14256;
	// bl 0x821ad188
	ctx.lr = 0x821E313C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3148
	goto loc_821E3148;
loc_821E3144:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3148:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9916
	ctx.r11.s64 = ctx.r11.s64 + 9916;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3524
	ctx.r4.s64 = ctx.r11.s64 + -3524;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3164;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3170;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e318c
	if (ctx.cr6.eq) goto loc_821E318C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-26696
	ctx.r4.s64 = ctx.r11.s64 + -26696;
	// bl 0x821ad188
	ctx.lr = 0x821E3184;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3190
	goto loc_821E3190;
loc_821E318C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3190:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9920
	ctx.r11.s64 = ctx.r11.s64 + 9920;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3556
	ctx.r4.s64 = ctx.r11.s64 + -3556;
	// bl 0x8242bdb0
	ctx.lr = 0x821E31AC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E31B8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e31d4
	if (ctx.cr6.eq) goto loc_821E31D4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-14120
	ctx.r4.s64 = ctx.r11.s64 + -14120;
	// bl 0x821ad188
	ctx.lr = 0x821E31CC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e31d8
	goto loc_821E31D8;
loc_821E31D4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E31D8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9924
	ctx.r11.s64 = ctx.r11.s64 + 9924;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3576
	ctx.r4.s64 = ctx.r11.s64 + -3576;
	// bl 0x8242bdb0
	ctx.lr = 0x821E31F4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3200;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e321c
	if (ctx.cr6.eq) goto loc_821E321C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-26320
	ctx.r4.s64 = ctx.r11.s64 + -26320;
	// bl 0x821ad188
	ctx.lr = 0x821E3214;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3220
	goto loc_821E3220;
loc_821E321C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3220:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9928
	ctx.r11.s64 = ctx.r11.s64 + 9928;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3612
	ctx.r4.s64 = ctx.r11.s64 + -3612;
	// bl 0x8242bdb0
	ctx.lr = 0x821E323C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3248;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3264
	if (ctx.cr6.eq) goto loc_821E3264;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-13984
	ctx.r4.s64 = ctx.r11.s64 + -13984;
	// bl 0x821ad188
	ctx.lr = 0x821E325C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3268
	goto loc_821E3268;
loc_821E3264:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3268:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9932
	ctx.r11.s64 = ctx.r11.s64 + 9932;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3640
	ctx.r4.s64 = ctx.r11.s64 + -3640;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3284;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3290;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e32ac
	if (ctx.cr6.eq) goto loc_821E32AC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-25856
	ctx.r4.s64 = ctx.r11.s64 + -25856;
	// bl 0x821ad188
	ctx.lr = 0x821E32A4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e32b0
	goto loc_821E32B0;
loc_821E32AC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E32B0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9936
	ctx.r11.s64 = ctx.r11.s64 + 9936;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3668
	ctx.r4.s64 = ctx.r11.s64 + -3668;
	// bl 0x8242bdb0
	ctx.lr = 0x821E32CC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E32D8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e32f4
	if (ctx.cr6.eq) goto loc_821E32F4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-13752
	ctx.r4.s64 = ctx.r11.s64 + -13752;
	// bl 0x821ad188
	ctx.lr = 0x821E32EC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e32f8
	goto loc_821E32F8;
loc_821E32F4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E32F8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9940
	ctx.r11.s64 = ctx.r11.s64 + 9940;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3688
	ctx.r4.s64 = ctx.r11.s64 + -3688;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3314;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3320;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e333c
	if (ctx.cr6.eq) goto loc_821E333C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-25480
	ctx.r4.s64 = ctx.r11.s64 + -25480;
	// bl 0x821ad188
	ctx.lr = 0x821E3334;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3340
	goto loc_821E3340;
loc_821E333C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3340:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9944
	ctx.r11.s64 = ctx.r11.s64 + 9944;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3708
	ctx.r4.s64 = ctx.r11.s64 + -3708;
	// bl 0x8242bdb0
	ctx.lr = 0x821E335C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3368;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3384
	if (ctx.cr6.eq) goto loc_821E3384;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-25016
	ctx.r4.s64 = ctx.r11.s64 + -25016;
	// bl 0x821ad188
	ctx.lr = 0x821E337C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3388
	goto loc_821E3388;
loc_821E3384:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3388:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9948
	ctx.r11.s64 = ctx.r11.s64 + 9948;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3728
	ctx.r4.s64 = ctx.r11.s64 + -3728;
	// bl 0x8242bdb0
	ctx.lr = 0x821E33A4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E33B0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e33cc
	if (ctx.cr6.eq) goto loc_821E33CC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-24640
	ctx.r4.s64 = ctx.r11.s64 + -24640;
	// bl 0x821ad188
	ctx.lr = 0x821E33C4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e33d0
	goto loc_821E33D0;
loc_821E33CC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E33D0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9952
	ctx.r11.s64 = ctx.r11.s64 + 9952;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3744
	ctx.r4.s64 = ctx.r11.s64 + -3744;
	// bl 0x8242bdb0
	ctx.lr = 0x821E33EC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E33F8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3414
	if (ctx.cr6.eq) goto loc_821E3414;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-24264
	ctx.r4.s64 = ctx.r11.s64 + -24264;
	// bl 0x821ad188
	ctx.lr = 0x821E340C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3418
	goto loc_821E3418;
loc_821E3414:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3418:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9956
	ctx.r11.s64 = ctx.r11.s64 + 9956;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3768
	ctx.r4.s64 = ctx.r11.s64 + -3768;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3434;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3440;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e345c
	if (ctx.cr6.eq) goto loc_821E345C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-23776
	ctx.r4.s64 = ctx.r11.s64 + -23776;
	// bl 0x821ad188
	ctx.lr = 0x821E3454;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3460
	goto loc_821E3460;
loc_821E345C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3460:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9960
	ctx.r11.s64 = ctx.r11.s64 + 9960;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3792
	ctx.r4.s64 = ctx.r11.s64 + -3792;
	// bl 0x8242bdb0
	ctx.lr = 0x821E347C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3488;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e34a4
	if (ctx.cr6.eq) goto loc_821E34A4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-23288
	ctx.r4.s64 = ctx.r11.s64 + -23288;
	// bl 0x821ad188
	ctx.lr = 0x821E349C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e34a8
	goto loc_821E34A8;
loc_821E34A4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E34A8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9964
	ctx.r11.s64 = ctx.r11.s64 + 9964;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3816
	ctx.r4.s64 = ctx.r11.s64 + -3816;
	// bl 0x8242bdb0
	ctx.lr = 0x821E34C4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E34D0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e34ec
	if (ctx.cr6.eq) goto loc_821E34EC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-22824
	ctx.r4.s64 = ctx.r11.s64 + -22824;
	// bl 0x821ad188
	ctx.lr = 0x821E34E4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e34f0
	goto loc_821E34F0;
loc_821E34EC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E34F0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9968
	ctx.r11.s64 = ctx.r11.s64 + 9968;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3832
	ctx.r4.s64 = ctx.r11.s64 + -3832;
	// bl 0x8242bdb0
	ctx.lr = 0x821E350C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3518;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3534
	if (ctx.cr6.eq) goto loc_821E3534;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-22360
	ctx.r4.s64 = ctx.r11.s64 + -22360;
	// bl 0x821ad188
	ctx.lr = 0x821E352C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3538
	goto loc_821E3538;
loc_821E3534:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3538:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9972
	ctx.r11.s64 = ctx.r11.s64 + 9972;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3844
	ctx.r4.s64 = ctx.r11.s64 + -3844;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3554;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3560;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e357c
	if (ctx.cr6.eq) goto loc_821E357C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-21904
	ctx.r4.s64 = ctx.r11.s64 + -21904;
	// bl 0x821ad188
	ctx.lr = 0x821E3574;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3580
	goto loc_821E3580;
loc_821E357C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3580:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9976
	ctx.r11.s64 = ctx.r11.s64 + 9976;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3860
	ctx.r4.s64 = ctx.r11.s64 + -3860;
	// bl 0x8242bdb0
	ctx.lr = 0x821E359C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E35A8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e35c4
	if (ctx.cr6.eq) goto loc_821E35C4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-21448
	ctx.r4.s64 = ctx.r11.s64 + -21448;
	// bl 0x821ad188
	ctx.lr = 0x821E35BC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e35c8
	goto loc_821E35C8;
loc_821E35C4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E35C8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9980
	ctx.r11.s64 = ctx.r11.s64 + 9980;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3880
	ctx.r4.s64 = ctx.r11.s64 + -3880;
	// bl 0x8242bdb0
	ctx.lr = 0x821E35E4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E35F0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e360c
	if (ctx.cr6.eq) goto loc_821E360C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-21072
	ctx.r4.s64 = ctx.r11.s64 + -21072;
	// bl 0x821ad188
	ctx.lr = 0x821E3604;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3610
	goto loc_821E3610;
loc_821E360C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3610:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9984
	ctx.r11.s64 = ctx.r11.s64 + 9984;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3904
	ctx.r4.s64 = ctx.r11.s64 + -3904;
	// bl 0x8242bdb0
	ctx.lr = 0x821E362C;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E3644"))) PPC_WEAK_FUNC(sub_821E3644);
PPC_FUNC_IMPL(__imp__sub_821E3644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E3648"))) PPC_WEAK_FUNC(sub_821E3648);
PPC_FUNC_IMPL(__imp__sub_821E3648) {
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
	// lwz r3,9988(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9988);
	// bl 0x821eda48
	ctx.lr = 0x821E3660;
	sub_821EDA48(ctx, base);
	// bl 0x821dd908
	ctx.lr = 0x821E3664;
	sub_821DD908(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E3674"))) PPC_WEAK_FUNC(sub_821E3674);
PPC_FUNC_IMPL(__imp__sub_821E3674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E3678"))) PPC_WEAK_FUNC(sub_821E3678);
PPC_FUNC_IMPL(__imp__sub_821E3678) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E36A0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e36bc
	if (ctx.cr6.eq) goto loc_821E36BC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-6584
	ctx.r4.s64 = ctx.r11.s64 + -6584;
	// bl 0x821ad188
	ctx.lr = 0x821E36B4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e36c0
	goto loc_821E36C0;
loc_821E36BC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E36C0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10076
	ctx.r11.s64 = ctx.r11.s64 + 10076;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3428
	ctx.r4.s64 = ctx.r11.s64 + -3428;
	// bl 0x8242bdb0
	ctx.lr = 0x821E36DC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E36E8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3704
	if (ctx.cr6.eq) goto loc_821E3704;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-6216
	ctx.r4.s64 = ctx.r11.s64 + -6216;
	// bl 0x821ad188
	ctx.lr = 0x821E36FC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3708
	goto loc_821E3708;
loc_821E3704:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3708:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10080
	ctx.r11.s64 = ctx.r11.s64 + 10080;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3448
	ctx.r4.s64 = ctx.r11.s64 + -3448;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3724;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3730;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e374c
	if (ctx.cr6.eq) goto loc_821E374C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-20728
	ctx.r4.s64 = ctx.r11.s64 + -20728;
	// bl 0x821ad188
	ctx.lr = 0x821E3744;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3750
	goto loc_821E3750;
loc_821E374C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3750:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10084
	ctx.r11.s64 = ctx.r11.s64 + 10084;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3460
	ctx.r4.s64 = ctx.r11.s64 + -3460;
	// bl 0x8242bdb0
	ctx.lr = 0x821E376C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3778;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3794
	if (ctx.cr6.eq) goto loc_821E3794;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-6216
	ctx.r4.s64 = ctx.r11.s64 + -6216;
	// bl 0x821ad188
	ctx.lr = 0x821E378C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3798
	goto loc_821E3798;
loc_821E3794:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3798:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10088
	ctx.r11.s64 = ctx.r11.s64 + 10088;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3476
	ctx.r4.s64 = ctx.r11.s64 + -3476;
	// bl 0x8242bdb0
	ctx.lr = 0x821E37B4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E37C0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e37dc
	if (ctx.cr6.eq) goto loc_821E37DC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-6216
	ctx.r4.s64 = ctx.r11.s64 + -6216;
	// bl 0x821ad188
	ctx.lr = 0x821E37D4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e37e0
	goto loc_821E37E0;
loc_821E37DC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E37E0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10092
	ctx.r11.s64 = ctx.r11.s64 + 10092;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3488
	ctx.r4.s64 = ctx.r11.s64 + -3488;
	// bl 0x8242bdb0
	ctx.lr = 0x821E37FC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3808;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3824
	if (ctx.cr6.eq) goto loc_821E3824;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-7456
	ctx.r4.s64 = ctx.r11.s64 + -7456;
	// bl 0x821ad188
	ctx.lr = 0x821E381C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3828
	goto loc_821E3828;
loc_821E3824:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3828:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10096
	ctx.r11.s64 = ctx.r11.s64 + 10096;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3508
	ctx.r4.s64 = ctx.r11.s64 + -3508;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3844;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E385C"))) PPC_WEAK_FUNC(sub_821E385C);
PPC_FUNC_IMPL(__imp__sub_821E385C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E3860"))) PPC_WEAK_FUNC(sub_821E3860);
PPC_FUNC_IMPL(__imp__sub_821E3860) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3888;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e38a4
	if (ctx.cr6.eq) goto loc_821E38A4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-5872
	ctx.r4.s64 = ctx.r11.s64 + -5872;
	// bl 0x821ad188
	ctx.lr = 0x821E389C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e38a8
	goto loc_821E38A8;
loc_821E38A4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E38A8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8812
	ctx.r11.s64 = ctx.r11.s64 + 8812;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3276
	ctx.r4.s64 = ctx.r11.s64 + -3276;
	// bl 0x8242bdb0
	ctx.lr = 0x821E38C4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E38D0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e38ec
	if (ctx.cr6.eq) goto loc_821E38EC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-12552
	ctx.r4.s64 = ctx.r11.s64 + -12552;
	// bl 0x821ad188
	ctx.lr = 0x821E38E4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e38f0
	goto loc_821E38F0;
loc_821E38EC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E38F0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8816
	ctx.r11.s64 = ctx.r11.s64 + 8816;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3304
	ctx.r4.s64 = ctx.r11.s64 + -3304;
	// bl 0x8242bdb0
	ctx.lr = 0x821E390C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3918;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3934
	if (ctx.cr6.eq) goto loc_821E3934;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-12408
	ctx.r4.s64 = ctx.r11.s64 + -12408;
	// bl 0x821ad188
	ctx.lr = 0x821E392C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3938
	goto loc_821E3938;
loc_821E3934:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3938:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8820
	ctx.r11.s64 = ctx.r11.s64 + 8820;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3332
	ctx.r4.s64 = ctx.r11.s64 + -3332;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3954;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3960;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e397c
	if (ctx.cr6.eq) goto loc_821E397C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-12264
	ctx.r4.s64 = ctx.r11.s64 + -12264;
	// bl 0x821ad188
	ctx.lr = 0x821E3974;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3980
	goto loc_821E3980;
loc_821E397C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3980:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8824
	ctx.r11.s64 = ctx.r11.s64 + 8824;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3364
	ctx.r4.s64 = ctx.r11.s64 + -3364;
	// bl 0x8242bdb0
	ctx.lr = 0x821E399C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E39A8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e39c4
	if (ctx.cr6.eq) goto loc_821E39C4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-5016
	ctx.r4.s64 = ctx.r11.s64 + -5016;
	// bl 0x821ad188
	ctx.lr = 0x821E39BC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e39c8
	goto loc_821E39C8;
loc_821E39C4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E39C8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8828
	ctx.r11.s64 = ctx.r11.s64 + 8828;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3376
	ctx.r4.s64 = ctx.r11.s64 + -3376;
	// bl 0x8242bdb0
	ctx.lr = 0x821E39E4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E39F0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3a0c
	if (ctx.cr6.eq) goto loc_821E3A0C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-4648
	ctx.r4.s64 = ctx.r11.s64 + -4648;
	// bl 0x821ad188
	ctx.lr = 0x821E3A04;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3a10
	goto loc_821E3A10;
loc_821E3A0C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3A10:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8832
	ctx.r11.s64 = ctx.r11.s64 + 8832;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3400
	ctx.r4.s64 = ctx.r11.s64 + -3400;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3A2C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3A38;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3a54
	if (ctx.cr6.eq) goto loc_821E3A54;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-4272
	ctx.r4.s64 = ctx.r11.s64 + -4272;
	// bl 0x821ad188
	ctx.lr = 0x821E3A4C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3a58
	goto loc_821E3A58;
loc_821E3A54:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3A58:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8836
	ctx.r11.s64 = ctx.r11.s64 + 8836;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3412
	ctx.r4.s64 = ctx.r11.s64 + -3412;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3A74;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E3A8C"))) PPC_WEAK_FUNC(sub_821E3A8C);
PPC_FUNC_IMPL(__imp__sub_821E3A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E3A90"))) PPC_WEAK_FUNC(sub_821E3A90);
PPC_FUNC_IMPL(__imp__sub_821E3A90) {
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
	// lwz r3,8840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8840);
	// bl 0x821e6918
	ctx.lr = 0x821E3AA8;
	sub_821E6918(ctx, base);
	// bl 0x821df3a8
	ctx.lr = 0x821E3AAC;
	sub_821DF3A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E3ABC"))) PPC_WEAK_FUNC(sub_821E3ABC);
PPC_FUNC_IMPL(__imp__sub_821E3ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E3AC0"))) PPC_WEAK_FUNC(sub_821E3AC0);
PPC_FUNC_IMPL(__imp__sub_821E3AC0) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3AE8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3b04
	if (ctx.cr6.eq) goto loc_821E3B04;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-9680
	ctx.r4.s64 = ctx.r11.s64 + -9680;
	// bl 0x821ad188
	ctx.lr = 0x821E3AFC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3b08
	goto loc_821E3B08;
loc_821E3B04:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3B08:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8868
	ctx.r11.s64 = ctx.r11.s64 + 8868;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2988
	ctx.r4.s64 = ctx.r11.s64 + -2988;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3B24;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3B30;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3b4c
	if (ctx.cr6.eq) goto loc_821E3B4C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-19008
	ctx.r4.s64 = ctx.r11.s64 + -19008;
	// bl 0x821ad188
	ctx.lr = 0x821E3B44;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3b50
	goto loc_821E3B50;
loc_821E3B4C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3B50:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8872
	ctx.r11.s64 = ctx.r11.s64 + 8872;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3008
	ctx.r4.s64 = ctx.r11.s64 + -3008;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3B6C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3B78;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3b94
	if (ctx.cr6.eq) goto loc_821E3B94;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-7944
	ctx.r4.s64 = ctx.r11.s64 + -7944;
	// bl 0x821ad188
	ctx.lr = 0x821E3B8C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3b98
	goto loc_821E3B98;
loc_821E3B94:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3B98:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8888
	ctx.r11.s64 = ctx.r11.s64 + 8888;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3024
	ctx.r4.s64 = ctx.r11.s64 + -3024;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3BB4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3BC0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3bdc
	if (ctx.cr6.eq) goto loc_821E3BDC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-7112
	ctx.r4.s64 = ctx.r11.s64 + -7112;
	// bl 0x821ad188
	ctx.lr = 0x821E3BD4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3be0
	goto loc_821E3BE0;
loc_821E3BDC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3BE0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8896
	ctx.r11.s64 = ctx.r11.s64 + 8896;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3040
	ctx.r4.s64 = ctx.r11.s64 + -3040;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3BFC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3C08;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3c24
	if (ctx.cr6.eq) goto loc_821E3C24;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-5272
	ctx.r4.s64 = ctx.r11.s64 + -5272;
	// bl 0x821ad188
	ctx.lr = 0x821E3C1C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3c28
	goto loc_821E3C28;
loc_821E3C24:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3C28:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8900
	ctx.r11.s64 = ctx.r11.s64 + 8900;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3060
	ctx.r4.s64 = ctx.r11.s64 + -3060;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3C44;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3C50;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3c6c
	if (ctx.cr6.eq) goto loc_821E3C6C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-4064
	ctx.r4.s64 = ctx.r11.s64 + -4064;
	// bl 0x821ad188
	ctx.lr = 0x821E3C64;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3c70
	goto loc_821E3C70;
loc_821E3C6C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3C70:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8904
	ctx.r11.s64 = ctx.r11.s64 + 8904;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3080
	ctx.r4.s64 = ctx.r11.s64 + -3080;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3C8C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3C98;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3cb4
	if (ctx.cr6.eq) goto loc_821E3CB4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-8856
	ctx.r4.s64 = ctx.r11.s64 + -8856;
	// bl 0x821ad188
	ctx.lr = 0x821E3CAC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3cb8
	goto loc_821E3CB8;
loc_821E3CB4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3CB8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8880
	ctx.r11.s64 = ctx.r11.s64 + 8880;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3092
	ctx.r4.s64 = ctx.r11.s64 + -3092;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3CD4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3CE0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3cfc
	if (ctx.cr6.eq) goto loc_821E3CFC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-9312
	ctx.r4.s64 = ctx.r11.s64 + -9312;
	// bl 0x821ad188
	ctx.lr = 0x821E3CF4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3d00
	goto loc_821E3D00;
loc_821E3CFC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3D00:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8876
	ctx.r11.s64 = ctx.r11.s64 + 8876;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3104
	ctx.r4.s64 = ctx.r11.s64 + -3104;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3D1C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3D28;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3d44
	if (ctx.cr6.eq) goto loc_821E3D44;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-7456
	ctx.r4.s64 = ctx.r11.s64 + -7456;
	// bl 0x821ad188
	ctx.lr = 0x821E3D3C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3d48
	goto loc_821E3D48;
loc_821E3D44:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3D48:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8892
	ctx.r11.s64 = ctx.r11.s64 + 8892;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3116
	ctx.r4.s64 = ctx.r11.s64 + -3116;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3D64;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3D70;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3d8c
	if (ctx.cr6.eq) goto loc_821E3D8C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-8400
	ctx.r4.s64 = ctx.r11.s64 + -8400;
	// bl 0x821ad188
	ctx.lr = 0x821E3D84;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3d90
	goto loc_821E3D90;
loc_821E3D8C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3D90:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8884
	ctx.r11.s64 = ctx.r11.s64 + 8884;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5384
	ctx.r4.s64 = ctx.r11.s64 + -5384;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3DAC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3DB8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3dd4
	if (ctx.cr6.eq) goto loc_821E3DD4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-2800
	ctx.r4.s64 = ctx.r11.s64 + -2800;
	// bl 0x821ad188
	ctx.lr = 0x821E3DCC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3dd8
	goto loc_821E3DD8;
loc_821E3DD4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3DD8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8908
	ctx.r11.s64 = ctx.r11.s64 + 8908;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3132
	ctx.r4.s64 = ctx.r11.s64 + -3132;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3DF4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3E00;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3e1c
	if (ctx.cr6.eq) goto loc_821E3E1C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,11000
	ctx.r4.s64 = ctx.r11.s64 + 11000;
	// bl 0x821ad188
	ctx.lr = 0x821E3E14;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3e20
	goto loc_821E3E20;
loc_821E3E1C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3E20:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8912
	ctx.r11.s64 = ctx.r11.s64 + 8912;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3152
	ctx.r4.s64 = ctx.r11.s64 + -3152;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3E3C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3E48;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3e64
	if (ctx.cr6.eq) goto loc_821E3E64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-25992
	ctx.r4.s64 = ctx.r11.s64 + -25992;
	// bl 0x821ad188
	ctx.lr = 0x821E3E5C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3e68
	goto loc_821E3E68;
loc_821E3E64:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3E68:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8920
	ctx.r11.s64 = ctx.r11.s64 + 8920;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3160
	ctx.r4.s64 = ctx.r11.s64 + -3160;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3E84;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3E90;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3eac
	if (ctx.cr6.eq) goto loc_821E3EAC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-7456
	ctx.r4.s64 = ctx.r11.s64 + -7456;
	// bl 0x821ad188
	ctx.lr = 0x821E3EA4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3eb0
	goto loc_821E3EB0;
loc_821E3EAC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3EB0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8916
	ctx.r11.s64 = ctx.r11.s64 + 8916;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3172
	ctx.r4.s64 = ctx.r11.s64 + -3172;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3ECC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3ED8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3ef4
	if (ctx.cr6.eq) goto loc_821E3EF4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-2432
	ctx.r4.s64 = ctx.r11.s64 + -2432;
	// bl 0x821ad188
	ctx.lr = 0x821E3EEC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3ef8
	goto loc_821E3EF8;
loc_821E3EF4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3EF8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8924
	ctx.r11.s64 = ctx.r11.s64 + 8924;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3180
	ctx.r4.s64 = ctx.r11.s64 + -3180;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3F14;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3F20;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3f3c
	if (ctx.cr6.eq) goto loc_821E3F3C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-2064
	ctx.r4.s64 = ctx.r11.s64 + -2064;
	// bl 0x821ad188
	ctx.lr = 0x821E3F34;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3f40
	goto loc_821E3F40;
loc_821E3F3C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3F40:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8928
	ctx.r11.s64 = ctx.r11.s64 + 8928;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3196
	ctx.r4.s64 = ctx.r11.s64 + -3196;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3F5C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3F68;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3f84
	if (ctx.cr6.eq) goto loc_821E3F84;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-1704
	ctx.r4.s64 = ctx.r11.s64 + -1704;
	// bl 0x821ad188
	ctx.lr = 0x821E3F7C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3f88
	goto loc_821E3F88;
loc_821E3F84:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3F88:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8932
	ctx.r11.s64 = ctx.r11.s64 + 8932;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3216
	ctx.r4.s64 = ctx.r11.s64 + -3216;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3FA4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3FB0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3fcc
	if (ctx.cr6.eq) goto loc_821E3FCC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-1336
	ctx.r4.s64 = ctx.r11.s64 + -1336;
	// bl 0x821ad188
	ctx.lr = 0x821E3FC4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e3fd0
	goto loc_821E3FD0;
loc_821E3FCC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3FD0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8936
	ctx.r11.s64 = ctx.r11.s64 + 8936;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3232
	ctx.r4.s64 = ctx.r11.s64 + -3232;
	// bl 0x8242bdb0
	ctx.lr = 0x821E3FEC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E3FF8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4014
	if (ctx.cr6.eq) goto loc_821E4014;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-968
	ctx.r4.s64 = ctx.r11.s64 + -968;
	// bl 0x821ad188
	ctx.lr = 0x821E400C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4018
	goto loc_821E4018;
loc_821E4014:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4018:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8940
	ctx.r11.s64 = ctx.r11.s64 + 8940;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3244
	ctx.r4.s64 = ctx.r11.s64 + -3244;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4034;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4040;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e405c
	if (ctx.cr6.eq) goto loc_821E405C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-600
	ctx.r4.s64 = ctx.r11.s64 + -600;
	// bl 0x821ad188
	ctx.lr = 0x821E4054;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4060
	goto loc_821E4060;
loc_821E405C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4060:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8944
	ctx.r11.s64 = ctx.r11.s64 + 8944;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3256
	ctx.r4.s64 = ctx.r11.s64 + -3256;
	// bl 0x8242bdb0
	ctx.lr = 0x821E407C;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E4094"))) PPC_WEAK_FUNC(sub_821E4094);
PPC_FUNC_IMPL(__imp__sub_821E4094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4098"))) PPC_WEAK_FUNC(sub_821E4098);
PPC_FUNC_IMPL(__imp__sub_821E4098) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E40C0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e40dc
	if (ctx.cr6.eq) goto loc_821E40DC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,4656
	ctx.r4.s64 = ctx.r11.s64 + 4656;
	// bl 0x821ad188
	ctx.lr = 0x821E40D4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e40e0
	goto loc_821E40E0;
loc_821E40DC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E40E0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8988
	ctx.r11.s64 = ctx.r11.s64 + 8988;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2644
	ctx.r4.s64 = ctx.r11.s64 + -2644;
	// bl 0x8242bdb0
	ctx.lr = 0x821E40FC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4108;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4124
	if (ctx.cr6.eq) goto loc_821E4124;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,632
	ctx.r4.s64 = ctx.r11.s64 + 632;
	// bl 0x821ad188
	ctx.lr = 0x821E411C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4128
	goto loc_821E4128;
loc_821E4124:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4128:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8968
	ctx.r11.s64 = ctx.r11.s64 + 8968;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2660
	ctx.r4.s64 = ctx.r11.s64 + -2660;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4144;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4150;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e416c
	if (ctx.cr6.eq) goto loc_821E416C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,1000
	ctx.r4.s64 = ctx.r11.s64 + 1000;
	// bl 0x821ad188
	ctx.lr = 0x821E4164;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4170
	goto loc_821E4170;
loc_821E416C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4170:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8972
	ctx.r11.s64 = ctx.r11.s64 + 8972;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2680
	ctx.r4.s64 = ctx.r11.s64 + -2680;
	// bl 0x8242bdb0
	ctx.lr = 0x821E418C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4198;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e41b4
	if (ctx.cr6.eq) goto loc_821E41B4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,4200
	ctx.r4.s64 = ctx.r11.s64 + 4200;
	// bl 0x821ad188
	ctx.lr = 0x821E41AC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e41b8
	goto loc_821E41B8;
loc_821E41B4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E41B8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8984
	ctx.r11.s64 = ctx.r11.s64 + 8984;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2696
	ctx.r4.s64 = ctx.r11.s64 + -2696;
	// bl 0x8242bdb0
	ctx.lr = 0x821E41D4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E41E0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e41fc
	if (ctx.cr6.eq) goto loc_821E41FC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-1088
	ctx.r4.s64 = ctx.r11.s64 + -1088;
	// bl 0x821ad188
	ctx.lr = 0x821E41F4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4200
	goto loc_821E4200;
loc_821E41FC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4200:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8976
	ctx.r11.s64 = ctx.r11.s64 + 8976;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2712
	ctx.r4.s64 = ctx.r11.s64 + -2712;
	// bl 0x8242bdb0
	ctx.lr = 0x821E421C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4228;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4244
	if (ctx.cr6.eq) goto loc_821E4244;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-944
	ctx.r4.s64 = ctx.r11.s64 + -944;
	// bl 0x821ad188
	ctx.lr = 0x821E423C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4248
	goto loc_821E4248;
loc_821E4244:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4248:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8980
	ctx.r11.s64 = ctx.r11.s64 + 8980;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2732
	ctx.r4.s64 = ctx.r11.s64 + -2732;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4264;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4270;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e428c
	if (ctx.cr6.eq) goto loc_821E428C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,5024
	ctx.r4.s64 = ctx.r11.s64 + 5024;
	// bl 0x821ad188
	ctx.lr = 0x821E4284;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4290
	goto loc_821E4290;
loc_821E428C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4290:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8992
	ctx.r11.s64 = ctx.r11.s64 + 8992;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2748
	ctx.r4.s64 = ctx.r11.s64 + -2748;
	// bl 0x8242bdb0
	ctx.lr = 0x821E42AC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E42B8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e42d4
	if (ctx.cr6.eq) goto loc_821E42D4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,10288
	ctx.r4.s64 = ctx.r11.s64 + 10288;
	// bl 0x821ad188
	ctx.lr = 0x821E42CC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e42d8
	goto loc_821E42D8;
loc_821E42D4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E42D8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9020
	ctx.r11.s64 = ctx.r11.s64 + 9020;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2760
	ctx.r4.s64 = ctx.r11.s64 + -2760;
	// bl 0x8242bdb0
	ctx.lr = 0x821E42F4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4300;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e431c
	if (ctx.cr6.eq) goto loc_821E431C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-25600
	ctx.r4.s64 = ctx.r11.s64 + -25600;
	// bl 0x821ad188
	ctx.lr = 0x821E4314;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4320
	goto loc_821E4320;
loc_821E431C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4320:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9024
	ctx.r11.s64 = ctx.r11.s64 + 9024;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2780
	ctx.r4.s64 = ctx.r11.s64 + -2780;
	// bl 0x8242bdb0
	ctx.lr = 0x821E433C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4348;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4364
	if (ctx.cr6.eq) goto loc_821E4364;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-18736
	ctx.r4.s64 = ctx.r11.s64 + -18736;
	// bl 0x821ad188
	ctx.lr = 0x821E435C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4368
	goto loc_821E4368;
loc_821E4364:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4368:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9040
	ctx.r11.s64 = ctx.r11.s64 + 9040;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2804
	ctx.r4.s64 = ctx.r11.s64 + -2804;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4384;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4390;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e43ac
	if (ctx.cr6.eq) goto loc_821E43AC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,5576
	ctx.r4.s64 = ctx.r11.s64 + 5576;
	// bl 0x821ad188
	ctx.lr = 0x821E43A4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e43b0
	goto loc_821E43B0;
loc_821E43AC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E43B0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8996
	ctx.r11.s64 = ctx.r11.s64 + 8996;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2812
	ctx.r4.s64 = ctx.r11.s64 + -2812;
	// bl 0x8242bdb0
	ctx.lr = 0x821E43CC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E43D8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e43f4
	if (ctx.cr6.eq) goto loc_821E43F4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,9744
	ctx.r4.s64 = ctx.r11.s64 + 9744;
	// bl 0x821ad188
	ctx.lr = 0x821E43EC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e43f8
	goto loc_821E43F8;
loc_821E43F4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E43F8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9016
	ctx.r11.s64 = ctx.r11.s64 + 9016;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2824
	ctx.r4.s64 = ctx.r11.s64 + -2824;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4414;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4420;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e443c
	if (ctx.cr6.eq) goto loc_821E443C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,7200
	ctx.r4.s64 = ctx.r11.s64 + 7200;
	// bl 0x821ad188
	ctx.lr = 0x821E4434;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4440
	goto loc_821E4440;
loc_821E443C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4440:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9000
	ctx.r11.s64 = ctx.r11.s64 + 9000;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2840
	ctx.r4.s64 = ctx.r11.s64 + -2840;
	// bl 0x8242bdb0
	ctx.lr = 0x821E445C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4468;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4484
	if (ctx.cr6.eq) goto loc_821E4484;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,7568
	ctx.r4.s64 = ctx.r11.s64 + 7568;
	// bl 0x821ad188
	ctx.lr = 0x821E447C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4488
	goto loc_821E4488;
loc_821E4484:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4488:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9004
	ctx.r11.s64 = ctx.r11.s64 + 9004;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2864
	ctx.r4.s64 = ctx.r11.s64 + -2864;
	// bl 0x8242bdb0
	ctx.lr = 0x821E44A4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E44B0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e44cc
	if (ctx.cr6.eq) goto loc_821E44CC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,9008
	ctx.r4.s64 = ctx.r11.s64 + 9008;
	// bl 0x821ad188
	ctx.lr = 0x821E44C4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e44d0
	goto loc_821E44D0;
loc_821E44CC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E44D0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9008
	ctx.r11.s64 = ctx.r11.s64 + 9008;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2880
	ctx.r4.s64 = ctx.r11.s64 + -2880;
	// bl 0x8242bdb0
	ctx.lr = 0x821E44EC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E44F8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4514
	if (ctx.cr6.eq) goto loc_821E4514;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,9368
	ctx.r4.s64 = ctx.r11.s64 + 9368;
	// bl 0x821ad188
	ctx.lr = 0x821E450C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4518
	goto loc_821E4518;
loc_821E4514:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4518:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9012
	ctx.r11.s64 = ctx.r11.s64 + 9012;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2904
	ctx.r4.s64 = ctx.r11.s64 + -2904;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4534;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4540;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e455c
	if (ctx.cr6.eq) goto loc_821E455C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,10768
	ctx.r4.s64 = ctx.r11.s64 + 10768;
	// bl 0x821ad188
	ctx.lr = 0x821E4554;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4560
	goto loc_821E4560;
loc_821E455C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4560:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9028
	ctx.r11.s64 = ctx.r11.s64 + 9028;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2920
	ctx.r4.s64 = ctx.r11.s64 + -2920;
	// bl 0x8242bdb0
	ctx.lr = 0x821E457C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4588;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e45a4
	if (ctx.cr6.eq) goto loc_821E45A4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,11320
	ctx.r4.s64 = ctx.r11.s64 + 11320;
	// bl 0x821ad188
	ctx.lr = 0x821E459C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e45a8
	goto loc_821E45A8;
loc_821E45A4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E45A8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9032
	ctx.r11.s64 = ctx.r11.s64 + 9032;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2936
	ctx.r4.s64 = ctx.r11.s64 + -2936;
	// bl 0x8242bdb0
	ctx.lr = 0x821E45C4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E45D0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e45ec
	if (ctx.cr6.eq) goto loc_821E45EC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,11688
	ctx.r4.s64 = ctx.r11.s64 + 11688;
	// bl 0x821ad188
	ctx.lr = 0x821E45E4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e45f0
	goto loc_821E45F0;
loc_821E45EC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E45F0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9036
	ctx.r11.s64 = ctx.r11.s64 + 9036;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2952
	ctx.r4.s64 = ctx.r11.s64 + -2952;
	// bl 0x8242bdb0
	ctx.lr = 0x821E460C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4618;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4634
	if (ctx.cr6.eq) goto loc_821E4634;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,12144
	ctx.r4.s64 = ctx.r11.s64 + 12144;
	// bl 0x821ad188
	ctx.lr = 0x821E462C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4638
	goto loc_821E4638;
loc_821E4634:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4638:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9044
	ctx.r11.s64 = ctx.r11.s64 + 9044;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2968
	ctx.r4.s64 = ctx.r11.s64 + -2968;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4654;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E466C"))) PPC_WEAK_FUNC(sub_821E466C);
PPC_FUNC_IMPL(__imp__sub_821E466C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4670"))) PPC_WEAK_FUNC(sub_821E4670);
PPC_FUNC_IMPL(__imp__sub_821E4670) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4698;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e46b4
	if (ctx.cr6.eq) goto loc_821E46B4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,12504
	ctx.r4.s64 = ctx.r11.s64 + 12504;
	// bl 0x821ad188
	ctx.lr = 0x821E46AC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e46b8
	goto loc_821E46B8;
loc_821E46B4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E46B8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9052
	ctx.r11.s64 = ctx.r11.s64 + 9052;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2364
	ctx.r4.s64 = ctx.r11.s64 + -2364;
	// bl 0x8242bdb0
	ctx.lr = 0x821E46D4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E46E0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e46fc
	if (ctx.cr6.eq) goto loc_821E46FC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,12976
	ctx.r4.s64 = ctx.r11.s64 + 12976;
	// bl 0x821ad188
	ctx.lr = 0x821E46F4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4700
	goto loc_821E4700;
loc_821E46FC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4700:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9056
	ctx.r11.s64 = ctx.r11.s64 + 9056;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2372
	ctx.r4.s64 = ctx.r11.s64 + -2372;
	// bl 0x8242bdb0
	ctx.lr = 0x821E471C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4728;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4744
	if (ctx.cr6.eq) goto loc_821E4744;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-800
	ctx.r4.s64 = ctx.r11.s64 + -800;
	// bl 0x821ad188
	ctx.lr = 0x821E473C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4748
	goto loc_821E4748;
loc_821E4744:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4748:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9060
	ctx.r11.s64 = ctx.r11.s64 + 9060;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2392
	ctx.r4.s64 = ctx.r11.s64 + -2392;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4764;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4770;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e478c
	if (ctx.cr6.eq) goto loc_821E478C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,14072
	ctx.r4.s64 = ctx.r11.s64 + 14072;
	// bl 0x821ad188
	ctx.lr = 0x821E4784;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4790
	goto loc_821E4790;
loc_821E478C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4790:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9076
	ctx.r11.s64 = ctx.r11.s64 + 9076;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2404
	ctx.r4.s64 = ctx.r11.s64 + -2404;
	// bl 0x8242bdb0
	ctx.lr = 0x821E47AC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E47B8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e47d4
	if (ctx.cr6.eq) goto loc_821E47D4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-608
	ctx.r4.s64 = ctx.r11.s64 + -608;
	// bl 0x821ad188
	ctx.lr = 0x821E47CC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e47d8
	goto loc_821E47D8;
loc_821E47D4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E47D8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9080
	ctx.r11.s64 = ctx.r11.s64 + 9080;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2420
	ctx.r4.s64 = ctx.r11.s64 + -2420;
	// bl 0x8242bdb0
	ctx.lr = 0x821E47F4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4800;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e481c
	if (ctx.cr6.eq) goto loc_821E481C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,13336
	ctx.r4.s64 = ctx.r11.s64 + 13336;
	// bl 0x821ad188
	ctx.lr = 0x821E4814;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4820
	goto loc_821E4820;
loc_821E481C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4820:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9064
	ctx.r11.s64 = ctx.r11.s64 + 9064;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2444
	ctx.r4.s64 = ctx.r11.s64 + -2444;
	// bl 0x8242bdb0
	ctx.lr = 0x821E483C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4848;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4864
	if (ctx.cr6.eq) goto loc_821E4864;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,13704
	ctx.r4.s64 = ctx.r11.s64 + 13704;
	// bl 0x821ad188
	ctx.lr = 0x821E485C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4868
	goto loc_821E4868;
loc_821E4864:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4868:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9068
	ctx.r11.s64 = ctx.r11.s64 + 9068;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2456
	ctx.r4.s64 = ctx.r11.s64 + -2456;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4884;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4890;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e48ac
	if (ctx.cr6.eq) goto loc_821E48AC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-784
	ctx.r4.s64 = ctx.r11.s64 + -784;
	// bl 0x821ad188
	ctx.lr = 0x821E48A4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e48b0
	goto loc_821E48B0;
loc_821E48AC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E48B0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9072
	ctx.r11.s64 = ctx.r11.s64 + 9072;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2472
	ctx.r4.s64 = ctx.r11.s64 + -2472;
	// bl 0x8242bdb0
	ctx.lr = 0x821E48CC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E48D8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e48f4
	if (ctx.cr6.eq) goto loc_821E48F4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,14552
	ctx.r4.s64 = ctx.r11.s64 + 14552;
	// bl 0x821ad188
	ctx.lr = 0x821E48EC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e48f8
	goto loc_821E48F8;
loc_821E48F4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E48F8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9084
	ctx.r11.s64 = ctx.r11.s64 + 9084;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2484
	ctx.r4.s64 = ctx.r11.s64 + -2484;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4914;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4920;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e493c
	if (ctx.cr6.eq) goto loc_821E493C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-528
	ctx.r4.s64 = ctx.r11.s64 + -528;
	// bl 0x821ad188
	ctx.lr = 0x821E4934;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4940
	goto loc_821E4940;
loc_821E493C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4940:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9088
	ctx.r11.s64 = ctx.r11.s64 + 9088;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2496
	ctx.r4.s64 = ctx.r11.s64 + -2496;
	// bl 0x8242bdb0
	ctx.lr = 0x821E495C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4968;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4984
	if (ctx.cr6.eq) goto loc_821E4984;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,16104
	ctx.r4.s64 = ctx.r11.s64 + 16104;
	// bl 0x821ad188
	ctx.lr = 0x821E497C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4988
	goto loc_821E4988;
loc_821E4984:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4988:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9104
	ctx.r11.s64 = ctx.r11.s64 + 9104;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2512
	ctx.r4.s64 = ctx.r11.s64 + -2512;
	// bl 0x8242bdb0
	ctx.lr = 0x821E49A4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E49B0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e49cc
	if (ctx.cr6.eq) goto loc_821E49CC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,15008
	ctx.r4.s64 = ctx.r11.s64 + 15008;
	// bl 0x821ad188
	ctx.lr = 0x821E49C4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e49d0
	goto loc_821E49D0;
loc_821E49CC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E49D0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9092
	ctx.r11.s64 = ctx.r11.s64 + 9092;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2524
	ctx.r4.s64 = ctx.r11.s64 + -2524;
	// bl 0x8242bdb0
	ctx.lr = 0x821E49EC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E49F8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4a14
	if (ctx.cr6.eq) goto loc_821E4A14;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,15368
	ctx.r4.s64 = ctx.r11.s64 + 15368;
	// bl 0x821ad188
	ctx.lr = 0x821E4A0C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4a18
	goto loc_821E4A18;
loc_821E4A14:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4A18:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9096
	ctx.r11.s64 = ctx.r11.s64 + 9096;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2540
	ctx.r4.s64 = ctx.r11.s64 + -2540;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4A34;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4A40;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4a5c
	if (ctx.cr6.eq) goto loc_821E4A5C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,15736
	ctx.r4.s64 = ctx.r11.s64 + 15736;
	// bl 0x821ad188
	ctx.lr = 0x821E4A54;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4a60
	goto loc_821E4A60;
loc_821E4A5C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4A60:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9100
	ctx.r11.s64 = ctx.r11.s64 + 9100;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2552
	ctx.r4.s64 = ctx.r11.s64 + -2552;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4A7C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4A88;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4aa4
	if (ctx.cr6.eq) goto loc_821E4AA4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,16552
	ctx.r4.s64 = ctx.r11.s64 + 16552;
	// bl 0x821ad188
	ctx.lr = 0x821E4A9C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4aa8
	goto loc_821E4AA8;
loc_821E4AA4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4AA8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9108
	ctx.r11.s64 = ctx.r11.s64 + 9108;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2568
	ctx.r4.s64 = ctx.r11.s64 + -2568;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4AC4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4AD0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4aec
	if (ctx.cr6.eq) goto loc_821E4AEC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,17040
	ctx.r4.s64 = ctx.r11.s64 + 17040;
	// bl 0x821ad188
	ctx.lr = 0x821E4AE4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4af0
	goto loc_821E4AF0;
loc_821E4AEC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4AF0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9112
	ctx.r11.s64 = ctx.r11.s64 + 9112;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2588
	ctx.r4.s64 = ctx.r11.s64 + -2588;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4B0C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4B18;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4b34
	if (ctx.cr6.eq) goto loc_821E4B34;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,17528
	ctx.r4.s64 = ctx.r11.s64 + 17528;
	// bl 0x821ad188
	ctx.lr = 0x821E4B2C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4b38
	goto loc_821E4B38;
loc_821E4B34:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4B38:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9116
	ctx.r11.s64 = ctx.r11.s64 + 9116;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2608
	ctx.r4.s64 = ctx.r11.s64 + -2608;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4B54;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4B60;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4b7c
	if (ctx.cr6.eq) goto loc_821E4B7C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,17912
	ctx.r4.s64 = ctx.r11.s64 + 17912;
	// bl 0x821ad188
	ctx.lr = 0x821E4B74;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4b80
	goto loc_821E4B80;
loc_821E4B7C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4B80:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9120
	ctx.r11.s64 = ctx.r11.s64 + 9120;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2628
	ctx.r4.s64 = ctx.r11.s64 + -2628;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4B9C;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E4BB4"))) PPC_WEAK_FUNC(sub_821E4BB4);
PPC_FUNC_IMPL(__imp__sub_821E4BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4BB8"))) PPC_WEAK_FUNC(sub_821E4BB8);
PPC_FUNC_IMPL(__imp__sub_821E4BB8) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4BE0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4bfc
	if (ctx.cr6.eq) goto loc_821E4BFC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-456
	ctx.r4.s64 = ctx.r11.s64 + -456;
	// bl 0x821ad188
	ctx.lr = 0x821E4BF4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4c00
	goto loc_821E4C00;
loc_821E4BFC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4C00:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9128
	ctx.r11.s64 = ctx.r11.s64 + 9128;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2248
	ctx.r4.s64 = ctx.r11.s64 + -2248;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4C1C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4C28;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4c44
	if (ctx.cr6.eq) goto loc_821E4C44;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-18600
	ctx.r4.s64 = ctx.r11.s64 + -18600;
	// bl 0x821ad188
	ctx.lr = 0x821E4C3C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4c48
	goto loc_821E4C48;
loc_821E4C44:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4C48:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9132
	ctx.r11.s64 = ctx.r11.s64 + 9132;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2264
	ctx.r4.s64 = ctx.r11.s64 + -2264;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4C64;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4C70;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4c8c
	if (ctx.cr6.eq) goto loc_821E4C8C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-18400
	ctx.r4.s64 = ctx.r11.s64 + -18400;
	// bl 0x821ad188
	ctx.lr = 0x821E4C84;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4c90
	goto loc_821E4C90;
loc_821E4C8C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4C90:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9136
	ctx.r11.s64 = ctx.r11.s64 + 9136;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2280
	ctx.r4.s64 = ctx.r11.s64 + -2280;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4CAC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4CB8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4cd4
	if (ctx.cr6.eq) goto loc_821E4CD4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-23416
	ctx.r4.s64 = ctx.r11.s64 + -23416;
	// bl 0x821ad188
	ctx.lr = 0x821E4CCC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4cd8
	goto loc_821E4CD8;
loc_821E4CD4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4CD8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9140
	ctx.r11.s64 = ctx.r11.s64 + 9140;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2296
	ctx.r4.s64 = ctx.r11.s64 + -2296;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4CF4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4D00;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4d1c
	if (ctx.cr6.eq) goto loc_821E4D1C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,29064
	ctx.r4.s64 = ctx.r11.s64 + 29064;
	// bl 0x821ad188
	ctx.lr = 0x821E4D14;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4d20
	goto loc_821E4D20;
loc_821E4D1C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4D20:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9144
	ctx.r11.s64 = ctx.r11.s64 + 9144;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2316
	ctx.r4.s64 = ctx.r11.s64 + -2316;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4D3C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4D48;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4d64
	if (ctx.cr6.eq) goto loc_821E4D64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-18128
	ctx.r4.s64 = ctx.r11.s64 + -18128;
	// bl 0x821ad188
	ctx.lr = 0x821E4D5C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4d68
	goto loc_821E4D68;
loc_821E4D64:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4D68:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9148
	ctx.r11.s64 = ctx.r11.s64 + 9148;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2336
	ctx.r4.s64 = ctx.r11.s64 + -2336;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4D84;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4D90;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4dac
	if (ctx.cr6.eq) goto loc_821E4DAC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-17992
	ctx.r4.s64 = ctx.r11.s64 + -17992;
	// bl 0x821ad188
	ctx.lr = 0x821E4DA4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4db0
	goto loc_821E4DB0;
loc_821E4DAC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4DB0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9152
	ctx.r11.s64 = ctx.r11.s64 + 9152;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2356
	ctx.r4.s64 = ctx.r11.s64 + -2356;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4DCC;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E4DE4"))) PPC_WEAK_FUNC(sub_821E4DE4);
PPC_FUNC_IMPL(__imp__sub_821E4DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E4DE8"))) PPC_WEAK_FUNC(sub_821E4DE8);
PPC_FUNC_IMPL(__imp__sub_821E4DE8) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4E10;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4e2c
	if (ctx.cr6.eq) goto loc_821E4E2C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-26976
	ctx.r4.s64 = ctx.r11.s64 + -26976;
	// bl 0x821ad188
	ctx.lr = 0x821E4E24;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4e30
	goto loc_821E4E30;
loc_821E4E2C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4E30:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9164
	ctx.r11.s64 = ctx.r11.s64 + 9164;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1608
	ctx.r4.s64 = ctx.r11.s64 + -1608;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4E4C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4E58;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4e74
	if (ctx.cr6.eq) goto loc_821E4E74;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-26608
	ctx.r4.s64 = ctx.r11.s64 + -26608;
	// bl 0x821ad188
	ctx.lr = 0x821E4E6C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4e78
	goto loc_821E4E78;
loc_821E4E74:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4E78:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9168
	ctx.r11.s64 = ctx.r11.s64 + 9168;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1628
	ctx.r4.s64 = ctx.r11.s64 + -1628;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4E94;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4EA0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4ebc
	if (ctx.cr6.eq) goto loc_821E4EBC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-304
	ctx.r4.s64 = ctx.r11.s64 + -304;
	// bl 0x821ad188
	ctx.lr = 0x821E4EB4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4ec0
	goto loc_821E4EC0;
loc_821E4EBC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4EC0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9180
	ctx.r11.s64 = ctx.r11.s64 + 9180;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1648
	ctx.r4.s64 = ctx.r11.s64 + -1648;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4EDC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4EE8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4f04
	if (ctx.cr6.eq) goto loc_821E4F04;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-112
	ctx.r4.s64 = ctx.r11.s64 + -112;
	// bl 0x821ad188
	ctx.lr = 0x821E4EFC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4f08
	goto loc_821E4F08;
loc_821E4F04:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4F08:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9188
	ctx.r11.s64 = ctx.r11.s64 + 9188;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1676
	ctx.r4.s64 = ctx.r11.s64 + -1676;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4F24;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4F30;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4f4c
	if (ctx.cr6.eq) goto loc_821E4F4C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-25504
	ctx.r4.s64 = ctx.r11.s64 + -25504;
	// bl 0x821ad188
	ctx.lr = 0x821E4F44;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4f50
	goto loc_821E4F50;
loc_821E4F4C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4F50:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9184
	ctx.r11.s64 = ctx.r11.s64 + 9184;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1696
	ctx.r4.s64 = ctx.r11.s64 + -1696;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4F6C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4F78;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4f94
	if (ctx.cr6.eq) goto loc_821E4F94;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-25016
	ctx.r4.s64 = ctx.r11.s64 + -25016;
	// bl 0x821ad188
	ctx.lr = 0x821E4F8C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4f98
	goto loc_821E4F98;
loc_821E4F94:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4F98:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9192
	ctx.r11.s64 = ctx.r11.s64 + 9192;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1720
	ctx.r4.s64 = ctx.r11.s64 + -1720;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4FB4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E4FC0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e4fdc
	if (ctx.cr6.eq) goto loc_821E4FDC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-24648
	ctx.r4.s64 = ctx.r11.s64 + -24648;
	// bl 0x821ad188
	ctx.lr = 0x821E4FD4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e4fe0
	goto loc_821E4FE0;
loc_821E4FDC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E4FE0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9196
	ctx.r11.s64 = ctx.r11.s64 + 9196;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1740
	ctx.r4.s64 = ctx.r11.s64 + -1740;
	// bl 0x8242bdb0
	ctx.lr = 0x821E4FFC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5008;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5024
	if (ctx.cr6.eq) goto loc_821E5024;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-24280
	ctx.r4.s64 = ctx.r11.s64 + -24280;
	// bl 0x821ad188
	ctx.lr = 0x821E501C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5028
	goto loc_821E5028;
loc_821E5024:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5028:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9200
	ctx.r11.s64 = ctx.r11.s64 + 9200;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1756
	ctx.r4.s64 = ctx.r11.s64 + -1756;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5044;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5050;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e506c
	if (ctx.cr6.eq) goto loc_821E506C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-23376
	ctx.r4.s64 = ctx.r11.s64 + -23376;
	// bl 0x821ad188
	ctx.lr = 0x821E5064;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5070
	goto loc_821E5070;
loc_821E506C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5070:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9204
	ctx.r11.s64 = ctx.r11.s64 + 9204;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1776
	ctx.r4.s64 = ctx.r11.s64 + -1776;
	// bl 0x8242bdb0
	ctx.lr = 0x821E508C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5098;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e50b4
	if (ctx.cr6.eq) goto loc_821E50B4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-23016
	ctx.r4.s64 = ctx.r11.s64 + -23016;
	// bl 0x821ad188
	ctx.lr = 0x821E50AC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e50b8
	goto loc_821E50B8;
loc_821E50B4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E50B8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9208
	ctx.r11.s64 = ctx.r11.s64 + 9208;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1792
	ctx.r4.s64 = ctx.r11.s64 + -1792;
	// bl 0x8242bdb0
	ctx.lr = 0x821E50D4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E50E0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e50fc
	if (ctx.cr6.eq) goto loc_821E50FC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-22528
	ctx.r4.s64 = ctx.r11.s64 + -22528;
	// bl 0x821ad188
	ctx.lr = 0x821E50F4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5100
	goto loc_821E5100;
loc_821E50FC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5100:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9212
	ctx.r11.s64 = ctx.r11.s64 + 9212;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1808
	ctx.r4.s64 = ctx.r11.s64 + -1808;
	// bl 0x8242bdb0
	ctx.lr = 0x821E511C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5128;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5144
	if (ctx.cr6.eq) goto loc_821E5144;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-22168
	ctx.r4.s64 = ctx.r11.s64 + -22168;
	// bl 0x821ad188
	ctx.lr = 0x821E513C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5148
	goto loc_821E5148;
loc_821E5144:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5148:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9216
	ctx.r11.s64 = ctx.r11.s64 + 9216;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1816
	ctx.r4.s64 = ctx.r11.s64 + -1816;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5164;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5170;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e518c
	if (ctx.cr6.eq) goto loc_821E518C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-21808
	ctx.r4.s64 = ctx.r11.s64 + -21808;
	// bl 0x821ad188
	ctx.lr = 0x821E5184;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5190
	goto loc_821E5190;
loc_821E518C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5190:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9220
	ctx.r11.s64 = ctx.r11.s64 + 9220;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1832
	ctx.r4.s64 = ctx.r11.s64 + -1832;
	// bl 0x8242bdb0
	ctx.lr = 0x821E51AC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E51B8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e51d4
	if (ctx.cr6.eq) goto loc_821E51D4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-21448
	ctx.r4.s64 = ctx.r11.s64 + -21448;
	// bl 0x821ad188
	ctx.lr = 0x821E51CC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e51d8
	goto loc_821E51D8;
loc_821E51D4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E51D8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9224
	ctx.r11.s64 = ctx.r11.s64 + 9224;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1856
	ctx.r4.s64 = ctx.r11.s64 + -1856;
	// bl 0x8242bdb0
	ctx.lr = 0x821E51F4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5200;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e521c
	if (ctx.cr6.eq) goto loc_821E521C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-21080
	ctx.r4.s64 = ctx.r11.s64 + -21080;
	// bl 0x821ad188
	ctx.lr = 0x821E5214;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5220
	goto loc_821E5220;
loc_821E521C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5220:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9228
	ctx.r11.s64 = ctx.r11.s64 + 9228;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1876
	ctx.r4.s64 = ctx.r11.s64 + -1876;
	// bl 0x8242bdb0
	ctx.lr = 0x821E523C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5248;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5264
	if (ctx.cr6.eq) goto loc_821E5264;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-20160
	ctx.r4.s64 = ctx.r11.s64 + -20160;
	// bl 0x821ad188
	ctx.lr = 0x821E525C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5268
	goto loc_821E5268;
loc_821E5264:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5268:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9232
	ctx.r11.s64 = ctx.r11.s64 + 9232;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1900
	ctx.r4.s64 = ctx.r11.s64 + -1900;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5284;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5290;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e52ac
	if (ctx.cr6.eq) goto loc_821E52AC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-23192
	ctx.r4.s64 = ctx.r11.s64 + -23192;
	// bl 0x821ad188
	ctx.lr = 0x821E52A4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e52b0
	goto loc_821E52B0;
loc_821E52AC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E52B0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9264
	ctx.r11.s64 = ctx.r11.s64 + 9264;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1928
	ctx.r4.s64 = ctx.r11.s64 + -1928;
	// bl 0x8242bdb0
	ctx.lr = 0x821E52CC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E52D8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e52f4
	if (ctx.cr6.eq) goto loc_821E52F4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-15784
	ctx.r4.s64 = ctx.r11.s64 + -15784;
	// bl 0x821ad188
	ctx.lr = 0x821E52EC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e52f8
	goto loc_821E52F8;
loc_821E52F4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E52F8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9240
	ctx.r11.s64 = ctx.r11.s64 + 9240;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1952
	ctx.r4.s64 = ctx.r11.s64 + -1952;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5314;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5320;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e533c
	if (ctx.cr6.eq) goto loc_821E533C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-15424
	ctx.r4.s64 = ctx.r11.s64 + -15424;
	// bl 0x821ad188
	ctx.lr = 0x821E5334;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5340
	goto loc_821E5340;
loc_821E533C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5340:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9244
	ctx.r11.s64 = ctx.r11.s64 + 9244;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1976
	ctx.r4.s64 = ctx.r11.s64 + -1976;
	// bl 0x8242bdb0
	ctx.lr = 0x821E535C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5368;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5384
	if (ctx.cr6.eq) goto loc_821E5384;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-19512
	ctx.r4.s64 = ctx.r11.s64 + -19512;
	// bl 0x821ad188
	ctx.lr = 0x821E537C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5388
	goto loc_821E5388;
loc_821E5384:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5388:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9236
	ctx.r11.s64 = ctx.r11.s64 + 9236;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2004
	ctx.r4.s64 = ctx.r11.s64 + -2004;
	// bl 0x8242bdb0
	ctx.lr = 0x821E53A4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E53B0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e53cc
	if (ctx.cr6.eq) goto loc_821E53CC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-26240
	ctx.r4.s64 = ctx.r11.s64 + -26240;
	// bl 0x821ad188
	ctx.lr = 0x821E53C4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e53d0
	goto loc_821E53D0;
loc_821E53CC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E53D0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9172
	ctx.r11.s64 = ctx.r11.s64 + 9172;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2020
	ctx.r4.s64 = ctx.r11.s64 + -2020;
	// bl 0x8242bdb0
	ctx.lr = 0x821E53EC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E53F8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5414
	if (ctx.cr6.eq) goto loc_821E5414;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-25872
	ctx.r4.s64 = ctx.r11.s64 + -25872;
	// bl 0x821ad188
	ctx.lr = 0x821E540C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5418
	goto loc_821E5418;
loc_821E5414:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5418:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9176
	ctx.r11.s64 = ctx.r11.s64 + 9176;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2032
	ctx.r4.s64 = ctx.r11.s64 + -2032;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5434;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5440;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e545c
	if (ctx.cr6.eq) goto loc_821E545C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-15056
	ctx.r4.s64 = ctx.r11.s64 + -15056;
	// bl 0x821ad188
	ctx.lr = 0x821E5454;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5460
	goto loc_821E5460;
loc_821E545C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5460:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9248
	ctx.r11.s64 = ctx.r11.s64 + 9248;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2052
	ctx.r4.s64 = ctx.r11.s64 + -2052;
	// bl 0x8242bdb0
	ctx.lr = 0x821E547C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5488;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e54a4
	if (ctx.cr6.eq) goto loc_821E54A4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-14688
	ctx.r4.s64 = ctx.r11.s64 + -14688;
	// bl 0x821ad188
	ctx.lr = 0x821E549C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e54a8
	goto loc_821E54A8;
loc_821E54A4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E54A8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9252
	ctx.r11.s64 = ctx.r11.s64 + 9252;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2072
	ctx.r4.s64 = ctx.r11.s64 + -2072;
	// bl 0x8242bdb0
	ctx.lr = 0x821E54C4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E54D0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e54ec
	if (ctx.cr6.eq) goto loc_821E54EC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-14264
	ctx.r4.s64 = ctx.r11.s64 + -14264;
	// bl 0x821ad188
	ctx.lr = 0x821E54E4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e54f0
	goto loc_821E54F0;
loc_821E54EC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E54F0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9256
	ctx.r11.s64 = ctx.r11.s64 + 9256;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2092
	ctx.r4.s64 = ctx.r11.s64 + -2092;
	// bl 0x8242bdb0
	ctx.lr = 0x821E550C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5518;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5534
	if (ctx.cr6.eq) goto loc_821E5534;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-17856
	ctx.r4.s64 = ctx.r11.s64 + -17856;
	// bl 0x821ad188
	ctx.lr = 0x821E552C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5538
	goto loc_821E5538;
loc_821E5534:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5538:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9260
	ctx.r11.s64 = ctx.r11.s64 + 9260;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2336
	ctx.r4.s64 = ctx.r11.s64 + -2336;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5554;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5560;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e557c
	if (ctx.cr6.eq) goto loc_821E557C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-17720
	ctx.r4.s64 = ctx.r11.s64 + -17720;
	// bl 0x821ad188
	ctx.lr = 0x821E5574;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5580
	goto loc_821E5580;
loc_821E557C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5580:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9268
	ctx.r11.s64 = ctx.r11.s64 + 9268;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2128
	ctx.r4.s64 = ctx.r11.s64 + -2128;
	// bl 0x8242bdb0
	ctx.lr = 0x821E559C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E55A8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e55c4
	if (ctx.cr6.eq) goto loc_821E55C4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-23144
	ctx.r4.s64 = ctx.r11.s64 + -23144;
	// bl 0x821ad188
	ctx.lr = 0x821E55BC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e55c8
	goto loc_821E55C8;
loc_821E55C4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E55C8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9272
	ctx.r11.s64 = ctx.r11.s64 + 9272;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2168
	ctx.r4.s64 = ctx.r11.s64 + -2168;
	// bl 0x8242bdb0
	ctx.lr = 0x821E55E4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E55F0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e560c
	if (ctx.cr6.eq) goto loc_821E560C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-16552
	ctx.r4.s64 = ctx.r11.s64 + -16552;
	// bl 0x821ad188
	ctx.lr = 0x821E5604;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5610
	goto loc_821E5610;
loc_821E560C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5610:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9276
	ctx.r11.s64 = ctx.r11.s64 + 9276;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2200
	ctx.r4.s64 = ctx.r11.s64 + -2200;
	// bl 0x8242bdb0
	ctx.lr = 0x821E562C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5638;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5654
	if (ctx.cr6.eq) goto loc_821E5654;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-7568
	ctx.r4.s64 = ctx.r11.s64 + -7568;
	// bl 0x821ad188
	ctx.lr = 0x821E564C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5658
	goto loc_821E5658;
loc_821E5654:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5658:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9280
	ctx.r11.s64 = ctx.r11.s64 + 9280;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2228
	ctx.r4.s64 = ctx.r11.s64 + -2228;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5674;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E568C"))) PPC_WEAK_FUNC(sub_821E568C);
PPC_FUNC_IMPL(__imp__sub_821E568C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E5690"))) PPC_WEAK_FUNC(sub_821E5690);
PPC_FUNC_IMPL(__imp__sub_821E5690) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E56B8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e56d4
	if (ctx.cr6.eq) goto loc_821E56D4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// bl 0x821ad188
	ctx.lr = 0x821E56CC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e56d8
	goto loc_821E56D8;
loc_821E56D4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E56D8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9288
	ctx.r11.s64 = ctx.r11.s64 + 9288;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-2248
	ctx.r4.s64 = ctx.r11.s64 + -2248;
	// bl 0x8242bdb0
	ctx.lr = 0x821E56F4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5700;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e571c
	if (ctx.cr6.eq) goto loc_821E571C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-7168
	ctx.r4.s64 = ctx.r11.s64 + -7168;
	// bl 0x821ad188
	ctx.lr = 0x821E5714;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5720
	goto loc_821E5720;
loc_821E571C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5720:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9292
	ctx.r11.s64 = ctx.r11.s64 + 9292;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1532
	ctx.r4.s64 = ctx.r11.s64 + -1532;
	// bl 0x8242bdb0
	ctx.lr = 0x821E573C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5748;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5764
	if (ctx.cr6.eq) goto loc_821E5764;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-6808
	ctx.r4.s64 = ctx.r11.s64 + -6808;
	// bl 0x821ad188
	ctx.lr = 0x821E575C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5768
	goto loc_821E5768;
loc_821E5764:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5768:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9296
	ctx.r11.s64 = ctx.r11.s64 + 9296;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1552
	ctx.r4.s64 = ctx.r11.s64 + -1552;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5784;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5790;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e57ac
	if (ctx.cr6.eq) goto loc_821E57AC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-16216
	ctx.r4.s64 = ctx.r11.s64 + -16216;
	// bl 0x821ad188
	ctx.lr = 0x821E57A4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e57b0
	goto loc_821E57B0;
loc_821E57AC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E57B0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9308
	ctx.r11.s64 = ctx.r11.s64 + 9308;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1572
	ctx.r4.s64 = ctx.r11.s64 + -1572;
	// bl 0x8242bdb0
	ctx.lr = 0x821E57CC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E57D8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e57f4
	if (ctx.cr6.eq) goto loc_821E57F4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-6448
	ctx.r4.s64 = ctx.r11.s64 + -6448;
	// bl 0x821ad188
	ctx.lr = 0x821E57EC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e57f8
	goto loc_821E57F8;
loc_821E57F4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E57F8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9300
	ctx.r11.s64 = ctx.r11.s64 + 9300;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1584
	ctx.r4.s64 = ctx.r11.s64 + -1584;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5814;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5820;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e583c
	if (ctx.cr6.eq) goto loc_821E583C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-6080
	ctx.r4.s64 = ctx.r11.s64 + -6080;
	// bl 0x821ad188
	ctx.lr = 0x821E5834;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5840
	goto loc_821E5840;
loc_821E583C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5840:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9304
	ctx.r11.s64 = ctx.r11.s64 + 9304;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-4132
	ctx.r4.s64 = ctx.r11.s64 + -4132;
	// bl 0x8242bdb0
	ctx.lr = 0x821E585C;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E5874"))) PPC_WEAK_FUNC(sub_821E5874);
PPC_FUNC_IMPL(__imp__sub_821E5874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E5878"))) PPC_WEAK_FUNC(sub_821E5878);
PPC_FUNC_IMPL(__imp__sub_821E5878) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E58A0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e58bc
	if (ctx.cr6.eq) goto loc_821E58BC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-22552
	ctx.r4.s64 = ctx.r11.s64 + -22552;
	// bl 0x821ad188
	ctx.lr = 0x821E58B4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e58c0
	goto loc_821E58C0;
loc_821E58BC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E58C0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9360
	ctx.r11.s64 = ctx.r11.s64 + 9360;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1312
	ctx.r4.s64 = ctx.r11.s64 + -1312;
	// bl 0x8242bdb0
	ctx.lr = 0x821E58DC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E58E8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5904
	if (ctx.cr6.eq) goto loc_821E5904;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-14760
	ctx.r4.s64 = ctx.r11.s64 + -14760;
	// bl 0x821ad188
	ctx.lr = 0x821E58FC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5908
	goto loc_821E5908;
loc_821E5904:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5908:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9364
	ctx.r11.s64 = ctx.r11.s64 + 9364;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1332
	ctx.r4.s64 = ctx.r11.s64 + -1332;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5924;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5930;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e594c
	if (ctx.cr6.eq) goto loc_821E594C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,1232
	ctx.r4.s64 = ctx.r11.s64 + 1232;
	// bl 0x821ad188
	ctx.lr = 0x821E5944;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5950
	goto loc_821E5950;
loc_821E594C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5950:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9368
	ctx.r11.s64 = ctx.r11.s64 + 9368;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1348
	ctx.r4.s64 = ctx.r11.s64 + -1348;
	// bl 0x8242bdb0
	ctx.lr = 0x821E596C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5978;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5994
	if (ctx.cr6.eq) goto loc_821E5994;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-22416
	ctx.r4.s64 = ctx.r11.s64 + -22416;
	// bl 0x821ad188
	ctx.lr = 0x821E598C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5998
	goto loc_821E5998;
loc_821E5994:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5998:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9372
	ctx.r11.s64 = ctx.r11.s64 + 9372;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1368
	ctx.r4.s64 = ctx.r11.s64 + -1368;
	// bl 0x8242bdb0
	ctx.lr = 0x821E59B4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E59C0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e59dc
	if (ctx.cr6.eq) goto loc_821E59DC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,1712
	ctx.r4.s64 = ctx.r11.s64 + 1712;
	// bl 0x821ad188
	ctx.lr = 0x821E59D4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e59e0
	goto loc_821E59E0;
loc_821E59DC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E59E0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9376
	ctx.r11.s64 = ctx.r11.s64 + 9376;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1384
	ctx.r4.s64 = ctx.r11.s64 + -1384;
	// bl 0x8242bdb0
	ctx.lr = 0x821E59FC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5A08;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5a24
	if (ctx.cr6.eq) goto loc_821E5A24;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,2168
	ctx.r4.s64 = ctx.r11.s64 + 2168;
	// bl 0x821ad188
	ctx.lr = 0x821E5A1C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5a28
	goto loc_821E5A28;
loc_821E5A24:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5A28:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9380
	ctx.r11.s64 = ctx.r11.s64 + 9380;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1412
	ctx.r4.s64 = ctx.r11.s64 + -1412;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5A44;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5A50;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5a6c
	if (ctx.cr6.eq) goto loc_821E5A6C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,936
	ctx.r4.s64 = ctx.r11.s64 + 936;
	// bl 0x821ad188
	ctx.lr = 0x821E5A64;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5a70
	goto loc_821E5A70;
loc_821E5A6C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5A70:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9388
	ctx.r11.s64 = ctx.r11.s64 + 9388;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1432
	ctx.r4.s64 = ctx.r11.s64 + -1432;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5A8C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5A98;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5ab4
	if (ctx.cr6.eq) goto loc_821E5AB4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,2168
	ctx.r4.s64 = ctx.r11.s64 + 2168;
	// bl 0x821ad188
	ctx.lr = 0x821E5AAC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5ab8
	goto loc_821E5AB8;
loc_821E5AB4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5AB8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9384
	ctx.r11.s64 = ctx.r11.s64 + 9384;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1460
	ctx.r4.s64 = ctx.r11.s64 + -1460;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5AD4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5AE0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5afc
	if (ctx.cr6.eq) goto loc_821E5AFC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,2536
	ctx.r4.s64 = ctx.r11.s64 + 2536;
	// bl 0x821ad188
	ctx.lr = 0x821E5AF4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5b00
	goto loc_821E5B00;
loc_821E5AFC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5B00:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9392
	ctx.r11.s64 = ctx.r11.s64 + 9392;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1480
	ctx.r4.s64 = ctx.r11.s64 + -1480;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5B1C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5B28;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5b44
	if (ctx.cr6.eq) goto loc_821E5B44;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,3440
	ctx.r4.s64 = ctx.r11.s64 + 3440;
	// bl 0x821ad188
	ctx.lr = 0x821E5B3C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5b48
	goto loc_821E5B48;
loc_821E5B44:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5B48:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9396
	ctx.r11.s64 = ctx.r11.s64 + 9396;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1500
	ctx.r4.s64 = ctx.r11.s64 + -1500;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5B64;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5B70;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5b8c
	if (ctx.cr6.eq) goto loc_821E5B8C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,4416
	ctx.r4.s64 = ctx.r11.s64 + 4416;
	// bl 0x821ad188
	ctx.lr = 0x821E5B84;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5b90
	goto loc_821E5B90;
loc_821E5B8C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5B90:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9400
	ctx.r11.s64 = ctx.r11.s64 + 9400;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1520
	ctx.r4.s64 = ctx.r11.s64 + -1520;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5BAC;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E5BC4"))) PPC_WEAK_FUNC(sub_821E5BC4);
PPC_FUNC_IMPL(__imp__sub_821E5BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E5BC8"))) PPC_WEAK_FUNC(sub_821E5BC8);
PPC_FUNC_IMPL(__imp__sub_821E5BC8) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5BF0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5c0c
	if (ctx.cr6.eq) goto loc_821E5C0C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,21232
	ctx.r4.s64 = ctx.r11.s64 + 21232;
	// bl 0x821ad188
	ctx.lr = 0x821E5C04;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5c10
	goto loc_821E5C10;
loc_821E5C0C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5C10:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9540
	ctx.r11.s64 = ctx.r11.s64 + 9540;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1232
	ctx.r4.s64 = ctx.r11.s64 + -1232;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5C2C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5C38;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5c54
	if (ctx.cr6.eq) goto loc_821E5C54;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,3912
	ctx.r4.s64 = ctx.r11.s64 + 3912;
	// bl 0x821ad188
	ctx.lr = 0x821E5C4C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5c58
	goto loc_821E5C58;
loc_821E5C54:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5C58:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9544
	ctx.r11.s64 = ctx.r11.s64 + 9544;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1244
	ctx.r4.s64 = ctx.r11.s64 + -1244;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5C74;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5C80;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5c9c
	if (ctx.cr6.eq) goto loc_821E5C9C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,4928
	ctx.r4.s64 = ctx.r11.s64 + 4928;
	// bl 0x821ad188
	ctx.lr = 0x821E5C94;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5ca0
	goto loc_821E5CA0;
loc_821E5C9C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5CA0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9548
	ctx.r11.s64 = ctx.r11.s64 + 9548;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1260
	ctx.r4.s64 = ctx.r11.s64 + -1260;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5CBC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5CC8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5ce4
	if (ctx.cr6.eq) goto loc_821E5CE4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,5960
	ctx.r4.s64 = ctx.r11.s64 + 5960;
	// bl 0x821ad188
	ctx.lr = 0x821E5CDC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5ce8
	goto loc_821E5CE8;
loc_821E5CE4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5CE8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9552
	ctx.r11.s64 = ctx.r11.s64 + 9552;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1276
	ctx.r4.s64 = ctx.r11.s64 + -1276;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5D04;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5D10;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5d2c
	if (ctx.cr6.eq) goto loc_821E5D2C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,22776
	ctx.r4.s64 = ctx.r11.s64 + 22776;
	// bl 0x821ad188
	ctx.lr = 0x821E5D24;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5d30
	goto loc_821E5D30;
loc_821E5D2C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5D30:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9556
	ctx.r11.s64 = ctx.r11.s64 + 9556;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1296
	ctx.r4.s64 = ctx.r11.s64 + -1296;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5D4C;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E5D64"))) PPC_WEAK_FUNC(sub_821E5D64);
PPC_FUNC_IMPL(__imp__sub_821E5D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E5D68"))) PPC_WEAK_FUNC(sub_821E5D68);
PPC_FUNC_IMPL(__imp__sub_821E5D68) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5D90;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5dac
	if (ctx.cr6.eq) goto loc_821E5DAC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,11000
	ctx.r4.s64 = ctx.r11.s64 + 11000;
	// bl 0x821ad188
	ctx.lr = 0x821E5DA4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5db0
	goto loc_821E5DB0;
loc_821E5DAC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5DB0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9792
	ctx.r11.s64 = ctx.r11.s64 + 9792;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-3152
	ctx.r4.s64 = ctx.r11.s64 + -3152;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5DCC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5DD8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5df4
	if (ctx.cr6.eq) goto loc_821E5DF4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-1312
	ctx.r4.s64 = ctx.r11.s64 + -1312;
	// bl 0x821ad188
	ctx.lr = 0x821E5DEC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5df8
	goto loc_821E5DF8;
loc_821E5DF4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5DF8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9796
	ctx.r11.s64 = ctx.r11.s64 + 9796;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1096
	ctx.r4.s64 = ctx.r11.s64 + -1096;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5E14;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5E20;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5e3c
	if (ctx.cr6.eq) goto loc_821E5E3C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,1264
	ctx.r4.s64 = ctx.r11.s64 + 1264;
	// bl 0x821ad188
	ctx.lr = 0x821E5E34;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5e40
	goto loc_821E5E40;
loc_821E5E3C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5E40:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9800
	ctx.r11.s64 = ctx.r11.s64 + 9800;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-5384
	ctx.r4.s64 = ctx.r11.s64 + -5384;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5E5C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5E68;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5e84
	if (ctx.cr6.eq) goto loc_821E5E84;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,1720
	ctx.r4.s64 = ctx.r11.s64 + 1720;
	// bl 0x821ad188
	ctx.lr = 0x821E5E7C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5e88
	goto loc_821E5E88;
loc_821E5E84:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5E88:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9804
	ctx.r11.s64 = ctx.r11.s64 + 9804;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1116
	ctx.r4.s64 = ctx.r11.s64 + -1116;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5EA4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5EB0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5ecc
	if (ctx.cr6.eq) goto loc_821E5ECC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15064
	ctx.r4.s64 = ctx.r11.s64 + 15064;
	// bl 0x821ad188
	ctx.lr = 0x821E5EC4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5ed0
	goto loc_821E5ED0;
loc_821E5ECC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5ED0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9808
	ctx.r11.s64 = ctx.r11.s64 + 9808;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1128
	ctx.r4.s64 = ctx.r11.s64 + -1128;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5EEC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5EF8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5f14
	if (ctx.cr6.eq) goto loc_821E5F14;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,18648
	ctx.r4.s64 = ctx.r11.s64 + 18648;
	// bl 0x821ad188
	ctx.lr = 0x821E5F0C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5f18
	goto loc_821E5F18;
loc_821E5F14:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5F18:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1144
	ctx.r4.s64 = ctx.r11.s64 + -1144;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5F34;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5F40;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5f5c
	if (ctx.cr6.eq) goto loc_821E5F5C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,16312
	ctx.r4.s64 = ctx.r11.s64 + 16312;
	// bl 0x821ad188
	ctx.lr = 0x821E5F54;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5f60
	goto loc_821E5F60;
loc_821E5F5C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5F60:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9812
	ctx.r11.s64 = ctx.r11.s64 + 9812;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1160
	ctx.r4.s64 = ctx.r11.s64 + -1160;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5F7C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5F88;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5fa4
	if (ctx.cr6.eq) goto loc_821E5FA4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,19008
	ctx.r4.s64 = ctx.r11.s64 + 19008;
	// bl 0x821ad188
	ctx.lr = 0x821E5F9C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5fa8
	goto loc_821E5FA8;
loc_821E5FA4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5FA8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9820
	ctx.r11.s64 = ctx.r11.s64 + 9820;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1176
	ctx.r4.s64 = ctx.r11.s64 + -1176;
	// bl 0x8242bdb0
	ctx.lr = 0x821E5FC4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E5FD0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5fec
	if (ctx.cr6.eq) goto loc_821E5FEC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,21080
	ctx.r4.s64 = ctx.r11.s64 + 21080;
	// bl 0x821ad188
	ctx.lr = 0x821E5FE4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e5ff0
	goto loc_821E5FF0;
loc_821E5FEC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E5FF0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9824
	ctx.r11.s64 = ctx.r11.s64 + 9824;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1196
	ctx.r4.s64 = ctx.r11.s64 + -1196;
	// bl 0x8242bdb0
	ctx.lr = 0x821E600C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6018;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e6034
	if (ctx.cr6.eq) goto loc_821E6034;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,22176
	ctx.r4.s64 = ctx.r11.s64 + 22176;
	// bl 0x821ad188
	ctx.lr = 0x821E602C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e6038
	goto loc_821E6038;
loc_821E6034:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E6038:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9828
	ctx.r11.s64 = ctx.r11.s64 + 9828;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1216
	ctx.r4.s64 = ctx.r11.s64 + -1216;
	// bl 0x8242bdb0
	ctx.lr = 0x821E6054;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E606C"))) PPC_WEAK_FUNC(sub_821E606C);
PPC_FUNC_IMPL(__imp__sub_821E606C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6070"))) PPC_WEAK_FUNC(sub_821E6070);
PPC_FUNC_IMPL(__imp__sub_821E6070) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6098;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e60b4
	if (ctx.cr6.eq) goto loc_821E60B4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-20696
	ctx.r4.s64 = ctx.r11.s64 + -20696;
	// bl 0x821ad188
	ctx.lr = 0x821E60AC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e60b8
	goto loc_821E60B8;
loc_821E60B4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E60B8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9992
	ctx.r11.s64 = ctx.r11.s64 + 9992;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-728
	ctx.r4.s64 = ctx.r11.s64 + -728;
	// bl 0x8242bdb0
	ctx.lr = 0x821E60D4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E60E0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e60fc
	if (ctx.cr6.eq) goto loc_821E60FC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-20328
	ctx.r4.s64 = ctx.r11.s64 + -20328;
	// bl 0x821ad188
	ctx.lr = 0x821E60F4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e6100
	goto loc_821E6100;
loc_821E60FC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E6100:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9996
	ctx.r11.s64 = ctx.r11.s64 + 9996;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-752
	ctx.r4.s64 = ctx.r11.s64 + -752;
	// bl 0x8242bdb0
	ctx.lr = 0x821E611C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6128;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e6144
	if (ctx.cr6.eq) goto loc_821E6144;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-19464
	ctx.r4.s64 = ctx.r11.s64 + -19464;
	// bl 0x821ad188
	ctx.lr = 0x821E613C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e6148
	goto loc_821E6148;
loc_821E6144:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E6148:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10000
	ctx.r11.s64 = ctx.r11.s64 + 10000;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-776
	ctx.r4.s64 = ctx.r11.s64 + -776;
	// bl 0x8242bdb0
	ctx.lr = 0x821E6164;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6170;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e618c
	if (ctx.cr6.eq) goto loc_821E618C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-18304
	ctx.r4.s64 = ctx.r11.s64 + -18304;
	// bl 0x821ad188
	ctx.lr = 0x821E6184;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e6190
	goto loc_821E6190;
loc_821E618C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E6190:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10004
	ctx.r11.s64 = ctx.r11.s64 + 10004;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-796
	ctx.r4.s64 = ctx.r11.s64 + -796;
	// bl 0x8242bdb0
	ctx.lr = 0x821E61AC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E61B8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e61d4
	if (ctx.cr6.eq) goto loc_821E61D4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-17936
	ctx.r4.s64 = ctx.r11.s64 + -17936;
	// bl 0x821ad188
	ctx.lr = 0x821E61CC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e61d8
	goto loc_821E61D8;
loc_821E61D4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E61D8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10008
	ctx.r11.s64 = ctx.r11.s64 + 10008;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-816
	ctx.r4.s64 = ctx.r11.s64 + -816;
	// bl 0x8242bdb0
	ctx.lr = 0x821E61F4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6200;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e621c
	if (ctx.cr6.eq) goto loc_821E621C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-17568
	ctx.r4.s64 = ctx.r11.s64 + -17568;
	// bl 0x821ad188
	ctx.lr = 0x821E6214;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e6220
	goto loc_821E6220;
loc_821E621C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E6220:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10012
	ctx.r11.s64 = ctx.r11.s64 + 10012;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-832
	ctx.r4.s64 = ctx.r11.s64 + -832;
	// bl 0x8242bdb0
	ctx.lr = 0x821E623C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6248;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e6264
	if (ctx.cr6.eq) goto loc_821E6264;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-17152
	ctx.r4.s64 = ctx.r11.s64 + -17152;
	// bl 0x821ad188
	ctx.lr = 0x821E625C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e6268
	goto loc_821E6268;
loc_821E6264:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E6268:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10016
	ctx.r11.s64 = ctx.r11.s64 + 10016;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-856
	ctx.r4.s64 = ctx.r11.s64 + -856;
	// bl 0x8242bdb0
	ctx.lr = 0x821E6284;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6290;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e62ac
	if (ctx.cr6.eq) goto loc_821E62AC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-16784
	ctx.r4.s64 = ctx.r11.s64 + -16784;
	// bl 0x821ad188
	ctx.lr = 0x821E62A4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e62b0
	goto loc_821E62B0;
loc_821E62AC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E62B0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10020
	ctx.r11.s64 = ctx.r11.s64 + 10020;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-876
	ctx.r4.s64 = ctx.r11.s64 + -876;
	// bl 0x8242bdb0
	ctx.lr = 0x821E62CC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E62D8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e62f4
	if (ctx.cr6.eq) goto loc_821E62F4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,13896
	ctx.r4.s64 = ctx.r11.s64 + 13896;
	// bl 0x821ad188
	ctx.lr = 0x821E62EC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e62f8
	goto loc_821E62F8;
loc_821E62F4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E62F8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10028
	ctx.r11.s64 = ctx.r11.s64 + 10028;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-892
	ctx.r4.s64 = ctx.r11.s64 + -892;
	// bl 0x8242bdb0
	ctx.lr = 0x821E6314;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6320;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e633c
	if (ctx.cr6.eq) goto loc_821E633C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-16416
	ctx.r4.s64 = ctx.r11.s64 + -16416;
	// bl 0x821ad188
	ctx.lr = 0x821E6334;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e6340
	goto loc_821E6340;
loc_821E633C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E6340:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10024
	ctx.r11.s64 = ctx.r11.s64 + 10024;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-916
	ctx.r4.s64 = ctx.r11.s64 + -916;
	// bl 0x8242bdb0
	ctx.lr = 0x821E635C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6368;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e6384
	if (ctx.cr6.eq) goto loc_821E6384;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-16048
	ctx.r4.s64 = ctx.r11.s64 + -16048;
	// bl 0x821ad188
	ctx.lr = 0x821E637C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e6388
	goto loc_821E6388;
loc_821E6384:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E6388:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10032
	ctx.r11.s64 = ctx.r11.s64 + 10032;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-936
	ctx.r4.s64 = ctx.r11.s64 + -936;
	// bl 0x8242bdb0
	ctx.lr = 0x821E63A4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E63B0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e63cc
	if (ctx.cr6.eq) goto loc_821E63CC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-14856
	ctx.r4.s64 = ctx.r11.s64 + -14856;
	// bl 0x821ad188
	ctx.lr = 0x821E63C4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e63d0
	goto loc_821E63D0;
loc_821E63CC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E63D0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10044
	ctx.r11.s64 = ctx.r11.s64 + 10044;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-948
	ctx.r4.s64 = ctx.r11.s64 + -948;
	// bl 0x8242bdb0
	ctx.lr = 0x821E63EC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E63F8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e6414
	if (ctx.cr6.eq) goto loc_821E6414;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-15224
	ctx.r4.s64 = ctx.r11.s64 + -15224;
	// bl 0x821ad188
	ctx.lr = 0x821E640C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e6418
	goto loc_821E6418;
loc_821E6414:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E6418:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10040
	ctx.r11.s64 = ctx.r11.s64 + 10040;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-972
	ctx.r4.s64 = ctx.r11.s64 + -972;
	// bl 0x8242bdb0
	ctx.lr = 0x821E6434;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6440;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e645c
	if (ctx.cr6.eq) goto loc_821E645C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-10432
	ctx.r4.s64 = ctx.r11.s64 + -10432;
	// bl 0x821ad188
	ctx.lr = 0x821E6454;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e6460
	goto loc_821E6460;
loc_821E645C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E6460:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10052
	ctx.r11.s64 = ctx.r11.s64 + 10052;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-984
	ctx.r4.s64 = ctx.r11.s64 + -984;
	// bl 0x8242bdb0
	ctx.lr = 0x821E647C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6488;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e64a4
	if (ctx.cr6.eq) goto loc_821E64A4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-15584
	ctx.r4.s64 = ctx.r11.s64 + -15584;
	// bl 0x821ad188
	ctx.lr = 0x821E649C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e64a8
	goto loc_821E64A8;
loc_821E64A4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E64A8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10036
	ctx.r11.s64 = ctx.r11.s64 + 10036;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-996
	ctx.r4.s64 = ctx.r11.s64 + -996;
	// bl 0x8242bdb0
	ctx.lr = 0x821E64C4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E64D0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e64ec
	if (ctx.cr6.eq) goto loc_821E64EC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-10912
	ctx.r4.s64 = ctx.r11.s64 + -10912;
	// bl 0x821ad188
	ctx.lr = 0x821E64E4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e64f0
	goto loc_821E64F0;
loc_821E64EC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E64F0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10048
	ctx.r11.s64 = ctx.r11.s64 + 10048;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1016
	ctx.r4.s64 = ctx.r11.s64 + -1016;
	// bl 0x8242bdb0
	ctx.lr = 0x821E650C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6518;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e6534
	if (ctx.cr6.eq) goto loc_821E6534;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-8504
	ctx.r4.s64 = ctx.r11.s64 + -8504;
	// bl 0x821ad188
	ctx.lr = 0x821E652C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e6538
	goto loc_821E6538;
loc_821E6534:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E6538:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10056
	ctx.r11.s64 = ctx.r11.s64 + 10056;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1032
	ctx.r4.s64 = ctx.r11.s64 + -1032;
	// bl 0x8242bdb0
	ctx.lr = 0x821E6554;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6560;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e657c
	if (ctx.cr6.eq) goto loc_821E657C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-7680
	ctx.r4.s64 = ctx.r11.s64 + -7680;
	// bl 0x821ad188
	ctx.lr = 0x821E6574;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e6580
	goto loc_821E6580;
loc_821E657C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E6580:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10060
	ctx.r11.s64 = ctx.r11.s64 + 10060;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1052
	ctx.r4.s64 = ctx.r11.s64 + -1052;
	// bl 0x8242bdb0
	ctx.lr = 0x821E659C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E65A8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e65c4
	if (ctx.cr6.eq) goto loc_821E65C4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-7320
	ctx.r4.s64 = ctx.r11.s64 + -7320;
	// bl 0x821ad188
	ctx.lr = 0x821E65BC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e65c8
	goto loc_821E65C8;
loc_821E65C4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E65C8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10064
	ctx.r11.s64 = ctx.r11.s64 + 10064;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1068
	ctx.r4.s64 = ctx.r11.s64 + -1068;
	// bl 0x8242bdb0
	ctx.lr = 0x821E65E4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E65F0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e660c
	if (ctx.cr6.eq) goto loc_821E660C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-6952
	ctx.r4.s64 = ctx.r11.s64 + -6952;
	// bl 0x821ad188
	ctx.lr = 0x821E6604;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e6610
	goto loc_821E6610;
loc_821E660C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E6610:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,10068
	ctx.r11.s64 = ctx.r11.s64 + 10068;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-1080
	ctx.r4.s64 = ctx.r11.s64 + -1080;
	// bl 0x8242bdb0
	ctx.lr = 0x821E662C;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E6644"))) PPC_WEAK_FUNC(sub_821E6644);
PPC_FUNC_IMPL(__imp__sub_821E6644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6648"))) PPC_WEAK_FUNC(sub_821E6648);
PPC_FUNC_IMPL(__imp__sub_821E6648) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6670;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e668c
	if (ctx.cr6.eq) goto loc_821E668C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-3896
	ctx.r4.s64 = ctx.r11.s64 + -3896;
	// bl 0x821ad188
	ctx.lr = 0x821E6684;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e6690
	goto loc_821E6690;
loc_821E668C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E6690:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8844
	ctx.r11.s64 = ctx.r11.s64 + 8844;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-876
	ctx.r4.s64 = ctx.r11.s64 + -876;
	// bl 0x8242bdb0
	ctx.lr = 0x821E66AC;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E66B8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e66d4
	if (ctx.cr6.eq) goto loc_821E66D4;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,14992
	ctx.r4.s64 = ctx.r11.s64 + 14992;
	// bl 0x821ad188
	ctx.lr = 0x821E66CC;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e66d8
	goto loc_821E66D8;
loc_821E66D4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E66D8:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8852
	ctx.r11.s64 = ctx.r11.s64 + 8852;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-892
	ctx.r4.s64 = ctx.r11.s64 + -892;
	// bl 0x8242bdb0
	ctx.lr = 0x821E66F4;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6700;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e671c
	if (ctx.cr6.eq) goto loc_821E671C;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-3528
	ctx.r4.s64 = ctx.r11.s64 + -3528;
	// bl 0x821ad188
	ctx.lr = 0x821E6714;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e6720
	goto loc_821E6720;
loc_821E671C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E6720:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8848
	ctx.r11.s64 = ctx.r11.s64 + 8848;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-916
	ctx.r4.s64 = ctx.r11.s64 + -916;
	// bl 0x8242bdb0
	ctx.lr = 0x821E673C;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6748;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e6764
	if (ctx.cr6.eq) goto loc_821E6764;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r4,r11,-1784
	ctx.r4.s64 = ctx.r11.s64 + -1784;
	// bl 0x821ad188
	ctx.lr = 0x821E675C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e6768
	goto loc_821E6768;
loc_821E6764:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E6768:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8856
	ctx.r11.s64 = ctx.r11.s64 + 8856;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-936
	ctx.r4.s64 = ctx.r11.s64 + -936;
	// bl 0x8242bdb0
	ctx.lr = 0x821E6784;
	sub_8242BDB0(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x821E6790;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e67ac
	if (ctx.cr6.eq) goto loc_821E67AC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-27528
	ctx.r4.s64 = ctx.r11.s64 + -27528;
	// bl 0x821ad188
	ctx.lr = 0x821E67A4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x821e67b0
	goto loc_821E67B0;
loc_821E67AC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E67B0:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,8860
	ctx.r11.s64 = ctx.r11.s64 + 8860;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-712
	ctx.r4.s64 = ctx.r11.s64 + -712;
	// bl 0x8242bdb0
	ctx.lr = 0x821E67CC;
	sub_8242BDB0(ctx, base);
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

__attribute__((alias("__imp__sub_821E67E4"))) PPC_WEAK_FUNC(sub_821E67E4);
PPC_FUNC_IMPL(__imp__sub_821E67E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E67E8"))) PPC_WEAK_FUNC(sub_821E67E8);
PPC_FUNC_IMPL(__imp__sub_821E67E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362190
	ctx.lr = 0x821E680C;
	sub_82362190(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361f20
	ctx.lr = 0x821E6814;
	sub_82361F20(ctx, base);
	// li r5,127
	ctx.r5.s64 = 127;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361bd8
	ctx.lr = 0x821E6824;
	sub_82361BD8(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6838"))) PPC_WEAK_FUNC(sub_821E6838);
PPC_FUNC_IMPL(__imp__sub_821E6838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x821f84e0
	ctx.lr = 0x821E6854;
	sub_821F84E0(ctx, base);
	// li r5,127
	ctx.r5.s64 = 127;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82361bd8
	ctx.lr = 0x821E6864;
	sub_82361BD8(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6878"))) PPC_WEAK_FUNC(sub_821E6878);
PPC_FUNC_IMPL(__imp__sub_821E6878) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x821fe7d8
	sub_821FE7D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E6880"))) PPC_WEAK_FUNC(sub_821E6880);
PPC_FUNC_IMPL(__imp__sub_821E6880) {
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
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fa70
	ctx.lr = 0x821E6898;
	sub_8210FA70(ctx, base);
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

__attribute__((alias("__imp__sub_821E68AC"))) PPC_WEAK_FUNC(sub_821E68AC);
PPC_FUNC_IMPL(__imp__sub_821E68AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E68B0"))) PPC_WEAK_FUNC(sub_821E68B0);
PPC_FUNC_IMPL(__imp__sub_821E68B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r11,r11,23504
	ctx.r11.s64 = ctx.r11.s64 + 23504;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E68C4"))) PPC_WEAK_FUNC(sub_821E68C4);
PPC_FUNC_IMPL(__imp__sub_821E68C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E68C8"))) PPC_WEAK_FUNC(sub_821E68C8);
PPC_FUNC_IMPL(__imp__sub_821E68C8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,536(r11)
	PPC_STORE_U8(ctx.r11.u32 + 536, ctx.r10.u8);
	// stb r10,537(r11)
	PPC_STORE_U8(ctx.r11.u32 + 537, ctx.r10.u8);
	// stb r10,538(r11)
	PPC_STORE_U8(ctx.r11.u32 + 538, ctx.r10.u8);
	// stw r10,520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 520, ctx.r10.u32);
	// stw r10,532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 532, ctx.r10.u32);
	// stw r10,524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 524, ctx.r10.u32);
	// stw r10,528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 528, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E68F4"))) PPC_WEAK_FUNC(sub_821E68F4);
PPC_FUNC_IMPL(__imp__sub_821E68F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E68F8"))) PPC_WEAK_FUNC(sub_821E68F8);
PPC_FUNC_IMPL(__imp__sub_821E68F8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,536(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 536);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6900"))) PPC_WEAK_FUNC(sub_821E6900);
PPC_FUNC_IMPL(__imp__sub_821E6900) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r3,537(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 537);
	// stb r10,537(r11)
	PPC_STORE_U8(ctx.r11.u32 + 537, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6914"))) PPC_WEAK_FUNC(sub_821E6914);
PPC_FUNC_IMPL(__imp__sub_821E6914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6918"))) PPC_WEAK_FUNC(sub_821E6918);
PPC_FUNC_IMPL(__imp__sub_821E6918) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,536(r3)
	PPC_STORE_U8(ctx.r3.u32 + 536, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6924"))) PPC_WEAK_FUNC(sub_821E6924);
PPC_FUNC_IMPL(__imp__sub_821E6924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6928"))) PPC_WEAK_FUNC(sub_821E6928);
PPC_FUNC_IMPL(__imp__sub_821E6928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x821E6930;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lbz r11,538(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 538);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e6968
	if (ctx.cr6.eq) goto loc_821E6968;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e69e8
	if (ctx.cr6.eq) goto loc_821E69E8;
loc_821E6968:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e6978
	if (ctx.cr6.eq) goto loc_821E6978;
	// stb r10,538(r31)
	PPC_STORE_U8(ctx.r31.u32 + 538, ctx.r10.u8);
loc_821E6978:
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e6994
	if (ctx.cr6.eq) goto loc_821E6994;
	// lwz r4,532(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// li r3,12
	ctx.r3.s64 = 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E6994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E6994:
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r6,236(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r27.u32);
	// stw r26,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r26.u32);
	// stw r7,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r7.u32);
	// stw r6,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r6.u32);
	// bl 0x8259d2a0
	ctx.lr = 0x821E69BC;
	sub_8259D2A0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x8259d2a0
	ctx.lr = 0x821E69CC;
	sub_8259D2A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r28.u32);
	// stw r25,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r25.u32);
	// stb r5,536(r31)
	PPC_STORE_U8(ctx.r31.u32 + 536, ctx.r5.u8);
	// stb r4,537(r31)
	PPC_STORE_U8(ctx.r31.u32 + 537, ctx.r4.u8);
	// bl 0x82427168
	ctx.lr = 0x821E69E8;
	sub_82427168(ctx, base);
loc_821E69E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E69F0"))) PPC_WEAK_FUNC(sub_821E69F0);
PPC_FUNC_IMPL(__imp__sub_821E69F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,538(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 538);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r11.u32);
	// stw r11,532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 532, ctx.r11.u32);
	// stb r10,537(r3)
	PPC_STORE_U8(ctx.r3.u32 + 537, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6A10"))) PPC_WEAK_FUNC(sub_821E6A10);
PPC_FUNC_IMPL(__imp__sub_821E6A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821e6a24
	if (ctx.cr6.eq) goto loc_821E6A24;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E6A24:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6A2C"))) PPC_WEAK_FUNC(sub_821E6A2C);
PPC_FUNC_IMPL(__imp__sub_821E6A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6A30"))) PPC_WEAK_FUNC(sub_821E6A30);
PPC_FUNC_IMPL(__imp__sub_821E6A30) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 9, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// addi r12,r12,27216
	ctx.r12.s64 = ctx.r12.s64 + 27216;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		// ERROR: 0x821E6A78
		return;
	case 1:
		sub_821E6A98(ctx, base);
		return;
	case 2:
		// ERROR: 0x821E6A78
		return;
	case 3:
		sub_821E6A98(ctx, base);
		return;
	case 4:
		// ERROR: 0x821E6A78
		return;
	case 5:
		// ERROR: 0x821E6A78
		return;
	case 6:
		// ERROR: 0x821E6A78
		return;
	case 7:
		sub_821E6A98(ctx, base);
		return;
	case 8:
		// ERROR: 0x821E6A78
		return;
	case 9:
		sub_821E6A98(ctx, base);
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821E6A50"))) PPC_WEAK_FUNC(sub_821E6A50);
PPC_FUNC_IMPL(__imp__sub_821E6A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r16,27256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// lwz r16,27288(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27288);
	// lwz r16,27256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// lwz r16,27288(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27288);
	// lwz r16,27256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// lwz r16,27256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// lwz r16,27256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// lwz r16,27288(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27288);
	// lwz r16,27256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27256);
	// lwz r16,27288(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27288);
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
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// b 0x822c5960
	sub_822C5960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E6A98"))) PPC_WEAK_FUNC(sub_821E6A98);
PPC_FUNC_IMPL(__imp__sub_821E6A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// b 0x822c5960
	sub_822C5960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E6AB8"))) PPC_WEAK_FUNC(sub_821E6AB8);
PPC_FUNC_IMPL(__imp__sub_821E6AB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6ABC"))) PPC_WEAK_FUNC(sub_821E6ABC);
PPC_FUNC_IMPL(__imp__sub_821E6ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6AC0"))) PPC_WEAK_FUNC(sub_821E6AC0);
PPC_FUNC_IMPL(__imp__sub_821E6AC0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-6496
	ctx.r4.s64 = ctx.r11.s64 + -6496;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821E6AF0;
	sub_8210FCF8(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82361bd8
	ctx.lr = 0x821E6AFC;
	sub_82361BD8(ctx, base);
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e6b2c
	if (ctx.cr6.eq) goto loc_821E6B2C;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E6B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,13360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13360);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
loc_821E6B2C:
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a1478
	ctx.lr = 0x821E6B3C;
	sub_825A1478(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259e950
	ctx.lr = 0x821E6B4C;
	sub_8259E950(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_821E6B64"))) PPC_WEAK_FUNC(sub_821E6B64);
PPC_FUNC_IMPL(__imp__sub_821E6B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6B68"))) PPC_WEAK_FUNC(sub_821E6B68);
PPC_FUNC_IMPL(__imp__sub_821E6B68) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stb r9,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6B88"))) PPC_WEAK_FUNC(sub_821E6B88);
PPC_FUNC_IMPL(__imp__sub_821E6B88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821e6b9c
	if (!ctx.cr6.eq) goto loc_821E6B9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E6B9C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6BA4"))) PPC_WEAK_FUNC(sub_821E6BA4);
PPC_FUNC_IMPL(__imp__sub_821E6BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6BA8"))) PPC_WEAK_FUNC(sub_821E6BA8);
PPC_FUNC_IMPL(__imp__sub_821E6BA8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6BBC"))) PPC_WEAK_FUNC(sub_821E6BBC);
PPC_FUNC_IMPL(__imp__sub_821E6BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6BC0"))) PPC_WEAK_FUNC(sub_821E6BC0);
PPC_FUNC_IMPL(__imp__sub_821E6BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82203858
	sub_82203858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E6BD4"))) PPC_WEAK_FUNC(sub_821E6BD4);
PPC_FUNC_IMPL(__imp__sub_821E6BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6BD8"))) PPC_WEAK_FUNC(sub_821E6BD8);
PPC_FUNC_IMPL(__imp__sub_821E6BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82203858
	sub_82203858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E6BEC"))) PPC_WEAK_FUNC(sub_821E6BEC);
PPC_FUNC_IMPL(__imp__sub_821E6BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6BF0"))) PPC_WEAK_FUNC(sub_821E6BF0);
PPC_FUNC_IMPL(__imp__sub_821E6BF0) {
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
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82203858
	ctx.lr = 0x821E6C10;
	sub_82203858(ctx, base);
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// li r4,2
	ctx.r4.s64 = 2;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// lfs f1,2864(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c5960
	ctx.lr = 0x821E6C30;
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

__attribute__((alias("__imp__sub_821E6C40"))) PPC_WEAK_FUNC(sub_821E6C40);
PPC_FUNC_IMPL(__imp__sub_821E6C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lwz r11,22348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821e6c5c
	if (!ctx.cr6.eq) goto loc_821E6C5C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E6C5C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6C64"))) PPC_WEAK_FUNC(sub_821E6C64);
PPC_FUNC_IMPL(__imp__sub_821E6C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6C68"))) PPC_WEAK_FUNC(sub_821E6C68);
PPC_FUNC_IMPL(__imp__sub_821E6C68) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r10,-1416
	ctx.r10.s64 = ctx.r10.s64 + -1416;
	// addi r9,r9,10636
	ctx.r9.s64 = ctx.r9.s64 + 10636;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,400
	ctx.r10.s64 = ctx.r10.s64 + 400;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_821E6C94:
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r8,r4,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r3,r6,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// subf r9,r3,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r3.s64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// ble cr6,0x821e6ccc
	if (!ctx.cr6.gt) goto loc_821E6CCC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_821E6CCC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r7,13
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 13, ctx.xer);
	// blt cr6,0x821e6c94
	if (ctx.cr6.lt) goto loc_821E6C94;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6CE0"))) PPC_WEAK_FUNC(sub_821E6CE0);
PPC_FUNC_IMPL(__imp__sub_821E6CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-1416
	ctx.r3.s64 = ctx.r11.s64 + -1416;
	// b 0x820fbe70
	sub_820FBE70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E6CEC"))) PPC_WEAK_FUNC(sub_821E6CEC);
PPC_FUNC_IMPL(__imp__sub_821E6CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6CF0"))) PPC_WEAK_FUNC(sub_821E6CF0);
PPC_FUNC_IMPL(__imp__sub_821E6CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32110
	ctx.r11.s64 = -2104360960;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// lbz r3,23(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6D00"))) PPC_WEAK_FUNC(sub_821E6D00);
PPC_FUNC_IMPL(__imp__sub_821E6D00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x820fa500
	sub_820FA500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E6D1C"))) PPC_WEAK_FUNC(sub_821E6D1C);
PPC_FUNC_IMPL(__imp__sub_821E6D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6D20"))) PPC_WEAK_FUNC(sub_821E6D20);
PPC_FUNC_IMPL(__imp__sub_821E6D20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// addi r11,r11,-18560
	ctx.r11.s64 = ctx.r11.s64 + -18560;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// b 0x822c5960
	sub_822C5960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E6D34"))) PPC_WEAK_FUNC(sub_821E6D34);
PPC_FUNC_IMPL(__imp__sub_821E6D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6D38"))) PPC_WEAK_FUNC(sub_821E6D38);
PPC_FUNC_IMPL(__imp__sub_821E6D38) {
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
	// beq cr6,0x821e6d64
	if (ctx.cr6.eq) goto loc_821E6D64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E6D64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e6d8c
	if (ctx.cr6.eq) goto loc_821E6D8C;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,14528
	ctx.r11.s64 = ctx.r11.s64 + 14528;
	// lwz r10,22348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821e6d8c
	if (ctx.cr6.eq) goto loc_821E6D8C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,22348(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22348, ctx.r10.u32);
loc_821E6D8C:
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r3,-27583
	ctx.r3.s64 = -1807679488;
	// lis r4,3638
	ctx.r4.s64 = 238419968;
	// addi r31,r11,28976
	ctx.r31.s64 = ctx.r11.s64 + 28976;
	// ori r11,r3,15958
	ctx.r11.u64 = ctx.r3.u64 | 15958;
	// ori r4,r4,32087
	ctx.r4.u64 = ctx.r4.u64 | 32087;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,30
	ctx.r6.s64 = 30;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822038c8
	ctx.lr = 0x821E6DD0;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rldimi r4,r8,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x820a38e8
	ctx.lr = 0x821E6DF8;
	sub_820A38E8(ctx, base);
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

__attribute__((alias("__imp__sub_821E6E0C"))) PPC_WEAK_FUNC(sub_821E6E0C);
PPC_FUNC_IMPL(__imp__sub_821E6E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6E10"))) PPC_WEAK_FUNC(sub_821E6E10);
PPC_FUNC_IMPL(__imp__sub_821E6E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r3,19628
	ctx.r9.s64 = ctx.r3.s64 + 19628;
	// lfs f0,-12136(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stfs f0,21036(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 21036, temp.u32);
	// stb r11,31116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31116, ctx.r11.u8);
	// ori r8,r10,34496
	ctx.r8.u64 = ctx.r10.u64 | 34496;
	// stb r11,31133(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31133, ctx.r11.u8);
	// stb r11,31134(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31134, ctx.r11.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,21032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21032, ctx.r11.u32);
	// stw r11,21048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21048, ctx.r11.u32);
	// stwx r11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r8,r3,20028
	ctx.r8.s64 = ctx.r3.s64 + 20028;
loc_821E6E4C:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// blt cr6,0x821e6e4c
	if (ctx.cr6.lt) goto loc_821E6E4C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r3,20128
	ctx.r9.s64 = ctx.r3.s64 + 20128;
	// addi r8,r3,20208
	ctx.r8.s64 = ctx.r3.s64 + 20208;
loc_821E6E70:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// blt cr6,0x821e6e70
	if (ctx.cr6.lt) goto loc_821E6E70;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6E90"))) PPC_WEAK_FUNC(sub_821E6E90);
PPC_FUNC_IMPL(__imp__sub_821E6E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,31100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 31100);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6E98"))) PPC_WEAK_FUNC(sub_821E6E98);
PPC_FUNC_IMPL(__imp__sub_821E6E98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,21032(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21032);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6EA0"))) PPC_WEAK_FUNC(sub_821E6EA0);
PPC_FUNC_IMPL(__imp__sub_821E6EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,34496
	ctx.r10.u64 = ctx.r11.u64 | 34496;
	// lwzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6EB0"))) PPC_WEAK_FUNC(sub_821E6EB0);
PPC_FUNC_IMPL(__imp__sub_821E6EB0) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,21032(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21032);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821e6ee4
	if (ctx.cr6.lt) goto loc_821E6EE4;
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
loc_821E6EE4:
	// mulli r10,r4,196
	ctx.r10.s64 = ctx.r4.s64 * 196;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x8259d2a0
	ctx.lr = 0x821E6EF8;
	sub_8259D2A0(ctx, base);
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

__attribute__((alias("__imp__sub_821E6F0C"))) PPC_WEAK_FUNC(sub_821E6F0C);
PPC_FUNC_IMPL(__imp__sub_821E6F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6F10"))) PPC_WEAK_FUNC(sub_821E6F10);
PPC_FUNC_IMPL(__imp__sub_821E6F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821E6F18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,21032(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821e6f60
	if (!ctx.cr6.gt) goto loc_821E6F60;
	// addi r31,r29,36
	ctx.r31.s64 = ctx.r29.s64 + 36;
loc_821E6F38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824065f0
	ctx.lr = 0x821E6F44;
	sub_824065F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e6f6c
	if (ctx.cr6.eq) goto loc_821E6F6C;
	// lwz r10,21032(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21032);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,196
	ctx.r31.s64 = ctx.r31.s64 + 196;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821e6f38
	if (ctx.cr6.lt) goto loc_821E6F38;
loc_821E6F60:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821E6F6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E6F78"))) PPC_WEAK_FUNC(sub_821E6F78);
PPC_FUNC_IMPL(__imp__sub_821E6F78) {
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
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 65536;
	// addi r4,r4,-31520
	ctx.r4.s64 = ctx.r4.s64 + -31520;
	// bl 0x8259d2a0
	ctx.lr = 0x821E6FAC;
	sub_8259D2A0(ctx, base);
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

__attribute__((alias("__imp__sub_821E6FC0"))) PPC_WEAK_FUNC(sub_821E6FC0);
PPC_FUNC_IMPL(__imp__sub_821E6FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,10416
	ctx.r11.s64 = ctx.r11.s64 + 10416;
	// lbz r10,538(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 538);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e6fe4
	if (!ctx.cr6.eq) goto loc_821E6FE4;
	// stw r10,520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 520, ctx.r10.u32);
	// stw r10,532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 532, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,537(r11)
	PPC_STORE_U8(ctx.r11.u32 + 537, ctx.r10.u8);
loc_821E6FE4:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,31100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 31100, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E6FF4"))) PPC_WEAK_FUNC(sub_821E6FF4);
PPC_FUNC_IMPL(__imp__sub_821E6FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E6FF8"))) PPC_WEAK_FUNC(sub_821E6FF8);
PPC_FUNC_IMPL(__imp__sub_821E6FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821E7000;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r10,26752
	ctx.r30.s64 = ctx.r10.s64 + 26752;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r30,8424
	ctx.r3.s64 = ctx.r30.s64 + 8424;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stb r10,31134(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31134, ctx.r10.u8);
	// bl 0x8236a0c8
	ctx.lr = 0x821E7030;
	sub_8236A0C8(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,8424
	ctx.r3.s64 = ctx.r30.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821E7048;
	sub_82103ED8(ctx, base);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E705C"))) PPC_WEAK_FUNC(sub_821E705C);
PPC_FUNC_IMPL(__imp__sub_821E705C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7060"))) PPC_WEAK_FUNC(sub_821E7060);
PPC_FUNC_IMPL(__imp__sub_821E7060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821E7068;
	__savegprlr_28(ctx, base);
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82103ed8
	ctx.lr = 0x821E7088;
	sub_82103ED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x82103ed8
	ctx.lr = 0x821E7098;
	sub_82103ED8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// bl 0x82103ed8
	ctx.lr = 0x821E70A8;
	sub_82103ED8(ctx, base);
	// stb r3,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r3.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E70B4"))) PPC_WEAK_FUNC(sub_821E70B4);
PPC_FUNC_IMPL(__imp__sub_821E70B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E70B8"))) PPC_WEAK_FUNC(sub_821E70B8);
PPC_FUNC_IMPL(__imp__sub_821E70B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,8424
	ctx.r3.s64 = ctx.r11.s64 + 8424;
	// b 0x82103ed8
	sub_82103ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E70C8"))) PPC_WEAK_FUNC(sub_821E70C8);
PPC_FUNC_IMPL(__imp__sub_821E70C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,51970
	ctx.r9.u64 = ctx.r10.u64 | 51970;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r3,r11,-24936
	ctx.r3.s64 = ctx.r11.s64 + -24936;
	// beq cr6,0x821e7130
	if (ctx.cr6.eq) goto loc_821E7130;
	// lis r7,3638
	ctx.r7.s64 = 238419968;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r6,-27583
	ctx.r6.s64 = -1807679488;
	// ori r4,r7,32087
	ctx.r4.u64 = ctx.r7.u64 | 32087;
	// ori r5,r6,15958
	ctx.r5.u64 = ctx.r6.u64 | 15958;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rldimi r4,r5,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// beq cr6,0x821e7124
	if (ctx.cr6.eq) goto loc_821E7124;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// bne cr6,0x821e7124
	if (!ctx.cr6.eq) goto loc_821E7124;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,8808
	ctx.r3.s64 = ctx.r3.s64 + 8808;
	// b 0x822158b0
	sub_822158B0(ctx, base);
	return;
loc_821E7124:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
loc_821E7130:
	// lis r4,-28144
	ctx.r4.s64 = -1844445184;
	// lis r11,-27105
	ctx.r11.s64 = -1776353280;
	// ori r4,r4,51327
	ctx.r4.u64 = ctx.r4.u64 | 51327;
	// ori r10,r11,22369
	ctx.r10.u64 = ctx.r11.u64 | 22369;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldimi r4,r10,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// b 0x820a38e8
	sub_820A38E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7150"))) PPC_WEAK_FUNC(sub_821E7150);
PPC_FUNC_IMPL(__imp__sub_821E7150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821E7158;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// bl 0x82103ed8
	ctx.lr = 0x821E7170;
	sub_82103ED8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e7188
	if (ctx.cr6.eq) goto loc_821E7188;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821E7188:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r29,r11,3672
	ctx.r29.s64 = ctx.r11.s64 + 3672;
	// beq cr6,0x821e7218
	if (ctx.cr6.eq) goto loc_821E7218;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,15532
	ctx.r4.s64 = ctx.r11.s64 + 15532;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r30,r11,23504
	ctx.r30.s64 = ctx.r11.s64 + 23504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821E71B4;
	sub_8210FCF8(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82361bd8
	ctx.lr = 0x821E71C0;
	sub_82361BD8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,15504
	ctx.r4.s64 = ctx.r11.s64 + 15504;
	// bl 0x8210fcf8
	ctx.lr = 0x821E71D0;
	sub_8210FCF8(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82361bd8
	ctx.lr = 0x821E71DC;
	sub_82361BD8(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r9,15500
	ctx.r5.s64 = ctx.r9.s64 + 15500;
	// addi r11,r11,26936
	ctx.r11.s64 = ctx.r11.s64 + 26936;
	// lwz r10,23500(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23500);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r9,15488
	ctx.r4.s64 = ctx.r9.s64 + 15488;
	// lwz r9,2900(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2900);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// bl 0x82370488
	ctx.lr = 0x821E7218;
	sub_82370488(ctx, base);
loc_821E7218:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82367188
	ctx.lr = 0x821E722C;
	sub_82367188(ctx, base);
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x823683a8
	ctx.lr = 0x821E7234;
	sub_823683A8(ctx, base);
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,27160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27160);
	// addi r3,r31,8424
	ctx.r3.s64 = ctx.r31.s64 + 8424;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// bl 0x82103ed8
	ctx.lr = 0x821E725C;
	sub_82103ED8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7264"))) PPC_WEAK_FUNC(sub_821E7264);
PPC_FUNC_IMPL(__imp__sub_821E7264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7268"))) PPC_WEAK_FUNC(sub_821E7268);
PPC_FUNC_IMPL(__imp__sub_821E7268) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821e7278
	if (ctx.cr6.eq) goto loc_821E7278;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e728c
	if (!ctx.cr6.eq) goto loc_821E728C;
loc_821E7278:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,31116(r4)
	PPC_STORE_U8(ctx.r4.u32 + 31116, ctx.r11.u8);
	// stb r10,31133(r4)
	PPC_STORE_U8(ctx.r4.u32 + 31133, ctx.r10.u8);
	// blr 
	return;
loc_821E728C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,31133(r4)
	PPC_STORE_U8(ctx.r4.u32 + 31133, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7298"))) PPC_WEAK_FUNC(sub_821E7298);
PPC_FUNC_IMPL(__imp__sub_821E7298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E72A8"))) PPC_WEAK_FUNC(sub_821E72A8);
PPC_FUNC_IMPL(__imp__sub_821E72A8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,26752
	ctx.r10.s64 = ctx.r10.s64 + 26752;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r10,8424
	ctx.r3.s64 = ctx.r10.s64 + 8424;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r10,r10,26080
	ctx.r10.s64 = ctx.r10.s64 + 26080;
	// rlwinm r4,r8,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r11,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, ctx.r11.u8);
	// b 0x82103ed8
	sub_82103ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E72D4"))) PPC_WEAK_FUNC(sub_821E72D4);
PPC_FUNC_IMPL(__imp__sub_821E72D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E72D8"))) PPC_WEAK_FUNC(sub_821E72D8);
PPC_FUNC_IMPL(__imp__sub_821E72D8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r4,r4,31117
	ctx.r4.s64 = ctx.r4.s64 + 31117;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8259d2a0
	sub_8259D2A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E72F0"))) PPC_WEAK_FUNC(sub_821E72F0);
PPC_FUNC_IMPL(__imp__sub_821E72F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E72F4"))) PPC_WEAK_FUNC(sub_821E72F4);
PPC_FUNC_IMPL(__imp__sub_821E72F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E72F8"))) PPC_WEAK_FUNC(sub_821E72F8);
PPC_FUNC_IMPL(__imp__sub_821E72F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r10,r11,26080
	ctx.r10.s64 = ctx.r11.s64 + 26080;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r9,r11,14715
	ctx.r9.u64 = ctx.r11.u64 | 14715;
	// lbzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addis r9,r10,7
	ctx.r9.s64 = ctx.r10.s64 + 458752;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r8,r9,14537
	ctx.r8.s64 = ctx.r9.s64 + 14537;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821e7354
	if (ctx.cr6.eq) goto loc_821E7354;
	// addis r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 458752;
	// addi r5,r10,14520
	ctx.r5.s64 = ctx.r10.s64 + 14520;
	// lwzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x821e7358
	if (ctx.cr6.eq) goto loc_821E7358;
loc_821E7354:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E7358:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x825af670
	sub_825AF670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7368"))) PPC_WEAK_FUNC(sub_821E7368);
PPC_FUNC_IMPL(__imp__sub_821E7368) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E736C"))) PPC_WEAK_FUNC(sub_821E736C);
PPC_FUNC_IMPL(__imp__sub_821E736C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7370"))) PPC_WEAK_FUNC(sub_821E7370);
PPC_FUNC_IMPL(__imp__sub_821E7370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821E7378;
	__savegprlr_29(ctx, base);
	// li r12,-20528
	ctx.r12.s64 = -20528;
	// bl 0x8259e9a4
	ctx.lr = 0x821E7380;
	sub_8259E9A4(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,14715
	ctx.r9.u64 = ctx.r10.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r30,r10
	ctx.r30.s64 = ctx.r10.s8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x821e749c
	if (ctx.cr6.eq) goto loc_821E749C;
	// addis r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 458752;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r8,r9,14537
	ctx.r8.s64 = ctx.r9.s64 + 14537;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821e73e8
	if (ctx.cr6.eq) goto loc_821E73E8;
	// addis r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 458752;
	// addi r5,r11,14520
	ctx.r5.s64 = ctx.r11.s64 + 14520;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r3,r10,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x821e73ec
	if (ctx.cr6.eq) goto loc_821E73EC;
loc_821E73E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E73EC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e749c
	if (ctx.cr6.eq) goto loc_821E749C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x821e7488
	if (!ctx.cr6.eq) goto loc_821E7488;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824201a8
	ctx.lr = 0x821E7414;
	sub_824201A8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e7488
	if (!ctx.cr6.eq) goto loc_821E7488;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,19600
	ctx.r5.s64 = 19600;
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// bl 0x825ae950
	ctx.lr = 0x821E7434;
	sub_825AE950(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e7480
	if (!ctx.cr6.eq) goto loc_821E7480;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e7480
	if (ctx.cr6.eq) goto loc_821E7480;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,896
	ctx.r11.s64 = ctx.r1.s64 + 896;
loc_821E7450:
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r7,r8,0,0,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821e7470
	if (!ctx.cr6.eq) goto loc_821E7470;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_821E7470:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,196
	ctx.r11.s64 = ctx.r11.s64 + 196;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e7450
	if (!ctx.cr6.eq) goto loc_821E7450;
loc_821E7480:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825aed30
	ctx.lr = 0x821E7488;
	sub_825AED30(ctx, base);
loc_821E7488:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825af698
	ctx.lr = 0x821E749C;
	sub_825AF698(ctx, base);
loc_821E749C:
	// addi r1,r1,20528
	ctx.r1.s64 = ctx.r1.s64 + 20528;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E74A4"))) PPC_WEAK_FUNC(sub_821E74A4);
PPC_FUNC_IMPL(__imp__sub_821E74A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E74A8"))) PPC_WEAK_FUNC(sub_821E74A8);
PPC_FUNC_IMPL(__imp__sub_821E74A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821E74B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,21032(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821e750c
	if (!ctx.cr6.gt) goto loc_821E750C;
	// addi r31,r29,28
	ctx.r31.s64 = ctx.r29.s64 + 28;
loc_821E74D8:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824065f0
	ctx.lr = 0x821E74E4;
	sub_824065F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e74f8
	if (!ctx.cr6.eq) goto loc_821E74F8;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// std r10,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r10.u64);
loc_821E74F8:
	// lwz r9,21032(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21032);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,196
	ctx.r31.s64 = ctx.r31.s64 + 196;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821e74d8
	if (ctx.cr6.lt) goto loc_821E74D8;
loc_821E750C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7518"))) PPC_WEAK_FUNC(sub_821E7518);
PPC_FUNC_IMPL(__imp__sub_821E7518) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r10,20028(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e7530
	if (!ctx.cr6.eq) goto loc_821E7530;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821E7530:
	// addi r9,r4,4907
	ctx.r9.s64 = ctx.r4.s64 + 4907;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7540"))) PPC_WEAK_FUNC(sub_821E7540);
PPC_FUNC_IMPL(__imp__sub_821E7540) {
	PPC_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r10,20208(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20208);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e7558
	if (!ctx.cr6.eq) goto loc_821E7558;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821E7558:
	// addi r9,r4,5032
	ctx.r9.s64 = ctx.r4.s64 + 5032;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7568"))) PPC_WEAK_FUNC(sub_821E7568);
PPC_FUNC_IMPL(__imp__sub_821E7568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x821E7570;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addis r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 65536;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r29,-31040
	ctx.r29.s64 = ctx.r29.s64 + -31040;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821e75c8
	if (!ctx.cr6.gt) goto loc_821E75C8;
	// addis r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 65536;
	// addi r30,r30,-31520
	ctx.r30.s64 = ctx.r30.s64 + -31520;
loc_821E75A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824065f0
	ctx.lr = 0x821E75AC;
	sub_824065F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e75d4
	if (ctx.cr6.eq) goto loc_821E75D4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821e75a0
	if (ctx.cr6.lt) goto loc_821E75A0;
loc_821E75C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_821E75D4:
	// addi r11,r31,1418
	ctx.r11.s64 = ctx.r31.s64 + 1418;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r7,r8,r28
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r28.u32);
	// std r7,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r7.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E75F8"))) PPC_WEAK_FUNC(sub_821E75F8);
PPC_FUNC_IMPL(__imp__sub_821E75F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x821E7600;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8234b6c0
	ctx.lr = 0x821E760C;
	sub_8234B6C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,19628
	ctx.r29.s64 = ctx.r31.s64 + 19628;
	// addi r28,r11,3672
	ctx.r28.s64 = ctx.r11.s64 + 3672;
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// li r30,100
	ctx.r30.s64 = 100;
	// ori r27,r11,134
	ctx.r27.u64 = ctx.r11.u64 | 134;
loc_821E7624:
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357770
	ctx.lr = 0x821E7648;
	sub_82357770(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821e7624
	if (!ctx.cr6.eq) goto loc_821E7624;
	// addi r29,r31,20128
	ctx.r29.s64 = ctx.r31.s64 + 20128;
	// li r30,20
	ctx.r30.s64 = 20;
loc_821E7664:
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82357770
	ctx.lr = 0x821E7688;
	sub_82357770(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821e7664
	if (!ctx.cr6.eq) goto loc_821E7664;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E76A4"))) PPC_WEAK_FUNC(sub_821E76A4);
PPC_FUNC_IMPL(__imp__sub_821E76A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E76A8"))) PPC_WEAK_FUNC(sub_821E76A8);
PPC_FUNC_IMPL(__imp__sub_821E76A8) {
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
	// bl 0x8234dcb0
	ctx.lr = 0x821E76C0;
	sub_8234DCB0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,19628
	ctx.r9.s64 = ctx.r31.s64 + 19628;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r8,r31,20028
	ctx.r8.s64 = ctx.r31.s64 + 20028;
loc_821E76D0:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// blt cr6,0x821e76d0
	if (ctx.cr6.lt) goto loc_821E76D0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r9,r31,20128
	ctx.r9.s64 = ctx.r31.s64 + 20128;
	// addi r8,r31,20208
	ctx.r8.s64 = ctx.r31.s64 + 20208;
loc_821E76F4:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x821e76f4
	if (ctx.cr6.lt) goto loc_821E76F4;
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

__attribute__((alias("__imp__sub_821E7720"))) PPC_WEAK_FUNC(sub_821E7720);
PPC_FUNC_IMPL(__imp__sub_821E7720) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21048, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E772C"))) PPC_WEAK_FUNC(sub_821E772C);
PPC_FUNC_IMPL(__imp__sub_821E772C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7730"))) PPC_WEAK_FUNC(sub_821E7730);
PPC_FUNC_IMPL(__imp__sub_821E7730) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,21048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21048);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,21068
	ctx.r3.s64 = ctx.r11.s64 + 21068;
	// stw r9,21048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21048, ctx.r9.u32);
	// b 0x825aed68
	sub_825AED68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7758"))) PPC_WEAK_FUNC(sub_821E7758);
PPC_FUNC_IMPL(__imp__sub_821E7758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E775C"))) PPC_WEAK_FUNC(sub_821E775C);
PPC_FUNC_IMPL(__imp__sub_821E775C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7760"))) PPC_WEAK_FUNC(sub_821E7760);
PPC_FUNC_IMPL(__imp__sub_821E7760) {
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
	// li r9,10000
	ctx.r9.s64 = 10000;
	// lwz r10,21056(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21056);
	// lwz r11,21060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21060);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// blt cr6,0x821e7798
	if (ctx.cr6.lt) goto loc_821E7798;
	// li r30,15
	ctx.r30.s64 = 15;
loc_821E7798:
	// addi r7,r11,2529
	ctx.r7.s64 = ctx.r11.s64 + 2529;
	// lwz r10,31096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31096);
	// addi r6,r31,21068
	ctx.r6.s64 = ctx.r31.s64 + 21068;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lis r4,7
	ctx.r4.s64 = 458752;
	// addi r8,r11,29072
	ctx.r8.s64 = ctx.r11.s64 + 29072;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// ori r3,r4,14715
	ctx.r3.u64 = ctx.r4.u64 | 14715;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82420108
	ctx.lr = 0x821E77E4;
	sub_82420108(ctx, base);
	// lwz r11,21060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21060);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,21064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21064, ctx.r11.u32);
	// stw r10,21048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21048, ctx.r10.u32);
	// stw r9,21060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21060, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_821E7814"))) PPC_WEAK_FUNC(sub_821E7814);
PPC_FUNC_IMPL(__imp__sub_821E7814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7818"))) PPC_WEAK_FUNC(sub_821E7818);
PPC_FUNC_IMPL(__imp__sub_821E7818) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7824"))) PPC_WEAK_FUNC(sub_821E7824);
PPC_FUNC_IMPL(__imp__sub_821E7824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7828"))) PPC_WEAK_FUNC(sub_821E7828);
PPC_FUNC_IMPL(__imp__sub_821E7828) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7840"))) PPC_WEAK_FUNC(sub_821E7840);
PPC_FUNC_IMPL(__imp__sub_821E7840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8808
	ctx.r3.s64 = ctx.r11.s64 + 8808;
	// b 0x82211830
	sub_82211830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7850"))) PPC_WEAK_FUNC(sub_821E7850);
PPC_FUNC_IMPL(__imp__sub_821E7850) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r4,r9,68
	ctx.r4.s64 = ctx.r9.s64 + 68;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// li r8,9
	ctx.r8.s64 = 9;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_821E7888:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821e7888
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E7888;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8808
	ctx.r3.s64 = ctx.r11.s64 + 8808;
	// stw r10,76(r9)
	PPC_STORE_U32(ctx.r9.u32 + 76, ctx.r10.u32);
	// stw r10,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r10.u32);
	// bl 0x822183f8
	ctx.lr = 0x821E78B8;
	sub_822183F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E78C8"))) PPC_WEAK_FUNC(sub_821E78C8);
PPC_FUNC_IMPL(__imp__sub_821E78C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8808
	ctx.r3.s64 = ctx.r11.s64 + 8808;
	// b 0x82203c50
	sub_82203C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E78D8"))) PPC_WEAK_FUNC(sub_821E78D8);
PPC_FUNC_IMPL(__imp__sub_821E78D8) {
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
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8808
	ctx.r3.s64 = ctx.r11.s64 + 8808;
	// bl 0x82203c60
	ctx.lr = 0x821E78F4;
	sub_82203C60(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7908"))) PPC_WEAK_FUNC(sub_821E7908);
PPC_FUNC_IMPL(__imp__sub_821E7908) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// stb r10,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E791C"))) PPC_WEAK_FUNC(sub_821E791C);
PPC_FUNC_IMPL(__imp__sub_821E791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7920"))) PPC_WEAK_FUNC(sub_821E7920);
PPC_FUNC_IMPL(__imp__sub_821E7920) {
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
	// addi r31,r11,-24936
	ctx.r31.s64 = ctx.r11.s64 + -24936;
	// addi r3,r31,8808
	ctx.r3.s64 = ctx.r31.s64 + 8808;
	// bl 0x82203cf8
	ctx.lr = 0x821E7944;
	sub_82203CF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,8808
	ctx.r3.s64 = ctx.r31.s64 + 8808;
	// bl 0x82203d00
	ctx.lr = 0x821E7950;
	sub_82203D00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_821E796C"))) PPC_WEAK_FUNC(sub_821E796C);
PPC_FUNC_IMPL(__imp__sub_821E796C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7970"))) PPC_WEAK_FUNC(sub_821E7970);
PPC_FUNC_IMPL(__imp__sub_821E7970) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E797C"))) PPC_WEAK_FUNC(sub_821E797C);
PPC_FUNC_IMPL(__imp__sub_821E797C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7980"))) PPC_WEAK_FUNC(sub_821E7980);
PPC_FUNC_IMPL(__imp__sub_821E7980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8808
	ctx.r3.s64 = ctx.r11.s64 + 8808;
	// b 0x8220c330
	sub_8220C330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7990"))) PPC_WEAK_FUNC(sub_821E7990);
PPC_FUNC_IMPL(__imp__sub_821E7990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bacc
	ctx.lr = 0x821E7998;
	__savegprlr_17(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821e79d4
	if (ctx.cr6.eq) goto loc_821E79D4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821e79d4
	if (ctx.cr6.eq) goto loc_821E79D4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x821e79d8
	if (!ctx.cr6.eq) goto loc_821E79D8;
loc_821E79D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821E79D8:
	// clrlwi r17,r11,24
	ctx.r17.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r18,-1
	ctx.r18.s64 = -1;
	// li r19,-1
	ctx.r19.s64 = -1;
	// li r20,-1
	ctx.r20.s64 = -1;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// subf r22,r21,r5
	ctx.r22.s64 = ctx.r5.s64 - ctx.r21.s64;
	// addi r28,r11,26080
	ctx.r28.s64 = ctx.r11.s64 + 26080;
loc_821E7A00:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x821e7a1c
	if (ctx.cr6.eq) goto loc_821E7A1C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822210a8
	ctx.lr = 0x821E7A18;
	sub_822210A8(ctx, base);
	// b 0x821e7a3c
	goto loc_821E7A3C;
loc_821E7A1C:
	// cmpwi cr6,r30,26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 26, ctx.xer);
	// bge cr6,0x821e7a34
	if (!ctx.cr6.lt) goto loc_821E7A34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d6240
	ctx.lr = 0x821E7A2C;
	sub_822D6240(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// b 0x821e7a38
	goto loc_821E7A38;
loc_821E7A34:
	// std r23,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r23.u64);
loc_821E7A38:
	// std r23,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r23.u64);
loc_821E7A3C:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// stdx r9,r22,r31
	PPC_STORE_U64(ctx.r22.u32 + ctx.r31.u32, ctx.r9.u64);
	// bne cr6,0x821e7a7c
	if (!ctx.cr6.eq) goto loc_821E7A7C;
	// addis r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 196608;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// bl 0x822d2be0
	ctx.lr = 0x821E7A68;
	sub_822D2BE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e7a7c
	if (!ctx.cr6.eq) goto loc_821E7A7C;
	// mr r18,r24
	ctx.r18.u64 = ctx.r24.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_821E7A7C:
	// clrlwi r8,r25,24
	ctx.r8.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821e7aac
	if (!ctx.cr6.eq) goto loc_821E7AAC;
	// addis r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 196608;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// bl 0x822d2be0
	ctx.lr = 0x821E7A98;
	sub_822D2BE0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821e7aac
	if (!ctx.cr6.eq) goto loc_821E7AAC;
	// mr r19,r24
	ctx.r19.u64 = ctx.r24.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_821E7AAC:
	// clrlwi r7,r26,24
	ctx.r7.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821e7adc
	if (!ctx.cr6.eq) goto loc_821E7ADC;
	// addis r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 196608;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r3,r11,20656
	ctx.r3.s64 = ctx.r11.s64 + 20656;
	// bl 0x822d2be0
	ctx.lr = 0x821E7AC8;
	sub_822D2BE0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x821e7adc
	if (!ctx.cr6.eq) goto loc_821E7ADC;
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_821E7ADC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpwi cr6,r30,50
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 50, ctx.xer);
	// blt cr6,0x821e7a00
	if (ctx.cr6.lt) goto loc_821E7A00;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// addi r25,r11,-24936
	ctx.r25.s64 = ctx.r11.s64 + -24936;
	// addi r26,r25,9584
	ctx.r26.s64 = ctx.r25.s64 + 9584;
loc_821E7AFC:
	// addi r28,r25,9572
	ctx.r28.s64 = ctx.r25.s64 + 9572;
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// lbzx r6,r27,r28
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r28.u32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821e7b1c
	if (!ctx.cr6.eq) goto loc_821E7B1C;
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// b 0x821e7be4
	goto loc_821E7BE4;
loc_821E7B1C:
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x821e7b34
	if (!ctx.cr6.eq) goto loc_821E7B34;
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, -1, ctx.xer);
	// beq cr6,0x821e7be4
	if (ctx.cr6.eq) goto loc_821E7BE4;
	// stw r18,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r18.u32);
	// b 0x821e7be4
	goto loc_821E7BE4;
loc_821E7B34:
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// bne cr6,0x821e7b4c
	if (!ctx.cr6.eq) goto loc_821E7B4C;
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, -1, ctx.xer);
	// beq cr6,0x821e7be4
	if (ctx.cr6.eq) goto loc_821E7BE4;
	// stw r19,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r19.u32);
	// b 0x821e7be4
	goto loc_821E7BE4;
loc_821E7B4C:
	// cmpwi cr6,r11,-4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -4, ctx.xer);
	// bne cr6,0x821e7b64
	if (!ctx.cr6.eq) goto loc_821E7B64;
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// beq cr6,0x821e7be4
	if (ctx.cr6.eq) goto loc_821E7BE4;
	// stw r20,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r20.u32);
	// b 0x821e7be4
	goto loc_821E7BE4;
loc_821E7B64:
	// ld r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// beq cr6,0x821e7be4
	if (ctx.cr6.eq) goto loc_821E7BE4;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_821E7B78:
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x821e7be4
	if (ctx.cr6.eq) goto loc_821E7BE4;
	// std r23,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r23.u64);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// std r23,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r23.u64);
	// beq cr6,0x821e7ba8
	if (ctx.cr6.eq) goto loc_821E7BA8;
	// lbzx r3,r27,r28
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// bl 0x822210a8
	ctx.lr = 0x821E7BA8;
	sub_822210A8(ctx, base);
loc_821E7BA8:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x821e7bc8
	if (!ctx.cr6.eq) goto loc_821E7BC8;
	// ldx r9,r31,r22
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r22.u32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x821e7bdc
	if (ctx.cr6.eq) goto loc_821E7BDC;
loc_821E7BC8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpwi cr6,r30,50
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 50, ctx.xer);
	// blt cr6,0x821e7b78
	if (ctx.cr6.lt) goto loc_821E7B78;
	// b 0x821e7be4
	goto loc_821E7BE4;
loc_821E7BDC:
	// add r7,r30,r24
	ctx.r7.u64 = ctx.r30.u64 + ctx.r24.u64;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
loc_821E7BE4:
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r6,r25,9664
	ctx.r6.s64 = ctx.r25.s64 + 9664;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r26,r6
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x821e7afc
	if (ctx.cr6.lt) goto loc_821E7AFC;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8259bb1c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7C04"))) PPC_WEAK_FUNC(sub_821E7C04);
PPC_FUNC_IMPL(__imp__sub_821E7C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7C08"))) PPC_WEAK_FUNC(sub_821E7C08);
PPC_FUNC_IMPL(__imp__sub_821E7C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8808
	ctx.r3.s64 = ctx.r11.s64 + 8808;
	// b 0x82214b38
	sub_82214B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7C18"))) PPC_WEAK_FUNC(sub_821E7C18);
PPC_FUNC_IMPL(__imp__sub_821E7C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,-24936
	ctx.r11.s64 = ctx.r11.s64 + -24936;
	// addi r3,r11,8808
	ctx.r3.s64 = ctx.r11.s64 + 8808;
	// b 0x82211958
	sub_82211958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7C28"))) PPC_WEAK_FUNC(sub_821E7C28);
PPC_FUNC_IMPL(__imp__sub_821E7C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,-24936
	ctx.r9.s64 = ctx.r11.s64 + -24936;
	// lwz r10,9720(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9720);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821e7c70
	if (!ctx.cr6.gt) goto loc_821E7C70;
	// addi r11,r9,9668
	ctx.r11.s64 = ctx.r9.s64 + 9668;
	// li r7,1
	ctx.r7.s64 = 1;
loc_821E7C48:
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x821e7c60
	if (!ctx.cr6.eq) goto loc_821E7C60;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lwz r10,9720(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9720);
loc_821E7C60:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821e7c48
	if (ctx.cr6.lt) goto loc_821E7C48;
loc_821E7C70:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7C78"))) PPC_WEAK_FUNC(sub_821E7C78);
PPC_FUNC_IMPL(__imp__sub_821E7C78) {
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
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823656e8
	ctx.lr = 0x821E7C98;
	sub_823656E8(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,15864
	ctx.r3.s64 = ctx.r11.s64 + 15864;
	// bl 0x82220fa0
	ctx.lr = 0x821E7CB4;
	sub_82220FA0(ctx, base);
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

__attribute__((alias("__imp__sub_821E7CC8"))) PPC_WEAK_FUNC(sub_821E7CC8);
PPC_FUNC_IMPL(__imp__sub_821E7CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821E7CD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-24936
	ctx.r29.s64 = ctx.r11.s64 + -24936;
	// lwz r11,9720(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821e7d2c
	if (!ctx.cr6.gt) goto loc_821E7D2C;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r29,9668
	ctx.r31.s64 = ctx.r29.s64 + 9668;
	// addi r28,r11,26752
	ctx.r28.s64 = ctx.r11.s64 + 26752;
loc_821E7CF8:
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x823656f8
	ctx.lr = 0x821E7D04;
	sub_823656F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e7d18
	if (ctx.cr6.eq) goto loc_821E7D18;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e7d38
	if (ctx.cr6.eq) goto loc_821E7D38;
loc_821E7D18:
	// lwz r11,9720(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9720);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821e7cf8
	if (ctx.cr6.lt) goto loc_821E7CF8;
loc_821E7D2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_821E7D38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7D44"))) PPC_WEAK_FUNC(sub_821E7D44);
PPC_FUNC_IMPL(__imp__sub_821E7D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7D48"))) PPC_WEAK_FUNC(sub_821E7D48);
PPC_FUNC_IMPL(__imp__sub_821E7D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r11,r11,27164
	ctx.r11.s64 = ctx.r11.s64 + 27164;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7D7C"))) PPC_WEAK_FUNC(sub_821E7D7C);
PPC_FUNC_IMPL(__imp__sub_821E7D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7D80"))) PPC_WEAK_FUNC(sub_821E7D80);
PPC_FUNC_IMPL(__imp__sub_821E7D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// b 0x82368400
	sub_82368400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E7D90"))) PPC_WEAK_FUNC(sub_821E7D90);
PPC_FUNC_IMPL(__imp__sub_821E7D90) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x82361470
	ctx.lr = 0x821E7DB0;
	sub_82361470(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e7ddc
	if (ctx.cr6.eq) goto loc_821E7DDC;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,14715
	ctx.r9.u64 = ctx.r10.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x825af680
	ctx.lr = 0x821E7DDC;
	sub_825AF680(ctx, base);
loc_821E7DDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7DEC"))) PPC_WEAK_FUNC(sub_821E7DEC);
PPC_FUNC_IMPL(__imp__sub_821E7DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7DF0"))) PPC_WEAK_FUNC(sub_821E7DF0);
PPC_FUNC_IMPL(__imp__sub_821E7DF0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x82361470
	ctx.lr = 0x821E7E10;
	sub_82361470(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e7e3c
	if (ctx.cr6.eq) goto loc_821E7E3C;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,14715
	ctx.r9.u64 = ctx.r10.u64 | 14715;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x825af688
	ctx.lr = 0x821E7E3C;
	sub_825AF688(ctx, base);
loc_821E7E3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7E4C"))) PPC_WEAK_FUNC(sub_821E7E4C);
PPC_FUNC_IMPL(__imp__sub_821E7E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7E50"))) PPC_WEAK_FUNC(sub_821E7E50);
PPC_FUNC_IMPL(__imp__sub_821E7E50) {
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
	// ble cr6,0x821e7eac
	if (!ctx.cr6.gt) goto loc_821E7EAC;
loc_821E7E7C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x821E7E88;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e7e9c
	if (ctx.cr6.eq) goto loc_821E7E9C;
	// lbz r11,23124(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e7ec8
	if (ctx.cr6.eq) goto loc_821E7EC8;
loc_821E7E9C:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821e7e7c
	if (ctx.cr6.lt) goto loc_821E7E7C;
loc_821E7EAC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821E7EB0:
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
loc_821E7EC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821e7eb0
	goto loc_821E7EB0;
}

__attribute__((alias("__imp__sub_821E7ED0"))) PPC_WEAK_FUNC(sub_821E7ED0);
PPC_FUNC_IMPL(__imp__sub_821E7ED0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821E7EEC:
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x821e7eec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E7EEC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r8,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E7F04"))) PPC_WEAK_FUNC(sub_821E7F04);
PPC_FUNC_IMPL(__imp__sub_821E7F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E7F08"))) PPC_WEAK_FUNC(sub_821E7F08);
PPC_FUNC_IMPL(__imp__sub_821E7F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821E7F10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r10,r8,584
	ctx.r10.s64 = ctx.r8.s64 * 584;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r31,r10,11184
	ctx.r31.s64 = ctx.r10.s64 + 11184;
	// lwz r11,316(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 316);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x821e8080
	if (ctx.cr6.gt) goto loc_821E8080;
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// addi r12,r12,32616
	ctx.r12.s64 = ctx.r12.s64 + 32616;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821E7FB4;
	case 1:
		goto loc_821E8080;
	case 2:
		goto loc_821E8080;
	case 3:
		goto loc_821E8080;
	case 4:
		goto loc_821E8080;
	case 5:
		goto loc_821E7FE0;
	case 6:
		goto loc_821E8080;
	case 7:
		goto loc_821E7FFC;
	case 8:
		goto loc_821E8080;
	case 9:
		goto loc_821E8080;
	case 10:
		goto loc_821E8080;
	case 11:
		goto loc_821E8080;
	case 12:
		goto loc_821E8080;
	case 13:
		goto loc_821E8080;
	case 14:
		goto loc_821E8028;
	case 15:
		goto loc_821E8080;
	case 16:
		goto loc_821E8054;
	case 17:
		goto loc_821E8080;
	case 18:
		goto loc_821E8028;
	default:
		__builtin_unreachable();
	}
	// lwz r16,32692(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32692);
	// lwz r16,-32640(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32640);
	// lwz r16,-32640(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32640);
	// lwz r16,-32640(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32640);
	// lwz r16,-32640(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32640);
	// lwz r16,32736(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32736);
	// lwz r16,-32640(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32640);
	// lwz r16,32764(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32764);
	// lwz r16,-32640(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32640);
	// lwz r16,-32640(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32640);
	// lwz r16,-32640(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32640);
	// lwz r16,-32640(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32640);
	// lwz r16,-32640(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32640);
	// lwz r16,-32640(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32640);
	// lwz r16,-32728(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32728);
	// lwz r16,-32640(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32640);
	// lwz r16,-32684(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32684);
	// lwz r16,-32640(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32640);
	// lwz r16,-32728(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32728);
loc_821E7FB4:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r31,124
	ctx.r4.s64 = ctx.r31.s64 + 124;
	// addi r29,r11,23504
	ctx.r29.s64 = ctx.r11.s64 + 23504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821E7FC8;
	sub_8210FCF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,148
	ctx.r4.s64 = ctx.r31.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821E7FD8;
	sub_8210FCF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x821e8088
	goto loc_821E8088;
loc_821E7FE0:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r31,180
	ctx.r4.s64 = ctx.r31.s64 + 180;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821E7FF0;
	sub_8210FCF8(ctx, base);
	// addi r29,r31,412
	ctx.r29.s64 = ctx.r31.s64 + 412;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821e8088
	goto loc_821E8088;
loc_821E7FFC:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r31,220
	ctx.r4.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,23504
	ctx.r29.s64 = ctx.r11.s64 + 23504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821E8010;
	sub_8210FCF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,260
	ctx.r4.s64 = ctx.r31.s64 + 260;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821E8020;
	sub_8210FCF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x821e8088
	goto loc_821E8088;
loc_821E8028:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// addi r29,r11,23504
	ctx.r29.s64 = ctx.r11.s64 + 23504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821E803C;
	sub_8210FCF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,376
	ctx.r4.s64 = ctx.r31.s64 + 376;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821E804C;
	sub_8210FCF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x821e8088
	goto loc_821E8088;
loc_821E8054:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// addi r29,r11,23504
	ctx.r29.s64 = ctx.r11.s64 + 23504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821E8068;
	sub_8210FCF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,336
	ctx.r4.s64 = ctx.r31.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210fcf8
	ctx.lr = 0x821E8078;
	sub_8210FCF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x821e8088
	goto loc_821E8088;
loc_821E8080:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821E8088:
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r28,r11,14528
	ctx.r28.s64 = ctx.r11.s64 + 14528;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f5fb0
	ctx.lr = 0x821E80A0;
	sub_821F5FB0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f5fb0
	ctx.lr = 0x821E80B0;
	sub_821F5FB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E80B8"))) PPC_WEAK_FUNC(sub_821E80B8);
PPC_FUNC_IMPL(__imp__sub_821E80B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mulli r8,r4,5956
	ctx.r8.s64 = ctx.r4.s64 * 5956;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r10,r7,328
	ctx.r10.s64 = ctx.r7.s64 * 328;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r9,r6,584
	ctx.r9.s64 = ctx.r6.s64 * 584;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,10580(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10580);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821e8200
	if (ctx.cr6.eq) {
		sub_821E8200(ctx, base);
		return;
	}
	// lwz r7,316(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 316);
	// addi r7,r7,-3
	ctx.r7.s64 = ctx.r7.s64 + -3;
	// cmplwi cr6,r7,18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 18, ctx.xer);
	// bgt cr6,0x821e8200
	if (ctx.cr6.gt) {
		sub_821E8200(ctx, base);
		return;
	}
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-32476
	ctx.r12.s64 = ctx.r12.s64 + -32476;
	// rlwinm r0,r7,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r7.u64) {
	case 0:
		// ERROR: 0x821E8170
		return;
	case 1:
		sub_821E8200(ctx, base);
		return;
	case 2:
		sub_821E8200(ctx, base);
		return;
	case 3:
		sub_821E8200(ctx, base);
		return;
	case 4:
		sub_821E8200(ctx, base);
		return;
	case 5:
		sub_821E81A4(ctx, base);
		return;
	case 6:
		sub_821E8200(ctx, base);
		return;
	case 7:
		sub_821E81F4(ctx, base);
		return;
	case 8:
		sub_821E8200(ctx, base);
		return;
	case 9:
		sub_821E8200(ctx, base);
		return;
	case 10:
		sub_821E8200(ctx, base);
		return;
	case 11:
		sub_821E8200(ctx, base);
		return;
	case 12:
		sub_821E8200(ctx, base);
		return;
	case 13:
		sub_821E8200(ctx, base);
		return;
	case 14:
		sub_821E81F4(ctx, base);
		return;
	case 15:
		sub_821E8200(ctx, base);
		return;
	case 16:
		sub_821E81F4(ctx, base);
		return;
	case 17:
		sub_821E8200(ctx, base);
		return;
	case 18:
		sub_821E81F4(ctx, base);
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821E8124"))) PPC_WEAK_FUNC(sub_821E8124);
PPC_FUNC_IMPL(__imp__sub_821E8124) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r16,-32400(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32400);
	// lwz r16,-32256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32256);
	// lwz r16,-32256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32256);
	// lwz r16,-32256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32256);
	// lwz r16,-32256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32256);
	// lwz r16,-32348(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32348);
	// lwz r16,-32256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32256);
	// lwz r16,-32268(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32268);
	// lwz r16,-32256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32256);
	// lwz r16,-32256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32256);
	// lwz r16,-32256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32256);
	// lwz r16,-32256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32256);
	// lwz r16,-32256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32256);
	// lwz r16,-32256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32256);
	// lwz r16,-32268(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32268);
	// lwz r16,-32256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32256);
	// lwz r16,-32268(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32268);
	// lwz r16,-32256(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32256);
	// lwz r16,-32268(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32268);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,10592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10592);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-1548(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1548);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821e8190
	if (!ctx.cr6.eq) goto loc_821E8190;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-12136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821E8190:
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f12,10588(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10588);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,10564(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 10564);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E81A4"))) PPC_WEAK_FUNC(sub_821E81A4);
PPC_FUNC_IMPL(__imp__sub_821E81A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r4,10597(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10597);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821e8184
	if (!ctx.cr6.eq) {
		// ERROR 821E8184
		return;
	}
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x821e81c4
	if (!ctx.cr6.eq) goto loc_821E81C4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -716);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821E81C4:
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x821e81e8
	if (ctx.cr6.eq) goto loc_821E81E8;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x821e81e8
	if (ctx.cr6.eq) goto loc_821E81E8;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// bne cr6,0x821e8200
	if (!ctx.cr6.eq) {
		sub_821E8200(ctx, base);
		return;
	}
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-1572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1572);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821E81E8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f1,-15124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15124);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E81F4"))) PPC_WEAK_FUNC(sub_821E81F4);
PPC_FUNC_IMPL(__imp__sub_821E81F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8200"))) PPC_WEAK_FUNC(sub_821E8200);
PPC_FUNC_IMPL(__imp__sub_821E8200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f1,15560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15560);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E820C"))) PPC_WEAK_FUNC(sub_821E820C);
PPC_FUNC_IMPL(__imp__sub_821E820C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8210"))) PPC_WEAK_FUNC(sub_821E8210);
PPC_FUNC_IMPL(__imp__sub_821E8210) {
	PPC_FUNC_PROLOGUE();
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mulli r10,r4,5956
	ctx.r10.s64 = ctx.r4.s64 * 5956;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r9,r7,328
	ctx.r9.s64 = ctx.r7.s64 * 328;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r9,r6,584
	ctx.r9.s64 = ctx.r6.s64 * 584;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,10580(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e83a8
	if (ctx.cr6.eq) {
		sub_821E83A8(ctx, base);
		return;
	}
	// lwz r9,316(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 316);
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// cmplwi cr6,r9,18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 18, ctx.xer);
	// bgt cr6,0x821e83a8
	if (ctx.cr6.gt) {
		sub_821E83A8(ctx, base);
		return;
	}
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-32128
	ctx.r12.s64 = ctx.r12.s64 + -32128;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		// ERROR: 0x821E82CC
		return;
	case 1:
		sub_821E83A8(ctx, base);
		return;
	case 2:
		sub_821E83A8(ctx, base);
		return;
	case 3:
		sub_821E83A8(ctx, base);
		return;
	case 4:
		sub_821E83A8(ctx, base);
		return;
	case 5:
		// ERROR: 0x821E82D4
		return;
	case 6:
		sub_821E83A8(ctx, base);
		return;
	case 7:
		sub_821E82EC(ctx, base);
		return;
	case 8:
		sub_821E83A8(ctx, base);
		return;
	case 9:
		sub_821E83A8(ctx, base);
		return;
	case 10:
		sub_821E83A8(ctx, base);
		return;
	case 11:
		sub_821E83A8(ctx, base);
		return;
	case 12:
		sub_821E83A8(ctx, base);
		return;
	case 13:
		sub_821E83A8(ctx, base);
		return;
	case 14:
		sub_821E8338(ctx, base);
		return;
	case 15:
		sub_821E83A8(ctx, base);
		return;
	case 16:
		sub_821E8384(ctx, base);
		return;
	case 17:
		sub_821E83A8(ctx, base);
		return;
	case 18:
		sub_821E8338(ctx, base);
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821E8280"))) PPC_WEAK_FUNC(sub_821E8280);
PPC_FUNC_IMPL(__imp__sub_821E8280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r16,-32052(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32052);
	// lwz r16,-31832(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31832);
	// lwz r16,-31832(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31832);
	// lwz r16,-31832(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31832);
	// lwz r16,-31832(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31832);
	// lwz r16,-32044(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32044);
	// lwz r16,-31832(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31832);
	// lwz r16,-32020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32020);
	// lwz r16,-31832(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31832);
	// lwz r16,-31832(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31832);
	// lwz r16,-31832(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31832);
	// lwz r16,-31832(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31832);
	// lwz r16,-31832(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31832);
	// lwz r16,-31832(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31832);
	// lwz r16,-31944(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31944);
	// lwz r16,-31832(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31832);
	// lwz r16,-31868(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31868);
	// lwz r16,-31832(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31832);
	// lwz r16,-31944(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31944);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821e82e0
	if (!ctx.cr6.eq) goto loc_821E82E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821E82E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E82EC"))) PPC_WEAK_FUNC(sub_821E82EC);
PPC_FUNC_IMPL(__imp__sub_821E82EC) {
	PPC_FUNC_PROLOGUE();
	// lbz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821e8314
	if (!ctx.cr6.eq) goto loc_821E8314;
	// lwz r4,10556(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10556);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r3.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
loc_821E8314:
	// lwz r11,10556(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10556);
	// lwz r10,10652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10652);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8338"))) PPC_WEAK_FUNC(sub_821E8338);
PPC_FUNC_IMPL(__imp__sub_821E8338) {
	PPC_FUNC_PROLOGUE();
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821e8360
	if (!ctx.cr6.eq) goto loc_821E8360;
	// lwz r6,10548(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10548);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f10,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f1,f9
	ctx.f1.f64 = double(float(ctx.f9.f64));
	// blr 
	return;
loc_821E8360:
	// lwz r3,10636(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10636);
	// lwz r4,10548(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10548);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f8,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8384"))) PPC_WEAK_FUNC(sub_821E8384);
PPC_FUNC_IMPL(__imp__sub_821E8384) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,10664(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10664);
	// lwz r8,10636(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10636);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f6,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E83A8"))) PPC_WEAK_FUNC(sub_821E83A8);
PPC_FUNC_IMPL(__imp__sub_821E83A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f1,15560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15560);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E83B4"))) PPC_WEAK_FUNC(sub_821E83B4);
PPC_FUNC_IMPL(__imp__sub_821E83B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E83B8"))) PPC_WEAK_FUNC(sub_821E83B8);
PPC_FUNC_IMPL(__imp__sub_821E83B8) {
	PPC_FUNC_PROLOGUE();
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
	// mulli r9,r4,5956
	ctx.r9.s64 = ctx.r4.s64 * 5956;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r10,r8,328
	ctx.r10.s64 = ctx.r8.s64 * 328;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r10,r7,584
	ctx.r10.s64 = ctx.r7.s64 * 584;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,10580(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e84f8
	if (ctx.cr6.eq) {
		sub_821E84F8(ctx, base);
		return;
	}
	// lwz r10,316(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// bgt cr6,0x821e84f8
	if (ctx.cr6.gt) {
		sub_821E84F8(ctx, base);
		return;
	}
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-31708
	ctx.r12.s64 = ctx.r12.s64 + -31708;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x821E8470
		return;
	case 1:
		sub_821E84F8(ctx, base);
		return;
	case 2:
		sub_821E84F8(ctx, base);
		return;
	case 3:
		sub_821E84F8(ctx, base);
		return;
	case 4:
		sub_821E84F8(ctx, base);
		return;
	case 5:
		sub_821E848C(ctx, base);
		return;
	case 6:
		sub_821E84F8(ctx, base);
		return;
	case 7:
		sub_821E84F8(ctx, base);
		return;
	case 8:
		sub_821E84F8(ctx, base);
		return;
	case 9:
		sub_821E84F8(ctx, base);
		return;
	case 10:
		sub_821E84F8(ctx, base);
		return;
	case 11:
		sub_821E84F8(ctx, base);
		return;
	case 12:
		sub_821E84F8(ctx, base);
		return;
	case 13:
		sub_821E84F8(ctx, base);
		return;
	case 14:
		sub_821E84DC(ctx, base);
		return;
	case 15:
		sub_821E84F8(ctx, base);
		return;
	case 16:
		sub_821E84DC(ctx, base);
		return;
	case 17:
		sub_821E84F8(ctx, base);
		return;
	case 18:
		sub_821E84DC(ctx, base);
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821E8424"))) PPC_WEAK_FUNC(sub_821E8424);
PPC_FUNC_IMPL(__imp__sub_821E8424) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r16,-31632(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31632);
	// lwz r16,-31496(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31496);
	// lwz r16,-31496(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31496);
	// lwz r16,-31496(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31496);
	// lwz r16,-31496(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31496);
	// lwz r16,-31604(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31604);
	// lwz r16,-31496(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31496);
	// lwz r16,-31496(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31496);
	// lwz r16,-31496(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31496);
	// lwz r16,-31496(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31496);
	// lwz r16,-31496(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31496);
	// lwz r16,-31496(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31496);
	// lwz r16,-31496(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31496);
	// lwz r16,-31496(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31496);
	// lwz r16,-31524(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31524);
	// lwz r16,-31496(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31496);
	// lwz r16,-31524(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31524);
	// lwz r16,-31496(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31496);
	// lwz r16,-31524(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31524);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821e8484
	if (!ctx.cr6.eq) goto loc_821E8484;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821E8484:
	// lfs f1,10588(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10588);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E848C"))) PPC_WEAK_FUNC(sub_821E848C);
PPC_FUNC_IMPL(__imp__sub_821E848C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r6,10597(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 10597);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821e8478
	if (!ctx.cr6.eq) {
		// ERROR 821E8478
		return;
	}
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821e84ac
	if (!ctx.cr6.eq) goto loc_821E84AC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -716);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821E84AC:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821e84d0
	if (ctx.cr6.eq) goto loc_821E84D0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821e84d0
	if (ctx.cr6.eq) goto loc_821E84D0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821e84f8
	if (!ctx.cr6.eq) {
		sub_821E84F8(ctx, base);
		return;
	}
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-1572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1572);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821E84D0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f1,-15124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15124);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E84DC"))) PPC_WEAK_FUNC(sub_821E84DC);
PPC_FUNC_IMPL(__imp__sub_821E84DC) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,10636(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10636);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E84F8"))) PPC_WEAK_FUNC(sub_821E84F8);
PPC_FUNC_IMPL(__imp__sub_821E84F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f1,15560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15560);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8504"))) PPC_WEAK_FUNC(sub_821E8504);
PPC_FUNC_IMPL(__imp__sub_821E8504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8508"))) PPC_WEAK_FUNC(sub_821E8508);
PPC_FUNC_IMPL(__imp__sub_821E8508) {
	PPC_FUNC_PROLOGUE();
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mulli r10,r4,5956
	ctx.r10.s64 = ctx.r4.s64 * 5956;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r9,r7,328
	ctx.r9.s64 = ctx.r7.s64 * 328;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r10,r6,584
	ctx.r10.s64 = ctx.r6.s64 * 584;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,10580(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e8634
	if (ctx.cr6.eq) {
		sub_821E8634(ctx, base);
		return;
	}
	// lwz r10,316(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// bgt cr6,0x821e8634
	if (ctx.cr6.gt) {
		sub_821E8634(ctx, base);
		return;
	}
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-31368
	ctx.r12.s64 = ctx.r12.s64 + -31368;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x821E85C4
		return;
	case 1:
		sub_821E8634(ctx, base);
		return;
	case 2:
		sub_821E8634(ctx, base);
		return;
	case 3:
		sub_821E8634(ctx, base);
		return;
	case 4:
		sub_821E8634(ctx, base);
		return;
	case 5:
		// ERROR: 0x821E85CC
		return;
	case 6:
		sub_821E8634(ctx, base);
		return;
	case 7:
		sub_821E85E0(ctx, base);
		return;
	case 8:
		sub_821E8634(ctx, base);
		return;
	case 9:
		sub_821E8634(ctx, base);
		return;
	case 10:
		sub_821E8634(ctx, base);
		return;
	case 11:
		sub_821E8634(ctx, base);
		return;
	case 12:
		sub_821E8634(ctx, base);
		return;
	case 13:
		sub_821E8634(ctx, base);
		return;
	case 14:
		sub_821E85FC(ctx, base);
		return;
	case 15:
		sub_821E8634(ctx, base);
		return;
	case 16:
		sub_821E8618(ctx, base);
		return;
	case 17:
		sub_821E8634(ctx, base);
		return;
	case 18:
		sub_821E85FC(ctx, base);
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_821E8578"))) PPC_WEAK_FUNC(sub_821E8578);
PPC_FUNC_IMPL(__imp__sub_821E8578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r16,-31292(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31292);
	// lwz r16,-31180(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31180);
	// lwz r16,-31180(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31180);
	// lwz r16,-31180(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31180);
	// lwz r16,-31180(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31180);
	// lwz r16,-31284(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31284);
	// lwz r16,-31180(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31180);
	// lwz r16,-31264(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31264);
	// lwz r16,-31180(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31180);
	// lwz r16,-31180(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31180);
	// lwz r16,-31180(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31180);
	// lwz r16,-31180(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31180);
	// lwz r16,-31180(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31180);
	// lwz r16,-31180(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31180);
	// lwz r16,-31236(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31236);
	// lwz r16,-31180(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31180);
	// lwz r16,-31208(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31208);
	// lwz r16,-31180(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31180);
	// lwz r16,-31236(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -31236);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821e85d8
	if (!ctx.cr6.eq) goto loc_821E85D8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821E85D8:
	// lfs f1,10588(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10588);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E85E0"))) PPC_WEAK_FUNC(sub_821E85E0);
PPC_FUNC_IMPL(__imp__sub_821E85E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,10556(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10556);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E85FC"))) PPC_WEAK_FUNC(sub_821E85FC);
PPC_FUNC_IMPL(__imp__sub_821E85FC) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10548(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10548);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8618"))) PPC_WEAK_FUNC(sub_821E8618);
PPC_FUNC_IMPL(__imp__sub_821E8618) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10664(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10664);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f10,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f1,f9
	ctx.f1.f64 = double(float(ctx.f9.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8634"))) PPC_WEAK_FUNC(sub_821E8634);
PPC_FUNC_IMPL(__imp__sub_821E8634) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f1,15560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15560);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8640"))) PPC_WEAK_FUNC(sub_821E8640);
PPC_FUNC_IMPL(__imp__sub_821E8640) {
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
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lfs f0,15560(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15560);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r10,r8,584
	ctx.r10.s64 = ctx.r8.s64 * 584;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,316(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 316);
	// bne cr6,0x821e86a8
	if (!ctx.cr6.eq) goto loc_821E86A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r6,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r6.u8);
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
loc_821E86A8:
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x821e888c
	if (ctx.cr6.gt) goto loc_821E888C;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-31028
	ctx.r12.s64 = ctx.r12.s64 + -31028;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821E8718;
	case 1:
		goto loc_821E888C;
	case 2:
		goto loc_821E888C;
	case 3:
		goto loc_821E888C;
	case 4:
		goto loc_821E888C;
	case 5:
		goto loc_821E877C;
	case 6:
		goto loc_821E888C;
	case 7:
		goto loc_821E8860;
	case 8:
		goto loc_821E888C;
	case 9:
		goto loc_821E888C;
	case 10:
		goto loc_821E888C;
	case 11:
		goto loc_821E888C;
	case 12:
		goto loc_821E888C;
	case 13:
		goto loc_821E888C;
	case 14:
		goto loc_821E8874;
	case 15:
		goto loc_821E888C;
	case 16:
		goto loc_821E8874;
	case 17:
		goto loc_821E888C;
	case 18:
		goto loc_821E8874;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-30952(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30952);
	// lwz r16,-30580(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30580);
	// lwz r16,-30580(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30580);
	// lwz r16,-30580(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30580);
	// lwz r16,-30580(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30580);
	// lwz r16,-30852(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30852);
	// lwz r16,-30580(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30580);
	// lwz r16,-30624(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30624);
	// lwz r16,-30580(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30580);
	// lwz r16,-30580(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30580);
	// lwz r16,-30580(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30580);
	// lwz r16,-30580(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30580);
	// lwz r16,-30580(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30580);
	// lwz r16,-30580(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30580);
	// lwz r16,-30604(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30604);
	// lwz r16,-30580(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30580);
	// lwz r16,-30604(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30604);
	// lwz r16,-30580(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30580);
	// lwz r16,-30604(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30604);
loc_821E8718:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x821e8760
	if (!ctx.cr6.eq) goto loc_821E8760;
loc_821E8728:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,11288
	ctx.r11.s64 = ctx.r11.s64 + 11288;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821E8740;
	sub_8210FCF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821E874C;
	sub_82361BD8(ctx, base);
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
loc_821E8760:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fe7d8
	ctx.lr = 0x821E8768;
	sub_821FE7D8(ctx, base);
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
loc_821E877C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x821e87c4
	if (!ctx.cr6.eq) goto loc_821E87C4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,11288
	ctx.r11.s64 = ctx.r11.s64 + 11288;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821E87A4;
	sub_8210FCF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821E87B0;
	sub_82361BD8(ctx, base);
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
loc_821E87C4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x821e8728
	if (ctx.cr6.eq) goto loc_821E8728;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-15124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15124);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x821e881c
	if (!ctx.cr6.eq) goto loc_821E881C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,11288
	ctx.r11.s64 = ctx.r11.s64 + 11288;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821E87FC;
	sub_8210FCF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821E8808;
	sub_82361BD8(ctx, base);
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
loc_821E881C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-1572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1572);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x821e888c
	if (!ctx.cr6.eq) goto loc_821E888C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,11288
	ctx.r4.s64 = ctx.r11.s64 + 11288;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821E8840;
	sub_8210FCF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821E884C;
	sub_82361BD8(ctx, base);
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
loc_821E8860:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r5
	PPC_STORE_U32(ctx.r5.u32, ctx.f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x821e8884
	goto loc_821E8884;
loc_821E8874:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f13,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f13.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821E8884:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8538
	ctx.lr = 0x821E888C;
	sub_821F8538(ctx, base);
loc_821E888C:
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

__attribute__((alias("__imp__sub_821E88A0"))) PPC_WEAK_FUNC(sub_821E88A0);
PPC_FUNC_IMPL(__imp__sub_821E88A0) {
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
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// ori r9,r10,16216
	ctx.r9.u64 = ctx.r10.u64 | 16216;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lfs f0,15560(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15560);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r10,r8,584
	ctx.r10.s64 = ctx.r8.s64 * 584;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,316(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 316);
	// bne cr6,0x821e8908
	if (!ctx.cr6.eq) goto loc_821E8908;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r6,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r6.u8);
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
loc_821E8908:
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x821e8a28
	if (ctx.cr6.gt) goto loc_821E8A28;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-30420
	ctx.r12.s64 = ctx.r12.s64 + -30420;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_821E8978;
	case 1:
		goto loc_821E8A28;
	case 2:
		goto loc_821E8A28;
	case 3:
		goto loc_821E8A28;
	case 4:
		goto loc_821E8A28;
	case 5:
		goto loc_821E89D8;
	case 6:
		goto loc_821E8A28;
	case 7:
		goto loc_821E89FC;
	case 8:
		goto loc_821E8A28;
	case 9:
		goto loc_821E8A28;
	case 10:
		goto loc_821E8A28;
	case 11:
		goto loc_821E8A28;
	case 12:
		goto loc_821E8A28;
	case 13:
		goto loc_821E8A28;
	case 14:
		goto loc_821E8A10;
	case 15:
		goto loc_821E8A28;
	case 16:
		goto loc_821E8A10;
	case 17:
		goto loc_821E8A28;
	case 18:
		goto loc_821E8A10;
	default:
		__builtin_unreachable();
	}
	// lwz r16,-30344(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30344);
	// lwz r16,-30168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30168);
	// lwz r16,-30168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30168);
	// lwz r16,-30168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30168);
	// lwz r16,-30168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30168);
	// lwz r16,-30248(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30248);
	// lwz r16,-30168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30168);
	// lwz r16,-30212(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30212);
	// lwz r16,-30168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30168);
	// lwz r16,-30168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30168);
	// lwz r16,-30168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30168);
	// lwz r16,-30168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30168);
	// lwz r16,-30168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30168);
	// lwz r16,-30168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30168);
	// lwz r16,-30192(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30192);
	// lwz r16,-30168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30168);
	// lwz r16,-30192(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30192);
	// lwz r16,-30168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30168);
	// lwz r16,-30192(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30192);
loc_821E8978:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-12136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x821e89bc
	if (!ctx.cr6.eq) goto loc_821E89BC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,11240
	ctx.r4.s64 = ctx.r11.s64 + 11240;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821E899C;
	sub_8210FCF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361bd8
	ctx.lr = 0x821E89A8;
	sub_82361BD8(ctx, base);
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
loc_821E89BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fe7d8
	ctx.lr = 0x821E89C4;
	sub_821FE7D8(ctx, base);
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
loc_821E89D8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3672
	ctx.r4.s64 = ctx.r11.s64 + 3672;
	// bl 0x8259d1b0
	ctx.lr = 0x821E89E8;
	sub_8259D1B0(ctx, base);
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
loc_821E89FC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r5
	PPC_STORE_U32(ctx.r5.u32, ctx.f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x821e8a20
	goto loc_821E8A20;
loc_821E8A10:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f13,0,r4
	PPC_STORE_U32(ctx.r4.u32, ctx.f13.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_821E8A20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8538
	ctx.lr = 0x821E8A28;
	sub_821F8538(ctx, base);
loc_821E8A28:
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

__attribute__((alias("__imp__sub_821E8A3C"))) PPC_WEAK_FUNC(sub_821E8A3C);
PPC_FUNC_IMPL(__imp__sub_821E8A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8A40"))) PPC_WEAK_FUNC(sub_821E8A40);
PPC_FUNC_IMPL(__imp__sub_821E8A40) {
	PPC_FUNC_PROLOGUE();
	// lbzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8A48"))) PPC_WEAK_FUNC(sub_821E8A48);
PPC_FUNC_IMPL(__imp__sub_821E8A48) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r10,r8,584
	ctx.r10.s64 = ctx.r8.s64 * 584;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,316(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x821e8a80
	if (ctx.cr6.eq) goto loc_821E8A80;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821E8A80:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r9,r4,5956
	ctx.r9.s64 = ctx.r4.s64 * 5956;
	// mulli r10,r6,328
	ctx.r10.s64 = ctx.r6.s64 * 328;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r4,10596(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 10596);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8AAC"))) PPC_WEAK_FUNC(sub_821E8AAC);
PPC_FUNC_IMPL(__imp__sub_821E8AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8AB0"))) PPC_WEAK_FUNC(sub_821E8AB0);
PPC_FUNC_IMPL(__imp__sub_821E8AB0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r10,r8,584
	ctx.r10.s64 = ctx.r8.s64 * 584;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,316(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// cmpwi cr6,r7,19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 19, ctx.xer);
	// bne cr6,0x821e8af4
	if (!ctx.cr6.eq) goto loc_821E8AF4;
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mulli r10,r6,584
	ctx.r10.s64 = ctx.r6.s64 * 584;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,324(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 324);
	// blr 
	return;
loc_821E8AF4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8AFC"))) PPC_WEAK_FUNC(sub_821E8AFC);
PPC_FUNC_IMPL(__imp__sub_821E8AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8B00"))) PPC_WEAK_FUNC(sub_821E8B00);
PPC_FUNC_IMPL(__imp__sub_821E8B00) {
	PPC_FUNC_PROLOGUE();
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
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x821e8b34
	if (ctx.cr6.eq) goto loc_821E8B34;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821E8B34:
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821e8b48
	if (ctx.cr6.eq) goto loc_821E8B48;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_821E8B48:
	// mulli r10,r10,584
	ctx.r10.s64 = ctx.r10.s64 * 584;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8B58"))) PPC_WEAK_FUNC(sub_821E8B58);
PPC_FUNC_IMPL(__imp__sub_821E8B58) {
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
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821236d0
	ctx.lr = 0x821E8B80;
	sub_821236D0(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f0.u32);
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

__attribute__((alias("__imp__sub_821E8BA0"))) PPC_WEAK_FUNC(sub_821E8BA0);
PPC_FUNC_IMPL(__imp__sub_821E8BA0) {
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
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r30,r11,26080
	ctx.r30.s64 = ctx.r11.s64 + 26080;
	// ori r8,r9,16216
	ctx.r8.u64 = ctx.r9.u64 | 16216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r6,r30,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// beq cr6,0x821e8be4
	if (ctx.cr6.eq) goto loc_821E8BE4;
loc_821E8BDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821e8c88
	goto loc_821E8C88;
loc_821E8BE4:
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lwz r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x821e8c38
	if (!ctx.cr6.gt) goto loc_821E8C38;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E8C00:
	// lbzx r5,r10,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821e8c28
	if (!ctx.cr6.eq) goto loc_821E8C28;
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mulli r9,r4,328
	ctx.r9.s64 = ctx.r4.s64 * 328;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,10580(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10580);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821e8bdc
	if (!ctx.cr6.eq) goto loc_821E8BDC;
loc_821E8C28:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,5956
	ctx.r11.s64 = ctx.r11.s64 + 5956;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821e8c00
	if (ctx.cr6.lt) goto loc_821E8C00;
loc_821E8C38:
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// bl 0x821236d0
	ctx.lr = 0x821E8C40;
	sub_821236D0(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f0.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x821e8c84
	if (ctx.cr6.eq) goto loc_821E8C84;
	// lis r5,7
	ctx.r5.s64 = 458752;
	// ori r4,r5,16216
	ctx.r4.u64 = ctx.r5.u64 | 16216;
	// lwzx r11,r30,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821236d0
	ctx.lr = 0x821E8C70;
	sub_821236D0(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// li r12,8
	ctx.r12.s64 = 8;
	// stfiwx f13,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f13.u32);
	// b 0x821e8c88
	goto loc_821E8C88;
loc_821E8C84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E8C88:
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

__attribute__((alias("__imp__sub_821E8CA0"))) PPC_WEAK_FUNC(sub_821E8CA0);
PPC_FUNC_IMPL(__imp__sub_821E8CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821E8CA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821e8cc8
	if (!ctx.cr6.eq) goto loc_821E8CC8;
loc_821E8CBC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821E8CC8:
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x821e8ce0
	if (!ctx.cr6.eq) goto loc_821E8CE0;
loc_821E8CD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821E8CE0:
	// lbz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e8cbc
	if (ctx.cr6.eq) goto loc_821E8CBC;
	// lbz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e8cd4
	if (ctx.cr6.eq) goto loc_821E8CD4;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821e8dc0
	if (!ctx.cr6.eq) goto loc_821E8DC0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821e8db4
	if (!ctx.cr6.eq) goto loc_821E8DB4;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823656f8
	ctx.lr = 0x821E8D28;
	sub_823656F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823656f8
	ctx.lr = 0x821E8D38;
	sub_823656F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821e8d5c
	if (ctx.cr6.eq) goto loc_821E8D5C;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821E8D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821e8d64
	goto loc_821E8D64;
loc_821E8D5C:
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361330
	ctx.lr = 0x821E8D64;
	sub_82361330(ctx, base);
loc_821E8D64:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821e8d98
	if (ctx.cr6.eq) goto loc_821E8D98;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x821E8D84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cce0
	ctx.lr = 0x821E8D90;
	sub_8259CCE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821E8D98:
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361330
	ctx.lr = 0x821E8DA0;
	sub_82361330(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cce0
	ctx.lr = 0x821E8DAC;
	sub_8259CCE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821E8DB4:
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821E8DC0:
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E8DCC"))) PPC_WEAK_FUNC(sub_821E8DCC);
PPC_FUNC_IMPL(__imp__sub_821E8DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E8DD0"))) PPC_WEAK_FUNC(sub_821E8DD0);
PPC_FUNC_IMPL(__imp__sub_821E8DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x821E8DD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821e8df8
	if (!ctx.cr6.eq) goto loc_821E8DF8;
loc_821E8DEC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821E8DF8:
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x821e8e10
	if (!ctx.cr6.eq) goto loc_821E8E10;
loc_821E8E04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821E8E10:
	// lbz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e8dec
	if (ctx.cr6.eq) goto loc_821E8DEC;
	// lbz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e8e04
	if (ctx.cr6.eq) goto loc_821E8E04;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821e8ee4
	if (!ctx.cr6.eq) goto loc_821E8EE4;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821e8ee4
	if (!ctx.cr6.eq) goto loc_821E8EE4;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823656f8
	ctx.lr = 0x821E8E58;
	sub_823656F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823656f8
	ctx.lr = 0x821E8E68;
	sub_823656F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821e8e8c
	if (ctx.cr6.eq) goto loc_821E8E8C;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821E8E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821e8e94
	goto loc_821E8E94;
loc_821E8E8C:
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361330
	ctx.lr = 0x821E8E94;
	sub_82361330(ctx, base);
loc_821E8E94:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821e8ec8
	if (ctx.cr6.eq) goto loc_821E8EC8;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x821E8EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cce0
	ctx.lr = 0x821E8EC0;
	sub_8259CCE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821E8EC8:
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82361330
	ctx.lr = 0x821E8ED0;
	sub_82361330(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cce0
	ctx.lr = 0x821E8EDC;
	sub_8259CCE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_821E8EE4:
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E8EF0"))) PPC_WEAK_FUNC(sub_821E8EF0);
PPC_FUNC_IMPL(__imp__sub_821E8EF0) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365c18
	ctx.lr = 0x821E8F14;
	sub_82365C18(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821E8F1C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821e8f50
	if (ctx.cr6.eq) goto loc_821E8F50;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x821e8f1c
	if (ctx.cr6.lt) goto loc_821E8F1C;
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
loc_821E8F50:
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
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

__attribute__((alias("__imp__sub_821E8F68"))) PPC_WEAK_FUNC(sub_821E8F68);
PPC_FUNC_IMPL(__imp__sub_821E8F68) {
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
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x821E8F84;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e8f9c
	if (!ctx.cr6.eq) goto loc_821E8F9C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821E8F9C:
	// bl 0x8222dbc8
	ctx.lr = 0x821E8FA0;
	sub_8222DBC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8FB0"))) PPC_WEAK_FUNC(sub_821E8FB0);
PPC_FUNC_IMPL(__imp__sub_821E8FB0) {
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
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x821E8FCC;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e8fe4
	if (!ctx.cr6.eq) goto loc_821E8FE4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821E8FE4:
	// lwz r3,23100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23100);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E8FF8"))) PPC_WEAK_FUNC(sub_821E8FF8);
PPC_FUNC_IMPL(__imp__sub_821E8FF8) {
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
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x821E9014;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e902c
	if (!ctx.cr6.eq) goto loc_821E902C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821E902C:
	// lwz r3,23120(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23120);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9040"))) PPC_WEAK_FUNC(sub_821E9040);
PPC_FUNC_IMPL(__imp__sub_821E9040) {
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
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x821E9060;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9084
	if (ctx.cr6.eq) goto loc_821E9084;
	// bl 0x8222dbe0
	ctx.lr = 0x821E906C;
	sub_8222DBE0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,21432
	ctx.r10.u64 = ctx.r11.u64 | 21432;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgt cr6,0x821e9088
	if (ctx.cr6.gt) goto loc_821E9088;
loc_821E9084:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E9088:
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

__attribute__((alias("__imp__sub_821E909C"))) PPC_WEAK_FUNC(sub_821E909C);
PPC_FUNC_IMPL(__imp__sub_821E909C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E90A0"))) PPC_WEAK_FUNC(sub_821E90A0);
PPC_FUNC_IMPL(__imp__sub_821E90A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E90AC"))) PPC_WEAK_FUNC(sub_821E90AC);
PPC_FUNC_IMPL(__imp__sub_821E90AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E90B0"))) PPC_WEAK_FUNC(sub_821E90B0);
PPC_FUNC_IMPL(__imp__sub_821E90B0) {
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
	// lwz r4,820(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821e90e8
	if (ctx.cr6.eq) goto loc_821E90E8;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// bl 0x82369650
	ctx.lr = 0x821E90E0;
	sub_82369650(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r11.u32);
loc_821E90E8:
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

__attribute__((alias("__imp__sub_821E90FC"))) PPC_WEAK_FUNC(sub_821E90FC);
PPC_FUNC_IMPL(__imp__sub_821E90FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9100"))) PPC_WEAK_FUNC(sub_821E9100);
PPC_FUNC_IMPL(__imp__sub_821E9100) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r31,r11,11600
	ctx.r31.s64 = ctx.r11.s64 + 11600;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r11,23504
	ctx.r3.s64 = ctx.r11.s64 + 23504;
	// bl 0x8210fcf8
	ctx.lr = 0x821E9128;
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
	ctx.lr = 0x821E913C;
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

__attribute__((alias("__imp__sub_821E9150"))) PPC_WEAK_FUNC(sub_821E9150);
PPC_FUNC_IMPL(__imp__sub_821E9150) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,832(r3)
	PPC_STORE_U8(ctx.r3.u32 + 832, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E915C"))) PPC_WEAK_FUNC(sub_821E915C);
PPC_FUNC_IMPL(__imp__sub_821E915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9160"))) PPC_WEAK_FUNC(sub_821E9160);
PPC_FUNC_IMPL(__imp__sub_821E9160) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r3,832(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 832);
	// stb r10,832(r11)
	PPC_STORE_U8(ctx.r11.u32 + 832, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9174"))) PPC_WEAK_FUNC(sub_821E9174);
PPC_FUNC_IMPL(__imp__sub_821E9174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9178"))) PPC_WEAK_FUNC(sub_821E9178);
PPC_FUNC_IMPL(__imp__sub_821E9178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// addi r3,r11,2896
	ctx.r3.s64 = ctx.r11.s64 + 2896;
	// b 0x82369aa8
	sub_82369AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E9188"))) PPC_WEAK_FUNC(sub_821E9188);
PPC_FUNC_IMPL(__imp__sub_821E9188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// b 0x8221c328
	sub_8221C328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E9194"))) PPC_WEAK_FUNC(sub_821E9194);
PPC_FUNC_IMPL(__imp__sub_821E9194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9198"))) PPC_WEAK_FUNC(sub_821E9198);
PPC_FUNC_IMPL(__imp__sub_821E9198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E91A8"))) PPC_WEAK_FUNC(sub_821E91A8);
PPC_FUNC_IMPL(__imp__sub_821E91A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x821E91B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bl 0x82368400
	ctx.lr = 0x821E91DC;
	sub_82368400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e9254
	if (ctx.cr6.eq) goto loc_821E9254;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x821E91F8;
	sub_82365758(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821e9254
	if (ctx.cr6.eq) goto loc_821E9254;
	// bl 0x823475c0
	ctx.lr = 0x821E9208;
	sub_823475C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r27,r30,1584
	ctx.r27.s64 = ctx.r30.s64 + 1584;
	// bl 0x8222dbc8
	ctx.lr = 0x821E9218;
	sub_8222DBC8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821E9230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82369a00
	ctx.lr = 0x821E923C;
	sub_82369A00(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821e926c
	if (!ctx.cr6.eq) goto loc_821E926C;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r7,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r7.u32);
	// b 0x821e9280
	goto loc_821E9280;
loc_821E9254:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823656e8
	ctx.lr = 0x821E925C;
	sub_823656E8(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// addi r27,r11,26400
	ctx.r27.s64 = ctx.r11.s64 + 26400;
loc_821E926C:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,30220
	ctx.r3.s64 = ctx.r11.s64 + 30220;
	// bl 0x8221f6d0
	ctx.lr = 0x821E927C;
	sub_8221F6D0(ctx, base);
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
loc_821E9280:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,30412
	ctx.r3.s64 = ctx.r11.s64 + 30412;
	// bl 0x8221f6d0
	ctx.lr = 0x821E9290;
	sub_8221F6D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// stw r6,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r6.u32);
	// bl 0x82368400
	ctx.lr = 0x821E92A0;
	sub_82368400(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821e930c
	if (ctx.cr6.eq) goto loc_821E930C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222fbc0
	ctx.lr = 0x821E92B4;
	sub_8222FBC0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x823682a0
	ctx.lr = 0x821E92C0;
	sub_823682A0(ctx, base);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r4,24,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0x7;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821e92f4
	if (ctx.cr6.eq) goto loc_821E92F4;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bgt cr6,0x821e9310
	if (ctx.cr6.gt) goto loc_821E9310;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// stb r26,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r26.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_821E92F4:
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r10.u8);
	// stb r26,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r26.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
loc_821E930C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_821E9310:
	// stb r26,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r26.u8);
	// stb r26,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r26.u8);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E9320"))) PPC_WEAK_FUNC(sub_821E9320);
PPC_FUNC_IMPL(__imp__sub_821E9320) {
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
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x821E9344;
	sub_82365758(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821e935c
	if (ctx.cr6.eq) goto loc_821E935C;
	// bl 0x823475c0
	ctx.lr = 0x821E9354;
	sub_823475C0(ctx, base);
	// addi r3,r30,1584
	ctx.r3.s64 = ctx.r30.s64 + 1584;
	// b 0x821e936c
	goto loc_821E936C;
loc_821E935C:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x823656e8
	ctx.lr = 0x821E9364;
	sub_823656E8(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,26400
	ctx.r3.s64 = ctx.r11.s64 + 26400;
loc_821E936C:
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

__attribute__((alias("__imp__sub_821E9384"))) PPC_WEAK_FUNC(sub_821E9384);
PPC_FUNC_IMPL(__imp__sub_821E9384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9388"))) PPC_WEAK_FUNC(sub_821E9388);
PPC_FUNC_IMPL(__imp__sub_821E9388) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,271
	ctx.r10.s64 = ctx.r3.s64 + 271;
loc_821E9390:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e93b4
	if (!ctx.cr6.eq) goto loc_821E93B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,272
	ctx.r10.s64 = ctx.r10.s64 + 272;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x821e9390
	if (ctx.cr6.lt) goto loc_821E9390;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821E93B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E93BC"))) PPC_WEAK_FUNC(sub_821E93BC);
PPC_FUNC_IMPL(__imp__sub_821E93BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E93C0"))) PPC_WEAK_FUNC(sub_821E93C0);
PPC_FUNC_IMPL(__imp__sub_821E93C0) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,271(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 271);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e93d4
	if (ctx.cr6.eq) goto loc_821E93D4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821E93D4:
	// lbz r9,543(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 543);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e93e4
	if (ctx.cr6.eq) goto loc_821E93E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821E93E4:
	// lbz r8,815(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 815);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E93FC"))) PPC_WEAK_FUNC(sub_821E93FC);
PPC_FUNC_IMPL(__imp__sub_821E93FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9400"))) PPC_WEAK_FUNC(sub_821E9400);
PPC_FUNC_IMPL(__imp__sub_821E9400) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,272
	ctx.r11.s64 = ctx.r4.s64 * 272;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// lbz r3,271(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 271);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stb r10,271(r11)
	PPC_STORE_U8(ctx.r11.u32 + 271, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9424"))) PPC_WEAK_FUNC(sub_821E9424);
PPC_FUNC_IMPL(__imp__sub_821E9424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9428"))) PPC_WEAK_FUNC(sub_821E9428);
PPC_FUNC_IMPL(__imp__sub_821E9428) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82368400
	ctx.lr = 0x821E9450;
	sub_82368400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e946c
	if (ctx.cr6.eq) goto loc_821E946C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82368418
	ctx.lr = 0x821E9468;
	sub_82368418(ctx, base);
	// b 0x821e9494
	goto loc_821E9494;
loc_821E946C:
	// bl 0x82369bd0
	ctx.lr = 0x821E9470;
	sub_82369BD0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e9494
	if (ctx.cr6.eq) goto loc_821E9494;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x823699b0
	ctx.lr = 0x821E9484;
	sub_823699B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x823684d0
	ctx.lr = 0x821E9494;
	sub_823684D0(ctx, base);
loc_821E9494:
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

__attribute__((alias("__imp__sub_821E94AC"))) PPC_WEAK_FUNC(sub_821E94AC);
PPC_FUNC_IMPL(__imp__sub_821E94AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E94B0"))) PPC_WEAK_FUNC(sub_821E94B0);
PPC_FUNC_IMPL(__imp__sub_821E94B0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
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
	ctx.lr = 0x821E94E4;
	sub_8236F410(ctx, base);
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_821E9500"))) PPC_WEAK_FUNC(sub_821E9500);
PPC_FUNC_IMPL(__imp__sub_821E9500) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,834(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 834);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e951c
	if (!ctx.cr6.eq) goto loc_821E951C;
	// lbz r10,833(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 833);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821E951C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9524"))) PPC_WEAK_FUNC(sub_821E9524);
PPC_FUNC_IMPL(__imp__sub_821E9524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9528"))) PPC_WEAK_FUNC(sub_821E9528);
PPC_FUNC_IMPL(__imp__sub_821E9528) {
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
	// addi r3,r11,26752
	ctx.r3.s64 = ctx.r11.s64 + 26752;
	// bl 0x8221be38
	ctx.lr = 0x821E9548;
	sub_8221BE38(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x821e957c
	if (ctx.cr6.lt) goto loc_821E957C;
	// beq cr6,0x821e9574
	if (ctx.cr6.eq) goto loc_821E9574;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x821e957c
	if (!ctx.cr6.lt) goto loc_821E957C;
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
loc_821E9574:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
loc_821E957C:
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

__attribute__((alias("__imp__sub_821E9594"))) PPC_WEAK_FUNC(sub_821E9594);
PPC_FUNC_IMPL(__imp__sub_821E9594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9598"))) PPC_WEAK_FUNC(sub_821E9598);
PPC_FUNC_IMPL(__imp__sub_821E9598) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,832(r4)
	PPC_STORE_U8(ctx.r4.u32 + 832, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E95A8"))) PPC_WEAK_FUNC(sub_821E95A8);
PPC_FUNC_IMPL(__imp__sub_821E95A8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// lbz r11,3672(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8259d300
	ctx.lr = 0x821E95D8;
	sub_8259D300(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// addi r30,r11,15564
	ctx.r30.s64 = ctx.r11.s64 + 15564;
	// bl 0x82367120
	ctx.lr = 0x821E95F8;
	sub_82367120(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e9608
	if (ctx.cr6.eq) goto loc_821E9608;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_821E9608:
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r6,1800
	ctx.r6.s64 = 1800;
	// ori r5,r5,21504
	ctx.r5.u64 = ctx.r5.u64 | 21504;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82369580
	ctx.lr = 0x821E9620;
	sub_82369580(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

__attribute__((alias("__imp__sub_821E9638"))) PPC_WEAK_FUNC(sub_821E9638);
PPC_FUNC_IMPL(__imp__sub_821E9638) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// lbz r11,3672(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3672);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8259d300
	ctx.lr = 0x821E9668;
	sub_8259D300(ctx, base);
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// addi r30,r11,15564
	ctx.r30.s64 = ctx.r11.s64 + 15564;
	// bl 0x8236d428
	ctx.lr = 0x821E9688;
	sub_8236D428(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e9698
	if (ctx.cr6.eq) goto loc_821E9698;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_821E9698:
	// li r6,1800
	ctx.r6.s64 = 1800;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,2896
	ctx.r3.s64 = ctx.r31.s64 + 2896;
	// bl 0x82369580
	ctx.lr = 0x821E96AC;
	sub_82369580(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

__attribute__((alias("__imp__sub_821E96C4"))) PPC_WEAK_FUNC(sub_821E96C4);
PPC_FUNC_IMPL(__imp__sub_821E96C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E96C8"))) PPC_WEAK_FUNC(sub_821E96C8);
PPC_FUNC_IMPL(__imp__sub_821E96C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x821E96D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82365758
	ctx.lr = 0x821E96EC;
	sub_82365758(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9700
	if (ctx.cr6.eq) goto loc_821E9700;
	// addi r30,r3,1584
	ctx.r30.s64 = ctx.r3.s64 + 1584;
	// bl 0x823475c0
	ctx.lr = 0x821E96FC;
	sub_823475C0(ctx, base);
	// b 0x821e9710
	goto loc_821E9710;
loc_821E9700:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r30,r11,26400
	ctx.r30.s64 = ctx.r11.s64 + 26400;
	// bl 0x823656e8
	ctx.lr = 0x821E9710;
	sub_823656E8(ctx, base);
loc_821E9710:
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,30412
	ctx.r3.s64 = ctx.r11.s64 + 30412;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x8221f6d0
	ctx.lr = 0x821E9728;
	sub_8221F6D0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E9734"))) PPC_WEAK_FUNC(sub_821E9734);
PPC_FUNC_IMPL(__imp__sub_821E9734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9738"))) PPC_WEAK_FUNC(sub_821E9738);
PPC_FUNC_IMPL(__imp__sub_821E9738) {
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
	// addi r31,r11,26752
	ctx.r31.s64 = ctx.r11.s64 + 26752;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,30412
	ctx.r3.s64 = ctx.r11.s64 + 30412;
	// bl 0x8221f518
	ctx.lr = 0x821E975C;
	sub_8221F518(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r3,r11,30412
	ctx.r3.s64 = ctx.r11.s64 + 30412;
	// bl 0x82227970
	ctx.lr = 0x821E9768;
	sub_82227970(ctx, base);
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

__attribute__((alias("__imp__sub_821E977C"))) PPC_WEAK_FUNC(sub_821E977C);
PPC_FUNC_IMPL(__imp__sub_821E977C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9780"))) PPC_WEAK_FUNC(sub_821E9780);
PPC_FUNC_IMPL(__imp__sub_821E9780) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821e979c
	if (ctx.cr6.eq) goto loc_821E979C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E979C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E97A4"))) PPC_WEAK_FUNC(sub_821E97A4);
PPC_FUNC_IMPL(__imp__sub_821E97A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E97A8"))) PPC_WEAK_FUNC(sub_821E97A8);
PPC_FUNC_IMPL(__imp__sub_821E97A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// ori r9,r10,26452
	ctx.r9.u64 = ctx.r10.u64 | 26452;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E97C4"))) PPC_WEAK_FUNC(sub_821E97C4);
PPC_FUNC_IMPL(__imp__sub_821E97C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E97C8"))) PPC_WEAK_FUNC(sub_821E97C8);
PPC_FUNC_IMPL(__imp__sub_821E97C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,432(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// lwz r11,432(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 432);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821e97ec
	if (!ctx.cr6.eq) goto loc_821E97EC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821e97e4
	if (!ctx.cr6.eq) goto loc_821E97E4;
	// b 0x8259cce0
	sub_8259CCE0(ctx, base);
	return;
loc_821E97E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821E97EC:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821e97fc
	if (!ctx.cr6.eq) goto loc_821E97FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_821E97FC:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e9820
	if (!ctx.cr6.eq) goto loc_821E9820;
	// lwz r10,436(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 436);
	// lwz r9,436(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e9820
	if (!ctx.cr6.eq) goto loc_821E9820;
	// b 0x8259cce0
	sub_8259CCE0(ctx, base);
	return;
loc_821E9820:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9828"))) PPC_WEAK_FUNC(sub_821E9828);
PPC_FUNC_IMPL(__imp__sub_821E9828) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,432(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// lwz r11,432(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 432);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821e984c
	if (!ctx.cr6.eq) goto loc_821E984C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821e9844
	if (!ctx.cr6.eq) goto loc_821E9844;
	// b 0x8259cce0
	sub_8259CCE0(ctx, base);
	return;
loc_821E9844:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821E984C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821e985c
	if (!ctx.cr6.eq) goto loc_821E985C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_821E985C:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e9880
	if (!ctx.cr6.eq) goto loc_821E9880;
	// lwz r10,436(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// lwz r9,436(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 436);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e9880
	if (!ctx.cr6.eq) goto loc_821E9880;
	// b 0x8259cce0
	sub_8259CCE0(ctx, base);
	return;
loc_821E9880:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E9888"))) PPC_WEAK_FUNC(sub_821E9888);
PPC_FUNC_IMPL(__imp__sub_821E9888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// addi r11,r11,26080
	ctx.r11.s64 = ctx.r11.s64 + 26080;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r6,r7,16216
	ctx.r6.u64 = ctx.r7.u64 | 16216;
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// addi r8,r10,24760
	ctx.r8.s64 = ctx.r10.s64 + 24760;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// ori r4,r5,25864
	ctx.r4.u64 = ctx.r5.u64 | 25864;
	// addi r10,r10,26752
	ctx.r10.s64 = ctx.r10.s64 + 26752;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// addi r9,r9,27388
	ctx.r9.s64 = ctx.r9.s64 + 27388;
	// addi r10,r10,26748
	ctx.r10.s64 = ctx.r10.s64 + 26748;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r8,15616
	ctx.r5.s64 = ctx.r8.s64 + 15616;
	// li r4,131
	ctx.r4.s64 = 131;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8259da78
	sub_8259DA78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821E98F8"))) PPC_WEAK_FUNC(sub_821E98F8);
PPC_FUNC_IMPL(__imp__sub_821E98F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821E98FC"))) PPC_WEAK_FUNC(sub_821E98FC);
PPC_FUNC_IMPL(__imp__sub_821E98FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821E9900"))) PPC_WEAK_FUNC(sub_821E9900);
PPC_FUNC_IMPL(__imp__sub_821E9900) {
	PPC_FUNC_PROLOGUE();
	// stb r4,835(r3)
	PPC_STORE_U8(ctx.r3.u32 + 835, ctx.r4.u8);
	// blr 
	return;
}


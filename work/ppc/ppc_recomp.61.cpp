#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_824288F4"))) PPC_WEAK_FUNC(sub_824288F4);
PPC_FUNC_IMPL(__imp__sub_824288F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824288F8"))) PPC_WEAK_FUNC(sub_824288F8);
PPC_FUNC_IMPL(__imp__sub_824288F8) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,96
	ctx.r10.s64 = 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82428920:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82428920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82428920;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,96
	ctx.r5.s64 = 96;
	// lwz r3,-26660(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26660);
	// bl 0x8242a5a8
	ctx.lr = 0x82428940;
	sub_8242A5A8(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-26652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242895c
	if (ctx.cr6.eq) goto loc_8242895C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824285c0
	ctx.lr = 0x82428958;
	sub_824285C0(ctx, base);
	// b 0x824289bc
	goto loc_824289BC;
loc_8242895C:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r11,-26656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26656);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,80(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824289a4
	if (ctx.cr6.eq) goto loc_824289A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82429548
	ctx.lr = 0x82428980;
	sub_82429548(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824289a4
	if (ctx.cr6.eq) goto loc_824289A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82427538
	ctx.lr = 0x82428994;
	sub_82427538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824289bc
	if (ctx.cr6.eq) goto loc_824289BC;
	// bl 0x82426ec8
	ctx.lr = 0x824289A0;
	sub_82426EC8(ctx, base);
	// b 0x824289bc
	goto loc_824289BC;
loc_824289A4:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26616(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26616);
	// bl 0x82453ab8
	ctx.lr = 0x824289B0;
	sub_82453AB8(ctx, base);
	// lwz r11,-26656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26656);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
loc_824289BC:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// bl 0x824621c0
	ctx.lr = 0x824289C8;
	sub_824621C0(ctx, base);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lbz r7,-26596(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + -26596);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824289e4
	if (ctx.cr6.eq) goto loc_824289E4;
	// bl 0x82462250
	ctx.lr = 0x824289DC;
	sub_82462250(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-26596(r31)
	PPC_STORE_U8(ctx.r31.u32 + -26596, ctx.r11.u8);
loc_824289E4:
	// addi r31,r1,464
	ctx.r31.s64 = ctx.r1.s64 + 464;
	// li r30,95
	ctx.r30.s64 = 95;
loc_824289EC:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82428a10
	if (ctx.cr6.eq) goto loc_82428A10;
	// bl 0x82452cf0
	ctx.lr = 0x82428A00;
	sub_82452CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82428a10
	if (!ctx.cr6.eq) goto loc_82428A10;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82452e18
	ctx.lr = 0x82428A10;
	sub_82452E18(ctx, base);
loc_82428A10:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x824289ec
	if (!ctx.cr6.lt) goto loc_824289EC;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

__attribute__((alias("__imp__sub_82428A34"))) PPC_WEAK_FUNC(sub_82428A34);
PPC_FUNC_IMPL(__imp__sub_82428A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82428A38"))) PPC_WEAK_FUNC(sub_82428A38);
PPC_FUNC_IMPL(__imp__sub_82428A38) {
	PPC_FUNC_PROLOGUE();
	// b 0x824288f8
	sub_824288F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82428A3C"))) PPC_WEAK_FUNC(sub_82428A3C);
PPC_FUNC_IMPL(__imp__sub_82428A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82428A40"))) PPC_WEAK_FUNC(sub_82428A40);
PPC_FUNC_IMPL(__imp__sub_82428A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82428A48;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r11,512
	ctx.r11.s64 = 512;
	// li r9,384
	ctx.r9.s64 = 384;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stb r30,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r30.u8);
	// stb r30,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r30.u8);
	// bne cr6,0x82428ac0
	if (!ctx.cr6.eq) goto loc_82428AC0;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
loc_82428AC0:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r10,r11,7816
	ctx.r10.s64 = ctx.r11.s64 + 7816;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82428AD4:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82428ad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82428AD4;
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// lwz r11,7812(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82428b00
	if (!ctx.cr6.eq) goto loc_82428B00;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82428B00:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r29,r11,8344
	ctx.r29.s64 = ctx.r11.s64 + 8344;
	// bne cr6,0x82428b24
	if (!ctx.cr6.eq) goto loc_82428B24;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// stw r29,7812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7812, ctx.r29.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// sth r3,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r3.u16);
loc_82428B24:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r11,-26595(r10)
	PPC_STORE_U8(ctx.r10.u32 + -26595, ctx.r11.u8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lbz r10,57(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 57);
	// addi r31,r11,-26568
	ctx.r31.s64 = ctx.r11.s64 + -26568;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stb r10,-26594(r11)
	PPC_STORE_U8(ctx.r11.u32 + -26594, ctx.r10.u8);
	// bne cr6,0x82428b5c
	if (!ctx.cr6.eq) goto loc_82428B5C;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r11,r11,27088
	ctx.r11.s64 = ctx.r11.s64 + 27088;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82428B5C:
	// bl 0x82462248
	ctx.lr = 0x82428B60;
	sub_82462248(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r31,-24152(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24152, ctx.r31.u32);
	// lwz r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// bl 0x82457530
	ctx.lr = 0x82428B70;
	sub_82457530(ctx, base);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,-26632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82428B80;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82428b9c
	if (ctx.cr6.eq) goto loc_82428B9C;
	// lwz r4,40(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// bl 0x82462148
	ctx.lr = 0x82428B90;
	sub_82462148(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,-26592(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26592, ctx.r3.u32);
	// b 0x82428ba8
	goto loc_82428BA8;
loc_82428B9C:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,-26592(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26592, ctx.r11.u32);
loc_82428BA8:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82428bdc
	if (ctx.cr6.eq) goto loc_82428BDC;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,-26632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82428BC0;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82428bdc
	if (ctx.cr6.eq) goto loc_82428BDC;
	// lwz r4,52(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// bl 0x82462148
	ctx.lr = 0x82428BD0;
	sub_82462148(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,-26588(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26588, ctx.r3.u32);
	// b 0x82428be8
	goto loc_82428BE8;
loc_82428BDC:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,-26588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26588, ctx.r11.u32);
loc_82428BE8:
	// bl 0x8242f6f0
	ctx.lr = 0x82428BEC;
	sub_8242F6F0(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,-24144
	ctx.r3.s64 = ctx.r11.s64 + -24144;
	// bl 0x824383f0
	ctx.lr = 0x82428BFC;
	sub_824383F0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,-26632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82428C08;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82428c20
	if (ctx.cr6.eq) goto loc_82428C20;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r3,-26660(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26660, ctx.r3.u32);
	// b 0x82428c2c
	goto loc_82428C2C;
loc_82428C20:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,-26660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26660, ctx.r11.u32);
loc_82428C2C:
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r3,-26632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82428C38;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82428c6c
	if (ctx.cr6.eq) goto loc_82428C6C;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stw r3,-26616(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26616, ctx.r3.u32);
	// b 0x82428c78
	goto loc_82428C78;
loc_82428C6C:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,-26616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26616, ctx.r11.u32);
loc_82428C78:
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r3,-26632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82428C84;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82428cd0
	if (ctx.cr6.eq) goto loc_82428CD0;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r10.u16);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,-26628(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26628, ctx.r3.u32);
	// b 0x82428cdc
	goto loc_82428CDC;
loc_82428CD0:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,-26628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26628, ctx.r11.u32);
loc_82428CDC:
	// li r4,144
	ctx.r4.s64 = 144;
	// lwz r3,-26632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82428CE8;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82428d04
	if (ctx.cr6.eq) goto loc_82428D04;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82461750
	ctx.lr = 0x82428CF8;
	sub_82461750(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,-26656(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26656, ctx.r3.u32);
	// b 0x82428d0c
	goto loc_82428D0C;
loc_82428D04:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r30,-26656(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26656, ctx.r30.u32);
loc_82428D0C:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8245e0b8
	ctx.lr = 0x82428D14;
	sub_8245E0B8(ctx, base);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-26608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26608, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82428D28"))) PPC_WEAK_FUNC(sub_82428D28);
PPC_FUNC_IMPL(__imp__sub_82428D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82428D30;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r27,r11,-24144
	ctx.r27.s64 = ctx.r11.s64 + -24144;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,92(r27)
	PPC_STORE_U8(ctx.r27.u32 + 92, ctx.r11.u8);
	// bl 0x8245e140
	ctx.lr = 0x82428D4C;
	sub_8245E140(ctx, base);
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// lwz r3,-26656(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26656);
	// bl 0x8245fe38
	ctx.lr = 0x82428D58;
	sub_8245FE38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82428458
	ctx.lr = 0x82428D60;
	sub_82428458(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// lwz r31,-26660(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26660);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82428d8c
	if (ctx.cr6.eq) goto loc_82428D8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824535c0
	ctx.lr = 0x82428D7C;
	sub_824535C0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82428D8C;
	sub_8242BCD0(ctx, base);
loc_82428D8C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r31,-26616(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26616);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82428dbc
	if (ctx.cr6.eq) goto loc_82428DBC;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8242ac58
	ctx.lr = 0x82428DA4;
	sub_8242AC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242b060
	ctx.lr = 0x82428DAC;
	sub_8242B060(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82428DBC;
	sub_8242BCD0(ctx, base);
loc_82428DBC:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r31,-26628(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26628);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82428de4
	if (ctx.cr6.eq) goto loc_82428DE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242ad28
	ctx.lr = 0x82428DD4;
	sub_8242AD28(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82428DE4;
	sub_8242BCD0(ctx, base);
loc_82428DE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8242d788
	ctx.lr = 0x82428DEC;
	sub_8242D788(ctx, base);
	// bl 0x82450330
	ctx.lr = 0x82428DF0;
	sub_82450330(ctx, base);
	// bl 0x82475fc8
	ctx.lr = 0x82428DF4;
	sub_82475FC8(ctx, base);
	// bl 0x82462c98
	ctx.lr = 0x82428DF8;
	sub_82462C98(ctx, base);
	// bl 0x82462f90
	ctx.lr = 0x82428DFC;
	sub_82462F90(ctx, base);
	// bl 0x824630f8
	ctx.lr = 0x82428E00;
	sub_824630F8(ctx, base);
	// bl 0x824749d8
	ctx.lr = 0x82428E04;
	sub_824749D8(ctx, base);
	// bl 0x824749d0
	ctx.lr = 0x82428E08;
	sub_824749D0(ctx, base);
	// bl 0x82474970
	ctx.lr = 0x82428E0C;
	sub_82474970(ctx, base);
	// bl 0x8246be20
	ctx.lr = 0x82428E10;
	sub_8246BE20(ctx, base);
	// bl 0x824313c8
	ctx.lr = 0x82428E14;
	sub_824313C8(ctx, base);
	// bl 0x824633c0
	ctx.lr = 0x82428E18;
	sub_824633C0(ctx, base);
	// bl 0x82462420
	ctx.lr = 0x82428E1C;
	sub_82462420(ctx, base);
	// bl 0x8242dad0
	ctx.lr = 0x82428E20;
	sub_8242DAD0(ctx, base);
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r3,-26592(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26592);
	// bl 0x824621c0
	ctx.lr = 0x82428E2C;
	sub_824621C0(ctx, base);
	// lwz r31,-26656(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26656);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82428e50
	if (ctx.cr6.eq) goto loc_82428E50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82461978
	ctx.lr = 0x82428E40;
	sub_82461978(ctx, base);
	// li r5,144
	ctx.r5.s64 = 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82428E50;
	sub_8242BCD0(ctx, base);
loc_82428E50:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26656(r29)
	PPC_STORE_U32(ctx.r29.u32 + -26656, ctx.r11.u32);
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// lwz r31,-26588(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26588);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82428e80
	if (ctx.cr6.eq) goto loc_82428E80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824621a0
	ctx.lr = 0x82428E70;
	sub_824621A0(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82428E80;
	sub_8242BCD0(ctx, base);
loc_82428E80:
	// lis r31,-32150
	ctx.r31.s64 = -2106982400;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,7812(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7812);
	// stw r11,-26588(r29)
	PPC_STORE_U32(ctx.r29.u32 + -26588, ctx.r11.u32);
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
	// bne cr6,0x82428ebc
	if (!ctx.cr6.eq) goto loc_82428EBC;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82428EBC;
	sub_8242BCD0(ctx, base);
loc_82428EBC:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r11,7812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7812, ctx.r11.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// bl 0x8245d1e8
	ctx.lr = 0x82428ED8;
	sub_8245D1E8(ctx, base);
	// lwz r3,-26592(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26592);
	// bl 0x824621c0
	ctx.lr = 0x82428EE0;
	sub_824621C0(ctx, base);
	// lwz r31,-26592(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26592);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82428f04
	if (ctx.cr6.eq) goto loc_82428F04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824621a0
	ctx.lr = 0x82428EF4;
	sub_824621A0(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82428F04;
	sub_8242BCD0(ctx, base);
loc_82428F04:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,-26592(r30)
	PPC_STORE_U32(ctx.r30.u32 + -26592, ctx.r11.u32);
	// stw r11,-24152(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24152, ctx.r11.u32);
	// bl 0x82438488
	ctx.lr = 0x82428F1C;
	sub_82438488(ctx, base);
	// bl 0x8245d868
	ctx.lr = 0x82428F20;
	sub_8245D868(ctx, base);
	// bl 0x8245d918
	ctx.lr = 0x82428F24;
	sub_8245D918(ctx, base);
	// bl 0x8245d9c8
	ctx.lr = 0x82428F28;
	sub_8245D9C8(ctx, base);
	// bl 0x8245d470
	ctx.lr = 0x82428F2C;
	sub_8245D470(ctx, base);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26608, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82428F40"))) PPC_WEAK_FUNC(sub_82428F40);
PPC_FUNC_IMPL(__imp__sub_82428F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82428F48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r25,r11,-24144
	ctx.r25.s64 = ctx.r11.s64 + -24144;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,92(r25)
	PPC_STORE_U8(ctx.r25.u32 + 92, ctx.r11.u8);
	// bl 0x8245e250
	ctx.lr = 0x82428F60;
	sub_8245E250(ctx, base);
	// lis r27,-32044
	ctx.r27.s64 = -2100035584;
	// lwz r3,-26656(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26656);
	// bl 0x8245fe38
	ctx.lr = 0x82428F6C;
	sub_8245FE38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82428458
	ctx.lr = 0x82428F74;
	sub_82428458(ctx, base);
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r31,-26660(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26660);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82428fa0
	if (ctx.cr6.eq) goto loc_82428FA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824535c0
	ctx.lr = 0x82428F90;
	sub_824535C0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82428FA0;
	sub_8242BCD0(ctx, base);
loc_82428FA0:
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// lwz r31,-26616(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26616);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82428fd0
	if (ctx.cr6.eq) goto loc_82428FD0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8242ac58
	ctx.lr = 0x82428FB8;
	sub_8242AC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242b060
	ctx.lr = 0x82428FC0;
	sub_8242B060(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82428FD0;
	sub_8242BCD0(ctx, base);
loc_82428FD0:
	// lis r26,-32044
	ctx.r26.s64 = -2100035584;
	// lwz r31,-26628(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26628);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82428ff8
	if (ctx.cr6.eq) goto loc_82428FF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242ad28
	ctx.lr = 0x82428FE8;
	sub_8242AD28(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82428FF8;
	sub_8242BCD0(ctx, base);
loc_82428FF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8242d788
	ctx.lr = 0x82429000;
	sub_8242D788(ctx, base);
	// bl 0x82450330
	ctx.lr = 0x82429004;
	sub_82450330(ctx, base);
	// bl 0x82475fc8
	ctx.lr = 0x82429008;
	sub_82475FC8(ctx, base);
	// bl 0x82462c98
	ctx.lr = 0x8242900C;
	sub_82462C98(ctx, base);
	// bl 0x82462f90
	ctx.lr = 0x82429010;
	sub_82462F90(ctx, base);
	// bl 0x824630f8
	ctx.lr = 0x82429014;
	sub_824630F8(ctx, base);
	// bl 0x824749d8
	ctx.lr = 0x82429018;
	sub_824749D8(ctx, base);
	// bl 0x824749d0
	ctx.lr = 0x8242901C;
	sub_824749D0(ctx, base);
	// bl 0x82474970
	ctx.lr = 0x82429020;
	sub_82474970(ctx, base);
	// bl 0x8246be20
	ctx.lr = 0x82429024;
	sub_8246BE20(ctx, base);
	// bl 0x824313c8
	ctx.lr = 0x82429028;
	sub_824313C8(ctx, base);
	// bl 0x824633c0
	ctx.lr = 0x8242902C;
	sub_824633C0(ctx, base);
	// bl 0x82462420
	ctx.lr = 0x82429030;
	sub_82462420(ctx, base);
	// bl 0x8242dad0
	ctx.lr = 0x82429034;
	sub_8242DAD0(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// bl 0x824621c0
	ctx.lr = 0x82429040;
	sub_824621C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,-26632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8242904C;
	sub_8242BB48(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82429060
	if (ctx.cr6.eq) goto loc_82429060;
	// bl 0x82478538
	ctx.lr = 0x8242905C;
	sub_82478538(ctx, base);
	// b 0x82429064
	goto loc_82429064;
loc_82429060:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82429064:
	// lwz r11,-26656(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26656);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// bl 0x8242f6f0
	ctx.lr = 0x82429070;
	sub_8242F6F0(ctx, base);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r3,r11,7816
	ctx.r3.s64 = ctx.r11.s64 + 7816;
	// bl 0x8245e1a8
	ctx.lr = 0x8242907C;
	sub_8245E1A8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,-26632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82429088;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242909c
	if (ctx.cr6.eq) goto loc_8242909C;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r3,-26660(r29)
	PPC_STORE_U32(ctx.r29.u32 + -26660, ctx.r3.u32);
	// b 0x824290a4
	goto loc_824290A4;
loc_8242909C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r11,-26660(r29)
	PPC_STORE_U32(ctx.r29.u32 + -26660, ctx.r11.u32);
loc_824290A4:
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r3,-26632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x824290B0;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824290e0
	if (ctx.cr6.eq) goto loc_824290E0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r3,-26616(r28)
	PPC_STORE_U32(ctx.r28.u32 + -26616, ctx.r3.u32);
	// b 0x824290e8
	goto loc_824290E8;
loc_824290E0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r11,-26616(r28)
	PPC_STORE_U32(ctx.r28.u32 + -26616, ctx.r11.u32);
loc_824290E8:
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r3,-26632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x824290F4;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82429158
	if (ctx.cr6.eq) goto loc_82429158;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r9,8344
	ctx.r9.s64 = ctx.r9.s64 + 8344;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82429118:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// bge cr6,0x82429118
	if (!ctx.cr6.lt) goto loc_82429118;
	// stw r3,-26628(r26)
	PPC_STORE_U32(ctx.r26.u32 + -26628, ctx.r3.u32);
	// lwz r3,-26656(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26656);
	// bl 0x8245f4c0
	ctx.lr = 0x8242914C;
	sub_8245F4C0(ctx, base);
	// stb r31,92(r25)
	PPC_STORE_U8(ctx.r25.u32 + 92, ctx.r31.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82429158:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r3,-26656(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26656);
	// stw r11,-26628(r26)
	PPC_STORE_U32(ctx.r26.u32 + -26628, ctx.r11.u32);
	// bl 0x8245f4c0
	ctx.lr = 0x82429168;
	sub_8245F4C0(ctx, base);
	// stb r31,92(r25)
	PPC_STORE_U8(ctx.r25.u32 + 92, ctx.r31.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82429174"))) PPC_WEAK_FUNC(sub_82429174);
PPC_FUNC_IMPL(__imp__sub_82429174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82429178"))) PPC_WEAK_FUNC(sub_82429178);
PPC_FUNC_IMPL(__imp__sub_82429178) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824291c4
	if (!ctx.cr6.gt) goto loc_824291C4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824291B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_824291C4:
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

__attribute__((alias("__imp__sub_824291D8"))) PPC_WEAK_FUNC(sub_824291D8);
PPC_FUNC_IMPL(__imp__sub_824291D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x824291E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82429240
	if (ctx.cr6.lt) goto loc_82429240;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// blt cr6,0x82429234
	if (ctx.cr6.lt) goto loc_82429234;
loc_82429204:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r8,r31,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r31.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82429228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82429204
	if (!ctx.cr6.gt) goto loc_82429204;
loc_82429234:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r3,r29,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r29.s64;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82429240:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82429248"))) PPC_WEAK_FUNC(sub_82429248);
PPC_FUNC_IMPL(__imp__sub_82429248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82429250;
	__savegprlr_28(ctx, base);
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x824292e0
	if (ctx.cr6.lt) goto loc_824292E0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82429280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// blt cr6,0x824292bc
	if (ctx.cr6.lt) goto loc_824292BC;
loc_8242928C:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r6,r31,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r31.s64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824292B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x8242928c
	if (!ctx.cr6.gt) goto loc_8242928C;
loc_824292BC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r8,r29,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r29.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r28.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r29,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r29.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
loc_824292E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824292E8"))) PPC_WEAK_FUNC(sub_824292E8);
PPC_FUNC_IMPL(__imp__sub_824292E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x824292F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82429358
	if (!ctx.cr6.gt) goto loc_82429358;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82429358
	if (ctx.cr6.lt) goto loc_82429358;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// blt cr6,0x8242934c
	if (ctx.cr6.lt) goto loc_8242934C;
loc_8242931C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r8,r31,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r31.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82429340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x8242931c
	if (!ctx.cr6.gt) goto loc_8242931C;
loc_8242934C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r3,r29,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r29.s64;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82429358:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82429360"))) PPC_WEAK_FUNC(sub_82429360);
PPC_FUNC_IMPL(__imp__sub_82429360) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 65536;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x824293c0
	if (!ctx.cr6.eq) goto loc_824293C0;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x824293C0;
	sub_8242BCD0(ctx, base);
loc_824293C0:
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_824293EC"))) PPC_WEAK_FUNC(sub_824293EC);
PPC_FUNC_IMPL(__imp__sub_824293EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824293F0"))) PPC_WEAK_FUNC(sub_824293F0);
PPC_FUNC_IMPL(__imp__sub_824293F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x824293F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82429480
	if (ctx.cr6.eq) goto loc_82429480;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r27,-32044
	ctx.r27.s64 = -2100035584;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
loc_8242941C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r7,r8,r28
	ctx.r7.u64 = ctx.r8.u64 + ctx.r28.u64;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x82429460
	if (!ctx.cr6.eq) goto loc_82429460;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82429460;
	sub_8242BCD0(ctx, base);
loc_82429460:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// bne cr6,0x8242941c
	if (!ctx.cr6.eq) goto loc_8242941C;
loc_82429480:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242948C"))) PPC_WEAK_FUNC(sub_8242948C);
PPC_FUNC_IMPL(__imp__sub_8242948C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82429490"))) PPC_WEAK_FUNC(sub_82429490);
PPC_FUNC_IMPL(__imp__sub_82429490) {
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
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242950c
	if (ctx.cr6.eq) goto loc_8242950C;
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824294f0
	if (ctx.cr6.lt) goto loc_824294F0;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-10172
	ctx.r9.s64 = ctx.r9.s64 + -10172;
loc_824294DC:
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bge cr6,0x824294dc
	if (!ctx.cr6.lt) goto loc_824294DC;
loc_824294F0:
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82429504
	if (ctx.cr6.eq) goto loc_82429504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259e7c0
	ctx.lr = 0x82429504;
	sub_8259E7C0(ctx, base);
loc_82429504:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82429530
	goto loc_82429530;
loc_8242950C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8242952c
	if (ctx.cr6.eq) goto loc_8242952C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259e7c0
	ctx.lr = 0x8242952C;
	sub_8259E7C0(ctx, base);
loc_8242952C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82429530:
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

__attribute__((alias("__imp__sub_82429548"))) PPC_WEAK_FUNC(sub_82429548);
PPC_FUNC_IMPL(__imp__sub_82429548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// bne cr6,0x82429598
	if (!ctx.cr6.eq) goto loc_82429598;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8242958c
	if (!ctx.cr6.eq) goto loc_8242958C;
	// rlwinm r8,r11,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82429578
	if (!ctx.cr6.eq) goto loc_82429578;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82429578:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82429598
	if (!ctx.cr6.eq) goto loc_82429598;
loc_8242958C:
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82429598:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824295A4"))) PPC_WEAK_FUNC(sub_824295A4);
PPC_FUNC_IMPL(__imp__sub_824295A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824295A8"))) PPC_WEAK_FUNC(sub_824295A8);
PPC_FUNC_IMPL(__imp__sub_824295A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-8284
	ctx.r11.s64 = ctx.r11.s64 + -8284;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82455af0
	ctx.lr = 0x824295D0;
	sub_82455AF0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
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

__attribute__((alias("__imp__sub_824295F0"))) PPC_WEAK_FUNC(sub_824295F0);
PPC_FUNC_IMPL(__imp__sub_824295F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r4,20
	ctx.r3.s64 = ctx.r4.s64 + 20;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82429620"))) PPC_WEAK_FUNC(sub_82429620);
PPC_FUNC_IMPL(__imp__sub_82429620) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// b 0x8245f750
	sub_8245F750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82429628"))) PPC_WEAK_FUNC(sub_82429628);
PPC_FUNC_IMPL(__imp__sub_82429628) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// b 0x8245f7f0
	sub_8245F7F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82429630"))) PPC_WEAK_FUNC(sub_82429630);
PPC_FUNC_IMPL(__imp__sub_82429630) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// b 0x8245f8a8
	sub_8245F8A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82429638"))) PPC_WEAK_FUNC(sub_82429638);
PPC_FUNC_IMPL(__imp__sub_82429638) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// b 0x8245f960
	sub_8245F960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82429640"))) PPC_WEAK_FUNC(sub_82429640);
PPC_FUNC_IMPL(__imp__sub_82429640) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r4,25
	ctx.r10.u64 = ctx.r4.u32 & 0x7F;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// andis. r8,r9,38912
	ctx.r8.u64 = ctx.r9.u64 & 2550136832;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// oris r6,r7,2048
	ctx.r6.u64 = ctx.r7.u64 | 134217728;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82429668"))) PPC_WEAK_FUNC(sub_82429668);
PPC_FUNC_IMPL(__imp__sub_82429668) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82429684"))) PPC_WEAK_FUNC(sub_82429684);
PPC_FUNC_IMPL(__imp__sub_82429684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82429688"))) PPC_WEAK_FUNC(sub_82429688);
PPC_FUNC_IMPL(__imp__sub_82429688) {
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
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r10,25,0,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xFE000000;
	// srawi r9,r11,25
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 25;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x824296dc
	if (!ctx.cr6.eq) goto loc_824296DC;
	// rlwinm r8,r10,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824296c4
	if (!ctx.cr6.eq) goto loc_824296C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824296C4:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824296e0
	if (ctx.cr6.eq) goto loc_824296E0;
loc_824296DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824296E0:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82429700
	if (ctx.cr6.eq) goto loc_82429700;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// b 0x82429754
	goto loc_82429754;
loc_82429700:
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x82429734
	if (!ctx.cr6.eq) goto loc_82429734;
	// rlwinm r11,r10,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8242971c
	if (!ctx.cr6.eq) goto loc_8242971C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242971C:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82429738
	if (ctx.cr6.eq) goto loc_82429738;
loc_82429734:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82429738:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82429750
	if (ctx.cr6.eq) goto loc_82429750;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x8245e578
	ctx.lr = 0x8242974C;
	sub_8245E578(ctx, base);
	// b 0x82429754
	goto loc_82429754;
loc_82429750:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82429754:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82429780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82429794"))) PPC_WEAK_FUNC(sub_82429794);
PPC_FUNC_IMPL(__imp__sub_82429794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82429798"))) PPC_WEAK_FUNC(sub_82429798);
PPC_FUNC_IMPL(__imp__sub_82429798) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_824297CC"))) PPC_WEAK_FUNC(sub_824297CC);
PPC_FUNC_IMPL(__imp__sub_824297CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824297D0"))) PPC_WEAK_FUNC(sub_824297D0);
PPC_FUNC_IMPL(__imp__sub_824297D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824297F0"))) PPC_WEAK_FUNC(sub_824297F0);
PPC_FUNC_IMPL(__imp__sub_824297F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82429808"))) PPC_WEAK_FUNC(sub_82429808);
PPC_FUNC_IMPL(__imp__sub_82429808) {
	PPC_FUNC_PROLOGUE();
	// b 0x82429248
	sub_82429248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242980C"))) PPC_WEAK_FUNC(sub_8242980C);
PPC_FUNC_IMPL(__imp__sub_8242980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82429810"))) PPC_WEAK_FUNC(sub_82429810);
PPC_FUNC_IMPL(__imp__sub_82429810) {
	PPC_FUNC_PROLOGUE();
	// b 0x824291d8
	sub_824291D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82429814"))) PPC_WEAK_FUNC(sub_82429814);
PPC_FUNC_IMPL(__imp__sub_82429814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82429818"))) PPC_WEAK_FUNC(sub_82429818);
PPC_FUNC_IMPL(__imp__sub_82429818) {
	PPC_FUNC_PROLOGUE();
	// b 0x824292e8
	sub_824292E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242981C"))) PPC_WEAK_FUNC(sub_8242981C);
PPC_FUNC_IMPL(__imp__sub_8242981C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82429820"))) PPC_WEAK_FUNC(sub_82429820);
PPC_FUNC_IMPL(__imp__sub_82429820) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r10,-23984(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23984);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r3,-23984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -23984, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82434130
	ctx.lr = 0x82429850;
	sub_82434130(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824298a8
	if (ctx.cr6.eq) goto loc_824298A8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x82429890
	if (!ctx.cr6.eq) goto loc_82429890;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82429890;
	sub_8242BCD0(ctx, base);
loc_82429890:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_824298A8:
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

__attribute__((alias("__imp__sub_824298BC"))) PPC_WEAK_FUNC(sub_824298BC);
PPC_FUNC_IMPL(__imp__sub_824298BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824298C0"))) PPC_WEAK_FUNC(sub_824298C0);
PPC_FUNC_IMPL(__imp__sub_824298C0) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_824298CC:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// bgt cr6,0x824298e4
	if (ctx.cr6.gt) goto loc_824298E4;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8242994c
	goto loc_8242994C;
loc_824298E4:
	// rlwinm r11,r10,0,24,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r11,192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 192, ctx.xer);
	// bne cr6,0x82429904
	if (!ctx.cr6.eq) goto loc_82429904;
	// lbz r7,1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r9,r3,2
	ctx.r9.s64 = ctx.r3.s64 + 2;
	// rlwimi r7,r10,6,21,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x7C0) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF83F);
	// clrlwi r11,r7,21
	ctx.r11.u64 = ctx.r7.u32 & 0x7FF;
	// b 0x8242994c
	goto loc_8242994C;
loc_82429904:
	// rlwinm r6,r10,0,24,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r6,224
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 224, ctx.xer);
	// bne cr6,0x8242992c
	if (!ctx.cr6.eq) goto loc_8242992C;
	// lbz r5,1(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r9,r3,3
	ctx.r9.s64 = ctx.r3.s64 + 3;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rlwimi r5,r10,6,22,25
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x3C0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC3F);
	// clrlwi r3,r5,22
	ctx.r3.u64 = ctx.r5.u32 & 0x3FF;
	// rlwimi r11,r3,6,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 6) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// b 0x8242994c
	goto loc_8242994C;
loc_8242992C:
	// lbz r6,1(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// lbz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rlwimi r6,r10,6,23,25
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x1C0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFE3F);
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// clrlwi r5,r6,23
	ctx.r5.u64 = ctx.r6.u32 & 0x1FF;
	// rlwimi r7,r5,6,0,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 6) & 0xFFFFFFC0) | (ctx.r7.u64 & 0xFFFFFFFF0000003F);
	// rlwimi r11,r7,6,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 6) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
loc_8242994C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82429968
	if (ctx.cr6.eq) goto loc_82429968;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x824298cc
	if (ctx.cr6.lt) goto loc_824298CC;
	// blr 
	return;
loc_82429968:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82429970"))) PPC_WEAK_FUNC(sub_82429970);
PPC_FUNC_IMPL(__imp__sub_82429970) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429978:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,127
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 127, ctx.xer);
	// bgt cr6,0x82429990
	if (ctx.cr6.gt) goto loc_82429990;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x824299f8
	goto loc_824299F8;
loc_82429990:
	// rlwinm r10,r9,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 192, ctx.xer);
	// bne cr6,0x824299b0
	if (!ctx.cr6.eq) goto loc_824299B0;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// rlwimi r7,r9,6,21,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0x7C0) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF83F);
	// clrlwi r10,r7,21
	ctx.r10.u64 = ctx.r7.u32 & 0x7FF;
	// b 0x824299f8
	goto loc_824299F8;
loc_824299B0:
	// rlwinm r6,r9,0,24,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r6,224
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 224, ctx.xer);
	// bne cr6,0x824299d8
	if (!ctx.cr6.eq) goto loc_824299D8;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwimi r5,r9,6,22,25
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0x3C0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFC3F);
	// clrlwi r4,r5,22
	ctx.r4.u64 = ctx.r5.u32 & 0x3FF;
	// rlwimi r10,r4,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// b 0x824299f8
	goto loc_824299F8;
loc_824299D8:
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwimi r6,r9,6,23,25
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0x1C0) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFE3F);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r5,r6,23
	ctx.r5.u64 = ctx.r6.u32 & 0x1FF;
	// rlwimi r7,r5,6,0,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 6) & 0xFFFFFFC0) | (ctx.r7.u64 & 0xFFFFFFFF0000003F);
	// rlwimi r10,r7,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
loc_824299F8:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x82429978
	goto loc_82429978;
}

__attribute__((alias("__imp__sub_82429A0C"))) PPC_WEAK_FUNC(sub_82429A0C);
PPC_FUNC_IMPL(__imp__sub_82429A0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82429A10"))) PPC_WEAK_FUNC(sub_82429A10);
PPC_FUNC_IMPL(__imp__sub_82429A10) {
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
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82429a68
	if (ctx.cr6.eq) goto loc_82429A68;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82429a54
	if (ctx.cr6.eq) goto loc_82429A54;
	// bl 0x82452cf0
	ctx.lr = 0x82429A44;
	sub_82452CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82429a54
	if (!ctx.cr6.eq) goto loc_82429A54;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82452e18
	ctx.lr = 0x82429A54;
	sub_82452E18(ctx, base);
loc_82429A54:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82429a68
	if (ctx.cr6.eq) goto loc_82429A68;
	// bl 0x82452cd8
	ctx.lr = 0x82429A68;
	sub_82452CD8(ctx, base);
loc_82429A68:
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

__attribute__((alias("__imp__sub_82429A84"))) PPC_WEAK_FUNC(sub_82429A84);
PPC_FUNC_IMPL(__imp__sub_82429A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82429A88"))) PPC_WEAK_FUNC(sub_82429A88);
PPC_FUNC_IMPL(__imp__sub_82429A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x82429A90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// srawi r31,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 3;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// beq cr6,0x82429b40
	if (ctx.cr6.eq) goto loc_82429B40;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r27,-32044
	ctx.r27.s64 = -2100035584;
	// ori r28,r8,65535
	ctx.r28.u64 = ctx.r8.u64 | 65535;
loc_82429AD8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r3,r5,r28
	ctx.r3.u64 = ctx.r5.u64 + ctx.r28.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x82429b18
	if (!ctx.cr6.eq) goto loc_82429B18;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82429B18;
	sub_8242BCD0(ctx, base);
loc_82429B18:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r29,-8
	ctx.r8.s64 = ctx.r29.s64 + -8;
	// addi r7,r30,-8
	ctx.r7.s64 = ctx.r30.s64 + -8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bne cr6,0x82429ad8
	if (!ctx.cr6.eq) goto loc_82429AD8;
loc_82429B40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82429B4C"))) PPC_WEAK_FUNC(sub_82429B4C);
PPC_FUNC_IMPL(__imp__sub_82429B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82429B50"))) PPC_WEAK_FUNC(sub_82429B50);
PPC_FUNC_IMPL(__imp__sub_82429B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x82429B58;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r6,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r6.u64);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// std r7,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// lwz r27,232(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r26,228(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// lwz r31,224(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// beq cr6,0x82429bfc
	if (ctx.cr6.eq) goto loc_82429BFC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r24,-32044
	ctx.r24.s64 = -2100035584;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
loc_82429B90:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r7,r8,r28
	ctx.r7.u64 = ctx.r8.u64 + ctx.r28.u64;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x82429bdc
	if (!ctx.cr6.eq) goto loc_82429BDC;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82429BDC;
	sub_8242BCD0(ctx, base);
loc_82429BDC:
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// bne cr6,0x82429b90
	if (!ctx.cr6.eq) goto loc_82429B90;
loc_82429BFC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// stw r26,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r26.u32);
	// stw r27,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r27.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82429C14"))) PPC_WEAK_FUNC(sub_82429C14);
PPC_FUNC_IMPL(__imp__sub_82429C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82429C18"))) PPC_WEAK_FUNC(sub_82429C18);
PPC_FUNC_IMPL(__imp__sub_82429C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x82429C20;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// std r3,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r3.u64);
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// std r5,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r5.u64);
	// lis r24,-32044
	ctx.r24.s64 = -2100035584;
	// lwz r26,200(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r23,208(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// std r6,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
loc_82429C54:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82429c64
	if (!ctx.cr6.eq) goto loc_82429C64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82429C64:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82429cd8
	if (ctx.cr6.eq) goto loc_82429CD8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r5,r6,r27
	ctx.r5.u64 = ctx.r6.u64 + ctx.r27.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x82429cc4
	if (!ctx.cr6.eq) goto loc_82429CC4;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82429CC4;
	sub_8242BCD0(ctx, base);
loc_82429CC4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// b 0x82429c54
	goto loc_82429C54;
loc_82429CD8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82429CE4"))) PPC_WEAK_FUNC(sub_82429CE4);
PPC_FUNC_IMPL(__imp__sub_82429CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82429CE8"))) PPC_WEAK_FUNC(sub_82429CE8);
PPC_FUNC_IMPL(__imp__sub_82429CE8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r8,r4,25
	ctx.r8.u64 = ctx.r4.u32 & 0x7F;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f13,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r9,r11,16952
	ctx.r9.s64 = ctx.r11.s64 + 16952;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// andis. r4,r7,38912
	ctx.r4.u64 = ctx.r7.u64 & 2550136832;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// oris r9,r3,2048
	ctx.r9.u64 = ctx.r3.u64 | 134217728;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r6,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// beq cr6,0x82429da8
	if (ctx.cr6.eq) goto loc_82429DA8;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82429DA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82429DA8:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r5,r4,8,18,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x3F00) | (ctx.r5.u64 & 0xFFFFFFFFFFFFC0FF);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r8,r10,0,20,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// rlwimi r5,r4,8,5,5
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x4000000) | (ctx.r5.u64 & 0xFFFFFFFFFBFFFFFF);
	// ori r7,r9,32766
	ctx.r7.u64 = ctx.r9.u64 | 32766;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r7,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// rlwimi r6,r5,11,20,21
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 11) & 0xC00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF3FF);
	// stw r6,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82429E08"))) PPC_WEAK_FUNC(sub_82429E08);
PPC_FUNC_IMPL(__imp__sub_82429E08) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82429e18
	if (!ctx.cr6.eq) goto loc_82429E18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82429E18:
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwimi r10,r11,14,17,17
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0x4000) | (ctx.r10.u64 & 0xFFFFFFFFFFFFBFFF);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82429E28"))) PPC_WEAK_FUNC(sub_82429E28);
PPC_FUNC_IMPL(__imp__sub_82429E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r3,r11,18,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82429E34"))) PPC_WEAK_FUNC(sub_82429E34);
PPC_FUNC_IMPL(__imp__sub_82429E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82429E38"))) PPC_WEAK_FUNC(sub_82429E38);
PPC_FUNC_IMPL(__imp__sub_82429E38) {
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
	// bl 0x8247c408
	ctx.lr = 0x82429E58;
	sub_8247C408(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82429e78
	if (ctx.cr6.eq) goto loc_82429E78;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b398
	ctx.lr = 0x82429E78;
	sub_8242B398(ctx, base);
loc_82429E78:
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

__attribute__((alias("__imp__sub_82429E94"))) PPC_WEAK_FUNC(sub_82429E94);
PPC_FUNC_IMPL(__imp__sub_82429E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82429E98"))) PPC_WEAK_FUNC(sub_82429E98);
PPC_FUNC_IMPL(__imp__sub_82429E98) {
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
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r12,r12,148
	ctx.r12.u64 = ctx.r12.u64 | 148;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// oris r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 738197504;
	// ori r9,r9,20
	ctx.r9.u64 = ctx.r9.u64 | 20;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82429f00
	if (ctx.cr6.lt) goto loc_82429F00;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x82429f18
	goto loc_82429F18;
loc_82429F00:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_82429F18:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-7840
	ctx.r11.s64 = ctx.r11.s64 + -7840;
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x82455aa0
	ctx.lr = 0x82429F3C;
	sub_82455AA0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,17012
	ctx.r11.s64 = ctx.r11.s64 + 17012;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82429f68
	if (ctx.cr6.eq) goto loc_82429F68;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82429F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82429F68:
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

__attribute__((alias("__imp__sub_82429F84"))) PPC_WEAK_FUNC(sub_82429F84);
PPC_FUNC_IMPL(__imp__sub_82429F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82429F88"))) PPC_WEAK_FUNC(sub_82429F88);
PPC_FUNC_IMPL(__imp__sub_82429F88) {
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
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82429fbc
	if (ctx.cr6.eq) goto loc_82429FBC;
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82429FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82429FBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242e4c0
	ctx.lr = 0x82429FC4;
	sub_8242E4C0(ctx, base);
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

__attribute__((alias("__imp__sub_82429FD8"))) PPC_WEAK_FUNC(sub_82429FD8);
PPC_FUNC_IMPL(__imp__sub_82429FD8) {
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
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242a03c
	if (ctx.cr6.eq) goto loc_8242A03C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8242a010
	if (!ctx.cr6.eq) goto loc_8242A010;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8242A010:
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8242a03c
	if (!ctx.cr6.eq) goto loc_8242A03C;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r5,r6,16384
	ctx.r5.u64 = ctx.r6.u64 | 1073741824;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242A03C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242A03C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242e4b0
	ctx.lr = 0x8242A044;
	sub_8242E4B0(ctx, base);
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

__attribute__((alias("__imp__sub_8242A058"))) PPC_WEAK_FUNC(sub_8242A058);
PPC_FUNC_IMPL(__imp__sub_8242A058) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,17012
	ctx.r11.s64 = ctx.r11.s64 + 17012;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82455af0
	ctx.lr = 0x8242A088;
	sub_82455AF0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8242a0b4
	if (ctx.cr6.eq) goto loc_8242A0B4;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b398
	ctx.lr = 0x8242A0B4;
	sub_8242B398(ctx, base);
loc_8242A0B4:
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

__attribute__((alias("__imp__sub_8242A0D0"))) PPC_WEAK_FUNC(sub_8242A0D0);
PPC_FUNC_IMPL(__imp__sub_8242A0D0) {
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
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r12,r12,148
	ctx.r12.u64 = ctx.r12.u64 | 148;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// oris r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 738197504;
	// ori r9,r9,20
	ctx.r9.u64 = ctx.r9.u64 | 20;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8242a138
	if (ctx.cr6.lt) goto loc_8242A138;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x8242a150
	goto loc_8242A150;
loc_8242A138:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_8242A150:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-7840
	ctx.r11.s64 = ctx.r11.s64 + -7840;
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x82455aa0
	ctx.lr = 0x8242A174;
	sub_82455AA0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,17012
	ctx.r11.s64 = ctx.r11.s64 + 17012;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8242a1a0
	if (ctx.cr6.eq) goto loc_8242A1A0;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8242A1A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242A1A0:
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

__attribute__((alias("__imp__sub_8242A1BC"))) PPC_WEAK_FUNC(sub_8242A1BC);
PPC_FUNC_IMPL(__imp__sub_8242A1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242A1C0"))) PPC_WEAK_FUNC(sub_8242A1C0);
PPC_FUNC_IMPL(__imp__sub_8242A1C0) {
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
	// li r4,32
	ctx.r4.s64 = 32;
	// lhz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// beq cr6,0x8242a2bc
	if (ctx.cr6.eq) goto loc_8242A2BC;
	// bl 0x8242b338
	ctx.lr = 0x8242A1F4;
	sub_8242B338(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8242a388
	if (ctx.cr6.eq) goto loc_8242A388;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lhz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 44);
	// ori r12,r12,148
	ctx.r12.u64 = ctx.r12.u64 | 148;
	// lwz r30,40(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// oris r9,r9,11264
	ctx.r9.u64 = ctx.r9.u64 | 738197504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ori r9,r9,20
	ctx.r9.u64 = ctx.r9.u64 | 20;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8242a254
	if (ctx.cr6.lt) goto loc_8242A254;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x8242a26c
	goto loc_8242A26C;
loc_8242A254:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_8242A26C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-7840
	ctx.r11.s64 = ctx.r11.s64 + -7840;
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x82455aa0
	ctx.lr = 0x8242A28C;
	sub_82455AA0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,17012
	ctx.r11.s64 = ctx.r11.s64 + 17012;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8242a38c
	if (ctx.cr6.eq) goto loc_8242A38C;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8242A2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8242a38c
	goto loc_8242A38C;
loc_8242A2BC:
	// bl 0x8242b338
	ctx.lr = 0x8242A2C0;
	sub_8242B338(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8242a388
	if (ctx.cr6.eq) goto loc_8242A388;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r30,40(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// ori r12,r12,148
	ctx.r12.u64 = ctx.r12.u64 | 148;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// and r5,r6,r12
	ctx.r5.u64 = ctx.r6.u64 & ctx.r12.u64;
	// oris r9,r5,11264
	ctx.r9.u64 = ctx.r5.u64 | 738197504;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ori r9,r9,20
	ctx.r9.u64 = ctx.r9.u64 | 20;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8242a31c
	if (ctx.cr6.lt) goto loc_8242A31C;
	// rlwinm r3,r9,0,3,1
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x8242a334
	goto loc_8242A334;
loc_8242A31C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_8242A334:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-7840
	ctx.r11.s64 = ctx.r11.s64 + -7840;
	// rlwinm r5,r6,0,25,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// bl 0x82455aa0
	ctx.lr = 0x8242A358;
	sub_82455AA0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,17012
	ctx.r11.s64 = ctx.r11.s64 + 17012;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8242a38c
	if (ctx.cr6.eq) goto loc_8242A38C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242A384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8242a38c
	goto loc_8242A38C;
loc_8242A388:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8242A38C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23220
	ctx.r11.s64 = ctx.r11.s64 + -23220;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8242A3AC;
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

__attribute__((alias("__imp__sub_8242A3C4"))) PPC_WEAK_FUNC(sub_8242A3C4);
PPC_FUNC_IMPL(__imp__sub_8242A3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242A3C8"))) PPC_WEAK_FUNC(sub_8242A3C8);
PPC_FUNC_IMPL(__imp__sub_8242A3C8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,17072
	ctx.r11.s64 = ctx.r11.s64 + 17072;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242a420
	if (!ctx.cr6.eq) goto loc_8242A420;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242A420;
	sub_8242BCD0(ctx, base);
loc_8242A420:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-8284
	ctx.r11.s64 = ctx.r11.s64 + -8284;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82455af0
	ctx.lr = 0x8242A434;
	sub_82455AF0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
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

__attribute__((alias("__imp__sub_8242A454"))) PPC_WEAK_FUNC(sub_8242A454);
PPC_FUNC_IMPL(__imp__sub_8242A454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242A458"))) PPC_WEAK_FUNC(sub_8242A458);
PPC_FUNC_IMPL(__imp__sub_8242A458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae8
	ctx.lr = 0x8242A460;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242a514
	if (ctx.cr6.eq) goto loc_8242A514;
	// addi r24,r31,-4
	ctx.r24.s64 = ctx.r31.s64 + -4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x8242a508
	if (ctx.cr6.lt) goto loc_8242A508;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r27,r11,-10172
	ctx.r27.s64 = ctx.r11.s64 + -10172;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r25,-32044
	ctx.r25.s64 = -2100035584;
	// addi r26,r11,-8284
	ctx.r26.s64 = ctx.r11.s64 + -8284;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// addi r28,r11,17072
	ctx.r28.s64 = ctx.r11.s64 + 17072;
loc_8242A4B8:
	// addi r31,r31,-64
	ctx.r31.s64 = ctx.r31.s64 + -64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 + ctx.r29.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242a4ec
	if (!ctx.cr6.eq) goto loc_8242A4EC;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242A4EC;
	sub_8242BCD0(ctx, base);
loc_8242A4EC:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// bl 0x82455af0
	ctx.lr = 0x8242A4F8;
	sub_82455AF0(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8242a4b8
	if (!ctx.cr6.lt) goto loc_8242A4B8;
loc_8242A508:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
loc_8242A514:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,17072
	ctx.r11.s64 = ctx.r11.s64 + 17072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242a558
	if (!ctx.cr6.eq) goto loc_8242A558;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242A558;
	sub_8242BCD0(ctx, base);
loc_8242A558:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-8284
	ctx.r11.s64 = ctx.r11.s64 + -8284;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82455af0
	ctx.lr = 0x8242A56C;
	sub_82455AF0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8242a598
	if (ctx.cr6.eq) goto loc_8242A598;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b398
	ctx.lr = 0x8242A598;
	sub_8242B398(ctx, base);
loc_8242A598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb38
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242A5A4"))) PPC_WEAK_FUNC(sub_8242A5A4);
PPC_FUNC_IMPL(__imp__sub_8242A5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242A5A8"))) PPC_WEAK_FUNC(sub_8242A5A8);
PPC_FUNC_IMPL(__imp__sub_8242A5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8242A5B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
loc_8242A5BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8242a5cc
	if (!ctx.cr6.eq) goto loc_8242A5CC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242A5CC:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8242a65c
	if (ctx.cr6.eq) goto loc_8242A65C;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8242a5ec
	if (ctx.cr6.eq) goto loc_8242A5EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82452cd8
	ctx.lr = 0x8242A5EC;
	sub_82452CD8(ctx, base);
loc_8242A5EC:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8242a634
	if (ctx.cr6.eq) goto loc_8242A634;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242a620
	if (ctx.cr6.eq) goto loc_8242A620;
	// bl 0x82452cf0
	ctx.lr = 0x8242A610;
	sub_82452CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8242a620
	if (!ctx.cr6.eq) goto loc_8242A620;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82452e18
	ctx.lr = 0x8242A620;
	sub_82452E18(ctx, base);
loc_8242A620:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// beq cr6,0x8242a654
	if (ctx.cr6.eq) goto loc_8242A654;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82452cd8
	ctx.lr = 0x8242A634;
	sub_82452CD8(ctx, base);
loc_8242A634:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8242a654
	if (ctx.cr6.eq) goto loc_8242A654;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82452cf0
	ctx.lr = 0x8242A644;
	sub_82452CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8242a654
	if (!ctx.cr6.eq) goto loc_8242A654;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82452e18
	ctx.lr = 0x8242A654;
	sub_82452E18(ctx, base);
loc_8242A654:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x8242a5bc
	goto loc_8242A5BC;
loc_8242A65C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242A664"))) PPC_WEAK_FUNC(sub_8242A664);
PPC_FUNC_IMPL(__imp__sub_8242A664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242A668"))) PPC_WEAK_FUNC(sub_8242A668);
PPC_FUNC_IMPL(__imp__sub_8242A668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8242A670;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8242a6c4
	if (!ctx.cr6.eq) goto loc_8242A6C4;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
loc_8242A690:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8242a6b0
	if (ctx.cr6.eq) goto loc_8242A6B0;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242A6AC;
	sub_8242BCD0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8242A6B0:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8242a690
	if (ctx.cr6.eq) goto loc_8242A690;
loc_8242A6C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242A6CC"))) PPC_WEAK_FUNC(sub_8242A6CC);
PPC_FUNC_IMPL(__imp__sub_8242A6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242A6D0"))) PPC_WEAK_FUNC(sub_8242A6D0);
PPC_FUNC_IMPL(__imp__sub_8242A6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8242A6D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8242a790
	if (!ctx.cr6.eq) goto loc_8242A790;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8242a718
	if (ctx.cr6.gt) goto loc_8242A718;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,-5
	ctx.r9.s64 = -5;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8242a71c
	if (!ctx.cr6.gt) goto loc_8242A71C;
loc_8242A718:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8242A71C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8242A72C;
	sub_8242BB48(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242a780
	if (ctx.cr6.eq) goto loc_8242A780;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8242a784
	if (ctx.cr6.lt) goto loc_8242A784;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8242a784
	if (ctx.cr6.eq) goto loc_8242A784;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242A768:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8242a768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242A768;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8242A780:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8242A784:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8242A790:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8242a890
	if (ctx.cr6.eq) goto loc_8242A890;
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// ori r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 65535;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x8242a7bc
	if (ctx.cr6.gt) goto loc_8242A7BC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,-5
	ctx.r6.s64 = -5;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8242a7c0
	if (!ctx.cr6.gt) goto loc_8242A7C0;
loc_8242A7BC:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8242A7C0:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8242A7D0;
	sub_8242BB48(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242a820
	if (ctx.cr6.eq) goto loc_8242A820;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8242a818
	if (ctx.cr6.lt) goto loc_8242A818;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8242a818
	if (ctx.cr6.eq) goto loc_8242A818;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242A80C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8242a80c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242A80C;
loc_8242A818:
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// b 0x8242a824
	goto loc_8242A824;
loc_8242A820:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8242A824:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8242a830
	if (ctx.cr6.lt) goto loc_8242A830;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8242A830:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8242a890
	if (ctx.cr6.eq) goto loc_8242A890;
loc_8242A83C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8242a884
	if (ctx.cr6.eq) goto loc_8242A884;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242a870
	if (ctx.cr6.eq) goto loc_8242A870;
	// bl 0x82452cf0
	ctx.lr = 0x8242A860;
	sub_82452CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8242a870
	if (!ctx.cr6.eq) goto loc_8242A870;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82452e18
	ctx.lr = 0x8242A870;
	sub_82452E18(ctx, base);
loc_8242A870:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8242a884
	if (ctx.cr6.eq) goto loc_8242A884;
	// bl 0x82452cd8
	ctx.lr = 0x8242A884;
	sub_82452CD8(ctx, base);
loc_8242A884:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8242a83c
	if (!ctx.cr6.eq) goto loc_8242A83C;
loc_8242A890:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8242a8a4
	if (ctx.cr6.eq) goto loc_8242A8A4;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821acb28
	ctx.lr = 0x8242A8A4;
	sub_821ACB28(ctx, base);
loc_8242A8A4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242A8B0"))) PPC_WEAK_FUNC(sub_8242A8B0);
PPC_FUNC_IMPL(__imp__sub_8242A8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8242A8B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8242a96c
	if (!ctx.cr6.eq) goto loc_8242A96C;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8242a8fc
	if (ctx.cr6.gt) goto loc_8242A8FC;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,-5
	ctx.r9.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8242a900
	if (!ctx.cr6.gt) goto loc_8242A900;
loc_8242A8FC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8242A900:
	// bl 0x8259f370
	ctx.lr = 0x8242A904;
	sub_8259F370(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242a960
	if (ctx.cr6.eq) goto loc_8242A960;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// blt cr6,0x8242a954
	if (ctx.cr6.lt) goto loc_8242A954;
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// addi r9,r9,8344
	ctx.r9.s64 = ctx.r9.s64 + 8344;
loc_8242A92C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// sth r5,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r5.u16);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// bge cr6,0x8242a92c
	if (!ctx.cr6.lt) goto loc_8242A92C;
loc_8242A954:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8242A960:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8242A96C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8242aa30
	if (ctx.cr6.eq) goto loc_8242AA30;
	// lis r4,8191
	ctx.r4.s64 = 536805376;
	// ori r3,r4,65535
	ctx.r3.u64 = ctx.r4.u64 | 65535;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x8242a998
	if (ctx.cr6.gt) goto loc_8242A998;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8242a99c
	if (!ctx.cr6.gt) goto loc_8242A99C;
loc_8242A998:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8242A99C:
	// bl 0x8259f370
	ctx.lr = 0x8242A9A0;
	sub_8259F370(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242a9f4
	if (ctx.cr6.eq) goto loc_8242A9F4;
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x8242a9f8
	if (ctx.cr6.lt) goto loc_8242A9F8;
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// addi r9,r9,8344
	ctx.r9.s64 = ctx.r9.s64 + 8344;
loc_8242A9C8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// bge cr6,0x8242a9c8
	if (!ctx.cr6.lt) goto loc_8242A9C8;
	// b 0x8242a9f8
	goto loc_8242A9F8;
loc_8242A9F4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8242A9F8:
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8242aa04
	if (ctx.cr6.lt) goto loc_8242AA04;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8242AA04:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8242aa30
	if (ctx.cr6.eq) goto loc_8242AA30;
loc_8242AA10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bl 0x82429360
	ctx.lr = 0x8242AA24;
	sub_82429360(ctx, base);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8242aa10
	if (!ctx.cr6.eq) goto loc_8242AA10;
loc_8242AA30:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8242aa44
	if (ctx.cr6.eq) goto loc_8242AA44;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821acc00
	ctx.lr = 0x8242AA44;
	sub_821ACC00(ctx, base);
loc_8242AA44:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242AA50"))) PPC_WEAK_FUNC(sub_8242AA50);
PPC_FUNC_IMPL(__imp__sub_8242AA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8242AA58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-23220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242aa7c
	if (!ctx.cr6.eq) goto loc_8242AA7C;
	// bl 0x8242a1c0
	ctx.lr = 0x8242AA78;
	sub_8242A1C0(ctx, base);
	// lwz r11,-23220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23220);
loc_8242AA7C:
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82456ed8
	ctx.lr = 0x8242AA8C;
	sub_82456ED8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242AA94"))) PPC_WEAK_FUNC(sub_8242AA94);
PPC_FUNC_IMPL(__imp__sub_8242AA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242AA98"))) PPC_WEAK_FUNC(sub_8242AA98);
PPC_FUNC_IMPL(__imp__sub_8242AA98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8242AAA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8242abf0
	if (!ctx.cr6.gt) goto loc_8242ABF0;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bgt cr6,0x8242aacc
	if (ctx.cr6.gt) goto loc_8242AACC;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8242AACC:
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8242a8b0
	ctx.lr = 0x8242AADC;
	sub_8242A8B0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rldicr r6,r6,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// rldicr r4,r4,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x82429c18
	ctx.lr = 0x8242AB30;
	sub_82429C18(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8242ab50
	if (ctx.cr6.eq) goto loc_8242AB50;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8242AB50:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8242ab84
	if (!ctx.cr6.eq) goto loc_8242AB84;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8242ab7c
	if (!ctx.cr6.eq) goto loc_8242AB7C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8259f370
	ctx.lr = 0x8242AB6C;
	sub_8259F370(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ab84
	if (ctx.cr6.eq) goto loc_8242AB84;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// b 0x8242ab84
	goto loc_8242AB84;
loc_8242AB7C:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821acc00
	ctx.lr = 0x8242AB84;
	sub_821ACC00(ctx, base);
loc_8242AB84:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82429360
	ctx.lr = 0x8242ABBC;
	sub_82429360(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242abf0
	if (!ctx.cr6.eq) goto loc_8242ABF0;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242ABF0;
	sub_8242BCD0(ctx, base);
loc_8242ABF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242ABF8"))) PPC_WEAK_FUNC(sub_8242ABF8);
PPC_FUNC_IMPL(__imp__sub_8242ABF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8242AC0C:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8242ac1c
	if (!ctx.cr6.eq) goto loc_8242AC1C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242AC1C:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8242ac4c
	if (ctx.cr6.eq) goto loc_8242AC4C;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8242ac3c
	if (ctx.cr6.eq) goto loc_8242AC3C;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8242ac44
	if (!ctx.cr6.eq) goto loc_8242AC44;
loc_8242AC3C:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// b 0x8242ac0c
	goto loc_8242AC0C;
loc_8242AC44:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8242AC4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242AC54"))) PPC_WEAK_FUNC(sub_8242AC54);
PPC_FUNC_IMPL(__imp__sub_8242AC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242AC58"))) PPC_WEAK_FUNC(sub_8242AC58);
PPC_FUNC_IMPL(__imp__sub_8242AC58) {
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
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8242ac88
	if (ctx.cr6.eq) goto loc_8242AC88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242AC88:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8242acd4
	if (!ctx.cr6.eq) goto loc_8242ACD4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8242accc
	if (!ctx.cr6.eq) goto loc_8242ACCC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8242ACAC;
	sub_8242BB48(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// beq cr6,0x8242acd4
	if (ctx.cr6.eq) goto loc_8242ACD4;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x8242acd4
	goto loc_8242ACD4;
loc_8242ACCC:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821acb28
	ctx.lr = 0x8242ACD4;
	sub_821ACB28(ctx, base);
loc_8242ACD4:
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8242ACDC:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ad00
	if (ctx.cr6.eq) goto loc_8242AD00;
	// bl 0x82452cf0
	ctx.lr = 0x8242ACF0;
	sub_82452CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8242ad00
	if (!ctx.cr6.eq) goto loc_8242AD00;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82452e18
	ctx.lr = 0x8242AD00;
	sub_82452E18(ctx, base);
loc_8242AD00:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8242acdc
	if (!ctx.cr6.lt) goto loc_8242ACDC;
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

__attribute__((alias("__imp__sub_8242AD24"))) PPC_WEAK_FUNC(sub_8242AD24);
PPC_FUNC_IMPL(__imp__sub_8242AD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242AD28"))) PPC_WEAK_FUNC(sub_8242AD28);
PPC_FUNC_IMPL(__imp__sub_8242AD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8242AD30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8242ad50
	if (ctx.cr6.eq) goto loc_8242AD50;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242AD50:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8242ad88
	if (!ctx.cr6.eq) goto loc_8242AD88;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8242ad80
	if (!ctx.cr6.eq) goto loc_8242AD80;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8259f370
	ctx.lr = 0x8242AD6C;
	sub_8259F370(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ad88
	if (ctx.cr6.eq) goto loc_8242AD88;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// b 0x8242ad88
	goto loc_8242AD88;
loc_8242AD80:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821acc00
	ctx.lr = 0x8242AD88;
	sub_821ACC00(ctx, base);
loc_8242AD88:
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r30,r7,65535
	ctx.r30.u64 = ctx.r7.u64 | 65535;
loc_8242AD9C:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r5,r6,r30
	ctx.r5.u64 = ctx.r6.u64 + ctx.r30.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242adcc
	if (!ctx.cr6.eq) goto loc_8242ADCC;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242ADCC;
	sub_8242BCD0(ctx, base);
loc_8242ADCC:
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x8242ad9c
	if (!ctx.cr6.lt) goto loc_8242AD9C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242ADE0"))) PPC_WEAK_FUNC(sub_8242ADE0);
PPC_FUNC_IMPL(__imp__sub_8242ADE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8242ADE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8242ae38
	if (ctx.cr6.eq) goto loc_8242AE38;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ae20
	if (ctx.cr6.eq) goto loc_8242AE20;
	// bl 0x82452d20
	ctx.lr = 0x8242AE10;
	sub_82452D20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8242ae20
	if (!ctx.cr6.eq) goto loc_8242AE20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82453628
	ctx.lr = 0x8242AE20;
	sub_82453628(ctx, base);
loc_8242AE20:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242AE34;
	sub_8242BCD0(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_8242AE38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242AE40"))) PPC_WEAK_FUNC(sub_8242AE40);
PPC_FUNC_IMPL(__imp__sub_8242AE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8242AE48;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8242b058
	if (ctx.cr6.eq) goto loc_8242B058;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8242afd0
	if (!ctx.cr6.lt) goto loc_8242AFD0;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8242aeac
	if (ctx.cr6.eq) goto loc_8242AEAC;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_8242AEAC:
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8242af04
	if (ctx.cr6.eq) goto loc_8242AF04;
	// bl 0x824293f0
	ctx.lr = 0x8242AEBC;
	sub_824293F0(ctx, base);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x82429360
	ctx.lr = 0x8242AEEC;
	sub_82429360(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 65536;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x8242afa4
	goto loc_8242AFA4;
loc_8242AF04:
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// rldicr r4,r8,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r6,r9,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82429a88
	ctx.lr = 0x8242AF44;
	sub_82429A88(ctx, base);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82429b50
	ctx.lr = 0x8242AF60;
	sub_82429B50(ctx, base);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x82429360
	ctx.lr = 0x8242AF90;
	sub_82429360(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
loc_8242AFA4:
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242afc4
	if (!ctx.cr6.eq) goto loc_8242AFC4;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242AFC4;
	sub_8242BCD0(ctx, base);
loc_8242AFC4:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8242AFD0:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-27244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27244);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f11.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r4,r29
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x8242b008
	if (!ctx.cr6.lt) goto loc_8242B008;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8242B008:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r30,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 3;
	// bl 0x8242aa98
	ctx.lr = 0x8242B020;
	sub_8242AA98(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x8242ae40
	ctx.lr = 0x8242B058;
	sub_8242AE40(ctx, base);
loc_8242B058:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242B060"))) PPC_WEAK_FUNC(sub_8242B060);
PPC_FUNC_IMPL(__imp__sub_8242B060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8242B068;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8242b0e0
	if (!ctx.cr6.eq) goto loc_8242B0E0;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
loc_8242B088:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8242b0cc
	if (ctx.cr6.eq) goto loc_8242B0CC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242b0b8
	if (ctx.cr6.eq) goto loc_8242B0B8;
	// bl 0x82452d20
	ctx.lr = 0x8242B0A8;
	sub_82452D20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8242b0b8
	if (!ctx.cr6.eq) goto loc_8242B0B8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82453628
	ctx.lr = 0x8242B0B8;
	sub_82453628(ctx, base);
loc_8242B0B8:
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8242bcd0
	ctx.lr = 0x8242B0C8;
	sub_8242BCD0(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_8242B0CC:
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8242b088
	if (ctx.cr6.eq) goto loc_8242B088;
loc_8242B0E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242B0E8"))) PPC_WEAK_FUNC(sub_8242B0E8);
PPC_FUNC_IMPL(__imp__sub_8242B0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8242B0F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8242B110:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8242b120
	if (!ctx.cr6.eq) goto loc_8242B120;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242B120:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8242b1cc
	if (ctx.cr6.eq) goto loc_8242B1CC;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8242b14c
	if (ctx.cr6.eq) goto loc_8242B14C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8242b19c
	goto loc_8242B19C;
loc_8242B14C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8242b15c
	if (!ctx.cr6.eq) goto loc_8242B15C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8242b19c
	goto loc_8242B19C;
loc_8242B15C:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8242b194
	if (ctx.cr6.eq) goto loc_8242B194;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8242B174:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r4,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8242b194
	if (!ctx.cr0.eq) goto loc_8242B194;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8242b174
	if (!ctx.cr6.eq) goto loc_8242B174;
loc_8242B194:
	// cntlzw r3,r8
	ctx.r3.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
loc_8242B19C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242b1b0
	if (!ctx.cr6.eq) goto loc_8242B1B0;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// b 0x8242b110
	goto loc_8242B110;
loc_8242B1B0:
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8242b330
	if (!ctx.cr6.eq) goto loc_8242B330;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8242B1CC:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,-26660(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26660);
	// bl 0x82452f00
	ctx.lr = 0x8242B1E0;
	sub_82452F00(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8242b1f4
	if (!ctx.cr6.eq) goto loc_8242B1F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242B1F4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242b218
	if (ctx.cr6.eq) goto loc_8242B218;
	// bl 0x82452cf0
	ctx.lr = 0x8242B208;
	sub_82452CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8242b218
	if (!ctx.cr6.eq) goto loc_8242B218;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82452e18
	ctx.lr = 0x8242B218;
	sub_82452E18(ctx, base);
loc_8242B218:
	// clrlwi r7,r31,24
	ctx.r7.u64 = ctx.r31.u32 & 0xFF;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8242b2a4
	if (ctx.cr6.eq) goto loc_8242B2A4;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x8242ae40
	ctx.lr = 0x8242B280;
	sub_8242AE40(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addis r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 65536;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// b 0x8242b318
	goto loc_8242B318;
loc_8242B2A4:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x8242ae40
	ctx.lr = 0x8242B2F8;
	sub_8242AE40(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addis r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 65536;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
loc_8242B318:
	// bne cr6,0x8242b330
	if (!ctx.cr6.eq) goto loc_8242B330;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242B330;
	sub_8242BCD0(ctx, base);
loc_8242B330:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242B338"))) PPC_WEAK_FUNC(sub_8242B338);
PPC_FUNC_IMPL(__imp__sub_8242B338) {
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
	// bl 0x8242bb48
	ctx.lr = 0x8242B348;
	sub_8242BB48(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lbz r11,-26404(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -26404);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8242b374
	if (!ctx.cr6.eq) goto loc_8242B374;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8242B374:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242b388
	if (!ctx.cr6.eq) goto loc_8242B388;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// oris r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 2147483648;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_8242B388:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242B398"))) PPC_WEAK_FUNC(sub_8242B398);
PPC_FUNC_IMPL(__imp__sub_8242B398) {
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
	// bl 0x8242bcd0
	ctx.lr = 0x8242B3B0;
	sub_8242BCD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242b400
	if (ctx.cr6.eq) goto loc_8242B400;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lbz r11,-26404(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -26404);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8242b3ec
	if (!ctx.cr6.eq) goto loc_8242B3EC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
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
loc_8242B3EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242b400
	if (!ctx.cr6.eq) goto loc_8242B400;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_8242B400:
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

__attribute__((alias("__imp__sub_8242B414"))) PPC_WEAK_FUNC(sub_8242B414);
PPC_FUNC_IMPL(__imp__sub_8242B414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242B418"))) PPC_WEAK_FUNC(sub_8242B418);
PPC_FUNC_IMPL(__imp__sub_8242B418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8242B420;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_8242B430:
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8242b45c
	if (ctx.cr6.lt) goto loc_8242B45C;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8242b460
	if (ctx.cr6.lt) goto loc_8242B460;
loc_8242B45C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242B460:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8242b48c
	if (!ctx.cr6.eq) goto loc_8242B48C;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8242b430
	if (!ctx.cr6.eq) goto loc_8242B430;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8242b9f8
	ctx.lr = 0x8242B484;
	sub_8242B9F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8242B48C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8242b4a8
	if (!ctx.cr6.eq) goto loc_8242B4A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8242b9f8
	ctx.lr = 0x8242B4A0;
	sub_8242B9F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8242B4A8:
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lbz r8,-26404(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + -26404);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8242b4c8
	if (!ctx.cr6.eq) goto loc_8242B4C8;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// b 0x8242b4e0
	goto loc_8242B4E0;
loc_8242B4C8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8242b4dc
	if (!ctx.cr6.eq) goto loc_8242B4DC;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// b 0x8242b4e0
	goto loc_8242B4E0;
loc_8242B4DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242B4E0:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8242b4fc
	if (ctx.cr6.eq) goto loc_8242B4FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824273f0
	ctx.lr = 0x8242B4F4;
	sub_824273F0(ctx, base);
	// lbz r8,-26404(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + -26404);
	// b 0x8242b528
	goto loc_8242B528;
loc_8242B4FC:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8242b510
	if (!ctx.cr6.eq) goto loc_8242B510;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r3,r3,1
	ctx.r3.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// b 0x8242b528
	goto loc_8242B528;
loc_8242B510:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8242b524
	if (!ctx.cr6.eq) goto loc_8242B524;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r3,r11,1
	ctx.r3.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// b 0x8242b528
	goto loc_8242B528;
loc_8242B524:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242B528:
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r9,r29,12
	ctx.r9.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8242b558
	if (ctx.cr6.lt) goto loc_8242B558;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r7,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r7.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8242b55c
	if (ctx.cr6.lt) goto loc_8242B55C;
loc_8242B558:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242B55C:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8242b57c
	if (!ctx.cr6.eq) goto loc_8242B57C;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8242b640
	if (ctx.cr6.eq) goto loc_8242B640;
	// addi r9,r29,12
	ctx.r9.s64 = ctx.r29.s64 + 12;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8242B57C:
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8242b5a4
	if (ctx.cr6.lt) goto loc_8242B5A4;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8242b5a8
	if (ctx.cr6.lt) goto loc_8242B5A8;
loc_8242B5A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242B5A8:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8242b62c
	if (ctx.cr6.eq) goto loc_8242B62C;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8242b5cc
	if (!ctx.cr6.eq) goto loc_8242B5CC;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// b 0x8242b5e4
	goto loc_8242B5E4;
loc_8242B5CC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8242b5e0
	if (!ctx.cr6.eq) goto loc_8242B5E0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// b 0x8242b5e4
	goto loc_8242B5E4;
loc_8242B5E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242B5E4:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8242b648
	if (!ctx.cr6.eq) goto loc_8242B648;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8242b608
	if (!ctx.cr6.eq) goto loc_8242B608;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8242b57c
	goto loc_8242B57C;
loc_8242B608:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8242b620
	if (!ctx.cr6.eq) goto loc_8242B620;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r10,1
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8242b57c
	goto loc_8242B57C;
loc_8242B620:
	// li r11,0
	ctx.r11.s64 = 0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8242b57c
	goto loc_8242B57C;
loc_8242B62C:
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r29,12
	ctx.r9.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bne cr6,0x8242b57c
	if (!ctx.cr6.eq) goto loc_8242B57C;
loc_8242B640:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8242b9e0
	ctx.lr = 0x8242B648;
	sub_8242B9E0(ctx, base);
loc_8242B648:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242B650"))) PPC_WEAK_FUNC(sub_8242B650);
PPC_FUNC_IMPL(__imp__sub_8242B650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r7,-26404(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -26404);
loc_8242B65C:
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_8242B664:
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8242b68c
	if (ctx.cr6.lt) goto loc_8242B68C;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8242b690
	if (ctx.cr6.lt) goto loc_8242B690;
loc_8242B68C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242B690:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8242b714
	if (ctx.cr6.eq) goto loc_8242B714;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8242b6b4
	if (!ctx.cr6.eq) goto loc_8242B6B4;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r4,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// b 0x8242b6cc
	goto loc_8242B6CC;
loc_8242B6B4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8242b6c8
	if (!ctx.cr6.eq) goto loc_8242B6C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// b 0x8242b6cc
	goto loc_8242B6CC;
loc_8242B6C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242B6CC:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8242b6f0
	if (!ctx.cr6.eq) goto loc_8242B6F0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r5,1
	ctx.r11.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8242b664
	goto loc_8242B664;
loc_8242B6F0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8242b708
	if (!ctx.cr6.eq) goto loc_8242B708;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r4,1
	ctx.r11.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8242b664
	goto loc_8242B664;
loc_8242B708:
	// li r11,0
	ctx.r11.s64 = 0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8242b664
	goto loc_8242B664;
loc_8242B714:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8242b65c
	if (!ctx.cr6.eq) goto loc_8242B65C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242B728"))) PPC_WEAK_FUNC(sub_8242B728);
PPC_FUNC_IMPL(__imp__sub_8242B728) {
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
	// bl 0x8242b650
	ctx.lr = 0x8242B740;
	sub_8242B650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242b75c
	if (ctx.cr6.eq) goto loc_8242B75C;
loc_8242B748:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242b418
	ctx.lr = 0x8242B754;
	sub_8242B418(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8242b748
	if (!ctx.cr6.eq) goto loc_8242B748;
loc_8242B75C:
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

__attribute__((alias("__imp__sub_8242B770"))) PPC_WEAK_FUNC(sub_8242B770);
PPC_FUNC_IMPL(__imp__sub_8242B770) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r8,16960
	ctx.r8.u64 = ctx.r8.u64 | 16960;
	// stb r11,-26402(r10)
	PPC_STORE_U8(ctx.r10.u32 + -26402, ctx.r11.u8);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,-26404(r10)
	PPC_STORE_U8(ctx.r10.u32 + -26404, ctx.r11.u8);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r11,-26401(r10)
	PPC_STORE_U8(ctx.r10.u32 + -26401, ctx.r11.u8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,16904
	ctx.r7.s64 = ctx.r11.s64 + 16904;
loc_8242B7AC:
	// lbzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8242b7bc
	if (!ctx.cr6.gt) goto loc_8242B7BC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8242B7BC:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8242b7c8
	if (!ctx.cr6.lt) goto loc_8242B7C8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8242B7C8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,47
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 47, ctx.xer);
	// blt cr6,0x8242b7ac
	if (ctx.cr6.lt) goto loc_8242B7AC;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// cmplwi cr6,r8,12
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 12, ctx.xer);
	// stw r10,-26400(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26400, ctx.r10.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// bge cr6,0x8242b7f4
	if (!ctx.cr6.lt) goto loc_8242B7F4;
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r11,-26403(r10)
	PPC_STORE_U8(ctx.r10.u32 + -26403, ctx.r11.u8);
	// blr 
	return;
loc_8242B7F4:
	// stb r8,-26403(r10)
	PPC_STORE_U8(ctx.r10.u32 + -26403, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242B7FC"))) PPC_WEAK_FUNC(sub_8242B7FC);
PPC_FUNC_IMPL(__imp__sub_8242B7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242B800"))) PPC_WEAK_FUNC(sub_8242B800);
PPC_FUNC_IMPL(__imp__sub_8242B800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26568);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8242B810"))) PPC_WEAK_FUNC(sub_8242B810);
PPC_FUNC_IMPL(__imp__sub_8242B810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-26568
	ctx.r11.s64 = ctx.r11.s64 + -26568;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8242B824"))) PPC_WEAK_FUNC(sub_8242B824);
PPC_FUNC_IMPL(__imp__sub_8242B824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242B828"))) PPC_WEAK_FUNC(sub_8242B828);
PPC_FUNC_IMPL(__imp__sub_8242B828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26568);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8242B838"))) PPC_WEAK_FUNC(sub_8242B838);
PPC_FUNC_IMPL(__imp__sub_8242B838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-26568
	ctx.r11.s64 = ctx.r11.s64 + -26568;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8242B84C"))) PPC_WEAK_FUNC(sub_8242B84C);
PPC_FUNC_IMPL(__imp__sub_8242B84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242B850"))) PPC_WEAK_FUNC(sub_8242B850);
PPC_FUNC_IMPL(__imp__sub_8242B850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x8242B858;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lbz r10,231(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 231);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lbz r9,247(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 247);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r9,r8,1,0,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 1) & 0xFFFFFFFE) | (ctx.r9.u64 & 0xFFFFFFFF00000001);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r6,0,31,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// or r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 | ctx.r5.u64;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// lwz r11,-26568(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26568);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242B8D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,-26568(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26568);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8242B8E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242b914
	if (ctx.cr6.eq) goto loc_8242B914;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8242B908:
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8242b908
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B908;
loc_8242B914:
	// lbz r6,239(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 239);
	// rlwinm r8,r26,30,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3F;
	// rlwinm r7,r25,30,26,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3F;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r6,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r27,-15
	ctx.r10.s64 = ctx.r27.s64 + -15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r8.u8);
	// stb r7,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r7.u8);
	// stb r5,18(r31)
	PPC_STORE_U8(ctx.r31.u32 + 18, ctx.r5.u8);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r4,r29,4,24,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r29.u32, 4) & 0xF0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF0F);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242B95C"))) PPC_WEAK_FUNC(sub_8242B95C);
PPC_FUNC_IMPL(__imp__sub_8242B95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242B960"))) PPC_WEAK_FUNC(sub_8242B960);
PPC_FUNC_IMPL(__imp__sub_8242B960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8242B968;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r31,r11,-26568
	ctx.r31.s64 = ctx.r11.s64 + -26568;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242B990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_8242B994:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242B9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8242b994
	if (!ctx.cr6.eq) goto loc_8242B994;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242b9d8
	if (ctx.cr6.eq) goto loc_8242B9D8;
loc_8242B9BC:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8242B9CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8242b9bc
	if (!ctx.cr6.eq) goto loc_8242B9BC;
loc_8242B9D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242B9E0"))) PPC_WEAK_FUNC(sub_8242B9E0);
PPC_FUNC_IMPL(__imp__sub_8242B9E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242B9F8"))) PPC_WEAK_FUNC(sub_8242B9F8);
PPC_FUNC_IMPL(__imp__sub_8242B9F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -8);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242BA10"))) PPC_WEAK_FUNC(sub_8242BA10);
PPC_FUNC_IMPL(__imp__sub_8242BA10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r4,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r8,r6,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r4,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r9,18(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r6,r9,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// stwx r7,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242BA68"))) PPC_WEAK_FUNC(sub_8242BA68);
PPC_FUNC_IMPL(__imp__sub_8242BA68) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r5,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// lbz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// stwx r9,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8242baac
	if (ctx.cr6.eq) goto loc_8242BAAC;
	// lbz r8,17(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// stwx r5,r7,r4
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r5.u32);
loc_8242BAAC:
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r6,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8242bad0
	if (ctx.cr6.eq) goto loc_8242BAD0;
	// lbz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
loc_8242BAD0:
	// lbz r9,18(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 18);
	// li r8,0
	ctx.r8.s64 = 0;
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// stwx r8,r7,r4
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242BAE4"))) PPC_WEAK_FUNC(sub_8242BAE4);
PPC_FUNC_IMPL(__imp__sub_8242BAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242BAE8"))) PPC_WEAK_FUNC(sub_8242BAE8);
PPC_FUNC_IMPL(__imp__sub_8242BAE8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242bafc
	if (ctx.cr6.eq) goto loc_8242BAFC;
	// rlwinm r11,r4,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_8242BAFC:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r3,r10,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242BB14"))) PPC_WEAK_FUNC(sub_8242BB14);
PPC_FUNC_IMPL(__imp__sub_8242BB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242BB18"))) PPC_WEAK_FUNC(sub_8242BB18);
PPC_FUNC_IMPL(__imp__sub_8242BB18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242BB20:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bne cr6,0x8242bb20
	if (!ctx.cr6.eq) goto loc_8242BB20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242BB44"))) PPC_WEAK_FUNC(sub_8242BB44);
PPC_FUNC_IMPL(__imp__sub_8242BB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242BB48"))) PPC_WEAK_FUNC(sub_8242BB48);
PPC_FUNC_IMPL(__imp__sub_8242BB48) {
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
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242bb78
	if (ctx.cr6.eq) goto loc_8242BB78;
	// rlwinm r11,r4,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
loc_8242BB78:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r10,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8242bb8c
	if (!ctx.cr6.lt) goto loc_8242BB8C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8242BB8C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// ble cr6,0x8242bbe8
	if (!ctx.cr6.gt) goto loc_8242BBE8;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// lwz r7,-26568(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26568);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8242BBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8242bbdc
	if (ctx.cr6.eq) goto loc_8242BBDC;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_8242BBDC:
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8242bc9c
	goto loc_8242BC9C;
loc_8242BBE8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r3,r30,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFC;
	// lwzx r11,r3,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8242bc04
	if (!ctx.cr6.eq) goto loc_8242BC04;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242BC04:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8242bc20
	if (ctx.cr6.eq) goto loc_8242BC20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242ba10
	ctx.lr = 0x8242BC1C;
	sub_8242BA10(ctx, base);
	// b 0x8242bc9c
	goto loc_8242BC9C;
loc_8242BC20:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8242BC24:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8242bc38
	if (!ctx.cr6.lt) goto loc_8242BC38;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8242BC38:
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8242bcb4
	if (!ctx.cr6.eq) goto loc_8242BCB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242bc24
	if (!ctx.cr6.eq) goto loc_8242BC24;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,-26568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26568);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242BC64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-15
	ctx.r11.s64 = ctx.r11.s64 + -15;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_8242BC98:
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
loc_8242BC9C:
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
loc_8242BCB4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r4,r30,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r30.s64;
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8242bc98
	goto loc_8242BC98;
}

__attribute__((alias("__imp__sub_8242BCD0"))) PPC_WEAK_FUNC(sub_8242BCD0);
PPC_FUNC_IMPL(__imp__sub_8242BCD0) {
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
	// clrlwi r10,r5,30
	ctx.r10.u64 = ctx.r5.u32 & 0x3;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8242bcf4
	if (ctx.cr6.eq) goto loc_8242BCF4;
	// rlwinm r11,r5,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8242BCF4:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r9,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8242bd08
	if (!ctx.cr6.lt) goto loc_8242BD08;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8242BD08:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// ble cr6,0x8242bd90
	if (!ctx.cr6.gt) goto loc_8242BD90;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8242bd3c
	if (ctx.cr6.eq) goto loc_8242BD3C;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
loc_8242BD3C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8242bd50
	if (ctx.cr6.eq) goto loc_8242BD50;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
loc_8242BD50:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8242bd64
	if (!ctx.cr6.eq) goto loc_8242BD64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
loc_8242BD64:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r10,r10,-26568
	ctx.r10.s64 = ctx.r10.s64 + -26568;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242BD7C;
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
loc_8242BD90:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x8242ba68
	ctx.lr = 0x8242BD98;
	sub_8242BA68(ctx, base);
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

__attribute__((alias("__imp__sub_8242BDAC"))) PPC_WEAK_FUNC(sub_8242BDAC);
PPC_FUNC_IMPL(__imp__sub_8242BDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242BDB0"))) PPC_WEAK_FUNC(sub_8242BDB0);
PPC_FUNC_IMPL(__imp__sub_8242BDB0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82434768
	ctx.lr = 0x8242BDD4;
	sub_82434768(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82456ed8
	ctx.lr = 0x8242BDE4;
	sub_82456ED8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8242be18
	if (!ctx.cr6.eq) goto loc_8242BE18;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242BE18;
	sub_8242BCD0(ctx, base);
loc_8242BE18:
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

__attribute__((alias("__imp__sub_8242BE30"))) PPC_WEAK_FUNC(sub_8242BE30);
PPC_FUNC_IMPL(__imp__sub_8242BE30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82456d90
	sub_82456D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242BE3C"))) PPC_WEAK_FUNC(sub_8242BE3C);
PPC_FUNC_IMPL(__imp__sub_8242BE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242BE40"))) PPC_WEAK_FUNC(sub_8242BE40);
PPC_FUNC_IMPL(__imp__sub_8242BE40) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x824570e0
	ctx.lr = 0x8242BE5C;
	sub_824570E0(ctx, base);
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

__attribute__((alias("__imp__sub_8242BE70"))) PPC_WEAK_FUNC(sub_8242BE70);
PPC_FUNC_IMPL(__imp__sub_8242BE70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242BE78"))) PPC_WEAK_FUNC(sub_8242BE78);
PPC_FUNC_IMPL(__imp__sub_8242BE78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242BE80"))) PPC_WEAK_FUNC(sub_8242BE80);
PPC_FUNC_IMPL(__imp__sub_8242BE80) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x82456a40
	sub_82456A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242BE8C"))) PPC_WEAK_FUNC(sub_8242BE8C);
PPC_FUNC_IMPL(__imp__sub_8242BE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242BE90"))) PPC_WEAK_FUNC(sub_8242BE90);
PPC_FUNC_IMPL(__imp__sub_8242BE90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82455bd0
	sub_82455BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242BE98"))) PPC_WEAK_FUNC(sub_8242BE98);
PPC_FUNC_IMPL(__imp__sub_8242BE98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82456d90
	sub_82456D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242BEA0"))) PPC_WEAK_FUNC(sub_8242BEA0);
PPC_FUNC_IMPL(__imp__sub_8242BEA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x824570e0
	sub_824570E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242BEA8"))) PPC_WEAK_FUNC(sub_8242BEA8);
PPC_FUNC_IMPL(__imp__sub_8242BEA8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,17136
	ctx.r11.s64 = ctx.r11.s64 + 17136;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8242bef4
	if (ctx.cr6.eq) goto loc_8242BEF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82455af0
	ctx.lr = 0x8242BEE0;
	sub_82455AF0(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242BEF4;
	sub_8242BCD0(ctx, base);
loc_8242BEF4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8242BF18"))) PPC_WEAK_FUNC(sub_8242BF18);
PPC_FUNC_IMPL(__imp__sub_8242BF18) {
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
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r12,r12,165
	ctx.r12.u64 = ctx.r12.u64 | 165;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// oris r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 738197504;
	// ori r9,r9,37
	ctx.r9.u64 = ctx.r9.u64 | 37;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8242bf80
	if (ctx.cr6.lt) goto loc_8242BF80;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x8242bf98
	goto loc_8242BF98;
loc_8242BF80:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_8242BF98:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r11,r11,17136
	ctx.r11.s64 = ctx.r11.s64 + 17136;
	// rlwinm r10,r3,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8242BFC0;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242bfd8
	if (ctx.cr6.eq) goto loc_8242BFD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82455aa0
	ctx.lr = 0x8242BFD0;
	sub_82455AA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8242bfdc
	goto loc_8242BFDC;
loc_8242BFD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242BFDC:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-26396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26396);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8242C008"))) PPC_WEAK_FUNC(sub_8242C008);
PPC_FUNC_IMPL(__imp__sub_8242C008) {
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
	// bl 0x8242bea8
	ctx.lr = 0x8242C028;
	sub_8242BEA8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242c048
	if (ctx.cr6.eq) goto loc_8242C048;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b398
	ctx.lr = 0x8242C048;
	sub_8242B398(ctx, base);
loc_8242C048:
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

__attribute__((alias("__imp__sub_8242C064"))) PPC_WEAK_FUNC(sub_8242C064);
PPC_FUNC_IMPL(__imp__sub_8242C064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242C068"))) PPC_WEAK_FUNC(sub_8242C068);
PPC_FUNC_IMPL(__imp__sub_8242C068) {
	PPC_FUNC_PROLOGUE();
	// li r8,15
	ctx.r8.s64 = 15;
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,30
	ctx.r6.s64 = 30;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r11,38
	ctx.r11.s64 = 38;
	// stb r8,-206(r1)
	PPC_STORE_U8(ctx.r1.u32 + -206, ctx.r8.u8);
	// li r9,5
	ctx.r9.s64 = 5;
	// stb r7,-205(r1)
	PPC_STORE_U8(ctx.r1.u32 + -205, ctx.r7.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r6,-203(r1)
	PPC_STORE_U8(ctx.r1.u32 + -203, ctx.r6.u8);
	// li r7,25
	ctx.r7.s64 = 25;
	// stb r5,-202(r1)
	PPC_STORE_U8(ctx.r1.u32 + -202, ctx.r5.u8);
	// li r8,8
	ctx.r8.s64 = 8;
	// li r6,13
	ctx.r6.s64 = 13;
	// stb r11,-256(r1)
	PPC_STORE_U8(ctx.r1.u32 + -256, ctx.r11.u8);
	// li r5,18
	ctx.r5.s64 = 18;
	// stb r11,-255(r1)
	PPC_STORE_U8(ctx.r1.u32 + -255, ctx.r11.u8);
	// stb r11,-254(r1)
	PPC_STORE_U8(ctx.r1.u32 + -254, ctx.r11.u8);
	// stb r11,-253(r1)
	PPC_STORE_U8(ctx.r1.u32 + -253, ctx.r11.u8);
	// stb r11,-252(r1)
	PPC_STORE_U8(ctx.r1.u32 + -252, ctx.r11.u8);
	// stb r11,-251(r1)
	PPC_STORE_U8(ctx.r1.u32 + -251, ctx.r11.u8);
	// stb r11,-250(r1)
	PPC_STORE_U8(ctx.r1.u32 + -250, ctx.r11.u8);
	// stb r11,-249(r1)
	PPC_STORE_U8(ctx.r1.u32 + -249, ctx.r11.u8);
	// stb r11,-248(r1)
	PPC_STORE_U8(ctx.r1.u32 + -248, ctx.r11.u8);
	// stb r11,-247(r1)
	PPC_STORE_U8(ctx.r1.u32 + -247, ctx.r11.u8);
	// stb r11,-246(r1)
	PPC_STORE_U8(ctx.r1.u32 + -246, ctx.r11.u8);
	// stb r11,-245(r1)
	PPC_STORE_U8(ctx.r1.u32 + -245, ctx.r11.u8);
	// stb r11,-244(r1)
	PPC_STORE_U8(ctx.r1.u32 + -244, ctx.r11.u8);
	// stb r11,-243(r1)
	PPC_STORE_U8(ctx.r1.u32 + -243, ctx.r11.u8);
	// stb r11,-242(r1)
	PPC_STORE_U8(ctx.r1.u32 + -242, ctx.r11.u8);
	// stb r11,-241(r1)
	PPC_STORE_U8(ctx.r1.u32 + -241, ctx.r11.u8);
	// stb r11,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r11.u8);
	// stb r11,-239(r1)
	PPC_STORE_U8(ctx.r1.u32 + -239, ctx.r11.u8);
	// stb r11,-238(r1)
	PPC_STORE_U8(ctx.r1.u32 + -238, ctx.r11.u8);
	// stb r11,-237(r1)
	PPC_STORE_U8(ctx.r1.u32 + -237, ctx.r11.u8);
	// stb r11,-236(r1)
	PPC_STORE_U8(ctx.r1.u32 + -236, ctx.r11.u8);
	// stb r11,-235(r1)
	PPC_STORE_U8(ctx.r1.u32 + -235, ctx.r11.u8);
	// stb r11,-234(r1)
	PPC_STORE_U8(ctx.r1.u32 + -234, ctx.r11.u8);
	// stb r11,-233(r1)
	PPC_STORE_U8(ctx.r1.u32 + -233, ctx.r11.u8);
	// stb r11,-232(r1)
	PPC_STORE_U8(ctx.r1.u32 + -232, ctx.r11.u8);
	// stb r11,-231(r1)
	PPC_STORE_U8(ctx.r1.u32 + -231, ctx.r11.u8);
	// stb r11,-230(r1)
	PPC_STORE_U8(ctx.r1.u32 + -230, ctx.r11.u8);
	// stb r11,-229(r1)
	PPC_STORE_U8(ctx.r1.u32 + -229, ctx.r11.u8);
	// stb r11,-228(r1)
	PPC_STORE_U8(ctx.r1.u32 + -228, ctx.r11.u8);
	// stb r11,-227(r1)
	PPC_STORE_U8(ctx.r1.u32 + -227, ctx.r11.u8);
	// stb r11,-226(r1)
	PPC_STORE_U8(ctx.r1.u32 + -226, ctx.r11.u8);
	// stb r11,-225(r1)
	PPC_STORE_U8(ctx.r1.u32 + -225, ctx.r11.u8);
	// stb r11,-224(r1)
	PPC_STORE_U8(ctx.r1.u32 + -224, ctx.r11.u8);
	// stb r11,-223(r1)
	PPC_STORE_U8(ctx.r1.u32 + -223, ctx.r11.u8);
	// stb r11,-222(r1)
	PPC_STORE_U8(ctx.r1.u32 + -222, ctx.r11.u8);
	// stb r11,-221(r1)
	PPC_STORE_U8(ctx.r1.u32 + -221, ctx.r11.u8);
	// stb r11,-220(r1)
	PPC_STORE_U8(ctx.r1.u32 + -220, ctx.r11.u8);
	// stb r11,-219(r1)
	PPC_STORE_U8(ctx.r1.u32 + -219, ctx.r11.u8);
	// stb r11,-218(r1)
	PPC_STORE_U8(ctx.r1.u32 + -218, ctx.r11.u8);
	// stb r11,-217(r1)
	PPC_STORE_U8(ctx.r1.u32 + -217, ctx.r11.u8);
	// stb r11,-216(r1)
	PPC_STORE_U8(ctx.r1.u32 + -216, ctx.r11.u8);
	// stb r11,-215(r1)
	PPC_STORE_U8(ctx.r1.u32 + -215, ctx.r11.u8);
	// stb r11,-214(r1)
	PPC_STORE_U8(ctx.r1.u32 + -214, ctx.r11.u8);
	// stb r11,-213(r1)
	PPC_STORE_U8(ctx.r1.u32 + -213, ctx.r11.u8);
	// stb r11,-212(r1)
	PPC_STORE_U8(ctx.r1.u32 + -212, ctx.r11.u8);
	// stb r11,-211(r1)
	PPC_STORE_U8(ctx.r1.u32 + -211, ctx.r11.u8);
	// stb r11,-210(r1)
	PPC_STORE_U8(ctx.r1.u32 + -210, ctx.r11.u8);
	// stb r11,-209(r1)
	PPC_STORE_U8(ctx.r1.u32 + -209, ctx.r11.u8);
	// stb r9,-208(r1)
	PPC_STORE_U8(ctx.r1.u32 + -208, ctx.r9.u8);
	// stb r10,-207(r1)
	PPC_STORE_U8(ctx.r1.u32 + -207, ctx.r10.u8);
	// stb r7,-204(r1)
	PPC_STORE_U8(ctx.r1.u32 + -204, ctx.r7.u8);
	// stb r8,-201(r1)
	PPC_STORE_U8(ctx.r1.u32 + -201, ctx.r8.u8);
	// stb r6,-200(r1)
	PPC_STORE_U8(ctx.r1.u32 + -200, ctx.r6.u8);
	// stb r5,-199(r1)
	PPC_STORE_U8(ctx.r1.u32 + -199, ctx.r5.u8);
	// stb r11,-198(r1)
	PPC_STORE_U8(ctx.r1.u32 + -198, ctx.r11.u8);
	// stb r11,-197(r1)
	PPC_STORE_U8(ctx.r1.u32 + -197, ctx.r11.u8);
	// stb r11,-196(r1)
	PPC_STORE_U8(ctx.r1.u32 + -196, ctx.r11.u8);
	// stb r11,-195(r1)
	PPC_STORE_U8(ctx.r1.u32 + -195, ctx.r11.u8);
	// stb r11,-194(r1)
	PPC_STORE_U8(ctx.r1.u32 + -194, ctx.r11.u8);
	// stb r11,-193(r1)
	PPC_STORE_U8(ctx.r1.u32 + -193, ctx.r11.u8);
	// stb r11,-192(r1)
	PPC_STORE_U8(ctx.r1.u32 + -192, ctx.r11.u8);
	// stb r11,-191(r1)
	PPC_STORE_U8(ctx.r1.u32 + -191, ctx.r11.u8);
	// stb r11,-190(r1)
	PPC_STORE_U8(ctx.r1.u32 + -190, ctx.r11.u8);
	// stb r11,-189(r1)
	PPC_STORE_U8(ctx.r1.u32 + -189, ctx.r11.u8);
	// stb r11,-188(r1)
	PPC_STORE_U8(ctx.r1.u32 + -188, ctx.r11.u8);
	// stb r11,-187(r1)
	PPC_STORE_U8(ctx.r1.u32 + -187, ctx.r11.u8);
	// stb r10,-181(r1)
	PPC_STORE_U8(ctx.r1.u32 + -181, ctx.r10.u8);
	// li r8,10
	ctx.r8.s64 = 10;
	// stb r10,-173(r1)
	PPC_STORE_U8(ctx.r1.u32 + -173, ctx.r10.u8);
	// stb r10,-161(r1)
	PPC_STORE_U8(ctx.r1.u32 + -161, ctx.r10.u8);
	// stb r10,-155(r1)
	PPC_STORE_U8(ctx.r1.u32 + -155, ctx.r10.u8);
	// stb r10,-148(r1)
	PPC_STORE_U8(ctx.r1.u32 + -148, ctx.r10.u8);
	// stb r10,-146(r1)
	PPC_STORE_U8(ctx.r1.u32 + -146, ctx.r10.u8);
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r11,-186(r1)
	PPC_STORE_U8(ctx.r1.u32 + -186, ctx.r11.u8);
	// stb r11,-185(r1)
	PPC_STORE_U8(ctx.r1.u32 + -185, ctx.r11.u8);
	// stb r11,-184(r1)
	PPC_STORE_U8(ctx.r1.u32 + -184, ctx.r11.u8);
	// stb r11,-183(r1)
	PPC_STORE_U8(ctx.r1.u32 + -183, ctx.r11.u8);
	// stb r11,-182(r1)
	PPC_STORE_U8(ctx.r1.u32 + -182, ctx.r11.u8);
	// stb r11,-180(r1)
	PPC_STORE_U8(ctx.r1.u32 + -180, ctx.r11.u8);
	// stb r9,-179(r1)
	PPC_STORE_U8(ctx.r1.u32 + -179, ctx.r9.u8);
	// stb r11,-178(r1)
	PPC_STORE_U8(ctx.r1.u32 + -178, ctx.r11.u8);
	// stb r11,-177(r1)
	PPC_STORE_U8(ctx.r1.u32 + -177, ctx.r11.u8);
	// stb r11,-176(r1)
	PPC_STORE_U8(ctx.r1.u32 + -176, ctx.r11.u8);
	// stb r11,-175(r1)
	PPC_STORE_U8(ctx.r1.u32 + -175, ctx.r11.u8);
	// stb r11,-174(r1)
	PPC_STORE_U8(ctx.r1.u32 + -174, ctx.r11.u8);
	// stb r11,-172(r1)
	PPC_STORE_U8(ctx.r1.u32 + -172, ctx.r11.u8);
	// stb r11,-171(r1)
	PPC_STORE_U8(ctx.r1.u32 + -171, ctx.r11.u8);
	// stb r11,-170(r1)
	PPC_STORE_U8(ctx.r1.u32 + -170, ctx.r11.u8);
	// stb r11,-169(r1)
	PPC_STORE_U8(ctx.r1.u32 + -169, ctx.r11.u8);
	// stb r11,-168(r1)
	PPC_STORE_U8(ctx.r1.u32 + -168, ctx.r11.u8);
	// stb r11,-167(r1)
	PPC_STORE_U8(ctx.r1.u32 + -167, ctx.r11.u8);
	// stb r11,-166(r1)
	PPC_STORE_U8(ctx.r1.u32 + -166, ctx.r11.u8);
	// stb r11,-165(r1)
	PPC_STORE_U8(ctx.r1.u32 + -165, ctx.r11.u8);
	// stb r11,-164(r1)
	PPC_STORE_U8(ctx.r1.u32 + -164, ctx.r11.u8);
	// stb r11,-163(r1)
	PPC_STORE_U8(ctx.r1.u32 + -163, ctx.r11.u8);
	// stb r11,-162(r1)
	PPC_STORE_U8(ctx.r1.u32 + -162, ctx.r11.u8);
	// stb r11,-160(r1)
	PPC_STORE_U8(ctx.r1.u32 + -160, ctx.r11.u8);
	// stb r11,-159(r1)
	PPC_STORE_U8(ctx.r1.u32 + -159, ctx.r11.u8);
	// stb r8,-158(r1)
	PPC_STORE_U8(ctx.r1.u32 + -158, ctx.r8.u8);
	// stb r11,-157(r1)
	PPC_STORE_U8(ctx.r1.u32 + -157, ctx.r11.u8);
	// stb r11,-156(r1)
	PPC_STORE_U8(ctx.r1.u32 + -156, ctx.r11.u8);
	// stb r11,-154(r1)
	PPC_STORE_U8(ctx.r1.u32 + -154, ctx.r11.u8);
	// stb r8,-153(r1)
	PPC_STORE_U8(ctx.r1.u32 + -153, ctx.r8.u8);
	// stb r11,-152(r1)
	PPC_STORE_U8(ctx.r1.u32 + -152, ctx.r11.u8);
	// stb r11,-151(r1)
	PPC_STORE_U8(ctx.r1.u32 + -151, ctx.r11.u8);
	// stb r11,-150(r1)
	PPC_STORE_U8(ctx.r1.u32 + -150, ctx.r11.u8);
	// stb r11,-149(r1)
	PPC_STORE_U8(ctx.r1.u32 + -149, ctx.r11.u8);
	// stb r11,-147(r1)
	PPC_STORE_U8(ctx.r1.u32 + -147, ctx.r11.u8);
	// stb r11,-145(r1)
	PPC_STORE_U8(ctx.r1.u32 + -145, ctx.r11.u8);
	// stb r11,-144(r1)
	PPC_STORE_U8(ctx.r1.u32 + -144, ctx.r11.u8);
	// stb r11,-143(r1)
	PPC_STORE_U8(ctx.r1.u32 + -143, ctx.r11.u8);
	// stb r9,-142(r1)
	PPC_STORE_U8(ctx.r1.u32 + -142, ctx.r9.u8);
	// stb r7,-141(r1)
	PPC_STORE_U8(ctx.r1.u32 + -141, ctx.r7.u8);
	// stb r10,-140(r1)
	PPC_STORE_U8(ctx.r1.u32 + -140, ctx.r10.u8);
	// stb r11,-139(r1)
	PPC_STORE_U8(ctx.r1.u32 + -139, ctx.r11.u8);
	// stb r11,-138(r1)
	PPC_STORE_U8(ctx.r1.u32 + -138, ctx.r11.u8);
	// stb r11,-137(r1)
	PPC_STORE_U8(ctx.r1.u32 + -137, ctx.r11.u8);
	// stb r11,-136(r1)
	PPC_STORE_U8(ctx.r1.u32 + -136, ctx.r11.u8);
	// stb r11,-135(r1)
	PPC_STORE_U8(ctx.r1.u32 + -135, ctx.r11.u8);
	// stb r11,-134(r1)
	PPC_STORE_U8(ctx.r1.u32 + -134, ctx.r11.u8);
	// stb r11,-133(r1)
	PPC_STORE_U8(ctx.r1.u32 + -133, ctx.r11.u8);
	// stb r11,-132(r1)
	PPC_STORE_U8(ctx.r1.u32 + -132, ctx.r11.u8);
	// stb r11,-131(r1)
	PPC_STORE_U8(ctx.r1.u32 + -131, ctx.r11.u8);
	// stb r11,-130(r1)
	PPC_STORE_U8(ctx.r1.u32 + -130, ctx.r11.u8);
	// stb r11,-129(r1)
	PPC_STORE_U8(ctx.r1.u32 + -129, ctx.r11.u8);
	// stb r11,-128(r1)
	PPC_STORE_U8(ctx.r1.u32 + -128, ctx.r11.u8);
	// stb r11,-127(r1)
	PPC_STORE_U8(ctx.r1.u32 + -127, ctx.r11.u8);
	// stb r11,-126(r1)
	PPC_STORE_U8(ctx.r1.u32 + -126, ctx.r11.u8);
	// stb r11,-125(r1)
	PPC_STORE_U8(ctx.r1.u32 + -125, ctx.r11.u8);
	// stb r11,-124(r1)
	PPC_STORE_U8(ctx.r1.u32 + -124, ctx.r11.u8);
	// stb r11,-123(r1)
	PPC_STORE_U8(ctx.r1.u32 + -123, ctx.r11.u8);
	// stb r11,-122(r1)
	PPC_STORE_U8(ctx.r1.u32 + -122, ctx.r11.u8);
	// stb r11,-121(r1)
	PPC_STORE_U8(ctx.r1.u32 + -121, ctx.r11.u8);
	// stb r11,-120(r1)
	PPC_STORE_U8(ctx.r1.u32 + -120, ctx.r11.u8);
	// stb r11,-119(r1)
	PPC_STORE_U8(ctx.r1.u32 + -119, ctx.r11.u8);
	// stb r11,-118(r1)
	PPC_STORE_U8(ctx.r1.u32 + -118, ctx.r11.u8);
	// stb r11,-117(r1)
	PPC_STORE_U8(ctx.r1.u32 + -117, ctx.r11.u8);
	// stb r11,-116(r1)
	PPC_STORE_U8(ctx.r1.u32 + -116, ctx.r11.u8);
	// stb r11,-115(r1)
	PPC_STORE_U8(ctx.r1.u32 + -115, ctx.r11.u8);
	// stb r11,-114(r1)
	PPC_STORE_U8(ctx.r1.u32 + -114, ctx.r11.u8);
	// stb r11,-113(r1)
	PPC_STORE_U8(ctx.r1.u32 + -113, ctx.r11.u8);
	// stb r11,-112(r1)
	PPC_STORE_U8(ctx.r1.u32 + -112, ctx.r11.u8);
	// stb r11,-111(r1)
	PPC_STORE_U8(ctx.r1.u32 + -111, ctx.r11.u8);
	// stb r11,-110(r1)
	PPC_STORE_U8(ctx.r1.u32 + -110, ctx.r11.u8);
	// stb r11,-109(r1)
	PPC_STORE_U8(ctx.r1.u32 + -109, ctx.r11.u8);
	// stb r11,-108(r1)
	PPC_STORE_U8(ctx.r1.u32 + -108, ctx.r11.u8);
	// stb r11,-107(r1)
	PPC_STORE_U8(ctx.r1.u32 + -107, ctx.r11.u8);
	// stb r11,-106(r1)
	PPC_STORE_U8(ctx.r1.u32 + -106, ctx.r11.u8);
	// stb r11,-105(r1)
	PPC_STORE_U8(ctx.r1.u32 + -105, ctx.r11.u8);
	// stb r11,-104(r1)
	PPC_STORE_U8(ctx.r1.u32 + -104, ctx.r11.u8);
	// stb r11,-103(r1)
	PPC_STORE_U8(ctx.r1.u32 + -103, ctx.r11.u8);
	// stb r11,-102(r1)
	PPC_STORE_U8(ctx.r1.u32 + -102, ctx.r11.u8);
	// stb r11,-101(r1)
	PPC_STORE_U8(ctx.r1.u32 + -101, ctx.r11.u8);
	// stb r11,-100(r1)
	PPC_STORE_U8(ctx.r1.u32 + -100, ctx.r11.u8);
	// stb r11,-99(r1)
	PPC_STORE_U8(ctx.r1.u32 + -99, ctx.r11.u8);
	// stb r11,-98(r1)
	PPC_STORE_U8(ctx.r1.u32 + -98, ctx.r11.u8);
	// stb r11,-97(r1)
	PPC_STORE_U8(ctx.r1.u32 + -97, ctx.r11.u8);
	// stb r11,-96(r1)
	PPC_STORE_U8(ctx.r1.u32 + -96, ctx.r11.u8);
	// stb r11,-95(r1)
	PPC_STORE_U8(ctx.r1.u32 + -95, ctx.r11.u8);
	// stb r11,-94(r1)
	PPC_STORE_U8(ctx.r1.u32 + -94, ctx.r11.u8);
	// stb r11,-93(r1)
	PPC_STORE_U8(ctx.r1.u32 + -93, ctx.r11.u8);
	// stb r11,-92(r1)
	PPC_STORE_U8(ctx.r1.u32 + -92, ctx.r11.u8);
	// stb r11,-91(r1)
	PPC_STORE_U8(ctx.r1.u32 + -91, ctx.r11.u8);
	// stb r11,-90(r1)
	PPC_STORE_U8(ctx.r1.u32 + -90, ctx.r11.u8);
	// stb r11,-89(r1)
	PPC_STORE_U8(ctx.r1.u32 + -89, ctx.r11.u8);
	// stb r11,-88(r1)
	PPC_STORE_U8(ctx.r1.u32 + -88, ctx.r11.u8);
	// stb r11,-87(r1)
	PPC_STORE_U8(ctx.r1.u32 + -87, ctx.r11.u8);
	// stb r11,-86(r1)
	PPC_STORE_U8(ctx.r1.u32 + -86, ctx.r11.u8);
	// stb r11,-85(r1)
	PPC_STORE_U8(ctx.r1.u32 + -85, ctx.r11.u8);
	// stb r11,-84(r1)
	PPC_STORE_U8(ctx.r1.u32 + -84, ctx.r11.u8);
	// stb r11,-83(r1)
	PPC_STORE_U8(ctx.r1.u32 + -83, ctx.r11.u8);
	// stb r11,-82(r1)
	PPC_STORE_U8(ctx.r1.u32 + -82, ctx.r11.u8);
	// stb r11,-81(r1)
	PPC_STORE_U8(ctx.r1.u32 + -81, ctx.r11.u8);
	// stb r11,-80(r1)
	PPC_STORE_U8(ctx.r1.u32 + -80, ctx.r11.u8);
	// stb r11,-79(r1)
	PPC_STORE_U8(ctx.r1.u32 + -79, ctx.r11.u8);
	// stb r11,-78(r1)
	PPC_STORE_U8(ctx.r1.u32 + -78, ctx.r11.u8);
	// stb r11,-77(r1)
	PPC_STORE_U8(ctx.r1.u32 + -77, ctx.r11.u8);
	// stb r11,-76(r1)
	PPC_STORE_U8(ctx.r1.u32 + -76, ctx.r11.u8);
	// stb r11,-75(r1)
	PPC_STORE_U8(ctx.r1.u32 + -75, ctx.r11.u8);
	// stb r11,-74(r1)
	PPC_STORE_U8(ctx.r1.u32 + -74, ctx.r11.u8);
	// stb r11,-73(r1)
	PPC_STORE_U8(ctx.r1.u32 + -73, ctx.r11.u8);
	// stb r11,-72(r1)
	PPC_STORE_U8(ctx.r1.u32 + -72, ctx.r11.u8);
	// stb r11,-71(r1)
	PPC_STORE_U8(ctx.r1.u32 + -71, ctx.r11.u8);
	// stb r11,-70(r1)
	PPC_STORE_U8(ctx.r1.u32 + -70, ctx.r11.u8);
	// stb r11,-69(r1)
	PPC_STORE_U8(ctx.r1.u32 + -69, ctx.r11.u8);
	// stb r11,-68(r1)
	PPC_STORE_U8(ctx.r1.u32 + -68, ctx.r11.u8);
	// stb r11,-67(r1)
	PPC_STORE_U8(ctx.r1.u32 + -67, ctx.r11.u8);
	// stb r11,-66(r1)
	PPC_STORE_U8(ctx.r1.u32 + -66, ctx.r11.u8);
	// stb r11,-65(r1)
	PPC_STORE_U8(ctx.r1.u32 + -65, ctx.r11.u8);
	// stb r11,-64(r1)
	PPC_STORE_U8(ctx.r1.u32 + -64, ctx.r11.u8);
	// stb r11,-63(r1)
	PPC_STORE_U8(ctx.r1.u32 + -63, ctx.r11.u8);
	// stb r11,-62(r1)
	PPC_STORE_U8(ctx.r1.u32 + -62, ctx.r11.u8);
	// stb r11,-61(r1)
	PPC_STORE_U8(ctx.r1.u32 + -61, ctx.r11.u8);
	// stb r11,-60(r1)
	PPC_STORE_U8(ctx.r1.u32 + -60, ctx.r11.u8);
	// stb r11,-59(r1)
	PPC_STORE_U8(ctx.r1.u32 + -59, ctx.r11.u8);
	// stb r11,-58(r1)
	PPC_STORE_U8(ctx.r1.u32 + -58, ctx.r11.u8);
	// stb r11,-57(r1)
	PPC_STORE_U8(ctx.r1.u32 + -57, ctx.r11.u8);
	// stb r11,-56(r1)
	PPC_STORE_U8(ctx.r1.u32 + -56, ctx.r11.u8);
	// stb r11,-55(r1)
	PPC_STORE_U8(ctx.r1.u32 + -55, ctx.r11.u8);
	// stb r11,-54(r1)
	PPC_STORE_U8(ctx.r1.u32 + -54, ctx.r11.u8);
	// stb r11,-53(r1)
	PPC_STORE_U8(ctx.r1.u32 + -53, ctx.r11.u8);
	// stb r11,-52(r1)
	PPC_STORE_U8(ctx.r1.u32 + -52, ctx.r11.u8);
	// stb r11,-51(r1)
	PPC_STORE_U8(ctx.r1.u32 + -51, ctx.r11.u8);
	// stb r11,-50(r1)
	PPC_STORE_U8(ctx.r1.u32 + -50, ctx.r11.u8);
	// stb r11,-49(r1)
	PPC_STORE_U8(ctx.r1.u32 + -49, ctx.r11.u8);
	// stb r11,-48(r1)
	PPC_STORE_U8(ctx.r1.u32 + -48, ctx.r11.u8);
	// stb r11,-47(r1)
	PPC_STORE_U8(ctx.r1.u32 + -47, ctx.r11.u8);
	// stb r11,-46(r1)
	PPC_STORE_U8(ctx.r1.u32 + -46, ctx.r11.u8);
	// stb r11,-45(r1)
	PPC_STORE_U8(ctx.r1.u32 + -45, ctx.r11.u8);
	// stb r11,-44(r1)
	PPC_STORE_U8(ctx.r1.u32 + -44, ctx.r11.u8);
	// stb r11,-43(r1)
	PPC_STORE_U8(ctx.r1.u32 + -43, ctx.r11.u8);
	// stb r11,-42(r1)
	PPC_STORE_U8(ctx.r1.u32 + -42, ctx.r11.u8);
	// stb r11,-41(r1)
	PPC_STORE_U8(ctx.r1.u32 + -41, ctx.r11.u8);
	// stb r11,-40(r1)
	PPC_STORE_U8(ctx.r1.u32 + -40, ctx.r11.u8);
	// stb r11,-39(r1)
	PPC_STORE_U8(ctx.r1.u32 + -39, ctx.r11.u8);
	// stb r11,-38(r1)
	PPC_STORE_U8(ctx.r1.u32 + -38, ctx.r11.u8);
	// stb r11,-37(r1)
	PPC_STORE_U8(ctx.r1.u32 + -37, ctx.r11.u8);
	// stb r11,-36(r1)
	PPC_STORE_U8(ctx.r1.u32 + -36, ctx.r11.u8);
	// stb r11,-35(r1)
	PPC_STORE_U8(ctx.r1.u32 + -35, ctx.r11.u8);
	// stb r11,-34(r1)
	PPC_STORE_U8(ctx.r1.u32 + -34, ctx.r11.u8);
	// stb r11,-33(r1)
	PPC_STORE_U8(ctx.r1.u32 + -33, ctx.r11.u8);
	// stb r11,-32(r1)
	PPC_STORE_U8(ctx.r1.u32 + -32, ctx.r11.u8);
	// stb r11,-31(r1)
	PPC_STORE_U8(ctx.r1.u32 + -31, ctx.r11.u8);
	// stb r11,-30(r1)
	PPC_STORE_U8(ctx.r1.u32 + -30, ctx.r11.u8);
	// stb r11,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r11.u8);
	// stb r11,-28(r1)
	PPC_STORE_U8(ctx.r1.u32 + -28, ctx.r11.u8);
	// stb r11,-27(r1)
	PPC_STORE_U8(ctx.r1.u32 + -27, ctx.r11.u8);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// stb r11,-26(r1)
	PPC_STORE_U8(ctx.r1.u32 + -26, ctx.r11.u8);
	// stb r11,-25(r1)
	PPC_STORE_U8(ctx.r1.u32 + -25, ctx.r11.u8);
	// stb r11,-24(r1)
	PPC_STORE_U8(ctx.r1.u32 + -24, ctx.r11.u8);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// stb r11,-23(r1)
	PPC_STORE_U8(ctx.r1.u32 + -23, ctx.r11.u8);
	// stb r11,-22(r1)
	PPC_STORE_U8(ctx.r1.u32 + -22, ctx.r11.u8);
	// stb r11,-21(r1)
	PPC_STORE_U8(ctx.r1.u32 + -21, ctx.r11.u8);
	// stb r11,-20(r1)
	PPC_STORE_U8(ctx.r1.u32 + -20, ctx.r11.u8);
	// stb r11,-19(r1)
	PPC_STORE_U8(ctx.r1.u32 + -19, ctx.r11.u8);
	// stb r11,-18(r1)
	PPC_STORE_U8(ctx.r1.u32 + -18, ctx.r11.u8);
	// stb r11,-17(r1)
	PPC_STORE_U8(ctx.r1.u32 + -17, ctx.r11.u8);
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// stb r11,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r11.u8);
	// stb r11,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r11.u8);
	// stb r11,-10(r1)
	PPC_STORE_U8(ctx.r1.u32 + -10, ctx.r11.u8);
	// stb r11,-9(r1)
	PPC_STORE_U8(ctx.r1.u32 + -9, ctx.r11.u8);
	// stb r11,-8(r1)
	PPC_STORE_U8(ctx.r1.u32 + -8, ctx.r11.u8);
	// stb r11,-7(r1)
	PPC_STORE_U8(ctx.r1.u32 + -7, ctx.r11.u8);
	// stb r11,-6(r1)
	PPC_STORE_U8(ctx.r1.u32 + -6, ctx.r11.u8);
	// stb r11,-5(r1)
	PPC_STORE_U8(ctx.r1.u32 + -5, ctx.r11.u8);
	// stb r11,-4(r1)
	PPC_STORE_U8(ctx.r1.u32 + -4, ctx.r11.u8);
	// stb r11,-3(r1)
	PPC_STORE_U8(ctx.r1.u32 + -3, ctx.r11.u8);
	// stb r11,-2(r1)
	PPC_STORE_U8(ctx.r1.u32 + -2, ctx.r11.u8);
	// stb r11,-1(r1)
	PPC_STORE_U8(ctx.r1.u32 + -1, ctx.r11.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bgt cr6,0x8242c4dc
	if (ctx.cr6.gt) {
		// ERROR 8242C4DC
		return;
	}
	// lis r12,-32189
	ctx.r12.s64 = -2109538304;
	// addi r12,r12,-15164
	ctx.r12.s64 = ctx.r12.s64 + -15164;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x8242C4FC
		return;
	case 1:
		// ERROR: 0x8242C4FC
		return;
	case 2:
		// ERROR: 0x8242C4FC
		return;
	case 3:
		// ERROR: 0x8242C4FC
		return;
	case 4:
		// ERROR: 0x8242C4EC
		return;
	case 5:
		// ERROR: 0x8242C4EC
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8242C4C4"))) PPC_WEAK_FUNC(sub_8242C4C4);
PPC_FUNC_IMPL(__imp__sub_8242C4C4) {
	PPC_FUNC_PROLOGUE();
	// lwz r18,-15108(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -15108);
	// lwz r18,-15108(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -15108);
	// lwz r18,-15108(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -15108);
	// lwz r18,-15108(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -15108);
	// lwz r18,-15124(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -15124);
	// lwz r18,-15124(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -15124);
	// lbz r9,6(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// addi r8,r1,-256
	ctx.r8.s64 = ctx.r1.s64 + -256;
	// lbzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// addi r6,r1,-256
	ctx.r6.s64 = ctx.r1.s64 + -256;
	// lbzx r10,r7,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r4,r1,-256
	ctx.r4.s64 = ctx.r1.s64 + -256;
	// lbzx r10,r5,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242C510"))) PPC_WEAK_FUNC(sub_8242C510);
PPC_FUNC_IMPL(__imp__sub_8242C510) {
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
	// addi r11,r4,-3
	ctx.r11.s64 = ctx.r4.s64 + -3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8242c660
	if (ctx.cr6.gt) goto loc_8242C660;
	// bl 0x8242c068
	ctx.lr = 0x8242C534;
	sub_8242C068(ctx, base);
	// cmplwi cr6,r3,37
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 37, ctx.xer);
	// bgt cr6,0x8242c660
	if (ctx.cr6.gt) goto loc_8242C660;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r10,r11,8176
	ctx.r10.s64 = ctx.r11.s64 + 8176;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8242c5c0
	if (ctx.cr6.lt) goto loc_8242C5C0;
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,7880
	ctx.r10.s64 = ctx.r10.s64 + 7880;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8242c660
	if (!ctx.cr6.eq) goto loc_8242C660;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
loc_8242C580:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r6,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x8242c5a4
	if (ctx.cr6.eq) goto loc_8242C5A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8242c580
	if (ctx.cr6.eq) goto loc_8242C580;
loc_8242C5A4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8242c660
	if (!ctx.cr6.eq) goto loc_8242C660;
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
loc_8242C5C0:
	// cmpwi cr6,r11,-37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -37, ctx.xer);
	// bge cr6,0x8242c660
	if (!ctx.cr6.lt) goto loc_8242C660;
	// subfic r11,r11,-38
	ctx.xer.ca = ctx.r11.u32 <= 4294967258;
	ctx.r11.s64 = -38 - ctx.r11.s64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// addi r9,r9,7880
	ctx.r9.s64 = ctx.r9.s64 + 7880;
	// lbzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r3,r11,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// addi r9,r9,296
	ctx.r9.s64 = ctx.r9.s64 + 296;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8242c660
	if (!ctx.cr6.lt) goto loc_8242C660;
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
loc_8242C60C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8242c654
	if (!ctx.cr6.eq) goto loc_8242C654;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
loc_8242C628:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8242c64c
	if (ctx.cr6.eq) goto loc_8242C64C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8242c628
	if (ctx.cr6.eq) goto loc_8242C628;
loc_8242C64C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8242c664
	if (ctx.cr6.eq) goto loc_8242C664;
loc_8242C654:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8242c60c
	if (ctx.cr6.lt) goto loc_8242C60C;
loc_8242C660:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242C664:
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

__attribute__((alias("__imp__sub_8242C678"))) PPC_WEAK_FUNC(sub_8242C678);
PPC_FUNC_IMPL(__imp__sub_8242C678) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x8242c69c
	if (!ctx.cr6.eq) goto loc_8242C69C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8242C69C:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8242c850
	if (!ctx.cr6.eq) goto loc_8242C850;
	// rlwinm r11,r11,25,0,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xFE000000;
	// srawi r10,r11,25
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 25;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bgt cr6,0x8242c83c
	if (ctx.cr6.gt) goto loc_8242C83C;
	// lis r12,-32189
	ctx.r12.s64 = -2109538304;
	// addi r12,r12,-14628
	ctx.r12.s64 = ctx.r12.s64 + -14628;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8242C784;
	case 1:
		goto loc_8242C83C;
	case 2:
		goto loc_8242C83C;
	case 3:
		goto loc_8242C83C;
	case 4:
		goto loc_8242C7F0;
	case 5:
		goto loc_8242C818;
	case 6:
		goto loc_8242C804;
	case 7:
		goto loc_8242C83C;
	case 8:
		goto loc_8242C83C;
	case 9:
		goto loc_8242C83C;
	case 10:
		goto loc_8242C83C;
	case 11:
		goto loc_8242C83C;
	case 12:
		goto loc_8242C83C;
	case 13:
		goto loc_8242C83C;
	case 14:
		goto loc_8242C83C;
	case 15:
		goto loc_8242C83C;
	case 16:
		goto loc_8242C83C;
	case 17:
		goto loc_8242C83C;
	case 18:
		goto loc_8242C83C;
	case 19:
		goto loc_8242C83C;
	case 20:
		goto loc_8242C83C;
	case 21:
		goto loc_8242C83C;
	case 22:
		goto loc_8242C83C;
	case 23:
		goto loc_8242C83C;
	case 24:
		goto loc_8242C83C;
	case 25:
		goto loc_8242C83C;
	case 26:
		goto loc_8242C83C;
	case 27:
		goto loc_8242C83C;
	case 28:
		goto loc_8242C83C;
	case 29:
		goto loc_8242C83C;
	case 30:
		goto loc_8242C83C;
	case 31:
		goto loc_8242C83C;
	case 32:
		goto loc_8242C83C;
	case 33:
		goto loc_8242C83C;
	case 34:
		goto loc_8242C83C;
	case 35:
		goto loc_8242C83C;
	case 36:
		goto loc_8242C83C;
	case 37:
		goto loc_8242C83C;
	case 38:
		goto loc_8242C83C;
	case 39:
		goto loc_8242C83C;
	case 40:
		goto loc_8242C83C;
	case 41:
		goto loc_8242C784;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-14460(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14460);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14352(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14352);
	// lwz r18,-14312(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14312);
	// lwz r18,-14332(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14332);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14276(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14276);
	// lwz r18,-14460(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -14460);
loc_8242C784:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8242c790
	if (ctx.cr6.eq) goto loc_8242C790;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_8242C790:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// ble cr6,0x8242c7d8
	if (!ctx.cr6.gt) goto loc_8242C7D8;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,48
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 48, ctx.xer);
	// bne cr6,0x8242c7d8
	if (!ctx.cr6.eq) goto loc_8242C7D8;
	// lbz r8,1(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r8,120
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 120, ctx.xer);
	// bne cr6,0x8242c7d8
	if (!ctx.cr6.eq) goto loc_8242C7D8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a0fc8
	ctx.lr = 0x8242C7C8;
	sub_825A0FC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8242C7D8:
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8259dbd0
	ctx.lr = 0x8242C7E0;
	sub_8259DBD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8242C7F0:
	// lbz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8242C804:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8242C818:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// li r12,80
	ctx.r12.s64 = 80;
	// stfiwx f13,r1,r12
	PPC_STORE_U32(ctx.r1.u32 + ctx.r12.u32, ctx.f13.u32);
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
loc_8242C83C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-26376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26376);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8242c854
	if (!ctx.cr6.eq) goto loc_8242C854;
loc_8242C850:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242C854:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242C864"))) PPC_WEAK_FUNC(sub_8242C864);
PPC_FUNC_IMPL(__imp__sub_8242C864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242C868"))) PPC_WEAK_FUNC(sub_8242C868);
PPC_FUNC_IMPL(__imp__sub_8242C868) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x8242c88c
	if (!ctx.cr6.eq) goto loc_8242C88C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8242C88C:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8242ca28
	if (!ctx.cr6.eq) goto loc_8242CA28;
	// rlwinm r11,r11,25,0,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xFE000000;
	// srawi r10,r11,25
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 25;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bgt cr6,0x8242ca00
	if (ctx.cr6.gt) goto loc_8242CA00;
	// lis r12,-32189
	ctx.r12.s64 = -2109538304;
	// addi r12,r12,-14132
	ctx.r12.s64 = ctx.r12.s64 + -14132;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8242C974;
	case 1:
		goto loc_8242CA00;
	case 2:
		goto loc_8242CA00;
	case 3:
		goto loc_8242CA00;
	case 4:
		goto loc_8242C9A0;
	case 5:
		goto loc_8242C9EC;
	case 6:
		goto loc_8242C9C4;
	case 7:
		goto loc_8242CA00;
	case 8:
		goto loc_8242CA00;
	case 9:
		goto loc_8242CA00;
	case 10:
		goto loc_8242CA00;
	case 11:
		goto loc_8242CA00;
	case 12:
		goto loc_8242CA00;
	case 13:
		goto loc_8242CA00;
	case 14:
		goto loc_8242CA00;
	case 15:
		goto loc_8242CA00;
	case 16:
		goto loc_8242CA00;
	case 17:
		goto loc_8242CA00;
	case 18:
		goto loc_8242CA00;
	case 19:
		goto loc_8242CA00;
	case 20:
		goto loc_8242CA00;
	case 21:
		goto loc_8242CA00;
	case 22:
		goto loc_8242CA00;
	case 23:
		goto loc_8242CA00;
	case 24:
		goto loc_8242CA00;
	case 25:
		goto loc_8242CA00;
	case 26:
		goto loc_8242CA00;
	case 27:
		goto loc_8242CA00;
	case 28:
		goto loc_8242CA00;
	case 29:
		goto loc_8242CA00;
	case 30:
		goto loc_8242CA00;
	case 31:
		goto loc_8242CA00;
	case 32:
		goto loc_8242CA00;
	case 33:
		goto loc_8242CA00;
	case 34:
		goto loc_8242CA00;
	case 35:
		goto loc_8242CA00;
	case 36:
		goto loc_8242CA00;
	case 37:
		goto loc_8242CA00;
	case 38:
		goto loc_8242CA00;
	case 39:
		goto loc_8242CA00;
	case 40:
		goto loc_8242CA00;
	case 41:
		goto loc_8242C974;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-13964(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13964);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13920(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13920);
	// lwz r18,-13844(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13844);
	// lwz r18,-13884(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13884);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13824(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13824);
	// lwz r18,-13964(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13964);
loc_8242C974:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// beq cr6,0x8242c984
	if (ctx.cr6.eq) goto loc_8242C984;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
loc_8242C984:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82427108
	ctx.lr = 0x8242C990;
	sub_82427108(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8242C9A0:
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8242ca28
	if (ctx.cr6.eq) goto loc_8242CA28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8242C9C4:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8242C9EC:
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8242CA00:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-26376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26376);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8242ca28
	if (ctx.cr6.eq) goto loc_8242CA28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8242CA28:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242CA40"))) PPC_WEAK_FUNC(sub_8242CA40);
PPC_FUNC_IMPL(__imp__sub_8242CA40) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,25,0,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xFE000000;
	// srawi r11,r10,25
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 25;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bgt cr6,0x8242cc48
	if (ctx.cr6.gt) goto loc_8242CC48;
	// lis r12,-32189
	ctx.r12.s64 = -2109538304;
	// addi r12,r12,-13692
	ctx.r12.s64 = ctx.r12.s64 + -13692;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8242CB2C;
	case 1:
		goto loc_8242CC48;
	case 2:
		goto loc_8242CC48;
	case 3:
		goto loc_8242CC48;
	case 4:
		goto loc_8242CC10;
	case 5:
		goto loc_8242CC34;
	case 6:
		goto loc_8242CC28;
	case 7:
		goto loc_8242CC48;
	case 8:
		goto loc_8242CC48;
	case 9:
		goto loc_8242CC48;
	case 10:
		goto loc_8242CC48;
	case 11:
		goto loc_8242CC48;
	case 12:
		goto loc_8242CC48;
	case 13:
		goto loc_8242CC48;
	case 14:
		goto loc_8242CC48;
	case 15:
		goto loc_8242CC48;
	case 16:
		goto loc_8242CC48;
	case 17:
		goto loc_8242CC48;
	case 18:
		goto loc_8242CC48;
	case 19:
		goto loc_8242CC48;
	case 20:
		goto loc_8242CC48;
	case 21:
		goto loc_8242CC48;
	case 22:
		goto loc_8242CC48;
	case 23:
		goto loc_8242CC48;
	case 24:
		goto loc_8242CC48;
	case 25:
		goto loc_8242CC48;
	case 26:
		goto loc_8242CC48;
	case 27:
		goto loc_8242CC48;
	case 28:
		goto loc_8242CC48;
	case 29:
		goto loc_8242CC48;
	case 30:
		goto loc_8242CC48;
	case 31:
		goto loc_8242CC48;
	case 32:
		goto loc_8242CC48;
	case 33:
		goto loc_8242CC48;
	case 34:
		goto loc_8242CC48;
	case 35:
		goto loc_8242CC48;
	case 36:
		goto loc_8242CC48;
	case 37:
		goto loc_8242CC48;
	case 38:
		goto loc_8242CC48;
	case 39:
		goto loc_8242CC48;
	case 40:
		goto loc_8242CC48;
	case 41:
		goto loc_8242CB2C;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-13524(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13524);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13296(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13296);
	// lwz r18,-13260(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13260);
	// lwz r18,-13272(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13272);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13240(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13240);
	// lwz r18,-13524(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -13524);
loc_8242CB2C:
	// bl 0x82427278
	ctx.lr = 0x8242CB30;
	sub_82427278(ctx, base);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x8242cb8c
	if (!ctx.cr6.eq) goto loc_8242CB8C;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8242cb4c
	if (ctx.cr6.eq) goto loc_8242CB4C;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_8242CB4C:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8242cb68
	if (ctx.cr6.eq) goto loc_8242CB68;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242CB68:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
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
loc_8242CB8C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,25,0,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xFE000000;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// srawi r10,r10,25
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 25;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8242cba8
	if (ctx.cr6.eq) goto loc_8242CBA8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_8242CBA8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// ble cr6,0x8242cbe8
	if (!ctx.cr6.gt) goto loc_8242CBE8;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,48
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 48, ctx.xer);
	// bne cr6,0x8242cbe8
	if (!ctx.cr6.eq) goto loc_8242CBE8;
	// lbz r7,1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r7,120
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 120, ctx.xer);
	// bne cr6,0x8242cbe8
	if (!ctx.cr6.eq) goto loc_8242CBE8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825a0fc8
	ctx.lr = 0x8242CBE0;
	sub_825A0FC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// b 0x8242cc54
	goto loc_8242CC54;
loc_8242CBE8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8242cbf4
	if (ctx.cr6.eq) goto loc_8242CBF4;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_8242CBF4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82427108
	ctx.lr = 0x8242CC00;
	sub_82427108(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// b 0x8242cc54
	goto loc_8242CC54;
loc_8242CC10:
	// lbz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
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
loc_8242CC28:
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// b 0x8242cc54
	goto loc_8242CC54;
loc_8242CC34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// b 0x8242cc54
	goto loc_8242CC54;
loc_8242CC48:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r11,-26376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26376);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
loc_8242CC54:
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8242cc60
	if (!ctx.cr6.eq) goto loc_8242CC60;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242CC60:
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

__attribute__((alias("__imp__sub_8242CC78"))) PPC_WEAK_FUNC(sub_8242CC78);
PPC_FUNC_IMPL(__imp__sub_8242CC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8242CC80;
	__savegprlr_29(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x8242cca4
	if (!ctx.cr6.eq) goto loc_8242CCA4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8242CCA4:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8242cd0c
	if (ctx.cr6.eq) goto loc_8242CD0C;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242ccec
	if (!ctx.cr6.eq) goto loc_8242CCEC;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242CCEC;
	sub_8242BCD0(ctx, base);
loc_8242CCEC:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8242CD0C:
	// rlwinm r8,r11,25,0,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xFE000000;
	// srawi r5,r8,25
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 25;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bgt cr6,0x8242d6d4
	if (ctx.cr6.gt) goto loc_8242D6D4;
	// lis r12,-32189
	ctx.r12.s64 = -2109538304;
	// addi r12,r12,-13000
	ctx.r12.s64 = ctx.r12.s64 + -13000;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8242CDEC;
	case 1:
		goto loc_8242D6D4;
	case 2:
		goto loc_8242D6D4;
	case 3:
		goto loc_8242D384;
	case 4:
		goto loc_8242CE50;
	case 5:
		goto loc_8242CF9C;
	case 6:
		goto loc_8242CF0C;
	case 7:
		goto loc_8242D404;
	case 8:
		goto loc_8242D098;
	case 9:
		goto loc_8242D6D4;
	case 10:
		goto loc_8242D484;
	case 11:
		goto loc_8242D6D4;
	case 12:
		goto loc_8242D6C0;
	case 13:
		goto loc_8242D6C0;
	case 14:
		goto loc_8242D6C0;
	case 15:
		goto loc_8242D6D4;
	case 16:
		goto loc_8242D6D4;
	case 17:
		goto loc_8242D6C0;
	case 18:
		goto loc_8242D6C0;
	case 19:
		goto loc_8242D4E8;
	case 20:
		goto loc_8242D6D4;
	case 21:
		goto loc_8242D078;
	case 22:
		goto loc_8242D18C;
	case 23:
		goto loc_8242D18C;
	case 24:
		goto loc_8242D18C;
	case 25:
		goto loc_8242D18C;
	case 26:
		goto loc_8242D18C;
	case 27:
		goto loc_8242D28C;
	case 28:
		goto loc_8242D2F0;
	case 29:
		goto loc_8242D304;
	case 30:
		goto loc_8242D18C;
	case 31:
		goto loc_8242D20C;
	case 32:
		goto loc_8242D20C;
	case 33:
		goto loc_8242D20C;
	case 34:
		goto loc_8242D18C;
	case 35:
		goto loc_8242D18C;
	case 36:
		goto loc_8242D568;
	case 37:
		goto loc_8242D5E8;
	case 38:
		goto loc_8242D18C;
	case 39:
		goto loc_8242D6D4;
	case 40:
		goto loc_8242D668;
	case 41:
		goto loc_8242CDEC;
	case 42:
		goto loc_8242D10C;
	case 43:
		goto loc_8242D10C;
	case 44:
		goto loc_8242D10C;
	default:
		__builtin_unreachable();
	}
	// lwz r18,-12820(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12820);
	// lwz r18,-10540(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10540);
	// lwz r18,-10540(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10540);
	// lwz r18,-11388(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11388);
	// lwz r18,-12720(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12720);
	// lwz r18,-12388(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12388);
	// lwz r18,-12532(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12532);
	// lwz r18,-11260(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11260);
	// lwz r18,-12136(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12136);
	// lwz r18,-10540(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10540);
	// lwz r18,-11132(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11132);
	// lwz r18,-10540(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10540);
	// lwz r18,-10560(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10560);
	// lwz r18,-10560(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10560);
	// lwz r18,-10560(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10560);
	// lwz r18,-10540(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10540);
	// lwz r18,-10540(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10540);
	// lwz r18,-10560(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10560);
	// lwz r18,-10560(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10560);
	// lwz r18,-11032(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11032);
	// lwz r18,-10540(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10540);
	// lwz r18,-12168(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12168);
	// lwz r18,-11892(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11892);
	// lwz r18,-11892(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11892);
	// lwz r18,-11892(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11892);
	// lwz r18,-11892(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11892);
	// lwz r18,-11892(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11892);
	// lwz r18,-11636(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11636);
	// lwz r18,-11536(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11536);
	// lwz r18,-11516(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11516);
	// lwz r18,-11892(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11892);
	// lwz r18,-11764(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11764);
	// lwz r18,-11764(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11764);
	// lwz r18,-11764(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11764);
	// lwz r18,-11892(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11892);
	// lwz r18,-11892(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11892);
	// lwz r18,-10904(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10904);
	// lwz r18,-10776(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10776);
	// lwz r18,-11892(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -11892);
	// lwz r18,-10540(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10540);
	// lwz r18,-10648(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -10648);
	// lwz r18,-12820(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12820);
	// lwz r18,-12020(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12020);
	// lwz r18,-12020(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12020);
	// lwz r18,-12020(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -12020);
loc_8242CDEC:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8242cdf8
	if (ctx.cr6.eq) goto loc_8242CDF8;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_8242CDF8:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 65536;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242ce40
	if (!ctx.cr6.eq) goto loc_8242CE40;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242CE40;
	sub_8242BCD0(ctx, base);
loc_8242CE40:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8242CE50:
	// lbz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r31,r11,-23976
	ctx.r31.s64 = ctx.r11.s64 + -23976;
	// beq cr6,0x8242ceb8
	if (ctx.cr6.eq) goto loc_8242CEB8;
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 65536;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242cea8
	if (!ctx.cr6.eq) goto loc_8242CEA8;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242CEA8;
	sub_8242BCD0(ctx, base);
loc_8242CEA8:
	// lwz r11,672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8242CEB8:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 65536;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242cefc
	if (!ctx.cr6.eq) goto loc_8242CEFC;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242CEFC;
	sub_8242BCD0(ctx, base);
loc_8242CEFC:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8242CF0C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// addi r4,r11,-204
	ctx.r4.s64 = ctx.r11.s64 + -204;
	// bl 0x8259d1b0
	ctx.lr = 0x8242CF24;
	sub_8259D1B0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82434768
	ctx.lr = 0x8242CF30;
	sub_82434768(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r31,r4,65535
	ctx.r31.u64 = ctx.r4.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242cf78
	if (!ctx.cr6.eq) goto loc_8242CF78;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242CF78;
	sub_8242BCD0(ctx, base);
loc_8242CF78:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + ctx.r31.u64;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// b 0x8242d758
	goto loc_8242D758;
loc_8242CF9C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfd f2,-4840(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4840);
	// bl 0x8259eb38
	ctx.lr = 0x8242CFAC;
	sub_8259EB38(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,2864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8242cfec
	if (!ctx.cr6.eq) goto loc_8242CFEC;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r11,-200
	ctx.r4.s64 = ctx.r11.s64 + -200;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// li r12,140
	ctx.r12.s64 = 140;
	// stfiwx f11,r1,r12
	PPC_STORE_U32(ctx.r1.u32 + ctx.r12.u32, ctx.f11.u32);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x8259d1b0
	ctx.lr = 0x8242CFE8;
	sub_8259D1B0(ctx, base);
	// b 0x8242d000
	goto loc_8242D000;
loc_8242CFEC:
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,-196
	ctx.r4.s64 = ctx.r11.s64 + -196;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8259d1b0
	ctx.lr = 0x8242D000;
	sub_8259D1B0(ctx, base);
loc_8242D000:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82434768
	ctx.lr = 0x8242D00C;
	sub_82434768(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r31,r9,65535
	ctx.r31.u64 = ctx.r9.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + ctx.r31.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242d054
	if (!ctx.cr6.eq) goto loc_8242D054;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242D054;
	sub_8242BCD0(ctx, base);
loc_8242D054:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// b 0x8242d758
	goto loc_8242D758;
loc_8242D078:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-192
	ctx.r5.s64 = ctx.r11.s64 + -192;
	// bl 0x824507e0
	ctx.lr = 0x8242D090;
	sub_824507E0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8242D098:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// addi r4,r11,-188
	ctx.r4.s64 = ctx.r11.s64 + -188;
	// bl 0x8259d1b0
	ctx.lr = 0x8242D0B0;
	sub_8259D1B0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82434768
	ctx.lr = 0x8242D0BC;
	sub_82434768(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r31,r6,65535
	ctx.r31.u64 = ctx.r6.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242d104
	if (!ctx.cr6.eq) goto loc_8242D104;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242D104;
	sub_8242BCD0(ctx, base);
loc_8242D104:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x8242d73c
	goto loc_8242D73C;
loc_8242D10C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// addi r4,r11,-160
	ctx.r4.s64 = ctx.r11.s64 + -160;
	// bl 0x82434768
	ctx.lr = 0x8242D120;
	sub_82434768(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r31,r5,65535
	ctx.r31.u64 = ctx.r5.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242d168
	if (!ctx.cr6.eq) goto loc_8242D168;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242D168;
	sub_8242BCD0(ctx, base);
loc_8242D168:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// b 0x8242d758
	goto loc_8242D758;
loc_8242D18C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// addi r4,r11,-148
	ctx.r4.s64 = ctx.r11.s64 + -148;
	// bl 0x82434768
	ctx.lr = 0x8242D1A0;
	sub_82434768(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r31,r4,65535
	ctx.r31.u64 = ctx.r4.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242d1e8
	if (!ctx.cr6.eq) goto loc_8242D1E8;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242D1E8;
	sub_8242BCD0(ctx, base);
loc_8242D1E8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + ctx.r31.u64;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// b 0x8242d758
	goto loc_8242D758;
loc_8242D20C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// addi r4,r11,-132
	ctx.r4.s64 = ctx.r11.s64 + -132;
	// bl 0x82434768
	ctx.lr = 0x8242D220;
	sub_82434768(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r31,r9,65535
	ctx.r31.u64 = ctx.r9.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + ctx.r31.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242d268
	if (!ctx.cr6.eq) goto loc_8242D268;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242D268;
	sub_8242BCD0(ctx, base);
loc_8242D268:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// b 0x8242d758
	goto loc_8242D758;
loc_8242D28C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// addi r4,r11,-120
	ctx.r4.s64 = ctx.r11.s64 + -120;
	// bl 0x82434768
	ctx.lr = 0x8242D2A0;
	sub_82434768(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r31,r6,65535
	ctx.r31.u64 = ctx.r6.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242d2e8
	if (!ctx.cr6.eq) goto loc_8242D2E8;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242D2E8;
	sub_8242BCD0(ctx, base);
loc_8242D2E8:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x8242d73c
	goto loc_8242D73C;
loc_8242D2F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8242cc78
	ctx.lr = 0x8242D2FC;
	sub_8242CC78(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8242D304:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// addi r4,r11,-96
	ctx.r4.s64 = ctx.r11.s64 + -96;
	// bl 0x82434768
	ctx.lr = 0x8242D318;
	sub_82434768(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r31,r5,65535
	ctx.r31.u64 = ctx.r5.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242d360
	if (!ctx.cr6.eq) goto loc_8242D360;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242D360;
	sub_8242BCD0(ctx, base);
loc_8242D360:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// b 0x8242d758
	goto loc_8242D758;
loc_8242D384:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// bl 0x82434768
	ctx.lr = 0x8242D398;
	sub_82434768(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r31,r4,65535
	ctx.r31.u64 = ctx.r4.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242d3e0
	if (!ctx.cr6.eq) goto loc_8242D3E0;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242D3E0;
	sub_8242BCD0(ctx, base);
loc_8242D3E0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + ctx.r31.u64;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// b 0x8242d758
	goto loc_8242D758;
loc_8242D404:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x82434768
	ctx.lr = 0x8242D418;
	sub_82434768(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r31,r9,65535
	ctx.r31.u64 = ctx.r9.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + ctx.r31.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242d460
	if (!ctx.cr6.eq) goto loc_8242D460;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242D460;
	sub_8242BCD0(ctx, base);
loc_8242D460:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// b 0x8242d758
	goto loc_8242D758;
loc_8242D484:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// bl 0x82434768
	ctx.lr = 0x8242D498;
	sub_82434768(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r31,r6,65535
	ctx.r31.u64 = ctx.r6.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242d4e0
	if (!ctx.cr6.eq) goto loc_8242D4E0;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242D4E0;
	sub_8242BCD0(ctx, base);
loc_8242D4E0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x8242d73c
	goto loc_8242D73C;
loc_8242D4E8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x82434768
	ctx.lr = 0x8242D4FC;
	sub_82434768(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r31,r5,65535
	ctx.r31.u64 = ctx.r5.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242d544
	if (!ctx.cr6.eq) goto loc_8242D544;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242D544;
	sub_8242BCD0(ctx, base);
loc_8242D544:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// b 0x8242d758
	goto loc_8242D758;
loc_8242D568:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x82434768
	ctx.lr = 0x8242D57C;
	sub_82434768(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r31,r4,65535
	ctx.r31.u64 = ctx.r4.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242d5c4
	if (!ctx.cr6.eq) goto loc_8242D5C4;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242D5C4;
	sub_8242BCD0(ctx, base);
loc_8242D5C4:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + ctx.r31.u64;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// b 0x8242d758
	goto loc_8242D758;
loc_8242D5E8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r11,r11,17760
	ctx.r11.s64 = ctx.r11.s64 + 17760;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x82434768
	ctx.lr = 0x8242D5FC;
	sub_82434768(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r31,r9,65535
	ctx.r31.u64 = ctx.r9.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + ctx.r31.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242d644
	if (!ctx.cr6.eq) goto loc_8242D644;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242D644;
	sub_8242BCD0(ctx, base);
loc_8242D644:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// b 0x8242d758
	goto loc_8242D758;
loc_8242D668:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242ce40
	if (!ctx.cr6.eq) goto loc_8242CE40;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242D6B0;
	sub_8242BCD0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8242D6C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82437558
	ctx.lr = 0x8242D6CC;
	sub_82437558(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8242D6D4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,17760
	ctx.r4.s64 = ctx.r11.s64 + 17760;
	// bl 0x8259d1b0
	ctx.lr = 0x8242D6E4;
	sub_8259D1B0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82434768
	ctx.lr = 0x8242D6F0;
	sub_82434768(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r31,r8,65535
	ctx.r31.u64 = ctx.r8.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r3,r5,r31
	ctx.r3.u64 = ctx.r5.u64 + ctx.r31.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242d738
	if (!ctx.cr6.eq) goto loc_8242D738;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242D738;
	sub_8242BCD0(ctx, base);
loc_8242D738:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8242D73C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
loc_8242D758:
	// bne cr6,0x8242d76c
	if (!ctx.cr6.eq) goto loc_8242D76C;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242D76C;
	sub_8242BCD0(ctx, base);
loc_8242D76C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242D774"))) PPC_WEAK_FUNC(sub_8242D774);
PPC_FUNC_IMPL(__imp__sub_8242D774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242D778"))) PPC_WEAK_FUNC(sub_8242D778);
PPC_FUNC_IMPL(__imp__sub_8242D778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26376);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242D784"))) PPC_WEAK_FUNC(sub_8242D784);
PPC_FUNC_IMPL(__imp__sub_8242D784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242D788"))) PPC_WEAK_FUNC(sub_8242D788);
PPC_FUNC_IMPL(__imp__sub_8242D788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8242D790;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r3,-26268(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242d7d8
	if (ctx.cr6.eq) goto loc_8242D7D8;
	// bl 0x82455bd0
	ctx.lr = 0x8242D7AC;
	sub_82455BD0(ctx, base);
	// lwz r31,-26268(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26268);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8242d7d0
	if (ctx.cr6.eq) goto loc_8242D7D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82455af0
	ctx.lr = 0x8242D7C0;
	sub_82455AF0(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242D7D0;
	sub_8242BCD0(ctx, base);
loc_8242D7D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26268(r29)
	PPC_STORE_U32(ctx.r29.u32 + -26268, ctx.r11.u32);
loc_8242D7D8:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-22952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22952);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242D7F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-22952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22952);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242D804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-22952(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22952, ctx.r11.u32);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-22948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22948);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8242D824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-22948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22948);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8242D838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-22948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22948, ctx.r11.u32);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26384);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242D858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26384);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242D86C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26384, ctx.r11.u32);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26312);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8242D88C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26312);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8242D8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26312(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26312, ctx.r11.u32);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242D8C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26308);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242D8D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26308(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26308, ctx.r11.u32);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26324);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8242D8F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26324);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8242D908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26632);
	// li r5,960
	ctx.r5.s64 = 960;
	// lwz r4,-26304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26304);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26324(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26324, ctx.r11.u32);
	// bl 0x8242bcd0
	ctx.lr = 0x8242D924;
	sub_8242BCD0(ctx, base);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26328);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242D93C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26328);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242D950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26328(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26328, ctx.r11.u32);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26368);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8242D970;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26368);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8242D984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26368(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26368, ctx.r11.u32);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26364);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242D9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26364);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242D9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26364(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26364, ctx.r11.u32);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26316);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8242D9D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26316);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8242D9EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26316(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26316, ctx.r11.u32);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26380);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242DA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26380);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242DA20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26380, ctx.r11.u32);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26388);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8242DA40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26388(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26388);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8242DA54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26388(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26388, ctx.r11.u32);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26264);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242DA74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26264);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242DA88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26264, ctx.r11.u32);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26392);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8242DAA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26392);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8242DABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26392, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242DACC"))) PPC_WEAK_FUNC(sub_8242DACC);
PPC_FUNC_IMPL(__imp__sub_8242DACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242DAD0"))) PPC_WEAK_FUNC(sub_8242DAD0);
PPC_FUNC_IMPL(__imp__sub_8242DAD0) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26376);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242DAF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26276(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26276);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242DB0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242DB1C"))) PPC_WEAK_FUNC(sub_8242DB1C);
PPC_FUNC_IMPL(__imp__sub_8242DB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242DB20"))) PPC_WEAK_FUNC(sub_8242DB20);
PPC_FUNC_IMPL(__imp__sub_8242DB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf4
	ctx.lr = 0x8242DB28;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,8344
	ctx.r31.s64 = ctx.r11.s64 + 8344;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8242db60
	if (!ctx.cr6.eq) goto loc_8242DB60;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242DB60:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8242dbb8
	if (!ctx.cr6.eq) goto loc_8242DBB8;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// addis r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 65536;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242ddc8
	if (!ctx.cr6.eq) goto loc_8242DDC8;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242DBAC;
	sub_8242BCD0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
loc_8242DBB8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242DBCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8242dc18
	if (!ctx.cr6.eq) goto loc_8242DC18;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 65536;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// sth r6,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8242ddc8
	if (!ctx.cr6.eq) goto loc_8242DDC8;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// b 0x8242ddbc
	goto loc_8242DDBC;
loc_8242DC18:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bl 0x82455f08
	ctx.lr = 0x8242DC30;
	sub_82455F08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,17780
	ctx.r29.s64 = ctx.r11.s64 + 17780;
	// beq cr6,0x8242dd40
	if (ctx.cr6.eq) goto loc_8242DD40;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r30,r11,-23976
	ctx.r30.s64 = ctx.r11.s64 + -23976;
loc_8242DC4C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8242dc6c
	if (ctx.cr6.eq) goto loc_8242DC6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8242dc90
	goto loc_8242DC90;
loc_8242DC6C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8242dc7c
	if (!ctx.cr6.eq) goto loc_8242DC7C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8242dc90
	goto loc_8242DC90;
loc_8242DC7C:
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x8259cce0
	ctx.lr = 0x8242DC88;
	sub_8259CCE0(ctx, base);
	// cntlzw r7,r3
	ctx.r7.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_8242DC90:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8242dd28
	if (!ctx.cr6.eq) goto loc_8242DD28;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// lhz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8242dcbc
	if (ctx.cr6.eq) goto loc_8242DCBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8242dce0
	goto loc_8242DCE0;
loc_8242DCBC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8242dccc
	if (!ctx.cr6.eq) goto loc_8242DCCC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8242dce0
	goto loc_8242DCE0;
loc_8242DCCC:
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// bl 0x8259cce0
	ctx.lr = 0x8242DCD8;
	sub_8259CCE0(ctx, base);
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
loc_8242DCE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242dd28
	if (!ctx.cr6.eq) goto loc_8242DD28;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8242cc78
	ctx.lr = 0x8242DCF8;
	sub_8242CC78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824348a0
	ctx.lr = 0x8242DD04;
	sub_824348A0(ctx, base);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82434aa8
	ctx.lr = 0x8242DD10;
	sub_82434AA8(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824348a0
	ctx.lr = 0x8242DD1C;
	sub_824348A0(ctx, base);
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82434aa8
	ctx.lr = 0x8242DD28;
	sub_82434AA8(ctx, base);
loc_8242DD28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82455f98
	ctx.lr = 0x8242DD34;
	sub_82455F98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8242dc4c
	if (!ctx.cr6.eq) goto loc_8242DC4C;
loc_8242DD40:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82435ae0
	ctx.lr = 0x8242DD4C;
	sub_82435AE0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// ori r31,r10,65535
	ctx.r31.u64 = ctx.r10.u64 | 65535;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + ctx.r31.u64;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8242dd9c
	if (!ctx.cr6.eq) goto loc_8242DD9C;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242DD9C;
	sub_8242BCD0(ctx, base);
loc_8242DD9C:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8242ddc8
	if (!ctx.cr6.eq) goto loc_8242DDC8;
	// lwz r3,-26632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26632);
loc_8242DDBC:
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242DDC8;
	sub_8242BCD0(ctx, base);
loc_8242DDC8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb44
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242DDD4"))) PPC_WEAK_FUNC(sub_8242DDD4);
PPC_FUNC_IMPL(__imp__sub_8242DDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242DDD8"))) PPC_WEAK_FUNC(sub_8242DDD8);
PPC_FUNC_IMPL(__imp__sub_8242DDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8242DDE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r11,8344
	ctx.r31.s64 = ctx.r11.s64 + 8344;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8242de18
	if (!ctx.cr6.eq) goto loc_8242DE18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242DE18:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8242de70
	if (!ctx.cr6.eq) goto loc_8242DE70;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// addis r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 65536;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8242e0f4
	if (!ctx.cr6.eq) goto loc_8242E0F4;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242DE64;
	sub_8242BCD0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8242DE70:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242DE84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8242ded0
	if (!ctx.cr6.eq) goto loc_8242DED0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 65536;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// sth r6,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8242e0f4
	if (!ctx.cr6.eq) goto loc_8242E0F4;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// b 0x8242e0e8
	goto loc_8242E0E8;
loc_8242DED0:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bl 0x82455f08
	ctx.lr = 0x8242DEE8;
	sub_82455F08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,17812
	ctx.r31.s64 = ctx.r11.s64 + 17812;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// beq cr6,0x8242e07c
	if (ctx.cr6.eq) goto loc_8242E07C;
loc_8242DF08:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// cmplwi cr6,r7,95
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 95, ctx.xer);
	// bne cr6,0x8242e03c
	if (!ctx.cr6.eq) goto loc_8242E03C;
	// addi r7,r4,9
	ctx.r7.s64 = ctx.r4.s64 + 9;
	// addi r10,r31,-28
	ctx.r10.s64 = ctx.r31.s64 + -28;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8242DF38:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r6,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x8242df5c
	if (ctx.cr6.eq) goto loc_8242DF5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8242df38
	if (ctx.cr6.eq) goto loc_8242DF38;
loc_8242DF5C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8242df7c
	if (!ctx.cr6.eq) goto loc_8242DF7C;
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r3,r5,r30
	ctx.r3.u64 = ctx.r5.u64 + ctx.r30.u64;
	// sth r3,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r3.u16);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// b 0x8242e050
	goto loc_8242E050;
loc_8242DF7C:
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8242DF84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8242dfa8
	if (ctx.cr6.eq) goto loc_8242DFA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8242df84
	if (ctx.cr6.eq) goto loc_8242DF84;
loc_8242DFA8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8242e03c
	if (ctx.cr6.eq) goto loc_8242E03C;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8242dff0
	if (!ctx.cr6.eq) goto loc_8242DFF0;
	// rlwinm r9,r11,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8242dfd8
	if (!ctx.cr6.eq) goto loc_8242DFD8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242DFD8:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r6,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8242dff4
	if (ctx.cr6.eq) goto loc_8242DFF4;
loc_8242DFF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242DFF4:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8242e03c
	if (!ctx.cr6.eq) goto loc_8242E03C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8242cc78
	ctx.lr = 0x8242E008;
	sub_8242CC78(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824348a0
	ctx.lr = 0x8242E014;
	sub_824348A0(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82434aa8
	ctx.lr = 0x8242E020;
	sub_82434AA8(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824348a0
	ctx.lr = 0x8242E02C;
	sub_824348A0(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82434aa8
	ctx.lr = 0x8242E038;
	sub_82434AA8(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8242E03C:
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r6,r7,r30
	ctx.r6.u64 = ctx.r7.u64 + ctx.r30.u64;
	// sth r6,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
loc_8242E050:
	// bne cr6,0x8242e064
	if (!ctx.cr6.eq) goto loc_8242E064;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242E064;
	sub_8242BCD0(ctx, base);
loc_8242E064:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82455f98
	ctx.lr = 0x8242E070;
	sub_82455F98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8242df08
	if (!ctx.cr6.eq) goto loc_8242DF08;
loc_8242E07C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82435ae0
	ctx.lr = 0x8242E088;
	sub_82435AE0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8242e0c8
	if (!ctx.cr6.eq) goto loc_8242E0C8;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242E0C8;
	sub_8242BCD0(ctx, base);
loc_8242E0C8:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8242e0f4
	if (!ctx.cr6.eq) goto loc_8242E0F4;
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
loc_8242E0E8:
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8242E0F4;
	sub_8242BCD0(ctx, base);
loc_8242E0F4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242E100"))) PPC_WEAK_FUNC(sub_8242E100);
PPC_FUNC_IMPL(__imp__sub_8242E100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x8242E108;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-23976
	ctx.r31.s64 = ctx.r11.s64 + -23976;
	// lwz r11,-22948(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22948);
	// addi r4,r31,376
	ctx.r4.s64 = ctx.r31.s64 + 376;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456d90
	ctx.lr = 0x8242E12C;
	sub_82456D90(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242E13C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,-22948(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22948);
	// addi r4,r31,400
	ctx.r4.s64 = ctx.r31.s64 + 400;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82456d90
	ctx.lr = 0x8242E154;
	sub_82456D90(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242E164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8242e17c
	if (!ctx.cr6.eq) goto loc_8242E17C;
loc_8242E170:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_8242E17C:
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8242E190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242e1cc
	if (ctx.cr6.eq) goto loc_8242E1CC;
loc_8242E198:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242e1cc
	if (ctx.cr6.eq) goto loc_8242E1CC;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8242e170
	if (ctx.cr6.eq) goto loc_8242E170;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8242e1cc
	if (ctx.cr6.eq) goto loc_8242E1CC;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8242E1C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8242e198
	if (!ctx.cr6.eq) goto loc_8242E198;
loc_8242E1CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242E1D8"))) PPC_WEAK_FUNC(sub_8242E1D8);
PPC_FUNC_IMPL(__imp__sub_8242E1D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,25,0,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xFE000000;
	// srawi r11,r10,25
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 25;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// bgt cr6,0x8242e2c0
	if (ctx.cr6.gt) {
		sub_8242E2C0(ctx, base);
		return;
	}
	// lis r12,-32189
	ctx.r12.s64 = -2109538304;
	// addi r12,r12,-7672
	ctx.r12.s64 = ctx.r12.s64 + -7672;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x8242E2B8
		return;
	case 1:
		sub_8242E2C0(ctx, base);
		return;
	case 2:
		sub_8242E2C0(ctx, base);
		return;
	case 3:
		sub_8242E2C0(ctx, base);
		return;
	case 4:
		sub_8242E2C0(ctx, base);
		return;
	case 5:
		sub_8242E2C0(ctx, base);
		return;
	case 6:
		sub_8242E2C0(ctx, base);
		return;
	case 7:
		sub_8242E2C0(ctx, base);
		return;
	case 8:
		// ERROR: 0x8242E2B8
		return;
	case 9:
		sub_8242E2C0(ctx, base);
		return;
	case 10:
		sub_8242E2C0(ctx, base);
		return;
	case 11:
		sub_8242E2C0(ctx, base);
		return;
	case 12:
		sub_8242E2C0(ctx, base);
		return;
	case 13:
		sub_8242E2C0(ctx, base);
		return;
	case 14:
		sub_8242E2C0(ctx, base);
		return;
	case 15:
		sub_8242E2C0(ctx, base);
		return;
	case 16:
		sub_8242E2C0(ctx, base);
		return;
	case 17:
		sub_8242E2C0(ctx, base);
		return;
	case 18:
		sub_8242E2C0(ctx, base);
		return;
	case 19:
		sub_8242E2C0(ctx, base);
		return;
	case 20:
		sub_8242E2C0(ctx, base);
		return;
	case 21:
		// ERROR: 0x8242E2B8
		return;
	case 22:
		sub_8242E2C0(ctx, base);
		return;
	case 23:
		sub_8242E2C0(ctx, base);
		return;
	case 24:
		sub_8242E2C0(ctx, base);
		return;
	case 25:
		// ERROR: 0x8242E2B8
		return;
	case 26:
		// ERROR: 0x8242E2B8
		return;
	case 27:
		sub_8242E2C0(ctx, base);
		return;
	case 28:
		// ERROR: 0x8242E2B8
		return;
	case 29:
		// ERROR: 0x8242E2B8
		return;
	case 30:
		sub_8242E2C0(ctx, base);
		return;
	case 31:
		sub_8242E2C0(ctx, base);
		return;
	case 32:
		// ERROR: 0x8242E2B8
		return;
	case 33:
		sub_8242E2C0(ctx, base);
		return;
	case 34:
		// ERROR: 0x8242E2B8
		return;
	case 35:
		// ERROR: 0x8242E2B8
		return;
	case 36:
		sub_8242E2C0(ctx, base);
		return;
	case 37:
		sub_8242E2C0(ctx, base);
		return;
	case 38:
		sub_8242E2C0(ctx, base);
		return;
	case 39:
		sub_8242E2C0(ctx, base);
		return;
	case 40:
		// ERROR: 0x8242E2B8
		return;
	case 41:
		// ERROR: 0x8242E2B8
		return;
	case 42:
		// ERROR: 0x8242E2B8
		return;
	case 43:
		// ERROR: 0x8242E2B8
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8242E208"))) PPC_WEAK_FUNC(sub_8242E208);
PPC_FUNC_IMPL(__imp__sub_8242E208) {
	PPC_FUNC_PROLOGUE();
	// lwz r18,-7496(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7496);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7496(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7496);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7496(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7496);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7496(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7496);
	// lwz r18,-7496(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7496);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7496(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7496);
	// lwz r18,-7496(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7496);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7496(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7496);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7496(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7496);
	// lwz r18,-7496(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7496);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7488(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7488);
	// lwz r18,-7496(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7496);
	// lwz r18,-7496(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7496);
	// lwz r18,-7496(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7496);
	// lwz r18,-7496(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -7496);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242E2C0"))) PPC_WEAK_FUNC(sub_8242E2C0);
PPC_FUNC_IMPL(__imp__sub_8242E2C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242E2C8"))) PPC_WEAK_FUNC(sub_8242E2C8);
PPC_FUNC_IMPL(__imp__sub_8242E2C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r10,18,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4095
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4095, ctx.xer);
	// ble cr6,0x8242e2e8
	if (!ctx.cr6.gt) goto loc_8242E2E8;
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// li r11,4095
	ctx.r11.s64 = 4095;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_8242E2E8:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r9,r11,14,6,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0x3FFC000) | (ctx.r9.u64 & 0xFFFFFFFFFC003FFF);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242E2F8"))) PPC_WEAK_FUNC(sub_8242E2F8);
PPC_FUNC_IMPL(__imp__sub_8242E2F8) {
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
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r10,18,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4095
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4095, ctx.xer);
	// ble cr6,0x8242e330
	if (!ctx.cr6.gt) goto loc_8242E330;
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// li r9,4095
	ctx.r9.s64 = 4095;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8242E330:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwimi r8,r9,14,6,17
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 14) & 0x3FFC000) | (ctx.r8.u64 & 0xFFFFFFFFFC003FFF);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bne cr6,0x8242e488
	if (!ctx.cr6.eq) goto loc_8242E488;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lbz r7,-26260(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -26260);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8242e374
	if (ctx.cr6.eq) goto loc_8242E374;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8242E368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8242e488
	if (!ctx.cr6.eq) goto loc_8242E488;
loc_8242E374:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r3,r9,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242e3a4
	if (ctx.cr6.eq) goto loc_8242E3A4;
	// oris r11,r9,1023
	ctx.r11.u64 = ctx.r9.u64 | 67043328;
	// ori r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 49152;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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
loc_8242E3A4:
	// rlwinm r10,r9,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8242e3b8
	if (!ctx.cr6.eq) goto loc_8242E3B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242E3B8:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8242e474
	if (ctx.cr6.eq) goto loc_8242E474;
	// rlwinm r6,r9,0,2,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8242e3d8
	if (!ctx.cr6.eq) goto loc_8242E3D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242E3D8:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8242e488
	if (!ctx.cr6.eq) goto loc_8242E488;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,-26592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8242e460
	if (!ctx.cr6.lt) goto loc_8242E460;
	// oris r9,r9,8192
	ctx.r9.u64 = ctx.r9.u64 | 536870912;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8242e434
	if (ctx.cr6.lt) goto loc_8242E434;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
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
loc_8242E434:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
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
loc_8242E460:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8242e484
	goto loc_8242E484;
loc_8242E474:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8242E484:
	// bctrl 
	ctx.lr = 0x8242E488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242E488:
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

__attribute__((alias("__imp__sub_8242E49C"))) PPC_WEAK_FUNC(sub_8242E49C);
PPC_FUNC_IMPL(__imp__sub_8242E49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242E4A0"))) PPC_WEAK_FUNC(sub_8242E4A0);
PPC_FUNC_IMPL(__imp__sub_8242E4A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242E4A8"))) PPC_WEAK_FUNC(sub_8242E4A8);
PPC_FUNC_IMPL(__imp__sub_8242E4A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8242E4B0"))) PPC_WEAK_FUNC(sub_8242E4B0);
PPC_FUNC_IMPL(__imp__sub_8242E4B0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// b 0x82456a40
	sub_82456A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242E4BC"))) PPC_WEAK_FUNC(sub_8242E4BC);
PPC_FUNC_IMPL(__imp__sub_8242E4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242E4C0"))) PPC_WEAK_FUNC(sub_8242E4C0);
PPC_FUNC_IMPL(__imp__sub_8242E4C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82455bd0
	sub_82455BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242E4C8"))) PPC_WEAK_FUNC(sub_8242E4C8);
PPC_FUNC_IMPL(__imp__sub_8242E4C8) {
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
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// bl 0x8242cc78
	ctx.lr = 0x8242E4FC;
	sub_8242CC78(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8242E508:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bne cr6,0x8242e508
	if (!ctx.cr6.eq) goto loc_8242E508;
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// sth r5,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r5.u16);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242e550
	if (!ctx.cr6.eq) goto loc_8242E550;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x8242E550;
	sub_8242BCD0(ctx, base);
loc_8242E550:
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

__attribute__((alias("__imp__sub_8242E564"))) PPC_WEAK_FUNC(sub_8242E564);
PPC_FUNC_IMPL(__imp__sub_8242E564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242E568"))) PPC_WEAK_FUNC(sub_8242E568);
PPC_FUNC_IMPL(__imp__sub_8242E568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8242E570;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8242e6b0
	if (ctx.cr6.eq) goto loc_8242E6B0;
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// lwz r11,-23264(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242e600
	if (ctx.cr6.eq) goto loc_8242E600;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,-23264(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23264, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r8,r10,8192
	ctx.r8.u64 = ctx.r10.u64 | 536870912;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,-26592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26592);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8242e5d4
	if (ctx.cr6.lt) goto loc_8242E5D4;
	// rlwinm r6,r8,0,3,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8242E5D4:
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8242E600:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8242E610;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242e6a4
	if (ctx.cr6.eq) goto loc_8242E6A4;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// ori r12,r12,133
	ctx.r12.u64 = ctx.r12.u64 | 133;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// oris r9,r8,11264
	ctx.r9.u64 = ctx.r8.u64 | 738197504;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ori r9,r9,5
	ctx.r9.u64 = ctx.r9.u64 | 5;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8242e664
	if (ctx.cr6.lt) goto loc_8242E664;
	// rlwinm r6,r9,0,3,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// b 0x8242e67c
	goto loc_8242E67C;
loc_8242E664:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8242E67C:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-7720
	ctx.r11.s64 = ctx.r11.s64 + -7720;
	// rlwinm r7,r9,0,25,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8242E6A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8242E6B0:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r11,r11,-24144
	ctx.r11.s64 = ctx.r11.s64 + -24144;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r30,-4(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8242e6ec
	if (!ctx.cr6.eq) goto loc_8242E6EC;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_8242E6EC:
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8242e778
	if (ctx.cr6.eq) goto loc_8242E778;
	// rlwinm r3,r11,25,0,6
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xFE000000;
	// srawi r11,r3,25
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1FFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 25;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8242e710
	if (ctx.cr6.eq) goto loc_8242E710;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x8242e738
	if (!ctx.cr6.eq) goto loc_8242E738;
loc_8242E710:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne cr6,0x8242e720
	if (!ctx.cr6.eq) goto loc_8242E720;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8242E720:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242e73c
	if (ctx.cr6.eq) goto loc_8242E73C;
loc_8242E738:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8242E73C:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8242e778
	if (ctx.cr6.eq) goto loc_8242E778;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwzx r29,r6,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// bne cr6,0x8242e764
	if (!ctx.cr6.eq) goto loc_8242E764;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8242E764:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8242e894
	if (ctx.cr6.eq) goto loc_8242E894;
loc_8242E778:
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// lwz r11,-23264(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242e7f4
	if (ctx.cr6.eq) goto loc_8242E7F4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,-23264(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23264, ctx.r10.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 536870912;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,-26592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26592);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8242e7cc
	if (ctx.cr6.lt) goto loc_8242E7CC;
	// rlwinm r6,r8,0,3,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stb r26,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r26.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8242E7CC:
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r26,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r26.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8242E7F4:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8242E804;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ea54
	if (ctx.cr6.eq) goto loc_8242EA54;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// ori r12,r12,133
	ctx.r12.u64 = ctx.r12.u64 | 133;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// oris r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 738197504;
	// ori r9,r9,5
	ctx.r9.u64 = ctx.r9.u64 | 5;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8242e858
	if (ctx.cr6.lt) goto loc_8242E858;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// b 0x8242e870
	goto loc_8242E870;
loc_8242E858:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_8242E870:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stb r26,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r26.u8);
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// addi r11,r11,-7720
	ctx.r11.s64 = ctx.r11.s64 + -7720;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8242E894:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// lwz r3,-26268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8242e8d0
	if (!ctx.cr6.eq) goto loc_8242E8D0;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8242E8B4;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242e8c8
	if (ctx.cr6.eq) goto loc_8242E8C8;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82455aa0
	ctx.lr = 0x8242E8C4;
	sub_82455AA0(ctx, base);
	// b 0x8242e8cc
	goto loc_8242E8CC;
loc_8242E8C8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8242E8CC:
	// stw r3,-26268(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26268, ctx.r3.u32);
loc_8242E8D0:
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8242e8e8
	if (ctx.cr6.eq) goto loc_8242E8E8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8242E8E8:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8242e918
	if (ctx.cr6.eq) goto loc_8242E918;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r4,25
	ctx.r11.u64 = ctx.r4.u32 & 0x7F;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x8242e90c
	if (ctx.cr6.eq) goto loc_8242E90C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
loc_8242E90C:
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82456b98
	ctx.lr = 0x8242E914;
	sub_82456B98(ctx, base);
	// b 0x8242e93c
	goto loc_8242E93C;
loc_8242E918:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8242e930
	if (ctx.cr6.eq) goto loc_8242E930;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
loc_8242E930:
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82456ed8
	ctx.lr = 0x8242E93C;
	sub_82456ED8(ctx, base);
loc_8242E93C:
	// lis r9,-32044
	ctx.r9.s64 = -2100035584;
	// lwz r11,-23264(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242e9b8
	if (ctx.cr6.eq) goto loc_8242E9B8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,-23264(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23264, ctx.r10.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 536870912;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,-26592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26592);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8242e990
	if (ctx.cr6.lt) goto loc_8242E990;
	// rlwinm r6,r8,0,3,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stb r27,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r27.u8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8242E990:
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r27,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r27.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8242E9B8:
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8242E9C4;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ea54
	if (ctx.cr6.eq) goto loc_8242EA54;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// ori r12,r12,133
	ctx.r12.u64 = ctx.r12.u64 | 133;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// oris r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 738197504;
	// ori r9,r9,5
	ctx.r9.u64 = ctx.r9.u64 | 5;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8242ea18
	if (ctx.cr6.lt) goto loc_8242EA18;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// b 0x8242ea30
	goto loc_8242EA30;
loc_8242EA18:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_8242EA30:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stb r27,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r27.u8);
	// addi r11,r11,-7720
	ctx.r11.s64 = ctx.r11.s64 + -7720;
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_8242EA54:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242EA60"))) PPC_WEAK_FUNC(sub_8242EA60);
PPC_FUNC_IMPL(__imp__sub_8242EA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae0
	ctx.lr = 0x8242EA68;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r22,-32044
	ctx.r22.s64 = -2100035584;
	// lwz r3,-26592(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -26592);
	// bl 0x824621c0
	ctx.lr = 0x8242EA78;
	sub_824621C0(ctx, base);
	// lis r24,-32044
	ctx.r24.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242EA88;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242eaa4
	if (ctx.cr6.eq) goto loc_8242EAA4;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,-10376
	ctx.r4.s64 = ctx.r11.s64 + -10376;
	// bl 0x821ad188
	ctx.lr = 0x8242EA9C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8242eaa8
	goto loc_8242EAA8;
loc_8242EAA4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8242EAA8:
	// lis r25,-32044
	ctx.r25.s64 = -2100035584;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r26,r11,-23976
	ctx.r26.s64 = ctx.r11.s64 + -23976;
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r4,r26,400
	ctx.r4.s64 = ctx.r26.s64 + 400;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456ed8
	ctx.lr = 0x8242EAC4;
	sub_82456ED8(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242EAD0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242eaec
	if (ctx.cr6.eq) goto loc_8242EAEC;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,-10376
	ctx.r4.s64 = ctx.r11.s64 + -10376;
	// bl 0x821ad188
	ctx.lr = 0x8242EAE4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8242eaf0
	goto loc_8242EAF0;
loc_8242EAEC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8242EAF0:
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r4,r26,132
	ctx.r4.s64 = ctx.r26.s64 + 132;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456ed8
	ctx.lr = 0x8242EB00;
	sub_82456ED8(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242EB0C;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242eb28
	if (ctx.cr6.eq) goto loc_8242EB28;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,-10376
	ctx.r4.s64 = ctx.r11.s64 + -10376;
	// bl 0x821ad188
	ctx.lr = 0x8242EB20;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8242eb2c
	goto loc_8242EB2C;
loc_8242EB28:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8242EB2C:
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r4,r26,176
	ctx.r4.s64 = ctx.r26.s64 + 176;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456ed8
	ctx.lr = 0x8242EB3C;
	sub_82456ED8(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242EB48;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242eb64
	if (ctx.cr6.eq) goto loc_8242EB64;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,-10376
	ctx.r4.s64 = ctx.r11.s64 + -10376;
	// bl 0x821ad188
	ctx.lr = 0x8242EB5C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8242eb68
	goto loc_8242EB68;
loc_8242EB64:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8242EB68:
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r4,r26,196
	ctx.r4.s64 = ctx.r26.s64 + 196;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456ed8
	ctx.lr = 0x8242EB78;
	sub_82456ED8(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242EB84;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242eba0
	if (ctx.cr6.eq) goto loc_8242EBA0;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,-10376
	ctx.r4.s64 = ctx.r11.s64 + -10376;
	// bl 0x821ad188
	ctx.lr = 0x8242EB98;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8242eba4
	goto loc_8242EBA4;
loc_8242EBA0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8242EBA4:
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r4,r26,652
	ctx.r4.s64 = ctx.r26.s64 + 652;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456ed8
	ctx.lr = 0x8242EBB4;
	sub_82456ED8(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242EBC0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ebdc
	if (ctx.cr6.eq) goto loc_8242EBDC;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,-10376
	ctx.r4.s64 = ctx.r11.s64 + -10376;
	// bl 0x821ad188
	ctx.lr = 0x8242EBD4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8242ebe0
	goto loc_8242EBE0;
loc_8242EBDC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8242EBE0:
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r4,r26,376
	ctx.r4.s64 = ctx.r26.s64 + 376;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456ed8
	ctx.lr = 0x8242EBF0;
	sub_82456ED8(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242EBFC;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ec18
	if (ctx.cr6.eq) goto loc_8242EC18;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,-10376
	ctx.r4.s64 = ctx.r11.s64 + -10376;
	// bl 0x821ad188
	ctx.lr = 0x8242EC10;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8242ec1c
	goto loc_8242EC1C;
loc_8242EC18:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8242EC1C:
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r4,r26,700
	ctx.r4.s64 = ctx.r26.s64 + 700;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456ed8
	ctx.lr = 0x8242EC2C;
	sub_82456ED8(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242EC38;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ec54
	if (ctx.cr6.eq) goto loc_8242EC54;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,-10376
	ctx.r4.s64 = ctx.r11.s64 + -10376;
	// bl 0x821ad188
	ctx.lr = 0x8242EC4C;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8242ec58
	goto loc_8242EC58;
loc_8242EC54:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8242EC58:
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r4,r26,360
	ctx.r4.s64 = ctx.r26.s64 + 360;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456ed8
	ctx.lr = 0x8242EC68;
	sub_82456ED8(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242EC74;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ec90
	if (ctx.cr6.eq) goto loc_8242EC90;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,-10376
	ctx.r4.s64 = ctx.r11.s64 + -10376;
	// bl 0x821ad188
	ctx.lr = 0x8242EC88;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8242ec94
	goto loc_8242EC94;
loc_8242EC90:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8242EC94:
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r4,r26,200
	ctx.r4.s64 = ctx.r26.s64 + 200;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456ed8
	ctx.lr = 0x8242ECA4;
	sub_82456ED8(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242ECB0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242eccc
	if (ctx.cr6.eq) goto loc_8242ECCC;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,-10376
	ctx.r4.s64 = ctx.r11.s64 + -10376;
	// bl 0x821ad188
	ctx.lr = 0x8242ECC4;
	sub_821AD188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x8242ecd0
	goto loc_8242ECD0;
loc_8242ECCC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8242ECD0:
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r4,r26,628
	ctx.r4.s64 = ctx.r26.s64 + 628;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456ed8
	ctx.lr = 0x8242ECE0;
	sub_82456ED8(ctx, base);
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r4,r26,400
	ctx.r4.s64 = ctx.r26.s64 + 400;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456d90
	ctx.lr = 0x8242ECF0;
	sub_82456D90(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242ED00;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ed1c
	if (ctx.cr6.eq) goto loc_8242ED1C;
	// bl 0x82430500
	ctx.lr = 0x8242ED0C;
	sub_82430500(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r23,r11,-26256
	ctx.r23.s64 = ctx.r11.s64 + -26256;
	// stw r3,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r3.u32);
	// b 0x8242ed2c
	goto loc_8242ED2C;
loc_8242ED1C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r23,r11,-26256
	ctx.r23.s64 = ctx.r11.s64 + -26256;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_8242ED2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242ED40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,0(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8242ed64
	if (ctx.cr6.eq) goto loc_8242ED64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242ED64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242ED64:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ed80
	if (ctx.cr6.eq) goto loc_8242ED80;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8242ED80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242ED80:
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r4,r26,132
	ctx.r4.s64 = ctx.r26.s64 + 132;
	// stw r11,-26320(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26320, ctx.r11.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r5,r29,8,18,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r5.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r3,r29,8,18,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r3.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456d90
	ctx.lr = 0x8242EDC0;
	sub_82456D90(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242EDD0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ede4
	if (ctx.cr6.eq) goto loc_8242EDE4;
	// bl 0x82430500
	ctx.lr = 0x8242EDDC;
	sub_82430500(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8242ede8
	goto loc_8242EDE8;
loc_8242EDE4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8242EDE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242EDFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8242ee1c
	if (ctx.cr6.eq) goto loc_8242EE1C;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242EE1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242EE1C:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ee38
	if (ctx.cr6.eq) goto loc_8242EE38;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8242EE38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242EE38:
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8242EE50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8242ee74
	if (ctx.cr6.eq) goto loc_8242EE74;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242EE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242EE74:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ee90
	if (ctx.cr6.eq) goto loc_8242EE90;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242EE90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242EE90:
	// stw r28,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r28.u32);
	// addi r4,r26,176
	ctx.r4.s64 = ctx.r26.s64 + 176;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r7,r29,8,18,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r6,r29,8,18,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456d90
	ctx.lr = 0x8242EEBC;
	sub_82456D90(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242EECC;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242eee0
	if (ctx.cr6.eq) goto loc_8242EEE0;
	// bl 0x82430500
	ctx.lr = 0x8242EED8;
	sub_82430500(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8242eee4
	goto loc_8242EEE4;
loc_8242EEE0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8242EEE4:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8242EEF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8242ef18
	if (ctx.cr6.eq) goto loc_8242EF18;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242EF18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242EF18:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ef34
	if (ctx.cr6.eq) goto loc_8242EF34;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242EF34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242EF34:
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8242EF4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8242ef70
	if (ctx.cr6.eq) goto loc_8242EF70;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8242EF70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242EF70:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ef8c
	if (ctx.cr6.eq) goto loc_8242EF8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242EF8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242EF8C:
	// stw r28,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r28.u32);
	// addi r4,r26,196
	ctx.r4.s64 = ctx.r26.s64 + 196;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r9,r29,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r8,r29,8,18,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456d90
	ctx.lr = 0x8242EFB8;
	sub_82456D90(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242EFC8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242efdc
	if (ctx.cr6.eq) goto loc_8242EFDC;
	// bl 0x82430500
	ctx.lr = 0x8242EFD4;
	sub_82430500(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8242efe0
	goto loc_8242EFE0;
loc_8242EFDC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8242EFE0:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8242EFF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8242f014
	if (ctx.cr6.eq) goto loc_8242F014;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8242F014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F014:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f030
	if (ctx.cr6.eq) goto loc_8242F030;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242F030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F030:
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242F048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8242f06c
	if (ctx.cr6.eq) goto loc_8242F06C;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8242F06C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F06C:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f088
	if (ctx.cr6.eq) goto loc_8242F088;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8242F088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F088:
	// stw r28,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r28.u32);
	// addi r4,r26,652
	ctx.r4.s64 = ctx.r26.s64 + 652;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r3,r29,8,18,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r3.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r11,r29,8,18,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456d90
	ctx.lr = 0x8242F0B4;
	sub_82456D90(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242F0C4;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f0d8
	if (ctx.cr6.eq) goto loc_8242F0D8;
	// bl 0x82430500
	ctx.lr = 0x8242F0D0;
	sub_82430500(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8242f0dc
	goto loc_8242F0DC;
loc_8242F0D8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8242F0DC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8242F0F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8242f110
	if (ctx.cr6.eq) goto loc_8242F110;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8242F110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F110:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f12c
	if (ctx.cr6.eq) goto loc_8242F12C;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8242F12C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F12C:
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242F144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8242f168
	if (ctx.cr6.eq) goto loc_8242F168;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8242F168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F168:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f184
	if (ctx.cr6.eq) goto loc_8242F184;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8242F184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F184:
	// stw r28,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r28.u32);
	// addi r4,r26,376
	ctx.r4.s64 = ctx.r26.s64 + 376;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r6,r29,8,18,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r5,r29,8,18,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r5.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456d90
	ctx.lr = 0x8242F1B0;
	sub_82456D90(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242F1C0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f1d4
	if (ctx.cr6.eq) goto loc_8242F1D4;
	// bl 0x82430500
	ctx.lr = 0x8242F1CC;
	sub_82430500(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8242f1d8
	goto loc_8242F1D8;
loc_8242F1D4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8242F1D8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,-26372(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26372, ctx.r30.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r4,r29,8,18,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r4.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r11,r29,8,18,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8242F20C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8242F224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f240
	if (ctx.cr6.eq) goto loc_8242F240;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8242F240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F240:
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242F258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8242f27c
	if (ctx.cr6.eq) goto loc_8242F27C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8242F27C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F27C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f298
	if (ctx.cr6.eq) goto loc_8242F298;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8242F298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F298:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// addi r4,r26,700
	ctx.r4.s64 = ctx.r26.s64 + 700;
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456d90
	ctx.lr = 0x8242F2AC;
	sub_82456D90(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242F2BC;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f2d0
	if (ctx.cr6.eq) goto loc_8242F2D0;
	// bl 0x82430500
	ctx.lr = 0x8242F2C8;
	sub_82430500(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8242f2d4
	goto loc_8242F2D4;
loc_8242F2D0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8242F2D4:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8242F2E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8242f308
	if (ctx.cr6.eq) goto loc_8242F308;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242F308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F308:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f324
	if (ctx.cr6.eq) goto loc_8242F324;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8242F324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F324:
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8242F33C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8242f360
	if (ctx.cr6.eq) goto loc_8242F360;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8242F360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F360:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f37c
	if (ctx.cr6.eq) goto loc_8242F37C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242F37C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F37C:
	// stw r28,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r28.u32);
	// addi r4,r26,360
	ctx.r4.s64 = ctx.r26.s64 + 360;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r10,r29,8,18,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r9,r29,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456d90
	ctx.lr = 0x8242F3A8;
	sub_82456D90(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242F3B8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f3cc
	if (ctx.cr6.eq) goto loc_8242F3CC;
	// bl 0x82430500
	ctx.lr = 0x8242F3C4;
	sub_82430500(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8242f3d0
	goto loc_8242F3D0;
loc_8242F3CC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8242F3D0:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8242F3E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8242f404
	if (ctx.cr6.eq) goto loc_8242F404;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8242F404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F404:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f420
	if (ctx.cr6.eq) goto loc_8242F420;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242F420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F420:
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8242F438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8242f45c
	if (ctx.cr6.eq) goto loc_8242F45C;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8242F45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F45C:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f478
	if (ctx.cr6.eq) goto loc_8242F478;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8242F478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F478:
	// stw r28,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r28.u32);
	// addi r4,r26,200
	ctx.r4.s64 = ctx.r26.s64 + 200;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r3,r29,8,18,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r3.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r11,r29,8,18,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456d90
	ctx.lr = 0x8242F4A4;
	sub_82456D90(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242F4B4;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f4c8
	if (ctx.cr6.eq) goto loc_8242F4C8;
	// bl 0x82430500
	ctx.lr = 0x8242F4C0;
	sub_82430500(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8242f4cc
	goto loc_8242F4CC;
loc_8242F4C8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8242F4CC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8242F4E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8242f500
	if (ctx.cr6.eq) goto loc_8242F500;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8242F500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F500:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f51c
	if (ctx.cr6.eq) goto loc_8242F51C;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8242F51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F51C:
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242F534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8242f558
	if (ctx.cr6.eq) goto loc_8242F558;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8242F558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F558:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f574
	if (ctx.cr6.eq) goto loc_8242F574;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8242F574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F574:
	// stw r28,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r28.u32);
	// addi r4,r26,628
	ctx.r4.s64 = ctx.r26.s64 + 628;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r6,r29,8,18,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r5,r29,8,18,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r5.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// lwz r11,-22948(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -22948);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456d90
	ctx.lr = 0x8242F5A0;
	sub_82456D90(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242F5B0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f5c4
	if (ctx.cr6.eq) goto loc_8242F5C4;
	// bl 0x82430500
	ctx.lr = 0x8242F5BC;
	sub_82430500(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8242f5c8
	goto loc_8242F5C8;
loc_8242F5C4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8242F5C8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242F5DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8242f5fc
	if (ctx.cr6.eq) goto loc_8242F5FC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8242F5FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F5FC:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f618
	if (ctx.cr6.eq) goto loc_8242F618;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8242F618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F618:
	// stw r30,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8242F630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8242f654
	if (ctx.cr6.eq) goto loc_8242F654;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242F654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F654:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f670
	if (ctx.cr6.eq) goto loc_8242F670;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8242F670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F670:
	// stw r28,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r28.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r8,r29,8,18,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r7,r29,8,18,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// lwz r3,-26620(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242F698;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f6b0
	if (ctx.cr6.eq) goto loc_8242F6B0;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,-6808
	ctx.r4.s64 = ctx.r11.s64 + -6808;
	// bl 0x821ad188
	ctx.lr = 0x8242F6AC;
	sub_821AD188(ctx, base);
	// b 0x8242f6b4
	goto loc_8242F6B4;
loc_8242F6B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242F6B4:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-26392
	ctx.r11.s64 = ctx.r11.s64 + -26392;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r6,r29,8,18,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x3F00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8242F6E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26592(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -26592);
	// bl 0x824621c0
	ctx.lr = 0x8242F6E8;
	sub_824621C0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8259bb30
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242F6F0"))) PPC_WEAK_FUNC(sub_8242F6F0);
PPC_FUNC_IMPL(__imp__sub_8242F6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x8242F6F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8242F70C;
	sub_8242BB48(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f728
	if (ctx.cr6.eq) goto loc_8242F728;
	// bl 0x82430710
	ctx.lr = 0x8242F71C;
	sub_82430710(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,-26376(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26376, ctx.r3.u32);
	// b 0x8242f734
	goto loc_8242F734;
loc_8242F728:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r11,-26376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26376, ctx.r11.u32);
loc_8242F734:
	// li r4,960
	ctx.r4.s64 = 960;
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8242F740;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f758
	if (ctx.cr6.eq) goto loc_8242F758;
	// bl 0x8247e268
	ctx.lr = 0x8242F74C;
	sub_8247E268(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,-26304(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26304, ctx.r3.u32);
	// b 0x8242f764
	goto loc_8242F764;
loc_8242F758:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r11,-26304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26304, ctx.r11.u32);
loc_8242F764:
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8242F770;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f788
	if (ctx.cr6.eq) goto loc_8242F788;
	// bl 0x82430868
	ctx.lr = 0x8242F77C;
	sub_82430868(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,-26276(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26276, ctx.r3.u32);
	// b 0x8242f794
	goto loc_8242F794;
loc_8242F788:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r11,-26276(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26276, ctx.r11.u32);
loc_8242F794:
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,-26620(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242F7A4;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f7b4
	if (ctx.cr6.eq) goto loc_8242F7B4;
	// bl 0x824309a0
	ctx.lr = 0x8242F7B0;
	sub_824309A0(ctx, base);
	// b 0x8242f7b8
	goto loc_8242F7B8;
loc_8242F7B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8242F7B8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-26384
	ctx.r11.s64 = ctx.r11.s64 + -26384;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242F7D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,-26620(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242F7E0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f7f0
	if (ctx.cr6.eq) goto loc_8242F7F0;
	// bl 0x82430a88
	ctx.lr = 0x8242F7EC;
	sub_82430A88(ctx, base);
	// b 0x8242f7f4
	goto loc_8242F7F4;
loc_8242F7F0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8242F7F4:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-26312
	ctx.r11.s64 = ctx.r11.s64 + -26312;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242F810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,-26620(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242F81C;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f82c
	if (ctx.cr6.eq) goto loc_8242F82C;
	// bl 0x82430d40
	ctx.lr = 0x8242F828;
	sub_82430D40(ctx, base);
	// b 0x8242f830
	goto loc_8242F830;
loc_8242F82C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8242F830:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-26308
	ctx.r11.s64 = ctx.r11.s64 + -26308;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8242F84C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,-26620(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242F858;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f868
	if (ctx.cr6.eq) goto loc_8242F868;
	// bl 0x82430b70
	ctx.lr = 0x8242F864;
	sub_82430B70(ctx, base);
	// b 0x8242f86c
	goto loc_8242F86C;
loc_8242F868:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8242F86C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-22948
	ctx.r11.s64 = ctx.r11.s64 + -22948;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8242F888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,-26620(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242F894;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f8a4
	if (ctx.cr6.eq) goto loc_8242F8A4;
	// bl 0x82430c58
	ctx.lr = 0x8242F8A0;
	sub_82430C58(ctx, base);
	// b 0x8242f8a8
	goto loc_8242F8A8;
loc_8242F8A4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8242F8A8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-22952
	ctx.r11.s64 = ctx.r11.s64 + -22952;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242F8C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r30,1
	ctx.r30.s64 = 1;
	// lis r27,-32044
	ctx.r27.s64 = -2100035584;
	// lwz r31,-23984(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23984);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8242f964
	if (ctx.cr6.eq) goto loc_8242F964;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,-23984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -23984, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r9,r9,8192
	ctx.r9.u64 = ctx.r9.u64 | 536870912;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8242f910
	if (ctx.cr6.lt) goto loc_8242F910;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x8242f928
	goto loc_8242F928;
loc_8242F910:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_8242F928:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x8242f948
	if (ctx.cr6.eq) goto loc_8242F948;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8242F948:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8242f95c
	if (!ctx.cr6.eq) goto loc_8242F95C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82434cf8
	ctx.lr = 0x8242F95C;
	sub_82434CF8(ctx, base);
loc_8242F95C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8242f984
	goto loc_8242F984;
loc_8242F964:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8242F970;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242f980
	if (ctx.cr6.eq) goto loc_8242F980;
	// bl 0x82431878
	ctx.lr = 0x8242F97C;
	sub_82431878(ctx, base);
	// b 0x8242f984
	goto loc_8242F984;
loc_8242F980:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8242F984:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r3,-26324(r11)
	PPC_STORE_U32(ctx.r11.u32 + -26324, ctx.r3.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r7,r30,8,18,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0x3F00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r3,-26324(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26324);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8242F9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r11,-26268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26268, ctx.r11.u32);
	// bl 0x8242ea60
	ctx.lr = 0x8242F9BC;
	sub_8242EA60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,-26620(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26620);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,36
	ctx.r4.s64 = 36;
	// lfs f13,2868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lfs f0,2864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2864);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-26360
	ctx.r11.s64 = ctx.r11.s64 + -26360;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-26300
	ctx.r11.s64 = ctx.r11.s64 + -26300;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// bl 0x8242b338
	ctx.lr = 0x8242FA20;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242fa38
	if (ctx.cr6.eq) goto loc_8242FA38;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r4,r11,-9392
	ctx.r4.s64 = ctx.r11.s64 + -9392;
	// bl 0x821ad188
	ctx.lr = 0x8242FA34;
	sub_821AD188(ctx, base);
	// b 0x8242fa3c
	goto loc_8242FA3C;
loc_8242FA38:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8242FA3C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-26328
	ctx.r11.s64 = ctx.r11.s64 + -26328;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r4,r30,8,18,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0x3F00) | (ctx.r4.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242FA68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242FA74;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242fa8c
	if (ctx.cr6.eq) goto loc_8242FA8C;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r4,r11,-31008
	ctx.r4.s64 = ctx.r11.s64 + -31008;
	// bl 0x821ad188
	ctx.lr = 0x8242FA88;
	sub_821AD188(ctx, base);
	// b 0x8242fa90
	goto loc_8242FA90;
loc_8242FA8C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8242FA90:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-26368
	ctx.r11.s64 = ctx.r11.s64 + -26368;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r9,r30,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8242FABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242FAC8;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242fae0
	if (ctx.cr6.eq) goto loc_8242FAE0;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r4,r11,-7568
	ctx.r4.s64 = ctx.r11.s64 + -7568;
	// bl 0x821ad188
	ctx.lr = 0x8242FADC;
	sub_821AD188(ctx, base);
	// b 0x8242fae4
	goto loc_8242FAE4;
loc_8242FAE0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8242FAE4:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-26364
	ctx.r11.s64 = ctx.r11.s64 + -26364;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r6,r30,8,18,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0x3F00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8242FB10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242FB1C;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242fb34
	if (ctx.cr6.eq) goto loc_8242FB34;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r4,r11,-30776
	ctx.r4.s64 = ctx.r11.s64 + -30776;
	// bl 0x821ad188
	ctx.lr = 0x8242FB30;
	sub_821AD188(ctx, base);
	// b 0x8242fb38
	goto loc_8242FB38;
loc_8242FB34:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8242FB38:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-26316
	ctx.r11.s64 = ctx.r11.s64 + -26316;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r10,r30,8,18,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0x3F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8242FB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242FB70;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242fb88
	if (ctx.cr6.eq) goto loc_8242FB88;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r4,r11,-30288
	ctx.r4.s64 = ctx.r11.s64 + -30288;
	// bl 0x821ad188
	ctx.lr = 0x8242FB84;
	sub_821AD188(ctx, base);
	// b 0x8242fb8c
	goto loc_8242FB8C;
loc_8242FB88:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8242FB8C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-26380
	ctx.r11.s64 = ctx.r11.s64 + -26380;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r7,r30,8,18,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0x3F00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8242FBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242FBC4;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242fbdc
	if (ctx.cr6.eq) goto loc_8242FBDC;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r4,r11,-5736
	ctx.r4.s64 = ctx.r11.s64 + -5736;
	// bl 0x821ad188
	ctx.lr = 0x8242FBD8;
	sub_821AD188(ctx, base);
	// b 0x8242fbe0
	goto loc_8242FBE0;
loc_8242FBDC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8242FBE0:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-26388
	ctx.r11.s64 = ctx.r11.s64 + -26388;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r4,r30,8,18,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0x3F00) | (ctx.r4.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8242FC0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8242FC18;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242fc30
	if (ctx.cr6.eq) goto loc_8242FC30;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,29080
	ctx.r4.s64 = ctx.r11.s64 + 29080;
	// bl 0x821ad188
	ctx.lr = 0x8242FC2C;
	sub_821AD188(ctx, base);
	// b 0x8242fc34
	goto loc_8242FC34;
loc_8242FC30:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8242FC34:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-26264
	ctx.r11.s64 = ctx.r11.s64 + -26264;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r9,r30,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8242FC60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26592(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26592);
	// addi r11,r11,-24144
	ctx.r11.s64 = ctx.r11.s64 + -24144;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// bl 0x824621c0
	ctx.lr = 0x8242FC84;
	sub_824621C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8242FC8C"))) PPC_WEAK_FUNC(sub_8242FC8C);
PPC_FUNC_IMPL(__imp__sub_8242FC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8242FC90"))) PPC_WEAK_FUNC(sub_8242FC90);
PPC_FUNC_IMPL(__imp__sub_8242FC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x8242FC98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bne cr6,0x8242fcb4
	if (!ctx.cr6.eq) goto loc_8242FCB4;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8242FCB4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// bl 0x8242c510
	ctx.lr = 0x8242FCC8;
	sub_8242C510(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82430440
	if (ctx.cr6.eq) goto loc_82430440;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// bgt cr6,0x82430420
	if (ctx.cr6.gt) goto loc_82430420;
	// lis r12,-32189
	ctx.r12.s64 = -2109538304;
	// addi r12,r12,-776
	ctx.r12.s64 = ctx.r12.s64 + -776;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82430420;
	case 1:
		goto loc_8242FD8C;
	case 2:
		goto loc_8242FED0;
	case 3:
		goto loc_82430044;
	case 4:
		goto loc_82430054;
	case 5:
		goto loc_8243042C;
	case 6:
		goto loc_8243042C;
	case 7:
		goto loc_8243042C;
	case 8:
		goto loc_8243042C;
	case 9:
		goto loc_8243042C;
	case 10:
		goto loc_8243042C;
	case 11:
		goto loc_8243042C;
	case 12:
		goto loc_8243042C;
	case 13:
		goto loc_8243042C;
	case 14:
		goto loc_8243042C;
	case 15:
		goto loc_824303C0;
	case 16:
		goto loc_82430084;
	case 17:
		goto loc_82430094;
	case 18:
		goto loc_82430034;
	case 19:
		goto loc_824303B0;
	case 20:
		goto loc_8243042C;
	case 21:
		goto loc_8243042C;
	case 22:
		goto loc_8243042C;
	case 23:
		goto loc_8243042C;
	case 24:
		goto loc_8243042C;
	case 25:
		goto loc_8243042C;
	case 26:
		goto loc_8243042C;
	case 27:
		goto loc_8243042C;
	case 28:
		goto loc_8243042C;
	case 29:
		goto loc_8243042C;
	case 30:
		goto loc_8243042C;
	case 31:
		goto loc_8243042C;
	case 32:
		goto loc_8243042C;
	case 33:
		goto loc_8243042C;
	case 34:
		goto loc_8243042C;
	case 35:
		goto loc_82430064;
	case 36:
		goto loc_82430074;
	default:
		__builtin_unreachable();
	}
	// lwz r18,1056(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1056);
	// lwz r18,-628(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -628);
	// lwz r18,-304(r2)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r2.u32 + -304);
	// lwz r18,68(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r18,84(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,960(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 960);
	// lwz r18,132(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r18,148(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// lwz r18,52(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r18,944(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 944);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,1068(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r18,100(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r18,116(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
loc_8242FD8C:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r31,r11,-24144
	ctx.r31.s64 = ctx.r11.s64 + -24144;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r29,-4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8242fdbc
	if (!ctx.cr6.eq) goto loc_8242FDBC;
loc_8242FDB0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8242FDBC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8242fe60
	if (!ctx.cr6.gt) goto loc_8242FE60;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r30,-4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r8,r9,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8242fdf0
	if (!ctx.cr6.eq) goto loc_8242FDF0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242FDF0:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242fe60
	if (!ctx.cr6.eq) goto loc_8242FE60;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8242fe18
	if (!ctx.cr6.eq) goto loc_8242FE18;
loc_8242FE0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8242FE18:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8242FE2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242fe60
	if (ctx.cr6.eq) goto loc_8242FE60;
loc_8242FE34:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242fe60
	if (ctx.cr6.eq) goto loc_8242FE60;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8242fec4
	if (ctx.cr6.eq) goto loc_8242FEC4;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8242FE58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8242fe34
	if (!ctx.cr6.eq) goto loc_8242FE34;
loc_8242FE60:
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8242FE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242fea8
	if (ctx.cr6.eq) goto loc_8242FEA8;
loc_8242FE7C:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242fea8
	if (ctx.cr6.eq) goto loc_8242FEA8;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8242fdb0
	if (ctx.cr6.eq) goto loc_8242FDB0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242FEA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8242fe7c
	if (!ctx.cr6.eq) goto loc_8242FE7C;
loc_8242FEA8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8242FEC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8242FED0:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r9,r10,25,0,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xFE000000;
	// srawi r9,r9,25
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 25;
	// addi r8,r9,-12
	ctx.r8.s64 = ctx.r9.s64 + -12;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// bgt cr6,0x8242ff14
	if (ctx.cr6.gt) goto loc_8242FF14;
	// rlwinm r7,r10,0,4,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8242fefc
	if (!ctx.cr6.eq) goto loc_8242FEFC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242FEFC:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r8,r4,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8242ff18
	if (ctx.cr6.eq) goto loc_8242FF18;
loc_8242FF14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242FF18:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8242ffc4
	if (!ctx.cr6.eq) goto loc_8242FFC4;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r11,r11,-24144
	ctx.r11.s64 = ctx.r11.s64 + -24144;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242ffb4
	if (ctx.cr6.eq) goto loc_8242FFB4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r5,r11,25,0,6
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xFE000000;
	// srawi r10,r5,25
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 25;
	// addi r4,r10,-12
	ctx.r4.s64 = ctx.r10.s64 + -12;
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgt cr6,0x8242ff80
	if (ctx.cr6.gt) goto loc_8242FF80;
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8242ff68
	if (!ctx.cr6.eq) goto loc_8242FF68;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242FF68:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r5,r8,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8242ff84
	if (ctx.cr6.eq) goto loc_8242FF84;
loc_8242FF80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242FF84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242ffb4
	if (ctx.cr6.eq) goto loc_8242FFB4;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824304f8
	if (ctx.cr6.eq) goto loc_824304F8;
loc_8242FF9C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8242ff9c
	if (!ctx.cr6.eq) goto loc_8242FF9C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8242FFB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82427818
	ctx.lr = 0x8242FFBC;
	sub_82427818(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8242FFC4:
	// addi r9,r9,-12
	ctx.r9.s64 = ctx.r9.s64 + -12;
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// bgt cr6,0x8242fffc
	if (ctx.cr6.gt) goto loc_8242FFFC;
	// rlwinm r8,r10,0,4,4
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8242ffe4
	if (!ctx.cr6.eq) goto loc_8242FFE4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242FFE4:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82430000
	if (ctx.cr6.eq) goto loc_82430000;
loc_8242FFFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82430000:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82430420
	if (ctx.cr6.eq) goto loc_82430420;
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824304f8
	if (ctx.cr6.eq) goto loc_824304F8;
loc_8243001C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8243001c
	if (!ctx.cr6.eq) goto loc_8243001C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82430034:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-22948(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22948);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82430044:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26312);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82430054:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26384);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82430064:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26324(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26324);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82430074:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26308);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82430084:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26276(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26276);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82430094:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r31,r11,-24144
	ctx.r31.s64 = ctx.r11.s64 + -24144;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r30,-4(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824300C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824303b0
	if (ctx.cr6.eq) goto loc_824303B0;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824303b0
	if (ctx.cr6.eq) goto loc_824303B0;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x824301c4
	if (ctx.cr6.eq) goto loc_824301C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8242e100
	ctx.lr = 0x824300E8;
	sub_8242E100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824301c4
	if (ctx.cr6.eq) goto loc_824301C4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r5,r10,25,0,6
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xFE000000;
	// srawi r9,r5,25
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 25;
	// addi r4,r9,-12
	ctx.r4.s64 = ctx.r9.s64 + -12;
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgt cr6,0x82430134
	if (ctx.cr6.gt) goto loc_82430134;
	// rlwinm r3,r10,0,4,4
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8243011c
	if (!ctx.cr6.eq) goto loc_8243011C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8243011C:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82430138
	if (ctx.cr6.eq) goto loc_82430138;
loc_82430134:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82430138:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824301c4
	if (!ctx.cr6.eq) goto loc_824301C4;
	// cmpwi cr6,r9,27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 27, ctx.xer);
	// bne cr6,0x82430178
	if (!ctx.cr6.eq) goto loc_82430178;
	// rlwinm r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82430160
	if (!ctx.cr6.eq) goto loc_82430160;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82430160:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8243017c
	if (ctx.cr6.eq) goto loc_8243017C;
loc_82430178:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8243017C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242fe0c
	if (ctx.cr6.eq) goto loc_8242FE0C;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r9,r10,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8242fe0c
	if (ctx.cr6.eq) goto loc_8242FE0C;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824301AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242fe0c
	if (ctx.cr6.eq) goto loc_8242FE0C;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_824301C4:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r6,r9,25,0,6
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0xFE000000;
	// srawi r8,r6,25
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1FFFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 25;
	// cmpwi cr6,r8,28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 28, ctx.xer);
	// bne cr6,0x82430204
	if (!ctx.cr6.eq) goto loc_82430204;
	// rlwinm r5,r9,0,4,4
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x824301ec
	if (!ctx.cr6.eq) goto loc_824301EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824301EC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82430208
	if (ctx.cr6.eq) goto loc_82430208;
loc_82430204:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82430208:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8242fe0c
	if (!ctx.cr6.eq) goto loc_8242FE0C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r3,r11,25
	ctx.r3.u64 = ctx.r11.u32 & 0x7F;
	// cmpwi cr6,r3,28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 28, ctx.xer);
	// bne cr6,0x82430250
	if (!ctx.cr6.eq) goto loc_82430250;
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82430238
	if (!ctx.cr6.eq) goto loc_82430238;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82430238:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82430254
	if (ctx.cr6.eq) goto loc_82430254;
loc_82430250:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82430254:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82430388
	if (ctx.cr6.eq) goto loc_82430388;
	// lwz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82430388
	if (ctx.cr6.eq) goto loc_82430388;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8242fe0c
	if (!ctx.cr6.gt) goto loc_8242FE0C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,-4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8242fe0c
	if (!ctx.cr6.eq) goto loc_8242FE0C;
	// addi r4,r8,-12
	ctx.r4.s64 = ctx.r8.s64 + -12;
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgt cr6,0x824302c8
	if (ctx.cr6.gt) goto loc_824302C8;
	// rlwinm r3,r9,0,4,4
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824302b0
	if (!ctx.cr6.eq) goto loc_824302B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824302B0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824302cc
	if (ctx.cr6.eq) goto loc_824302CC;
loc_824302C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824302CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82430308
	if (ctx.cr6.eq) goto loc_82430308;
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// rlwinm r9,r10,22,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8242fe0c
	if (!ctx.cr6.eq) goto loc_8242FE0C;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824302FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82430308:
	// cmpwi cr6,r8,27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 27, ctx.xer);
	// bne cr6,0x8243033c
	if (!ctx.cr6.eq) goto loc_8243033C;
	// rlwinm r6,r9,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82430324
	if (!ctx.cr6.eq) goto loc_82430324;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82430324:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82430340
	if (ctx.cr6.eq) goto loc_82430340;
loc_8243033C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82430340:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8242fe0c
	if (ctx.cr6.eq) goto loc_8242FE0C;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,20(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82430360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8242fe0c
	if (ctx.cr6.eq) goto loc_8242FE0C;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243037C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82430388:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8243039C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824303b0
	if (ctx.cr6.eq) goto loc_824303B0;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824304f8
	if (!ctx.cr6.eq) goto loc_824304F8;
loc_824303B0:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26376);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_824303C0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r8,r11,25,0,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xFE000000;
	// srawi r10,r8,25
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 25;
	// addi r7,r10,-12
	ctx.r7.s64 = ctx.r10.s64 + -12;
	// cmplwi cr6,r7,7
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 7, ctx.xer);
	// bgt cr6,0x82430404
	if (ctx.cr6.gt) goto loc_82430404;
	// rlwinm r6,r11,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x824303ec
	if (!ctx.cr6.eq) goto loc_824303EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824303EC:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82430408
	if (ctx.cr6.eq) goto loc_82430408;
loc_82430404:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82430408:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82430420
	if (ctx.cr6.eq) goto loc_82430420;
	// lwz r3,68(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82430420:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_8243042C:
	// addi r3,r31,6
	ctx.r3.s64 = ctx.r31.s64 + 6;
	// bl 0x8259dbd0
	ctx.lr = 0x82430434;
	sub_8259DBD0(ctx, base);
	// bl 0x82427818
	ctx.lr = 0x82430438;
	sub_82427818(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82430440:
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r5,r6,0,4,4
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82430458
	if (!ctx.cr6.eq) goto loc_82430458;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82430458:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82430420
	if (!ctx.cr6.eq) goto loc_82430420;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82430480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824304c8
	if (ctx.cr6.eq) goto loc_824304C8;
loc_8243048C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82456d90
	ctx.lr = 0x82430498;
	sub_82456D90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824304f8
	if (!ctx.cr6.eq) goto loc_824304F8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824304c8
	if (ctx.cr6.eq) goto loc_824304C8;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x824304BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8243048c
	if (!ctx.cr6.eq) goto loc_8243048C;
loc_824304C8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,-22952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22952);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456d90
	ctx.lr = 0x824304DC;
	sub_82456D90(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824304f8
	if (!ctx.cr6.eq) goto loc_824304F8;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,-22948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22948);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82456d90
	ctx.lr = 0x824304F8;
	sub_82456D90(ctx, base);
loc_824304F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82430500"))) PPC_WEAK_FUNC(sub_82430500);
PPC_FUNC_IMPL(__imp__sub_82430500) {
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
	// li r10,1795
	ctx.r10.s64 = 1795;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-7840
	ctx.r11.s64 = ctx.r11.s64 + -7840;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwimi r9,r10,26,4,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0xFFFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFF0000000);
	// rlwimi r9,r10,26,1,2
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x60000000) | (ctx.r9.u64 & 0xFFFFFFFF9FFFFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x82455aa0
	ctx.lr = 0x82430540;
	sub_82455AA0(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,17816
	ctx.r11.s64 = ctx.r11.s64 + 17816;
	// rlwinm r6,r8,0,6,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82430578"))) PPC_WEAK_FUNC(sub_82430578);
PPC_FUNC_IMPL(__imp__sub_82430578) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r10,r10,17876
	ctx.r10.s64 = ctx.r10.s64 + 17876;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82430588:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x824305ac
	if (ctx.cr6.eq) goto loc_824305AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82430588
	if (ctx.cr6.eq) goto loc_82430588;
loc_824305AC:
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r4,r7,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824305c4
	if (ctx.cr6.eq) goto loc_824305C4;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
loc_824305C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824305CC"))) PPC_WEAK_FUNC(sub_824305CC);
PPC_FUNC_IMPL(__imp__sub_824305CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824305D0"))) PPC_WEAK_FUNC(sub_824305D0);
PPC_FUNC_IMPL(__imp__sub_824305D0) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r10,r10,17876
	ctx.r10.s64 = ctx.r10.s64 + 17876;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_824305F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82430614
	if (ctx.cr6.eq) goto loc_82430614;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824305f0
	if (ctx.cr6.eq) goto loc_824305F0;
loc_82430614:
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243067c
	if (ctx.cr6.eq) goto loc_8243067C;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// beq cr6,0x82430648
	if (ctx.cr6.eq) goto loc_82430648;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82430648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82430648:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82430664
	if (ctx.cr6.eq) goto loc_82430664;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82430664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82430664:
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
loc_8243067C:
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

__attribute__((alias("__imp__sub_82430694"))) PPC_WEAK_FUNC(sub_82430694);
PPC_FUNC_IMPL(__imp__sub_82430694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430698"))) PPC_WEAK_FUNC(sub_82430698);
PPC_FUNC_IMPL(__imp__sub_82430698) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,17816
	ctx.r11.s64 = ctx.r11.s64 + 17816;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82455af0
	ctx.lr = 0x824306C8;
	sub_82455AF0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x824306f4
	if (ctx.cr6.eq) goto loc_824306F4;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b398
	ctx.lr = 0x824306F4;
	sub_8242B398(ctx, base);
loc_824306F4:
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

__attribute__((alias("__imp__sub_82430710"))) PPC_WEAK_FUNC(sub_82430710);
PPC_FUNC_IMPL(__imp__sub_82430710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// ori r12,r12,131
	ctx.r12.u64 = ctx.r12.u64 | 131;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// oris r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 738197504;
	// ori r9,r9,3
	ctx.r9.u64 = ctx.r9.u64 | 3;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8243075c
	if (ctx.cr6.lt) goto loc_8243075C;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// b 0x82430774
	goto loc_82430774;
loc_8243075C:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_82430774:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// addi r11,r11,17892
	ctx.r11.s64 = ctx.r11.s64 + 17892;
	// rlwinm r9,r9,0,5,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// oris r8,r9,1023
	ctx.r8.u64 = ctx.r9.u64 | 67043328;
	// ori r8,r8,49152
	ctx.r8.u64 = ctx.r8.u64 | 49152;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243079C"))) PPC_WEAK_FUNC(sub_8243079C);
PPC_FUNC_IMPL(__imp__sub_8243079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824307A0"))) PPC_WEAK_FUNC(sub_824307A0);
PPC_FUNC_IMPL(__imp__sub_824307A0) {
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
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243081c
	if (ctx.cr6.eq) goto loc_8243081C;
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82430800
	if (ctx.cr6.lt) goto loc_82430800;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,-10172
	ctx.r9.s64 = ctx.r9.s64 + -10172;
loc_824307EC:
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bge cr6,0x824307ec
	if (!ctx.cr6.lt) goto loc_824307EC;
loc_82430800:
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82430814
	if (ctx.cr6.eq) goto loc_82430814;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82427468
	ctx.lr = 0x82430814;
	sub_82427468(ctx, base);
loc_82430814:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8243084c
	goto loc_8243084C;
loc_8243081C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82430848
	if (ctx.cr6.eq) goto loc_82430848;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82430848;
	sub_8242BCD0(ctx, base);
loc_82430848:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8243084C:
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

__attribute__((alias("__imp__sub_82430864"))) PPC_WEAK_FUNC(sub_82430864);
PPC_FUNC_IMPL(__imp__sub_82430864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430868"))) PPC_WEAK_FUNC(sub_82430868);
PPC_FUNC_IMPL(__imp__sub_82430868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// ori r12,r12,139
	ctx.r12.u64 = ctx.r12.u64 | 139;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// oris r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 738197504;
	// ori r9,r9,11
	ctx.r9.u64 = ctx.r9.u64 | 11;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x824308b4
	if (ctx.cr6.lt) goto loc_824308B4;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// b 0x824308cc
	goto loc_824308CC;
loc_824308B4:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_824308CC:
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// ori r8,r9,65473
	ctx.r8.u64 = ctx.r9.u64 | 65473;
	// addi r11,r11,17952
	ctx.r11.s64 = ctx.r11.s64 + 17952;
	// rlwimi r10,r8,8,6,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0x3FFFF80) | (ctx.r10.u64 & 0xFFFFFFFFFC00007F);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824308F0"))) PPC_WEAK_FUNC(sub_824308F0);
PPC_FUNC_IMPL(__imp__sub_824308F0) {
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
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// bl 0x8242cc78
	ctx.lr = 0x82430928;
	sub_8242CC78(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-26568
	ctx.r11.s64 = ctx.r11.s64 + -26568;
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lwz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8243094C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addis r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 65536;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82430984
	if (!ctx.cr6.eq) goto loc_82430984;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82430984;
	sub_8242BCD0(ctx, base);
loc_82430984:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8243099C"))) PPC_WEAK_FUNC(sub_8243099C);
PPC_FUNC_IMPL(__imp__sub_8243099C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824309A0"))) PPC_WEAK_FUNC(sub_824309A0);
PPC_FUNC_IMPL(__imp__sub_824309A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// ori r12,r12,151
	ctx.r12.u64 = ctx.r12.u64 | 151;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// oris r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 738197504;
	// ori r9,r9,23
	ctx.r9.u64 = ctx.r9.u64 | 23;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82430a00
	if (ctx.cr6.lt) goto loc_82430A00;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x82430a18
	goto loc_82430A18;
loc_82430A00:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_82430A18:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-7840
	ctx.r11.s64 = ctx.r11.s64 + -7840;
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x82455aa0
	ctx.lr = 0x82430A3C;
	sub_82455AA0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwimi r8,r6,8,18,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0x3F00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFC0FF);
	// addi r11,r11,18012
	ctx.r11.s64 = ctx.r11.s64 + 18012;
	// stb r7,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r4,r5,0,10,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_82430A84"))) PPC_WEAK_FUNC(sub_82430A84);
PPC_FUNC_IMPL(__imp__sub_82430A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430A88"))) PPC_WEAK_FUNC(sub_82430A88);
PPC_FUNC_IMPL(__imp__sub_82430A88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// ori r12,r12,152
	ctx.r12.u64 = ctx.r12.u64 | 152;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// oris r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 738197504;
	// ori r9,r9,24
	ctx.r9.u64 = ctx.r9.u64 | 24;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82430ae8
	if (ctx.cr6.lt) goto loc_82430AE8;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x82430b00
	goto loc_82430B00;
loc_82430AE8:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_82430B00:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-7840
	ctx.r11.s64 = ctx.r11.s64 + -7840;
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x82455aa0
	ctx.lr = 0x82430B24;
	sub_82455AA0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwimi r8,r6,8,18,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0x3F00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFC0FF);
	// addi r11,r11,18072
	ctx.r11.s64 = ctx.r11.s64 + 18072;
	// stb r7,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r4,r5,0,10,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_82430B6C"))) PPC_WEAK_FUNC(sub_82430B6C);
PPC_FUNC_IMPL(__imp__sub_82430B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430B70"))) PPC_WEAK_FUNC(sub_82430B70);
PPC_FUNC_IMPL(__imp__sub_82430B70) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// ori r12,r12,153
	ctx.r12.u64 = ctx.r12.u64 | 153;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// oris r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 738197504;
	// ori r9,r9,25
	ctx.r9.u64 = ctx.r9.u64 | 25;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82430bd0
	if (ctx.cr6.lt) goto loc_82430BD0;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x82430be8
	goto loc_82430BE8;
loc_82430BD0:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_82430BE8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-7840
	ctx.r11.s64 = ctx.r11.s64 + -7840;
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x82455aa0
	ctx.lr = 0x82430C0C;
	sub_82455AA0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwimi r8,r6,8,18,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0x3F00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFC0FF);
	// addi r11,r11,18132
	ctx.r11.s64 = ctx.r11.s64 + 18132;
	// stb r7,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r4,r5,0,10,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_82430C54"))) PPC_WEAK_FUNC(sub_82430C54);
PPC_FUNC_IMPL(__imp__sub_82430C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430C58"))) PPC_WEAK_FUNC(sub_82430C58);
PPC_FUNC_IMPL(__imp__sub_82430C58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// ori r12,r12,166
	ctx.r12.u64 = ctx.r12.u64 | 166;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// oris r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 738197504;
	// ori r9,r9,38
	ctx.r9.u64 = ctx.r9.u64 | 38;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82430cb8
	if (ctx.cr6.lt) goto loc_82430CB8;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x82430cd0
	goto loc_82430CD0;
loc_82430CB8:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_82430CD0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-7840
	ctx.r11.s64 = ctx.r11.s64 + -7840;
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x82455aa0
	ctx.lr = 0x82430CF4;
	sub_82455AA0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwimi r8,r6,8,18,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0x3F00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFC0FF);
	// addi r11,r11,19280
	ctx.r11.s64 = ctx.r11.s64 + 19280;
	// stb r7,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r4,r5,0,10,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_82430D3C"))) PPC_WEAK_FUNC(sub_82430D3C);
PPC_FUNC_IMPL(__imp__sub_82430D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430D40"))) PPC_WEAK_FUNC(sub_82430D40);
PPC_FUNC_IMPL(__imp__sub_82430D40) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// ori r12,r12,167
	ctx.r12.u64 = ctx.r12.u64 | 167;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// oris r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 738197504;
	// ori r9,r9,39
	ctx.r9.u64 = ctx.r9.u64 | 39;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82430da0
	if (ctx.cr6.lt) goto loc_82430DA0;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x82430db8
	goto loc_82430DB8;
loc_82430DA0:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_82430DB8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-7840
	ctx.r11.s64 = ctx.r11.s64 + -7840;
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x82455aa0
	ctx.lr = 0x82430DDC;
	sub_82455AA0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwimi r8,r6,8,18,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0x3F00) | (ctx.r8.u64 & 0xFFFFFFFFFFFFC0FF);
	// addi r11,r11,18192
	ctx.r11.s64 = ctx.r11.s64 + 18192;
	// stb r7,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r4,r5,0,10,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_82430E24"))) PPC_WEAK_FUNC(sub_82430E24);
PPC_FUNC_IMPL(__imp__sub_82430E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82430E28"))) PPC_WEAK_FUNC(sub_82430E28);
PPC_FUNC_IMPL(__imp__sub_82430E28) {
	PPC_FUNC_PROLOGUE();
	// li r11,23
	ctx.r11.s64 = 23;
	// stb r11,-256(r1)
	PPC_STORE_U8(ctx.r1.u32 + -256, ctx.r11.u8);
	// stb r11,-255(r1)
	PPC_STORE_U8(ctx.r1.u32 + -255, ctx.r11.u8);
	// stb r11,-254(r1)
	PPC_STORE_U8(ctx.r1.u32 + -254, ctx.r11.u8);
	// stb r11,-253(r1)
	PPC_STORE_U8(ctx.r1.u32 + -253, ctx.r11.u8);
	// stb r11,-252(r1)
	PPC_STORE_U8(ctx.r1.u32 + -252, ctx.r11.u8);
	// stb r11,-251(r1)
	PPC_STORE_U8(ctx.r1.u32 + -251, ctx.r11.u8);
	// stb r11,-250(r1)
	PPC_STORE_U8(ctx.r1.u32 + -250, ctx.r11.u8);
	// stb r11,-249(r1)
	PPC_STORE_U8(ctx.r1.u32 + -249, ctx.r11.u8);
	// stb r11,-248(r1)
	PPC_STORE_U8(ctx.r1.u32 + -248, ctx.r11.u8);
	// stb r11,-247(r1)
	PPC_STORE_U8(ctx.r1.u32 + -247, ctx.r11.u8);
	// stb r11,-246(r1)
	PPC_STORE_U8(ctx.r1.u32 + -246, ctx.r11.u8);
	// stb r11,-245(r1)
	PPC_STORE_U8(ctx.r1.u32 + -245, ctx.r11.u8);
	// stb r11,-244(r1)
	PPC_STORE_U8(ctx.r1.u32 + -244, ctx.r11.u8);
	// stb r11,-243(r1)
	PPC_STORE_U8(ctx.r1.u32 + -243, ctx.r11.u8);
	// stb r11,-242(r1)
	PPC_STORE_U8(ctx.r1.u32 + -242, ctx.r11.u8);
	// stb r11,-241(r1)
	PPC_STORE_U8(ctx.r1.u32 + -241, ctx.r11.u8);
	// stb r11,-240(r1)
	PPC_STORE_U8(ctx.r1.u32 + -240, ctx.r11.u8);
	// stb r11,-239(r1)
	PPC_STORE_U8(ctx.r1.u32 + -239, ctx.r11.u8);
	// stb r11,-238(r1)
	PPC_STORE_U8(ctx.r1.u32 + -238, ctx.r11.u8);
	// stb r11,-237(r1)
	PPC_STORE_U8(ctx.r1.u32 + -237, ctx.r11.u8);
	// stb r11,-236(r1)
	PPC_STORE_U8(ctx.r1.u32 + -236, ctx.r11.u8);
	// stb r11,-235(r1)
	PPC_STORE_U8(ctx.r1.u32 + -235, ctx.r11.u8);
	// stb r11,-234(r1)
	PPC_STORE_U8(ctx.r1.u32 + -234, ctx.r11.u8);
	// stb r11,-233(r1)
	PPC_STORE_U8(ctx.r1.u32 + -233, ctx.r11.u8);
	// stb r11,-232(r1)
	PPC_STORE_U8(ctx.r1.u32 + -232, ctx.r11.u8);
	// stb r11,-231(r1)
	PPC_STORE_U8(ctx.r1.u32 + -231, ctx.r11.u8);
	// stb r11,-230(r1)
	PPC_STORE_U8(ctx.r1.u32 + -230, ctx.r11.u8);
	// stb r11,-229(r1)
	PPC_STORE_U8(ctx.r1.u32 + -229, ctx.r11.u8);
	// stb r11,-228(r1)
	PPC_STORE_U8(ctx.r1.u32 + -228, ctx.r11.u8);
	// stb r11,-227(r1)
	PPC_STORE_U8(ctx.r1.u32 + -227, ctx.r11.u8);
	// stb r11,-226(r1)
	PPC_STORE_U8(ctx.r1.u32 + -226, ctx.r11.u8);
	// stb r11,-225(r1)
	PPC_STORE_U8(ctx.r1.u32 + -225, ctx.r11.u8);
	// stb r11,-224(r1)
	PPC_STORE_U8(ctx.r1.u32 + -224, ctx.r11.u8);
	// stb r11,-223(r1)
	PPC_STORE_U8(ctx.r1.u32 + -223, ctx.r11.u8);
	// stb r11,-222(r1)
	PPC_STORE_U8(ctx.r1.u32 + -222, ctx.r11.u8);
	// stb r11,-221(r1)
	PPC_STORE_U8(ctx.r1.u32 + -221, ctx.r11.u8);
	// stb r11,-220(r1)
	PPC_STORE_U8(ctx.r1.u32 + -220, ctx.r11.u8);
	// stb r11,-219(r1)
	PPC_STORE_U8(ctx.r1.u32 + -219, ctx.r11.u8);
	// stb r11,-218(r1)
	PPC_STORE_U8(ctx.r1.u32 + -218, ctx.r11.u8);
	// stb r11,-217(r1)
	PPC_STORE_U8(ctx.r1.u32 + -217, ctx.r11.u8);
	// stb r11,-216(r1)
	PPC_STORE_U8(ctx.r1.u32 + -216, ctx.r11.u8);
	// stb r11,-215(r1)
	PPC_STORE_U8(ctx.r1.u32 + -215, ctx.r11.u8);
	// stb r11,-214(r1)
	PPC_STORE_U8(ctx.r1.u32 + -214, ctx.r11.u8);
	// stb r11,-213(r1)
	PPC_STORE_U8(ctx.r1.u32 + -213, ctx.r11.u8);
	// stb r11,-212(r1)
	PPC_STORE_U8(ctx.r1.u32 + -212, ctx.r11.u8);
	// stb r11,-211(r1)
	PPC_STORE_U8(ctx.r1.u32 + -211, ctx.r11.u8);
	// stb r11,-210(r1)
	PPC_STORE_U8(ctx.r1.u32 + -210, ctx.r11.u8);
	// stb r11,-209(r1)
	PPC_STORE_U8(ctx.r1.u32 + -209, ctx.r11.u8);
	// stb r11,-208(r1)
	PPC_STORE_U8(ctx.r1.u32 + -208, ctx.r11.u8);
	// stb r11,-207(r1)
	PPC_STORE_U8(ctx.r1.u32 + -207, ctx.r11.u8);
	// stb r11,-206(r1)
	PPC_STORE_U8(ctx.r1.u32 + -206, ctx.r11.u8);
	// stb r11,-205(r1)
	PPC_STORE_U8(ctx.r1.u32 + -205, ctx.r11.u8);
	// stb r11,-204(r1)
	PPC_STORE_U8(ctx.r1.u32 + -204, ctx.r11.u8);
	// stb r11,-203(r1)
	PPC_STORE_U8(ctx.r1.u32 + -203, ctx.r11.u8);
	// stb r11,-202(r1)
	PPC_STORE_U8(ctx.r1.u32 + -202, ctx.r11.u8);
	// stb r11,-201(r1)
	PPC_STORE_U8(ctx.r1.u32 + -201, ctx.r11.u8);
	// stb r11,-200(r1)
	PPC_STORE_U8(ctx.r1.u32 + -200, ctx.r11.u8);
	// stb r11,-199(r1)
	PPC_STORE_U8(ctx.r1.u32 + -199, ctx.r11.u8);
	// stb r11,-198(r1)
	PPC_STORE_U8(ctx.r1.u32 + -198, ctx.r11.u8);
	// stb r11,-197(r1)
	PPC_STORE_U8(ctx.r1.u32 + -197, ctx.r11.u8);
	// stb r11,-196(r1)
	PPC_STORE_U8(ctx.r1.u32 + -196, ctx.r11.u8);
	// stb r11,-195(r1)
	PPC_STORE_U8(ctx.r1.u32 + -195, ctx.r11.u8);
	// stb r11,-194(r1)
	PPC_STORE_U8(ctx.r1.u32 + -194, ctx.r11.u8);
	// stb r11,-193(r1)
	PPC_STORE_U8(ctx.r1.u32 + -193, ctx.r11.u8);
	// stb r11,-192(r1)
	PPC_STORE_U8(ctx.r1.u32 + -192, ctx.r11.u8);
	// stb r11,-191(r1)
	PPC_STORE_U8(ctx.r1.u32 + -191, ctx.r11.u8);
	// stb r11,-190(r1)
	PPC_STORE_U8(ctx.r1.u32 + -190, ctx.r11.u8);
	// stb r11,-189(r1)
	PPC_STORE_U8(ctx.r1.u32 + -189, ctx.r11.u8);
	// stb r11,-188(r1)
	PPC_STORE_U8(ctx.r1.u32 + -188, ctx.r11.u8);
	// stb r11,-187(r1)
	PPC_STORE_U8(ctx.r1.u32 + -187, ctx.r11.u8);
	// stb r11,-186(r1)
	PPC_STORE_U8(ctx.r1.u32 + -186, ctx.r11.u8);
	// stb r11,-185(r1)
	PPC_STORE_U8(ctx.r1.u32 + -185, ctx.r11.u8);
	// stb r11,-184(r1)
	PPC_STORE_U8(ctx.r1.u32 + -184, ctx.r11.u8);
	// stb r11,-183(r1)
	PPC_STORE_U8(ctx.r1.u32 + -183, ctx.r11.u8);
	// stb r11,-182(r1)
	PPC_STORE_U8(ctx.r1.u32 + -182, ctx.r11.u8);
	// stb r11,-181(r1)
	PPC_STORE_U8(ctx.r1.u32 + -181, ctx.r11.u8);
	// stb r11,-180(r1)
	PPC_STORE_U8(ctx.r1.u32 + -180, ctx.r11.u8);
	// stb r11,-179(r1)
	PPC_STORE_U8(ctx.r1.u32 + -179, ctx.r11.u8);
	// stb r11,-178(r1)
	PPC_STORE_U8(ctx.r1.u32 + -178, ctx.r11.u8);
	// stb r11,-177(r1)
	PPC_STORE_U8(ctx.r1.u32 + -177, ctx.r11.u8);
	// li r9,10
	ctx.r9.s64 = 10;
	// stb r11,-176(r1)
	PPC_STORE_U8(ctx.r1.u32 + -176, ctx.r11.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,-175(r1)
	PPC_STORE_U8(ctx.r1.u32 + -175, ctx.r11.u8);
	// stb r11,-174(r1)
	PPC_STORE_U8(ctx.r1.u32 + -174, ctx.r11.u8);
	// stb r11,-173(r1)
	PPC_STORE_U8(ctx.r1.u32 + -173, ctx.r11.u8);
	// stb r11,-172(r1)
	PPC_STORE_U8(ctx.r1.u32 + -172, ctx.r11.u8);
	// stb r9,-155(r1)
	PPC_STORE_U8(ctx.r1.u32 + -155, ctx.r9.u8);
	// stb r9,-152(r1)
	PPC_STORE_U8(ctx.r1.u32 + -152, ctx.r9.u8);
	// li r9,14
	ctx.r9.s64 = 14;
	// stb r11,-171(r1)
	PPC_STORE_U8(ctx.r1.u32 + -171, ctx.r11.u8);
	// stb r11,-170(r1)
	PPC_STORE_U8(ctx.r1.u32 + -170, ctx.r11.u8);
	// stb r11,-169(r1)
	PPC_STORE_U8(ctx.r1.u32 + -169, ctx.r11.u8);
	// stb r11,-168(r1)
	PPC_STORE_U8(ctx.r1.u32 + -168, ctx.r11.u8);
	// stb r11,-167(r1)
	PPC_STORE_U8(ctx.r1.u32 + -167, ctx.r11.u8);
	// stb r11,-166(r1)
	PPC_STORE_U8(ctx.r1.u32 + -166, ctx.r11.u8);
	// stb r11,-165(r1)
	PPC_STORE_U8(ctx.r1.u32 + -165, ctx.r11.u8);
	// stb r11,-164(r1)
	PPC_STORE_U8(ctx.r1.u32 + -164, ctx.r11.u8);
	// stb r11,-163(r1)
	PPC_STORE_U8(ctx.r1.u32 + -163, ctx.r11.u8);
	// stb r11,-162(r1)
	PPC_STORE_U8(ctx.r1.u32 + -162, ctx.r11.u8);
	// stb r11,-161(r1)
	PPC_STORE_U8(ctx.r1.u32 + -161, ctx.r11.u8);
	// stb r11,-160(r1)
	PPC_STORE_U8(ctx.r1.u32 + -160, ctx.r11.u8);
	// stb r11,-159(r1)
	PPC_STORE_U8(ctx.r1.u32 + -159, ctx.r11.u8);
	// stb r11,-158(r1)
	PPC_STORE_U8(ctx.r1.u32 + -158, ctx.r11.u8);
	// stb r10,-157(r1)
	PPC_STORE_U8(ctx.r1.u32 + -157, ctx.r10.u8);
	// stb r11,-156(r1)
	PPC_STORE_U8(ctx.r1.u32 + -156, ctx.r11.u8);
	// stb r10,-154(r1)
	PPC_STORE_U8(ctx.r1.u32 + -154, ctx.r10.u8);
	// stb r10,-153(r1)
	PPC_STORE_U8(ctx.r1.u32 + -153, ctx.r10.u8);
	// stb r10,-151(r1)
	PPC_STORE_U8(ctx.r1.u32 + -151, ctx.r10.u8);
	// stb r11,-150(r1)
	PPC_STORE_U8(ctx.r1.u32 + -150, ctx.r11.u8);
	// stb r11,-149(r1)
	PPC_STORE_U8(ctx.r1.u32 + -149, ctx.r11.u8);
	// stb r10,-148(r1)
	PPC_STORE_U8(ctx.r1.u32 + -148, ctx.r10.u8);
	// stb r11,-147(r1)
	PPC_STORE_U8(ctx.r1.u32 + -147, ctx.r11.u8);
	// stb r11,-146(r1)
	PPC_STORE_U8(ctx.r1.u32 + -146, ctx.r11.u8);
	// stb r11,-145(r1)
	PPC_STORE_U8(ctx.r1.u32 + -145, ctx.r11.u8);
	// stb r11,-144(r1)
	PPC_STORE_U8(ctx.r1.u32 + -144, ctx.r11.u8);
	// stb r11,-143(r1)
	PPC_STORE_U8(ctx.r1.u32 + -143, ctx.r11.u8);
	// stb r9,-142(r1)
	PPC_STORE_U8(ctx.r1.u32 + -142, ctx.r9.u8);
	// stb r10,-141(r1)
	PPC_STORE_U8(ctx.r1.u32 + -141, ctx.r10.u8);
	// stb r10,-140(r1)
	PPC_STORE_U8(ctx.r1.u32 + -140, ctx.r10.u8);
	// stb r11,-139(r1)
	PPC_STORE_U8(ctx.r1.u32 + -139, ctx.r11.u8);
	// stb r11,-138(r1)
	PPC_STORE_U8(ctx.r1.u32 + -138, ctx.r11.u8);
	// stb r11,-137(r1)
	PPC_STORE_U8(ctx.r1.u32 + -137, ctx.r11.u8);
	// stb r11,-136(r1)
	PPC_STORE_U8(ctx.r1.u32 + -136, ctx.r11.u8);
	// stb r11,-135(r1)
	PPC_STORE_U8(ctx.r1.u32 + -135, ctx.r11.u8);
	// stb r11,-134(r1)
	PPC_STORE_U8(ctx.r1.u32 + -134, ctx.r11.u8);
	// stb r11,-133(r1)
	PPC_STORE_U8(ctx.r1.u32 + -133, ctx.r11.u8);
	// stb r11,-132(r1)
	PPC_STORE_U8(ctx.r1.u32 + -132, ctx.r11.u8);
	// stb r11,-131(r1)
	PPC_STORE_U8(ctx.r1.u32 + -131, ctx.r11.u8);
	// stb r11,-130(r1)
	PPC_STORE_U8(ctx.r1.u32 + -130, ctx.r11.u8);
	// stb r11,-129(r1)
	PPC_STORE_U8(ctx.r1.u32 + -129, ctx.r11.u8);
	// stb r11,-128(r1)
	PPC_STORE_U8(ctx.r1.u32 + -128, ctx.r11.u8);
	// stb r11,-127(r1)
	PPC_STORE_U8(ctx.r1.u32 + -127, ctx.r11.u8);
	// stb r11,-126(r1)
	PPC_STORE_U8(ctx.r1.u32 + -126, ctx.r11.u8);
	// stb r11,-125(r1)
	PPC_STORE_U8(ctx.r1.u32 + -125, ctx.r11.u8);
	// stb r11,-124(r1)
	PPC_STORE_U8(ctx.r1.u32 + -124, ctx.r11.u8);
	// stb r11,-123(r1)
	PPC_STORE_U8(ctx.r1.u32 + -123, ctx.r11.u8);
	// stb r11,-122(r1)
	PPC_STORE_U8(ctx.r1.u32 + -122, ctx.r11.u8);
	// stb r11,-121(r1)
	PPC_STORE_U8(ctx.r1.u32 + -121, ctx.r11.u8);
	// stb r11,-120(r1)
	PPC_STORE_U8(ctx.r1.u32 + -120, ctx.r11.u8);
	// stb r11,-119(r1)
	PPC_STORE_U8(ctx.r1.u32 + -119, ctx.r11.u8);
	// stb r11,-118(r1)
	PPC_STORE_U8(ctx.r1.u32 + -118, ctx.r11.u8);
	// stb r11,-117(r1)
	PPC_STORE_U8(ctx.r1.u32 + -117, ctx.r11.u8);
	// stb r11,-116(r1)
	PPC_STORE_U8(ctx.r1.u32 + -116, ctx.r11.u8);
	// stb r11,-115(r1)
	PPC_STORE_U8(ctx.r1.u32 + -115, ctx.r11.u8);
	// stb r11,-114(r1)
	PPC_STORE_U8(ctx.r1.u32 + -114, ctx.r11.u8);
	// stb r11,-113(r1)
	PPC_STORE_U8(ctx.r1.u32 + -113, ctx.r11.u8);
	// stb r11,-112(r1)
	PPC_STORE_U8(ctx.r1.u32 + -112, ctx.r11.u8);
	// stb r11,-111(r1)
	PPC_STORE_U8(ctx.r1.u32 + -111, ctx.r11.u8);
	// stb r11,-110(r1)
	PPC_STORE_U8(ctx.r1.u32 + -110, ctx.r11.u8);
	// stb r11,-109(r1)
	PPC_STORE_U8(ctx.r1.u32 + -109, ctx.r11.u8);
	// stb r11,-108(r1)
	PPC_STORE_U8(ctx.r1.u32 + -108, ctx.r11.u8);
	// stb r11,-107(r1)
	PPC_STORE_U8(ctx.r1.u32 + -107, ctx.r11.u8);
	// stb r11,-106(r1)
	PPC_STORE_U8(ctx.r1.u32 + -106, ctx.r11.u8);
	// stb r11,-105(r1)
	PPC_STORE_U8(ctx.r1.u32 + -105, ctx.r11.u8);
	// stb r11,-104(r1)
	PPC_STORE_U8(ctx.r1.u32 + -104, ctx.r11.u8);
	// stb r11,-103(r1)
	PPC_STORE_U8(ctx.r1.u32 + -103, ctx.r11.u8);
	// stb r11,-102(r1)
	PPC_STORE_U8(ctx.r1.u32 + -102, ctx.r11.u8);
	// stb r11,-101(r1)
	PPC_STORE_U8(ctx.r1.u32 + -101, ctx.r11.u8);
	// stb r11,-100(r1)
	PPC_STORE_U8(ctx.r1.u32 + -100, ctx.r11.u8);
	// stb r11,-99(r1)
	PPC_STORE_U8(ctx.r1.u32 + -99, ctx.r11.u8);
	// stb r11,-98(r1)
	PPC_STORE_U8(ctx.r1.u32 + -98, ctx.r11.u8);
	// stb r11,-97(r1)
	PPC_STORE_U8(ctx.r1.u32 + -97, ctx.r11.u8);
	// stb r11,-96(r1)
	PPC_STORE_U8(ctx.r1.u32 + -96, ctx.r11.u8);
	// stb r11,-95(r1)
	PPC_STORE_U8(ctx.r1.u32 + -95, ctx.r11.u8);
	// stb r11,-94(r1)
	PPC_STORE_U8(ctx.r1.u32 + -94, ctx.r11.u8);
	// stb r11,-93(r1)
	PPC_STORE_U8(ctx.r1.u32 + -93, ctx.r11.u8);
	// stb r11,-92(r1)
	PPC_STORE_U8(ctx.r1.u32 + -92, ctx.r11.u8);
	// stb r11,-91(r1)
	PPC_STORE_U8(ctx.r1.u32 + -91, ctx.r11.u8);
	// stb r11,-90(r1)
	PPC_STORE_U8(ctx.r1.u32 + -90, ctx.r11.u8);
	// stb r11,-89(r1)
	PPC_STORE_U8(ctx.r1.u32 + -89, ctx.r11.u8);
	// stb r11,-88(r1)
	PPC_STORE_U8(ctx.r1.u32 + -88, ctx.r11.u8);
	// stb r11,-87(r1)
	PPC_STORE_U8(ctx.r1.u32 + -87, ctx.r11.u8);
	// stb r11,-86(r1)
	PPC_STORE_U8(ctx.r1.u32 + -86, ctx.r11.u8);
	// stb r11,-85(r1)
	PPC_STORE_U8(ctx.r1.u32 + -85, ctx.r11.u8);
	// stb r11,-84(r1)
	PPC_STORE_U8(ctx.r1.u32 + -84, ctx.r11.u8);
	// stb r11,-83(r1)
	PPC_STORE_U8(ctx.r1.u32 + -83, ctx.r11.u8);
	// stb r11,-82(r1)
	PPC_STORE_U8(ctx.r1.u32 + -82, ctx.r11.u8);
	// stb r11,-81(r1)
	PPC_STORE_U8(ctx.r1.u32 + -81, ctx.r11.u8);
	// stb r11,-80(r1)
	PPC_STORE_U8(ctx.r1.u32 + -80, ctx.r11.u8);
	// stb r11,-79(r1)
	PPC_STORE_U8(ctx.r1.u32 + -79, ctx.r11.u8);
	// stb r11,-78(r1)
	PPC_STORE_U8(ctx.r1.u32 + -78, ctx.r11.u8);
	// stb r11,-77(r1)
	PPC_STORE_U8(ctx.r1.u32 + -77, ctx.r11.u8);
	// stb r11,-76(r1)
	PPC_STORE_U8(ctx.r1.u32 + -76, ctx.r11.u8);
	// stb r11,-75(r1)
	PPC_STORE_U8(ctx.r1.u32 + -75, ctx.r11.u8);
	// stb r11,-74(r1)
	PPC_STORE_U8(ctx.r1.u32 + -74, ctx.r11.u8);
	// stb r11,-73(r1)
	PPC_STORE_U8(ctx.r1.u32 + -73, ctx.r11.u8);
	// stb r11,-72(r1)
	PPC_STORE_U8(ctx.r1.u32 + -72, ctx.r11.u8);
	// stb r11,-71(r1)
	PPC_STORE_U8(ctx.r1.u32 + -71, ctx.r11.u8);
	// stb r11,-70(r1)
	PPC_STORE_U8(ctx.r1.u32 + -70, ctx.r11.u8);
	// stb r11,-69(r1)
	PPC_STORE_U8(ctx.r1.u32 + -69, ctx.r11.u8);
	// stb r11,-68(r1)
	PPC_STORE_U8(ctx.r1.u32 + -68, ctx.r11.u8);
	// stb r11,-67(r1)
	PPC_STORE_U8(ctx.r1.u32 + -67, ctx.r11.u8);
	// stb r11,-66(r1)
	PPC_STORE_U8(ctx.r1.u32 + -66, ctx.r11.u8);
	// stb r11,-65(r1)
	PPC_STORE_U8(ctx.r1.u32 + -65, ctx.r11.u8);
	// stb r11,-64(r1)
	PPC_STORE_U8(ctx.r1.u32 + -64, ctx.r11.u8);
	// stb r11,-63(r1)
	PPC_STORE_U8(ctx.r1.u32 + -63, ctx.r11.u8);
	// stb r11,-62(r1)
	PPC_STORE_U8(ctx.r1.u32 + -62, ctx.r11.u8);
	// stb r11,-61(r1)
	PPC_STORE_U8(ctx.r1.u32 + -61, ctx.r11.u8);
	// stb r11,-60(r1)
	PPC_STORE_U8(ctx.r1.u32 + -60, ctx.r11.u8);
	// stb r11,-59(r1)
	PPC_STORE_U8(ctx.r1.u32 + -59, ctx.r11.u8);
	// stb r11,-58(r1)
	PPC_STORE_U8(ctx.r1.u32 + -58, ctx.r11.u8);
	// stb r11,-57(r1)
	PPC_STORE_U8(ctx.r1.u32 + -57, ctx.r11.u8);
	// stb r11,-56(r1)
	PPC_STORE_U8(ctx.r1.u32 + -56, ctx.r11.u8);
	// stb r11,-55(r1)
	PPC_STORE_U8(ctx.r1.u32 + -55, ctx.r11.u8);
	// stb r11,-54(r1)
	PPC_STORE_U8(ctx.r1.u32 + -54, ctx.r11.u8);
	// stb r11,-53(r1)
	PPC_STORE_U8(ctx.r1.u32 + -53, ctx.r11.u8);
	// stb r11,-52(r1)
	PPC_STORE_U8(ctx.r1.u32 + -52, ctx.r11.u8);
	// stb r11,-51(r1)
	PPC_STORE_U8(ctx.r1.u32 + -51, ctx.r11.u8);
	// stb r11,-50(r1)
	PPC_STORE_U8(ctx.r1.u32 + -50, ctx.r11.u8);
	// stb r11,-49(r1)
	PPC_STORE_U8(ctx.r1.u32 + -49, ctx.r11.u8);
	// stb r11,-48(r1)
	PPC_STORE_U8(ctx.r1.u32 + -48, ctx.r11.u8);
	// stb r11,-47(r1)
	PPC_STORE_U8(ctx.r1.u32 + -47, ctx.r11.u8);
	// stb r11,-46(r1)
	PPC_STORE_U8(ctx.r1.u32 + -46, ctx.r11.u8);
	// stb r11,-45(r1)
	PPC_STORE_U8(ctx.r1.u32 + -45, ctx.r11.u8);
	// stb r11,-44(r1)
	PPC_STORE_U8(ctx.r1.u32 + -44, ctx.r11.u8);
	// stb r11,-43(r1)
	PPC_STORE_U8(ctx.r1.u32 + -43, ctx.r11.u8);
	// stb r11,-42(r1)
	PPC_STORE_U8(ctx.r1.u32 + -42, ctx.r11.u8);
	// stb r11,-41(r1)
	PPC_STORE_U8(ctx.r1.u32 + -41, ctx.r11.u8);
	// stb r11,-40(r1)
	PPC_STORE_U8(ctx.r1.u32 + -40, ctx.r11.u8);
	// stb r11,-39(r1)
	PPC_STORE_U8(ctx.r1.u32 + -39, ctx.r11.u8);
	// stb r11,-38(r1)
	PPC_STORE_U8(ctx.r1.u32 + -38, ctx.r11.u8);
	// stb r11,-37(r1)
	PPC_STORE_U8(ctx.r1.u32 + -37, ctx.r11.u8);
	// stb r11,-36(r1)
	PPC_STORE_U8(ctx.r1.u32 + -36, ctx.r11.u8);
	// stb r11,-35(r1)
	PPC_STORE_U8(ctx.r1.u32 + -35, ctx.r11.u8);
	// stb r11,-34(r1)
	PPC_STORE_U8(ctx.r1.u32 + -34, ctx.r11.u8);
	// stb r11,-33(r1)
	PPC_STORE_U8(ctx.r1.u32 + -33, ctx.r11.u8);
	// stb r11,-32(r1)
	PPC_STORE_U8(ctx.r1.u32 + -32, ctx.r11.u8);
	// stb r11,-31(r1)
	PPC_STORE_U8(ctx.r1.u32 + -31, ctx.r11.u8);
	// stb r11,-30(r1)
	PPC_STORE_U8(ctx.r1.u32 + -30, ctx.r11.u8);
	// stb r11,-29(r1)
	PPC_STORE_U8(ctx.r1.u32 + -29, ctx.r11.u8);
	// stb r11,-28(r1)
	PPC_STORE_U8(ctx.r1.u32 + -28, ctx.r11.u8);
	// stb r11,-27(r1)
	PPC_STORE_U8(ctx.r1.u32 + -27, ctx.r11.u8);
	// stb r11,-26(r1)
	PPC_STORE_U8(ctx.r1.u32 + -26, ctx.r11.u8);
	// stb r11,-25(r1)
	PPC_STORE_U8(ctx.r1.u32 + -25, ctx.r11.u8);
	// stb r11,-24(r1)
	PPC_STORE_U8(ctx.r1.u32 + -24, ctx.r11.u8);
	// stb r11,-23(r1)
	PPC_STORE_U8(ctx.r1.u32 + -23, ctx.r11.u8);
	// stb r11,-22(r1)
	PPC_STORE_U8(ctx.r1.u32 + -22, ctx.r11.u8);
	// stb r11,-21(r1)
	PPC_STORE_U8(ctx.r1.u32 + -21, ctx.r11.u8);
	// stb r11,-20(r1)
	PPC_STORE_U8(ctx.r1.u32 + -20, ctx.r11.u8);
	// stb r11,-19(r1)
	PPC_STORE_U8(ctx.r1.u32 + -19, ctx.r11.u8);
	// stb r11,-18(r1)
	PPC_STORE_U8(ctx.r1.u32 + -18, ctx.r11.u8);
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r6,r1,-256
	ctx.r6.s64 = ctx.r1.s64 + -256;
	// stb r11,-17(r1)
	PPC_STORE_U8(ctx.r1.u32 + -17, ctx.r11.u8);
	// addi r5,r1,-256
	ctx.r5.s64 = ctx.r1.s64 + -256;
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// lbz r3,-1(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// stb r11,-12(r1)
	PPC_STORE_U8(ctx.r1.u32 + -12, ctx.r11.u8);
	// stb r11,-11(r1)
	PPC_STORE_U8(ctx.r1.u32 + -11, ctx.r11.u8);
	// stb r11,-10(r1)
	PPC_STORE_U8(ctx.r1.u32 + -10, ctx.r11.u8);
	// stb r11,-9(r1)
	PPC_STORE_U8(ctx.r1.u32 + -9, ctx.r11.u8);
	// stb r11,-8(r1)
	PPC_STORE_U8(ctx.r1.u32 + -8, ctx.r11.u8);
	// stb r11,-7(r1)
	PPC_STORE_U8(ctx.r1.u32 + -7, ctx.r11.u8);
	// stb r11,-6(r1)
	PPC_STORE_U8(ctx.r1.u32 + -6, ctx.r11.u8);
	// stb r11,-5(r1)
	PPC_STORE_U8(ctx.r1.u32 + -5, ctx.r11.u8);
	// stb r11,-4(r1)
	PPC_STORE_U8(ctx.r1.u32 + -4, ctx.r11.u8);
	// stb r11,-3(r1)
	PPC_STORE_U8(ctx.r1.u32 + -3, ctx.r11.u8);
	// stb r11,-2(r1)
	PPC_STORE_U8(ctx.r1.u32 + -2, ctx.r11.u8);
	// stb r11,-1(r1)
	PPC_STORE_U8(ctx.r1.u32 + -1, ctx.r11.u8);
	// lbzx r11,r3,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// lbzx r10,r7,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82431260"))) PPC_WEAK_FUNC(sub_82431260);
PPC_FUNC_IMPL(__imp__sub_82431260) {
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
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x824313b0
	if (ctx.cr6.gt) goto loc_824313B0;
	// bl 0x82430e28
	ctx.lr = 0x82431284;
	sub_82430E28(ctx, base);
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// bgt cr6,0x824313b0
	if (ctx.cr6.gt) goto loc_824313B0;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r10,r11,8320
	ctx.r10.s64 = ctx.r11.s64 + 8320;
	// lbzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82431310
	if (ctx.cr6.lt) goto loc_82431310;
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,8216
	ctx.r10.s64 = ctx.r10.s64 + 8216;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824313b0
	if (!ctx.cr6.eq) goto loc_824313B0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
loc_824312D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r6,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x824312f4
	if (ctx.cr6.eq) goto loc_824312F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824312d0
	if (ctx.cr6.eq) goto loc_824312D0;
loc_824312F4:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x824313b0
	if (!ctx.cr6.eq) goto loc_824313B0;
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
loc_82431310:
	// cmpwi cr6,r11,-13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -13, ctx.xer);
	// bge cr6,0x824313b0
	if (!ctx.cr6.lt) goto loc_824313B0;
	// subfic r11,r11,-14
	ctx.xer.ca = ctx.r11.u32 <= 4294967282;
	ctx.r11.s64 = -14 - ctx.r11.s64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// addi r9,r9,8216
	ctx.r9.s64 = ctx.r9.s64 + 8216;
	// lbzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r3,r11,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// addi r9,r9,104
	ctx.r9.s64 = ctx.r9.s64 + 104;
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x824313b0
	if (!ctx.cr6.lt) goto loc_824313B0;
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
loc_8243135C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x824313a4
	if (!ctx.cr6.eq) goto loc_824313A4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
loc_82431378:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8243139c
	if (ctx.cr6.eq) goto loc_8243139C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82431378
	if (ctx.cr6.eq) goto loc_82431378;
loc_8243139C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824313b4
	if (ctx.cr6.eq) goto loc_824313B4;
loc_824313A4:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8243135c
	if (ctx.cr6.lt) goto loc_8243135C;
loc_824313B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824313B4:
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

__attribute__((alias("__imp__sub_824313C8"))) PPC_WEAK_FUNC(sub_824313C8);
PPC_FUNC_IMPL(__imp__sub_824313C8) {
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
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82431400
	if (ctx.cr6.eq) goto loc_82431400;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824313F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26252(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26252, ctx.r11.u32);
loc_82431400:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26248);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82431428
	if (ctx.cr6.eq) goto loc_82431428;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82431420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26248, ctx.r11.u32);
loc_82431428:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82431450
	if (ctx.cr6.eq) goto loc_82431450;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82431448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26244(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26244, ctx.r11.u32);
loc_82431450:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82431478
	if (ctx.cr6.eq) goto loc_82431478;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82431470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26240, ctx.r11.u32);
loc_82431478:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824314a0
	if (ctx.cr6.eq) goto loc_824314A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82431498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26236(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26236, ctx.r11.u32);
loc_824314A0:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824314c8
	if (ctx.cr6.eq) goto loc_824314C8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824314C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26232(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26232, ctx.r11.u32);
loc_824314C8:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824314f0
	if (ctx.cr6.eq) goto loc_824314F0;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824314E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26228(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26228, ctx.r11.u32);
loc_824314F0:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82431518
	if (ctx.cr6.eq) goto loc_82431518;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82431510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26224, ctx.r11.u32);
loc_82431518:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82431540
	if (ctx.cr6.eq) goto loc_82431540;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82431538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26220, ctx.r11.u32);
loc_82431540:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82431568
	if (ctx.cr6.eq) goto loc_82431568;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82431560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26216, ctx.r11.u32);
loc_82431568:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82431590
	if (ctx.cr6.eq) goto loc_82431590;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82431588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26212(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26212, ctx.r11.u32);
loc_82431590:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824315b8
	if (ctx.cr6.eq) goto loc_824315B8;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x824315B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-26208(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26208, ctx.r11.u32);
loc_824315B8:
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

__attribute__((alias("__imp__sub_824315CC"))) PPC_WEAK_FUNC(sub_824315CC);
PPC_FUNC_IMPL(__imp__sub_824315CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824315D0"))) PPC_WEAK_FUNC(sub_824315D0);
PPC_FUNC_IMPL(__imp__sub_824315D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26376);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824315DC"))) PPC_WEAK_FUNC(sub_824315DC);
PPC_FUNC_IMPL(__imp__sub_824315DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824315E0"))) PPC_WEAK_FUNC(sub_824315E0);
PPC_FUNC_IMPL(__imp__sub_824315E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x824315E8;
	__savegprlr_29(ctx, base);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r31,r11,-26200
	ctx.r31.s64 = ctx.r11.s64 + -26200;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825a1308
	ctx.lr = 0x82431628;
	sub_825A1308(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82434768
	ctx.lr = 0x82431634;
	sub_82434768(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// ori r31,r8,65535
	ctx.r31.u64 = ctx.r8.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r3,r5,r31
	ctx.r3.u64 = ctx.r5.u64 + ctx.r31.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x82431680
	if (!ctx.cr6.eq) goto loc_82431680;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82431680;
	sub_8242BCD0(ctx, base);
loc_82431680:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x824316b4
	if (!ctx.cr6.eq) goto loc_824316B4;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x824316B4;
	sub_8242BCD0(ctx, base);
loc_824316B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824316BC"))) PPC_WEAK_FUNC(sub_824316BC);
PPC_FUNC_IMPL(__imp__sub_824316BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824316C0"))) PPC_WEAK_FUNC(sub_824316C0);
PPC_FUNC_IMPL(__imp__sub_824316C0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r11,r11,18388
	ctx.r11.s64 = ctx.r11.s64 + 18388;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x82431714
	if (!ctx.cr6.eq) goto loc_82431714;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82431714;
	sub_8242BCD0(ctx, base);
loc_82431714:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
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

__attribute__((alias("__imp__sub_82431734"))) PPC_WEAK_FUNC(sub_82431734);
PPC_FUNC_IMPL(__imp__sub_82431734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82431738"))) PPC_WEAK_FUNC(sub_82431738);
PPC_FUNC_IMPL(__imp__sub_82431738) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r10,-23984(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23984);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r3,-23984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -23984, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82434130
	ctx.lr = 0x82431768;
	sub_82434130(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824317c0
	if (ctx.cr6.eq) goto loc_824317C0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x824317a8
	if (!ctx.cr6.eq) goto loc_824317A8;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x824317A8;
	sub_8242BCD0(ctx, base);
loc_824317A8:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_824317C0:
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

__attribute__((alias("__imp__sub_824317D4"))) PPC_WEAK_FUNC(sub_824317D4);
PPC_FUNC_IMPL(__imp__sub_824317D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824317D8"))) PPC_WEAK_FUNC(sub_824317D8);
PPC_FUNC_IMPL(__imp__sub_824317D8) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r10,-23984(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23984);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r3,-23984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -23984, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82434130
	ctx.lr = 0x82431808;
	sub_82434130(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431860
	if (ctx.cr6.eq) goto loc_82431860;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x82431848
	if (!ctx.cr6.eq) goto loc_82431848;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82431848;
	sub_8242BCD0(ctx, base);
loc_82431848:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
loc_82431860:
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

__attribute__((alias("__imp__sub_82431874"))) PPC_WEAK_FUNC(sub_82431874);
PPC_FUNC_IMPL(__imp__sub_82431874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82431878"))) PPC_WEAK_FUNC(sub_82431878);
PPC_FUNC_IMPL(__imp__sub_82431878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// ori r12,r12,129
	ctx.r12.u64 = ctx.r12.u64 | 129;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// oris r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 738197504;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x824318c4
	if (ctx.cr6.lt) goto loc_824318C4;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// b 0x824318dc
	goto loc_824318DC;
loc_824318C4:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_824318DC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,18388
	ctx.r10.s64 = ctx.r11.s64 + 18388;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// rlwinm r7,r8,0,25,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243191C"))) PPC_WEAK_FUNC(sub_8243191C);
PPC_FUNC_IMPL(__imp__sub_8243191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82431920"))) PPC_WEAK_FUNC(sub_82431920);
PPC_FUNC_IMPL(__imp__sub_82431920) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// ori r12,r12,129
	ctx.r12.u64 = ctx.r12.u64 | 129;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// oris r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 738197504;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82431980
	if (ctx.cr6.lt) goto loc_82431980;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x82431998
	goto loc_82431998;
loc_82431980:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_82431998:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,18388
	ctx.r11.s64 = ctx.r11.s64 + 18388;
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x82434768
	ctx.lr = 0x824319B8;
	sub_82434768(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_824319D8"))) PPC_WEAK_FUNC(sub_824319D8);
PPC_FUNC_IMPL(__imp__sub_824319D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x824319E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// bl 0x8242cc78
	ctx.lr = 0x82431A18;
	sub_8242CC78(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82431a98
	if (!ctx.cr6.eq) goto loc_82431A98;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// ori r31,r7,65535
	ctx.r31.u64 = ctx.r7.u64 | 65535;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lwz r29,-26376(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26376);
	// add r6,r8,r31
	ctx.r6.u64 = ctx.r8.u64 + ctx.r31.u64;
	// sth r6,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82431a60
	if (!ctx.cr6.eq) goto loc_82431A60;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82431A60;
	sub_8242BCD0(ctx, base);
loc_82431A60:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82431a8c
	if (!ctx.cr6.eq) goto loc_82431A8C;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82431A8C;
	sub_8242BCD0(ctx, base);
loc_82431A8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82431A98:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-24144
	ctx.r31.s64 = ctx.r11.s64 + -24144;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// bl 0x8242cc78
	ctx.lr = 0x82431ABC;
	sub_8242CC78(ctx, base);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82431aec
	if (!ctx.cr6.eq) goto loc_82431AEC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// bl 0x8242c678
	ctx.lr = 0x82431ADC;
	sub_8242C678(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82431aec
	if (!ctx.cr6.lt) goto loc_82431AEC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82431AEC:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// bl 0x824362c0
	ctx.lr = 0x82431B00;
	sub_824362C0(ctx, base);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// lwz r11,-23260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431b7c
	if (ctx.cr6.eq) goto loc_82431B7C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,-23260(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23260, ctx.r9.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r8,r3,8192
	ctx.r8.u64 = ctx.r3.u64 | 536870912;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,-26592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26592);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82431b58
	if (ctx.cr6.lt) goto loc_82431B58;
	// rlwinm r6,r8,0,3,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// b 0x82431c1c
	goto loc_82431C1C;
loc_82431B58:
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stwx r11,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// b 0x82431c1c
	goto loc_82431C1C;
loc_82431B7C:
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82431B88;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82431c18
	if (ctx.cr6.eq) goto loc_82431C18;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// ori r12,r12,135
	ctx.r12.u64 = ctx.r12.u64 | 135;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// oris r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 738197504;
	// ori r9,r9,7
	ctx.r9.u64 = ctx.r9.u64 | 7;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82431bdc
	if (ctx.cr6.lt) goto loc_82431BDC;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// b 0x82431bf4
	goto loc_82431BF4;
loc_82431BDC:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_82431BF4:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r11,r11,-7660
	ctx.r11.s64 = ctx.r11.s64 + -7660;
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x82431c1c
	goto loc_82431C1C;
loc_82431C18:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82431C1C:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r31,r7,65535
	ctx.r31.u64 = ctx.r7.u64 | 65535;
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r6,r8,r31
	ctx.r6.u64 = ctx.r8.u64 + ctx.r31.u64;
	// sth r6,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82431c50
	if (!ctx.cr6.eq) goto loc_82431C50;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82431C50;
	sub_8242BCD0(ctx, base);
loc_82431C50:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82431c7c
	if (!ctx.cr6.eq) goto loc_82431C7C;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82431C7C;
	sub_8242BCD0(ctx, base);
loc_82431C7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82431C88"))) PPC_WEAK_FUNC(sub_82431C88);
PPC_FUNC_IMPL(__imp__sub_82431C88) {
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
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,-23984(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23984);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82431d48
	if (ctx.cr6.eq) goto loc_82431D48;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,-23984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23984, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r9,r11,8192
	ctx.r9.u64 = ctx.r11.u64 | 536870912;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82431ce8
	if (ctx.cr6.lt) goto loc_82431CE8;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x82431d00
	goto loc_82431D00;
loc_82431CE8:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_82431D00:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82431d20
	if (ctx.cr6.eq) goto loc_82431D20;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82431D20:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82431d34
	if (!ctx.cr6.eq) goto loc_82431D34;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82434cf8
	ctx.lr = 0x82431D34;
	sub_82434CF8(ctx, base);
loc_82431D34:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab240
	ctx.lr = 0x82431D40;
	sub_821AB240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82431d70
	goto loc_82431D70;
loc_82431D48:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82431D58;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82431d6c
	if (ctx.cr6.eq) goto loc_82431D6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82431920
	ctx.lr = 0x82431D68;
	sub_82431920(ctx, base);
	// b 0x82431d70
	goto loc_82431D70;
loc_82431D6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82431D70:
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

__attribute__((alias("__imp__sub_82431D88"))) PPC_WEAK_FUNC(sub_82431D88);
PPC_FUNC_IMPL(__imp__sub_82431D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82431D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24144
	ctx.r11.s64 = ctx.r11.s64 + -24144;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x8242c678
	ctx.lr = 0x82431DB8;
	sub_8242C678(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82431dd0
	if (ctx.cr6.eq) goto loc_82431DD0;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_82431DD0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82431de8
	if (!ctx.cr6.lt) goto loc_82431DE8;
loc_82431DD8:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26376);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82431DE8:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82435c18
	ctx.lr = 0x82431DF0;
	sub_82435C18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82431dd8
	if (ctx.cr6.eq) goto loc_82431DD8;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,8344
	ctx.r30.s64 = ctx.r11.s64 + 8344;
	// li r5,1
	ctx.r5.s64 = 1;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
	// bl 0x824361e8
	ctx.lr = 0x82431E20;
	sub_824361E8(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// lwz r31,-23984(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23984);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82431eb4
	if (ctx.cr6.eq) goto loc_82431EB4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,-23984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -23984, ctx.r10.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r9,r7,8192
	ctx.r9.u64 = ctx.r7.u64 | 536870912;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82431e6c
	if (ctx.cr6.lt) goto loc_82431E6C;
	// rlwinm r5,r9,0,3,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// b 0x82431e84
	goto loc_82431E84;
loc_82431E6C:
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82431E84:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82431e9c
	if (ctx.cr6.eq) goto loc_82431E9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82431E9C:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82431ed8
	if (!ctx.cr6.eq) goto loc_82431ED8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82434cf8
	ctx.lr = 0x82431EB0;
	sub_82434CF8(ctx, base);
	// b 0x82431ed8
	goto loc_82431ED8;
loc_82431EB4:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82431EC0;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82431ed4
	if (ctx.cr6.eq) goto loc_82431ED4;
	// bl 0x82431878
	ctx.lr = 0x82431ECC;
	sub_82431878(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82431ed8
	goto loc_82431ED8;
loc_82431ED4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82431ED8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82433da0
	ctx.lr = 0x82431EE4;
	sub_82433DA0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// sth r5,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r5.u16);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82431f14
	if (!ctx.cr6.eq) goto loc_82431F14;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82431F14;
	sub_8242BCD0(ctx, base);
loc_82431F14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82431F20"))) PPC_WEAK_FUNC(sub_82431F20);
PPC_FUNC_IMPL(__imp__sub_82431F20) {
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
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24144
	ctx.r11.s64 = ctx.r11.s64 + -24144;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x8242c678
	ctx.lr = 0x82431F58;
	sub_8242C678(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82431f70
	if (ctx.cr6.eq) goto loc_82431F70;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_82431F70:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82431f84
	if (!ctx.cr6.lt) goto loc_82431F84;
loc_82431F78:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26376);
	// b 0x82432128
	goto loc_82432128;
loc_82431F84:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82435c18
	ctx.lr = 0x82431F8C;
	sub_82435C18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82431f78
	if (ctx.cr6.eq) goto loc_82431F78;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgt cr6,0x82431fa8
	if (ctx.cr6.gt) goto loc_82431FA8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x8243200c
	goto loc_8243200C;
loc_82431FA8:
	// rlwinm r8,r11,0,24,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r8,192
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 192, ctx.xer);
	// bne cr6,0x82431fc4
	if (!ctx.cr6.eq) goto loc_82431FC4;
	// lbz r7,1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rlwimi r7,r11,6,21,25
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0x7C0) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF83F);
	// clrlwi r5,r7,21
	ctx.r5.u64 = ctx.r7.u32 & 0x7FF;
	// b 0x8243200c
	goto loc_8243200C;
loc_82431FC4:
	// rlwinm r6,r11,0,24,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r6,224
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 224, ctx.xer);
	// bne cr6,0x82431ff0
	if (!ctx.cr6.eq) goto loc_82431FF0;
	// lbz r5,1(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r4,2(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rlwimi r3,r11,6,22,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0x3C0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFC3F);
	// clrlwi r11,r3,22
	ctx.r11.u64 = ctx.r3.u32 & 0x3FF;
	// rlwimi r5,r11,6,0,25
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r5.u64 & 0xFFFFFFFF0000003F);
	// b 0x8243200c
	goto loc_8243200C;
loc_82431FF0:
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rlwimi r10,r11,6,23,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0x1C0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFE3F);
	// lbz r5,3(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// clrlwi r8,r10,23
	ctx.r8.u64 = ctx.r10.u32 & 0x1FF;
	// rlwimi r9,r8,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// rlwimi r5,r9,6,0,25
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0xFFFFFFC0) | (ctx.r5.u64 & 0xFFFFFFFF0000003F);
loc_8243200C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,18384
	ctx.r4.s64 = ctx.r11.s64 + 18384;
	// bl 0x8259d1b0
	ctx.lr = 0x8243201C;
	sub_8259D1B0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82434768
	ctx.lr = 0x82432028;
	sub_82434768(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r30,-32044
	ctx.r30.s64 = -2100035584;
	// lwz r31,-23984(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23984);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824320c4
	if (ctx.cr6.eq) goto loc_824320C4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,-23984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -23984, ctx.r10.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r9,r7,8192
	ctx.r9.u64 = ctx.r7.u64 | 536870912;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82432074
	if (ctx.cr6.lt) goto loc_82432074;
	// rlwinm r5,r9,0,3,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// b 0x8243208c
	goto loc_8243208C;
loc_82432074:
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8243208C:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x824320ac
	if (ctx.cr6.eq) goto loc_824320AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824320AC:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824320e8
	if (!ctx.cr6.eq) goto loc_824320E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82434cf8
	ctx.lr = 0x824320C0;
	sub_82434CF8(ctx, base);
	// b 0x824320e8
	goto loc_824320E8;
loc_824320C4:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,-26632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x824320D0;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824320e4
	if (ctx.cr6.eq) goto loc_824320E4;
	// bl 0x82431878
	ctx.lr = 0x824320DC;
	sub_82431878(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x824320e8
	goto loc_824320E8;
loc_824320E4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_824320E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82433da0
	ctx.lr = 0x824320F4;
	sub_82433DA0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// sth r5,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r5.u16);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82432124
	if (!ctx.cr6.eq) goto loc_82432124;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82432124;
	sub_8242BCD0(ctx, base);
loc_82432124:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82432128:
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

__attribute__((alias("__imp__sub_82432140"))) PPC_WEAK_FUNC(sub_82432140);
PPC_FUNC_IMPL(__imp__sub_82432140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82432148;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r11,8344
	ctx.r31.s64 = ctx.r11.s64 + 8344;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bl 0x8242cc78
	ctx.lr = 0x82432170;
	sub_8242CC78(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lis r26,-32044
	ctx.r26.s64 = -2100035584;
	// ble cr6,0x82432208
	if (!ctx.cr6.gt) goto loc_82432208;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r30,r11,-24144
	ctx.r30.s64 = ctx.r11.s64 + -24144;
loc_82432190:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r7,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r7.u16);
	// lwzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// bl 0x8242cc78
	ctx.lr = 0x824321C0;
	sub_8242CC78(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824348a0
	ctx.lr = 0x824321CC;
	sub_824348A0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r5,r6,r28
	ctx.r5.u64 = ctx.r6.u64 + ctx.r28.u64;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824321fc
	if (!ctx.cr6.eq) goto loc_824321FC;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x824321FC;
	sub_8242BCD0(ctx, base);
loc_824321FC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82432190
	if (ctx.cr6.lt) goto loc_82432190;
loc_82432208:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r30,-23984(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23984);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82432298
	if (ctx.cr6.eq) goto loc_82432298;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,-23984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23984, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// oris r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 536870912;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82432250
	if (ctx.cr6.lt) goto loc_82432250;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// b 0x82432268
	goto loc_82432268;
loc_82432250:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_82432268:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82432280
	if (ctx.cr6.eq) goto loc_82432280;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82432280:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824322bc
	if (!ctx.cr6.eq) goto loc_824322BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82434cf8
	ctx.lr = 0x82432294;
	sub_82434CF8(ctx, base);
	// b 0x824322bc
	goto loc_824322BC;
loc_82432298:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,-26632(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x824322A4;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824322b8
	if (ctx.cr6.eq) goto loc_824322B8;
	// bl 0x82431878
	ctx.lr = 0x824322B0;
	sub_82431878(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x824322bc
	goto loc_824322BC;
loc_824322B8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_824322BC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r5,r6,r28
	ctx.r5.u64 = ctx.r6.u64 + ctx.r28.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x824322fc
	if (!ctx.cr6.eq) goto loc_824322FC;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x824322FC;
	sub_8242BCD0(ctx, base);
loc_824322FC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
	// sth r9,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r9.u16);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82432330
	if (!ctx.cr6.eq) goto loc_82432330;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82432330;
	sub_8242BCD0(ctx, base);
loc_82432330:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243233C"))) PPC_WEAK_FUNC(sub_8243233C);
PPC_FUNC_IMPL(__imp__sub_8243233C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82432340"))) PPC_WEAK_FUNC(sub_82432340);
PPC_FUNC_IMPL(__imp__sub_82432340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82432348;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r27,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82433e90
	ctx.lr = 0x8243235C;
	sub_82433E90(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lis r26,-32044
	ctx.r26.s64 = -2100035584;
	// addi r31,r11,8344
	ctx.r31.s64 = ctx.r11.s64 + 8344;
	// ble cr6,0x82432404
	if (!ctx.cr6.gt) goto loc_82432404;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addi r30,r11,-24144
	ctx.r30.s64 = ctx.r11.s64 + -24144;
loc_82432384:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x8242c678
	ctx.lr = 0x824323A0;
	sub_8242C678(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// bl 0x82436718
	ctx.lr = 0x824323BC;
	sub_82436718(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824348a0
	ctx.lr = 0x824323C8;
	sub_824348A0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r6,r7,r28
	ctx.r6.u64 = ctx.r7.u64 + ctx.r28.u64;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824323f8
	if (!ctx.cr6.eq) goto loc_824323F8;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x824323F8;
	sub_8242BCD0(ctx, base);
loc_824323F8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82432384
	if (ctx.cr6.lt) goto loc_82432384;
loc_82432404:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r30,-23984(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23984);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82432494
	if (ctx.cr6.eq) goto loc_82432494;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,-23984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23984, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// oris r9,r11,8192
	ctx.r9.u64 = ctx.r11.u64 | 536870912;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8243244c
	if (ctx.cr6.lt) goto loc_8243244C;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// b 0x82432464
	goto loc_82432464;
loc_8243244C:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_82432464:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8243247c
	if (ctx.cr6.eq) goto loc_8243247C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8243247C:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824324b8
	if (!ctx.cr6.eq) goto loc_824324B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82434cf8
	ctx.lr = 0x82432490;
	sub_82434CF8(ctx, base);
	// b 0x824324b8
	goto loc_824324B8;
loc_82432494:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,-26632(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x824324A0;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824324b4
	if (ctx.cr6.eq) goto loc_824324B4;
	// bl 0x82431878
	ctx.lr = 0x824324AC;
	sub_82431878(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x824324b8
	goto loc_824324B8;
loc_824324B4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_824324B8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r5,r6,r28
	ctx.r5.u64 = ctx.r6.u64 + ctx.r28.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x824324f8
	if (!ctx.cr6.eq) goto loc_824324F8;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x824324F8;
	sub_8242BCD0(ctx, base);
loc_824324F8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
	// sth r9,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r9.u16);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8243252c
	if (!ctx.cr6.eq) goto loc_8243252C;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8243252C;
	sub_8242BCD0(ctx, base);
loc_8243252C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82432538"))) PPC_WEAK_FUNC(sub_82432538);
PPC_FUNC_IMPL(__imp__sub_82432538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x82432540;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r11,8344
	ctx.r31.s64 = ctx.r11.s64 + 8344;
	// lis r28,152
	ctx.r28.s64 = 9961472;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r28,r28,38527
	ctx.r28.u64 = ctx.r28.u64 | 38527;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bne cr6,0x824325c4
	if (!ctx.cr6.eq) goto loc_824325C4;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r30,-26376(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26376);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bne cr6,0x82432858
	if (!ctx.cr6.eq) goto loc_82432858;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x824325B8;
	sub_8242BCD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_824325C4:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// addi r29,r11,-24144
	ctx.r29.s64 = ctx.r11.s64 + -24144;
	// blt cr6,0x824325f0
	if (ctx.cr6.lt) goto loc_824325F0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// bl 0x8242c678
	ctx.lr = 0x824325EC;
	sub_8242C678(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_824325F0:
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// blt cr6,0x82432614
	if (ctx.cr6.lt) goto loc_82432614;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// bl 0x8242c678
	ctx.lr = 0x82432610;
	sub_8242C678(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82432614:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8242cc78
	ctx.lr = 0x82432620;
	sub_8242CC78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82435e08
	ctx.lr = 0x82432628;
	sub_82435E08(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82432634
	if (!ctx.cr6.lt) goto loc_82432634;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_82432634:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x82432640
	if (!ctx.cr6.lt) goto loc_82432640;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_82432640:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8243264c
	if (!ctx.cr6.lt) goto loc_8243264C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8243264C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x82432658
	if (!ctx.cr6.lt) goto loc_82432658;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82432658:
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82432664
	if (ctx.cr6.lt) goto loc_82432664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82432664:
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82432670
	if (ctx.cr6.lt) goto loc_82432670;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82432670:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// subf r6,r30,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r30.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bl 0x82435fd0
	ctx.lr = 0x82432690;
	sub_82435FD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r27,-32044
	ctx.r27.s64 = -2100035584;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// add r6,r7,r29
	ctx.r6.u64 = ctx.r7.u64 + ctx.r29.u64;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bne cr6,0x824326dc
	if (!ctx.cr6.eq) goto loc_824326DC;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x824326DC;
	sub_8242BCD0(ctx, base);
loc_824326DC:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8243270c
	if (!ctx.cr6.eq) goto loc_8243270C;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8243270C;
	sub_8242BCD0(ctx, base);
loc_8243270C:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r30,-23984(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23984);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8243279c
	if (ctx.cr6.eq) goto loc_8243279C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,-23984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23984, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// oris r9,r8,8192
	ctx.r9.u64 = ctx.r8.u64 | 536870912;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82432754
	if (ctx.cr6.lt) goto loc_82432754;
	// rlwinm r6,r9,0,3,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// b 0x8243276c
	goto loc_8243276C;
loc_82432754:
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_8243276C:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82432784
	if (ctx.cr6.eq) goto loc_82432784;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82432784:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824327c0
	if (!ctx.cr6.eq) goto loc_824327C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82434cf8
	ctx.lr = 0x82432798;
	sub_82434CF8(ctx, base);
	// b 0x824327c0
	goto loc_824327C0;
loc_8243279C:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,-26632(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x824327A8;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824327bc
	if (ctx.cr6.eq) goto loc_824327BC;
	// bl 0x82431878
	ctx.lr = 0x824327B4;
	sub_82431878(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x824327c0
	goto loc_824327C0;
loc_824327BC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_824327C0:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r8.u16);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r5,r6,r29
	ctx.r5.u64 = ctx.r6.u64 + ctx.r29.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x824327fc
	if (!ctx.cr6.eq) goto loc_824327FC;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x824327FC;
	sub_8242BCD0(ctx, base);
loc_824327FC:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8243282c
	if (!ctx.cr6.eq) goto loc_8243282C;
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-26632(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8243282C;
	sub_8242BCD0(ctx, base);
loc_8243282C:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 + ctx.r29.u64;
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82432858
	if (!ctx.cr6.eq) goto loc_82432858;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82432858;
	sub_8242BCD0(ctx, base);
loc_82432858:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82432864"))) PPC_WEAK_FUNC(sub_82432864);
PPC_FUNC_IMPL(__imp__sub_82432864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82432868"))) PPC_WEAK_FUNC(sub_82432868);
PPC_FUNC_IMPL(__imp__sub_82432868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad4
	ctx.lr = 0x82432870;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x8243288C;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824328a0
	if (ctx.cr6.eq) goto loc_824328A0;
	// bl 0x824519f8
	ctx.lr = 0x82432898;
	sub_824519F8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// b 0x824328a4
	goto loc_824328A4;
loc_824328A0:
	// li r19,0
	ctx.r19.s64 = 0;
loc_824328A4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x824328c8
	if (!ctx.cr6.eq) goto loc_824328C8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82450718
	ctx.lr = 0x824328BC;
	sub_82450718(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
loc_824328C8:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// blt cr6,0x82432e1c
	if (ctx.cr6.lt) goto loc_82432E1C;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r21,15
	ctx.r21.s64 = 983040;
	// addi r31,r11,-24144
	ctx.r31.s64 = ctx.r11.s64 + -24144;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// ori r21,r21,16959
	ctx.r21.u64 = ctx.r21.u64 | 16959;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r24,r11,8344
	ctx.r24.s64 = ctx.r11.s64 + 8344;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,0(r24)
	PPC_STORE_U16(ctx.r24.u32 + 0, ctx.r8.u16);
	// lwz r3,-4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// bl 0x8242cc78
	ctx.lr = 0x82432914;
	sub_8242CC78(ctx, base);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82432938
	if (ctx.cr6.lt) goto loc_82432938;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// bl 0x8242c678
	ctx.lr = 0x82432934;
	sub_8242C678(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82432938:
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// clrlwi r4,r5,25
	ctx.r4.u64 = ctx.r5.u32 & 0x7F;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82432950
	if (ctx.cr6.eq) goto loc_82432950;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
loc_82432950:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r20,-32044
	ctx.r20.s64 = -2100035584;
	// ori r22,r8,65535
	ctx.r22.u64 = ctx.r8.u64 | 65535;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r27,2(r9)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82432b44
	if (!ctx.cr6.eq) goto loc_82432B44;
	// addi r30,r7,8
	ctx.r30.s64 = ctx.r7.s64 + 8;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x82432dc4
	if (!ctx.cr6.gt) goto loc_82432DC4;
	// lis r27,-32044
	ctx.r27.s64 = -2100035584;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
loc_8243299C:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgt cr6,0x824329b4
	if (ctx.cr6.gt) goto loc_824329B4;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82432a1c
	goto loc_82432A1C;
loc_824329B4:
	// rlwinm r6,r11,0,24,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r6,192
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 192, ctx.xer);
	// bne cr6,0x824329d4
	if (!ctx.cr6.eq) goto loc_824329D4;
	// lbz r5,1(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// rlwimi r5,r11,6,21,25
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0x7C0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFF83F);
	// clrlwi r4,r5,21
	ctx.r4.u64 = ctx.r5.u32 & 0x7FF;
	// b 0x82432a1c
	goto loc_82432A1C;
loc_824329D4:
	// rlwinm r4,r11,0,24,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r4,224
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 224, ctx.xer);
	// bne cr6,0x824329fc
	if (!ctx.cr6.eq) goto loc_824329FC;
	// lbz r3,1(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r10,r30,3
	ctx.r10.s64 = ctx.r30.s64 + 3;
	// lbz r4,2(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// rlwimi r3,r11,6,22,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0x3C0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFC3F);
	// clrlwi r11,r3,22
	ctx.r11.u64 = ctx.r3.u32 & 0x3FF;
	// rlwimi r4,r11,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// b 0x82432a1c
	goto loc_82432A1C;
loc_824329FC:
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// lbz r8,2(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// rlwimi r9,r11,6,23,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0x1C0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFE3F);
	// lbz r4,3(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// clrlwi r7,r9,23
	ctx.r7.u64 = ctx.r9.u32 & 0x1FF;
	// rlwimi r8,r7,6,0,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 6) & 0xFFFFFFC0) | (ctx.r8.u64 & 0xFFFFFFFF0000003F);
	// rlwimi r4,r8,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
loc_82432A1C:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82432dc4
	if (ctx.cr6.eq) goto loc_82432DC4;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// sth r6,0(r24)
	PPC_STORE_U16(ctx.r24.u32 + 0, ctx.r6.u16);
	// bl 0x82436718
	ctx.lr = 0x82432A40;
	sub_82436718(ctx, base);
	// lwz r31,-23984(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -23984);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82432ac4
	if (ctx.cr6.eq) goto loc_82432AC4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,-23984(r29)
	PPC_STORE_U32(ctx.r29.u32 + -23984, ctx.r11.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r9,r5,8192
	ctx.r9.u64 = ctx.r5.u64 | 536870912;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -26592);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82432a80
	if (ctx.cr6.lt) goto loc_82432A80;
	// rlwinm r3,r9,0,3,1
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x82432a98
	goto loc_82432A98;
loc_82432A80:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_82432A98:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r6,r24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82432ab0
	if (ctx.cr6.eq) goto loc_82432AB0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82432AB0:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82432ae8
	if (!ctx.cr6.eq) goto loc_82432AE8;
	// bl 0x82434cf8
	ctx.lr = 0x82432AC0;
	sub_82434CF8(ctx, base);
	// b 0x82432ae8
	goto loc_82432AE8;
loc_82432AC4:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,-26632(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82432AD0;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82432ae4
	if (ctx.cr6.eq) goto loc_82432AE4;
	// bl 0x82431878
	ctx.lr = 0x82432ADC;
	sub_82431878(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82432ae8
	goto loc_82432AE8;
loc_82432AE4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82432AE8:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab240
	ctx.lr = 0x82432AF8;
	sub_821AB240(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82450718
	ctx.lr = 0x82432B08;
	sub_82450718(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82432b34
	if (!ctx.cr6.eq) goto loc_82432B34;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82432B34;
	sub_8242BCD0(ctx, base);
loc_82432B34:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r21
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x8243299c
	if (ctx.cr6.lt) goto loc_8243299C;
	// b 0x82432dc4
	goto loc_82432DC4;
loc_82432B44:
	// addi r26,r7,8
	ctx.r26.s64 = ctx.r7.s64 + 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x82432dc4
	if (!ctx.cr6.gt) goto loc_82432DC4;
	// lis r23,-32044
	ctx.r23.s64 = -2100035584;
	// lis r25,-32044
	ctx.r25.s64 = -2100035584;
loc_82432B5C:
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r6,8
	ctx.r4.s64 = ctx.r6.s64 + 8;
	// bl 0x82434150
	ctx.lr = 0x82432B70;
	sub_82434150(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,-23984(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + -23984);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82432ca4
	if (ctx.cr6.eq) goto loc_82432CA4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82432c00
	if (ctx.cr6.eq) goto loc_82432C00;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,-23984(r25)
	PPC_STORE_U32(ctx.r25.u32 + -23984, ctx.r11.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r9,r5,8192
	ctx.r9.u64 = ctx.r5.u64 | 536870912;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -26592);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82432bbc
	if (ctx.cr6.lt) goto loc_82432BBC;
	// rlwinm r3,r9,0,3,1
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x82432bd4
	goto loc_82432BD4;
loc_82432BBC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_82432BD4:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r6,r24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82432bec
	if (ctx.cr6.eq) goto loc_82432BEC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82432BEC:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82432c24
	if (!ctx.cr6.eq) goto loc_82432C24;
	// bl 0x82434cf8
	ctx.lr = 0x82432BFC;
	sub_82434CF8(ctx, base);
	// b 0x82432c24
	goto loc_82432C24;
loc_82432C00:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,-26632(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82432C0C;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82432c20
	if (ctx.cr6.eq) goto loc_82432C20;
	// bl 0x82431878
	ctx.lr = 0x82432C18;
	sub_82431878(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82432c24
	goto loc_82432C24;
loc_82432C20:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82432C24:
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// subf r5,r29,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r29.s64;
	// add r4,r26,r29
	ctx.r4.u64 = ctx.r26.u64 + ctx.r29.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// sth r11,0(r24)
	PPC_STORE_U16(ctx.r24.u32 + 0, ctx.r11.u16);
	// bl 0x82434d20
	ctx.lr = 0x82432C44;
	sub_82434D20(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82433da0
	ctx.lr = 0x82432C50;
	sub_82433DA0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82450718
	ctx.lr = 0x82432C60;
	sub_82450718(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// add r29,r30,r27
	ctx.r29.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r9,r10,r22
	ctx.r9.u64 = ctx.r10.u64 + ctx.r22.u64;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82432c98
	if (!ctx.cr6.eq) goto loc_82432C98;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82432C98;
	sub_8242BCD0(ctx, base);
loc_82432C98:
	// cmpw cr6,r28,r21
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x82432b5c
	if (ctx.cr6.lt) goto loc_82432B5C;
	// b 0x82432dc4
	goto loc_82432DC4;
loc_82432CA4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82432d28
	if (ctx.cr6.eq) goto loc_82432D28;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,-23984(r25)
	PPC_STORE_U32(ctx.r25.u32 + -23984, ctx.r11.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r9,r6,8192
	ctx.r9.u64 = ctx.r6.u64 | 536870912;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -26592);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82432ce0
	if (ctx.cr6.lt) goto loc_82432CE0;
	// rlwinm r4,r9,0,3,1
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// b 0x82432cf8
	goto loc_82432CF8;
loc_82432CE0:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82432CF8:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82432d10
	if (ctx.cr6.eq) goto loc_82432D10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82432D10:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82432d4c
	if (!ctx.cr6.eq) goto loc_82432D4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82434cf8
	ctx.lr = 0x82432D24;
	sub_82434CF8(ctx, base);
	// b 0x82432d4c
	goto loc_82432D4C;
loc_82432D28:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,-26632(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82432D34;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82432d48
	if (ctx.cr6.eq) goto loc_82432D48;
	// bl 0x82431878
	ctx.lr = 0x82432D40;
	sub_82431878(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82432d4c
	goto loc_82432D4C;
loc_82432D48:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82432D4C:
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r5,0(r24)
	PPC_STORE_U16(ctx.r24.u32 + 0, ctx.r5.u16);
	// beq cr6,0x82432d7c
	if (ctx.cr6.eq) goto loc_82432D7C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfic r5,r29,-1
	ctx.xer.ca = ctx.r29.u32 <= 4294967295;
	ctx.r5.s64 = -1 - ctx.r29.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82434d20
	ctx.lr = 0x82432D7C;
	sub_82434D20(ctx, base);
loc_82432D7C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82433da0
	ctx.lr = 0x82432D88;
	sub_82433DA0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82450718
	ctx.lr = 0x82432D98;
	sub_82450718(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r11,r3,r22
	ctx.r11.u64 = ctx.r3.u64 + ctx.r22.u64;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82432dc4
	if (!ctx.cr6.eq) goto loc_82432DC4;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82432DC4;
	sub_8242BCD0(ctx, base);
loc_82432DC4:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r7,r8,r22
	ctx.r7.u64 = ctx.r8.u64 + ctx.r22.u64;
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82432df0
	if (!ctx.cr6.eq) goto loc_82432DF0;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82432DF0;
	sub_8242BCD0(ctx, base);
loc_82432DF0:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r11,r3,r22
	ctx.r11.u64 = ctx.r3.u64 + ctx.r22.u64;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82432e1c
	if (!ctx.cr6.eq) goto loc_82432E1C;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82432E1C;
	sub_8242BCD0(ctx, base);
loc_82432E1C:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8259bb24
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82432E28"))) PPC_WEAK_FUNC(sub_82432E28);
PPC_FUNC_IMPL(__imp__sub_82432E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82432E30;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,8344
	ctx.r30.s64 = ctx.r11.s64 + 8344;
	// lis r26,152
	ctx.r26.s64 = 9961472;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r26,r26,38527
	ctx.r26.u64 = ctx.r26.u64 | 38527;
	// li r27,-1
	ctx.r27.s64 = -1;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// bne cr6,0x82432eb4
	if (!ctx.cr6.eq) goto loc_82432EB4;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r31,-26376(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26376);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// bne cr6,0x82433098
	if (!ctx.cr6.eq) goto loc_82433098;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82432EA8;
	sub_8242BCD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82432EB4:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// addi r31,r11,-24144
	ctx.r31.s64 = ctx.r11.s64 + -24144;
	// blt cr6,0x82432ee0
	if (ctx.cr6.lt) goto loc_82432EE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// bl 0x8242c678
	ctx.lr = 0x82432EDC;
	sub_8242C678(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82432EE0:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82432f04
	if (ctx.cr6.lt) goto loc_82432F04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// bl 0x8242c678
	ctx.lr = 0x82432F00;
	sub_8242C678(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82432F04:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8242cc78
	ctx.lr = 0x82432F10;
	sub_8242CC78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82435e08
	ctx.lr = 0x82432F18;
	sub_82435E08(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x82432f24
	if (!ctx.cr6.lt) goto loc_82432F24;
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
loc_82432F24:
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lis r25,-32044
	ctx.r25.s64 = -2100035584;
	// lwz r31,-23984(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23984);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82432fb4
	if (ctx.cr6.eq) goto loc_82432FB4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,-23984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23984, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r9,r4,8192
	ctx.r9.u64 = ctx.r4.u64 | 536870912;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82432f70
	if (ctx.cr6.lt) goto loc_82432F70;
	// rlwinm r11,r9,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82432f88
	goto loc_82432F88;
loc_82432F70:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_82432F88:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82432fa0
	if (ctx.cr6.eq) goto loc_82432FA0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82432FA0:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82432fd8
	if (!ctx.cr6.eq) goto loc_82432FD8;
	// bl 0x82434cf8
	ctx.lr = 0x82432FB0;
	sub_82434CF8(ctx, base);
	// b 0x82432fd8
	goto loc_82432FD8;
loc_82432FB4:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,-26632(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82432FC0;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82432fd4
	if (ctx.cr6.eq) goto loc_82432FD4;
	// bl 0x82431878
	ctx.lr = 0x82432FCC;
	sub_82431878(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82432fd8
	goto loc_82432FD8;
loc_82432FD4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82432FD8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82435fd0
	ctx.lr = 0x82432FEC;
	sub_82435FD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r30,r3,65535
	ctx.r30.u64 = ctx.r3.u64 | 65535;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x82433038
	if (!ctx.cr6.eq) goto loc_82433038;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82433038;
	sub_8242BCD0(ctx, base);
loc_82433038:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r5,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8243306c
	if (!ctx.cr6.eq) goto loc_8243306C;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8243306C;
	sub_8242BCD0(ctx, base);
loc_8243306C:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82433098
	if (!ctx.cr6.eq) goto loc_82433098;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82433098;
	sub_8242BCD0(ctx, base);
loc_82433098:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824330A4"))) PPC_WEAK_FUNC(sub_824330A4);
PPC_FUNC_IMPL(__imp__sub_824330A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824330A8"))) PPC_WEAK_FUNC(sub_824330A8);
PPC_FUNC_IMPL(__imp__sub_824330A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf0
	ctx.lr = 0x824330B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r11,8344
	ctx.r28.s64 = ctx.r11.s64 + 8344;
	// lis r27,152
	ctx.r27.s64 = 9961472;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r27,r27,38527
	ctx.r27.u64 = ctx.r27.u64 | 38527;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// bne cr6,0x82433134
	if (!ctx.cr6.eq) goto loc_82433134;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r31,-26376(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26376);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// bne cr6,0x82433344
	if (!ctx.cr6.eq) goto loc_82433344;
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82433128;
	sub_8242BCD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
loc_82433134:
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// addi r31,r11,-24144
	ctx.r31.s64 = ctx.r11.s64 + -24144;
	// blt cr6,0x82433160
	if (ctx.cr6.lt) goto loc_82433160;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// bl 0x8242c678
	ctx.lr = 0x8243315C;
	sub_8242C678(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82433160:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82433184
	if (ctx.cr6.lt) goto loc_82433184;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r5,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// bl 0x8242c678
	ctx.lr = 0x82433180;
	sub_8242C678(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82433184:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82433198
	if (!ctx.cr6.gt) goto loc_82433198;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82433198:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x824331a4
	if (!ctx.cr6.lt) goto loc_824331A4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_824331A4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x824331b0
	if (!ctx.cr6.lt) goto loc_824331B0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_824331B0:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x824331c4
	if (!ctx.cr6.gt) goto loc_824331C4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_824331C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8242cc78
	ctx.lr = 0x824331D0;
	sub_8242CC78(ctx, base);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lis r26,-32044
	ctx.r26.s64 = -2100035584;
	// lwz r31,-23984(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23984);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82433260
	if (ctx.cr6.eq) goto loc_82433260;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,-23984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23984, ctx.r11.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r9,r4,8192
	ctx.r9.u64 = ctx.r4.u64 | 536870912;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8243321c
	if (ctx.cr6.lt) goto loc_8243321C;
	// rlwinm r11,r9,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82433234
	goto loc_82433234;
loc_8243321C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_82433234:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r6,r28
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8243324c
	if (ctx.cr6.eq) goto loc_8243324C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8243324C:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82433284
	if (!ctx.cr6.eq) goto loc_82433284;
	// bl 0x82434cf8
	ctx.lr = 0x8243325C;
	sub_82434CF8(ctx, base);
	// b 0x82433284
	goto loc_82433284;
loc_82433260:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,-26632(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8243326C;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82433280
	if (ctx.cr6.eq) goto loc_82433280;
	// bl 0x82431878
	ctx.lr = 0x82433278;
	sub_82431878(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82433284
	goto loc_82433284;
loc_82433280:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82433284:
	// subf r6,r29,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r29.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82435fd0
	ctx.lr = 0x82433298;
	sub_82435FD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r30,r3,65535
	ctx.r30.u64 = ctx.r3.u64 | 65535;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x824332e4
	if (!ctx.cr6.eq) goto loc_824332E4;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x824332E4;
	sub_8242BCD0(ctx, base);
loc_824332E4:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r5,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82433318
	if (!ctx.cr6.eq) goto loc_82433318;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82433318;
	sub_8242BCD0(ctx, base);
loc_82433318:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82433344
	if (!ctx.cr6.eq) goto loc_82433344;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82433344;
	sub_8242BCD0(ctx, base);
loc_82433344:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8259bb40
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82433350"))) PPC_WEAK_FUNC(sub_82433350);
PPC_FUNC_IMPL(__imp__sub_82433350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82433358;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,8344
	ctx.r30.s64 = ctx.r11.s64 + 8344;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// bl 0x8242cc78
	ctx.lr = 0x8243337C;
	sub_8242CC78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82436418
	ctx.lr = 0x82433384;
	sub_82436418(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// lwz r31,-23984(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23984);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82433418
	if (ctx.cr6.eq) goto loc_82433418;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,-23984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -23984, ctx.r10.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 536870912;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x824333d0
	if (ctx.cr6.lt) goto loc_824333D0;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x824333e8
	goto loc_824333E8;
loc_824333D0:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_824333E8:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82433400
	if (ctx.cr6.eq) goto loc_82433400;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82433400:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8243343c
	if (!ctx.cr6.eq) goto loc_8243343C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82434cf8
	ctx.lr = 0x82433414;
	sub_82434CF8(ctx, base);
	// b 0x8243343c
	goto loc_8243343C;
loc_82433418:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82433424;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82433438
	if (ctx.cr6.eq) goto loc_82433438;
	// bl 0x82431878
	ctx.lr = 0x82433430;
	sub_82431878(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8243343c
	goto loc_8243343C;
loc_82433438:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8243343C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r30,r8,65535
	ctx.r30.u64 = ctx.r8.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r3,r5,r30
	ctx.r3.u64 = ctx.r5.u64 + ctx.r30.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x82433484
	if (!ctx.cr6.eq) goto loc_82433484;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82433484;
	sub_8242BCD0(ctx, base);
loc_82433484:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x824334b8
	if (!ctx.cr6.eq) goto loc_824334B8;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x824334B8;
	sub_8242BCD0(ctx, base);
loc_824334B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824334C4"))) PPC_WEAK_FUNC(sub_824334C4);
PPC_FUNC_IMPL(__imp__sub_824334C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824334C8"))) PPC_WEAK_FUNC(sub_824334C8);
PPC_FUNC_IMPL(__imp__sub_824334C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x824334D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,8344
	ctx.r30.s64 = ctx.r11.s64 + 8344;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// bl 0x8242cc78
	ctx.lr = 0x824334F4;
	sub_8242CC78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82436598
	ctx.lr = 0x824334FC;
	sub_82436598(ctx, base);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lis r28,-32044
	ctx.r28.s64 = -2100035584;
	// lwz r31,-23984(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23984);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82433590
	if (ctx.cr6.eq) goto loc_82433590;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,-23984(r11)
	PPC_STORE_U32(ctx.r11.u32 + -23984, ctx.r10.u32);
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 536870912;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82433548
	if (ctx.cr6.lt) goto loc_82433548;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x82433560
	goto loc_82433560;
loc_82433548:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_82433560:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82433578
	if (ctx.cr6.eq) goto loc_82433578;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82433578:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824335b4
	if (!ctx.cr6.eq) goto loc_824335B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82434cf8
	ctx.lr = 0x8243358C;
	sub_82434CF8(ctx, base);
	// b 0x824335b4
	goto loc_824335B4;
loc_82433590:
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x8243359C;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824335b0
	if (ctx.cr6.eq) goto loc_824335B0;
	// bl 0x82431878
	ctx.lr = 0x824335A8;
	sub_82431878(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x824335b4
	goto loc_824335B4;
loc_824335B0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_824335B4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r30,r8,65535
	ctx.r30.u64 = ctx.r8.u64 | 65535;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r3,r5,r30
	ctx.r3.u64 = ctx.r5.u64 + ctx.r30.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x824335fc
	if (!ctx.cr6.eq) goto loc_824335FC;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x824335FC;
	sub_8242BCD0(ctx, base);
loc_824335FC:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 + ctx.r30.u64;
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82433630
	if (!ctx.cr6.eq) goto loc_82433630;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82433630;
	sub_8242BCD0(ctx, base);
loc_82433630:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243363C"))) PPC_WEAK_FUNC(sub_8243363C);
PPC_FUNC_IMPL(__imp__sub_8243363C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82433640"))) PPC_WEAK_FUNC(sub_82433640);
PPC_FUNC_IMPL(__imp__sub_82433640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bafc
	ctx.lr = 0x82433648;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82433d90
	if (ctx.cr6.eq) goto loc_82433D90;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lhz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// bl 0x82431260
	ctx.lr = 0x82433668;
	sub_82431260(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82433d90
	if (ctx.cr6.eq) goto loc_82433D90;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x82433d90
	if (ctx.cr6.gt) goto loc_82433D90;
	// lis r12,-32189
	ctx.r12.s64 = -2109538304;
	// addi r12,r12,13976
	ctx.r12.s64 = ctx.r12.s64 + 13976;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_824336CC;
	case 1:
		goto loc_82433850;
	case 2:
		goto loc_824338C0;
	case 3:
		goto loc_82433930;
	case 4:
		goto loc_824339A0;
	case 5:
		goto loc_82433A10;
	case 6:
		goto loc_82433A80;
	case 7:
		goto loc_82433AF0;
	case 8:
		goto loc_82433B60;
	case 9:
		goto loc_82433BD0;
	case 10:
		goto loc_82433C40;
	case 11:
		goto loc_82433CB0;
	case 12:
		goto loc_82433D20;
	default:
		__builtin_unreachable();
	}
	// lwz r18,14028(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14028);
	// lwz r18,14416(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14416);
	// lwz r18,14528(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14528);
	// lwz r18,14640(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14640);
	// lwz r18,14752(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14752);
	// lwz r18,14864(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14864);
	// lwz r18,14976(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14976);
	// lwz r18,15088(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15088);
	// lwz r18,15200(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15200);
	// lwz r18,15312(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15312);
	// lwz r18,15424(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15424);
	// lwz r18,15536(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15536);
	// lwz r18,15648(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15648);
loc_824336CC:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// bl 0x8242cc78
	ctx.lr = 0x824336F0;
	sub_8242CC78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82435e08
	ctx.lr = 0x824336F8;
	sub_82435E08(ctx, base);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r29,-32044
	ctx.r29.s64 = -2100035584;
	// lwz r11,-23260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82433774
	if (ctx.cr6.eq) goto loc_82433774;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,-23260(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23260, ctx.r9.u32);
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r8,r9,8192
	ctx.r8.u64 = ctx.r9.u64 | 536870912;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,-26592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26592);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82433750
	if (ctx.cr6.lt) goto loc_82433750;
	// rlwinm r6,r8,0,3,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// b 0x82433814
	goto loc_82433814;
loc_82433750:
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stwx r11,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// b 0x82433814
	goto loc_82433814;
loc_82433774:
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82433780;
	sub_8242BB48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82433810
	if (ctx.cr6.eq) goto loc_82433810;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r12,-17408
	ctx.r12.s64 = -1140850688;
	// addi r11,r11,-10172
	ctx.r11.s64 = ctx.r11.s64 + -10172;
	// ori r12,r12,135
	ctx.r12.u64 = ctx.r12.u64 | 135;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// oris r9,r10,11264
	ctx.r9.u64 = ctx.r10.u64 | 738197504;
	// ori r9,r9,7
	ctx.r9.u64 = ctx.r9.u64 | 7;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r11,-26592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26592);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x824337d4
	if (ctx.cr6.lt) goto loc_824337D4;
	// rlwinm r7,r9,0,3,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// b 0x824337ec
	goto loc_824337EC;
loc_824337D4:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_824337EC:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r11,r11,-7660
	ctx.r11.s64 = ctx.r11.s64 + -7660;
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x82433814
	goto loc_82433814;
loc_82433810:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82433814:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 65536;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82433844
	if (!ctx.cr6.eq) goto loc_82433844;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82433844;
	sub_8242BCD0(ctx, base);
loc_82433844:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82433850:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82433d94
	if (!ctx.cr6.eq) goto loc_82433D94;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x82433870;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82433888
	if (ctx.cr6.eq) goto loc_82433888;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,7560
	ctx.r4.s64 = ctx.r11.s64 + 7560;
	// bl 0x821ad188
	ctx.lr = 0x82433884;
	sub_821AD188(ctx, base);
	// b 0x8243388c
	goto loc_8243388C;
loc_82433888:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243388C:
	// stw r3,-26252(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26252, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r4,8,18,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,-26252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26252);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824338B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26252);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_824338C0:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26248);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82433d94
	if (!ctx.cr6.eq) goto loc_82433D94;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x824338E0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824338f8
	if (ctx.cr6.eq) goto loc_824338F8;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,7968
	ctx.r4.s64 = ctx.r11.s64 + 7968;
	// bl 0x821ad188
	ctx.lr = 0x824338F4;
	sub_821AD188(ctx, base);
	// b 0x824338fc
	goto loc_824338FC;
loc_824338F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824338FC:
	// stw r3,-26248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26248, ctx.r3.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r7,r8,8,18,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0x3F00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r3,-26248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26248);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82433924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26248);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82433930:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82433d94
	if (!ctx.cr6.eq) goto loc_82433D94;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x82433950;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82433968
	if (ctx.cr6.eq) goto loc_82433968;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,8512
	ctx.r4.s64 = ctx.r11.s64 + 8512;
	// bl 0x821ad188
	ctx.lr = 0x82433964;
	sub_821AD188(ctx, base);
	// b 0x8243396c
	goto loc_8243396C;
loc_82433968:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243396C:
	// stw r3,-26244(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26244, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r4,8,18,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,-26244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26244);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82433994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26244);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_824339A0:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82433d94
	if (!ctx.cr6.eq) goto loc_82433D94;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x824339C0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824339d8
	if (ctx.cr6.eq) goto loc_824339D8;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,9024
	ctx.r4.s64 = ctx.r11.s64 + 9024;
	// bl 0x821ad188
	ctx.lr = 0x824339D4;
	sub_821AD188(ctx, base);
	// b 0x824339dc
	goto loc_824339DC;
loc_824339D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824339DC:
	// stw r3,-26240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26240, ctx.r3.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r7,r8,8,18,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0x3F00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r3,-26240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26240);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82433A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26240);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82433A10:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82433d94
	if (!ctx.cr6.eq) goto loc_82433D94;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x82433A30;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82433a48
	if (ctx.cr6.eq) goto loc_82433A48;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,6616
	ctx.r4.s64 = ctx.r11.s64 + 6616;
	// bl 0x821ad188
	ctx.lr = 0x82433A44;
	sub_821AD188(ctx, base);
	// b 0x82433a4c
	goto loc_82433A4C;
loc_82433A48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82433A4C:
	// stw r3,-26236(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26236, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r4,8,18,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,-26236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26236);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82433A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26236);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82433A80:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82433d94
	if (!ctx.cr6.eq) goto loc_82433D94;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x82433AA0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82433ab8
	if (ctx.cr6.eq) goto loc_82433AB8;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,5584
	ctx.r4.s64 = ctx.r11.s64 + 5584;
	// bl 0x821ad188
	ctx.lr = 0x82433AB4;
	sub_821AD188(ctx, base);
	// b 0x82433abc
	goto loc_82433ABC;
loc_82433AB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82433ABC:
	// stw r3,-26232(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26232, ctx.r3.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r7,r8,8,18,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0x3F00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r3,-26232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26232);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82433AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26232);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82433AF0:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82433d94
	if (!ctx.cr6.eq) goto loc_82433D94;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x82433B10;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82433b28
	if (ctx.cr6.eq) goto loc_82433B28;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,9528
	ctx.r4.s64 = ctx.r11.s64 + 9528;
	// bl 0x821ad188
	ctx.lr = 0x82433B24;
	sub_821AD188(ctx, base);
	// b 0x82433b2c
	goto loc_82433B2C;
loc_82433B28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82433B2C:
	// stw r3,-26228(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26228, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r4,8,18,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,-26228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26228);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82433B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26228);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82433B60:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82433d94
	if (!ctx.cr6.eq) goto loc_82433D94;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x82433B80;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82433b98
	if (ctx.cr6.eq) goto loc_82433B98;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,10344
	ctx.r4.s64 = ctx.r11.s64 + 10344;
	// bl 0x821ad188
	ctx.lr = 0x82433B94;
	sub_821AD188(ctx, base);
	// b 0x82433b9c
	goto loc_82433B9C;
loc_82433B98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82433B9C:
	// stw r3,-26224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26224, ctx.r3.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r7,r8,8,18,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0x3F00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r3,-26224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26224);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82433BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26224);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82433BD0:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82433d94
	if (!ctx.cr6.eq) goto loc_82433D94;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x82433BF0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82433c08
	if (ctx.cr6.eq) goto loc_82433C08;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,11816
	ctx.r4.s64 = ctx.r11.s64 + 11816;
	// bl 0x821ad188
	ctx.lr = 0x82433C04;
	sub_821AD188(ctx, base);
	// b 0x82433c0c
	goto loc_82433C0C;
loc_82433C08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82433C0C:
	// stw r3,-26220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26220, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r4,8,18,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,-26220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26220);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82433C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26220);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82433C40:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82433d94
	if (!ctx.cr6.eq) goto loc_82433D94;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x82433C60;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82433c78
	if (ctx.cr6.eq) goto loc_82433C78;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,12456
	ctx.r4.s64 = ctx.r11.s64 + 12456;
	// bl 0x821ad188
	ctx.lr = 0x82433C74;
	sub_821AD188(ctx, base);
	// b 0x82433c7c
	goto loc_82433C7C;
loc_82433C78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82433C7C:
	// stw r3,-26216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26216, ctx.r3.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r7,r8,8,18,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0x3F00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r3,-26216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26216);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82433CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26216);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82433CB0:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82433d94
	if (!ctx.cr6.eq) goto loc_82433D94;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x82433CD0;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82433ce8
	if (ctx.cr6.eq) goto loc_82433CE8;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,13136
	ctx.r4.s64 = ctx.r11.s64 + 13136;
	// bl 0x821ad188
	ctx.lr = 0x82433CE4;
	sub_821AD188(ctx, base);
	// b 0x82433cec
	goto loc_82433CEC;
loc_82433CE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82433CEC:
	// stw r3,-26212(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26212, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r4,8,18,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,-26212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26212);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82433D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26212);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82433D20:
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// lwz r3,-26208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82433d94
	if (!ctx.cr6.eq) goto loc_82433D94;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,-26620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26620);
	// bl 0x8242b338
	ctx.lr = 0x82433D40;
	sub_8242B338(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82433d58
	if (ctx.cr6.eq) goto loc_82433D58;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r4,r11,13512
	ctx.r4.s64 = ctx.r11.s64 + 13512;
	// bl 0x821ad188
	ctx.lr = 0x82433D54;
	sub_821AD188(ctx, base);
	// b 0x82433d5c
	goto loc_82433D5C;
loc_82433D58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82433D5C:
	// stw r3,-26208(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26208, ctx.r3.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r7,r8,8,18,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0x3F00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r3,-26208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26208);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82433D84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-26208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26208);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
loc_82433D90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82433D94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb4c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82433D9C"))) PPC_WEAK_FUNC(sub_82433D9C);
PPC_FUNC_IMPL(__imp__sub_82433D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82433DA0"))) PPC_WEAK_FUNC(sub_82433DA0);
PPC_FUNC_IMPL(__imp__sub_82433DA0) {
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
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addis r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 65536;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x82433e0c
	if (!ctx.cr6.eq) goto loc_82433E0C;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82433E00;
	sub_8242BCD0(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// b 0x82433e14
	goto loc_82433E14;
loc_82433E0C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
loc_82433E14:
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

__attribute__((alias("__imp__sub_82433E2C"))) PPC_WEAK_FUNC(sub_82433E2C);
PPC_FUNC_IMPL(__imp__sub_82433E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82433E30"))) PPC_WEAK_FUNC(sub_82433E30);
PPC_FUNC_IMPL(__imp__sub_82433E30) {
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
	// bl 0x824316c0
	ctx.lr = 0x82433E50;
	sub_824316C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82433e70
	if (ctx.cr6.eq) goto loc_82433E70;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82433E70;
	sub_8242BCD0(ctx, base);
loc_82433E70:
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

__attribute__((alias("__imp__sub_82433E8C"))) PPC_WEAK_FUNC(sub_82433E8C);
PPC_FUNC_IMPL(__imp__sub_82433E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82433E90"))) PPC_WEAK_FUNC(sub_82433E90);
PPC_FUNC_IMPL(__imp__sub_82433E90) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82433f08
	if (ctx.cr6.eq) goto loc_82433F08;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// rlwinm r30,r10,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82433EC8;
	sub_8242BB48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,-9
	ctx.r8.s64 = ctx.r8.s64 + -9;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r8,4(r6)
	PPC_STORE_U16(ctx.r6.u32 + 4, ctx.r8.u16);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r10,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r10.u16);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r10,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, ctx.r10.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// b 0x82433f20
	goto loc_82433F20;
loc_82433F08:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_82433F20:
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

__attribute__((alias("__imp__sub_82433F3C"))) PPC_WEAK_FUNC(sub_82433F3C);
PPC_FUNC_IMPL(__imp__sub_82433F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82433F40"))) PPC_WEAK_FUNC(sub_82433F40);
PPC_FUNC_IMPL(__imp__sub_82433F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baf8
	ctx.lr = 0x82433F48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82433fe0
	if (ctx.cr6.eq) goto loc_82433FE0;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// lis r11,-32044
	ctx.r11.s64 = -2100035584;
	// rlwinm r29,r10,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-26632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26632);
	// bl 0x8242bb48
	ctx.lr = 0x82433F78;
	sub_8242BB48(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addis r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 65536;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r8,r8,-9
	ctx.r8.s64 = ctx.r8.s64 + -9;
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r8,4(r6)
	PPC_STORE_U16(ctx.r6.u32 + 4, ctx.r8.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// beq cr6,0x82433fb4
	if (ctx.cr6.eq) goto loc_82433FB4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_82433FA8:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82433fa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82433FA8;
loc_82433FB4:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r30,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r30.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r10,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
loc_82433FE0:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8259bb48
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82434004"))) PPC_WEAK_FUNC(sub_82434004);
PPC_FUNC_IMPL(__imp__sub_82434004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82434008"))) PPC_WEAK_FUNC(sub_82434008);
PPC_FUNC_IMPL(__imp__sub_82434008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259baec
	ctx.lr = 0x82434010;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lhz r31,2(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8243404c
	if (!ctx.cr6.eq) goto loc_8243404C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_8243404C:
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lhz r29,2(r8)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82434078
	if (!ctx.cr6.eq) goto loc_82434078;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
loc_82434078:
	// add r28,r29,r31
	ctx.r28.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82433e90
	ctx.lr = 0x82434088;
	sub_82433E90(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r30,r5,8
	ctx.r30.s64 = ctx.r5.s64 + 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x824340A4;
	sub_8259D3A0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x824340B8;
	sub_8259D3A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stbx r11,r4,r31
	PPC_STORE_U8(ctx.r4.u32 + ctx.r31.u32, ctx.r11.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r28,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r28.u16);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// sth r11,6(r9)
	PPC_STORE_U16(ctx.r9.u32 + 6, ctx.r11.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addis r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82434120
	if (!ctx.cr6.eq) goto loc_82434120;
	// lis r10,-32044
	ctx.r10.s64 = -2100035584;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// lwz r3,-26632(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26632);
	// bl 0x8242bcd0
	ctx.lr = 0x82434120;
	sub_8242BCD0(ctx, base);
loc_82434120:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb3c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243412C"))) PPC_WEAK_FUNC(sub_8243412C);
PPC_FUNC_IMPL(__imp__sub_8243412C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82434130"))) PPC_WEAK_FUNC(sub_82434130);
PPC_FUNC_IMPL(__imp__sub_82434130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8243414C"))) PPC_WEAK_FUNC(sub_8243414C);
PPC_FUNC_IMPL(__imp__sub_8243414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82434150"))) PPC_WEAK_FUNC(sub_82434150);
PPC_FUNC_IMPL(__imp__sub_82434150) {
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
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x824341b8
	if (!ctx.cr6.lt) goto loc_824341B8;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82434184
	if (!ctx.cr6.lt) goto loc_82434184;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82434184:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8259d9b8
	ctx.lr = 0x82434190;
	sub_8259D9B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824341b8
	if (ctx.cr6.eq) goto loc_824341B8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
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
loc_824341B8:
	// li r3,-1
	ctx.r3.s64 = -1;
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

__attribute__((alias("__imp__sub_824341D0"))) PPC_WEAK_FUNC(sub_824341D0);
PPC_FUNC_IMPL(__imp__sub_824341D0) {
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
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8243423c
	if (!ctx.cr6.lt) goto loc_8243423C;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x82434204
	if (!ctx.cr6.lt) goto loc_82434204;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82434204:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8259e910
	ctx.lr = 0x82434214;
	sub_8259E910(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243423c
	if (ctx.cr6.eq) goto loc_8243423C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
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
loc_8243423C:
	// li r3,-1
	ctx.r3.s64 = -1;
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

__attribute__((alias("__imp__sub_82434254"))) PPC_WEAK_FUNC(sub_82434254);
PPC_FUNC_IMPL(__imp__sub_82434254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82434258"))) PPC_WEAK_FUNC(sub_82434258);
PPC_FUNC_IMPL(__imp__sub_82434258) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82434260"))) PPC_WEAK_FUNC(sub_82434260);
PPC_FUNC_IMPL(__imp__sub_82434260) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82434268"))) PPC_WEAK_FUNC(sub_82434268);
PPC_FUNC_IMPL(__imp__sub_82434268) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82434270"))) PPC_WEAK_FUNC(sub_82434270);
PPC_FUNC_IMPL(__imp__sub_82434270) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82434278"))) PPC_WEAK_FUNC(sub_82434278);
PPC_FUNC_IMPL(__imp__sub_82434278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bad0
	ctx.lr = 0x82434280;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82434298:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82434298
	if (!ctx.cr6.eq) goto loc_82434298;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rotlwi r25,r8,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x824342c8
	if (!ctx.cr6.eq) goto loc_824342C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb20
	__restgprlr_18(ctx, base);
	return;
loc_824342C8:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_824342D0:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824342d0
	if (!ctx.cr6.eq) goto loc_824342D0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// rotlwi r27,r6,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// bl 0x8259d9b8
	ctx.lr = 0x82434304;
	sub_8259D9B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243432c
	if (ctx.cr6.eq) goto loc_8243432C;
loc_8243430C:
	// add r3,r3,r25
	ctx.r3.u64 = ctx.r3.u64 + ctx.r25.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// bl 0x8259d9b8
	ctx.lr = 0x8243431C;
	sub_8259D9B8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8243430c
	if (!ctx.cr6.eq) goto loc_8243430C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82434338
	if (!ctx.cr6.eq) goto loc_82434338;
loc_8243432C:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb20
	__restgprlr_18(ctx, base);
	return;
loc_82434338:
	// lwz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// subf r4,r25,r27
	ctx.r4.s64 = ctx.r27.s64 - ctx.r25.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mullw r11,r4,r22
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r22.s32);
	// lhz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82433e90
	ctx.lr = 0x82434358;
	sub_82433E90(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r23,r3,8
	ctx.r23.s64 = ctx.r3.s64 + 8;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// ble cr6,0x824343cc
	if (!ctx.cr6.gt) goto loc_824343CC;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_82434378:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259d9b8
	ctx.lr = 0x82434384;
	sub_8259D9B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// subf r28,r30,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r30.s64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x824343a8
	if (ctx.cr6.eq) goto loc_824343A8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x824343A4;
	sub_8259D3A0(ctx, base);
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
loc_824343A8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r26,r25
	ctx.r30.u64 = ctx.r26.u64 + ctx.r25.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x824343BC;
	sub_8259D3A0(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82434378
	if (!ctx.cr6.eq) goto loc_82434378;
loc_824343CC:
	// subf r11,r31,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r31.s64;
	// add r29,r11,r24
	ctx.r29.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x824343f0
	if (ctx.cr6.eq) goto loc_824343F0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d3a0
	ctx.lr = 0x824343EC;
	sub_8259D3A0(ctx, base);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
loc_824343F0:
	// stb r18,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r18.u8);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r31,-32044
	ctx.r31.s64 = -2100035584;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// sth r24,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r24.u16);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r18,6(r8)
	PPC_STORE_U16(ctx.r8.u32 + 6, ctx.r18.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// add r3,r5,r30
	ctx.r3.u64 = ctx.r5.u64 + ctx.r30.u64;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8243444c
	if (!ctx.cr6.eq) goto loc_8243444C;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8243444C;
	sub_8242BCD0(ctx, base);
loc_8243444C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82434480
	if (!ctx.cr6.eq) goto loc_82434480;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lwz r3,-26632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x82434480;
	sub_8242BCD0(ctx, base);
loc_82434480:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8259bb20
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8243448C"))) PPC_WEAK_FUNC(sub_8243448C);
PPC_FUNC_IMPL(__imp__sub_8243448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82434490"))) PPC_WEAK_FUNC(sub_82434490);
PPC_FUNC_IMPL(__imp__sub_82434490) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsb r31,r4
	ctx.r31.s64 = ctx.r4.s8;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8259e910
	ctx.lr = 0x824344BC;
	sub_8259E910(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824344e4
	if (ctx.cr6.eq) goto loc_824344E4;
loc_824344C8:
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8259e910
	ctx.lr = 0x824344D8;
	sub_8259E910(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824344c8
	if (!ctx.cr6.eq) goto loc_824344C8;
loc_824344E4:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82434500"))) PPC_WEAK_FUNC(sub_82434500);
PPC_FUNC_IMPL(__imp__sub_82434500) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8243450C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8243450c
	if (!ctx.cr6.eq) goto loc_8243450C;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lhz r6,2(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82434540
	if (!ctx.cr6.lt) goto loc_82434540;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82434540:
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82434574
	if (ctx.cr6.eq) goto loc_82434574;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82434554:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r4,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82434574
	if (!ctx.cr0.eq) goto loc_82434574;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82434554
	if (!ctx.cr6.eq) goto loc_82434554;
loc_82434574:
	// cntlzw r3,r8
	ctx.r3.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82434580"))) PPC_WEAK_FUNC(sub_82434580);
PPC_FUNC_IMPL(__imp__sub_82434580) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lhz r8,2(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
loc_82434594:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82434594
	if (!ctx.cr6.eq) goto loc_82434594;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824345c0
	if (!ctx.cr6.lt) goto loc_824345C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824345C0:
	// subf r11,r10,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// beq cr6,0x824345fc
	if (ctx.cr6.eq) goto loc_824345FC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_824345DC:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824345fc
	if (!ctx.cr0.eq) goto loc_824345FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824345dc
	if (!ctx.cr6.eq) goto loc_824345DC;
loc_824345FC:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82434608"))) PPC_WEAK_FUNC(sub_82434608);
PPC_FUNC_IMPL(__imp__sub_82434608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8259bae4
	ctx.lr = 0x82434610;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r23,0(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8243468c
	if (!ctx.cr6.eq) goto loc_8243468C;
	// lhz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r23.u32 + 4);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8243468c
	if (ctx.cr6.gt) goto loc_8243468C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8243465c
	if (ctx.cr6.eq) goto loc_8243465C;
	// addi r3,r23,8
	ctx.r3.s64 = ctx.r23.s64 + 8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// bl 0x8259dd00
	ctx.lr = 0x8243465C;
	sub_8259DD00(ctx, base);
loc_8243465C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// sth r29,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r29.u16);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r30,6(r7)
	PPC_STORE_U16(ctx.r7.u32 + 6, ctx.r30.u16);
	// beq cr6,0x8243475c
	if (ctx.cr6.eq) goto loc_8243475C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r30,8(r6)
	PPC_STORE_U8(ctx.r6.u32 + 8, ctx.r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
loc_8243468C:
	// addi r27,r23,8
	ctx.r27.s64 = ctx.r23.s64 + 8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lis r24,-32044
	ctx.r24.s64 = -2100035584;
	// beq cr6,0x82434714
	if (ctx.cr6.eq) goto loc_82434714;
	// rlwinm r11,r4,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r3,-26632(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26632);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// rlwinm r30,r5,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8242bb48
	ctx.lr = 0x824346B8;
	sub_8242BB48(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r9,-9
	ctx.r9.s64 = ctx.r9.s64 + -9;
	// add r4,r27,r28
	ctx.r4.u64 = ctx.r27.u64 + ctx.r28.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r9,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r9.u16);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r29,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r29.u16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// sth r30,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r30.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8259d3a0
	ctx.lr = 0x824346FC;
	sub_8259D3A0(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8243472c
	if (ctx.cr6.eq) goto loc_8243472C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r30,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r30.u8);
	// b 0x8243472c
	goto loc_8243472C;
loc_82434714:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r11,r11,8344
	ctx.r11.s64 = ctx.r11.s64 + 8344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_8243472C:
	// lhz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r11.u16);
	// bne cr6,0x8243475c
	if (!ctx.cr6.eq) goto loc_8243475C;
	// lhz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 4);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,-26632(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -26632);
	// addi r5,r11,9
	ctx.r5.s64 = ctx.r11.s64 + 9;
	// bl 0x8242bcd0
	ctx.lr = 0x8243475C;
	sub_8242BCD0(ctx, base);
loc_8243475C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8259bb34
	__restgprlr_23(ctx, base);
	return;
}

